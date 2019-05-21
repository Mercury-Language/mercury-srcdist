/*
** Automatically generated from `deforest.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
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
#include "hlds.passes_aux.mih"
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
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
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



struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s {
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10;
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14;
  MR_bool transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_84_84;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20;
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_28;
  jmp_buf transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_89_89;
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_34;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_35;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_36;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_39;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_40;
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_41;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_51;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_52;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_53;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_88;
  MR_Box transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_34;
};

struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s {
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2;
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3;
  MR_bool transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23;
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__Var_32;
  jmp_buf transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0;
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41;
  MR_Box transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41;
};

struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s {
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2;
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3;
  MR_bool transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23;
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__Var_32;
  jmp_buf transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0;
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41;
  MR_Box transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41;
};

struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s {
  MR_bool transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
  jmp_buf transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_66_66;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41;
  MR_Box transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36;
};

struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s {
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9;
  MR_bool transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13;
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_18;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_19;
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_22;
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_23;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_35;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_36;
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_37;
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_41;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_95;
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_96;
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_49;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_51;
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_49;
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_52;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_53;
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_53;
};


static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_VA_TypeInfo_Struct4 transform_hlds__deforest____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0[6];

static const MR_DuFunctorDesc transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0[1];

static const MR_Integer transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0[1];

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2);

static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box transform_hlds__deforest__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2);

static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box transform_hlds__deforest__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2);

static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box transform_hlds__deforest__wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1654__1_3_p_0(
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_29,
  MR_Word transform_hlds__deforest__LambdaHeadVar__2_30,
  MR_Word * transform_hlds__deforest__LambdaHeadVar__3_31);

static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__644__1_3_p_0(
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_22,
  MR_Word transform_hlds__deforest__LambdaHeadVar__2_23,
  MR_Word * transform_hlds__deforest__LambdaHeadVar__3_24);

static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__505__1_1_p_0(
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_46);

static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforestation__151__1_2_p_0(
  MR_Word transform_hlds__deforest__FoundErrors_25,
  MR_Word transform_hlds__deforest__HeadVar__2_47);

static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2);

static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2);

static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2);

static void MR_CALL 
transform_hlds__deforest__call_call_2_7_p_0_2(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box * transform_hlds__deforest__wrapper_arg_2);

static void MR_CALL 
transform_hlds__deforest__call_call_2_7_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box * transform_hlds__deforest__wrapper_arg_2);

static void MR_CALL 
transform_hlds__deforest__call_call_2_7_p_0(
  MR_Word transform_hlds__deforest__ConjNonLocals_8,
  MR_Word transform_hlds__deforest__EarlierGoal_9,
  MR_Word transform_hlds__deforest__BetweenGoals_10,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_46);

static void MR_CALL 
transform_hlds__deforest__try_generalisation_11_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_12,
  MR_Word transform_hlds__deforest__BetweenGoals_13,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_14,
  MR_Word transform_hlds__deforest__FoldGoal_15,
  MR_Word transform_hlds__deforest__ConjNonLocals_16,
  MR_Word transform_hlds__deforest__ProcPair_17,
  MR_Integer transform_hlds__deforest__Size_18,
  MR_Word transform_hlds__deforest__CoveringPredProcId_19,
  MR_Word * transform_hlds__deforest__MaybeGoal_20,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_43,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_44);

static MR_bool MR_CALL 
transform_hlds__deforest__match_generalised_version_12_p_0(
  MR_Word transform_hlds__deforest__ModuleInfo_13,
  MR_Word transform_hlds__deforest__VersionGoal_14,
  MR_Word transform_hlds__deforest__VersionArgs_15,
  MR_Word transform_hlds__deforest__VersionArgTypes_16,
  MR_Word transform_hlds__deforest__FirstGoal_17,
  MR_Word transform_hlds__deforest__BetweenGoals_18,
  MR_Word transform_hlds__deforest__MaybeLastGoal_19,
  MR_Word transform_hlds__deforest__ConjNonLocals_20,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_VarSet_0_82,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_VarTypes_0_83,
  MR_Word transform_hlds__deforest__Versions_23,
  MR_Word * transform_hlds__deforest__Renaming_24);

static void MR_CALL 
transform_hlds__deforest__do_generalisation_14_p_0(
  MR_Word transform_hlds__deforest__VersionArgs_15,
  MR_Word transform_hlds__deforest__Renaming_16,
  MR_Word transform_hlds__deforest__VersionInstMap_17,
  MR_Word transform_hlds__deforest__EarlierGoal_18,
  MR_Word transform_hlds__deforest__BetweenGoals_19,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_20,
  MR_Word transform_hlds__deforest__FoldGoal_21,
  MR_Word transform_hlds__deforest__ConjNonLocals_22,
  MR_Word transform_hlds__deforest__ProcPair_23,
  MR_Integer transform_hlds__deforest__Size_24,
  MR_Word transform_hlds__deforest__Generalised_25,
  MR_Word * transform_hlds__deforest__MaybeGoal_26,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_39,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_40);

static MR_bool MR_CALL 
transform_hlds__deforest__try_MSG_6_p_0(
  MR_Word transform_hlds__deforest__ModuleInfo_1,
  MR_Word transform_hlds__deforest__VersionInstMap_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3,
  MR_Word transform_hlds__deforest__Renaming_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_InstMap_0_5,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_InstMap_6);

static void MR_CALL 
transform_hlds__deforest__create_call_goal_7_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__VersionInfo_10,
  MR_Word transform_hlds__deforest__Renaming_11,
  MR_Word transform_hlds__deforest__TypeSubn_12,
  MR_Word * transform_hlds__deforest__Goal_13,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_46);

static void MR_CALL 
transform_hlds__deforest__create_deforest_call_args_9_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__Renaming_3,
  MR_Word transform_hlds__deforest__TypeSubn_4,
  MR_Word * transform_hlds__deforest__HeadVar__5_5,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_VarSet_0_6,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_VarSet_7,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_VarTypes_0_8,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_VarTypes_9);

static void MR_CALL 
transform_hlds__deforest__create_deforest_goal_12_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_13,
  MR_Word transform_hlds__deforest__BetweenGoals_14,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
  MR_Word transform_hlds__deforest__FoldGoal0_16,
  MR_Word transform_hlds__deforest__NonLocals_17,
  MR_Word transform_hlds__deforest__RunModes_18,
  MR_Word transform_hlds__deforest__ProcPair_19,
  MR_Integer transform_hlds__deforest__Size_20,
  MR_Word transform_hlds__deforest__MaybeGeneralised_21,
  MR_Word * transform_hlds__deforest__MaybeCallGoal_22,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);

static void MR_CALL 
transform_hlds__deforest__create_conj_5_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_6,
  MR_Word transform_hlds__deforest__BetweenGoals_7,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_8,
  MR_Word transform_hlds__deforest__NonLocals_9,
  MR_Word * transform_hlds__deforest__FoldGoal_10);

static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
  MR_Word transform_hlds__deforest__PredProcId_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);

static void MR_CALL 
transform_hlds__deforest__deforest_proc_deltas_5_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Integer * transform_hlds__deforest__CostDelta_8,
  MR_Integer * transform_hlds__deforest__SizeDelta_9,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_25,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_26);

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
  MR_Word transform_hlds__deforest__PredId_10,
  MR_Integer transform_hlds__deforest__ProcId_11,
  MR_Word transform_hlds__deforest__Args_12,
  MR_Word transform_hlds__deforest__SymName_13,
  MR_Word transform_hlds__deforest__BuiltinState_14,
  MR_Word transform_hlds__deforest__Goal0_15,
  MR_Word * transform_hlds__deforest__Goal_16,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_46,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_47);

static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
  MR_Word transform_hlds__deforest__Goal0_10,
  MR_Word transform_hlds__deforest__BetweenGoals_11,
  MR_Word transform_hlds__deforest__GoalToAppend0_12,
  MR_Word transform_hlds__deforest__NonLocals0_13,
  MR_Integer transform_hlds__deforest__CurrBranch_14,
  MR_Word transform_hlds__deforest__Branches_15,
  MR_Word * transform_hlds__deforest__Goal_16,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_31);

static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
  MR_Word transform_hlds__deforest__Var_1,
  MR_Word transform_hlds__deforest__BetweenGoals_2,
  MR_Word transform_hlds__deforest__GoalToAppend_3,
  MR_Word transform_hlds__deforest__NonLocals_4,
  MR_Integer transform_hlds__deforest__CurrCase_5,
  MR_Word transform_hlds__deforest__Branches_6,
  MR_Word transform_hlds__deforest__HeadVar__7_7,
  MR_Word * transform_hlds__deforest__HeadVar__8_8,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_10);

static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
  MR_Word transform_hlds__deforest__BetweenGoals_1,
  MR_Word transform_hlds__deforest__GoalToAppend_2,
  MR_Word transform_hlds__deforest__NonLocals_3,
  MR_Integer transform_hlds__deforest__CurrBranch_4,
  MR_Word transform_hlds__deforest__Branches_5,
  MR_Word transform_hlds__deforest__HeadVar__6_6,
  MR_Word * transform_hlds__deforest__HeadVar__7_7,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);

static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
  MR_Word transform_hlds__deforest__NonLocals_9,
  MR_Word transform_hlds__deforest__DeforestInfo_10,
  MR_Word transform_hlds__deforest__EarlierGoal_11,
  MR_Word transform_hlds__deforest__BetweenGoals_12,
  MR_Word transform_hlds__deforest__LaterGoal_13,
  MR_Word * transform_hlds__deforest__Goal_14,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_88);

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
  MR_Word transform_hlds__deforest__NonLocals_10,
  MR_Word transform_hlds__deforest__DeforestInfo0_11,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85,
  MR_Word * transform_hlds__deforest__Optimized_14,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);

static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__NonLocals_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3,
  MR_Word * transform_hlds__deforest__HeadVar__4_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6);

static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word * transform_hlds__deforest__Goals_3,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);

static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
  MR_Word transform_hlds__deforest__Var_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word * transform_hlds__deforest__HeadVar__3_3,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);

static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);

static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
  MR_Word transform_hlds__deforest__GoalExpr0_7,
  MR_Word * transform_hlds__deforest__GoalExpr_8,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);

static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
  MR_Word transform_hlds__deforest__Goal0_5,
  MR_Word * transform_hlds__deforest__Goal_6,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_13);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
  MR_Word transform_hlds__deforest__TypeInfo_for_T_11,
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2);

static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
  MR_Word transform_hlds__deforest__CheckImprovement_11,
  MR_Word transform_hlds__deforest__CheckVars_12,
  MR_Word transform_hlds__deforest__PredId_13,
  MR_Integer transform_hlds__deforest__ProcId_14,
  MR_Word transform_hlds__deforest__Args_15,
  MR_Word transform_hlds__deforest__Goal0_16,
  MR_Word * transform_hlds__deforest__Goal_17,
  MR_Word * transform_hlds__deforest__Optimized_18,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);

static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Integer transform_hlds__deforest__Size_6,
  MR_Integer transform_hlds__deforest__OriginalCost_7,
  MR_Integer transform_hlds__deforest__CostDelta_8);

static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1);

static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
  MR_Word transform_hlds__deforest__DeforestInfo0_6,
  MR_Word * transform_hlds__deforest__DeforestInfo_7,
  MR_Word * transform_hlds__deforest__BeforeIrrelevant_8,
  MR_Word * transform_hlds__deforest__AfterIrrelevant_9,
  MR_Word transform_hlds__deforest__PDInfo_10);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
  MR_Word transform_hlds__deforest__ModuleInfo_2,
  MR_Word transform_hlds__deforest__FullyStrict_3,
  MR_Word transform_hlds__deforest__HeadVar__4_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
  MR_Word transform_hlds__deforest__EndGoal_7,
  MR_Word transform_hlds__deforest__HeadVar__8_8,
  MR_Word * transform_hlds__deforest__HeadVar__9_9);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
  MR_Word transform_hlds__deforest__ModuleInfo_2,
  MR_Word transform_hlds__deforest__FullyStrict_3,
  MR_Word transform_hlds__deforest__HeadVar__4_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
  MR_Word transform_hlds__deforest__EndGoal_7,
  MR_Word transform_hlds__deforest__HeadVar__8_8,
  MR_Word * transform_hlds__deforest__HeadVar__9_9);

static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
  MR_Word transform_hlds__deforest__NonLocals0_8,
  MR_Word transform_hlds__deforest__DeforestInfo_9,
  MR_Word transform_hlds__deforest__RevBeforeGoals_10,
  MR_Word transform_hlds__deforest__BeforeIrrelevant_11,
  MR_Word transform_hlds__deforest__AfterIrrelevant_12,
  MR_Word transform_hlds__deforest__AfterGoals0_13,
  MR_Word * transform_hlds__deforest__SubConjNonLocals_14);

static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
  MR_Word transform_hlds__deforest__PDInfo_6,
  MR_Word transform_hlds__deforest__Optimized0_7,
  MR_Integer transform_hlds__deforest__CostDelta0_8,
  MR_Integer transform_hlds__deforest__SizeDelta0_9);

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
  MR_Word transform_hlds__deforest__DeforestInfo_5,
  MR_Word * transform_hlds__deforest__ShouldTry_6,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_47,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_48);

static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_7,
  MR_Word transform_hlds__deforest__EarlierBranchInfo_8,
  MR_Word transform_hlds__deforest__RevBetweenGoals0_9,
  MR_Word transform_hlds__deforest__HeadVar__4_4,
  MR_Word * transform_hlds__deforest__Goals_12,
  MR_Word * transform_hlds__deforest__DeforestInfo_13);

static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1);

static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__NonLocals_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3,
  MR_Word * transform_hlds__deforest__Goals_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6);

static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_9,
  MR_Word transform_hlds__deforest__BetweenGoals_10,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_16);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
  void * transform_hlds__deforest__env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_7,
  MR_Word transform_hlds__deforest__BetweenGoals_8,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_9,
  MR_Word * transform_hlds__deforest__ShouldTry_10,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_55,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_56);

static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1);

static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(
  MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27,
  MR_Word transform_hlds__deforest__RevBeforeGoals_11,
  MR_Word transform_hlds__deforest__BeforeIrrelevant_12,
  MR_Word transform_hlds__deforest__EarlierGoal_13,
  MR_Word transform_hlds__deforest__BetweenGoals_14,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
  MR_Word transform_hlds__deforest__AfterIrrelevant_16,
  MR_Word transform_hlds__deforest__AfterGoals_17,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28);

static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);

static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
  MR_Word transform_hlds__deforest__PredProcId_8,
  MR_Word transform_hlds__deforest__ProcInfo_9,
  MR_Word * transform_hlds__deforest__ProcInfo_3,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16,
  MR_Word transform_hlds__deforest__UnivProcArgInfo0_11,
  MR_Word * transform_hlds__deforest__UnivProcArgInfo_12);

static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
  MR_Word transform_hlds__deforest__PredProcId_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_13);

static MR_bool MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_4(
  MR_Box transform_hlds__deforest__closure_arg);

static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_3(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_2(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3,
  MR_Box transform_hlds__deforest__wrapper_arg_4,
  MR_Box * transform_hlds__deforest__wrapper_arg_5,
  MR_Box transform_hlds__deforest__wrapper_arg_6,
  MR_Box * transform_hlds__deforest__wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__deforest_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_3[7][6];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_4[1][10];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_5[2][5];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_6[2][4];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_7[1][1];




static /* final */ const MR_Box transform_hlds__deforest_scalar_common_1[11][2] = {
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_2[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_2[14][3] = {
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
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__deforest__propagate_conj_constraints_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__deforest__search_for_deforest_goal_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__deforest__handle_deforestation_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__deforest__handle_deforestation_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__deforest__append_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__deforest__call_call_2_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_3[7][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[8]))
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_6[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_3[6])),
    ((MR_Box) (transform_hlds__deforest__call_call_2_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "Parents: "))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_annotated_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

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

const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_can_move_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[1] = {
  &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

static const MR_DuPtagLayout transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0[1] = {
  &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0
};

static const MR_Integer transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_deforest_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__deforest__succeeded;

    {
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____annotated_conj_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box transform_hlds__deforest__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

    {
      transform_hlds__deforest____Compare____annotated_conj_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__deforest__succeeded;

    {
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____can_move_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box transform_hlds__deforest__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

    {
      transform_hlds__deforest____Compare____can_move_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__deforest__succeeded;

    {
      transform_hlds__deforest__succeeded = transform_hlds__deforest____Unify____deforest_info_0_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2));
    }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
  MR_Box * transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box transform_hlds__deforest__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__deforest__conv0_HeadVar__1_1;

    {
      transform_hlds__deforest____Compare____deforest_info_0_0(&transform_hlds__deforest__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__deforest__wrapper_arg_2), ((MR_Word) transform_hlds__deforest__wrapper_arg_3));
    }
    *transform_hlds__deforest__wrapper_arg_1 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1654__1_3_p_0(
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_29,
  MR_Word transform_hlds__deforest__LambdaHeadVar__2_30,
  MR_Word * transform_hlds__deforest__LambdaHeadVar__3_31)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_29, (MR_Integer) 1)));
    MR_Word transform_hlds__deforest__GoalNonLocals_25;
    MR_Word transform_hlds__deforest__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_29, (MR_Integer) 0)));

    {
      transform_hlds__deforest__GoalNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo_24);
    }
    {
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__GoalNonLocals_25, transform_hlds__deforest__LambdaHeadVar__2_30, transform_hlds__deforest__LambdaHeadVar__3_31);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__644__1_3_p_0(
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_22,
  MR_Word transform_hlds__deforest__LambdaHeadVar__2_23,
  MR_Word * transform_hlds__deforest__LambdaHeadVar__3_24)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__Branches1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_22, (MR_Integer) 1)));
    MR_Word transform_hlds__deforest__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_22, (MR_Integer) 0)));

    {
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__deforest__LambdaHeadVar__2_23, transform_hlds__deforest__Branches1_20, transform_hlds__deforest__LambdaHeadVar__3_24);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__505__1_1_p_0(
  MR_Word transform_hlds__deforest__LambdaHeadVar__1_46)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__CnstrGoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_46, (MR_Integer) 1)));
    MR_Word transform_hlds__deforest__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LambdaHeadVar__1_46, (MR_Integer) 0)));

    {
      transform_hlds__deforest__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__deforest__CnstrGoalInfo_30, (MR_Integer) 0);
    }
    return transform_hlds__deforest__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforestation__151__1_2_p_0(
  MR_Word transform_hlds__deforest__FoundErrors_25,
  MR_Word transform_hlds__deforest__HeadVar__2_47)
{
  {
    MR_bool transform_hlds__deforest__succeeded = (transform_hlds__deforest__FoundErrors_25 == transform_hlds__deforest__HeadVar__2_47);

    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Integer transform_hlds__deforest__CastX_21 = (MR_Integer) transform_hlds__deforest__HeadVar__2_2;
    MR_Integer transform_hlds__deforest__CastY_22 = (MR_Integer) transform_hlds__deforest__HeadVar__3_3;

    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CastX_21 == transform_hlds__deforest__CastY_22);
    if (transform_hlds__deforest__succeeded)
      *transform_hlds__deforest__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__deforest__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__deforest__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__deforest__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__deforest__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__deforest__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__deforest__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__deforest__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__deforest__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word transform_hlds__deforest__Var_16;

        {
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__deforest__Var_16, transform_hlds__deforest__ArgX1_4, transform_hlds__deforest__ArgY1_5);
        }
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__Var_16 == (MR_Integer) 0);
        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
        if (transform_hlds__deforest__succeeded)
          *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__Var_16;
        else
          {
            MR_Word transform_hlds__deforest__Var_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[2], &transform_hlds__deforest__Var_17, ((MR_Box) (transform_hlds__deforest__ArgX2_6)), ((MR_Box) (transform_hlds__deforest__ArgY2_7)));
            }
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Var_17 == (MR_Integer) 0);
            transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
            if (transform_hlds__deforest__succeeded)
              *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__Var_17;
            else
              {
                MR_Word transform_hlds__deforest__Var_18;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[8], &transform_hlds__deforest__Var_18, ((MR_Box) (transform_hlds__deforest__ArgX3_8)), ((MR_Box) (transform_hlds__deforest__ArgY3_9)));
                }
                transform_hlds__deforest__succeeded = (transform_hlds__deforest__Var_18 == (MR_Integer) 0);
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
                if (transform_hlds__deforest__succeeded)
                  *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__Var_18;
                else
                  {
                    MR_Word transform_hlds__deforest__Var_19;

                    {
                      hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__deforest__Var_19, transform_hlds__deforest__ArgX4_10, transform_hlds__deforest__ArgY4_11);
                    }
                    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Var_19 == (MR_Integer) 0);
                    transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
                    if (transform_hlds__deforest__succeeded)
                      *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__Var_19;
                    else
                      {
                        MR_Word transform_hlds__deforest__Var_20;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[2], &transform_hlds__deforest__Var_20, ((MR_Box) (transform_hlds__deforest__ArgX5_12)), ((MR_Box) (transform_hlds__deforest__ArgY5_13)));
                        }
                        transform_hlds__deforest__succeeded = (transform_hlds__deforest__Var_20 == (MR_Integer) 0);
                        transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
                        if (transform_hlds__deforest__succeeded)
                          *transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__Var_20;
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[4], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__ArgX6_14)), ((MR_Box) (transform_hlds__deforest__ArgY6_15)));
                            }
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Integer transform_hlds__deforest__CastX_15 = (MR_Integer) transform_hlds__deforest__HeadVar__1_1;
    MR_Integer transform_hlds__deforest__CastY_16 = (MR_Integer) transform_hlds__deforest__HeadVar__2_2;

    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CastX_15 == transform_hlds__deforest__CastY_16);
    if (transform_hlds__deforest__succeeded)
      transform_hlds__deforest__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__deforest__TypeInfo_18_18;
        MR_Word transform_hlds__deforest__TypeInfo_19_19;
        MR_Word transform_hlds__deforest__TypeInfo_21_21;
        MR_Word transform_hlds__deforest__TypeInfo_22_22;
        MR_Word transform_hlds__deforest__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__deforest__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__deforest__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__deforest__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__deforest__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__deforest__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__deforest__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word transform_hlds__deforest__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 5)));

        {
          transform_hlds__deforest__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__deforest__ArgX1_3, transform_hlds__deforest__ArgY1_4);
        }
        if (transform_hlds__deforest__succeeded)
          {
            transform_hlds__deforest__TypeInfo_18_18 = (MR_Word) &transform_hlds__deforest_scalar_common_1[2];
            {
              transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_18_18, ((MR_Box) (transform_hlds__deforest__ArgX2_5)), ((MR_Box) (transform_hlds__deforest__ArgY2_6)));
            }
            if (transform_hlds__deforest__succeeded)
              {
                transform_hlds__deforest__TypeInfo_19_19 = (MR_Word) &transform_hlds__deforest_scalar_common_1[8];
                {
                  transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_19_19, ((MR_Box) (transform_hlds__deforest__ArgX3_7)), ((MR_Box) (transform_hlds__deforest__ArgY3_8)));
                }
                if (transform_hlds__deforest__succeeded)
                  {
                    {
                      transform_hlds__deforest__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__deforest__ArgX4_9, transform_hlds__deforest__ArgY4_10);
                    }
                    if (transform_hlds__deforest__succeeded)
                      {
                        transform_hlds__deforest__TypeInfo_21_21 = (MR_Word) &transform_hlds__deforest_scalar_common_1[2];
                        {
                          transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_21_21, ((MR_Box) (transform_hlds__deforest__ArgX5_11)), ((MR_Box) (transform_hlds__deforest__ArgY5_12)));
                        }
                        if (transform_hlds__deforest__succeeded)
                          {
                            transform_hlds__deforest__TypeInfo_22_22 = (MR_Word) &transform_hlds__deforest_scalar_common_1[4];
                            {
                              transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_22_22, ((MR_Box) (transform_hlds__deforest__ArgX6_13)), ((MR_Box) (transform_hlds__deforest__ArgY6_14)));
                            }
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__Cast_HeadVar1_4 = transform_hlds__deforest__HeadVar__2_2;
    MR_Word transform_hlds__deforest__Cast_HeadVar2_5 = transform_hlds__deforest__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_3[0], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__Cast_HeadVar1_3 = transform_hlds__deforest__HeadVar__1_1;
    MR_Word transform_hlds__deforest__Cast_HeadVar2_4 = transform_hlds__deforest__HeadVar__2_2;

    {
      transform_hlds__deforest__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) transform_hlds__deforest__Cast_HeadVar1_3, (MR_Word) transform_hlds__deforest__Cast_HeadVar2_4);
    }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
  MR_Word * transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__Cast_HeadVar1_4 = transform_hlds__deforest__HeadVar__2_2;
    MR_Word transform_hlds__deforest__Cast_HeadVar2_5 = transform_hlds__deforest__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[7], transform_hlds__deforest__HeadVar__1_1, ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__Cast_HeadVar1_3 = transform_hlds__deforest__HeadVar__1_1;
    MR_Word transform_hlds__deforest__Cast_HeadVar2_4 = transform_hlds__deforest__HeadVar__2_2;

    {
      transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[7], ((MR_Box) (transform_hlds__deforest__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__deforest__Cast_HeadVar2_4)));
    }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest__call_call_2_7_p_0_2(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box * transform_hlds__deforest__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__call_call_2_7_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box * transform_hlds__deforest__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__call_call_2_7_p_0(
  MR_Word transform_hlds__deforest__ConjNonLocals_8,
  MR_Word transform_hlds__deforest__EarlierGoal_9,
  MR_Word transform_hlds__deforest__BetweenGoals_10,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_46)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__FoldGoal_14;
    MR_Word transform_hlds__deforest__MaybeVersion_15;
    MR_Word transform_hlds__deforest__Parents_16;
    MR_Word transform_hlds__deforest__ModuleInfo_17;
    MR_Word transform_hlds__deforest__Globals_18;
    MR_Word transform_hlds__deforest__DebugPD_19;
    MR_Word transform_hlds__deforest__VersionPredProcId_21;
    MR_Word transform_hlds__deforest__VersionInfo_22;
    MR_Word transform_hlds__deforest__Renaming_23;
    MR_Word transform_hlds__deforest__TypeRenaming_24;
    MR_Word transform_hlds__deforest__Var_20;

    {
      transform_hlds__deforest__create_conj_5_p_0(transform_hlds__deforest__EarlierGoal_9, transform_hlds__deforest__BetweenGoals_10, transform_hlds__deforest__MaybeLaterGoal_11, transform_hlds__deforest__ConjNonLocals_8, &transform_hlds__deforest__FoldGoal_14);
    }
    {
      transform_hlds__pd_info__search_version_3_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, transform_hlds__deforest__FoldGoal_14, &transform_hlds__deforest__MaybeVersion_15);
    }
    {
      transform_hlds__pd_info__pd_info_get_parent_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__Parents_16);
    }
    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__ModuleInfo_17);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_17, &transform_hlds__deforest__Globals_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_18, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_19);
    }
    transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__MaybeVersion_15)) == (MR_mktag((MR_Integer) 1)));
    if (transform_hlds__deforest__succeeded)
      {
        transform_hlds__deforest__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeVersion_15, (MR_Integer) 0)));
        transform_hlds__deforest__VersionPredProcId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeVersion_15, (MR_Integer) 1)));
        transform_hlds__deforest__VersionInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeVersion_15, (MR_Integer) 2)));
        transform_hlds__deforest__Renaming_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeVersion_15, (MR_Integer) 3)));
        transform_hlds__deforest__TypeRenaming_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeVersion_15, (MR_Integer) 4)));
        {
          MR_Word transform_hlds__deforest__VersionPredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionPredProcId_21, (MR_Integer) 0)));
          MR_Word transform_hlds__deforest__ModuleInfo0_27;
          MR_String transform_hlds__deforest__FoldPredName_28;
          MR_Integer transform_hlds__deforest__FoldCostDelta_30;
          MR_Integer transform_hlds__deforest__NegSizeDelta_31;
          MR_Integer transform_hlds__deforest__SizeDelta_32;
          MR_Word transform_hlds__deforest__Goal_33;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_54_54;
          MR_Word transform_hlds__deforest__Var_55;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_56_56;
          MR_Integer transform_hlds__deforest__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionPredProcId_21, (MR_Integer) 1)));
          MR_Word transform_hlds__deforest__Var_50;
          MR_Word transform_hlds__deforest__Var_52;

          {
            transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__ModuleInfo0_27);
          }
          {
            transform_hlds__deforest__FoldPredName_28 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo0_27, transform_hlds__deforest__VersionPredId_25);
          }
          {
            transform_hlds__deforest__Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_52, 0) = ((MR_Box) (transform_hlds__deforest__FoldPredName_28));
          }
          {
            transform_hlds__deforest__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_50, 0) = ((MR_Box) (transform_hlds__deforest__Var_52));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_19, (MR_String) "Folded with %s\n", transform_hlds__deforest__Var_50);
          }
          {
            transform_hlds__deforest__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__deforest__VersionPredProcId_21)), transform_hlds__deforest__Parents_16);
          }
          if (transform_hlds__deforest__succeeded)
            {
              transform_hlds__deforest__FoldCostDelta_30 = transform_hlds__pd_cost__cost_of_recursive_fold_0_f_0();
            }
          else
            {
              transform_hlds__deforest__FoldCostDelta_30 = transform_hlds__pd_cost__cost_of_fold_0_f_0();
            }
          {
            transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(transform_hlds__deforest__FoldCostDelta_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_54_54);
          }
          {
            transform_hlds__deforest__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_55, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_9));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_55, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_10));
          }
          {
            hlds__goal_util__goals_size_2_p_0(transform_hlds__deforest__Var_55, &transform_hlds__deforest__NegSizeDelta_31);
          }
          transform_hlds__deforest__SizeDelta_32 = ((MR_Integer) 0 - transform_hlds__deforest__NegSizeDelta_31);
          {
            transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDelta_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_54_54, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_56_56);
          }
          {
            transform_hlds__deforest__create_call_goal_7_p_0(transform_hlds__deforest__VersionPredProcId_21, transform_hlds__deforest__VersionInfo_22, transform_hlds__deforest__Renaming_23, transform_hlds__deforest__TypeRenaming_24, &transform_hlds__deforest__Goal_33, transform_hlds__deforest__STATE_VARIABLE_PDInfo_56_56, transform_hlds__deforest__STATE_VARIABLE_PDInfo_46);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__deforest__MaybeGoal_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_33));
          }
        }
      }
    else
      {
        MR_Word transform_hlds__deforest__TermInfo0_34;
        MR_Word transform_hlds__deforest__ParentVersions0_35;
        MR_Word transform_hlds__deforest__Versions_36;
        MR_Word transform_hlds__deforest__InstMap_37;
        MR_Word transform_hlds__deforest__TermInfo_38;
        MR_Word transform_hlds__deforest__CheckResult_39;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77;

        {
          transform_hlds__pd_info__pd_info_get_global_term_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__TermInfo0_34);
        }
        {
          transform_hlds__pd_info__pd_info_get_parent_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__ParentVersions0_35);
        }
        {
          transform_hlds__pd_debug__pd_debug_do_io_4_p_0(transform_hlds__deforest__DebugPD_19, (MR_Word) &transform_hlds__deforest_scalar_common_6[1]);
        }
        {
          transform_hlds__pd_debug__pd_debug_write_4_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[5], transform_hlds__deforest__DebugPD_19, ((MR_Box) (transform_hlds__deforest__ParentVersions0_35)));
        }
        {
          transform_hlds__pd_debug__pd_debug_do_io_4_p_0(transform_hlds__deforest__DebugPD_19, (MR_Word) &transform_hlds__deforest_scalar_common_2[13]);
        }
        {
          transform_hlds__pd_info__pd_info_get_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__Versions_36);
        }
        {
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__InstMap_37);
        }
        {
          transform_hlds__pd_term__global_check_9_p_0(transform_hlds__deforest__ModuleInfo_17, transform_hlds__deforest__EarlierGoal_9, transform_hlds__deforest__BetweenGoals_10, transform_hlds__deforest__MaybeLaterGoal_11, transform_hlds__deforest__InstMap_37, transform_hlds__deforest__Versions_36, transform_hlds__deforest__TermInfo0_34, &transform_hlds__deforest__TermInfo_38, &transform_hlds__deforest__CheckResult_39);
        }
        switch (MR_tag((MR_Word) transform_hlds__deforest__CheckResult_39)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_19, (MR_String) "global termination check failed\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              *transform_hlds__deforest__MaybeGoal_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__deforest__ProcPair_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__CheckResult_39, (MR_Integer) 0)));
              MR_Integer transform_hlds__deforest__Size_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__CheckResult_39, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76;

              {
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_19, (MR_String) "global termination check succeeded - creating new version\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              {
                transform_hlds__pd_info__pd_info_set_global_term_info_3_p_0(transform_hlds__deforest__TermInfo_38, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76);
              }
              {
                transform_hlds__deforest__create_deforest_goal_12_p_0(transform_hlds__deforest__EarlierGoal_9, transform_hlds__deforest__BetweenGoals_10, transform_hlds__deforest__MaybeLaterGoal_11, transform_hlds__deforest__FoldGoal_14, transform_hlds__deforest__ConjNonLocals_8, (MR_Integer) 0, transform_hlds__deforest__ProcPair_40, transform_hlds__deforest__Size_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__MaybeGoal_12, transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__deforest__CoveringPredProcId_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__CheckResult_39, (MR_Integer) 2)));
              MR_Word transform_hlds__deforest__ProcPair_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__CheckResult_39, (MR_Integer) 0)));
              MR_Integer transform_hlds__deforest__Size_80 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__CheckResult_39, (MR_Integer) 1)));

              {
                transform_hlds__deforest__try_generalisation_11_p_0(transform_hlds__deforest__EarlierGoal_9, transform_hlds__deforest__BetweenGoals_10, transform_hlds__deforest__MaybeLaterGoal_11, transform_hlds__deforest__FoldGoal_14, transform_hlds__deforest__ConjNonLocals_8, transform_hlds__deforest__ProcPair_79, transform_hlds__deforest__Size_80, transform_hlds__deforest__CoveringPredProcId_44, transform_hlds__deforest__MaybeGoal_12, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77);
              }
            }
            break;
        }
        {
          transform_hlds__pd_info__pd_info_set_global_term_info_3_p_0(transform_hlds__deforest__TermInfo0_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77, transform_hlds__deforest__STATE_VARIABLE_PDInfo_46);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__try_generalisation_11_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_12,
  MR_Word transform_hlds__deforest__BetweenGoals_13,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_14,
  MR_Word transform_hlds__deforest__FoldGoal_15,
  MR_Word transform_hlds__deforest__ConjNonLocals_16,
  MR_Word transform_hlds__deforest__ProcPair_17,
  MR_Integer transform_hlds__deforest__Size_18,
  MR_Word transform_hlds__deforest__CoveringPredProcId_19,
  MR_Word * transform_hlds__deforest__MaybeGoal_20,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_43,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_44)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__ModuleInfo_22;
    MR_Word transform_hlds__deforest__Globals_23;
    MR_Word transform_hlds__deforest__DebugPD_24;
    MR_Word transform_hlds__deforest__VersionIndex_26;
    MR_Word transform_hlds__deforest__Version_27;
    MR_Word transform_hlds__deforest__VersionGoal_28;
    MR_Word transform_hlds__deforest__VersionArgs_30;
    MR_Word transform_hlds__deforest__VersionArgTypes_31;
    MR_Word transform_hlds__deforest__VersionInstMap_32;
    MR_Word transform_hlds__deforest__Versions_37;
    MR_Word transform_hlds__deforest__ProcInfo_38;
    MR_Word transform_hlds__deforest__VarTypes_39;
    MR_Box transform_hlds__deforest__conv0_Version_27;
    MR_Word transform_hlds__deforest__Var_29;
    MR_Integer transform_hlds__deforest__Var_33;
    MR_Integer transform_hlds__deforest__Var_34;
    MR_Word transform_hlds__deforest__Var_35;
    MR_Word transform_hlds__deforest__Var_36;
    MR_Word transform_hlds__deforest__Renaming_40;
    MR_Word transform_hlds__deforest__Var_41;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_43, &transform_hlds__deforest__ModuleInfo_22);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_22, &transform_hlds__deforest__Globals_23);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_23, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_24);
    }
    {
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_24, (MR_String) "trying generalisation\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      transform_hlds__pd_info__pd_info_get_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_43, &transform_hlds__deforest__VersionIndex_26);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__deforest__VersionIndex_26, ((MR_Box) (transform_hlds__deforest__CoveringPredProcId_19)), &transform_hlds__deforest__conv0_Version_27);
    }
    transform_hlds__deforest__Version_27 = ((MR_Word) transform_hlds__deforest__conv0_Version_27);
    transform_hlds__deforest__VersionGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Version_27, (MR_Integer) 0)));
    transform_hlds__deforest__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Version_27, (MR_Integer) 1)));
    transform_hlds__deforest__VersionArgs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Version_27, (MR_Integer) 2)));
    transform_hlds__deforest__VersionArgTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Version_27, (MR_Integer) 3)));
    transform_hlds__deforest__VersionInstMap_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Version_27, (MR_Integer) 4)));
    transform_hlds__deforest__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Version_27, (MR_Integer) 5)));
    transform_hlds__deforest__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Version_27, (MR_Integer) 6)));
    transform_hlds__deforest__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Version_27, (MR_Integer) 7)));
    transform_hlds__deforest__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Version_27, (MR_Integer) 8)));
    {
      transform_hlds__pd_info__pd_info_get_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_43, &transform_hlds__deforest__Versions_37);
    }
    {
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_43, &transform_hlds__deforest__ProcInfo_38);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__ProcInfo_38, &transform_hlds__deforest__VarTypes_39);
    }
    {
      transform_hlds__deforest__succeeded = transform_hlds__pd_util__goals_match_8_p_0(transform_hlds__deforest__ModuleInfo_22, transform_hlds__deforest__VersionGoal_28, transform_hlds__deforest__VersionArgs_30, transform_hlds__deforest__VersionArgTypes_31, transform_hlds__deforest__FoldGoal_15, transform_hlds__deforest__VarTypes_39, &transform_hlds__deforest__Renaming_40, &transform_hlds__deforest__Var_41);
    }
    if (transform_hlds__deforest__succeeded)
      {
        transform_hlds__deforest__do_generalisation_14_p_0(transform_hlds__deforest__VersionArgs_30, transform_hlds__deforest__Renaming_40, transform_hlds__deforest__VersionInstMap_32, transform_hlds__deforest__EarlierGoal_12, transform_hlds__deforest__BetweenGoals_13, transform_hlds__deforest__MaybeLaterGoal_14, transform_hlds__deforest__FoldGoal_15, transform_hlds__deforest__ConjNonLocals_16, transform_hlds__deforest__ProcPair_17, transform_hlds__deforest__Size_18, transform_hlds__deforest__CoveringPredProcId_19, transform_hlds__deforest__MaybeGoal_20, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_43, transform_hlds__deforest__STATE_VARIABLE_PDInfo_44);
      }
    else
      {
        MR_Word transform_hlds__deforest__Renaming_60;
        MR_Word transform_hlds__deforest__VarSet_42;

        {
          hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__deforest__ProcInfo_38, &transform_hlds__deforest__VarSet_42);
        }
        {
          transform_hlds__deforest__succeeded = transform_hlds__deforest__match_generalised_version_12_p_0(transform_hlds__deforest__ModuleInfo_22, transform_hlds__deforest__VersionGoal_28, transform_hlds__deforest__VersionArgs_30, transform_hlds__deforest__VersionArgTypes_31, transform_hlds__deforest__EarlierGoal_12, transform_hlds__deforest__BetweenGoals_13, transform_hlds__deforest__MaybeLaterGoal_14, transform_hlds__deforest__ConjNonLocals_16, transform_hlds__deforest__VarSet_42, transform_hlds__deforest__VarTypes_39, transform_hlds__deforest__Versions_37, &transform_hlds__deforest__Renaming_60);
        }
        if (transform_hlds__deforest__succeeded)
          {
            {
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_24, (MR_String) "matched with generalised version\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            {
              transform_hlds__deforest__do_generalisation_14_p_0(transform_hlds__deforest__VersionArgs_30, transform_hlds__deforest__Renaming_60, transform_hlds__deforest__VersionInstMap_32, transform_hlds__deforest__EarlierGoal_12, transform_hlds__deforest__BetweenGoals_13, transform_hlds__deforest__MaybeLaterGoal_14, transform_hlds__deforest__FoldGoal_15, transform_hlds__deforest__ConjNonLocals_16, transform_hlds__deforest__ProcPair_17, transform_hlds__deforest__Size_18, transform_hlds__deforest__CoveringPredProcId_19, transform_hlds__deforest__MaybeGoal_20, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_43, transform_hlds__deforest__STATE_VARIABLE_PDInfo_44);
            }
          }
        else
          {
            {
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_24, (MR_String) "goals don\'t match\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            *transform_hlds__deforest__MaybeGoal_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_44 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_43;
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__match_generalised_version_12_p_0(
  MR_Word transform_hlds__deforest__ModuleInfo_13,
  MR_Word transform_hlds__deforest__VersionGoal_14,
  MR_Word transform_hlds__deforest__VersionArgs_15,
  MR_Word transform_hlds__deforest__VersionArgTypes_16,
  MR_Word transform_hlds__deforest__FirstGoal_17,
  MR_Word transform_hlds__deforest__BetweenGoals_18,
  MR_Word transform_hlds__deforest__MaybeLastGoal_19,
  MR_Word transform_hlds__deforest__ConjNonLocals_20,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_VarSet_0_82,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_VarTypes_0_83,
  MR_Word transform_hlds__deforest__Versions_23,
  MR_Word * transform_hlds__deforest__Renaming_24)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__TypeCtorInfo_94_94;
    MR_Word transform_hlds__deforest__TypeCtorInfo_95_95;
    MR_Word transform_hlds__deforest__TypeInfo_96_96;
    MR_Word transform_hlds__deforest__TypeCtorInfo_97_97;
    MR_Word transform_hlds__deforest__TypeInfo_102_102;
    MR_Word transform_hlds__deforest__FirstPredId_25;
    MR_Integer transform_hlds__deforest__FirstProcId_26;
    MR_Word transform_hlds__deforest__FirstArgs_27;
    MR_Word transform_hlds__deforest__FirstVersionInfo_32;
    MR_Word transform_hlds__deforest__FirstVersionGoal_33;
    MR_Word transform_hlds__deforest__FirstVersionArgs_35;
    MR_Word transform_hlds__deforest__MaybeNonGeneralisedVersion_41;
    MR_Word transform_hlds__deforest__NonGeneralisedPredProcId_42;
    MR_Word transform_hlds__deforest__FirstRenaming0_43;
    MR_Word transform_hlds__deforest__FirstVersionVars0_44;
    MR_Word transform_hlds__deforest__FirstVersionVars_45;
    MR_Word transform_hlds__deforest__FirstProcInfo_47;
    MR_Word transform_hlds__deforest__FirstVersionVarSet_48;
    MR_Word transform_hlds__deforest__FirstVersionVarTypes_49;
    MR_Word transform_hlds__deforest__FirstRenaming_50;
    MR_Word transform_hlds__deforest__RenamedFirstVersionGoal_51;
    MR_Word transform_hlds__deforest__NonGeneralisedPredId_52;
    MR_Integer transform_hlds__deforest__NonGeneralisedProcId_53;
    MR_Word transform_hlds__deforest__VersionGoalList_54;
    MR_Word transform_hlds__deforest__NonGeneralisedVersion_61;
    MR_Word transform_hlds__deforest__NonGeneralisedGoal_62;
    MR_Word transform_hlds__deforest__NonGeneralisedArgs_64;
    MR_Word transform_hlds__deforest__NonGeneralisedArgTypes_65;
    MR_Word transform_hlds__deforest__GeneralRenaming_71;
    MR_Word transform_hlds__deforest__TypeRenaming_72;
    MR_Word transform_hlds__deforest__NonGeneralisedPredInfo_73;
    MR_Word transform_hlds__deforest__NewArgs_74;
    MR_Word transform_hlds__deforest__GoalInfo_77;
    MR_Word transform_hlds__deforest__NonGeneralFirstGoalExpr_78;
    MR_Word transform_hlds__deforest__NonGeneralFirstGoal_79;
    MR_Word transform_hlds__deforest__GoalToMatch_80;
    MR_Word transform_hlds__deforest__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstGoal_17, (MR_Integer) 0)));
    MR_Word transform_hlds__deforest__Var_85;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_VarSet_86_86;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_VarTypes_87_87;
    MR_Word transform_hlds__deforest__Var_88;
    MR_Word transform_hlds__deforest__Var_89;
    MR_Word transform_hlds__deforest__Var_90;
    MR_Word transform_hlds__deforest__Var_91;
    MR_Word transform_hlds__deforest__Var_92;
    MR_String transform_hlds__deforest__Var_93;
    MR_Word transform_hlds__deforest__Var_98;
    MR_Integer transform_hlds__deforest__Var_99;
    MR_Word transform_hlds__deforest__Var_100;
    MR_Word transform_hlds__deforest__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstGoal_17, (MR_Integer) 1)));
    MR_Word transform_hlds__deforest__Var_28;
    MR_Word transform_hlds__deforest__Var_29;
    MR_Word transform_hlds__deforest__Var_30;
    MR_Box transform_hlds__deforest__conv0_FirstVersionInfo_32;
    MR_Word transform_hlds__deforest__Var_34;
    MR_Word transform_hlds__deforest__Var_36;
    MR_Word transform_hlds__deforest__Var_37;
    MR_Integer transform_hlds__deforest__Var_38;
    MR_Integer transform_hlds__deforest__Var_39;
    MR_Word transform_hlds__deforest__Var_40;
    MR_Word transform_hlds__deforest__Var_46;
    MR_Word transform_hlds__deforest__Var_60;
    MR_Word transform_hlds__deforest__Var_59;
    MR_Word transform_hlds__deforest__Var_55;
    MR_Word transform_hlds__deforest__Var_56;
    MR_Word transform_hlds__deforest__Var_57;
    MR_Word transform_hlds__deforest__Var_58;
    MR_Box transform_hlds__deforest__conv1_NonGeneralisedVersion_61;
    MR_Word transform_hlds__deforest__Var_63;
    MR_Word transform_hlds__deforest__Var_66;
    MR_Integer transform_hlds__deforest__Var_67;
    MR_Integer transform_hlds__deforest__Var_68;
    MR_Word transform_hlds__deforest__Var_69;
    MR_Word transform_hlds__deforest__Var_70;
    MR_Word transform_hlds__deforest__Var_75;
    MR_Word transform_hlds__deforest__Var_76;
    MR_Word transform_hlds__deforest__Var_81;

    transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_84)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__deforest__succeeded)
      {
        transform_hlds__deforest__FirstPredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_84, (MR_Integer) 0)));
        transform_hlds__deforest__FirstProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_84, (MR_Integer) 1)));
        transform_hlds__deforest__FirstArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_84, (MR_Integer) 2)));
        transform_hlds__deforest__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_84, (MR_Integer) 3)));
        transform_hlds__deforest__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_84, (MR_Integer) 4)));
        transform_hlds__deforest__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_84, (MR_Integer) 5)));
        transform_hlds__deforest__TypeCtorInfo_94_94 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        transform_hlds__deforest__TypeCtorInfo_95_95 = (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0;
        {
          transform_hlds__deforest__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_85, 0) = ((MR_Box) (transform_hlds__deforest__FirstPredId_25));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_85, 1) = ((MR_Box) (transform_hlds__deforest__FirstProcId_26));
        }
        {
          transform_hlds__deforest__succeeded = mercury__map__search_3_p_0(transform_hlds__deforest__TypeCtorInfo_94_94, transform_hlds__deforest__TypeCtorInfo_95_95, transform_hlds__deforest__Versions_23, ((MR_Box) (transform_hlds__deforest__Var_85)), &transform_hlds__deforest__conv0_FirstVersionInfo_32);
        }
        if (transform_hlds__deforest__succeeded)
          {
            transform_hlds__deforest__FirstVersionInfo_32 = ((MR_Word) transform_hlds__deforest__conv0_FirstVersionInfo_32);
            transform_hlds__deforest__succeeded = MR_TRUE;
          }
        if (transform_hlds__deforest__succeeded)
          {
            transform_hlds__deforest__FirstVersionGoal_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstVersionInfo_32, (MR_Integer) 0)));
            transform_hlds__deforest__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstVersionInfo_32, (MR_Integer) 1)));
            transform_hlds__deforest__FirstVersionArgs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstVersionInfo_32, (MR_Integer) 2)));
            transform_hlds__deforest__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstVersionInfo_32, (MR_Integer) 3)));
            transform_hlds__deforest__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstVersionInfo_32, (MR_Integer) 4)));
            transform_hlds__deforest__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstVersionInfo_32, (MR_Integer) 5)));
            transform_hlds__deforest__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstVersionInfo_32, (MR_Integer) 6)));
            transform_hlds__deforest__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstVersionInfo_32, (MR_Integer) 7)));
            transform_hlds__deforest__MaybeNonGeneralisedVersion_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__FirstVersionInfo_32, (MR_Integer) 8)));
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__MaybeNonGeneralisedVersion_41)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__deforest__succeeded)
              {
                transform_hlds__deforest__NonGeneralisedPredProcId_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeNonGeneralisedVersion_41, (MR_Integer) 0)));
                transform_hlds__deforest__TypeInfo_96_96 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
                {
                  mercury__map__from_corresponding_lists_3_p_0(transform_hlds__deforest__TypeInfo_96_96, transform_hlds__deforest__TypeInfo_96_96, transform_hlds__deforest__FirstVersionArgs_35, transform_hlds__deforest__FirstArgs_27, &transform_hlds__deforest__FirstRenaming0_43);
                }
                {
                  hlds__goal_util__goal_vars_2_p_0(transform_hlds__deforest__FirstVersionGoal_33, &transform_hlds__deforest__FirstVersionVars0_44);
                }
                transform_hlds__deforest__TypeCtorInfo_97_97 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__deforest__TypeCtorInfo_97_97, transform_hlds__deforest__FirstVersionVars0_44, &transform_hlds__deforest__FirstVersionVars_45);
                }
                {
                  hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__ModuleInfo_13, transform_hlds__deforest__FirstPredId_25, transform_hlds__deforest__FirstProcId_26, &transform_hlds__deforest__Var_46, &transform_hlds__deforest__FirstProcInfo_47);
                }
                {
                  hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__deforest__FirstProcInfo_47, &transform_hlds__deforest__FirstVersionVarSet_48);
                }
                {
                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__FirstProcInfo_47, &transform_hlds__deforest__FirstVersionVarTypes_49);
                }
                {
                  hlds__goal_util__clone_variables_9_p_0(transform_hlds__deforest__FirstVersionVars_45, transform_hlds__deforest__FirstVersionVarSet_48, transform_hlds__deforest__FirstVersionVarTypes_49, transform_hlds__deforest__STATE_VARIABLE_VarSet_0_82, &transform_hlds__deforest__STATE_VARIABLE_VarSet_86_86, transform_hlds__deforest__STATE_VARIABLE_VarTypes_0_83, &transform_hlds__deforest__STATE_VARIABLE_VarTypes_87_87, transform_hlds__deforest__FirstRenaming0_43, &transform_hlds__deforest__FirstRenaming_50);
                }
                {
                  hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(transform_hlds__deforest__FirstRenaming_50, transform_hlds__deforest__FirstVersionGoal_33, &transform_hlds__deforest__RenamedFirstVersionGoal_51);
                }
                transform_hlds__deforest__NonGeneralisedPredId_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedPredProcId_42, (MR_Integer) 0)));
                transform_hlds__deforest__NonGeneralisedProcId_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedPredProcId_42, (MR_Integer) 1)));
                {
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__VersionGoal_14, &transform_hlds__deforest__VersionGoalList_54);
                }
                transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__VersionGoalList_54)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__deforest__succeeded)
                  {
                    transform_hlds__deforest__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__VersionGoalList_54, (MR_Integer) 0)));
                    transform_hlds__deforest__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__VersionGoalList_54, (MR_Integer) 1)));
                    transform_hlds__deforest__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_88, (MR_Integer) 0)));
                    transform_hlds__deforest__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_88, (MR_Integer) 1)));
                    transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_89)) == (MR_mktag((MR_Integer) 2)));
                    if (transform_hlds__deforest__succeeded)
                      {
                        transform_hlds__deforest__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_89, (MR_Integer) 0)));
                        transform_hlds__deforest__Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_89, (MR_Integer) 1)));
                        transform_hlds__deforest__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_89, (MR_Integer) 2)));
                        transform_hlds__deforest__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_89, (MR_Integer) 3)));
                        transform_hlds__deforest__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_89, (MR_Integer) 4)));
                        transform_hlds__deforest__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_89, (MR_Integer) 5)));
                        {
                          transform_hlds__deforest__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__deforest__NonGeneralisedPredId_52, transform_hlds__deforest__Var_98);
                        }
                        if (transform_hlds__deforest__succeeded)
                          {
                            transform_hlds__deforest__succeeded = (transform_hlds__deforest__NonGeneralisedProcId_53 == transform_hlds__deforest__Var_99);
                            if (transform_hlds__deforest__succeeded)
                              {
                                {
                                  transform_hlds__deforest__succeeded = mercury__map__search_3_p_0(transform_hlds__deforest__TypeCtorInfo_94_94, transform_hlds__deforest__TypeCtorInfo_95_95, transform_hlds__deforest__Versions_23, ((MR_Box) (transform_hlds__deforest__NonGeneralisedPredProcId_42)), &transform_hlds__deforest__conv1_NonGeneralisedVersion_61);
                                }
                                if (transform_hlds__deforest__succeeded)
                                  {
                                    transform_hlds__deforest__NonGeneralisedVersion_61 = ((MR_Word) transform_hlds__deforest__conv1_NonGeneralisedVersion_61);
                                    transform_hlds__deforest__succeeded = MR_TRUE;
                                  }
                                if (transform_hlds__deforest__succeeded)
                                  {
                                    transform_hlds__deforest__NonGeneralisedGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedVersion_61, (MR_Integer) 0)));
                                    transform_hlds__deforest__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedVersion_61, (MR_Integer) 1)));
                                    transform_hlds__deforest__NonGeneralisedArgs_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedVersion_61, (MR_Integer) 2)));
                                    transform_hlds__deforest__NonGeneralisedArgTypes_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedVersion_61, (MR_Integer) 3)));
                                    transform_hlds__deforest__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedVersion_61, (MR_Integer) 4)));
                                    transform_hlds__deforest__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedVersion_61, (MR_Integer) 5)));
                                    transform_hlds__deforest__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedVersion_61, (MR_Integer) 6)));
                                    transform_hlds__deforest__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedVersion_61, (MR_Integer) 7)));
                                    transform_hlds__deforest__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralisedVersion_61, (MR_Integer) 8)));
                                    {
                                      transform_hlds__deforest__succeeded = transform_hlds__pd_util__goals_match_8_p_0(transform_hlds__deforest__ModuleInfo_13, transform_hlds__deforest__NonGeneralisedGoal_62, transform_hlds__deforest__NonGeneralisedArgs_64, transform_hlds__deforest__NonGeneralisedArgTypes_65, transform_hlds__deforest__RenamedFirstVersionGoal_51, transform_hlds__deforest__STATE_VARIABLE_VarTypes_87_87, &transform_hlds__deforest__GeneralRenaming_71, &transform_hlds__deforest__TypeRenaming_72);
                                    }
                                    if (transform_hlds__deforest__succeeded)
                                      {
                                        {
                                          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__deforest__ModuleInfo_13, transform_hlds__deforest__NonGeneralisedPredId_52, &transform_hlds__deforest__NonGeneralisedPredInfo_73);
                                        }
                                        {
                                          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__deforest__NonGeneralisedPredInfo_73, &transform_hlds__deforest__Var_100);
                                        }
                                        transform_hlds__deforest__TypeInfo_102_102 = (MR_Word) &transform_hlds__deforest_scalar_common_1[9];
                                        {
                                          transform_hlds__deforest__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__deforest__TypeInfo_102_102, ((MR_Box) (transform_hlds__deforest__NonGeneralisedArgTypes_65)), ((MR_Box) (transform_hlds__deforest__Var_100)));
                                        }
                                        if (transform_hlds__deforest__succeeded)
                                          {
                                            {
                                              transform_hlds__deforest__create_deforest_call_args_9_p_0(transform_hlds__deforest__NonGeneralisedArgs_64, transform_hlds__deforest__NonGeneralisedArgTypes_65, transform_hlds__deforest__GeneralRenaming_71, transform_hlds__deforest__TypeRenaming_72, &transform_hlds__deforest__NewArgs_74, transform_hlds__deforest__STATE_VARIABLE_VarSet_86_86, &transform_hlds__deforest__Var_75, transform_hlds__deforest__STATE_VARIABLE_VarTypes_87_87, &transform_hlds__deforest__Var_76);
                                            }
                                            {
                                              hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__deforest__GoalInfo_77);
                                            }
                                            transform_hlds__deforest__Var_90 = (MR_Integer) 1;
                                            transform_hlds__deforest__Var_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                            transform_hlds__deforest__Var_93 = (MR_String) "";
                                            transform_hlds__deforest__Var_92 = (MR_Word) &transform_hlds__deforest_scalar_common_7[0];
                                            {
                                              transform_hlds__deforest__NonGeneralFirstGoalExpr_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(2), transform_hlds__deforest__NonGeneralFirstGoalExpr_78, 0) = ((MR_Box) (transform_hlds__deforest__NonGeneralisedPredId_52));
                                              MR_hl_field(MR_mktag(2), transform_hlds__deforest__NonGeneralFirstGoalExpr_78, 1) = ((MR_Box) (transform_hlds__deforest__NonGeneralisedProcId_53));
                                              MR_hl_field(MR_mktag(2), transform_hlds__deforest__NonGeneralFirstGoalExpr_78, 2) = ((MR_Box) (transform_hlds__deforest__NewArgs_74));
                                              MR_hl_field(MR_mktag(2), transform_hlds__deforest__NonGeneralFirstGoalExpr_78, 3) = ((MR_Box) (transform_hlds__deforest__Var_90));
                                              MR_hl_field(MR_mktag(2), transform_hlds__deforest__NonGeneralFirstGoalExpr_78, 4) = ((MR_Box) (transform_hlds__deforest__Var_91));
                                              MR_hl_field(MR_mktag(2), transform_hlds__deforest__NonGeneralFirstGoalExpr_78, 5) = ((MR_Box) (transform_hlds__deforest__Var_92));
                                            }
                                            {
                                              transform_hlds__deforest__NonGeneralFirstGoal_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralFirstGoal_79, 0) = ((MR_Box) (transform_hlds__deforest__NonGeneralFirstGoalExpr_78));
                                              MR_hl_field(MR_mktag(0), transform_hlds__deforest__NonGeneralFirstGoal_79, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_77));
                                            }
                                            {
                                              transform_hlds__deforest__create_conj_5_p_0(transform_hlds__deforest__NonGeneralFirstGoal_79, transform_hlds__deforest__BetweenGoals_18, transform_hlds__deforest__MaybeLastGoal_19, transform_hlds__deforest__ConjNonLocals_20, &transform_hlds__deforest__GoalToMatch_80);
                                            }
                                            {
                                              transform_hlds__deforest__succeeded = transform_hlds__pd_util__goals_match_8_p_0(transform_hlds__deforest__ModuleInfo_13, transform_hlds__deforest__VersionGoal_14, transform_hlds__deforest__VersionArgs_15, transform_hlds__deforest__VersionArgTypes_16, transform_hlds__deforest__GoalToMatch_80, transform_hlds__deforest__STATE_VARIABLE_VarTypes_87_87, transform_hlds__deforest__Renaming_24, &transform_hlds__deforest__Var_81);
                                            }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest__do_generalisation_14_p_0(
  MR_Word transform_hlds__deforest__VersionArgs_15,
  MR_Word transform_hlds__deforest__Renaming_16,
  MR_Word transform_hlds__deforest__VersionInstMap_17,
  MR_Word transform_hlds__deforest__EarlierGoal_18,
  MR_Word transform_hlds__deforest__BetweenGoals_19,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_20,
  MR_Word transform_hlds__deforest__FoldGoal_21,
  MR_Word transform_hlds__deforest__ConjNonLocals_22,
  MR_Word transform_hlds__deforest__ProcPair_23,
  MR_Integer transform_hlds__deforest__Size_24,
  MR_Word transform_hlds__deforest__Generalised_25,
  MR_Word * transform_hlds__deforest__MaybeGoal_26,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_39,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_40)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__ModuleInfo_28;
    MR_Word transform_hlds__deforest__Globals_29;
    MR_Word transform_hlds__deforest__DebugPD_30;
    MR_Word transform_hlds__deforest__InstMap0_32;
    MR_Word transform_hlds__deforest__VersionInsts_33;
    MR_Integer transform_hlds__deforest__VersionInstSizes_34;
    MR_Word transform_hlds__deforest__ConjNonLocalsList_35;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_53_53;
    MR_Word transform_hlds__deforest__InstMap_36;
    MR_Word transform_hlds__deforest__ArgInsts_37;
    MR_Integer transform_hlds__deforest__NewInstSizes_38;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_39, &transform_hlds__deforest__ModuleInfo_28);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_28, &transform_hlds__deforest__Globals_29);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_29, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_30);
    }
    {
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_30, (MR_String) "goals match, trying MSG\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_39, &transform_hlds__deforest__InstMap0_32);
    }
    {
      hlds__instmap__instmap_lookup_vars_3_p_0(transform_hlds__deforest__VersionInstMap_17, transform_hlds__deforest__VersionArgs_15, &transform_hlds__deforest__VersionInsts_33);
    }
    {
      transform_hlds__pd_util__inst_list_size_3_p_0(transform_hlds__deforest__ModuleInfo_28, transform_hlds__deforest__VersionInsts_33, &transform_hlds__deforest__VersionInstSizes_34);
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__ConjNonLocals_22, &transform_hlds__deforest__ConjNonLocalsList_35);
    }
    {
      transform_hlds__deforest__succeeded = transform_hlds__deforest__try_MSG_6_p_0(transform_hlds__deforest__ModuleInfo_28, transform_hlds__deforest__VersionInstMap_17, transform_hlds__deforest__VersionArgs_15, transform_hlds__deforest__Renaming_16, transform_hlds__deforest__InstMap0_32, &transform_hlds__deforest__InstMap_36);
    }
    if (transform_hlds__deforest__succeeded)
      {
        {
          hlds__instmap__instmap_lookup_vars_3_p_0(transform_hlds__deforest__InstMap_36, transform_hlds__deforest__ConjNonLocalsList_35, &transform_hlds__deforest__ArgInsts_37);
        }
        {
          transform_hlds__pd_util__inst_list_size_3_p_0(transform_hlds__deforest__ModuleInfo_28, transform_hlds__deforest__ArgInsts_37, &transform_hlds__deforest__NewInstSizes_38);
        }
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__NewInstSizes_38 < transform_hlds__deforest__VersionInstSizes_34);
      }
    if (transform_hlds__deforest__succeeded)
      {
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_50_50;
        MR_Word transform_hlds__deforest__Var_52;

        {
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_30, (MR_String) "MSG succeeded", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        {
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap_36, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_39, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_50_50);
        }
        {
          transform_hlds__deforest__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_52, 0) = ((MR_Box) (transform_hlds__deforest__Generalised_25));
        }
        {
          transform_hlds__deforest__create_deforest_goal_12_p_0(transform_hlds__deforest__EarlierGoal_18, transform_hlds__deforest__BetweenGoals_19, transform_hlds__deforest__MaybeLaterGoal_20, transform_hlds__deforest__FoldGoal_21, transform_hlds__deforest__ConjNonLocals_22, (MR_Integer) 1, transform_hlds__deforest__ProcPair_23, transform_hlds__deforest__Size_24, transform_hlds__deforest__Var_52, transform_hlds__deforest__MaybeGoal_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_50_50, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_53_53);
        }
      }
    else
      {
        {
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_30, (MR_String) "MSG failed\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        *transform_hlds__deforest__MaybeGoal_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        transform_hlds__deforest__STATE_VARIABLE_PDInfo_53_53 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_39;
      }
    {
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_53_53, transform_hlds__deforest__STATE_VARIABLE_PDInfo_40);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__try_MSG_6_p_0(
  MR_Word transform_hlds__deforest__ModuleInfo_1,
  MR_Word transform_hlds__deforest__VersionInstMap_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3,
  MR_Word transform_hlds__deforest__Renaming_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_InstMap_0_5,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_InstMap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__deforest__succeeded;

        if ((transform_hlds__deforest__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__deforest__STATE_VARIABLE_InstMap_6 = transform_hlds__deforest__STATE_VARIABLE_InstMap_0_5;
            transform_hlds__deforest__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word transform_hlds__deforest__VersionArg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__deforest__VersionArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__deforest__VersionInst_19;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_InstMap_25_25;
            MR_Word transform_hlds__deforest__Arg_20;
            MR_Word transform_hlds__deforest__Inst_22;
            MR_Word transform_hlds__deforest__TypeInfo_27_27;
            MR_Word transform_hlds__deforest__VarInst_21;
            MR_Box transform_hlds__deforest__conv0_Arg_20;

            {
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__deforest__VersionInstMap_2, transform_hlds__deforest__VersionArg_15, &transform_hlds__deforest__VersionInst_19);
            }
            transform_hlds__deforest__TypeInfo_27_27 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
            {
              transform_hlds__deforest__succeeded = mercury__map__search_3_p_0(transform_hlds__deforest__TypeInfo_27_27, transform_hlds__deforest__TypeInfo_27_27, transform_hlds__deforest__Renaming_4, ((MR_Box) (transform_hlds__deforest__VersionArg_15)), &transform_hlds__deforest__conv0_Arg_20);
            }
            if (transform_hlds__deforest__succeeded)
              {
                transform_hlds__deforest__Arg_20 = ((MR_Word) transform_hlds__deforest__conv0_Arg_20);
                transform_hlds__deforest__succeeded = MR_TRUE;
              }
            if (transform_hlds__deforest__succeeded)
              {
                {
                  hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__deforest__STATE_VARIABLE_InstMap_0_5, transform_hlds__deforest__Arg_20, &transform_hlds__deforest__VarInst_21);
                }
                {
                  transform_hlds__deforest__succeeded = transform_hlds__pd_util__inst_MSG_4_p_0(transform_hlds__deforest__VersionInst_19, transform_hlds__deforest__VarInst_21, transform_hlds__deforest__ModuleInfo_1, &transform_hlds__deforest__Inst_22);
                }
              }
            if (transform_hlds__deforest__succeeded)
              {
                hlds__instmap__instmap_set_var_4_p_0(transform_hlds__deforest__Arg_20, transform_hlds__deforest__Inst_22, transform_hlds__deforest__STATE_VARIABLE_InstMap_0_5, &transform_hlds__deforest__STATE_VARIABLE_InstMap_25_25);
              }
            else
              transform_hlds__deforest__STATE_VARIABLE_InstMap_25_25 = transform_hlds__deforest__STATE_VARIABLE_InstMap_0_5;
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__deforest__next_value_of_HeadVar__3_3 = transform_hlds__deforest__VersionArgs_16;
              MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_InstMap_0_5 = transform_hlds__deforest__STATE_VARIABLE_InstMap_25_25;

              transform_hlds__deforest__STATE_VARIABLE_InstMap_0_5 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_InstMap_0_5;
              transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__next_value_of_HeadVar__3_3;
            }
            continue;
          }
        return transform_hlds__deforest__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__deforest__create_call_goal_7_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__VersionInfo_10,
  MR_Word transform_hlds__deforest__Renaming_11,
  MR_Word transform_hlds__deforest__TypeSubn_12,
  MR_Word * transform_hlds__deforest__Goal_13,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_46)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer transform_hlds__deforest__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__deforest__OldArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_10, (MR_Integer) 2)));
    MR_Word transform_hlds__deforest__ModuleInfo_16;
    MR_Word transform_hlds__deforest__CalledPredInfo_17;
    MR_Word transform_hlds__deforest__CalledProcInfo_18;
    MR_Word transform_hlds__deforest__CalledTVarSet_19;
    MR_Word transform_hlds__deforest__ArgTypes0_21;
    MR_Word transform_hlds__deforest__ProcInfo0_22;
    MR_Word transform_hlds__deforest__PredInfo0_23;
    MR_Word transform_hlds__deforest__VarTypes0_24;
    MR_Word transform_hlds__deforest__VarSet0_25;
    MR_Word transform_hlds__deforest__TVarSet0_26;
    MR_Word transform_hlds__deforest__TVarSet_27;
    MR_Word transform_hlds__deforest__TypeRenaming_28;
    MR_Word transform_hlds__deforest__PredInfo_29;
    MR_Word transform_hlds__deforest__ArgTypes1_30;
    MR_Word transform_hlds__deforest__Args_31;
    MR_Word transform_hlds__deforest__VarSet_32;
    MR_Word transform_hlds__deforest__VarTypes_33;
    MR_Word transform_hlds__deforest__ProcInfo1_34;
    MR_Word transform_hlds__deforest__ProcInfo_35;
    MR_Word transform_hlds__deforest__ArgModes_36;
    MR_Word transform_hlds__deforest__InstMapDelta_37;
    MR_Word transform_hlds__deforest__Detism_38;
    MR_Word transform_hlds__deforest__NonLocals_39;
    MR_Word transform_hlds__deforest__Purity_40;
    MR_Word transform_hlds__deforest__GoalInfo_41;
    MR_Word transform_hlds__deforest__PredModule_42;
    MR_String transform_hlds__deforest__PredName_43;
    MR_Word transform_hlds__deforest__GoalExpr_44;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_47_47;
    MR_Word transform_hlds__deforest__Var_51;
    MR_Word transform_hlds__deforest__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_10, (MR_Integer) 0)));
    MR_Word transform_hlds__deforest__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_10, (MR_Integer) 1)));
    MR_Word transform_hlds__deforest__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_10, (MR_Integer) 3)));
    MR_Word transform_hlds__deforest__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_10, (MR_Integer) 4)));
    MR_Integer transform_hlds__deforest__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_10, (MR_Integer) 5)));
    MR_Integer transform_hlds__deforest__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_10, (MR_Integer) 6)));
    MR_Word transform_hlds__deforest__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_10, (MR_Integer) 7)));
    MR_Word transform_hlds__deforest__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_10, (MR_Integer) 8)));
    MR_Word transform_hlds__deforest___CalledExistQVars_20;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__ModuleInfo_16);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId_8, transform_hlds__deforest__ProcId_9, &transform_hlds__deforest__CalledPredInfo_17, &transform_hlds__deforest__CalledProcInfo_18);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__deforest__CalledPredInfo_17, &transform_hlds__deforest__CalledTVarSet_19, &transform_hlds__deforest___CalledExistQVars_20, &transform_hlds__deforest__ArgTypes0_21);
    }
    {
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__ProcInfo0_22);
    }
    {
      transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__PredInfo0_23);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__ProcInfo0_22, &transform_hlds__deforest__VarTypes0_24);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__deforest__ProcInfo0_22, &transform_hlds__deforest__VarSet0_25);
    }
    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__deforest__PredInfo0_23, &transform_hlds__deforest__TVarSet0_26);
    }
    {
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(transform_hlds__deforest__TVarSet0_26, transform_hlds__deforest__CalledTVarSet_19, &transform_hlds__deforest__TVarSet_27, &transform_hlds__deforest__TypeRenaming_28);
    }
    {
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__deforest__TVarSet_27, transform_hlds__deforest__PredInfo0_23, &transform_hlds__deforest__PredInfo_29);
    }
    {
      transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_45, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_47_47);
    }
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(transform_hlds__deforest__TypeRenaming_28, transform_hlds__deforest__ArgTypes0_21, &transform_hlds__deforest__ArgTypes1_30);
    }
    {
      transform_hlds__deforest__create_deforest_call_args_9_p_0(transform_hlds__deforest__OldArgs_15, transform_hlds__deforest__ArgTypes1_30, transform_hlds__deforest__Renaming_11, transform_hlds__deforest__TypeSubn_12, &transform_hlds__deforest__Args_31, transform_hlds__deforest__VarSet0_25, &transform_hlds__deforest__VarSet_32, transform_hlds__deforest__VarTypes0_24, &transform_hlds__deforest__VarTypes_33);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__deforest__VarTypes_33, transform_hlds__deforest__ProcInfo0_22, &transform_hlds__deforest__ProcInfo1_34);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__deforest__VarSet_32, transform_hlds__deforest__ProcInfo1_34, &transform_hlds__deforest__ProcInfo_35);
    }
    {
      transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_47_47, transform_hlds__deforest__STATE_VARIABLE_PDInfo_46);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__deforest__CalledProcInfo_18, &transform_hlds__deforest__ArgModes_36);
    }
    {
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__Args_31, transform_hlds__deforest__ArgModes_36, &transform_hlds__deforest__InstMapDelta_37);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__deforest__ProcInfo_35, &transform_hlds__deforest__Detism_38);
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__Args_31, &transform_hlds__deforest__NonLocals_39);
    }
    {
      hlds__hlds_pred__pred_info_get_purity_2_p_0(transform_hlds__deforest__CalledPredInfo_17, &transform_hlds__deforest__Purity_40);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_39, transform_hlds__deforest__InstMapDelta_37, transform_hlds__deforest__Detism_38, transform_hlds__deforest__Purity_40, &transform_hlds__deforest__GoalInfo_41);
    }
    {
      transform_hlds__deforest__PredModule_42 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__deforest__CalledPredInfo_17);
    }
    {
      transform_hlds__deforest__PredName_43 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__deforest__CalledPredInfo_17);
    }
    {
      transform_hlds__deforest__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_51, 0) = ((MR_Box) (transform_hlds__deforest__PredModule_42));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_51, 1) = ((MR_Box) (transform_hlds__deforest__PredName_43));
    }
    {
      transform_hlds__deforest__GoalExpr_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_44, 0) = ((MR_Box) (transform_hlds__deforest__PredId_8));
      MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_44, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_9));
      MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_44, 2) = ((MR_Box) (transform_hlds__deforest__Args_31));
      MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_44, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_44, 5) = ((MR_Box) (transform_hlds__deforest__Var_51));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__deforest__Goal_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_41));
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__create_deforest_call_args_9_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__Renaming_3,
  MR_Word transform_hlds__deforest__TypeSubn_4,
  MR_Word * transform_hlds__deforest__HeadVar__5_5,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_VarSet_0_6,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_VarSet_7,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_VarTypes_0_8,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_VarTypes_9)
{
  {
    MR_bool transform_hlds__deforest__succeeded;

    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__deforest__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__deforest__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__deforest__STATE_VARIABLE_VarTypes_9 = transform_hlds__deforest__STATE_VARIABLE_VarTypes_0_8;
          *transform_hlds__deforest__STATE_VARIABLE_VarSet_7 = transform_hlds__deforest__STATE_VARIABLE_VarSet_0_6;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.create_deforest_call_args\'/9", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__deforest__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__deforest__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.create_deforest_call_args\'/9", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__deforest__ArgType_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__deforest__ArgTypes_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__deforest__Arg_52;
            MR_Word transform_hlds__deforest__Args_53;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_VarSet_62_62;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_VarTypes_63_63;
            MR_Word transform_hlds__deforest__ArgPrime_56;
            MR_Word transform_hlds__deforest__TypeInfo_66_66 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
            MR_Box transform_hlds__deforest__conv0_ArgPrime_56;

            {
              transform_hlds__deforest__succeeded = mercury__map__search_3_p_0(transform_hlds__deforest__TypeInfo_66_66, transform_hlds__deforest__TypeInfo_66_66, transform_hlds__deforest__Renaming_3, ((MR_Box) (transform_hlds__deforest__Var_69)), &transform_hlds__deforest__conv0_ArgPrime_56);
            }
            if (transform_hlds__deforest__succeeded)
              {
                transform_hlds__deforest__ArgPrime_56 = ((MR_Word) transform_hlds__deforest__conv0_ArgPrime_56);
                transform_hlds__deforest__succeeded = MR_TRUE;
              }
            if (transform_hlds__deforest__succeeded)
              {
                transform_hlds__deforest__Arg_52 = transform_hlds__deforest__ArgPrime_56;
                transform_hlds__deforest__STATE_VARIABLE_VarTypes_63_63 = transform_hlds__deforest__STATE_VARIABLE_VarTypes_0_8;
                transform_hlds__deforest__STATE_VARIABLE_VarSet_62_62 = transform_hlds__deforest__STATE_VARIABLE_VarSet_0_6;
              }
            else
              {
                MR_Word transform_hlds__deforest__SubnArgType_57;

                {
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__deforest__Arg_52, transform_hlds__deforest__STATE_VARIABLE_VarSet_0_6, &transform_hlds__deforest__STATE_VARIABLE_VarSet_62_62);
                }
                {
                  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(transform_hlds__deforest__TypeSubn_4, transform_hlds__deforest__ArgType_48, &transform_hlds__deforest__SubnArgType_57);
                }
                {
                  hlds__vartypes__add_var_type_4_p_0(transform_hlds__deforest__Arg_52, transform_hlds__deforest__SubnArgType_57, transform_hlds__deforest__STATE_VARIABLE_VarTypes_0_8, &transform_hlds__deforest__STATE_VARIABLE_VarTypes_63_63);
                }
              }
            {
              transform_hlds__deforest__create_deforest_call_args_9_p_0(transform_hlds__deforest__Var_68, transform_hlds__deforest__ArgTypes_49, transform_hlds__deforest__Renaming_3, transform_hlds__deforest__TypeSubn_4, &transform_hlds__deforest__Args_53, transform_hlds__deforest__STATE_VARIABLE_VarSet_62_62, transform_hlds__deforest__STATE_VARIABLE_VarSet_7, transform_hlds__deforest__STATE_VARIABLE_VarTypes_63_63, transform_hlds__deforest__STATE_VARIABLE_VarTypes_9);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__deforest__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Arg_52));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Args_53));
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__create_deforest_goal_12_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_13,
  MR_Word transform_hlds__deforest__BetweenGoals_14,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
  MR_Word transform_hlds__deforest__FoldGoal0_16,
  MR_Word transform_hlds__deforest__NonLocals_17,
  MR_Word transform_hlds__deforest__RunModes_18,
  MR_Word transform_hlds__deforest__ProcPair_19,
  MR_Integer transform_hlds__deforest__Size_20,
  MR_Word transform_hlds__deforest__MaybeGeneralised_21,
  MR_Word * transform_hlds__deforest__MaybeCallGoal_22,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__ModuleInfo0_24;
    MR_Word transform_hlds__deforest__Globals_25;
    MR_Integer transform_hlds__deforest__VarsOpt_26;
    MR_Word transform_hlds__deforest__DebugPD_27;
    MR_Word transform_hlds__deforest__PredId1_30;
    MR_Integer transform_hlds__deforest__ProcId1_31;
    MR_Word transform_hlds__deforest__Args1_32;
    MR_Word transform_hlds__deforest__EarlierGoalExpr_28;
    MR_Word transform_hlds__deforest__Var_29;
    MR_Word transform_hlds__deforest__Var_33;
    MR_Word transform_hlds__deforest__Var_34;
    MR_Word transform_hlds__deforest__Var_35;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__ModuleInfo0_24);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo0_24, &transform_hlds__deforest__Globals_25);
    }
    {
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_25, (MR_Integer) 399, &transform_hlds__deforest__VarsOpt_26);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_25, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_27);
    }
    transform_hlds__deforest__EarlierGoalExpr_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_13, (MR_Integer) 0)));
    transform_hlds__deforest__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_13, (MR_Integer) 1)));
    transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_28)) == (MR_mktag((MR_Integer) 2)));
    if (transform_hlds__deforest__succeeded)
      {
        transform_hlds__deforest__PredId1_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_28, (MR_Integer) 0)));
        transform_hlds__deforest__ProcId1_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_28, (MR_Integer) 1)));
        transform_hlds__deforest__Args1_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_28, (MR_Integer) 2)));
        transform_hlds__deforest__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_28, (MR_Integer) 3)));
        transform_hlds__deforest__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_28, (MR_Integer) 4)));
        transform_hlds__deforest__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_28, (MR_Integer) 5)));
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__VarsOpt_26 == (MR_Integer) -1);
        if (!(transform_hlds__deforest__succeeded))
          {
            MR_Word transform_hlds__deforest__TypeCtorInfo_144_144;
            MR_Word transform_hlds__deforest__TypeInfo_145_145;
            MR_Word transform_hlds__deforest__CalledProcInfo1_37;
            MR_Word transform_hlds__deforest__CalledGoal1_38;
            MR_Word transform_hlds__deforest__GoalVars1_39;
            MR_Word transform_hlds__deforest__GoalVarsList1_40;
            MR_Word transform_hlds__deforest__GoalVars2_41;
            MR_Word transform_hlds__deforest__GoalVarsList2_42;
            MR_Integer transform_hlds__deforest__NumVars1_43;
            MR_Integer transform_hlds__deforest__NumVars2_44;
            MR_Integer transform_hlds__deforest__NumVars_45;
            MR_Word transform_hlds__deforest__Var_36;

            {
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__ModuleInfo0_24, transform_hlds__deforest__PredId1_30, transform_hlds__deforest__ProcId1_31, &transform_hlds__deforest__Var_36, &transform_hlds__deforest__CalledProcInfo1_37);
            }
            {
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__CalledProcInfo1_37, &transform_hlds__deforest__CalledGoal1_38);
            }
            {
              hlds__goal_util__goal_vars_2_p_0(transform_hlds__deforest__CalledGoal1_38, &transform_hlds__deforest__GoalVars1_39);
            }
            transform_hlds__deforest__TypeCtorInfo_144_144 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__deforest__TypeCtorInfo_144_144, transform_hlds__deforest__GoalVars1_39, &transform_hlds__deforest__GoalVarsList1_40);
            }
            {
              hlds__goal_util__goals_goal_vars_2_p_0(transform_hlds__deforest__BetweenGoals_14, &transform_hlds__deforest__GoalVars2_41);
            }
            {
              parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__deforest__TypeCtorInfo_144_144, transform_hlds__deforest__GoalVars2_41, &transform_hlds__deforest__GoalVarsList2_42);
            }
            transform_hlds__deforest__TypeInfo_145_145 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
            {
              mercury__list__length_2_p_0(transform_hlds__deforest__TypeInfo_145_145, transform_hlds__deforest__GoalVarsList1_40, &transform_hlds__deforest__NumVars1_43);
            }
            {
              mercury__list__length_2_p_0(transform_hlds__deforest__TypeInfo_145_145, transform_hlds__deforest__GoalVarsList2_42, &transform_hlds__deforest__NumVars2_44);
            }
            transform_hlds__deforest__NumVars_45 = (transform_hlds__deforest__NumVars1_43 + transform_hlds__deforest__NumVars2_44);
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__NumVars_45 < transform_hlds__deforest__VarsOpt_26);
          }
      }
    if (transform_hlds__deforest__succeeded)
      {
        MR_Word transform_hlds__deforest__InstMap0_46;
        MR_Word transform_hlds__deforest__ProcInfo0_47;
        MR_Word transform_hlds__deforest__UnfoldedCall_49;
        MR_Word transform_hlds__deforest__DidUnfold_50;
        MR_Word transform_hlds__deforest__DeforestGoal0_51;
        MR_Word transform_hlds__deforest__NonLocalsList_52;
        MR_Word transform_hlds__deforest__DeforestGoal_53;
        MR_Word transform_hlds__deforest__FoldGoal_55;
        MR_Word transform_hlds__deforest__Errors_57;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_129_129;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_138_138;

        {
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__InstMap0_46);
        }
        {
          transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__ProcInfo0_47);
        }
        {
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "unfolding first call\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        {
          transform_hlds__deforest__unfold_call_10_p_0((MR_Integer) 0, (MR_Integer) 0, transform_hlds__deforest__PredId1_30, transform_hlds__deforest__ProcId1_31, transform_hlds__deforest__Args1_32, transform_hlds__deforest__EarlierGoal_13, &transform_hlds__deforest__UnfoldedCall_49, &transform_hlds__deforest__DidUnfold_50, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96);
        }
        {
          transform_hlds__deforest__create_conj_5_p_0(transform_hlds__deforest__UnfoldedCall_49, transform_hlds__deforest__BetweenGoals_14, transform_hlds__deforest__MaybeLaterGoal_15, transform_hlds__deforest__NonLocals_17, &transform_hlds__deforest__DeforestGoal0_51);
        }
        {
          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__NonLocals_17, &transform_hlds__deforest__NonLocalsList_52);
        }
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__DidUnfold_50 == (MR_Integer) 1);
        if (transform_hlds__deforest__succeeded)
          transform_hlds__deforest__succeeded = (transform_hlds__deforest__RunModes_18 == (MR_Integer) 1);
        if (transform_hlds__deforest__succeeded)
          {
            MR_Word transform_hlds__deforest__Errors1_54;
            MR_Word transform_hlds__deforest__Errors2_56;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101;

            {
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "running modes on deforest goal\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            {
              transform_hlds__pd_util__unique_modecheck_goal_5_p_0(transform_hlds__deforest__DeforestGoal0_51, &transform_hlds__deforest__DeforestGoal_53, &transform_hlds__deforest__Errors1_54, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
            }
            {
              transform_hlds__pd_util__unique_modecheck_goal_5_p_0(transform_hlds__deforest__FoldGoal0_16, &transform_hlds__deforest__FoldGoal_55, &transform_hlds__deforest__Errors2_56, transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102);
            }
            {
              transform_hlds__deforest__Errors_57 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, transform_hlds__deforest__Errors1_54, transform_hlds__deforest__Errors2_56);
            }
          }
        else
          {
            transform_hlds__deforest__DeforestGoal_53 = transform_hlds__deforest__DeforestGoal0_51;
            transform_hlds__deforest__FoldGoal_55 = transform_hlds__deforest__FoldGoal0_16;
            transform_hlds__deforest__Errors_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
          }
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__DidUnfold_50 == (MR_Integer) 1);
        if (transform_hlds__deforest__succeeded)
          transform_hlds__deforest__succeeded = (transform_hlds__deforest__Errors_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (transform_hlds__deforest__succeeded)
          {
            MR_Word transform_hlds__deforest__PredProcId_58;
            MR_Word transform_hlds__deforest__CallGoal_59;
            MR_Word transform_hlds__deforest__PredId_60;
            MR_Word transform_hlds__deforest__ModuleInfo_62;
            MR_String transform_hlds__deforest__PredName_63;
            MR_Word transform_hlds__deforest__CalledPreds_72;
            MR_Word transform_hlds__deforest__Parents0_73;
            MR_Word transform_hlds__deforest__ProcInfo1_74;
            MR_Word transform_hlds__deforest__VarTypes_75;
            MR_Word transform_hlds__deforest__ArgTypes_76;
            MR_Word transform_hlds__deforest__VersionInfo_77;
            MR_Word transform_hlds__deforest__TermInfo0_78;
            MR_Word transform_hlds__deforest__TermInfo_79;
            MR_Word transform_hlds__deforest__Parents_80;
            MR_Word transform_hlds__deforest__UnfoldInfo_81;
            MR_Integer transform_hlds__deforest__CostDelta_82;
            MR_Integer transform_hlds__deforest__SizeDelta_83;
            MR_Word transform_hlds__deforest__CurrPredId_84;
            MR_Integer transform_hlds__deforest__CurrProcId_85;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_104_104;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_121_121;
            MR_Word transform_hlds__deforest__Var_122;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_127_127;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_128_128;
            MR_Word transform_hlds__deforest__Var_130;
            MR_Integer transform_hlds__deforest__Var_61;
            MR_Word transform_hlds__deforest__Var_108;
            MR_Word transform_hlds__deforest__Var_110;
            MR_Word transform_hlds__deforest__PredId2_66;
            MR_Integer transform_hlds__deforest__ProcId2_67;
            MR_Word transform_hlds__deforest__LaterGoalExpr_64;
            MR_Word transform_hlds__deforest__Var_112;
            MR_Word transform_hlds__deforest__Var_65;
            MR_Word transform_hlds__deforest__Var_68;
            MR_Word transform_hlds__deforest__Var_69;
            MR_Word transform_hlds__deforest__Var_70;
            MR_Word transform_hlds__deforest__Var_71;

            {
              transform_hlds__pd_info__define_new_pred_6_p_0((MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__deforest_scalar_common_1[10]), transform_hlds__deforest__DeforestGoal_53, &transform_hlds__deforest__PredProcId_58, &transform_hlds__deforest__CallGoal_59, transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_104_104);
            }
            transform_hlds__deforest__PredId_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_58, (MR_Integer) 0)));
            transform_hlds__deforest__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_58, (MR_Integer) 1)));
            {
              transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_104_104, &transform_hlds__deforest__ModuleInfo_62);
            }
            {
              transform_hlds__deforest__PredName_63 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_62, transform_hlds__deforest__PredId_60);
            }
            {
              transform_hlds__deforest__Var_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_110, 0) = ((MR_Box) (transform_hlds__deforest__PredName_63));
            }
            {
              transform_hlds__deforest__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_108, 0) = ((MR_Box) (transform_hlds__deforest__Var_110));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "\nCreated predicate %s\n", transform_hlds__deforest__Var_108);
            }
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__MaybeLaterGoal_15)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__deforest__succeeded)
              {
                transform_hlds__deforest__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeLaterGoal_15, (MR_Integer) 0)));
                transform_hlds__deforest__LaterGoalExpr_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_112, (MR_Integer) 0)));
                transform_hlds__deforest__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_112, (MR_Integer) 1)));
                transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__LaterGoalExpr_64)) == (MR_mktag((MR_Integer) 2)));
                if (transform_hlds__deforest__succeeded)
                  {
                    transform_hlds__deforest__PredId2_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_64, (MR_Integer) 0)));
                    transform_hlds__deforest__ProcId2_67 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_64, (MR_Integer) 1)));
                    transform_hlds__deforest__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_64, (MR_Integer) 2)));
                    transform_hlds__deforest__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_64, (MR_Integer) 3)));
                    transform_hlds__deforest__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_64, (MR_Integer) 4)));
                    transform_hlds__deforest__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_64, (MR_Integer) 5)));
                  }
              }
            if (transform_hlds__deforest__succeeded)
              {
                MR_Word transform_hlds__deforest__Var_113;
                MR_Word transform_hlds__deforest__Var_114;
                MR_Word transform_hlds__deforest__Var_115;

                {
                  transform_hlds__deforest__Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_113, 0) = ((MR_Box) (transform_hlds__deforest__PredId1_30));
                  MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_113, 1) = ((MR_Box) (transform_hlds__deforest__ProcId1_31));
                }
                {
                  transform_hlds__deforest__Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_115, 0) = ((MR_Box) (transform_hlds__deforest__PredId2_66));
                  MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_115, 1) = ((MR_Box) (transform_hlds__deforest__ProcId2_67));
                }
                {
                  transform_hlds__deforest__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_114, 0) = ((MR_Box) (transform_hlds__deforest__Var_115));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  transform_hlds__deforest__CalledPreds_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__CalledPreds_72, 0) = ((MR_Box) (transform_hlds__deforest__Var_113));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__CalledPreds_72, 1) = ((MR_Box) (transform_hlds__deforest__Var_114));
                }
              }
            else
              {
                MR_Word transform_hlds__deforest__Var_117;

                {
                  transform_hlds__deforest__Var_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_117, 0) = ((MR_Box) (transform_hlds__deforest__PredId1_30));
                  MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_117, 1) = ((MR_Box) (transform_hlds__deforest__ProcId1_31));
                }
                {
                  transform_hlds__deforest__CalledPreds_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__CalledPreds_72, 0) = ((MR_Box) (transform_hlds__deforest__Var_117));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__CalledPreds_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            {
              transform_hlds__pd_info__pd_info_get_parent_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_104_104, &transform_hlds__deforest__Parents0_73);
            }
            {
              transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_104_104, &transform_hlds__deforest__ProcInfo1_74);
            }
            {
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__ProcInfo1_74, &transform_hlds__deforest__VarTypes_75);
            }
            {
              hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__deforest__VarTypes_75, transform_hlds__deforest__NonLocalsList_52, &transform_hlds__deforest__ArgTypes_76);
            }
            {
              transform_hlds__deforest__VersionInfo_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_77, 0) = ((MR_Box) (transform_hlds__deforest__FoldGoal_55));
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_77, 1) = ((MR_Box) (transform_hlds__deforest__CalledPreds_72));
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_77, 2) = ((MR_Box) (transform_hlds__deforest__NonLocalsList_52));
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_77, 3) = ((MR_Box) (transform_hlds__deforest__ArgTypes_76));
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_77, 4) = ((MR_Box) (transform_hlds__deforest__InstMap0_46));
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_77, 5) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_77, 6) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_77, 7) = ((MR_Box) (transform_hlds__deforest__Parents0_73));
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__VersionInfo_77, 8) = ((MR_Box) (transform_hlds__deforest__MaybeGeneralised_21));
            }
            {
              transform_hlds__pd_info__pd_info_get_global_term_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_104_104, &transform_hlds__deforest__TermInfo0_78);
            }
            {
              transform_hlds__pd_term__update_global_term_info_5_p_0(transform_hlds__deforest__ProcPair_19, transform_hlds__deforest__PredProcId_58, transform_hlds__deforest__Size_20, transform_hlds__deforest__TermInfo0_78, &transform_hlds__deforest__TermInfo_79);
            }
            {
              transform_hlds__pd_info__pd_info_set_global_term_info_3_p_0(transform_hlds__deforest__TermInfo_79, transform_hlds__deforest__STATE_VARIABLE_PDInfo_104_104, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_121_121);
            }
            {
              transform_hlds__deforest__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_122, 0) = ((MR_Box) (transform_hlds__deforest__PredProcId_58));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_122, 1) = ((MR_Box) (transform_hlds__deforest__CalledPreds_72));
            }
            {
              mercury__set__insert_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__deforest__Var_122, transform_hlds__deforest__Parents0_73, &transform_hlds__deforest__Parents_80);
            }
            {
              transform_hlds__pd_info__pd_info_set_parent_versions_3_p_0(transform_hlds__deforest__Parents_80, transform_hlds__deforest__STATE_VARIABLE_PDInfo_121_121, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123);
            }
            {
              transform_hlds__pd_info__register_version_4_p_0(transform_hlds__deforest__PredProcId_58, transform_hlds__deforest__VersionInfo_77, transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124);
            }
            {
              transform_hlds__pd_info__pd_info_get_unfold_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124, &transform_hlds__deforest__UnfoldInfo_81);
            }
            {
              transform_hlds__deforest__deforest_proc_deltas_5_p_0(transform_hlds__deforest__PredProcId_58, &transform_hlds__deforest__CostDelta_82, &transform_hlds__deforest__SizeDelta_83, transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125);
            }
            {
              transform_hlds__pd_info__pd_info_set_unfold_info_3_p_0(transform_hlds__deforest__UnfoldInfo_81, transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
            }
            {
              transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(transform_hlds__deforest__CostDelta_82, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_127_127);
            }
            {
              transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDelta_83, transform_hlds__deforest__STATE_VARIABLE_PDInfo_127_127, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_128_128);
            }
            {
              transform_hlds__pd_info__pd_info_set_parent_versions_3_p_0(transform_hlds__deforest__Parents0_73, transform_hlds__deforest__STATE_VARIABLE_PDInfo_128_128, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_129_129);
            }
            {
              transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_129_129, &transform_hlds__deforest__Var_130);
            }
            transform_hlds__deforest__CurrPredId_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_130, (MR_Integer) 0)));
            transform_hlds__deforest__CurrProcId_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_130, (MR_Integer) 1)));
            {
              hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Back in ", transform_hlds__deforest__CurrPredId_84, transform_hlds__deforest__CurrProcId_85, transform_hlds__deforest__ModuleInfo_62);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__deforest__MaybeCallGoal_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__CallGoal_59));
            }
          }
        else
          {
            {
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Generalisation produced mode errors\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            *transform_hlds__deforest__MaybeCallGoal_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            transform_hlds__deforest__STATE_VARIABLE_PDInfo_129_129 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102;
          }
        {
          transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo0_47, transform_hlds__deforest__STATE_VARIABLE_PDInfo_129_129, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_138_138);
        }
        {
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_46, transform_hlds__deforest__STATE_VARIABLE_PDInfo_138_138, transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);
        }
      }
    else
      {
        {
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "vars threshold exceeded\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        *transform_hlds__deforest__MaybeCallGoal_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_87 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86;
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__create_conj_5_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_6,
  MR_Word transform_hlds__deforest__BetweenGoals_7,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_8,
  MR_Word transform_hlds__deforest__NonLocals_9,
  MR_Word * transform_hlds__deforest__FoldGoal_10)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__DeforestConj_12;
    MR_Word transform_hlds__deforest__Detism_13;
    MR_Word transform_hlds__deforest__InstMapDelta0_14;
    MR_Word transform_hlds__deforest__InstMapDelta_15;
    MR_Word transform_hlds__deforest__Purity_16;
    MR_Word transform_hlds__deforest__ConjInfo0_17;
    MR_Word transform_hlds__deforest__EarlierGoalInfo_19;
    MR_Word transform_hlds__deforest__EarlierContext_20;
    MR_Word transform_hlds__deforest__ConjInfo_21;
    MR_Word transform_hlds__deforest__Var_25;
    MR_Word transform_hlds__deforest__Var_18;

    if ((transform_hlds__deforest__MaybeLaterGoal_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        transform_hlds__deforest__DeforestConj_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__deforest__DeforestConj_12, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_6));
        MR_hl_field(MR_mktag(1), transform_hlds__deforest__DeforestConj_12, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_7));
      }
    else
      {
        MR_Word transform_hlds__deforest__LaterGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeLaterGoal_8, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__Var_22;
        MR_Word transform_hlds__deforest__Var_23;

        {
          transform_hlds__deforest__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_22, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_6));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_22, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_7));
        }
        {
          transform_hlds__deforest__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_23, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_11));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__Var_22, transform_hlds__deforest__Var_23, &transform_hlds__deforest__DeforestConj_12);
        }
      }
    {
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__DeforestConj_12, &transform_hlds__deforest__Detism_13);
    }
    {
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__DeforestConj_12, &transform_hlds__deforest__InstMapDelta0_14);
    }
    {
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__InstMapDelta0_14, &transform_hlds__deforest__InstMapDelta_15);
    }
    {
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__DeforestConj_12, &transform_hlds__deforest__Purity_16);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__InstMapDelta_15, transform_hlds__deforest__Detism_13, transform_hlds__deforest__Purity_16, &transform_hlds__deforest__ConjInfo0_17);
    }
    transform_hlds__deforest__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_6, (MR_Integer) 0)));
    transform_hlds__deforest__EarlierGoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_6, (MR_Integer) 1)));
    {
      transform_hlds__deforest__EarlierContext_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__deforest__EarlierGoalInfo_19);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(transform_hlds__deforest__EarlierContext_20, transform_hlds__deforest__ConjInfo0_17, &transform_hlds__deforest__ConjInfo_21);
    }
    {
      transform_hlds__deforest__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_25, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_25, 2) = ((MR_Box) (transform_hlds__deforest__DeforestConj_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__deforest__FoldGoal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__ConjInfo_21));
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
  MR_Word transform_hlds__deforest__PredProcId_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Integer transform_hlds__deforest__Var_6;
    MR_Integer transform_hlds__deforest__Var_7;

    {
      transform_hlds__deforest__deforest_proc_deltas_5_p_0(transform_hlds__deforest__PredProcId_4, &transform_hlds__deforest__Var_6, &transform_hlds__deforest__Var_7, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_proc_deltas_5_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Integer * transform_hlds__deforest__CostDelta_8,
  MR_Integer * transform_hlds__deforest__SizeDelta_9,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_25,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_26)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer transform_hlds__deforest__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__deforest__Globals_16;
    MR_Word transform_hlds__deforest__SimplifyTasks_17;
    MR_Word transform_hlds__deforest__Changed_18;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27_27;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_31_31;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_32_32;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_35_35;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_37_37;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_38_38;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_39_39;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_44_44;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_45;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_46_46;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_47_47;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_67;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_68_68;
    MR_Word transform_hlds__deforest__GoalExpr0_84;
    MR_Word transform_hlds__deforest__GoalInfo0_85;
    MR_Word transform_hlds__deforest__GoalExpr_86;
    MR_Word transform_hlds__deforest__GoalInfo_87;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_25, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27_27);
    }
    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Deforesting ", transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27_27);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27_27, transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_31_31, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_32_32);
    }
    {
      transform_hlds__pd_info__pd_info_init_unfold_info_5_p_0(transform_hlds__deforest__HeadVar__1_1, transform_hlds__deforest__STATE_VARIABLE_PredInfo_31_31, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_32_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_25, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_32_32, &transform_hlds__deforest__STATE_VARIABLE_Goal_35_35);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27_27, &transform_hlds__deforest__Globals_16);
    }
    {
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_16, &transform_hlds__deforest__SimplifyTasks_17);
    }
    {
      transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_17, transform_hlds__deforest__STATE_VARIABLE_Goal_35_35, &transform_hlds__deforest__STATE_VARIABLE_Goal_37_37, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_38_38);
    }
    {
      transform_hlds__pd_util__propagate_constraints_4_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_37_37, &transform_hlds__deforest__STATE_VARIABLE_Goal_39_39, transform_hlds__deforest__STATE_VARIABLE_PDInfo_38_38, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40);
    }
    {
      transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40, (MR_String) "after constraints\n", transform_hlds__deforest__STATE_VARIABLE_Goal_39_39);
    }
    transform_hlds__deforest__GoalExpr0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_39_39, (MR_Integer) 0)));
    transform_hlds__deforest__GoalInfo0_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_39_39, (MR_Integer) 1)));
    {
      transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_84, &transform_hlds__deforest__GoalExpr_86, transform_hlds__deforest__GoalInfo0_85, &transform_hlds__deforest__GoalInfo_87, transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_45);
    }
    {
      transform_hlds__deforest__STATE_VARIABLE_Goal_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_44_44, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_86));
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__STATE_VARIABLE_Goal_44_44, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_87));
    }
    {
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_45, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_46_46);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_44_44, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_46_46, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_47_47);
    }
    {
      transform_hlds__pd_info__pd_info_get_changed_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_45, &transform_hlds__deforest__Changed_18);
    }
    switch (transform_hlds__deforest__Changed_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_48_48;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_76;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_78;

          {
            transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_45, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_48_48);
          }
          {
            transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_45, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_76);
          }
          {
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_76, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_47_47, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_48_48, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_78);
          }
          {
            transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_78, transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_45, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_67);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__deforest__InstMap0_19;
          MR_Word transform_hlds__deforest__VarTypes_20;
          MR_Word transform_hlds__deforest__InstVarSet_21;
          MR_Word transform_hlds__deforest__RerunDet_22;
          MR_Word transform_hlds__deforest__ProcArgInfo0_23;
          MR_Word transform_hlds__deforest__ProcArgInfo_24;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_52_52;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_54;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_55_55;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_Goal_57_57;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_58_58;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_60;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ProcInfo_61_61;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_62_62;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_63_63;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_66_66;

          {
            transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_45, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_52_52);
          }
          {
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_47_47, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_54);
          }
          {
            hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__deforest__STATE_VARIABLE_Goal_55_55);
          }
          {
            hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_54, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_52_52, &transform_hlds__deforest__InstMap0_19);
          }
          {
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__deforest__VarTypes_20);
          }
          {
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__deforest__InstVarSet_21);
          }
          {
            check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__deforest__STATE_VARIABLE_Goal_55_55, &transform_hlds__deforest__STATE_VARIABLE_Goal_57_57, transform_hlds__deforest__VarTypes_20, transform_hlds__deforest__InstVarSet_21, transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_52_52, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_58_58);
          }
          {
            transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_58_58, transform_hlds__deforest__STATE_VARIABLE_PDInfo_45_45, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59);
          }
          {
            transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_60);
          }
          {
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__deforest__STATE_VARIABLE_Goal_57_57, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__deforest__STATE_VARIABLE_ProcInfo_61_61);
          }
          {
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_PredInfo_60_60, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_61_61, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_58_58, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_62_62);
          }
          {
            transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__RerunDet_22);
          }
          switch (transform_hlds__deforest__RerunDet_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_63_63 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_62_62;
              break;
            case (MR_Integer) 1:
              {
                check_hlds__det_analysis__det_infer_proc_ignore_msgs_4_p_0(transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_62_62, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_63_63);
              }
              break;
          }
          {
            transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__ProcArgInfo0_23);
          }
          {
            transform_hlds__pd_util__get_branch_vars_proc_6_p_0(transform_hlds__deforest__HeadVar__1_1, transform_hlds__deforest__STATE_VARIABLE_ProcInfo_61_61, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_63_63, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65, transform_hlds__deforest__ProcArgInfo0_23, &transform_hlds__deforest__ProcArgInfo_24);
          }
          {
            transform_hlds__pd_info__pd_info_set_proc_arg_info_3_p_0(transform_hlds__deforest__ProcArgInfo_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_66_66);
          }
          {
            transform_hlds__pd_info__pd_info_set_module_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_65_65, transform_hlds__deforest__STATE_VARIABLE_PDInfo_66_66, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_67);
          }
        }
        break;
    }
    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_67, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_68_68);
    }
    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Finished deforesting ", transform_hlds__deforest__PredId_6, transform_hlds__deforest__ProcId_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_68_68);
    }
    {
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_67, transform_hlds__deforest__CostDelta_8);
    }
    {
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_67, transform_hlds__deforest__SizeDelta_9);
    }
    {
      transform_hlds__pd_info__pd_info_unset_unfold_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_67_67, transform_hlds__deforest__STATE_VARIABLE_PDInfo_26);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_34 = ((MR_Integer) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_34);
    {
      transform_hlds__deforest__deforest_call_9_p_0_2(transform_hlds__deforest__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    {
      MR_Box transform_hlds__deforest__conv2_Arg_35;
      MR_Word transform_hlds__deforest__Var_37;
      MR_Word transform_hlds__deforest__Var_38;

      {
        mercury__list__det_index1_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_84_84, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_34, &transform_hlds__deforest__conv2_Arg_35);
      }
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_35 = ((MR_Word) transform_hlds__deforest__conv2_Arg_35);
      {
        hlds__instmap__instmap_lookup_var_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_35, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_36);
      }
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_51 = base;
        MR_hl_field(MR_mktag(1), base, 0) = NULL;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_52));
      }
      {
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_36, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_88);
      }
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
        {
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_89_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
          {
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__deforest____Unify____list__list_1_1((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_89_89, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_51, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_88);
          }
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
            {
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_53 = (MR_Integer) 0;
              {
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_53);
              }
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
                {
                  {
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, &transform_hlds__deforest__Var_38, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_39);
                  }
                  {
                    hlds__hlds_pred__proc_info_get_goal_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_39, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_40);
                  }
                  {
                    hlds__goal_util__goal_size_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_40, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_41);
                  }
                  (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_28 == (MR_Integer) -1);
                  if (!((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded))
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_41 < (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_28);
                  if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
                    {
                      transform_hlds__deforest__deforest_call_9_p_0_1(transform_hlds__deforest__env_ptr);
                    }
                }
            }
        }
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word transform_hlds__deforest__TypeCtorInfo_87_87;
          MR_Word transform_hlds__deforest__ProcArgInfo_30;
          MR_Word transform_hlds__deforest__LeftArgs_32;
          MR_Word transform_hlds__deforest__Var_50;
          MR_Box transform_hlds__deforest__conv0_ProcArgInfo_30;
          MR_Word transform_hlds__deforest__Var_31;
          MR_Word transform_hlds__deforest__Var_33;

          {
            transform_hlds__deforest__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_50, 0) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10));
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_50, 1) = ((MR_Box) ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11));
          }
          {
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18, ((MR_Box) (transform_hlds__deforest__Var_50)), &transform_hlds__deforest__conv0_ProcArgInfo_30);
          }
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
            {
              transform_hlds__deforest__ProcArgInfo_30 = ((MR_Word) transform_hlds__deforest__conv0_ProcArgInfo_30);
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
            }
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
            {
              transform_hlds__deforest__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_30, (MR_Integer) 0)));
              transform_hlds__deforest__LeftArgs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_30, (MR_Integer) 1)));
              transform_hlds__deforest__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__ProcArgInfo_30, (MR_Integer) 2)));
              transform_hlds__deforest__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                mercury__set__member_2_p_1(transform_hlds__deforest__TypeCtorInfo_87_87, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_34, transform_hlds__deforest__LeftArgs_32, transform_hlds__deforest__deforest_call_9_p_0_3, transform_hlds__deforest__env_ptr);
              }
            }
        }
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
  MR_Word transform_hlds__deforest__PredId_10,
  MR_Integer transform_hlds__deforest__ProcId_11,
  MR_Word transform_hlds__deforest__Args_12,
  MR_Word transform_hlds__deforest__SymName_13,
  MR_Word transform_hlds__deforest__BuiltinState_14,
  MR_Word transform_hlds__deforest__Goal0_15,
  MR_Word * transform_hlds__deforest__Goal_16,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_46,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_47)
{
  {
    struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s transform_hlds__deforest__env;

    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10 = transform_hlds__deforest__PredId_10;
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11 = transform_hlds__deforest__ProcId_11;
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12 = transform_hlds__deforest__Args_12;
    (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14 = transform_hlds__deforest__BuiltinState_14;
    {
      MR_String transform_hlds__deforest__Name_21;
      MR_Integer transform_hlds__deforest__Arity_22;
      MR_Word transform_hlds__deforest__GoalInfo0_24;
      MR_Word transform_hlds__deforest__Context_25;
      MR_Word transform_hlds__deforest__LocalTermInfo0_26;
      MR_Word transform_hlds__deforest__Globals_27;
      MR_Word transform_hlds__deforest__DebugPD_29;
      MR_Word transform_hlds__deforest__GoalExpr0_23;

      {
        transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_46, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18);
      }
      {
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_46, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19);
      }
      {
        transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_46, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20);
      }
      {
        transform_hlds__deforest__Name_21 = mdbcomp__sym_name__unqualify_name_1_f_0(transform_hlds__deforest__SymName_13);
      }
      (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_84_84 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
      {
        mercury__list__length_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeInfo_84_84, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, &transform_hlds__deforest__Arity_22);
      }
      transform_hlds__deforest__GoalExpr0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_15, (MR_Integer) 0)));
      transform_hlds__deforest__GoalInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_15, (MR_Integer) 1)));
      {
        transform_hlds__deforest__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__deforest__GoalInfo0_24);
      }
      {
        transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_46, &transform_hlds__deforest__LocalTermInfo0_26);
      }
      {
        hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, &transform_hlds__deforest__Globals_27);
      }
      {
        libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_27, (MR_Integer) 400, &(transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_28);
      }
      {
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_27, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_29);
      }
      {
        transform_hlds__deforest__deforest_call_9_p_0_4(&transform_hlds__deforest__env);
      }
      if ((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
        {
          MR_Word transform_hlds__deforest__Var_56;
          MR_Word transform_hlds__deforest__Var_58;
          MR_Word transform_hlds__deforest__Var_59;
          MR_Word transform_hlds__deforest__Var_60;
          MR_Word transform_hlds__deforest__LocalTermInfo_43;

          {
            transform_hlds__deforest__Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_58, 0) = ((MR_Box) (transform_hlds__deforest__Name_21));
          }
          {
            transform_hlds__deforest__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_60, 0) = ((MR_Box) (transform_hlds__deforest__Arity_22));
          }
          {
            transform_hlds__deforest__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_59, 0) = ((MR_Box) (transform_hlds__deforest__Var_60));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__deforest__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_56, 0) = ((MR_Box) (transform_hlds__deforest__Var_58));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_56, 1) = ((MR_Box) (transform_hlds__deforest__Var_59));
          }
          {
            transform_hlds__pd_debug__pd_debug_message_context_6_p_0(transform_hlds__deforest__DebugPD_29, transform_hlds__deforest__Context_25, (MR_String) "Found extra information for call to %s/%i\n", transform_hlds__deforest__Var_56);
          }
          {
            (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__pd_term__local_check_5_p_0((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, transform_hlds__deforest__Goal0_15, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, transform_hlds__deforest__LocalTermInfo0_26, &transform_hlds__deforest__LocalTermInfo_43);
          }
          if ((transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
            {
              MR_Word transform_hlds__deforest__Goal1_44;
              MR_Word transform_hlds__deforest__Optimized_45;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_66_66;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_69_69;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70;

              {
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_29, (MR_String) "Local termination check succeeded\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              {
                transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(transform_hlds__deforest__LocalTermInfo_43, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_46, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_66_66);
              }
              {
                transform_hlds__deforest__unfold_call_10_p_0((MR_Integer) 1, (MR_Integer) 1, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (transform_hlds__deforest__env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, transform_hlds__deforest__Goal0_15, &transform_hlds__deforest__Goal1_44, &transform_hlds__deforest__Optimized_45, transform_hlds__deforest__STATE_VARIABLE_PDInfo_66_66, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_69_69);
              }
              switch (transform_hlds__deforest__Optimized_45) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal1_44;
                    transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_69_69;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Goal1_44, transform_hlds__deforest__Goal_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_69_69, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70);
                  }
                  break;
              }
              {
                transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(transform_hlds__deforest__LocalTermInfo0_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_70_70, transform_hlds__deforest__STATE_VARIABLE_PDInfo_47);
              }
            }
          else
            {
              {
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_29, (MR_String) "Local termination check failed\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal0_15;
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_47 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_46;
            }
        }
      else
        {
          MR_Word transform_hlds__deforest__Var_78;
          MR_Word transform_hlds__deforest__Var_80;
          MR_Word transform_hlds__deforest__Var_81;
          MR_Word transform_hlds__deforest__Var_82;

          {
            transform_hlds__deforest__Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_80, 0) = ((MR_Box) (transform_hlds__deforest__Name_21));
          }
          {
            transform_hlds__deforest__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_82, 0) = ((MR_Box) (transform_hlds__deforest__Arity_22));
          }
          {
            transform_hlds__deforest__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_81, 0) = ((MR_Box) (transform_hlds__deforest__Var_82));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__deforest__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_78, 0) = ((MR_Box) (transform_hlds__deforest__Var_80));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_78, 1) = ((MR_Box) (transform_hlds__deforest__Var_81));
          }
          {
            transform_hlds__pd_debug__pd_debug_message_context_6_p_0(transform_hlds__deforest__DebugPD_29, transform_hlds__deforest__Context_25, (MR_String) "No extra information for call to %s/%i\n", transform_hlds__deforest__Var_78);
          }
          *transform_hlds__deforest__Goal_16 = transform_hlds__deforest__Goal0_15;
          *transform_hlds__deforest__STATE_VARIABLE_PDInfo_47 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_46;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_3;

    {
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_3);
    }
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
  MR_Word transform_hlds__deforest__Goal0_10,
  MR_Word transform_hlds__deforest__BetweenGoals_11,
  MR_Word transform_hlds__deforest__GoalToAppend0_12,
  MR_Word transform_hlds__deforest__NonLocals0_13,
  MR_Integer transform_hlds__deforest__CurrBranch_14,
  MR_Word transform_hlds__deforest__Branches_15,
  MR_Word * transform_hlds__deforest__Goal_16,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_31)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__GoalToAppend_19;
    MR_Word transform_hlds__deforest__GoalList0_20;
    MR_Word transform_hlds__deforest__GoalListToAppend_21;
    MR_Word transform_hlds__deforest__Goals_22;
    MR_Word transform_hlds__deforest__SubNonLocals_23;
    MR_Word transform_hlds__deforest__NonLocals_24;
    MR_Word transform_hlds__deforest__Delta0_25;
    MR_Word transform_hlds__deforest__Delta_26;
    MR_Word transform_hlds__deforest__Detism_27;
    MR_Word transform_hlds__deforest__Purity_28;
    MR_Word transform_hlds__deforest__GoalInfo_29;
    MR_Word transform_hlds__deforest__Var_37;
    MR_Word transform_hlds__deforest__Var_38;
    MR_Word transform_hlds__deforest__Var_39;
    MR_Word transform_hlds__deforest__Var_41;

    {
      transform_hlds__deforest__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__deforest__CurrBranch_14)), transform_hlds__deforest__Branches_15);
    }
    if (transform_hlds__deforest__succeeded)
      {
        MR_Word transform_hlds__deforest__InstMap0_18;
        MR_Word transform_hlds__deforest__Var_33;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35;
        MR_Word transform_hlds__deforest__GoalExpr0_56;
        MR_Word transform_hlds__deforest__GoalInfo0_57;
        MR_Word transform_hlds__deforest__GoalExpr_58;
        MR_Word transform_hlds__deforest__GoalInfo_59;
        MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34;

        {
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30, &transform_hlds__deforest__InstMap0_18);
        }
        {
          transform_hlds__deforest__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_33, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_10));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_33, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_11));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[12], transform_hlds__deforest__Var_33, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30)), &transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34);
        }
        transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_34_34);
        transform_hlds__deforest__GoalExpr0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend0_12, (MR_Integer) 0)));
        transform_hlds__deforest__GoalInfo0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend0_12, (MR_Integer) 1)));
        {
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_56, &transform_hlds__deforest__GoalExpr_58, transform_hlds__deforest__GoalInfo0_57, &transform_hlds__deforest__GoalInfo_59, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35);
        }
        {
          transform_hlds__deforest__GoalToAppend_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend_19, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_58));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__GoalToAppend_19, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_59));
        }
        {
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_18, transform_hlds__deforest__STATE_VARIABLE_PDInfo_35_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_31);
        }
      }
    else
      {
        transform_hlds__deforest__GoalToAppend_19 = transform_hlds__deforest__GoalToAppend0_12;
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_31 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_30;
      }
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal0_10, &transform_hlds__deforest__GoalList0_20);
    }
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__GoalToAppend_19, &transform_hlds__deforest__GoalListToAppend_21);
    }
    {
      transform_hlds__deforest__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_39, 0) = ((MR_Box) (transform_hlds__deforest__GoalListToAppend_21));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__deforest__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_38, 0) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_11));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_38, 1) = ((MR_Box) (transform_hlds__deforest__Var_39));
    }
    {
      transform_hlds__deforest__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_37, 0) = ((MR_Box) (transform_hlds__deforest__GoalList0_20));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_37, 1) = ((MR_Box) (transform_hlds__deforest__Var_38));
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__Var_37, &transform_hlds__deforest__Goals_22);
    }
    {
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__SubNonLocals_23);
    }
    {
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__NonLocals0_13, transform_hlds__deforest__SubNonLocals_23, &transform_hlds__deforest__NonLocals_24);
    }
    {
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Delta0_25);
    }
    {
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_24, transform_hlds__deforest__Delta0_25, &transform_hlds__deforest__Delta_26);
    }
    {
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Detism_27);
    }
    {
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__Goals_22, &transform_hlds__deforest__Purity_28);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_24, transform_hlds__deforest__Delta_26, transform_hlds__deforest__Detism_27, transform_hlds__deforest__Purity_28, &transform_hlds__deforest__GoalInfo_29);
    }
    {
      transform_hlds__deforest__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_41, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_41, 2) = ((MR_Box) (transform_hlds__deforest__Goals_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__deforest__Goal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__Var_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_29));
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
  MR_Word transform_hlds__deforest__Var_1,
  MR_Word transform_hlds__deforest__BetweenGoals_2,
  MR_Word transform_hlds__deforest__GoalToAppend_3,
  MR_Word transform_hlds__deforest__NonLocals_4,
  MR_Integer transform_hlds__deforest__CurrCase_5,
  MR_Word transform_hlds__deforest__Branches_6,
  MR_Word transform_hlds__deforest__HeadVar__7_7,
  MR_Word * transform_hlds__deforest__HeadVar__8_8,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_10)
{
  {
    MR_bool transform_hlds__deforest__succeeded;

    if ((transform_hlds__deforest__HeadVar__7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__deforest__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_10 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9;
      }
    else
      {
        MR_Word transform_hlds__deforest__Case0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__7_7, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__7_7, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__Case_28;
        MR_Word transform_hlds__deforest__Cases_29;
        MR_Word transform_hlds__deforest__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_26, (MR_Integer) 2)));
        MR_Word transform_hlds__deforest__InstMap0_34;
        MR_Word transform_hlds__deforest__Goal_35;
        MR_Integer transform_hlds__deforest__NextCase_36;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42;

        {
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9, &transform_hlds__deforest__InstMap0_34);
        }
        {
          transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__MainConsId_31, transform_hlds__deforest__OtherConsIds_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_9, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39);
        }
        {
          transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Goal0_33, transform_hlds__deforest__BetweenGoals_2, transform_hlds__deforest__GoalToAppend_3, transform_hlds__deforest__NonLocals_4, transform_hlds__deforest__CurrCase_5, transform_hlds__deforest__Branches_6, &transform_hlds__deforest__Goal_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_39_39, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40);
        }
        {
          transform_hlds__deforest__Case_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 0) = ((MR_Box) (transform_hlds__deforest__MainConsId_31));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 1) = ((MR_Box) (transform_hlds__deforest__OtherConsIds_32));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_28, 2) = ((MR_Box) (transform_hlds__deforest__Goal_35));
        }
        transform_hlds__deforest__NextCase_36 = (transform_hlds__deforest__CurrCase_5 + (MR_Integer) 1);
        {
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_40_40, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42);
        }
        {
          transform_hlds__deforest__append_goal_to_cases_10_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__BetweenGoals_2, transform_hlds__deforest__GoalToAppend_3, transform_hlds__deforest__NonLocals_4, transform_hlds__deforest__NextCase_36, transform_hlds__deforest__Branches_6, transform_hlds__deforest__Cases0_27, &transform_hlds__deforest__Cases_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_42_42, transform_hlds__deforest__STATE_VARIABLE_PDInfo_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__deforest__HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Case_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Cases_29));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
  MR_Word transform_hlds__deforest__BetweenGoals_1,
  MR_Word transform_hlds__deforest__GoalToAppend_2,
  MR_Word transform_hlds__deforest__NonLocals_3,
  MR_Integer transform_hlds__deforest__CurrBranch_4,
  MR_Word transform_hlds__deforest__Branches_5,
  MR_Word transform_hlds__deforest__HeadVar__6_6,
  MR_Word * transform_hlds__deforest__HeadVar__7_7,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_9)
{
  {
    MR_bool transform_hlds__deforest__succeeded;

    if ((transform_hlds__deforest__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__deforest__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_9 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8;
      }
    else
      {
        MR_Word transform_hlds__deforest__Goal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__Goal_25;
        MR_Word transform_hlds__deforest__Goals_26;
        MR_Word transform_hlds__deforest__InstMap0_28;
        MR_Integer transform_hlds__deforest__NextBranch_29;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;

        {
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__InstMap0_28);
        }
        {
          transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Goal0_23, transform_hlds__deforest__BetweenGoals_1, transform_hlds__deforest__GoalToAppend_2, transform_hlds__deforest__NonLocals_3, transform_hlds__deforest__CurrBranch_4, transform_hlds__deforest__Branches_5, &transform_hlds__deforest__Goal_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_8, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32);
        }
        transform_hlds__deforest__NextBranch_29 = (transform_hlds__deforest__CurrBranch_4 + (MR_Integer) 1);
        {
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_28, transform_hlds__deforest__STATE_VARIABLE_PDInfo_32_32, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
        }
        {
          transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(transform_hlds__deforest__BetweenGoals_1, transform_hlds__deforest__GoalToAppend_2, transform_hlds__deforest__NonLocals_3, transform_hlds__deforest__NextBranch_29, transform_hlds__deforest__Branches_5, transform_hlds__deforest__Goals0_24, &transform_hlds__deforest__Goals_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__deforest__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_26));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
  MR_Word transform_hlds__deforest__NonLocals_9,
  MR_Word transform_hlds__deforest__DeforestInfo_10,
  MR_Word transform_hlds__deforest__EarlierGoal_11,
  MR_Word transform_hlds__deforest__BetweenGoals_12,
  MR_Word transform_hlds__deforest__LaterGoal_13,
  MR_Word * transform_hlds__deforest__Goal_14,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_88)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__InstMap0_16;
    MR_Word transform_hlds__deforest__EarlierGoalExpr_17;
    MR_Word transform_hlds__deforest__GoalExpr_24;
    MR_Word transform_hlds__deforest__Delta0_66;
    MR_Word transform_hlds__deforest__LaterInfo_68;
    MR_Word transform_hlds__deforest__Delta1_69;
    MR_Word transform_hlds__deforest__Delta2_70;
    MR_Word transform_hlds__deforest__Delta_71;
    MR_Word transform_hlds__deforest__Detism0_72;
    MR_Word transform_hlds__deforest__Detism1_73;
    MR_Word transform_hlds__deforest__Detism_74;
    MR_Word transform_hlds__deforest__Purity0_75;
    MR_Word transform_hlds__deforest__Purity1_76;
    MR_Word transform_hlds__deforest__Purity_77;
    MR_Word transform_hlds__deforest__GoalInfo_78;
    MR_Word transform_hlds__deforest__Goal2_79;
    MR_Word transform_hlds__deforest__ModuleInfo_80;
    MR_Word transform_hlds__deforest__Globals_81;
    MR_Word transform_hlds__deforest__SimplifyTasks0_82;
    MR_Word transform_hlds__deforest__SimpList0_83;
    MR_Word transform_hlds__deforest__SimpList_84;
    MR_Word transform_hlds__deforest__SimplifyTasks_85;
    MR_Word transform_hlds__deforest__Goal3_86;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102;
    MR_Word transform_hlds__deforest__Var_103;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111;
    MR_Word transform_hlds__deforest__Var_18;
    MR_Word transform_hlds__deforest__Var_67;

    {
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__InstMap0_16);
    }
    transform_hlds__deforest__EarlierGoalExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_11, (MR_Integer) 0)));
    transform_hlds__deforest__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_11, (MR_Integer) 1)));
    switch (MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__deforest__Disjuncts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__Disjuncts_36;

              {
                transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__NonLocals_9, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, transform_hlds__deforest__Disjuncts0_35, &transform_hlds__deforest__Disjuncts_36, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
              }
              {
                transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Disjuncts_36));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__deforest__Var1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__CanFail1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 2)));
              MR_Word transform_hlds__deforest__Cases1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 3)));
              MR_Word transform_hlds__deforest__CaseNonLocals_22;
              MR_Word transform_hlds__deforest__Cases_23;

              {
                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__Var1_19, transform_hlds__deforest__NonLocals_9, &transform_hlds__deforest__CaseNonLocals_22);
              }
              {
                transform_hlds__deforest__append_goal_to_cases_10_p_0(transform_hlds__deforest__Var1_19, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__CaseNonLocals_22, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, transform_hlds__deforest__Cases1_21, &transform_hlds__deforest__Cases_23, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
              }
              {
                transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Var1_19));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__deforest__CanFail1_20));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 3) = ((MR_Box) (transform_hlds__deforest__Cases_23));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__deforest__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 2)));
              MR_Word transform_hlds__deforest__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 3)));
              MR_Word transform_hlds__deforest__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__EarlierGoalExpr_17, (MR_Integer) 4)));
              MR_Word transform_hlds__deforest__CondInfo_30;
              MR_Word transform_hlds__deforest__CondNonLocals_31;
              MR_Word transform_hlds__deforest__ThenNonLocals_32;
              MR_Word transform_hlds__deforest__Then_33;
              MR_Word transform_hlds__deforest__Else_34;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
              MR_Word transform_hlds__deforest__Var_29;

              {
                transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Cond_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_87, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94);
              }
              transform_hlds__deforest__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Cond_26, (MR_Integer) 0)));
              transform_hlds__deforest__CondInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Cond_26, (MR_Integer) 1)));
              {
                transform_hlds__deforest__CondNonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__CondInfo_30);
              }
              {
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__CondNonLocals_31, transform_hlds__deforest__NonLocals_9, &transform_hlds__deforest__ThenNonLocals_32);
              }
              {
                transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Then0_27, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__ThenNonLocals_32, (MR_Integer) 1, transform_hlds__deforest__DeforestInfo_10, &transform_hlds__deforest__Then_33, transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96);
              }
              {
                transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
              }
              {
                transform_hlds__deforest__append_goal_9_p_0(transform_hlds__deforest__Else0_28, transform_hlds__deforest__BetweenGoals_12, transform_hlds__deforest__LaterGoal_13, transform_hlds__deforest__NonLocals_9, (MR_Integer) 2, transform_hlds__deforest__DeforestInfo_10, &transform_hlds__deforest__Else_34, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101);
              }
              {
                transform_hlds__deforest__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__deforest__Vars_25));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__deforest__Cond_26));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 3) = ((MR_Box) (transform_hlds__deforest__Then_33));
                MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, 4) = ((MR_Box) (transform_hlds__deforest__Else_34));
              }
            }
            break;
        }
        break;
    }
    {
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_101_101, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102);
    }
    {
      transform_hlds__deforest__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_103, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_11));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_103, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_12));
    }
    {
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__deforest__Var_103, &transform_hlds__deforest__Delta0_66);
    }
    transform_hlds__deforest__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_13, (MR_Integer) 0)));
    transform_hlds__deforest__LaterInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_13, (MR_Integer) 1)));
    {
      transform_hlds__deforest__Delta1_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
    {
      hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(transform_hlds__deforest__Delta0_66, transform_hlds__deforest__Delta1_69, (MR_Integer) 2, &transform_hlds__deforest__Delta2_70);
    }
    {
      hlds__instmap__instmap_delta_restrict_3_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__Delta2_70, &transform_hlds__deforest__Delta_71);
    }
    {
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__deforest__Var_103, &transform_hlds__deforest__Detism0_72);
    }
    {
      transform_hlds__deforest__Detism1_73 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
    {
      parse_tree__prog_detism__det_conjunction_detism_3_p_0(transform_hlds__deforest__Detism0_72, transform_hlds__deforest__Detism1_73, &transform_hlds__deforest__Detism_74);
    }
    {
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__deforest__Var_103, &transform_hlds__deforest__Purity0_75);
    }
    {
      transform_hlds__deforest__Purity1_76 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__deforest__LaterInfo_68);
    }
    {
      transform_hlds__deforest__Purity_77 = parse_tree__prog_data__worst_purity_2_f_0(transform_hlds__deforest__Purity0_75, transform_hlds__deforest__Purity1_76);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__deforest__NonLocals_9, transform_hlds__deforest__Delta_71, transform_hlds__deforest__Detism_74, transform_hlds__deforest__Purity_77, &transform_hlds__deforest__GoalInfo_78);
    }
    {
      transform_hlds__deforest__Goal2_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal2_79, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_24));
      MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal2_79, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_78));
    }
    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__ModuleInfo_80);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_80, &transform_hlds__deforest__Globals_81);
    }
    {
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_81, &transform_hlds__deforest__SimplifyTasks0_82);
    }
    {
      transform_hlds__deforest__SimpList0_83 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(transform_hlds__deforest__SimplifyTasks0_82);
    }
    {
      transform_hlds__deforest__SimpList_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__SimpList_84, 0) = ((MR_Box) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__SimpList_84, 1) = ((MR_Box) (transform_hlds__deforest__SimpList0_83));
    }
    {
      transform_hlds__deforest__SimplifyTasks_85 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(transform_hlds__deforest__SimpList_84);
    }
    {
      transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_85, transform_hlds__deforest__Goal2_79, &transform_hlds__deforest__Goal3_86, transform_hlds__deforest__STATE_VARIABLE_PDInfo_102_102, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
    }
    {
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110);
    }
    {
      transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Goal3_86, transform_hlds__deforest__Goal_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111);
    }
    {
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_111_111, transform_hlds__deforest__STATE_VARIABLE_PDInfo_88);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
    MR_Word transform_hlds__deforest__conv2_HeadVar__3_3;

    {
      transform_hlds__pd_info__remove_version_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv2_HeadVar__3_3);
    }
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv2_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
    MR_Word transform_hlds__deforest__conv0_HeadVar__3_3;

    {
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_HeadVar__3_3);
    }
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
  MR_Word transform_hlds__deforest__NonLocals_10,
  MR_Word transform_hlds__deforest__DeforestInfo0_11,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85,
  MR_Word * transform_hlds__deforest__Optimized_14,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_87)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__TypeCtorInfo_168_168;
    MR_Word transform_hlds__deforest__TypeCtorInfo_169_169;
    MR_Word transform_hlds__deforest__ModuleInfo_16;
    MR_Word transform_hlds__deforest__Globals_17;
    MR_Word transform_hlds__deforest__DebugPD_18;
    MR_Word transform_hlds__deforest__InstMap0_19;
    MR_Word transform_hlds__deforest__CreatedVersions0_20;
    MR_Integer transform_hlds__deforest__Depth0_21;
    MR_Word transform_hlds__deforest__DeforestInfo_23;
    MR_Word transform_hlds__deforest__BeforeIrrelevant_24;
    MR_Word transform_hlds__deforest__AfterIrrelevant_25;
    MR_Word transform_hlds__deforest__ConjNonLocals_26;
    MR_Word transform_hlds__deforest__CurrPredProcId_27;
    MR_Word transform_hlds__deforest__Parents0_28;
    MR_Integer transform_hlds__deforest__CostDelta0_29;
    MR_Integer transform_hlds__deforest__SizeDelta0_30;
    MR_Word transform_hlds__deforest__EarlierGoal_31;
    MR_Word transform_hlds__deforest__BetweenGoals_33;
    MR_Word transform_hlds__deforest__LaterGoal_34;
    MR_Word transform_hlds__deforest__DeforestBranches_36;
    MR_Word transform_hlds__deforest__ShouldOptimize_37;
    MR_Word transform_hlds__deforest__Optimized0_38;
    MR_Word transform_hlds__deforest__Goals_39;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151;
    MR_Word transform_hlds__deforest__Var_91;
    MR_Word transform_hlds__deforest__Var_93;
    MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96;
    MR_Word transform_hlds__deforest__Var_32;
    MR_Word transform_hlds__deforest__Var_35;
    MR_Word transform_hlds__deforest__Var_154;
    MR_Word transform_hlds__deforest__Var_156;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__ModuleInfo_16);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_16, &transform_hlds__deforest__Globals_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_18);
    }
    {
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__InstMap0_19);
    }
    {
      transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__CreatedVersions0_20);
    }
    {
      transform_hlds__pd_info__pd_info_get_depth_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86, &transform_hlds__deforest__Depth0_21);
    }
    {
      transform_hlds__deforest__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_93, 0) = ((MR_Box) (transform_hlds__deforest__Depth0_21));
    }
    {
      transform_hlds__deforest__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_91, 0) = ((MR_Box) (transform_hlds__deforest__Var_93));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "checking for deforestation at depth %i\n", transform_hlds__deforest__Var_91);
    }
    {
      transform_hlds__deforest__reorder_conj_5_p_0(transform_hlds__deforest__DeforestInfo0_11, &transform_hlds__deforest__DeforestInfo_23, &transform_hlds__deforest__BeforeIrrelevant_24, &transform_hlds__deforest__AfterIrrelevant_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86);
    }
    {
      transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(transform_hlds__deforest__NonLocals_10, transform_hlds__deforest__DeforestInfo_23, transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82, transform_hlds__deforest__BeforeIrrelevant_24, transform_hlds__deforest__AfterIrrelevant_25, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84, &transform_hlds__deforest__ConjNonLocals_26);
    }
    transform_hlds__deforest__TypeCtorInfo_168_168 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    transform_hlds__deforest__TypeCtorInfo_169_169 = (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0;
    {
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_168_168, transform_hlds__deforest__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__deforest_scalar_common_2[10], transform_hlds__deforest__BeforeIrrelevant_24, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_86)), &transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96);
    }
    transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_PDInfo_96_96);
    {
      transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__CurrPredProcId_27);
    }
    {
      transform_hlds__pd_info__pd_info_get_parents_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__Parents0_28);
    }
    {
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__CostDelta0_29);
    }
    {
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__SizeDelta0_30);
    }
    transform_hlds__deforest__EarlierGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 0)));
    transform_hlds__deforest__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 1)));
    transform_hlds__deforest__BetweenGoals_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 2)));
    transform_hlds__deforest__LaterGoal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 3)));
    transform_hlds__deforest__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 4)));
    transform_hlds__deforest__DeforestBranches_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_23, (MR_Integer) 5)));
    {
      transform_hlds__deforest__should_try_deforestation_4_p_0(transform_hlds__deforest__DeforestInfo_23, &transform_hlds__deforest__ShouldOptimize_37, transform_hlds__deforest__STATE_VARIABLE_PDInfo_96_96, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
    }
    switch (transform_hlds__deforest__ShouldOptimize_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
          transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__deforest__PredId1_40;
          MR_Word transform_hlds__deforest__PredId2_47;
          MR_Word transform_hlds__deforest__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
          MR_Word transform_hlds__deforest__Var_99;
          MR_Word transform_hlds__deforest__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
          MR_Integer transform_hlds__deforest__Var_41;
          MR_Word transform_hlds__deforest__Var_42;
          MR_Word transform_hlds__deforest__Var_43;
          MR_Word transform_hlds__deforest__Var_44;
          MR_Word transform_hlds__deforest__Var_45;
          MR_Word transform_hlds__deforest__Var_53;
          MR_Integer transform_hlds__deforest__Var_48;
          MR_Word transform_hlds__deforest__Var_49;
          MR_Word transform_hlds__deforest__Var_50;
          MR_Word transform_hlds__deforest__Var_51;
          MR_Word transform_hlds__deforest__Var_52;

          transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_98)) == (MR_mktag((MR_Integer) 2)));
          if (transform_hlds__deforest__succeeded)
            {
              transform_hlds__deforest__PredId1_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_98, (MR_Integer) 0)));
              transform_hlds__deforest__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_98, (MR_Integer) 1)));
              transform_hlds__deforest__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_98, (MR_Integer) 2)));
              transform_hlds__deforest__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_98, (MR_Integer) 3)));
              transform_hlds__deforest__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_98, (MR_Integer) 4)));
              transform_hlds__deforest__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_98, (MR_Integer) 5)));
              transform_hlds__deforest__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
              transform_hlds__deforest__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));
              transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_99)) == (MR_mktag((MR_Integer) 2)));
              if (transform_hlds__deforest__succeeded)
                {
                  transform_hlds__deforest__PredId2_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_99, (MR_Integer) 0)));
                  transform_hlds__deforest__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_99, (MR_Integer) 1)));
                  transform_hlds__deforest__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_99, (MR_Integer) 2)));
                  transform_hlds__deforest__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_99, (MR_Integer) 3)));
                  transform_hlds__deforest__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_99, (MR_Integer) 4)));
                  transform_hlds__deforest__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_99, (MR_Integer) 5)));
                }
            }
          if (transform_hlds__deforest__succeeded)
            {
              MR_String transform_hlds__deforest__PredName1_54;
              MR_String transform_hlds__deforest__PredName2_55;
              MR_Word transform_hlds__deforest__MaybeGoal_56;
              MR_Word transform_hlds__deforest__Var_108;
              MR_Word transform_hlds__deforest__Var_102;
              MR_Word transform_hlds__deforest__Var_104;
              MR_Word transform_hlds__deforest__Var_105;
              MR_Word transform_hlds__deforest__Var_106;

              {
                transform_hlds__deforest__PredName1_54 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId1_40);
              }
              {
                transform_hlds__deforest__PredName2_55 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId2_47);
              }
              {
                transform_hlds__deforest__Var_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_104, 0) = ((MR_Box) (transform_hlds__deforest__PredName1_54));
              }
              {
                transform_hlds__deforest__Var_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_106, 0) = ((MR_Box) (transform_hlds__deforest__PredName2_55));
              }
              {
                transform_hlds__deforest__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_105, 0) = ((MR_Box) (transform_hlds__deforest__Var_106));
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                transform_hlds__deforest__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_102, 0) = ((MR_Box) (transform_hlds__deforest__Var_104));
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_102, 1) = ((MR_Box) (transform_hlds__deforest__Var_105));
              }
              {
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "deforesting calls to %s and %s\n", transform_hlds__deforest__Var_102);
              }
              {
                transform_hlds__deforest__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_108, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_34));
              }
              {
                transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__Var_108, &transform_hlds__deforest__MaybeGoal_56, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
              }
              if ((transform_hlds__deforest__MaybeGoal_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
                  transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  MR_Word transform_hlds__deforest__Goal_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeGoal_56, (MR_Integer) 0)));

                  transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
                  {
                    transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_57));
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
            }
          else
            {
              MR_Word transform_hlds__deforest__PredId_60;
              MR_Word transform_hlds__deforest__PredProcId_67;
              MR_Word transform_hlds__deforest__EarlierGoalExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
              MR_Integer transform_hlds__deforest__ProcId_61;
              MR_Word transform_hlds__deforest__Var_111;
              MR_Word transform_hlds__deforest__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__Var_66;
              MR_Word transform_hlds__deforest__Var_62;
              MR_Word transform_hlds__deforest__Var_63;
              MR_Word transform_hlds__deforest__Var_64;
              MR_Word transform_hlds__deforest__Var_65;
              MR_Word transform_hlds__deforest__TypeCtorInfo_170_170;

              {
                transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__EarlierGoalExpr_58);
              }
              if (transform_hlds__deforest__succeeded)
                {
                  transform_hlds__deforest__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
                  transform_hlds__deforest__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));
                  transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_111)) == (MR_mktag((MR_Integer) 2)));
                  if (transform_hlds__deforest__succeeded)
                    {
                      transform_hlds__deforest__PredId_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_111, (MR_Integer) 0)));
                      transform_hlds__deforest__ProcId_61 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_111, (MR_Integer) 1)));
                      transform_hlds__deforest__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_111, (MR_Integer) 2)));
                      transform_hlds__deforest__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_111, (MR_Integer) 3)));
                      transform_hlds__deforest__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_111, (MR_Integer) 4)));
                      transform_hlds__deforest__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_111, (MR_Integer) 5)));
                      {
                        transform_hlds__deforest__PredProcId_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_67, 0) = ((MR_Box) (transform_hlds__deforest__PredId_60));
                        MR_hl_field(MR_mktag(0), transform_hlds__deforest__PredProcId_67, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_61));
                      }
                      {
                        transform_hlds__deforest__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__deforest__PredProcId_67, transform_hlds__deforest__CurrPredProcId_27);
                      }
                      transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
                      if (transform_hlds__deforest__succeeded)
                        {
                          transform_hlds__deforest__TypeCtorInfo_170_170 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                          {
                            transform_hlds__deforest__succeeded = mercury__set__member_2_p_0(transform_hlds__deforest__TypeCtorInfo_170_170, ((MR_Box) (transform_hlds__deforest__PredProcId_67)), transform_hlds__deforest__Parents0_28);
                          }
                          transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
                        }
                    }
                }
              if (transform_hlds__deforest__succeeded)
                {
                  MR_String transform_hlds__deforest__CurrPredName_68;
                  MR_Word transform_hlds__deforest__Parents_69;
                  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119;
                  MR_Word transform_hlds__deforest__Goal_159;
                  MR_Word transform_hlds__deforest__Var_114;
                  MR_Word transform_hlds__deforest__Var_116;

                  {
                    transform_hlds__deforest__CurrPredName_68 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__deforest__ModuleInfo_16, transform_hlds__deforest__PredId_60);
                  }
                  {
                    transform_hlds__deforest__Var_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_116, 0) = ((MR_Box) (transform_hlds__deforest__CurrPredName_68));
                  }
                  {
                    transform_hlds__deforest__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_114, 0) = ((MR_Box) (transform_hlds__deforest__Var_116));
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Pushing call to %s into goal\n", transform_hlds__deforest__Var_114);
                  }
                  {
                    mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__deforest__PredProcId_67)), transform_hlds__deforest__Parents0_28, &transform_hlds__deforest__Parents_69);
                  }
                  {
                    transform_hlds__pd_info__pd_info_set_parents_3_p_0(transform_hlds__deforest__Parents_69, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119);
                  }
                  {
                    transform_hlds__deforest__push_goal_into_goal_8_p_0(transform_hlds__deforest__ConjNonLocals_26, transform_hlds__deforest__DeforestBranches_36, transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__Goal_159, transform_hlds__deforest__STATE_VARIABLE_PDInfo_119_119, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
                  }
                  {
                    transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_159));
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
                }
              else
                {
                  MR_Word transform_hlds__deforest__LaterGoalExpr_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 0)));
                  MR_Word transform_hlds__deforest__EarlierGoalExpr_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 0)));
                  MR_Word transform_hlds__deforest__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_31, (MR_Integer) 1)));
                  MR_Word transform_hlds__deforest__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_34, (MR_Integer) 1)));

                  {
                    transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__EarlierGoalExpr_160);
                  }
                  if (transform_hlds__deforest__succeeded)
                    {
                      transform_hlds__deforest__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__deforest__LaterGoalExpr_71);
                    }
                  if (transform_hlds__deforest__succeeded)
                    {
                      MR_Integer transform_hlds__deforest__ConjSize1_73;
                      MR_Integer transform_hlds__deforest__ConjSize2_74;
                      MR_Integer transform_hlds__deforest__NewSize_75;
                      MR_Integer transform_hlds__deforest__SizeDiff_76;
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
                      MR_Word transform_hlds__deforest__Var_128;
                      MR_Integer transform_hlds__deforest__Var_129;
                      MR_Word transform_hlds__deforest__Goal_161;

                      {
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Pushing goal into goal\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
                      {
                        transform_hlds__deforest__push_goal_into_goal_8_p_0(transform_hlds__deforest__ConjNonLocals_26, transform_hlds__deforest__DeforestBranches_36, transform_hlds__deforest__EarlierGoal_31, transform_hlds__deforest__BetweenGoals_33, transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__Goal_161, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
                      }
                      {
                        transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 0) = ((MR_Box) (transform_hlds__deforest__Goal_161));
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__Goals_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        transform_hlds__deforest__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_128, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_31));
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_128, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_33));
                      }
                      {
                        hlds__goal_util__goals_size_2_p_0(transform_hlds__deforest__Var_128, &transform_hlds__deforest__ConjSize1_73);
                      }
                      {
                        hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__LaterGoal_34, &transform_hlds__deforest__ConjSize2_74);
                      }
                      {
                        hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__Goal_161, &transform_hlds__deforest__NewSize_75);
                      }
                      transform_hlds__deforest__Var_129 = (transform_hlds__deforest__NewSize_75 - transform_hlds__deforest__ConjSize1_73);
                      transform_hlds__deforest__SizeDiff_76 = (transform_hlds__deforest__Var_129 - transform_hlds__deforest__ConjSize2_74);
                      {
                        transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDiff_76, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109);
                      }
                      transform_hlds__deforest__Optimized0_38 = (MR_Integer) 1;
                    }
                  else
                    {
                      {
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "not optimizing\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
                      transform_hlds__deforest__Goals_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      transform_hlds__deforest__Optimized0_38 = (MR_Integer) 0;
                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
                    }
                }
            }
        }
        break;
    }
    {
      *transform_hlds__deforest__Optimized_14 = transform_hlds__deforest__is_improvement_worth_while_4_f_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, transform_hlds__deforest__Optimized0_38, transform_hlds__deforest__CostDelta0_29, transform_hlds__deforest__SizeDelta0_30);
    }
    {
      transform_hlds__pd_info__pd_info_set_depth_3_p_0(transform_hlds__deforest__Depth0_21, transform_hlds__deforest__STATE_VARIABLE_PDInfo_109_109, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135);
    }
    {
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_135_135, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136);
    }
    switch (*transform_hlds__deforest__Optimized_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__deforest__TypeCtorInfo_172_172;
          MR_Word transform_hlds__deforest__CreatedVersions_77;
          MR_Word transform_hlds__deforest__NewVersions0_78;
          MR_Word transform_hlds__deforest__NewVersions_79;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149;
          MR_Box transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151;

          {
            transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__deforest__CostDelta0_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148);
          }
          {
            transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__deforest__SizeDelta0_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_148_148, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149);
          }
          {
            transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149, &transform_hlds__deforest__CreatedVersions_77);
          }
          transform_hlds__deforest__TypeCtorInfo_172_172 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
          {
            mercury__set__difference_3_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__CreatedVersions_77, transform_hlds__deforest__CreatedVersions0_20, &transform_hlds__deforest__NewVersions0_78);
          }
          {
            mercury__set__to_sorted_list_2_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__NewVersions0_78, &transform_hlds__deforest__NewVersions_79);
          }
          {
            mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_172_172, transform_hlds__deforest__TypeCtorInfo_169_169, (MR_Word) &transform_hlds__deforest_scalar_common_2[11], transform_hlds__deforest__NewVersions_79, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_PDInfo_149_149)), &transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151);
          }
          transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151 = ((MR_Word) transform_hlds__deforest__conv3_STATE_VARIABLE_PDInfo_151_151);
          *transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85 = transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__deforest__GoalsToProcess_80;
          MR_Word transform_hlds__deforest__GoalsAndInfo_81;
          MR_Word transform_hlds__deforest__Var_137;
          MR_Word transform_hlds__deforest__Var_138;
          MR_Word transform_hlds__deforest__Var_139;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143;
          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145;

          {
            transform_hlds__deforest__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_139, 0) = ((MR_Box) (transform_hlds__deforest__AfterIrrelevant_25));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__deforest__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_138, 0) = ((MR_Box) (transform_hlds__deforest__Goals_39));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_138, 1) = ((MR_Box) (transform_hlds__deforest__Var_139));
          }
          {
            transform_hlds__deforest__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_137, 0) = ((MR_Box) (transform_hlds__deforest__BeforeIrrelevant_24));
            MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_137, 1) = ((MR_Box) (transform_hlds__deforest__Var_138));
          }
          {
            mercury__list__condense_2_p_0(transform_hlds__deforest__TypeCtorInfo_168_168, transform_hlds__deforest__Var_137, &transform_hlds__deforest__GoalsToProcess_80);
          }
          {
            transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__GoalsToProcess_80, &transform_hlds__deforest__GoalsAndInfo_81, transform_hlds__deforest__STATE_VARIABLE_PDInfo_136_136, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141);
          }
          {
            mercury__list__append_3_p_1((MR_Word) &transform_hlds__deforest_scalar_common_2[1], transform_hlds__deforest__GoalsAndInfo_81, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_0_84, transform_hlds__deforest__STATE_VARIABLE_AfterGoals_85);
          }
          {
            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_141_141, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143);
          }
          {
            transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_143_143, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145);
          }
          {
            transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_145_145, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151);
          }
        }
        break;
    }
    {
      transform_hlds__deforest__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_156, 0) = ((MR_Box) (transform_hlds__deforest__Depth0_21));
    }
    {
      transform_hlds__deforest__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_154, 0) = ((MR_Box) (transform_hlds__deforest__Var_156));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "finished deforestation at depth %i\n", transform_hlds__deforest__Var_154);
    }
    {
      transform_hlds__pd_info__pd_info_set_parents_3_p_0(transform_hlds__deforest__Parents0_28, transform_hlds__deforest__STATE_VARIABLE_PDInfo_151_151, transform_hlds__deforest__STATE_VARIABLE_PDInfo_87);
    }
    *transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_83 = transform_hlds__deforest__STATE_VARIABLE_RevBeforeGoals_0_82;
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__NonLocals_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3,
  MR_Word * transform_hlds__deforest__HeadVar__4_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__deforest__succeeded;

        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__3_3, transform_hlds__deforest__HeadVar__4_4);
            }
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_6 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5;
          }
        else
          {
            MR_Word transform_hlds__deforest__Goal0_13;
            MR_Word transform_hlds__deforest__MaybeBranchInfo_14;
            MR_Word transform_hlds__deforest__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__deforest__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__deforest__Goals1_21;
            MR_Word transform_hlds__deforest__DeforestInfo_22;
            MR_Word transform_hlds__deforest__GoalBranchInfo_20;
            MR_Word transform_hlds__deforest__Var_44;

            transform_hlds__deforest__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_29, (MR_Integer) 0)));
            transform_hlds__deforest__MaybeBranchInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_29, (MR_Integer) 1)));
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__MaybeBranchInfo_14)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__deforest__succeeded)
              {
                transform_hlds__deforest__GoalBranchInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeBranchInfo_14, (MR_Integer) 0)));
                transform_hlds__deforest__Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  transform_hlds__deforest__succeeded = transform_hlds__deforest__search_for_deforest_goal_6_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__GoalBranchInfo_20, transform_hlds__deforest__Var_44, transform_hlds__deforest__Goals0_15, &transform_hlds__deforest__Goals1_21, &transform_hlds__deforest__DeforestInfo_22);
                }
              }
            if (transform_hlds__deforest__succeeded)
              {
                MR_Word transform_hlds__deforest__RevGoals1_23;
                MR_Word transform_hlds__deforest__Goals2_24;
                MR_Word transform_hlds__deforest__Optimized_25;
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30;

                {
                  transform_hlds__deforest__handle_deforestation_9_p_0(transform_hlds__deforest__NonLocals_2, transform_hlds__deforest__DeforestInfo_22, transform_hlds__deforest__HeadVar__3_3, &transform_hlds__deforest__RevGoals1_23, transform_hlds__deforest__Goals1_21, &transform_hlds__deforest__Goals2_24, &transform_hlds__deforest__Optimized_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30);
                }
                switch (transform_hlds__deforest__Optimized_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word transform_hlds__deforest__RevGoals2_26;
                      MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31;

                      {
                        transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31);
                      }
                      {
                        transform_hlds__deforest__RevGoals2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_26, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
                        MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_26, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__deforest__next_value_of_HeadVar__1_1 = transform_hlds__deforest__Goals0_15;
                        MR_Word transform_hlds__deforest__next_value_of_HeadVar__3_3 = transform_hlds__deforest__RevGoals2_26;
                        MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_31_31;

                        transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5;
                        transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__next_value_of_HeadVar__3_3;
                        transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__deforest__next_value_of_HeadVar__1_1 = transform_hlds__deforest__Goals2_24;
                        MR_Word transform_hlds__deforest__next_value_of_HeadVar__3_3 = transform_hlds__deforest__RevGoals1_23;
                        MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_30_30;

                        transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5;
                        transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__next_value_of_HeadVar__3_3;
                        transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                }
              }
            else
              {
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;
                MR_Word transform_hlds__deforest__RevGoals1_36;

                {
                  transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34);
                }
                {
                  transform_hlds__deforest__RevGoals1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals1_36, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals1_36, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__deforest__next_value_of_HeadVar__1_1 = transform_hlds__deforest__Goals0_15;
                  MR_Word transform_hlds__deforest__next_value_of_HeadVar__3_3 = transform_hlds__deforest__RevGoals1_36;
                  MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_34_34;

                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5;
                  transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__next_value_of_HeadVar__3_3;
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word * transform_hlds__deforest__Goals_3,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__deforest__succeeded;

        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__2_2, transform_hlds__deforest__Goals_3);
            }
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4;
          }
        else
          {
            MR_Word transform_hlds__deforest__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__deforest__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__deforest__Goal1_16;
            MR_Word transform_hlds__deforest__RevGoals2_20;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;
            MR_Word transform_hlds__deforest__GoalExpr0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_11, (MR_Integer) 0)));
            MR_Word transform_hlds__deforest__GoalInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_11, (MR_Integer) 1)));
            MR_Word transform_hlds__deforest__GoalExpr_37;
            MR_Word transform_hlds__deforest__GoalInfo_38;
            MR_Word transform_hlds__deforest__Goals1_17;
            MR_Word transform_hlds__deforest__Var_25;
            MR_Word transform_hlds__deforest__Var_26;
            MR_Word transform_hlds__deforest__Var_18;

            {
              transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_35, &transform_hlds__deforest__GoalExpr_37, transform_hlds__deforest__GoalInfo0_36, &transform_hlds__deforest__GoalInfo_38, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23);
            }
            {
              transform_hlds__deforest__Goal1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_37));
              MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_38));
            }
            {
              transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal1_16, transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24);
            }
            transform_hlds__deforest__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, (MR_Integer) 0)));
            transform_hlds__deforest__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_16, (MR_Integer) 1)));
            transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Var_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (transform_hlds__deforest__succeeded)
              {
                transform_hlds__deforest__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_25, (MR_Integer) 1)));
                transform_hlds__deforest__Goals1_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_25, (MR_Integer) 2)));
                transform_hlds__deforest__succeeded = (transform_hlds__deforest__Var_26 == (MR_Integer) 0);
              }
            if (transform_hlds__deforest__succeeded)
              {
                MR_Word transform_hlds__deforest__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                MR_Word transform_hlds__deforest__RevGoals1_19;

                {
                  mercury__list__reverse_2_p_0(transform_hlds__deforest__TypeCtorInfo_29_29, transform_hlds__deforest__Goals1_17, &transform_hlds__deforest__RevGoals1_19);
                }
                {
                  mercury__list__append_3_p_1(transform_hlds__deforest__TypeCtorInfo_29_29, transform_hlds__deforest__RevGoals1_19, transform_hlds__deforest__HeadVar__2_2, &transform_hlds__deforest__RevGoals2_20);
                }
              }
            else
              {
                transform_hlds__deforest__RevGoals2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_20, 0) = ((MR_Box) (transform_hlds__deforest__Goal1_16));
                MR_hl_field(MR_mktag(1), transform_hlds__deforest__RevGoals2_20, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__2_2));
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__deforest__next_value_of_HeadVar__1_1 = transform_hlds__deforest__Goals0_12;
              MR_Word transform_hlds__deforest__next_value_of_HeadVar__2_2 = transform_hlds__deforest__RevGoals2_20;
              MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;

              transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_4;
              transform_hlds__deforest__HeadVar__2_2 = transform_hlds__deforest__next_value_of_HeadVar__2_2;
              transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
  MR_Word transform_hlds__deforest__Var_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2,
  MR_Word * transform_hlds__deforest__HeadVar__3_3,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_5)
{
  {
    MR_bool transform_hlds__deforest__succeeded;

    if ((transform_hlds__deforest__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__deforest__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4;
      }
    else
      {
        MR_Word transform_hlds__deforest__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__Case_13;
        MR_Word transform_hlds__deforest__Cases_14;
        MR_Word transform_hlds__deforest__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case0_11, (MR_Integer) 2)));
        MR_Word transform_hlds__deforest__InstMap0_19;
        MR_Word transform_hlds__deforest__Goal_20;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25;
        MR_Word transform_hlds__deforest__GoalExpr0_32;
        MR_Word transform_hlds__deforest__GoalInfo0_33;
        MR_Word transform_hlds__deforest__GoalExpr_34;
        MR_Word transform_hlds__deforest__GoalInfo_35;

        {
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__InstMap0_19);
        }
        {
          transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__MainConsId_16, transform_hlds__deforest__OtherConsIds_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_4, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23);
        }
        transform_hlds__deforest__GoalExpr0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_18, (MR_Integer) 0)));
        transform_hlds__deforest__GoalInfo0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_18, (MR_Integer) 1)));
        {
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_32, &transform_hlds__deforest__GoalExpr_34, transform_hlds__deforest__GoalInfo0_33, &transform_hlds__deforest__GoalInfo_35, transform_hlds__deforest__STATE_VARIABLE_PDInfo_23_23, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24);
        }
        {
          transform_hlds__deforest__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_20, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_34));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_20, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_35));
        }
        {
          transform_hlds__deforest__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 0) = ((MR_Box) (transform_hlds__deforest__MainConsId_16));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 1) = ((MR_Box) (transform_hlds__deforest__OtherConsIds_17));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Case_13, 2) = ((MR_Box) (transform_hlds__deforest__Goal_20));
        }
        {
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_19, transform_hlds__deforest__STATE_VARIABLE_PDInfo_24_24, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25);
        }
        {
          transform_hlds__deforest__deforest_cases_5_p_0(transform_hlds__deforest__Var_1, transform_hlds__deforest__Cases0_12, &transform_hlds__deforest__Cases_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_25_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__deforest__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Case_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Cases_14));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4)
{
  {
    MR_bool transform_hlds__deforest__succeeded;

    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__deforest__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
      }
    else
      {
        MR_Word transform_hlds__deforest__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__Goal_10;
        MR_Word transform_hlds__deforest__Goals_11;
        MR_Word transform_hlds__deforest__InstMap0_13;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
        MR_Word transform_hlds__deforest__GoalExpr0_24;
        MR_Word transform_hlds__deforest__GoalInfo0_25;
        MR_Word transform_hlds__deforest__GoalExpr_26;
        MR_Word transform_hlds__deforest__GoalInfo_27;

        {
          transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__InstMap0_13);
        }
        transform_hlds__deforest__GoalExpr0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_8, (MR_Integer) 0)));
        transform_hlds__deforest__GoalInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_8, (MR_Integer) 1)));
        {
          transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_24, &transform_hlds__deforest__GoalExpr_26, transform_hlds__deforest__GoalInfo0_25, &transform_hlds__deforest__GoalInfo_27, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16);
        }
        {
          transform_hlds__deforest__Goal_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_26));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_27));
        }
        {
          transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
        {
          transform_hlds__deforest__deforest_disj_4_p_0(transform_hlds__deforest__Goals0_9, &transform_hlds__deforest__Goals_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__deforest__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Goal_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_11));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
  MR_Word transform_hlds__deforest__GoalExpr0_7,
  MR_Word * transform_hlds__deforest__GoalExpr_8,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_63)
{
  {
    MR_bool transform_hlds__deforest__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__deforest__GoalExpr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__deforest__SubGoal0_31 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr0_7), (MR_Integer) 0);
          MR_Word transform_hlds__deforest__SubGoal_32;

          {
            transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__SubGoal0_31, &transform_hlds__deforest__SubGoal_32, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
          }
          *transform_hlds__deforest__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__deforest__SubGoal_32);
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
        }
        break;
      case (MR_Integer) 1:
        {
          *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
          *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__deforest__PredId_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)));
          MR_Integer transform_hlds__deforest__ProcId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
          MR_Word transform_hlds__deforest__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
          MR_Word transform_hlds__deforest__BuiltinState_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
          MR_Word transform_hlds__deforest__Name_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 5)));
          MR_Word transform_hlds__deforest__Var_67;
          MR_Word transform_hlds__deforest__Var_68;
          MR_Word transform_hlds__deforest__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 4)));

          {
            transform_hlds__deforest__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_67, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr0_7));
            MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_67, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60));
          }
          {
            transform_hlds__deforest__deforest_call_9_p_0(transform_hlds__deforest__PredId_36, transform_hlds__deforest__ProcId_37, transform_hlds__deforest__Args_38, transform_hlds__deforest__Name_41, transform_hlds__deforest__BuiltinState_39, transform_hlds__deforest__Var_67, &transform_hlds__deforest__Var_68, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
          }
          *transform_hlds__deforest__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_68, (MR_Integer) 0)));
          *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_68, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
            }
            break;
          case (MR_Integer) 1:
            {
              *transform_hlds__deforest__GoalExpr_8 = transform_hlds__deforest__GoalExpr0_7;
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__deforest__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__Goals_13;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));

              switch (transform_hlds__deforest__ConjType_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
                    transform_hlds__deforest__Goals_13 = transform_hlds__deforest__STATE_VARIABLE_Goals_81_81;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__deforest__InstMap0_14;
                    MR_Word transform_hlds__deforest__NonLocals_15;
                    MR_Word transform_hlds__deforest__ModuleInfo_16;
                    MR_Word transform_hlds__deforest__Globals_17;
                    MR_Word transform_hlds__deforest__Deforestation_18;
                    MR_Word transform_hlds__deforest__Constraints_19;
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_83_83;
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84;
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_91_91;
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92;
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;

                    {
                      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__InstMap0_14);
                    }
                    {
                      transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__STATE_VARIABLE_Goals_83_83, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84);
                    }
                    {
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85);
                    }
                    {
                      transform_hlds__deforest__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60);
                    }
                    {
                      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__ModuleInfo_16);
                    }
                    {
                      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_16, &transform_hlds__deforest__Globals_17);
                    }
                    {
                      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 396, &transform_hlds__deforest__Deforestation_18);
                    }
                    switch (transform_hlds__deforest__Deforestation_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
                          transform_hlds__deforest__STATE_VARIABLE_Goals_91_91 = transform_hlds__deforest__STATE_VARIABLE_Goals_83_83;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word transform_hlds__deforest__STATE_VARIABLE_Goals_87_87;
                          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88;
                          MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89;

                          {
                            transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_83_83, &transform_hlds__deforest__STATE_VARIABLE_Goals_87_87, transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88);
                          }
                          {
                            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_88_88, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89);
                          }
                          {
                            transform_hlds__deforest__deforest_conj_6_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_87_87, transform_hlds__deforest__NonLocals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__STATE_VARIABLE_Goals_91_91, transform_hlds__deforest__STATE_VARIABLE_PDInfo_89_89, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92);
                          }
                        }
                        break;
                    }
                    {
                      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_17, (MR_Integer) 355, &transform_hlds__deforest__Constraints_19);
                    }
                    {
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_92_92, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94);
                    }
                    switch (transform_hlds__deforest__Constraints_19) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94;
                          transform_hlds__deforest__Goals_13 = transform_hlds__deforest__STATE_VARIABLE_Goals_91_91;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            transform_hlds__deforest__propagate_conj_constraints_6_p_0(transform_hlds__deforest__STATE_VARIABLE_Goals_91_91, transform_hlds__deforest__NonLocals_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__Goals_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_94_94, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
                          }
                        }
                        break;
                    }
                    {
                      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__deforest__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__ConjType_11));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__Goals_13));
              }
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__deforest__Goals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__Goals_100;

              {
                transform_hlds__deforest__deforest_disj_4_p_0(transform_hlds__deforest__Goals0_99, &transform_hlds__deforest__Goals_100, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__deforest__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_100));
              }
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__deforest__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word transform_hlds__deforest__Cases0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
              MR_Word transform_hlds__deforest__Cases_30;

              {
                transform_hlds__deforest__deforest_cases_5_p_0(transform_hlds__deforest__Var_27, transform_hlds__deforest__Cases0_29, &transform_hlds__deforest__Cases_30, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__deforest__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Var_27));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__CanFail_28));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__deforest__Cases_30));
              }
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__deforest__Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__SubGoal0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word transform_hlds__deforest__SubGoal_103;
              MR_Word transform_hlds__deforest__FGT_35;
              MR_Word transform_hlds__deforest__Var_34;

              transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (transform_hlds__deforest__succeeded)
                {
                  transform_hlds__deforest__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 1)));
                  transform_hlds__deforest__FGT_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Reason_33, (MR_Integer) 2)));
                  switch (transform_hlds__deforest__FGT_35) {
                    default:
                      transform_hlds__deforest__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      transform_hlds__deforest__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      transform_hlds__deforest__succeeded = MR_TRUE;
                      break;
                  }
                }
              if (transform_hlds__deforest__succeeded)
                {
                  transform_hlds__deforest__SubGoal_103 = transform_hlds__deforest__SubGoal0_102;
                  *transform_hlds__deforest__STATE_VARIABLE_PDInfo_63 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62;
                }
              else
                {
                  transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__SubGoal0_102, &transform_hlds__deforest__SubGoal_103, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__deforest__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Reason_33));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__SubGoal_103));
              }
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__deforest__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__Cond0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 2)));
              MR_Word transform_hlds__deforest__Then0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 3)));
              MR_Word transform_hlds__deforest__Else0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr0_7, (MR_Integer) 4)));
              MR_Word transform_hlds__deforest__Cond_24;
              MR_Word transform_hlds__deforest__Then_25;
              MR_Word transform_hlds__deforest__Else_26;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77;
              MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78;
              MR_Word transform_hlds__deforest__InstMap0_101;

              {
                transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__InstMap0_101);
              }
              {
                transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Cond0_21, &transform_hlds__deforest__Cond_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_62, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74);
              }
              {
                transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Cond_24, transform_hlds__deforest__STATE_VARIABLE_PDInfo_74_74, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75);
              }
              {
                transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Then0_22, &transform_hlds__deforest__Then_25, transform_hlds__deforest__STATE_VARIABLE_PDInfo_75_75, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76);
              }
              {
                transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_101, transform_hlds__deforest__STATE_VARIABLE_PDInfo_76_76, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77);
              }
              {
                transform_hlds__deforest__deforest_goal_4_p_0(transform_hlds__deforest__Else0_23, &transform_hlds__deforest__Else_26, transform_hlds__deforest__STATE_VARIABLE_PDInfo_77_77, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78);
              }
              {
                transform_hlds__pd_info__pd_info_set_instmap_3_p_0(transform_hlds__deforest__InstMap0_101, transform_hlds__deforest__STATE_VARIABLE_PDInfo_78_78, transform_hlds__deforest__STATE_VARIABLE_PDInfo_63);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__deforest__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__deforest__Vars_20));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__deforest__Cond_24));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__deforest__Then_25));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__deforest__Else_26));
              }
              *transform_hlds__deforest__STATE_VARIABLE_GoalInfo_61 = transform_hlds__deforest__STATE_VARIABLE_GoalInfo_0_60;
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforest_goal_expr\'/6", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
  MR_Word transform_hlds__deforest__Goal0_5,
  MR_Word * transform_hlds__deforest__Goal_6,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_13)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__deforest__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__deforest__GoalExpr_10;
    MR_Word transform_hlds__deforest__GoalInfo_11;

    {
      transform_hlds__deforest__deforest_goal_expr_6_p_0(transform_hlds__deforest__GoalExpr0_8, &transform_hlds__deforest__GoalExpr_10, transform_hlds__deforest__GoalInfo0_9, &transform_hlds__deforest__GoalInfo_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_12, transform_hlds__deforest__STATE_VARIABLE_PDInfo_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__deforest__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__GoalExpr_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__GoalInfo_11));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
  MR_Word transform_hlds__deforest__TypeInfo_for_T_11,
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box transform_hlds__deforest__ArgX1_5;
    MR_Word transform_hlds__deforest__ArgX2_7;
    MR_Word transform_hlds__deforest__ArgY2_8;

    if (transform_hlds__deforest__succeeded)
      {
        transform_hlds__deforest__ArgX1_5 = (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 0));
        transform_hlds__deforest__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__2_2, (MR_Integer) 1)));
        (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)) = transform_hlds__deforest__ArgX1_5;
        transform_hlds__deforest__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
        {
          transform_hlds__deforest__succeeded = mercury__list____Unify____list_1_0(transform_hlds__deforest__TypeInfo_for_T_11, transform_hlds__deforest__ArgX2_7, transform_hlds__deforest__ArgY2_8);
        }
      }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
  MR_Word transform_hlds__deforest__CheckImprovement_11,
  MR_Word transform_hlds__deforest__CheckVars_12,
  MR_Word transform_hlds__deforest__PredId_13,
  MR_Integer transform_hlds__deforest__ProcId_14,
  MR_Word transform_hlds__deforest__Args_15,
  MR_Word transform_hlds__deforest__Goal0_16,
  MR_Word * transform_hlds__deforest__Goal_17,
  MR_Word * transform_hlds__deforest__Optimized_18,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_80)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__TypeCtorInfo_132_132;
    MR_Word transform_hlds__deforest__ModuleInfo_20;
    MR_Word transform_hlds__deforest__Globals_21;
    MR_Integer transform_hlds__deforest__VarsOpt_22;
    MR_Word transform_hlds__deforest__ProcInfo0_23;
    MR_Word transform_hlds__deforest__VarSet0_24;
    MR_Word transform_hlds__deforest__Vars_25;
    MR_Integer transform_hlds__deforest__NumVars_26;
    MR_Word transform_hlds__deforest__DebugPD_27;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__ModuleInfo_20);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_20, &transform_hlds__deforest__Globals_21);
    }
    {
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 399, &transform_hlds__deforest__VarsOpt_22);
    }
    {
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__ProcInfo0_23);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__VarSet0_24);
    }
    transform_hlds__deforest__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__vars_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__VarSet0_24, &transform_hlds__deforest__Vars_25);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_1[1], transform_hlds__deforest__Vars_25, &transform_hlds__deforest__NumVars_26);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_27);
    }
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__CheckVars_12 == (MR_Integer) 0);
    if (!(transform_hlds__deforest__succeeded))
      {
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__VarsOpt_22 == (MR_Integer) -1);
        if (!(transform_hlds__deforest__succeeded))
          transform_hlds__deforest__succeeded = (transform_hlds__deforest__NumVars_26 < transform_hlds__deforest__VarsOpt_22);
      }
    if (transform_hlds__deforest__succeeded)
      {
        MR_Word transform_hlds__deforest__PredInfo0_29;
        MR_Word transform_hlds__deforest__CalledPredInfo_30;
        MR_Word transform_hlds__deforest__CalledProcInfo_31;
        MR_Word transform_hlds__deforest__TypeVarSet0_32;
        MR_Word transform_hlds__deforest__UnivQVars_33;
        MR_Word transform_hlds__deforest__VarTypes0_34;
        MR_Word transform_hlds__deforest__RttiVarMaps0_35;
        MR_Word transform_hlds__deforest__VarSet_36;
        MR_Word transform_hlds__deforest__VarTypes_37;
        MR_Word transform_hlds__deforest__TypeVarSet_38;
        MR_Word transform_hlds__deforest__RttiVarMaps_39;
        MR_Word transform_hlds__deforest__Goal1_40;
        MR_Word transform_hlds__deforest__PredInfo_41;
        MR_Word transform_hlds__deforest__CalledHasParallelConj_42;
        MR_Word transform_hlds__deforest__ProcInfo1_43;
        MR_Word transform_hlds__deforest__ProcInfo2_44;
        MR_Word transform_hlds__deforest__ProcInfo3_45;
        MR_Word transform_hlds__deforest__ProcInfo_46;
        MR_Integer transform_hlds__deforest__OriginalCost_47;
        MR_Integer transform_hlds__deforest__CostDelta0_48;
        MR_Integer transform_hlds__deforest__SizeDelta0_49;
        MR_Word transform_hlds__deforest__Changed0_50;
        MR_Word transform_hlds__deforest__GoalInfo1_52;
        MR_Word transform_hlds__deforest__NonLocals1_53;
        MR_Word transform_hlds__deforest__NonLocals_54;
        MR_Word transform_hlds__deforest__Goal2_55;
        MR_Word transform_hlds__deforest__ArgLives_57;
        MR_Word transform_hlds__deforest__LiveVars0_58;
        MR_Word transform_hlds__deforest__LiveVars1_59;
        MR_Word transform_hlds__deforest__LiveVars_60;
        MR_Word transform_hlds__deforest__Goal3_61;
        MR_Word transform_hlds__deforest__Errors_62;
        MR_Word transform_hlds__deforest__Optimized0_63;
        MR_Word transform_hlds__deforest__SimplifyTasks_66;
        MR_Word transform_hlds__deforest__Goal4_67;
        MR_Integer transform_hlds__deforest__CostDelta1_68;
        MR_Integer transform_hlds__deforest__CostDelta_69;
        MR_Integer transform_hlds__deforest__GoalSize_70;
        MR_Integer transform_hlds__deforest__SizeDelta_71;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97;
        MR_Integer transform_hlds__deforest__Var_98;
        MR_Word transform_hlds__deforest__Var_51;
        MR_Integer transform_hlds__deforest__Factor_72;

        {
          transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__PredInfo0_29);
        }
        {
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__deforest__ModuleInfo_20, transform_hlds__deforest__PredId_13, transform_hlds__deforest__ProcId_14, &transform_hlds__deforest__CalledPredInfo_30, &transform_hlds__deforest__CalledProcInfo_31);
        }
        {
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__TypeVarSet0_32);
        }
        {
          hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__UnivQVars_33);
        }
        {
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__VarTypes0_34);
        }
        {
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__RttiVarMaps0_35);
        }
        {
          transform_hlds__inlining__do_inline_call_13_p_0(transform_hlds__deforest__UnivQVars_33, transform_hlds__deforest__Args_15, transform_hlds__deforest__CalledPredInfo_30, transform_hlds__deforest__CalledProcInfo_31, transform_hlds__deforest__VarSet0_24, &transform_hlds__deforest__VarSet_36, transform_hlds__deforest__VarTypes0_34, &transform_hlds__deforest__VarTypes_37, transform_hlds__deforest__TypeVarSet0_32, &transform_hlds__deforest__TypeVarSet_38, transform_hlds__deforest__RttiVarMaps0_35, &transform_hlds__deforest__RttiVarMaps_39, &transform_hlds__deforest__Goal1_40);
        }
        {
          hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__deforest__TypeVarSet_38, transform_hlds__deforest__PredInfo0_29, &transform_hlds__deforest__PredInfo_41);
        }
        {
          hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__deforest__CalledProcInfo_31, &transform_hlds__deforest__CalledHasParallelConj_42);
        }
        {
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__deforest__VarSet_36, transform_hlds__deforest__ProcInfo0_23, &transform_hlds__deforest__ProcInfo1_43);
        }
        {
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__deforest__VarTypes_37, transform_hlds__deforest__ProcInfo1_43, &transform_hlds__deforest__ProcInfo2_44);
        }
        {
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__deforest__RttiVarMaps_39, transform_hlds__deforest__ProcInfo2_44, &transform_hlds__deforest__ProcInfo3_45);
        }
        switch (transform_hlds__deforest__CalledHasParallelConj_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            transform_hlds__deforest__ProcInfo_46 = transform_hlds__deforest__ProcInfo3_45;
            break;
          case (MR_Integer) 0:
            {
              {
                hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, transform_hlds__deforest__ProcInfo3_45, &transform_hlds__deforest__ProcInfo_46);
              }
            }
            break;
        }
        {
          transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo_41, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84);
        }
        {
          transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo_46, transform_hlds__deforest__STATE_VARIABLE_PDInfo_84_84, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85);
        }
        {
          transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__deforest__Goal1_40, &transform_hlds__deforest__OriginalCost_47);
        }
        {
          transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__CostDelta0_48);
        }
        {
          transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__SizeDelta0_49);
        }
        {
          transform_hlds__pd_info__pd_info_get_changed_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__Changed0_50);
        }
        transform_hlds__deforest__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_40, (MR_Integer) 0)));
        transform_hlds__deforest__GoalInfo1_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal1_40, (MR_Integer) 1)));
        {
          transform_hlds__deforest__NonLocals1_53 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo1_52);
        }
        {
          parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__Args_15, &transform_hlds__deforest__NonLocals_54);
        }
        {
          transform_hlds__deforest__succeeded = parse_tree__set_of_var__equal_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__NonLocals1_53, transform_hlds__deforest__NonLocals_54);
        }
        if (transform_hlds__deforest__succeeded)
          {
            transform_hlds__deforest__Goal2_55 = transform_hlds__deforest__Goal1_40;
            transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85;
          }
        else
          {
            transform_hlds__pd_util__pd_requantify_goal_5_p_0(transform_hlds__deforest__NonLocals_54, transform_hlds__deforest__Goal1_40, &transform_hlds__deforest__Goal2_55, transform_hlds__deforest__STATE_VARIABLE_PDInfo_85_85, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86);
          }
        {
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Running unique modes\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        {
          hlds__hlds_pred__proc_info_arglives_3_p_0(transform_hlds__deforest__CalledProcInfo_31, transform_hlds__deforest__ModuleInfo_20, &transform_hlds__deforest__ArgLives_57);
        }
        {
          check_hlds__modecheck_util__get_live_vars_3_p_0(transform_hlds__deforest__Args_15, transform_hlds__deforest__ArgLives_57, &transform_hlds__deforest__LiveVars0_58);
        }
        {
          parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__LiveVars0_58, &transform_hlds__deforest__LiveVars1_59);
        }
        {
          parse_tree__set_of_var__intersect_3_p_0(transform_hlds__deforest__TypeCtorInfo_132_132, transform_hlds__deforest__NonLocals_54, transform_hlds__deforest__LiveVars1_59, &transform_hlds__deforest__LiveVars_60);
        }
        {
          transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(transform_hlds__deforest__LiveVars_60, transform_hlds__deforest__Goal2_55, &transform_hlds__deforest__Goal3_61, &transform_hlds__deforest__Errors_62, transform_hlds__deforest__STATE_VARIABLE_PDInfo_86_86, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91);
        }
        if ((transform_hlds__deforest__Errors_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__deforest__Optimized0_63 = (MR_Integer) 1;
        else
          transform_hlds__deforest__Optimized0_63 = (MR_Integer) 0;
        {
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "Running simplify\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        {
          check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, transform_hlds__deforest__Globals_21, &transform_hlds__deforest__SimplifyTasks_66);
        }
        {
          transform_hlds__pd_util__pd_simplify_goal_5_p_0(transform_hlds__deforest__SimplifyTasks_66, transform_hlds__deforest__Goal3_61, &transform_hlds__deforest__Goal4_67, transform_hlds__deforest__STATE_VARIABLE_PDInfo_91_91, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97);
        }
        {
          transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__CostDelta1_68);
        }
        transform_hlds__deforest__CostDelta_69 = (transform_hlds__deforest__CostDelta1_68 - transform_hlds__deforest__CostDelta0_48);
        {
          hlds__goal_util__goal_size_2_p_0(transform_hlds__deforest__Goal4_67, &transform_hlds__deforest__GoalSize_70);
        }
        {
          transform_hlds__deforest__Var_98 = transform_hlds__pd_cost__cost_of_call_0_f_0();
        }
        transform_hlds__deforest__SizeDelta_71 = (transform_hlds__deforest__GoalSize_70 - transform_hlds__deforest__Var_98);
        {
          libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_21, (MR_Integer) 398, &transform_hlds__deforest__Factor_72);
        }
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__Optimized0_63 == (MR_Integer) 1);
        if (transform_hlds__deforest__succeeded)
          switch (transform_hlds__deforest__CheckImprovement_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              transform_hlds__deforest__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              {
                {
                  transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_1_p_0(transform_hlds__deforest__Goal3_61);
                }
                if (transform_hlds__deforest__succeeded)
                  transform_hlds__deforest__succeeded = MR_TRUE;
                else
                  {
                    transform_hlds__deforest__succeeded = transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(transform_hlds__deforest__GoalSize_70, transform_hlds__deforest__OriginalCost_47, transform_hlds__deforest__CostDelta_69);
                  }
              }
              break;
          }
        if (transform_hlds__deforest__succeeded)
          {
            MR_Word transform_hlds__deforest__GoalInfo0_74;
            MR_Word transform_hlds__deforest__Det0_75;
            MR_Word transform_hlds__deforest__GoalInfo_77;
            MR_Word transform_hlds__deforest__Det_78;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
            MR_Word transform_hlds__deforest__Var_102;
            MR_Word transform_hlds__deforest__Var_104;
            MR_Word transform_hlds__deforest__Var_105;
            MR_Word transform_hlds__deforest__Var_106;
            MR_Word transform_hlds__deforest__Var_73;
            MR_Word transform_hlds__deforest__Var_76;

            *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal4_67;
            {
              transform_hlds__deforest__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_104, 0) = ((MR_Box) (transform_hlds__deforest__CostDelta_69));
            }
            {
              transform_hlds__deforest__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_106, 0) = ((MR_Box) (transform_hlds__deforest__SizeDelta_71));
            }
            {
              transform_hlds__deforest__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_105, 0) = ((MR_Box) (transform_hlds__deforest__Var_106));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__deforest__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_102, 0) = ((MR_Box) (transform_hlds__deforest__Var_104));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_102, 1) = ((MR_Box) (transform_hlds__deforest__Var_105));
            }
            {
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "inlined: cost(%i) size(%i)\n", transform_hlds__deforest__Var_102);
            }
            {
              transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(transform_hlds__deforest__SizeDelta_71, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108);
            }
            {
              transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_108_108, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110);
            }
            transform_hlds__deforest__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_16, (MR_Integer) 0)));
            transform_hlds__deforest__GoalInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_16, (MR_Integer) 1)));
            {
              transform_hlds__deforest__Det0_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__GoalInfo0_74);
            }
            transform_hlds__deforest__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__deforest__Goal_17, (MR_Integer) 0)));
            transform_hlds__deforest__GoalInfo_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__deforest__Goal_17, (MR_Integer) 1)));
            {
              transform_hlds__deforest__Det_78 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__GoalInfo_77);
            }
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Det_78 == transform_hlds__deforest__Det0_75);
            if (transform_hlds__deforest__succeeded)
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_80 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110;
            else
              {
                {
                  transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_110_110, transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);
                }
              }
            *transform_hlds__deforest__Optimized_18 = (MR_Integer) 1;
          }
        else
          {
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126;
            MR_Word transform_hlds__deforest__Var_115;
            MR_Word transform_hlds__deforest__Var_119;
            MR_Word transform_hlds__deforest__Var_120;
            MR_Word transform_hlds__deforest__Var_121;

            {
              transform_hlds__deforest__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_119, 0) = ((MR_Box) (transform_hlds__deforest__CostDelta_69));
            }
            {
              transform_hlds__deforest__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_121, 0) = ((MR_Box) (transform_hlds__deforest__SizeDelta_71));
            }
            {
              transform_hlds__deforest__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_120, 0) = ((MR_Box) (transform_hlds__deforest__Var_121));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__deforest__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_115, 0) = ((MR_Box) (transform_hlds__deforest__Var_119));
              MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_115, 1) = ((MR_Box) (transform_hlds__deforest__Var_120));
            }
            {
              transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "not enough improvement - not inlining: cost(%i) size(%i)\n", transform_hlds__deforest__Var_115);
            }
            {
              transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(transform_hlds__deforest__PredInfo0_29, transform_hlds__deforest__STATE_VARIABLE_PDInfo_97_97, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123);
            }
            {
              transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(transform_hlds__deforest__ProcInfo0_23, transform_hlds__deforest__STATE_VARIABLE_PDInfo_123_123, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124);
            }
            {
              transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(transform_hlds__deforest__SizeDelta0_49, transform_hlds__deforest__STATE_VARIABLE_PDInfo_124_124, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125);
            }
            {
              transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(transform_hlds__deforest__CostDelta0_48, transform_hlds__deforest__STATE_VARIABLE_PDInfo_125_125, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126);
            }
            {
              transform_hlds__pd_info__pd_info_set_changed_3_p_0(transform_hlds__deforest__Changed0_50, transform_hlds__deforest__STATE_VARIABLE_PDInfo_126_126, transform_hlds__deforest__STATE_VARIABLE_PDInfo_80);
            }
            *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal0_16;
            *transform_hlds__deforest__Optimized_18 = (MR_Integer) 0;
          }
      }
    else
      {
        {
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_27, (MR_String) "too many variables - not inlining\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
        *transform_hlds__deforest__Goal_17 = transform_hlds__deforest__Goal0_16;
        *transform_hlds__deforest__Optimized_18 = (MR_Integer) 0;
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_80 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_79;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Integer transform_hlds__deforest__Size_6,
  MR_Integer transform_hlds__deforest__OriginalCost_7,
  MR_Integer transform_hlds__deforest__CostDelta_8)
{
  {
    MR_bool transform_hlds__deforest__succeeded = (transform_hlds__deforest__Size_6 <= (MR_Integer) 5);

    if (transform_hlds__deforest__succeeded)
      {
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__CostDelta_8 > (MR_Integer) 0);
      }
    else
      {
        MR_Integer transform_hlds__deforest__PercentChange_9;
        MR_Integer transform_hlds__deforest__Var_12 = (transform_hlds__deforest__CostDelta_8 * (MR_Integer) 100);

        {
          transform_hlds__deforest__PercentChange_9 = mercury__int__f_47_47_2_f_0(transform_hlds__deforest__Var_12, transform_hlds__deforest__OriginalCost_7);
        }
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__PercentChange_9 >= (MR_Integer) 5);
      }
    return transform_hlds__deforest__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__deforest__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));

    {
      MR_Word transform_hlds__deforest__Var_6;

      {
        transform_hlds__deforest__Var_6 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__deforest__GoalExpr_2);
      }
      transform_hlds__deforest__succeeded = (transform_hlds__deforest__Var_6 == (MR_Integer) 1);
    }
    if (!(transform_hlds__deforest__succeeded))
      {
        MR_Word transform_hlds__deforest__Goal1_4;
        MR_Word transform_hlds__deforest__GoalList1_5;

        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_2)) == (MR_mktag((MR_Integer) 0)));
        if (transform_hlds__deforest__succeeded)
          {
            transform_hlds__deforest__Goal1_4 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr_2), (MR_Integer) 0);
            {
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal1_4, &transform_hlds__deforest__GoalList1_5);
            }
            {
              transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0(transform_hlds__deforest__GoalList1_5);
            }
          }
      }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
  MR_Word transform_hlds__deforest__DeforestInfo0_6,
  MR_Word * transform_hlds__deforest__DeforestInfo_7,
  MR_Word * transform_hlds__deforest__BeforeIrrelevant_8,
  MR_Word * transform_hlds__deforest__AfterIrrelevant_9,
  MR_Word transform_hlds__deforest__PDInfo_10)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__ModuleInfo_11;
    MR_Word transform_hlds__deforest__Globals_12;
    MR_Word transform_hlds__deforest__DebugPD_13;
    MR_Word transform_hlds__deforest__EarlierGoal_15;
    MR_Word transform_hlds__deforest__EarlierBranchInfo_16;
    MR_Word transform_hlds__deforest__BetweenGoals0_17;
    MR_Word transform_hlds__deforest__LaterGoal_18;
    MR_Word transform_hlds__deforest__LaterBranchInfo_19;
    MR_Word transform_hlds__deforest__DeforestBranches_20;
    MR_Word transform_hlds__deforest__FullyStrict_21;
    MR_Word transform_hlds__deforest__RevBetweenGoals1_22;
    MR_Word transform_hlds__deforest__RevBeforeIrrelevant_23;
    MR_Word transform_hlds__deforest__BetweenGoals_24;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_10, &transform_hlds__deforest__ModuleInfo_11);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_11, &transform_hlds__deforest__Globals_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_12, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_13);
    }
    {
      transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_13, (MR_String) "Reordering conjunction\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    transform_hlds__deforest__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 0)));
    transform_hlds__deforest__EarlierBranchInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 1)));
    transform_hlds__deforest__BetweenGoals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 2)));
    transform_hlds__deforest__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 3)));
    transform_hlds__deforest__LaterBranchInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 4)));
    transform_hlds__deforest__DeforestBranches_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo0_6, (MR_Integer) 5)));
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_12, (MR_Integer) 177, &transform_hlds__deforest__FullyStrict_21);
    }
    {
      transform_hlds__deforest__move_goals__ho2_9_p_0(transform_hlds__deforest__ModuleInfo_11, transform_hlds__deforest__FullyStrict_21, transform_hlds__deforest__BetweenGoals0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__RevBetweenGoals1_22, transform_hlds__deforest__EarlierGoal_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__RevBeforeIrrelevant_23);
    }
    {
      transform_hlds__deforest__move_goals__ho1_9_p_0(transform_hlds__deforest__ModuleInfo_11, transform_hlds__deforest__FullyStrict_21, transform_hlds__deforest__RevBetweenGoals1_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__BetweenGoals_24, transform_hlds__deforest__LaterGoal_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__AfterIrrelevant_9);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__RevBeforeIrrelevant_23, transform_hlds__deforest__BeforeIrrelevant_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__deforest__DeforestInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__EarlierBranchInfo_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__deforest__LaterGoal_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__deforest__LaterBranchInfo_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__deforest__DeforestBranches_20));
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41);
    {
      transform_hlds__deforest__move_goals__ho2_9_p_0_2(transform_hlds__deforest__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    {
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23);
    }
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
      {
        transform_hlds__deforest__move_goals__ho2_9_p_0_1(transform_hlds__deforest__env_ptr);
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__Var_32, transform_hlds__deforest__move_goals__ho2_9_p_0_3, transform_hlds__deforest__env_ptr);
          }
        }
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
  MR_Word transform_hlds__deforest__ModuleInfo_2,
  MR_Word transform_hlds__deforest__FullyStrict_3,
  MR_Word transform_hlds__deforest__HeadVar__4_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
  MR_Word transform_hlds__deforest__EndGoal_7,
  MR_Word transform_hlds__deforest__HeadVar__8_8,
  MR_Word * transform_hlds__deforest__HeadVar__9_9)
{
  {
    struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s transform_hlds__deforest__env;

    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2 = transform_hlds__deforest__ModuleInfo_2;
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3 = transform_hlds__deforest__FullyStrict_3;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((transform_hlds__deforest__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__deforest__HeadVar__9_9 = transform_hlds__deforest__HeadVar__8_8;
            *transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
          }
        else
          {
            MR_Word transform_hlds__deforest__RevBetweenGoals0_24;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;

            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
            transform_hlds__deforest__RevBetweenGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__Var_32 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__EndGoal_7));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
            }
            {
              transform_hlds__deforest__move_goals__ho2_9_p_0_4(&transform_hlds__deforest__env);
            }
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
            if ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
              {
                {
                  transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__8_8));
                }
                transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
              }
            else
              {
                {
                  transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
                }
                transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = transform_hlds__deforest__HeadVar__8_8;
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__deforest__next_value_of_HeadVar__4_4 = transform_hlds__deforest__RevBetweenGoals0_24;
              MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;
              MR_Word transform_hlds__deforest__next_value_of_HeadVar__8_8 = transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;

              transform_hlds__deforest__HeadVar__8_8 = transform_hlds__deforest__next_value_of_HeadVar__8_8;
              transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_BetweenGoals_0_5;
              transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__next_value_of_HeadVar__4_4;
            }
            continue;
          }
        break;
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41);
    {
      transform_hlds__deforest__move_goals__ho1_9_p_0_2(transform_hlds__deforest__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    {
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_41);
    }
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
      {
        transform_hlds__deforest__move_goals__ho1_9_p_0_1(transform_hlds__deforest__env_ptr);
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_41, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__Var_32, transform_hlds__deforest__move_goals__ho1_9_p_0_3, transform_hlds__deforest__env_ptr);
          }
        }
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
  MR_Word transform_hlds__deforest__ModuleInfo_2,
  MR_Word transform_hlds__deforest__FullyStrict_3,
  MR_Word transform_hlds__deforest__HeadVar__4_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6,
  MR_Word transform_hlds__deforest__EndGoal_7,
  MR_Word transform_hlds__deforest__HeadVar__8_8,
  MR_Word * transform_hlds__deforest__HeadVar__9_9)
{
  {
    struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s transform_hlds__deforest__env;

    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2 = transform_hlds__deforest__ModuleInfo_2;
    (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3 = transform_hlds__deforest__FullyStrict_3;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((transform_hlds__deforest__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__deforest__HeadVar__9_9 = transform_hlds__deforest__HeadVar__8_8;
            *transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_6 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
          }
        else
          {
            MR_Word transform_hlds__deforest__RevBetweenGoals0_24;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;
            MR_Word transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;

            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
            transform_hlds__deforest__RevBetweenGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__Var_32 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__EndGoal_7));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
            }
            {
              transform_hlds__deforest__move_goals__ho1_9_p_0_4(&transform_hlds__deforest__env);
            }
            (transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
            if ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
              {
                {
                  transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__8_8));
                }
                transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5;
              }
            else
              {
                {
                  transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((transform_hlds__deforest__env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5));
                }
                transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33 = transform_hlds__deforest__HeadVar__8_8;
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__deforest__next_value_of_HeadVar__4_4 = transform_hlds__deforest__RevBetweenGoals0_24;
              MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_34_34;
              MR_Word transform_hlds__deforest__next_value_of_HeadVar__8_8 = transform_hlds__deforest__STATE_VARIABLE_MovedGoals_33_33;

              transform_hlds__deforest__HeadVar__8_8 = transform_hlds__deforest__next_value_of_HeadVar__8_8;
              transform_hlds__deforest__STATE_VARIABLE_BetweenGoals_0_5 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_BetweenGoals_0_5;
              transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__next_value_of_HeadVar__4_4;
            }
            continue;
          }
        break;
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
  MR_Word transform_hlds__deforest__NonLocals0_8,
  MR_Word transform_hlds__deforest__DeforestInfo_9,
  MR_Word transform_hlds__deforest__RevBeforeGoals_10,
  MR_Word transform_hlds__deforest__BeforeIrrelevant_11,
  MR_Word transform_hlds__deforest__AfterIrrelevant_12,
  MR_Word transform_hlds__deforest__AfterGoals0_13,
  MR_Word * transform_hlds__deforest__SubConjNonLocals_14)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__EarlierGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 0)));
    MR_Word transform_hlds__deforest__BetweenGoals_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 2)));
    MR_Word transform_hlds__deforest__LaterGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 3)));
    MR_Word transform_hlds__deforest__AfterGoals_21;
    MR_Word transform_hlds__deforest__Var_22;
    MR_Word transform_hlds__deforest__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 1)));
    MR_Word transform_hlds__deforest__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 4)));
    MR_Word transform_hlds__deforest__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_9, (MR_Integer) 5)));

    {
      mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[3], transform_hlds__deforest__AfterGoals0_13, &transform_hlds__deforest__AfterGoals_21);
    }
    {
      transform_hlds__deforest__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_22, 0) = ((MR_Box) (transform_hlds__deforest__LaterGoal_18));
    }
    {
      transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(transform_hlds__deforest__NonLocals0_8, transform_hlds__deforest__RevBeforeGoals_10, transform_hlds__deforest__BeforeIrrelevant_11, transform_hlds__deforest__EarlierGoal_15, transform_hlds__deforest__BetweenGoals_17, transform_hlds__deforest__Var_22, transform_hlds__deforest__AfterIrrelevant_12, transform_hlds__deforest__AfterGoals_21, transform_hlds__deforest__SubConjNonLocals_14);
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
  MR_Word transform_hlds__deforest__PDInfo_6,
  MR_Word transform_hlds__deforest__Optimized0_7,
  MR_Integer transform_hlds__deforest__CostDelta0_8,
  MR_Integer transform_hlds__deforest__SizeDelta0_9)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__Optimized_10;
    MR_Integer transform_hlds__deforest__CostDelta_11;
    MR_Integer transform_hlds__deforest__SizeDelta_12;
    MR_Integer transform_hlds__deforest__Improvement_13;
    MR_Integer transform_hlds__deforest__SizeDifference_14;
    MR_Word transform_hlds__deforest__ModuleInfo_15;
    MR_Word transform_hlds__deforest__Globals_16;
    MR_Integer transform_hlds__deforest__Factor_17;
    MR_Word transform_hlds__deforest__DebugPD_18;
    MR_Integer transform_hlds__deforest__Var_43;

    {
      transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__CostDelta_11);
    }
    {
      transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__SizeDelta_12);
    }
    transform_hlds__deforest__Improvement_13 = (transform_hlds__deforest__CostDelta_11 - transform_hlds__deforest__CostDelta0_8);
    transform_hlds__deforest__SizeDifference_14 = (transform_hlds__deforest__SizeDelta_12 - transform_hlds__deforest__SizeDelta0_9);
    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_6, &transform_hlds__deforest__ModuleInfo_15);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_15, &transform_hlds__deforest__Globals_16);
    }
    {
      libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 398, &transform_hlds__deforest__Factor_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_18);
    }
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Optimized0_7 == (MR_Integer) 1);
    if (transform_hlds__deforest__succeeded)
      {
        transform_hlds__deforest__Var_43 = (MR_Integer) 5;
        transform_hlds__deforest__succeeded = (transform_hlds__deforest__SizeDifference_14 <= transform_hlds__deforest__Var_43);
        if (transform_hlds__deforest__succeeded)
          {
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__Improvement_13 > (MR_Integer) 0);
          }
        else
          {
            MR_Integer transform_hlds__deforest__ExpectedCostDelta_41;
            MR_Integer transform_hlds__deforest__FudgedCostDelta_42;
            MR_Integer transform_hlds__deforest__Var_45;
            MR_Integer transform_hlds__deforest__Var_46;
            MR_Integer transform_hlds__deforest__Var_48;

            {
              transform_hlds__deforest__Var_48 = transform_hlds__pd_cost__cost_of_heap_incr_0_f_0();
            }
            transform_hlds__deforest__Var_46 = ((MR_Integer) 1000 * transform_hlds__deforest__Var_48);
            transform_hlds__deforest__Var_45 = (transform_hlds__deforest__Var_46 * transform_hlds__deforest__SizeDifference_14);
            {
              transform_hlds__deforest__ExpectedCostDelta_41 = mercury__int__f_47_47_2_f_0(transform_hlds__deforest__Var_45, (MR_Integer) 3);
            }
            transform_hlds__deforest__FudgedCostDelta_42 = (transform_hlds__deforest__Improvement_13 * transform_hlds__deforest__Factor_17);
            transform_hlds__deforest__succeeded = (transform_hlds__deforest__FudgedCostDelta_42 >= transform_hlds__deforest__ExpectedCostDelta_41);
          }
      }
    if (transform_hlds__deforest__succeeded)
      {
        MR_Word transform_hlds__deforest__Var_24;
        MR_Word transform_hlds__deforest__Var_26;
        MR_Word transform_hlds__deforest__Var_27;
        MR_Word transform_hlds__deforest__Var_28;

        transform_hlds__deforest__Optimized_10 = (MR_Integer) 1;
        {
          transform_hlds__deforest__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_26, 0) = ((MR_Box) (transform_hlds__deforest__Improvement_13));
        }
        {
          transform_hlds__deforest__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_28, 0) = ((MR_Box) (transform_hlds__deforest__SizeDifference_14));
        }
        {
          transform_hlds__deforest__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_27, 0) = ((MR_Box) (transform_hlds__deforest__Var_28));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__deforest__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_24, 0) = ((MR_Box) (transform_hlds__deforest__Var_26));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_24, 1) = ((MR_Box) (transform_hlds__deforest__Var_27));
        }
        {
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Enough improvement: cost(%i) size(%i)\n", transform_hlds__deforest__Var_24);
        }
      }
    else
      {
        MR_Word transform_hlds__deforest__Var_32;
        MR_Word transform_hlds__deforest__Var_34;
        MR_Word transform_hlds__deforest__Var_35;
        MR_Word transform_hlds__deforest__Var_36;

        transform_hlds__deforest__Optimized_10 = (MR_Integer) 0;
        {
          transform_hlds__deforest__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_34, 0) = ((MR_Box) (transform_hlds__deforest__Improvement_13));
        }
        {
          transform_hlds__deforest__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_36, 0) = ((MR_Box) (transform_hlds__deforest__SizeDifference_14));
        }
        {
          transform_hlds__deforest__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_35, 0) = ((MR_Box) (transform_hlds__deforest__Var_36));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__deforest__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_32, 0) = ((MR_Box) (transform_hlds__deforest__Var_34));
          MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_32, 1) = ((MR_Box) (transform_hlds__deforest__Var_35));
        }
        {
          transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_18, (MR_String) "Not enough improvement: cost(%i) size(%i)\n", transform_hlds__deforest__Var_32);
        }
      }
    return transform_hlds__deforest__Optimized_10;
  }
}

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    {
      MR_Word transform_hlds__deforest__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36, (MR_Integer) 0)));

      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36, (MR_Integer) 1)));
      {
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_38);
      }
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      {
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40 = parse_tree__set_of_var__set_to_bitset_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_66_66, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35);
      }
      {
        parse_tree__set_of_var__intersect_3_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_66_66, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_39, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_40, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41);
      }
      {
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_66_66, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_41);
      }
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
        {
          transform_hlds__deforest__should_try_deforestation_4_p_0_1(transform_hlds__deforest__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36);
    {
      transform_hlds__deforest__should_try_deforestation_4_p_0_2(transform_hlds__deforest__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word transform_hlds__deforest__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 0)));
          MR_Word transform_hlds__deforest__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 1)));

          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 2)));
          {
            {
              mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_36, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10, transform_hlds__deforest__should_try_deforestation_4_p_0_3, transform_hlds__deforest__env_ptr);
            }
          }
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_36 = (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
          {
            transform_hlds__deforest__should_try_deforestation_4_p_0_2(transform_hlds__deforest__env_ptr);
          }
        }
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
  MR_Word transform_hlds__deforest__DeforestInfo_5,
  MR_Word * transform_hlds__deforest__ShouldTry_6,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_47,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_48)
{
  {
    struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s transform_hlds__deforest__env;

    {
      MR_Word transform_hlds__deforest__EarlierGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 0)));
      MR_Word transform_hlds__deforest__UselessVersions_14;
      MR_Word transform_hlds__deforest__ModuleInfo0_15;
      MR_Word transform_hlds__deforest__Globals_16;
      MR_Word transform_hlds__deforest__Var_12;
      MR_Word transform_hlds__deforest__Var_13;
      MR_Word transform_hlds__deforest__DebugPD_17;
      MR_Word transform_hlds__deforest__TypeInfo_64_64;
      MR_Word transform_hlds__deforest__PredId1_18;
      MR_Integer transform_hlds__deforest__ProcId1_19;
      MR_Word transform_hlds__deforest__PredId2_25;
      MR_Integer transform_hlds__deforest__ProcId2_26;
      MR_Word transform_hlds__deforest__Var_50;
      MR_Word transform_hlds__deforest__Var_51;
      MR_Word transform_hlds__deforest__Var_52;
      MR_Word transform_hlds__deforest__Var_53;
      MR_Word transform_hlds__deforest__Var_54;
      MR_Word transform_hlds__deforest__Var_24;
      MR_Word transform_hlds__deforest__Var_20;
      MR_Word transform_hlds__deforest__Var_21;
      MR_Word transform_hlds__deforest__Var_22;
      MR_Word transform_hlds__deforest__Var_23;
      MR_Word transform_hlds__deforest__Var_31;
      MR_Word transform_hlds__deforest__Var_27;
      MR_Word transform_hlds__deforest__Var_28;
      MR_Word transform_hlds__deforest__Var_29;
      MR_Word transform_hlds__deforest__Var_30;

      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 1)));
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 2)));
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 3)));
      transform_hlds__deforest__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 4)));
      transform_hlds__deforest__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__DeforestInfo_5, (MR_Integer) 5)));
      {
        transform_hlds__pd_info__pd_info_get_useless_versions_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_47, &transform_hlds__deforest__UselessVersions_14);
      }
      {
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_47, &transform_hlds__deforest__ModuleInfo0_15);
      }
      {
        hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo0_15, &transform_hlds__deforest__Globals_16);
      }
      {
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_16, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_17);
      }
      transform_hlds__deforest__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 0)));
      transform_hlds__deforest__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 1)));
      (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_50)) == (MR_mktag((MR_Integer) 2)));
      if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
        {
          transform_hlds__deforest__PredId1_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_50, (MR_Integer) 0)));
          transform_hlds__deforest__ProcId1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_50, (MR_Integer) 1)));
          transform_hlds__deforest__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_50, (MR_Integer) 2)));
          transform_hlds__deforest__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_50, (MR_Integer) 3)));
          transform_hlds__deforest__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_50, (MR_Integer) 4)));
          transform_hlds__deforest__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_50, (MR_Integer) 5)));
          transform_hlds__deforest__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 0)));
          transform_hlds__deforest__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 1)));
          (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_51)) == (MR_mktag((MR_Integer) 2)));
          if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
            {
              transform_hlds__deforest__PredId2_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_51, (MR_Integer) 0)));
              transform_hlds__deforest__ProcId2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_51, (MR_Integer) 1)));
              transform_hlds__deforest__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_51, (MR_Integer) 2)));
              transform_hlds__deforest__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_51, (MR_Integer) 3)));
              transform_hlds__deforest__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_51, (MR_Integer) 4)));
              transform_hlds__deforest__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_51, (MR_Integer) 5)));
              transform_hlds__deforest__TypeInfo_64_64 = (MR_Word) &transform_hlds__deforest_scalar_common_2[3];
              {
                transform_hlds__deforest__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_53, 0) = ((MR_Box) (transform_hlds__deforest__PredId1_18));
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_53, 1) = ((MR_Box) (transform_hlds__deforest__ProcId1_19));
              }
              {
                transform_hlds__deforest__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_54, 0) = ((MR_Box) (transform_hlds__deforest__PredId2_25));
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_54, 1) = ((MR_Box) (transform_hlds__deforest__ProcId2_26));
              }
              {
                transform_hlds__deforest__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_52, 0) = ((MR_Box) (transform_hlds__deforest__Var_53));
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_52, 1) = ((MR_Box) (transform_hlds__deforest__Var_54));
              }
              {
                (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = mercury__set__member_2_p_0(transform_hlds__deforest__TypeInfo_64_64, ((MR_Box) (transform_hlds__deforest__Var_52)), transform_hlds__deforest__UselessVersions_14);
              }
            }
        }
      if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
        *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
      else
        {
          {
            transform_hlds__deforest__should_try_deforestation_4_p_0_4(&transform_hlds__deforest__env);
          }
          if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
            *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
          else
            {
              MR_Word transform_hlds__deforest__EarlierGoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__EarlierGoalDetism_44;
              MR_Word transform_hlds__deforest__EarlierGoalMaxSolns_46;
              MR_Word transform_hlds__deforest__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierGoal_8, (MR_Integer) 0)));
              MR_Word transform_hlds__deforest__Var_42;
              MR_Word transform_hlds__deforest__Var_45;

              (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Var_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_63, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
                {
                  transform_hlds__deforest__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Var_63, (MR_Integer) 1)));
                  {
                    transform_hlds__deforest__EarlierGoalDetism_44 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__deforest__EarlierGoalInfo_43);
                  }
                  {
                    parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__deforest__EarlierGoalDetism_44, &transform_hlds__deforest__Var_45, &transform_hlds__deforest__EarlierGoalMaxSolns_46);
                  }
                  (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = (transform_hlds__deforest__EarlierGoalMaxSolns_46 == (MR_Integer) 3);
                  (transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded);
                }
              if ((transform_hlds__deforest__env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
                *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 0;
              else
                *transform_hlds__deforest__ShouldTry_6 = (MR_Integer) 1;
            }
        }
      *transform_hlds__deforest__STATE_VARIABLE_PDInfo_48 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_47;
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
    MR_Word transform_hlds__deforest__conv0_LambdaHeadVar__3_24;

    {
      transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__644__1_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_LambdaHeadVar__3_24);
    }
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_LambdaHeadVar__3_24));
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_7,
  MR_Word transform_hlds__deforest__EarlierBranchInfo_8,
  MR_Word transform_hlds__deforest__RevBetweenGoals0_9,
  MR_Word transform_hlds__deforest__HeadVar__4_4,
  MR_Word * transform_hlds__deforest__Goals_12,
  MR_Word * transform_hlds__deforest__DeforestInfo_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__deforest__Goal_10;
        MR_Word transform_hlds__deforest__Goals0_11;
        MR_Word transform_hlds__deforest__LaterGoal_14;
        MR_Word transform_hlds__deforest__LaterBranchInfo_15;
        MR_Word transform_hlds__deforest__DeforestBranches_16;
        MR_Word transform_hlds__deforest__TypeInfo_28_48;
        MR_Word transform_hlds__deforest__TypeInfo_29_49;
        MR_Word transform_hlds__deforest__TypeCtorInfo_31_51;
        MR_Word transform_hlds__deforest__TypeInfo_32_52;
        MR_Word transform_hlds__deforest__Var_19;
        MR_Word transform_hlds__deforest__VarMap1_27;
        MR_Word transform_hlds__deforest__LeftVars2_31;
        MR_Word transform_hlds__deforest__VarMap_33;
        MR_Word transform_hlds__deforest__VarAssoc_34;
        MR_Word transform_hlds__deforest__GetBranches_35;
        MR_Word transform_hlds__deforest__DeforestBranches0_41;
        MR_Word transform_hlds__deforest__Var_28;
        MR_Word transform_hlds__deforest__Var_29;
        MR_Word transform_hlds__deforest__Var_30;
        MR_Word transform_hlds__deforest__Var_32;
        MR_Box transform_hlds__deforest__conv1_DeforestBranches_16;

        if (transform_hlds__deforest__succeeded)
          {
            transform_hlds__deforest__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 0)));
            transform_hlds__deforest__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__4_4, (MR_Integer) 1)));
            transform_hlds__deforest__LaterGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, (MR_Integer) 0)));
            transform_hlds__deforest__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_10, (MR_Integer) 1)));
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_19)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__deforest__succeeded)
              {
                transform_hlds__deforest__LaterBranchInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_19, (MR_Integer) 0)));
                transform_hlds__deforest__VarMap1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 0)));
                transform_hlds__deforest__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 1)));
                transform_hlds__deforest__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__EarlierBranchInfo_8, (MR_Integer) 2)));
                transform_hlds__deforest__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 0)));
                transform_hlds__deforest__LeftVars2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 1)));
                transform_hlds__deforest__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterBranchInfo_15, (MR_Integer) 2)));
                transform_hlds__deforest__TypeInfo_28_48 = (MR_Word) &transform_hlds__deforest_scalar_common_1[1];
                transform_hlds__deforest__TypeInfo_29_49 = (MR_Word) &transform_hlds__deforest_scalar_common_1[4];
                {
                  mercury__map__select_3_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap1_27, transform_hlds__deforest__LeftVars2_31, &transform_hlds__deforest__VarMap_33);
                }
                {
                  mercury__map__to_assoc_list_2_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap_33, &transform_hlds__deforest__VarAssoc_34);
                }
                {
                  transform_hlds__deforest__succeeded = mercury__map__is_empty_1_p_0(transform_hlds__deforest__TypeInfo_28_48, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__VarMap_33);
                }
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
                if (transform_hlds__deforest__succeeded)
                  {
                    transform_hlds__deforest__GetBranches_35 = (MR_Word) &transform_hlds__deforest_scalar_common_2[9];
                    transform_hlds__deforest__TypeCtorInfo_31_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                    {
                      mercury__set__init_1_p_0(transform_hlds__deforest__TypeCtorInfo_31_51, &transform_hlds__deforest__DeforestBranches0_41);
                    }
                    transform_hlds__deforest__TypeInfo_32_52 = (MR_Word) &transform_hlds__deforest_scalar_common_2[2];
                    {
                      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeInfo_32_52, transform_hlds__deforest__TypeInfo_29_49, transform_hlds__deforest__GetBranches_35, transform_hlds__deforest__VarAssoc_34, ((MR_Box) (transform_hlds__deforest__DeforestBranches0_41)), &transform_hlds__deforest__conv1_DeforestBranches_16);
                    }
                    transform_hlds__deforest__DeforestBranches_16 = ((MR_Word) transform_hlds__deforest__conv1_DeforestBranches_16);
                    transform_hlds__deforest__succeeded = MR_TRUE;
                  }
              }
            if (transform_hlds__deforest__succeeded)
              {
                MR_Word transform_hlds__deforest__BetweenGoals1_17;
                MR_Word transform_hlds__deforest__BetweenGoals_18;

                {
                  mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__deforest_scalar_common_2[1], transform_hlds__deforest__RevBetweenGoals0_9, &transform_hlds__deforest__BetweenGoals1_17);
                }
                {
                  mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[3], transform_hlds__deforest__BetweenGoals1_17, &transform_hlds__deforest__BetweenGoals_18);
                }
                *transform_hlds__deforest__Goals_12 = transform_hlds__deforest__Goals0_11;
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__deforest__DeforestInfo_13 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_7));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__deforest__EarlierBranchInfo_8));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_18));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__deforest__LaterGoal_14));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__deforest__LaterBranchInfo_15));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__deforest__DeforestBranches_16));
                }
                transform_hlds__deforest__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word transform_hlds__deforest__Var_20;

                {
                  transform_hlds__deforest__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_20, 0) = ((MR_Box) (transform_hlds__deforest__Goal_10));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_20, 1) = ((MR_Box) (transform_hlds__deforest__RevBetweenGoals0_9));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__deforest__next_value_of_RevBetweenGoals0_9 = transform_hlds__deforest__Var_20;
                  MR_Word transform_hlds__deforest__next_value_of_HeadVar__4_4 = transform_hlds__deforest__Goals0_11;

                  transform_hlds__deforest__HeadVar__4_4 = transform_hlds__deforest__next_value_of_HeadVar__4_4;
                  transform_hlds__deforest__RevBetweenGoals0_9 = transform_hlds__deforest__next_value_of_RevBetweenGoals0_9;
                }
                continue;
              }
          }
        return transform_hlds__deforest__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

    {
      transform_hlds__deforest__succeeded = transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__505__1_1_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1));
    }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word transform_hlds__deforest__NonLocals_2,
  MR_Word transform_hlds__deforest__HeadVar__3_3,
  MR_Word * transform_hlds__deforest__Goals_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__deforest__succeeded;

        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__deforest__HeadVar__3_3, transform_hlds__deforest__Goals_4);
            }
            *transform_hlds__deforest__STATE_VARIABLE_PDInfo_6 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5;
          }
        else
          {
            MR_Word transform_hlds__deforest__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__deforest__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__deforest__ModuleInfo_19;
            MR_Word transform_hlds__deforest__SymName_25;
            MR_Word transform_hlds__deforest__Constraints_31;
            MR_Word transform_hlds__deforest__Goals1_32;
            MR_Word transform_hlds__deforest__TypeCtorInfo_73_73;
            MR_Word transform_hlds__deforest__PredId_20;
            MR_Word transform_hlds__deforest__PredInfo_27;
            MR_Word transform_hlds__deforest__Var_44;
            MR_Word transform_hlds__deforest__Var_45;
            MR_Word transform_hlds__deforest__Var_26;
            MR_Integer transform_hlds__deforest___ProcId_21;
            MR_Word transform_hlds__deforest___Args_22;
            MR_Word transform_hlds__deforest__Var_23;
            MR_Word transform_hlds__deforest__Var_24;
            MR_Word transform_hlds__deforest__Var_33;
            MR_Word transform_hlds__deforest__Var_34;

            {
              transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__ModuleInfo_19);
            }
            transform_hlds__deforest__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_13, (MR_Integer) 0)));
            transform_hlds__deforest__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal0_13, (MR_Integer) 1)));
            transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_44)) == (MR_mktag((MR_Integer) 2)));
            if (transform_hlds__deforest__succeeded)
              {
                transform_hlds__deforest__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_44, (MR_Integer) 0)));
                transform_hlds__deforest___ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_44, (MR_Integer) 1)));
                transform_hlds__deforest___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_44, (MR_Integer) 2)));
                transform_hlds__deforest__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_44, (MR_Integer) 3)));
                transform_hlds__deforest__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_44, (MR_Integer) 4)));
                transform_hlds__deforest__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_44, (MR_Integer) 5)));
                {
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__deforest__ModuleInfo_19, transform_hlds__deforest__PredId_20, &transform_hlds__deforest__PredInfo_27);
                }
                {
                  transform_hlds__deforest__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__deforest__PredInfo_27);
                }
                transform_hlds__deforest__succeeded = !(transform_hlds__deforest__succeeded);
                if (transform_hlds__deforest__succeeded)
                  {
                    transform_hlds__deforest__Var_45 = (MR_Word) &transform_hlds__deforest_scalar_common_2[8];
                    transform_hlds__deforest__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    {
                      mercury__list__take_while_4_p_0(transform_hlds__deforest__TypeCtorInfo_73_73, transform_hlds__deforest__Var_45, transform_hlds__deforest__Goals0_14, &transform_hlds__deforest__Constraints_31, &transform_hlds__deforest__Goals1_32);
                    }
                    transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Constraints_31)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__deforest__succeeded)
                      {
                        transform_hlds__deforest__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Constraints_31, (MR_Integer) 0)));
                        transform_hlds__deforest__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Constraints_31, (MR_Integer) 1)));
                      }
                  }
              }
            if (transform_hlds__deforest__succeeded)
              {
                MR_String transform_hlds__deforest__SymNameString_35;
                MR_Word transform_hlds__deforest__Globals_36;
                MR_Word transform_hlds__deforest__DebugPD_37;
                MR_Word transform_hlds__deforest__MaybeGoal_40;
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59;
                MR_Word transform_hlds__deforest__Var_51;
                MR_Word transform_hlds__deforest__Var_53;
                MR_Word transform_hlds__deforest__ConjNonLocals_39;

                {
                  transform_hlds__deforest__SymNameString_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__deforest__SymName_25);
                }
                {
                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__ModuleInfo_19, &transform_hlds__deforest__Globals_36);
                }
                {
                  libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_36, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_37);
                }
                {
                  transform_hlds__deforest__Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_53, 0) = ((MR_Box) (transform_hlds__deforest__SymNameString_35));
                }
                {
                  transform_hlds__deforest__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_51, 0) = ((MR_Box) (transform_hlds__deforest__Var_53));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_37, (MR_String) "propagating constraints into call to %s\n", transform_hlds__deforest__Var_51);
                }
                {
                  transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(transform_hlds__deforest__NonLocals_2, transform_hlds__deforest__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__Goal0_13, transform_hlds__deforest__Constraints_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__deforest__Goals1_32, &transform_hlds__deforest__ConjNonLocals_39);
                }
                {
                  transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__Constraints_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__deforest__MaybeGoal_40, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59);
                }
                if ((transform_hlds__deforest__MaybeGoal_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60;
                    MR_Word transform_hlds__deforest__Var_61;

                    {
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60);
                    }
                    {
                      transform_hlds__deforest__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_61, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_61, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__deforest__next_value_of_HeadVar__1_1 = transform_hlds__deforest__Goals0_14;
                      MR_Word transform_hlds__deforest__next_value_of_HeadVar__3_3 = transform_hlds__deforest__Var_61;
                      MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_60_60;

                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5;
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__next_value_of_HeadVar__3_3;
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word transform_hlds__deforest__Goal_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeGoal_40, (MR_Integer) 0)));
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64;
                    MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65;
                    MR_Word transform_hlds__deforest__Var_66;

                    {
                      transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, transform_hlds__deforest__STATE_VARIABLE_PDInfo_59_59, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64);
                    }
                    {
                      transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal_41, transform_hlds__deforest__STATE_VARIABLE_PDInfo_64_64, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65);
                    }
                    {
                      transform_hlds__deforest__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_66, 0) = ((MR_Box) (transform_hlds__deforest__Goal_41));
                      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_66, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__deforest__next_value_of_HeadVar__1_1 = transform_hlds__deforest__Goals1_32;
                      MR_Word transform_hlds__deforest__next_value_of_HeadVar__3_3 = transform_hlds__deforest__Var_66;
                      MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_65_65;

                      transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5;
                      transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__next_value_of_HeadVar__3_3;
                      transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
            else
              {
                MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;
                MR_Word transform_hlds__deforest__Var_69;

                {
                  transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal0_13, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68);
                }
                {
                  transform_hlds__deforest__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_69, 0) = ((MR_Box) (transform_hlds__deforest__Goal0_13));
                  MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_69, 1) = ((MR_Box) (transform_hlds__deforest__HeadVar__3_3));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__deforest__next_value_of_HeadVar__1_1 = transform_hlds__deforest__Goals0_14;
                  MR_Word transform_hlds__deforest__next_value_of_HeadVar__3_3 = transform_hlds__deforest__Var_69;
                  MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_68_68;

                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_5 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_5;
                  transform_hlds__deforest__HeadVar__3_3 = transform_hlds__deforest__next_value_of_HeadVar__3_3;
                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_9,
  MR_Word transform_hlds__deforest__BetweenGoals_10,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_11,
  MR_Word * transform_hlds__deforest__MaybeGoal_12,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__deforest__succeeded;
        MR_Word transform_hlds__deforest__ShouldTry_14;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;

        {
          transform_hlds__deforest__can_optimize_conj_6_p_0(transform_hlds__deforest__EarlierGoal_9, transform_hlds__deforest__BetweenGoals_10, transform_hlds__deforest__MaybeLaterGoal_11, &transform_hlds__deforest__ShouldTry_14, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
        switch (transform_hlds__deforest__ShouldTry_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__deforest__MaybeGoal_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *transform_hlds__deforest__STATE_VARIABLE_PDInfo_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
            }
            break;
          case (MR_Integer) 1:
            {
              /* direct tailcall eliminated */
              {
                MR_Word transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_15 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;

                transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_15 = transform_hlds__deforest__next_value_of_STATE_VARIABLE_PDInfo_0_15;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    {
      MR_Word transform_hlds__deforest__Var_34;

      {
        hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_22, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_23, &transform_hlds__deforest__Var_34, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_35);
      }
      {
        hlds__hlds_pred__proc_info_get_goal_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_35, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_36);
      }
      {
        hlds__goal_util__goal_size_2_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_36, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_37);
      }
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_18 == (MR_Integer) -1);
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        {
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_37 > (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_18);
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
            {
              transform_hlds__deforest__can_optimize_conj_6_p_0_1(transform_hlds__deforest__env_ptr);
            }
        }
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0) == 0)
      {
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_18 == (MR_Integer) -1);
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
        if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
          {
            {
              MR_Word transform_hlds__deforest__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0)));
              MR_Word transform_hlds__deforest__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__Var_24;
              MR_Word transform_hlds__deforest__Var_25;
              MR_Word transform_hlds__deforest__Var_26;
              MR_Word transform_hlds__deforest__Var_27;

              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_69)) == (MR_mktag((MR_Integer) 2)));
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
                {
                  {
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_69, (MR_Integer) 0)));
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_69, (MR_Integer) 1)));
                    transform_hlds__deforest__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_69, (MR_Integer) 2)));
                    transform_hlds__deforest__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_69, (MR_Integer) 3)));
                    transform_hlds__deforest__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_69, (MR_Integer) 4)));
                    transform_hlds__deforest__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_69, (MR_Integer) 5)));
                  }
                  {
                    transform_hlds__deforest__can_optimize_conj_6_p_0_2(transform_hlds__deforest__env_ptr);
                  }
                }
            }
            {
              MR_Word transform_hlds__deforest__Var_67;
              MR_Word transform_hlds__deforest__Var_68;
              MR_Word transform_hlds__deforest__Var_33;
              MR_Word transform_hlds__deforest__Var_29;
              MR_Word transform_hlds__deforest__Var_30;
              MR_Word transform_hlds__deforest__Var_31;
              MR_Word transform_hlds__deforest__Var_32;

              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
                {
                  transform_hlds__deforest__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
                  {
                    transform_hlds__deforest__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_67, (MR_Integer) 0)));
                    transform_hlds__deforest__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_67, (MR_Integer) 1)));
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Var_68)) == (MR_mktag((MR_Integer) 2)));
                    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
                      {
                        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_68, (MR_Integer) 0)));
                        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_68, (MR_Integer) 1)));
                        transform_hlds__deforest__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_68, (MR_Integer) 2)));
                        transform_hlds__deforest__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_68, (MR_Integer) 3)));
                        transform_hlds__deforest__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_68, (MR_Integer) 4)));
                        transform_hlds__deforest__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__Var_68, (MR_Integer) 5)));
                      }
                  }
                }
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
                {
                  transform_hlds__deforest__can_optimize_conj_6_p_0_2(transform_hlds__deforest__env_ptr);
                }
            }
          }
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    {
      {
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_5_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_95, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_96, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_41, (MR_Integer) 0);
      }
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        {
          transform_hlds__deforest__can_optimize_conj_6_p_0_4(transform_hlds__deforest__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1) == 0)
      {
        {
          MR_Word transform_hlds__deforest__EarlierGoalExpr_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0)));
          MR_Word transform_hlds__deforest__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 1)));
          MR_Word transform_hlds__deforest__Var_40;
          MR_Word transform_hlds__deforest__Var_42;
          MR_Word transform_hlds__deforest__Var_43;

          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__EarlierGoalExpr_38)) == (MR_mktag((MR_Integer) 2)));
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
            {
              {
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_38, (MR_Integer) 0)));
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_96 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_38, (MR_Integer) 1)));
                transform_hlds__deforest__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_38, (MR_Integer) 2)));
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_38, (MR_Integer) 3)));
                transform_hlds__deforest__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_38, (MR_Integer) 4)));
                transform_hlds__deforest__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__EarlierGoalExpr_38, (MR_Integer) 5)));
              }
              {
                transform_hlds__deforest__can_optimize_conj_6_p_0_5(transform_hlds__deforest__env_ptr);
              }
            }
        }
        {
          MR_Word transform_hlds__deforest__LaterGoalExpr_44;
          MR_Word transform_hlds__deforest__Var_74;
          MR_Word transform_hlds__deforest__Var_45;
          MR_Word transform_hlds__deforest__Var_46;
          MR_Word transform_hlds__deforest__Var_47;
          MR_Word transform_hlds__deforest__Var_48;

          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
            {
              transform_hlds__deforest__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
              {
                transform_hlds__deforest__LaterGoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_74, (MR_Integer) 0)));
                transform_hlds__deforest__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_74, (MR_Integer) 1)));
                (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__LaterGoalExpr_44)) == (MR_mktag((MR_Integer) 2)));
                if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
                  {
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_44, (MR_Integer) 0)));
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_96 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_44, (MR_Integer) 1)));
                    transform_hlds__deforest__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_44, (MR_Integer) 2)));
                    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_44, (MR_Integer) 3)));
                    transform_hlds__deforest__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_44, (MR_Integer) 4)));
                    transform_hlds__deforest__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__LaterGoalExpr_44, (MR_Integer) 5)));
                  }
              }
            }
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
            {
              transform_hlds__deforest__can_optimize_conj_6_p_0_5(transform_hlds__deforest__env_ptr);
            }
        }
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    {
      MR_Word transform_hlds__deforest__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_49, (MR_Integer) 0)));
      MR_Word transform_hlds__deforest__Var_84;

      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_49, (MR_Integer) 1)));
      {
        transform_hlds__deforest__Var_84 = hlds__hlds_goal__goal_info_get_purity_1_f_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_51);
      }
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__Var_84 == (MR_Integer) 0);
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
      if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        {
          transform_hlds__deforest__can_optimize_conj_6_p_0_7(transform_hlds__deforest__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_49 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_49);
    {
      transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_49, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_9, transform_hlds__deforest__env_ptr);
          }
        }
        {
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_49 = (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
          {
            transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
          }
        }
        {
          (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
          if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
            {
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
              {
                transform_hlds__deforest__can_optimize_conj_6_p_0_8(transform_hlds__deforest__env_ptr);
              }
            }
        }
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3, 1);
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    {
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_52, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_53);
    }
    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
    if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
      {
        transform_hlds__deforest__can_optimize_conj_6_p_0_11(transform_hlds__deforest__env_ptr);
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_53 = ((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_53);
    {
      transform_hlds__deforest__can_optimize_conj_6_p_0_12(transform_hlds__deforest__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
  void * transform_hlds__deforest__env_ptr_arg)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * transform_hlds__deforest__env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) transform_hlds__deforest__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3) == 0)
      {
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_19)) == (MR_mktag((MR_Integer) 1)));
        if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
          {
            (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_19, (MR_Integer) 0)));
            {
              {
                {
                  mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_53, (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_13, transform_hlds__deforest__env_ptr);
                }
              }
              (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9)) == (MR_mktag((MR_Integer) 1)));
              if ((transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
                {
                  (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0)));
                  {
                    transform_hlds__deforest__can_optimize_conj_6_p_0_12(transform_hlds__deforest__env_ptr);
                  }
                }
            }
          }
        (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__deforest__env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
  MR_Word transform_hlds__deforest__EarlierGoal_7,
  MR_Word transform_hlds__deforest__BetweenGoals_8,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_9,
  MR_Word * transform_hlds__deforest__ShouldTry_10,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_55,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_56)
{
  {
    struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s transform_hlds__deforest__env;

    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7 = transform_hlds__deforest__EarlierGoal_7;
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8 = transform_hlds__deforest__BetweenGoals_8;
    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9 = transform_hlds__deforest__MaybeLaterGoal_9;
    {
      MR_Integer transform_hlds__deforest__Depth0_12;
      MR_Word transform_hlds__deforest__Globals_14;
      MR_Word transform_hlds__deforest__DepthLimitOpt_15;
      MR_Word transform_hlds__deforest__DebugPD_16;
      MR_Integer transform_hlds__deforest__Depth_17;
      MR_Integer transform_hlds__deforest__MaxDepth_20;

      {
        transform_hlds__pd_info__pd_info_get_depth_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_55, &transform_hlds__deforest__Depth0_12);
      }
      {
        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_55, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13);
      }
      {
        hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13, &transform_hlds__deforest__Globals_14);
      }
      {
        libs__globals__lookup_option_3_p_0(transform_hlds__deforest__Globals_14, (MR_Integer) 397, &transform_hlds__deforest__DepthLimitOpt_15);
      }
      {
        libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_14, (MR_Integer) 83, &transform_hlds__deforest__DebugPD_16);
      }
      transform_hlds__deforest__Depth_17 = (transform_hlds__deforest__Depth0_12 + (MR_Integer) 1);
      {
        transform_hlds__pd_info__pd_info_set_depth_3_p_0(transform_hlds__deforest__Depth_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_55, transform_hlds__deforest__STATE_VARIABLE_PDInfo_56);
      }
      {
        libs__globals__lookup_int_option_3_p_0(transform_hlds__deforest__Globals_14, (MR_Integer) 400, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_18);
      }
      {
        libs__globals__lookup_option_3_p_0(transform_hlds__deforest__Globals_14, (MR_Integer) 177, &(transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_19);
      }
      (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__DepthLimitOpt_15)) == (MR_mktag((MR_Integer) 2)));
      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        {
          transform_hlds__deforest__MaxDepth_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__DepthLimitOpt_15, (MR_Integer) 0)));
          (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__MaxDepth_20 == (MR_Integer) -1);
          (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
            (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (transform_hlds__deforest__Depth0_12 >= transform_hlds__deforest__MaxDepth_20);
        }
      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
      else
        {
          {
            transform_hlds__deforest__can_optimize_conj_6_p_0_3(&transform_hlds__deforest__env);
          }
          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
            {
              {
                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_16, (MR_String) "goal too large\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
              *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
            }
          else
            {
              {
                transform_hlds__deforest__can_optimize_conj_6_p_0_6(&transform_hlds__deforest__env);
              }
              if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
                {
                  {
                    transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_16, (MR_String) "non-inlineable calls\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
                  *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
                }
              else
                {
                  {
                    (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8);
                  }
                  (transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
                  if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
                    {
                      {
                        transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_16, (MR_String) "between goals not simple enough\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                      }
                      *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
                    }
                  else
                    {
                      {
                        transform_hlds__deforest__can_optimize_conj_6_p_0_10(&transform_hlds__deforest__env);
                      }
                      if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
                        {
                          {
                            transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_16, (MR_String) "goal list contains impure goal(s)\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                          }
                          *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
                        }
                      else
                        {
                          {
                            transform_hlds__deforest__can_optimize_conj_6_p_0_14(&transform_hlds__deforest__env);
                          }
                          if ((transform_hlds__deforest__env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
                            {
                              {
                                transform_hlds__pd_debug__pd_debug_message_5_p_0(transform_hlds__deforest__DebugPD_16, (MR_String) "interleaving execution could change termination behaviour\n", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                              }
                              *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 0;
                            }
                          else
                            *transform_hlds__deforest__ShouldTry_10 = (MR_Integer) 1;
                        }
                    }
                }
            }
        }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__deforest__succeeded;

        if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__deforest__succeeded = MR_TRUE;
        else
          {
            MR_Word transform_hlds__deforest__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__deforest__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__deforest__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_2, (MR_Integer) 0)));
            MR_Word transform_hlds__deforest__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_2, (MR_Integer) 1)));

            {
              MR_Word transform_hlds__deforest__Var_8;

              {
                transform_hlds__deforest__Var_8 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__deforest__GoalExpr_4);
              }
              transform_hlds__deforest__succeeded = (transform_hlds__deforest__Var_8 == (MR_Integer) 1);
            }
            if (!(transform_hlds__deforest__succeeded))
              {
                MR_Word transform_hlds__deforest__Goal1_6;
                MR_Word transform_hlds__deforest__GoalList1_7;

                transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_4)) == (MR_mktag((MR_Integer) 0)));
                if (transform_hlds__deforest__succeeded)
                  {
                    transform_hlds__deforest__Goal1_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__deforest__GoalExpr_4), (MR_Integer) 0);
                    {
                      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__deforest__Goal1_6, &transform_hlds__deforest__GoalList1_7);
                    }
                    {
                      transform_hlds__deforest__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0(transform_hlds__deforest__GoalList1_7);
                    }
                  }
              }
            if (transform_hlds__deforest__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__deforest__next_value_of_HeadVar__1_1 = transform_hlds__deforest__Goals_3;

                  transform_hlds__deforest__HeadVar__1_1 = transform_hlds__deforest__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return transform_hlds__deforest__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
    MR_Word transform_hlds__deforest__conv0_LambdaHeadVar__3_31;

    {
      transform_hlds__deforest__IntroducedFrom__pred__get_sub_conj_nonlocals__1654__1_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv0_LambdaHeadVar__3_31);
    }
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv0_LambdaHeadVar__3_31));
  }
}

static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_9_p_0(
  MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27,
  MR_Word transform_hlds__deforest__RevBeforeGoals_11,
  MR_Word transform_hlds__deforest__BeforeIrrelevant_12,
  MR_Word transform_hlds__deforest__EarlierGoal_13,
  MR_Word transform_hlds__deforest__BetweenGoals_14,
  MR_Word transform_hlds__deforest__MaybeLaterGoal_15,
  MR_Word transform_hlds__deforest__AfterIrrelevant_16,
  MR_Word transform_hlds__deforest__AfterGoals_17,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    MR_Word transform_hlds__deforest__TypeInfo_46_46 = (MR_Word) &transform_hlds__deforest_scalar_common_1[6];
    MR_Word transform_hlds__deforest__TypeCtorInfo_47_47;
    MR_Word transform_hlds__deforest__AddGoalNonLocals_19 = (MR_Word) &transform_hlds__deforest_scalar_common_2[7];
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35;
    MR_Word transform_hlds__deforest__Var_36;
    MR_Word transform_hlds__deforest__Var_37;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39;
    MR_Box transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32;
    MR_Box transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33;
    MR_Box transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34;
    MR_Box transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35;
    MR_Box transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38;

    {
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__RevBeforeGoals_11, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_0_27)), &transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32);
    }
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32 = ((MR_Word) transform_hlds__deforest__conv1_STATE_VARIABLE_NonLocals_32_32);
    {
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__BeforeIrrelevant_12, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_32_32)), &transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33);
    }
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33 = ((MR_Word) transform_hlds__deforest__conv2_STATE_VARIABLE_NonLocals_33_33);
    {
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__AfterIrrelevant_16, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_33_33)), &transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34);
    }
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34 = ((MR_Word) transform_hlds__deforest__conv3_STATE_VARIABLE_NonLocals_34_34);
    {
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__AfterGoals_17, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_NonLocals_34_34)), &transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35);
    }
    transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35 = ((MR_Word) transform_hlds__deforest__conv4_STATE_VARIABLE_NonLocals_35_35);
    {
      transform_hlds__deforest__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_36, 0) = ((MR_Box) (transform_hlds__deforest__EarlierGoal_13));
      MR_hl_field(MR_mktag(1), transform_hlds__deforest__Var_36, 1) = ((MR_Box) (transform_hlds__deforest__BetweenGoals_14));
    }
    transform_hlds__deforest__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      transform_hlds__deforest__Var_37 = parse_tree__set_of_var__init_0_f_0(transform_hlds__deforest__TypeCtorInfo_47_47);
    }
    {
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_45_45, transform_hlds__deforest__TypeInfo_46_46, transform_hlds__deforest__AddGoalNonLocals_19, transform_hlds__deforest__Var_36, ((MR_Box) (transform_hlds__deforest__Var_37)), &transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38);
    }
    transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38 = ((MR_Word) transform_hlds__deforest__conv5_STATE_VARIABLE_SubConjNonLocals_38_38);
    if ((transform_hlds__deforest__MaybeLaterGoal_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39 = transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38;
    else
      {
        MR_Word transform_hlds__deforest__LaterGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeLaterGoal_15, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__GoalInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_26, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__GoalNonLocals_72;
        MR_Word transform_hlds__deforest__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__LaterGoal_26, (MR_Integer) 0)));

        {
          transform_hlds__deforest__GoalNonLocals_72 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__deforest__GoalInfo_71);
        }
        {
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__deforest__GoalNonLocals_72, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_38_38, &transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39);
        }
      }
    {
      parse_tree__set_of_var__intersect_3_p_0(transform_hlds__deforest__TypeCtorInfo_47_47, transform_hlds__deforest__STATE_VARIABLE_NonLocals_35_35, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_39_39, transform_hlds__deforest__STATE_VARIABLE_SubConjNonLocals_28);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
  MR_Word transform_hlds__deforest__HeadVar__1_1,
  MR_Word * transform_hlds__deforest__HeadVar__2_2,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_PDInfo_4)
{
  {
    MR_bool transform_hlds__deforest__succeeded;

    if ((transform_hlds__deforest__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__deforest__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__deforest__STATE_VARIABLE_PDInfo_4 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
      }
    else
      {
        MR_Word transform_hlds__deforest__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__deforest__MaybeBranchInfo_10;
        MR_Word transform_hlds__deforest__Goals_11;
        MR_Word transform_hlds__deforest__Var_15;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17;
        MR_Word transform_hlds__deforest__GoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_8, (MR_Integer) 0)));
        MR_Word transform_hlds__deforest__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__Goal_8, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) transform_hlds__deforest__GoalExpr_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__deforest__PredId_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)));
              MR_Integer transform_hlds__deforest__ProcId_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 1)));
              MR_Word transform_hlds__deforest__Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 2)));
              MR_Word transform_hlds__deforest__ProcBranchInfos_62;
              MR_Word transform_hlds__deforest__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 3)));
              MR_Word transform_hlds__deforest__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 4)));
              MR_Word transform_hlds__deforest__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 5)));
              MR_Word transform_hlds__deforest__BranchInfo0_63;
              MR_Word transform_hlds__deforest__Var_69;
              MR_Box transform_hlds__deforest__conv0_BranchInfo0_63;

              {
                transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__ProcBranchInfos_62);
              }
              {
                transform_hlds__deforest__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_69, 0) = ((MR_Box) (transform_hlds__deforest__PredId_56));
                MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_69, 1) = ((MR_Box) (transform_hlds__deforest__ProcId_57));
              }
              {
                transform_hlds__deforest__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], transform_hlds__deforest__ProcBranchInfos_62, ((MR_Box) (transform_hlds__deforest__Var_69)), &transform_hlds__deforest__conv0_BranchInfo0_63);
              }
              if (transform_hlds__deforest__succeeded)
                {
                  transform_hlds__deforest__BranchInfo0_63 = ((MR_Word) transform_hlds__deforest__conv0_BranchInfo0_63);
                  transform_hlds__deforest__succeeded = MR_TRUE;
                }
              if (transform_hlds__deforest__succeeded)
                {
                  MR_Word transform_hlds__deforest__BranchInfo_64;

                  {
                    transform_hlds__pd_util__convert_branch_info_3_p_0(transform_hlds__deforest__BranchInfo0_63, transform_hlds__deforest__Args_58, &transform_hlds__deforest__BranchInfo_64);
                  }
                  {
                    transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__deforest__MaybeBranchInfo_10, 0) = ((MR_Box) (transform_hlds__deforest__BranchInfo_64));
                  }
                }
              else
                transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__GoalExpr_24, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 5:
                {
                  transform_hlds__deforest__MaybeBranchInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16 = transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3;
                }
                break;
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 6:
                {
                  transform_hlds__pd_util__get_branch_vars_goal_4_p_0(transform_hlds__deforest__Goal_8, &transform_hlds__deforest__MaybeBranchInfo_10, transform_hlds__deforest__STATE_VARIABLE_PDInfo_0_3, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16);
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforest_get_branch_vars_goal\'/4", (MR_String) "shorthand");
                    return;
                  }
                }
                break;
            }
            break;
        }
        {
          transform_hlds__deforest__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_15, 0) = ((MR_Box) (transform_hlds__deforest__Goal_8));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_15, 1) = ((MR_Box) (transform_hlds__deforest__MaybeBranchInfo_10));
        }
        {
          transform_hlds__pd_info__pd_info_update_goal_3_p_0(transform_hlds__deforest__Goal_8, transform_hlds__deforest__STATE_VARIABLE_PDInfo_16_16, &transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17);
        }
        {
          transform_hlds__deforest__compute_goal_infos_4_p_0(transform_hlds__deforest__Goals0_9, &transform_hlds__deforest__Goals_11, transform_hlds__deforest__STATE_VARIABLE_PDInfo_17_17, transform_hlds__deforest__STATE_VARIABLE_PDInfo_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__deforest__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__deforest__Var_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__deforest__Goals_11));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
  MR_Word transform_hlds__deforest__PredProcId_8,
  MR_Word transform_hlds__deforest__ProcInfo_9,
  MR_Word * transform_hlds__deforest__ProcInfo_3,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16,
  MR_Word transform_hlds__deforest__UnivProcArgInfo0_11,
  MR_Word * transform_hlds__deforest__UnivProcArgInfo_12)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__TypeInfo_18_18;
    MR_Word transform_hlds__deforest__ProcArgInfo0_13;
    MR_Word transform_hlds__deforest__ProcArgInfo_14;
    MR_Box transform_hlds__deforest__conv0_ProcArgInfo0_13;

    *transform_hlds__deforest__ProcInfo_3 = transform_hlds__deforest__ProcInfo_9;
    transform_hlds__deforest__TypeInfo_18_18 = (MR_Word) &transform_hlds__deforest_scalar_common_2[0];
    {
      mercury__univ__det_univ_to_type_2_p_0(transform_hlds__deforest__TypeInfo_18_18, transform_hlds__deforest__UnivProcArgInfo0_11, &transform_hlds__deforest__conv0_ProcArgInfo0_13);
    }
    transform_hlds__deforest__ProcArgInfo0_13 = ((MR_Word) transform_hlds__deforest__conv0_ProcArgInfo0_13);
    {
      transform_hlds__pd_util__get_branch_vars_proc_6_p_0(transform_hlds__deforest__PredProcId_8, transform_hlds__deforest__ProcInfo_9, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_16, transform_hlds__deforest__ProcArgInfo0_13, &transform_hlds__deforest__ProcArgInfo_14);
    }
    {
      mercury__univ__type_to_univ_2_p_1(transform_hlds__deforest__TypeInfo_18_18, ((MR_Box) (transform_hlds__deforest__ProcArgInfo_14)), transform_hlds__deforest__UnivProcArgInfo_12);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
  MR_Word transform_hlds__deforest__PredProcId_4,
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_13)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__PredInfo_6;
    MR_Word transform_hlds__deforest__ProcInfo0_7;
    MR_Word transform_hlds__deforest__Detism0_8;
    MR_Word transform_hlds__deforest__MaxSolns_10;
    MR_Word transform_hlds__deforest__Var_9;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__deforest__PredProcId_4, &transform_hlds__deforest__PredInfo_6, &transform_hlds__deforest__ProcInfo0_7);
    }
    {
      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__deforest__ProcInfo0_7, &transform_hlds__deforest__Detism0_8);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__deforest__Detism0_8, &transform_hlds__deforest__Var_9, &transform_hlds__deforest__MaxSolns_10);
    }
    switch (transform_hlds__deforest__MaxSolns_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__deforest__ProcInfo_11;

          {
            hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0((MR_Integer) 6, transform_hlds__deforest__ProcInfo0_7, &transform_hlds__deforest__ProcInfo_11);
          }
          {
            hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__deforest__PredProcId_4, transform_hlds__deforest__PredInfo_6, transform_hlds__deforest__ProcInfo_11, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_13);
          }
        }
        break;
      case (MR_Integer) 2:
        *transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_13 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_12;
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_4(
  MR_Box transform_hlds__deforest__closure_arg)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;

    {
      transform_hlds__deforest__succeeded = transform_hlds__deforest__IntroducedFrom__pred__deforestation__151__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__deforest__closure, (MR_Integer) 4))));
    }
    return transform_hlds__deforest__succeeded;
  }
}

static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_3(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
    MR_Word transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_13;

    {
      transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_13);
    }
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv6_STATE_VARIABLE_ModuleInfo_13));
  }
}

static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_2(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
    MR_Word transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9;

    {
      transform_hlds__deforest__deforest_proc_3_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9);
    }
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv4_STATE_VARIABLE_PDInfo_9));
  }
}

static void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0_1(
  MR_Box transform_hlds__deforest__closure_arg,
  MR_Box transform_hlds__deforest__wrapper_arg_1,
  MR_Box transform_hlds__deforest__wrapper_arg_2,
  MR_Box * transform_hlds__deforest__wrapper_arg_3,
  MR_Box transform_hlds__deforest__wrapper_arg_4,
  MR_Box * transform_hlds__deforest__wrapper_arg_5,
  MR_Box transform_hlds__deforest__wrapper_arg_6,
  MR_Box * transform_hlds__deforest__wrapper_arg_7)
{
  {
    MR_Box transform_hlds__deforest__closure = transform_hlds__deforest__closure_arg;
    MR_Word transform_hlds__deforest__conv2_ProcInfo_3;
    MR_Word transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16;
    MR_Word transform_hlds__deforest__conv0_UnivProcArgInfo_12;

    {
      transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(((MR_Word) transform_hlds__deforest__wrapper_arg_1), ((MR_Word) transform_hlds__deforest__wrapper_arg_2), &transform_hlds__deforest__conv2_ProcInfo_3, ((MR_Word) transform_hlds__deforest__wrapper_arg_4), &transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) transform_hlds__deforest__wrapper_arg_6), &transform_hlds__deforest__conv0_UnivProcArgInfo_12);
    }
    *transform_hlds__deforest__wrapper_arg_3 = ((MR_Box) (transform_hlds__deforest__conv2_ProcInfo_3));
    *transform_hlds__deforest__wrapper_arg_5 = ((MR_Box) (transform_hlds__deforest__conv1_STATE_VARIABLE_ModuleInfo_16));
    *transform_hlds__deforest__wrapper_arg_7 = ((MR_Box) (transform_hlds__deforest__conv0_UnivProcArgInfo_12));
  }
}

void MR_CALL 
transform_hlds__deforest__deforestation_2_p_0(
  MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27)
{
  {
    MR_bool transform_hlds__deforest__succeeded;
    MR_Word transform_hlds__deforest__TypeInfo_48_48;
    MR_Word transform_hlds__deforest__TypeCtorInfo_56_56;
    MR_Word transform_hlds__deforest__ProcArgInfo0_4;
    MR_Word transform_hlds__deforest__UnivProcArgInfo0_5;
    MR_Word transform_hlds__deforest__Task0_6;
    MR_Word transform_hlds__deforest__Task_7;
    MR_Word transform_hlds__deforest__ProcArgInfo_11;
    MR_Word transform_hlds__deforest__DepInfo_12;
    MR_Word transform_hlds__deforest__DepList_13;
    MR_Word transform_hlds__deforest__PDInfo0_14;
    MR_Word transform_hlds__deforest__PDInfo_15;
    MR_Word transform_hlds__deforest__VersionIndex_16;
    MR_Word transform_hlds__deforest__Versions_17;
    MR_Word transform_hlds__deforest__Globals_18;
    MR_Word transform_hlds__deforest__Constraints_19;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_29_29;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_33_33;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35;
    MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_36_36;
    MR_Word transform_hlds__deforest__ProcArgInfo1_10;
    MR_Word transform_hlds__deforest__UnivProcArgInfo_9;
    MR_Word transform_hlds__deforest__Var_8;
    MR_Box transform_hlds__deforest__conv3_ProcArgInfo1_10;
    MR_Box transform_hlds__deforest__conv5_PDInfo_15;
    MR_Word transform_hlds__deforest__Var_20;
    MR_Word transform_hlds__deforest__Var_21;

    {
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__deforest_scalar_common_1[0], &transform_hlds__deforest__ProcArgInfo0_4);
    }
    transform_hlds__deforest__TypeInfo_48_48 = (MR_Word) &transform_hlds__deforest_scalar_common_2[0];
    {
      mercury__univ__type_to_univ_2_p_1(transform_hlds__deforest__TypeInfo_48_48, ((MR_Box) (transform_hlds__deforest__ProcArgInfo0_4)), &transform_hlds__deforest__UnivProcArgInfo0_5);
    }
    {
      transform_hlds__deforest__Task0_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_6, 1) = ((MR_Box) (&transform_hlds__deforest_scalar_common_2[4]));
      MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task0_6, 2) = ((MR_Box) (transform_hlds__deforest__UnivProcArgInfo0_5));
    }
    {
      hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(transform_hlds__deforest__Task0_6, &transform_hlds__deforest__Task_7, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_0_26, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_29_29);
    }
    transform_hlds__deforest__succeeded = ((((MR_tag((MR_Word) transform_hlds__deforest__Task_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (transform_hlds__deforest__succeeded)
      {
        transform_hlds__deforest__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_7, (MR_Integer) 1)));
        transform_hlds__deforest__UnivProcArgInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__deforest__Task_7, (MR_Integer) 2)));
        {
          transform_hlds__deforest__succeeded = mercury__univ__univ_to_type_2_p_0(transform_hlds__deforest__TypeInfo_48_48, transform_hlds__deforest__UnivProcArgInfo_9, &transform_hlds__deforest__conv3_ProcArgInfo1_10);
        }
        if (transform_hlds__deforest__succeeded)
          {
            transform_hlds__deforest__ProcArgInfo1_10 = ((MR_Word) transform_hlds__deforest__conv3_ProcArgInfo1_10);
            transform_hlds__deforest__succeeded = MR_TRUE;
          }
      }
    if (transform_hlds__deforest__succeeded)
      transform_hlds__deforest__ProcArgInfo_11 = transform_hlds__deforest__ProcArgInfo1_10;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforestation\'/2", (MR_String) "passes_aux stuffed up");
          return;
        }
      }
    {
      hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_33_33, &transform_hlds__deforest__DepInfo_12);
    }
    transform_hlds__deforest__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      transform_hlds__deforest__DepList_13 = libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0(transform_hlds__deforest__TypeCtorInfo_56_56, transform_hlds__deforest__DepInfo_12);
    }
    {
      transform_hlds__pd_info__pd_info_init_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_33_33, transform_hlds__deforest__ProcArgInfo_11, &transform_hlds__deforest__PDInfo0_14);
    }
    {
      mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_56_56, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[5], transform_hlds__deforest__DepList_13, ((MR_Box) (transform_hlds__deforest__PDInfo0_14)), &transform_hlds__deforest__conv5_PDInfo_15);
    }
    transform_hlds__deforest__PDInfo_15 = ((MR_Word) transform_hlds__deforest__conv5_PDInfo_15);
    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__deforest__PDInfo_15, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35);
    }
    {
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_35_35, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_36_36);
    }
    {
      transform_hlds__pd_info__pd_info_get_versions_2_p_0(transform_hlds__deforest__PDInfo_15, &transform_hlds__deforest__VersionIndex_16);
    }
    {
      mercury__map__keys_2_p_0(transform_hlds__deforest__TypeCtorInfo_56_56, (MR_Word) &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0, transform_hlds__deforest__VersionIndex_16, &transform_hlds__deforest__Versions_17);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_36_36, &transform_hlds__deforest__Globals_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__deforest__Globals_18, (MR_Integer) 355, &transform_hlds__deforest__Constraints_19);
    }
    transform_hlds__deforest__succeeded = (transform_hlds__deforest__Constraints_19 == (MR_Integer) 1);
    if (transform_hlds__deforest__succeeded)
      {
        transform_hlds__deforest__succeeded = ((MR_tag((MR_Word) transform_hlds__deforest__Versions_17)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__deforest__succeeded)
          {
            transform_hlds__deforest__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Versions_17, (MR_Integer) 0)));
            transform_hlds__deforest__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__deforest__Versions_17, (MR_Integer) 1)));
          }
      }
    if (transform_hlds__deforest__succeeded)
      {
        MR_Word transform_hlds__deforest__NoWarnGlobals_23;
        MR_Word transform_hlds__deforest__Specs_24;
        MR_Word transform_hlds__deforest__FoundErrors_25;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_40_40;
        MR_Word transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41;
        MR_Word transform_hlds__deforest__Var_43;
        MR_Box transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_39_39;
        MR_Word transform_hlds__deforest___OptionsToRestore_22;

        {
          mercury__list__foldl_4_p_0(transform_hlds__deforest__TypeCtorInfo_56_56, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__deforest_scalar_common_2[6], transform_hlds__deforest__Versions_17, ((MR_Box) (transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_36_36)), &transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_39_39);
        }
        transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39 = ((MR_Word) transform_hlds__deforest__conv7_STATE_VARIABLE_ModuleInfo_39_39);
        {
          check_hlds__det_report__disable_det_warnings_3_p_0(&transform_hlds__deforest___OptionsToRestore_22, transform_hlds__deforest__Globals_18, &transform_hlds__deforest__NoWarnGlobals_23);
        }
        {
          hlds__hlds_module__module_info_set_globals_3_p_0(transform_hlds__deforest__NoWarnGlobals_23, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_39_39, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_40_40);
        }
        {
          check_hlds__det_analysis__determinism_pass_3_p_0(transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_40_40, &transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__deforest__Specs_24);
        }
        {
          hlds__hlds_module__module_info_set_globals_3_p_0(transform_hlds__deforest__Globals_18, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_41_41, transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27);
        }
        {
          transform_hlds__deforest__FoundErrors_25 = parse_tree__error_util__contains_errors_2_f_0(transform_hlds__deforest__Globals_18, transform_hlds__deforest__Specs_24);
        }
        {
          transform_hlds__deforest__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_43, 0) = ((MR_Box) (&transform_hlds__deforest_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_43, 1) = ((MR_Box) (transform_hlds__deforest__deforestation_2_p_0_4));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_43, 3) = ((MR_Box) (transform_hlds__deforest__FoundErrors_25));
          MR_hl_field(MR_mktag(0), transform_hlds__deforest__Var_43, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__require__expect_4_p_0(transform_hlds__deforest__Var_43, (MR_String) "transform_hlds.deforest", (MR_String) "predicate \140transform_hlds.deforest.deforestation\'/2", (MR_String) "determinism errors after deforestation");
        }
      }
    else
      *transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_27 = transform_hlds__deforest__STATE_VARIABLE_ModuleInfo_36_36;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__deforest__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.deforest. */
