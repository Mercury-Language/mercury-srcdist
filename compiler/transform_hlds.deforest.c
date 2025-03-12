/*
** Automatically generated from `deforest.m'
** by the Mercury compiler,
** version rotd-2025-03-12
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module transform_hlds.deforest.
// :- implementation.

/*
INIT mercury__transform_hlds__deforest__init
ENDINIT
*/

#include "transform_hlds.deforest.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.var_table_hlds.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.inlining.mih"
#include "transform_hlds.pd_cost.mih"
#include "transform_hlds.pd_debug.mih"
#include "transform_hlds.pd_info.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.pd_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s {
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10;
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14;
  MR_bool transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20;
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29;
  jmp_buf transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_215_215;
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_34;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_35;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_36;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_39;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_40;
  MR_Integer transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_41;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_49;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_50;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_51;
  MR_Word transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_214;
  MR_Box transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_34;
};

struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s {
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2;
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3;
  MR_bool transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23;
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__Var_32;
  jmp_buf transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0;
  MR_Word transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_35;
  MR_Box transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_35;
};

struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s {
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2;
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3;
  MR_bool transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded;
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23;
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__Var_32;
  jmp_buf transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0;
  MR_Word transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_35;
  MR_Box transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_35;
};

struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s {
  MR_bool transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
  jmp_buf transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_64_64;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_32;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_33;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_35;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_36;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_37;
  MR_Word transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_38;
  MR_Box transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_33;
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
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_21;
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_22;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_34;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_35;
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_36;
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_95;
  MR_Integer transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_96;
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_48;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_50;
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_48;
  jmp_buf transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_51;
  MR_Word transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_52;
  MR_Box transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_52;
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

static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__do_get_sub_conj_nonlocals__1695__1_3_p_0(
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31);

static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__652__1_3_p_0(
  MR_Word LambdaHeadVar__1_22,
  MR_Word LambdaHeadVar__2_23,
  MR_Word * LambdaHeadVar__3_24);

static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__514__1_1_p_0(
  MR_Word LambdaHeadVar__1_44);

static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforest_module__157__1_2_p_0(
  MR_Word FoundErrors_28,
  MR_Word HeadVar__2_47);

static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__deforest__call_call_2_7_p_0(
  MR_Word ConjNonLocals_8,
  MR_Word EarlierGoal_9,
  MR_Word BetweenGoals_10,
  MR_Word MaybeLaterGoal_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_PDInfo_0_43,
  MR_Word * STATE_VARIABLE_PDInfo_44);

static void MR_CALL 
transform_hlds__deforest__try_generalisation_11_p_0(
  MR_Word EarlierGoal_12,
  MR_Word BetweenGoals_13,
  MR_Word MaybeLaterGoal_14,
  MR_Word FoldGoal_15,
  MR_Word ConjNonLocals_16,
  MR_Word ProcPair_17,
  MR_Integer Size_18,
  MR_Word CoveringPredProcId_19,
  MR_Word * MaybeGoal_20,
  MR_Word STATE_VARIABLE_PDInfo_0_40,
  MR_Word * STATE_VARIABLE_PDInfo_41);

static MR_bool MR_CALL 
transform_hlds__deforest__match_generalised_version_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word VersionGoal_13,
  MR_Word VersionArgVars_14,
  MR_Word VersionArgTypes_15,
  MR_Word FirstGoal_16,
  MR_Word BetweenGoals_17,
  MR_Word MaybeLastGoal_18,
  MR_Word ConjNonLocals_19,
  MR_Word STATE_VARIABLE_VarTable_0_79,
  MR_Word Versions_21,
  MR_Word * Renaming_22);

static void MR_CALL 
transform_hlds__deforest__do_generalisation_14_p_0(
  MR_Word VersionArgVars_15,
  MR_Word Renaming_16,
  MR_Word VersionInstMap_17,
  MR_Word EarlierGoal_18,
  MR_Word BetweenGoals_19,
  MR_Word MaybeLaterGoal_20,
  MR_Word FoldGoal_21,
  MR_Word ConjNonLocals_22,
  MR_Word ProcPair_23,
  MR_Integer Size_24,
  MR_Word Generalised_25,
  MR_Word * MaybeGoal_26,
  MR_Word STATE_VARIABLE_PDInfo_0_39,
  MR_Word * STATE_VARIABLE_PDInfo_40);

static MR_bool MR_CALL 
transform_hlds__deforest__try_MSG_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word VersionInstMap_3,
  MR_Word Renaming_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_InstMap_0_6,
  MR_Word * STATE_VARIABLE_InstMap_7);

static void MR_CALL 
transform_hlds__deforest__create_call_goal_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VersionInfo_10,
  MR_Word Renaming_11,
  MR_Word TypeSubn_12,
  MR_Word * Goal_13,
  MR_Word STATE_VARIABLE_PDInfo_0_42,
  MR_Word * STATE_VARIABLE_PDInfo_43);

static void MR_CALL 
transform_hlds__deforest__create_deforest_call_arg_vars_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Renaming_2,
  MR_Word TypeSubn_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_VarTable_0_7,
  MR_Word * STATE_VARIABLE_VarTable_8);

static void MR_CALL 
transform_hlds__deforest__create_deforest_goal_12_p_0(
  MR_Word EarlierGoal_13,
  MR_Word BetweenGoals_14,
  MR_Word MaybeLaterGoal_15,
  MR_Word FoldGoal0_16,
  MR_Word NonLocals_17,
  MR_Word RunModes_18,
  MR_Word ProcPair_19,
  MR_Integer Size_20,
  MR_Word MaybeGeneralised_21,
  MR_Word * MaybeCallGoal_22,
  MR_Word STATE_VARIABLE_PDInfo_0_86,
  MR_Word * STATE_VARIABLE_PDInfo_87);

static void MR_CALL 
transform_hlds__deforest__create_conj_5_p_0(
  MR_Word EarlierGoal_6,
  MR_Word BetweenGoals_7,
  MR_Word MaybeLaterGoal_8,
  MR_Word NonLocals_9,
  MR_Word * FoldGoal_10);

static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9);

static void MR_CALL 
transform_hlds__deforest__deforest_proc_deltas_5_p_0(
  MR_Word PredProcId_6,
  MR_Integer * CostDelta_7,
  MR_Integer * SizeDelta_8,
  MR_Word STATE_VARIABLE_PDInfo_0_27,
  MR_Word * STATE_VARIABLE_PDInfo_28);

static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_PDInfo_0_5,
  MR_Word * STATE_VARIABLE_PDInfo_6);

static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Goals_3,
  MR_Word STATE_VARIABLE_PDInfo_0_4,
  MR_Word * STATE_VARIABLE_PDInfo_5);

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word Args_12,
  MR_Word SymName_13,
  MR_Word BuiltinState_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_PDInfo_0_46,
  MR_Word * STATE_VARIABLE_PDInfo_47);

static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
  MR_Word Goal0_10,
  MR_Word BetweenGoals_11,
  MR_Word GoalToAppend0_12,
  MR_Word NonLocals0_13,
  MR_Integer CurrBranch_14,
  MR_Word Branches_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_PDInfo_0_30,
  MR_Word * STATE_VARIABLE_PDInfo_31);

static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
  MR_Word Var_1,
  MR_Word BetweenGoals_2,
  MR_Word GoalToAppend_3,
  MR_Word NonLocals_4,
  MR_Integer CurrCase_5,
  MR_Word Branches_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_PDInfo_0_9,
  MR_Word * STATE_VARIABLE_PDInfo_10);

static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
  MR_Word BetweenGoals_1,
  MR_Word GoalToAppend_2,
  MR_Word NonLocals_3,
  MR_Integer CurrBranch_4,
  MR_Word Branches_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9);

static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
  MR_Word NonLocals_9,
  MR_Word DeforestInfo_10,
  MR_Word EarlierGoal_11,
  MR_Word BetweenGoals_12,
  MR_Word LaterGoal_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_PDInfo_0_87,
  MR_Word * STATE_VARIABLE_PDInfo_88);

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
  MR_Word NonLocals_10,
  MR_Word DeforestInfo0_11,
  MR_Word STATE_VARIABLE_RevBeforeGoals_0_84,
  MR_Word * STATE_VARIABLE_RevBeforeGoals_85,
  MR_Word STATE_VARIABLE_AfterGoals_0_86,
  MR_Word * STATE_VARIABLE_AfterGoals_87,
  MR_Word * Optimized_14,
  MR_Word STATE_VARIABLE_PDInfo_0_88,
  MR_Word * STATE_VARIABLE_PDInfo_89);

static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_PDInfo_0_4,
  MR_Word * STATE_VARIABLE_PDInfo_5);

static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_PDInfo_0_3,
  MR_Word * STATE_VARIABLE_PDInfo_4);

static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
  MR_Word GoalExpr0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_61,
  MR_Word * STATE_VARIABLE_GoalInfo_62,
  MR_Word STATE_VARIABLE_PDInfo_0_63,
  MR_Word * STATE_VARIABLE_PDInfo_64);

static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_PDInfo_0_12,
  MR_Word * STATE_VARIABLE_PDInfo_13);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
  MR_Word CheckImprovement_11,
  MR_Word CheckVars_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word Args_15,
  MR_Word Goal0_16,
  MR_Word * Goal_17,
  MR_Word * Optimized_18,
  MR_Word STATE_VARIABLE_PDInfo_0_74,
  MR_Word * STATE_VARIABLE_PDInfo_75);

static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Integer Size_6,
  MR_Integer OriginalCost_7,
  MR_Integer CostDelta_8);

static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
  MR_Word DeforestInfo0_6,
  MR_Word * DeforestInfo_7,
  MR_Word * BeforeIrrelevant_8,
  MR_Word * AfterIrrelevant_9,
  MR_Word PDInfo_10);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
  MR_Word ModuleInfo_2,
  MR_Word FullyStrict_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_BetweenGoals_0_5,
  MR_Word * STATE_VARIABLE_BetweenGoals_6,
  MR_Word EndGoal_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
  MR_Word ModuleInfo_2,
  MR_Word FullyStrict_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_BetweenGoals_0_5,
  MR_Word * STATE_VARIABLE_BetweenGoals_6,
  MR_Word EndGoal_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
  MR_Word NonLocals0_8,
  MR_Word DeforestInfo_9,
  MR_Word RevBeforeGoals_10,
  MR_Word BeforeIrrelevant_11,
  MR_Word AfterIrrelevant_12,
  MR_Word AfterGoals0_13,
  MR_Word * SubConjNonLocals_14);

static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
  MR_Word PDInfo_6,
  MR_Word Optimized0_7,
  MR_Integer CostDelta0_8,
  MR_Integer SizeDelta0_9);

static MR_bool MR_CALL 
transform_hlds__deforest__check_deforestation_improvement_3_p_0(
  MR_Integer Factor_4,
  MR_Integer CostDelta_5,
  MR_Integer SizeChange_6);

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
  MR_Word DeforestInfo_5,
  MR_Word * ShouldTry_6,
  MR_Word STATE_VARIABLE_PDInfo_0_44,
  MR_Word * STATE_VARIABLE_PDInfo_45);

static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
  MR_Word EarlierGoal_7,
  MR_Word EarlierBranchInfo_8,
  MR_Word RevBetweenGoals0_9,
  MR_Word HeadVar__4_4,
  MR_Word * Goals_12,
  MR_Word * DeforestInfo_13);

static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word * Goals_4,
  MR_Word STATE_VARIABLE_PDInfo_0_5,
  MR_Word * STATE_VARIABLE_PDInfo_6);

static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word EarlierGoal_9,
  MR_Word BetweenGoals_10,
  MR_Word MaybeLaterGoal_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_PDInfo_0_15,
  MR_Word * STATE_VARIABLE_PDInfo_16);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
  MR_Word EarlierGoal_7,
  MR_Word BetweenGoals_8,
  MR_Word MaybeLaterGoal_9,
  MR_Word * ShouldTry_10,
  MR_Word STATE_VARIABLE_PDInfo_0_54,
  MR_Word * STATE_VARIABLE_PDInfo_55);

static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_PDInfo_0_3,
  MR_Word * STATE_VARIABLE_PDInfo_4);

static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
  MR_Word PredProcId_8,
  MR_Word ProcInfo_9,
  MR_Word * ProcInfo_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word UnivProcArgInfo0_11,
  MR_Word * UnivProcArgInfo_12);

static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13);

static MR_bool MR_CALL 
transform_hlds__deforest__deforest_module_3_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__deforest__deforest_module_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__deforest_module_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__deforest__deforest_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__deforest__proc_arg_info_init_1_p_0(
  MR_Word * ProcArgInfo0_2);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__deforest_scalar_common_1[10][2];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_2[14][3];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_4[1][10];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_5[5][6];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_6[1][5];

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_7[1][4];




static /* final */ const MR_Box transform_hlds__deforest_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_2[1]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_2[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[3]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__deforest_scalar_common_1[4]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__deforest__deforest_module_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__deforest__deforest_module_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__deforest__deforest_module_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__deforest__propagate_conj_constraints_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__deforest__propagate_conj_constraints_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__deforest__search_for_deforest_goal_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__deforest__handle_deforestation_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__deforest__handle_deforestation_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__deforest_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__deforest__append_goal_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "")) },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_5[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0)),
    ((MR_Box) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__deforest_scalar_common_7[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__deforest__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__deforest__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_branch_info_1,
  { (MR_TypeInfo) (&transform_hlds__deforest__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_TypeInfo) (&transform_hlds__deforest__maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__deforest__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_annotated_conj_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__deforest____Unify____annotated_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__deforest____Compare____annotated_conj_0_0_10001)),
  (MR_String) "transform_hlds.deforest",
  (MR_String) "annotated_conj",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__deforest__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0maybe__ti_maybe_1transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_VA_TypeInfo_Struct4 transform_hlds__deforest____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_TypeInfo) (&transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_can_move_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__deforest____Unify____can_move_0_0_10001)),
  ((MR_Box) (transform_hlds__deforest____Compare____can_move_0_0_10001)),
  (MR_String) "transform_hlds.deforest",
  (MR_String) "can_move",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__deforest____vti_pred_4hlds__hlds_module__type_ctor_info_module_info_0bool__type_ctor_info_bool_0hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__deforest__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__deforest__transform_hlds__pd_info__ti_pd_branch_info_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__deforest__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0 = {
  (MR_String) "deforest_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__deforest__transform_hlds__deforest__field_types_deforest_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0[1] = { &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0 };

static const MR_DuPtagLayout transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__deforest__transform_hlds__deforest__du_stag_ordered_deforest_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0[1] = { &transform_hlds__deforest__transform_hlds__deforest__du_functor_desc_deforest_info_0_0 };

static const MR_Integer transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__deforest__transform_hlds__deforest__type_ctor_info_deforest_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__deforest____Unify____deforest_info_0_0_10001)),
  ((MR_Box) (transform_hlds__deforest____Compare____deforest_info_0_0_10001)),
  (MR_String) "transform_hlds.deforest",
  (MR_String) "deforest_info",
  { transform_hlds__deforest__transform_hlds__deforest__du_name_ordered_deforest_info_0 },
  { transform_hlds__deforest__transform_hlds__deforest__du_ptag_ordered_deforest_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__deforest__transform_hlds__deforest__functor_number_map_deforest_info_0,

};

static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__do_get_sub_conj_nonlocals__1695__1_3_p_0(
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31)
{
  MR_Word GoalInfo_24 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_29, (MR_Integer) 1))));
  MR_Word GoalNonLocals_25;

  GoalNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_24);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalNonLocals_25, LambdaHeadVar__2_30, LambdaHeadVar__3_31);
}

static void MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__652__1_3_p_0(
  MR_Word LambdaHeadVar__1_22,
  MR_Word LambdaHeadVar__2_23,
  MR_Word * LambdaHeadVar__3_24)
{
  MR_Word Branches1_20 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_22, (MR_Integer) 1))));

  mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LambdaHeadVar__2_23, Branches1_20, LambdaHeadVar__3_24);
}

static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__514__1_1_p_0(
  MR_Word LambdaHeadVar__1_44)
{
  MR_bool succeeded;
  MR_Word CnstrGoalInfo_31 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_44, (MR_Integer) 1))));

  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(CnstrGoalInfo_31, (MR_Integer) 0);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__deforest__IntroducedFrom__pred__deforest_module__157__1_2_p_0(
  MR_Word FoundErrors_28,
  MR_Word HeadVar__2_47)
{
  MR_bool succeeded = (FoundErrors_28 == HeadVar__2_47);

  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[8]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&transform_hlds__deforest_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&transform_hlds__deforest_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&transform_hlds__deforest_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&transform_hlds__deforest_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest__call_call_2_7_p_0(
  MR_Word ConjNonLocals_8,
  MR_Word EarlierGoal_9,
  MR_Word BetweenGoals_10,
  MR_Word MaybeLaterGoal_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_PDInfo_0_43,
  MR_Word * STATE_VARIABLE_PDInfo_44)
{
  MR_bool succeeded;
  MR_Word FoldGoal_14;
  MR_Word MaybeVersion_15;
  MR_Word Parents_16;
  MR_Word DeforestConj_85;
  MR_Word Detism_86;
  MR_Word InstMapDelta0_87;
  MR_Word InstMapDelta_88;
  MR_Word Purity_89;
  MR_Word ConjInfo0_90;
  MR_Word EarlierGoalInfo_92;
  MR_Word EarlierContext_93;
  MR_Word ConjInfo_94;
  MR_Word Var_98;
  MR_Word VersionPredProcId_18;
  MR_Word VersionInfo_19;
  MR_Word Renaming_20;
  MR_Word TypeRenaming_21;

  if ((MaybeLaterGoal_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      DeforestConj_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DeforestConj_85, 0) = ((MR_Box) (EarlierGoal_9));
      MR_hl_field(1, DeforestConj_85, 1) = ((MR_Box) (BetweenGoals_10));
    }
  else
  {
    MR_Word LaterGoal_84 = ((MR_Word) ((MR_hl_field(1, MaybeLaterGoal_11, (MR_Integer) 0))));
    MR_Word Var_95;
    MR_Word Var_96;

    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (EarlierGoal_9));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) (BetweenGoals_10));
    }
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (LaterGoal_84));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_95, Var_96, &DeforestConj_85);
  }
  hlds__hlds_goal__goal_list_determinism_2_p_0(DeforestConj_85, &Detism_86);
  hlds__hlds_goal__goal_list_instmap_delta_2_p_0(DeforestConj_85, &InstMapDelta0_87);
  hlds__instmap__instmap_delta_restrict_3_p_0(ConjNonLocals_8, InstMapDelta0_87, &InstMapDelta_88);
  hlds__hlds_goal__goal_list_purity_2_p_0(DeforestConj_85, &Purity_89);
  hlds__hlds_goal__goal_info_init_5_p_0(ConjNonLocals_8, InstMapDelta_88, Detism_86, Purity_89, &ConjInfo0_90);
  EarlierGoalInfo_92 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_9, (MR_Integer) 1))));
  EarlierContext_93 = hlds__hlds_goal__goal_info_get_context_1_f_0(EarlierGoalInfo_92);
  hlds__hlds_goal__goal_info_set_context_3_p_0(EarlierContext_93, ConjInfo0_90, &ConjInfo_94);
  {
    Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_98, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_98, 2) = ((MR_Box) (DeforestConj_85));
  }
  {
    FoldGoal_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FoldGoal_14, 0) = ((MR_Box) (Var_98));
    MR_hl_field(0, FoldGoal_14, 1) = ((MR_Box) (ConjInfo_94));
  }
  transform_hlds__pd_info__pd_info_search_version_3_p_0(STATE_VARIABLE_PDInfo_0_43, FoldGoal_14, &MaybeVersion_15);
  transform_hlds__pd_info__pd_info_get_parent_versions_2_p_0(STATE_VARIABLE_PDInfo_0_43, &Parents_16);
  succeeded = (MaybeVersion_15 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    VersionPredProcId_18 = ((MR_Word) ((MR_hl_field(1, MaybeVersion_15, (MR_Integer) 1))));
    VersionInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeVersion_15, (MR_Integer) 2))));
    Renaming_20 = ((MR_Word) ((MR_hl_field(1, MaybeVersion_15, (MR_Integer) 3))));
    TypeRenaming_21 = ((MR_Word) ((MR_hl_field(1, MaybeVersion_15, (MR_Integer) 4))));
    {
      MR_Word VersionPredId_22 = ((MR_Word) ((MR_hl_field(0, VersionPredProcId_18, (MR_Integer) 0))));
      MR_Word ModuleInfo0_24;
      MR_String FoldPredName_25;
      MR_Integer FoldCostDelta_27;
      MR_Integer NegSizeDelta_28;
      MR_Integer SizeDelta_29;
      MR_Word Goal_30;
      MR_Word STATE_VARIABLE_PDInfo_52_52;
      MR_Word Var_53;
      MR_Word STATE_VARIABLE_PDInfo_54_54;
      MR_Word Var_48;
      MR_Word Var_50;

      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_43, &ModuleInfo0_24);
      FoldPredName_25 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo0_24, VersionPredId_22);
      {
        Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_50, 1) = ((MR_Box) (FoldPredName_25));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_50));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_43, (MR_String) "call_call_2", (MR_String) "Folded with %s\n", Var_48);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (VersionPredProcId_18)), Parents_16);
      if (succeeded)
        FoldCostDelta_27 = transform_hlds__pd_cost__cost_of_recursive_fold_0_f_0();
      else
        FoldCostDelta_27 = transform_hlds__pd_cost__cost_of_fold_0_f_0();
      transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(FoldCostDelta_27, STATE_VARIABLE_PDInfo_0_43, &STATE_VARIABLE_PDInfo_52_52);
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (EarlierGoal_9));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (BetweenGoals_10));
      }
      hlds__goal_util__goals_size_2_p_0(Var_53, &NegSizeDelta_28);
      SizeDelta_29 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) NegSizeDelta_28);
      transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(SizeDelta_29, STATE_VARIABLE_PDInfo_52_52, &STATE_VARIABLE_PDInfo_54_54);
      transform_hlds__deforest__create_call_goal_7_p_0(VersionPredProcId_18, VersionInfo_19, Renaming_20, TypeRenaming_21, &Goal_30, STATE_VARIABLE_PDInfo_54_54, STATE_VARIABLE_PDInfo_44);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_30));
      }
    }
  }
  else
  {
    MR_Word TermInfo0_31;
    MR_Word ParentVersions0_32;
    MR_Word ModuleInfo_33;
    MR_Word Versions_34;
    MR_Word InstMap_35;
    MR_Word TermInfo_36;
    MR_Word CheckResult_37;
    MR_Word STATE_VARIABLE_PDInfo_72_72;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_String Var_62;

    transform_hlds__pd_info__pd_info_get_global_term_info_2_p_0(STATE_VARIABLE_PDInfo_0_43, &TermInfo0_31);
    transform_hlds__pd_info__pd_info_get_parent_versions_2_p_0(STATE_VARIABLE_PDInfo_0_43, &ParentVersions0_32);
    Var_62 = mercury__string__string_1_f_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[5]), ((MR_Box) (ParentVersions0_32)));
    {
      Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_61));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_43, (MR_String) "call_call_2", (MR_String) "Parents: %s\n", Var_59);
    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_43, &ModuleInfo_33);
    transform_hlds__pd_info__pd_info_get_versions_2_p_0(STATE_VARIABLE_PDInfo_0_43, &Versions_34);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_43, &InstMap_35);
    transform_hlds__pd_term__global_check_9_p_0(ModuleInfo_33, EarlierGoal_9, BetweenGoals_10, MaybeLaterGoal_11, InstMap_35, Versions_34, TermInfo0_31, &TermInfo_36, &CheckResult_37);
    switch (MR_tag((MR_Word) CheckResult_37)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_43, (MR_String) "call_call_2", (MR_String) "global termination check failed\n", (MR_Word) ((MR_Unsigned) 0U));
          *MaybeGoal_12 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_PDInfo_72_72 = STATE_VARIABLE_PDInfo_0_43;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcPair_38 = ((MR_Word) ((MR_hl_field(1, CheckResult_37, (MR_Integer) 0))));
          MR_Integer Size_39 = ((MR_Integer) ((MR_hl_field(1, CheckResult_37, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_PDInfo_71_71;

          transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_43, (MR_String) "call_call_2", (MR_String) "global termination check succeeded - creating new version\n", (MR_Word) ((MR_Unsigned) 0U));
          transform_hlds__pd_info__pd_info_set_global_term_info_3_p_0(TermInfo_36, STATE_VARIABLE_PDInfo_0_43, &STATE_VARIABLE_PDInfo_71_71);
          transform_hlds__deforest__create_deforest_goal_12_p_0(EarlierGoal_9, BetweenGoals_10, MaybeLaterGoal_11, FoldGoal_14, ConjNonLocals_8, (MR_Integer) 0, ProcPair_38, Size_39, (MR_Word) ((MR_Unsigned) 0U), MaybeGoal_12, STATE_VARIABLE_PDInfo_71_71, &STATE_VARIABLE_PDInfo_72_72);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CoveringPredProcId_42 = ((MR_Word) ((MR_hl_field(2, CheckResult_37, (MR_Integer) 2))));
          MR_Word ProcPair_80 = ((MR_Word) ((MR_hl_field(2, CheckResult_37, (MR_Integer) 0))));
          MR_Integer Size_81 = ((MR_Integer) ((MR_hl_field(2, CheckResult_37, (MR_Integer) 1))));

          transform_hlds__deforest__try_generalisation_11_p_0(EarlierGoal_9, BetweenGoals_10, MaybeLaterGoal_11, FoldGoal_14, ConjNonLocals_8, ProcPair_80, Size_81, CoveringPredProcId_42, MaybeGoal_12, STATE_VARIABLE_PDInfo_0_43, &STATE_VARIABLE_PDInfo_72_72);
        }
        break;
    }
    transform_hlds__pd_info__pd_info_set_global_term_info_3_p_0(TermInfo0_31, STATE_VARIABLE_PDInfo_72_72, STATE_VARIABLE_PDInfo_44);
  }
}

static void MR_CALL 
transform_hlds__deforest__try_generalisation_11_p_0(
  MR_Word EarlierGoal_12,
  MR_Word BetweenGoals_13,
  MR_Word MaybeLaterGoal_14,
  MR_Word FoldGoal_15,
  MR_Word ConjNonLocals_16,
  MR_Word ProcPair_17,
  MR_Integer Size_18,
  MR_Word CoveringPredProcId_19,
  MR_Word * MaybeGoal_20,
  MR_Word STATE_VARIABLE_PDInfo_0_40,
  MR_Word * STATE_VARIABLE_PDInfo_41)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_22;
  MR_Word VersionIndex_24;
  MR_Word Version_25;
  MR_Word VersionGoal_26;
  MR_Word VersionArgVars_28;
  MR_Word VersionArgTypes_29;
  MR_Word VersionInstMap_30;
  MR_Word Versions_35;
  MR_Word ProcInfo_36;
  MR_Word VarTable_37;
  MR_Box conv0_Version_25;
  MR_Word Renaming_38;
  MR_Word Var_39;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_40, &ModuleInfo_22);
  transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_40, (MR_String) "try_generalisation", (MR_String) "start\n", (MR_Word) ((MR_Unsigned) 0U));
  transform_hlds__pd_info__pd_info_get_versions_2_p_0(STATE_VARIABLE_PDInfo_0_40, &VersionIndex_24);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0), VersionIndex_24, ((MR_Box) (CoveringPredProcId_19)), &conv0_Version_25);
  Version_25 = ((MR_Word) (conv0_Version_25));
  VersionGoal_26 = ((MR_Word) ((MR_hl_field(0, Version_25, (MR_Integer) 0))));
  VersionArgVars_28 = ((MR_Word) ((MR_hl_field(0, Version_25, (MR_Integer) 2))));
  VersionArgTypes_29 = ((MR_Word) ((MR_hl_field(0, Version_25, (MR_Integer) 3))));
  VersionInstMap_30 = ((MR_Word) ((MR_hl_field(0, Version_25, (MR_Integer) 4))));
  transform_hlds__pd_info__pd_info_get_versions_2_p_0(STATE_VARIABLE_PDInfo_0_40, &Versions_35);
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_40, &ProcInfo_36);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_36, &VarTable_37);
  succeeded = transform_hlds__pd_util__goals_match_8_p_0(ModuleInfo_22, VersionGoal_26, VersionArgVars_28, VersionArgTypes_29, FoldGoal_15, VarTable_37, &Renaming_38, &Var_39);
  if (succeeded)
  {
    MR_Word ModuleInfo_62;
    MR_Word InstMap0_63;
    MR_Word VersionInsts_64;
    MR_Integer VersionInstSizes_65;
    MR_Word ConjNonLocalsList_66;
    MR_Word ProcInfo_67;
    MR_Word VarTable_68;
    MR_Word STATE_VARIABLE_PDInfo_54_85;
    MR_Word InstMap_69;
    MR_Word ArgInsts_70;
    MR_Integer NewInstSizes_71;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_40, &ModuleInfo_62);
    transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_40, (MR_String) "do_generalisation", (MR_String) "goals match, trying MSG\n", (MR_Word) ((MR_Unsigned) 0U));
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_40, &InstMap0_63);
    hlds__instmap__instmap_lookup_vars_3_p_0(VersionInstMap_30, VersionArgVars_28, &VersionInsts_64);
    transform_hlds__pd_util__inst_list_size_3_p_0(ModuleInfo_62, VersionInsts_64, &VersionInstSizes_65);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConjNonLocals_16, &ConjNonLocalsList_66);
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_40, &ProcInfo_67);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_67, &VarTable_68);
    succeeded = transform_hlds__deforest__try_MSG_7_p_0(ModuleInfo_62, VarTable_68, VersionInstMap_30, Renaming_38, VersionArgVars_28, InstMap0_63, &InstMap_69);
    if (succeeded)
    {
      hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_69, ConjNonLocalsList_66, &ArgInsts_70);
      transform_hlds__pd_util__inst_list_size_3_p_0(ModuleInfo_62, ArgInsts_70, &NewInstSizes_71);
      succeeded = (NewInstSizes_71 < VersionInstSizes_65);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_PDInfo_51_82;
      MR_Word Var_84;

      transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_40, (MR_String) "do_generalisation", (MR_String) "MSG succeeded", (MR_Word) ((MR_Unsigned) 0U));
      transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap_69, STATE_VARIABLE_PDInfo_0_40, &STATE_VARIABLE_PDInfo_51_82);
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (CoveringPredProcId_19));
      }
      transform_hlds__deforest__create_deforest_goal_12_p_0(EarlierGoal_12, BetweenGoals_13, MaybeLaterGoal_14, FoldGoal_15, ConjNonLocals_16, (MR_Integer) 1, ProcPair_17, Size_18, Var_84, MaybeGoal_20, STATE_VARIABLE_PDInfo_51_82, &STATE_VARIABLE_PDInfo_54_85);
    }
    else
    {
      transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_40, (MR_String) "do_generalisation", (MR_String) "MSG failed\n", (MR_Word) ((MR_Unsigned) 0U));
      *MaybeGoal_20 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_PDInfo_54_85 = STATE_VARIABLE_PDInfo_0_40;
    }
    transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_63, STATE_VARIABLE_PDInfo_54_85, STATE_VARIABLE_PDInfo_41);
  }
  else
  {
    MR_Word Renaming_59;

    succeeded = transform_hlds__deforest__match_generalised_version_11_p_0(ModuleInfo_22, VersionGoal_26, VersionArgVars_28, VersionArgTypes_29, EarlierGoal_12, BetweenGoals_13, MaybeLaterGoal_14, ConjNonLocals_16, VarTable_37, Versions_35, &Renaming_59);
    if (succeeded)
    {
      transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_40, (MR_String) "try_generalisation", (MR_String) "matched with generalised version\n", (MR_Word) ((MR_Unsigned) 0U));
      transform_hlds__deforest__do_generalisation_14_p_0(VersionArgVars_28, Renaming_59, VersionInstMap_30, EarlierGoal_12, BetweenGoals_13, MaybeLaterGoal_14, FoldGoal_15, ConjNonLocals_16, ProcPair_17, Size_18, CoveringPredProcId_19, MaybeGoal_20, STATE_VARIABLE_PDInfo_0_40, STATE_VARIABLE_PDInfo_41);
    }
    else
    {
      transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_40, (MR_String) "try_generalisation", (MR_String) "goals don\'t match\n", (MR_Word) ((MR_Unsigned) 0U));
      *MaybeGoal_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_PDInfo_41 = STATE_VARIABLE_PDInfo_0_40;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__match_generalised_version_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word VersionGoal_13,
  MR_Word VersionArgVars_14,
  MR_Word VersionArgTypes_15,
  MR_Word FirstGoal_16,
  MR_Word BetweenGoals_17,
  MR_Word MaybeLastGoal_18,
  MR_Word ConjNonLocals_19,
  MR_Word STATE_VARIABLE_VarTable_0_79,
  MR_Word Versions_21,
  MR_Word * Renaming_22)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_88_88;
  MR_Word TypeCtorInfo_89_89;
  MR_Word TypeInfo_90_90;
  MR_Word TypeCtorInfo_91_91;
  MR_Word TypeInfo_97_97;
  MR_Word FirstGoalExpr_23 = ((MR_Word) ((MR_hl_field(0, FirstGoal_16, (MR_Integer) 0))));
  MR_Word FirstPredId_25;
  MR_Integer FirstProcId_26;
  MR_Word FirstArgVars_27;
  MR_Word FirstVersionInfo_31;
  MR_Word FirstVersionGoal_32;
  MR_Word FirstVersionArgVars_34;
  MR_Word MaybeNonGeneralisedVersion_40;
  MR_Word NonGeneralisedPredProcId_41;
  MR_Word FirstRenaming0_42;
  MR_Word FirstVersionVars0_43;
  MR_Word FirstVersionVars_44;
  MR_Word FirstProcInfo_46;
  MR_Word FirstVersionVarTable_47;
  MR_Word FirstRenaming_48;
  MR_Word RenamedFirstVersionGoal_49;
  MR_Word NonGeneralisedPredId_50;
  MR_Integer NonGeneralisedProcId_51;
  MR_Word VersionGoalList_52;
  MR_Word NonGeneralisedVersion_59;
  MR_Word NonGeneralisedGoal_60;
  MR_Word NonGeneralisedArgVars_62;
  MR_Word NonGeneralisedArgTypes_63;
  MR_Word GeneralRenaming_69;
  MR_Word TypeRenaming_70;
  MR_Word NonGeneralisedPredInfo_71;
  MR_Word NewArgVars_72;
  MR_Word GoalInfo_74;
  MR_Word NonGeneralFirstGoalExpr_75;
  MR_Word NonGeneralFirstGoal_76;
  MR_Word GoalToMatch_77;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_VarTable_81_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_92;
  MR_Integer Var_93;
  MR_Word Var_94;
  MR_Box conv0_FirstVersionInfo_31;
  MR_Word Var_45;
  MR_Box conv1_NonGeneralisedVersion_59;
  MR_Word Var_73;
  MR_Word Var_78;

  succeeded = ((MR_tag((MR_Word) FirstGoalExpr_23)) == (MR_Integer) 2);
  if (succeeded)
  {
    FirstPredId_25 = ((MR_Word) ((MR_hl_field(2, FirstGoalExpr_23, (MR_Integer) 0))));
    FirstProcId_26 = ((MR_Integer) ((MR_hl_field(2, FirstGoalExpr_23, (MR_Integer) 1))));
    FirstArgVars_27 = ((MR_Word) ((MR_hl_field(2, FirstGoalExpr_23, (MR_Integer) 2))));
    TypeCtorInfo_88_88 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
    TypeCtorInfo_89_89 = (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_80, 0) = ((MR_Box) (FirstPredId_25));
      MR_hl_field(0, Var_80, 1) = ((MR_Box) (FirstProcId_26));
    }
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_88_88, TypeCtorInfo_89_89, Versions_21, ((MR_Box) (Var_80)), &conv0_FirstVersionInfo_31);
    if (succeeded)
    {
      FirstVersionInfo_31 = ((MR_Word) (conv0_FirstVersionInfo_31));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      FirstVersionGoal_32 = ((MR_Word) ((MR_hl_field(0, FirstVersionInfo_31, (MR_Integer) 0))));
      FirstVersionArgVars_34 = ((MR_Word) ((MR_hl_field(0, FirstVersionInfo_31, (MR_Integer) 2))));
      MaybeNonGeneralisedVersion_40 = ((MR_Word) ((MR_hl_field(0, FirstVersionInfo_31, (MR_Integer) 8))));
      succeeded = (MaybeNonGeneralisedVersion_40 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        NonGeneralisedPredProcId_41 = ((MR_Word) ((MR_hl_field(1, MaybeNonGeneralisedVersion_40, (MR_Integer) 0))));
        TypeInfo_90_90 = (MR_Word) (&transform_hlds__deforest_scalar_common_1[1]);
        mercury__map__from_corresponding_lists_3_p_0(TypeInfo_90_90, TypeInfo_90_90, FirstVersionArgVars_34, FirstArgVars_27, &FirstRenaming0_42);
        hlds__goal_util__goal_vars_2_p_0(FirstVersionGoal_32, &FirstVersionVars0_43);
        TypeCtorInfo_91_91 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_91_91, FirstVersionVars0_43, &FirstVersionVars_44);
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_12, FirstPredId_25, FirstProcId_26, &Var_45, &FirstProcInfo_46);
        hlds__hlds_pred__proc_info_get_var_table_2_p_0(FirstProcInfo_46, &FirstVersionVarTable_47);
        hlds__goal_util__clone_variables_6_p_0(FirstVersionVars_44, FirstVersionVarTable_47, STATE_VARIABLE_VarTable_0_79, &STATE_VARIABLE_VarTable_81_81, FirstRenaming0_42, &FirstRenaming_48);
        hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(FirstRenaming_48, FirstVersionGoal_32, &RenamedFirstVersionGoal_49);
        NonGeneralisedPredId_50 = ((MR_Word) ((MR_hl_field(0, NonGeneralisedPredProcId_41, (MR_Integer) 0))));
        NonGeneralisedProcId_51 = ((MR_Integer) ((MR_hl_field(0, NonGeneralisedPredProcId_41, (MR_Integer) 1))));
        hlds__hlds_goal__goal_to_conj_list_2_p_0(VersionGoal_13, &VersionGoalList_52);
        succeeded = (VersionGoalList_52 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_82 = ((MR_Word) ((MR_hl_field(1, VersionGoalList_52, (MR_Integer) 0))));
          Var_83 = ((MR_Word) ((MR_hl_field(0, Var_82, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_83)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_92 = ((MR_Word) ((MR_hl_field(2, Var_83, (MR_Integer) 0))));
            Var_93 = ((MR_Integer) ((MR_hl_field(2, Var_83, (MR_Integer) 1))));
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(NonGeneralisedPredId_50, Var_92);
            if (succeeded)
            {
              succeeded = (NonGeneralisedProcId_51 == Var_93);
              if (succeeded)
              {
                succeeded = mercury__map__search_3_p_0(TypeCtorInfo_88_88, TypeCtorInfo_89_89, Versions_21, ((MR_Box) (NonGeneralisedPredProcId_41)), &conv1_NonGeneralisedVersion_59);
                if (succeeded)
                {
                  NonGeneralisedVersion_59 = ((MR_Word) (conv1_NonGeneralisedVersion_59));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  NonGeneralisedGoal_60 = ((MR_Word) ((MR_hl_field(0, NonGeneralisedVersion_59, (MR_Integer) 0))));
                  NonGeneralisedArgVars_62 = ((MR_Word) ((MR_hl_field(0, NonGeneralisedVersion_59, (MR_Integer) 2))));
                  NonGeneralisedArgTypes_63 = ((MR_Word) ((MR_hl_field(0, NonGeneralisedVersion_59, (MR_Integer) 3))));
                  succeeded = transform_hlds__pd_util__goals_match_8_p_0(ModuleInfo_12, NonGeneralisedGoal_60, NonGeneralisedArgVars_62, NonGeneralisedArgTypes_63, RenamedFirstVersionGoal_49, STATE_VARIABLE_VarTable_81_81, &GeneralRenaming_69, &TypeRenaming_70);
                  if (succeeded)
                  {
                    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, NonGeneralisedPredId_50, &NonGeneralisedPredInfo_71);
                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(NonGeneralisedPredInfo_71, &Var_94);
                    TypeInfo_97_97 = (MR_Word) (&transform_hlds__deforest_scalar_common_1[9]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_97_97, ((MR_Box) (NonGeneralisedArgTypes_63)), ((MR_Box) (Var_94)));
                    if (succeeded)
                    {
                      transform_hlds__deforest__create_deforest_call_arg_vars_8_p_0(ModuleInfo_12, GeneralRenaming_69, TypeRenaming_70, NonGeneralisedArgVars_62, NonGeneralisedArgTypes_63, &NewArgVars_72, STATE_VARIABLE_VarTable_81_81, &Var_73);
                      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo_74);
                      Var_84 = (MR_Integer) 1;
                      Var_85 = (MR_Word) ((MR_Unsigned) 0U);
                      Var_86 = (MR_Word) (&transform_hlds__deforest_scalar_common_3[0]);
                      {
                        NonGeneralFirstGoalExpr_75 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, NonGeneralFirstGoalExpr_75, 0) = ((MR_Box) (NonGeneralisedPredId_50));
                        MR_hl_field(2, NonGeneralFirstGoalExpr_75, 1) = ((MR_Box) (NonGeneralisedProcId_51));
                        MR_hl_field(2, NonGeneralFirstGoalExpr_75, 2) = ((MR_Box) (NewArgVars_72));
                        MR_hl_field(2, NonGeneralFirstGoalExpr_75, 3) = (MR_Box) ((MR_Unsigned) (Var_84));
                        MR_hl_field(2, NonGeneralFirstGoalExpr_75, 4) = ((MR_Box) (Var_85));
                        MR_hl_field(2, NonGeneralFirstGoalExpr_75, 5) = ((MR_Box) (Var_86));
                      }
                      {
                        NonGeneralFirstGoal_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, NonGeneralFirstGoal_76, 0) = ((MR_Box) (NonGeneralFirstGoalExpr_75));
                        MR_hl_field(0, NonGeneralFirstGoal_76, 1) = ((MR_Box) (GoalInfo_74));
                      }
                      transform_hlds__deforest__create_conj_5_p_0(NonGeneralFirstGoal_76, BetweenGoals_17, MaybeLastGoal_18, ConjNonLocals_19, &GoalToMatch_77);
                      succeeded = transform_hlds__pd_util__goals_match_8_p_0(ModuleInfo_12, VersionGoal_13, VersionArgVars_14, VersionArgTypes_15, GoalToMatch_77, STATE_VARIABLE_VarTable_81_81, Renaming_22, &Var_78);
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
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest__do_generalisation_14_p_0(
  MR_Word VersionArgVars_15,
  MR_Word Renaming_16,
  MR_Word VersionInstMap_17,
  MR_Word EarlierGoal_18,
  MR_Word BetweenGoals_19,
  MR_Word MaybeLaterGoal_20,
  MR_Word FoldGoal_21,
  MR_Word ConjNonLocals_22,
  MR_Word ProcPair_23,
  MR_Integer Size_24,
  MR_Word Generalised_25,
  MR_Word * MaybeGoal_26,
  MR_Word STATE_VARIABLE_PDInfo_0_39,
  MR_Word * STATE_VARIABLE_PDInfo_40)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_28;
  MR_Word InstMap0_30;
  MR_Word VersionInsts_31;
  MR_Integer VersionInstSizes_32;
  MR_Word ConjNonLocalsList_33;
  MR_Word ProcInfo_34;
  MR_Word VarTable_35;
  MR_Word STATE_VARIABLE_PDInfo_54_54;
  MR_Word InstMap_36;
  MR_Word ArgInsts_37;
  MR_Integer NewInstSizes_38;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_39, &ModuleInfo_28);
  transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_39, (MR_String) "do_generalisation", (MR_String) "goals match, trying MSG\n", (MR_Word) ((MR_Unsigned) 0U));
  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_39, &InstMap0_30);
  hlds__instmap__instmap_lookup_vars_3_p_0(VersionInstMap_17, VersionArgVars_15, &VersionInsts_31);
  transform_hlds__pd_util__inst_list_size_3_p_0(ModuleInfo_28, VersionInsts_31, &VersionInstSizes_32);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConjNonLocals_22, &ConjNonLocalsList_33);
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_39, &ProcInfo_34);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_34, &VarTable_35);
  succeeded = transform_hlds__deforest__try_MSG_7_p_0(ModuleInfo_28, VarTable_35, VersionInstMap_17, Renaming_16, VersionArgVars_15, InstMap0_30, &InstMap_36);
  if (succeeded)
  {
    hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_36, ConjNonLocalsList_33, &ArgInsts_37);
    transform_hlds__pd_util__inst_list_size_3_p_0(ModuleInfo_28, ArgInsts_37, &NewInstSizes_38);
    succeeded = (NewInstSizes_38 < VersionInstSizes_32);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_PDInfo_51_51;
    MR_Word Var_53;

    transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_39, (MR_String) "do_generalisation", (MR_String) "MSG succeeded", (MR_Word) ((MR_Unsigned) 0U));
    transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap_36, STATE_VARIABLE_PDInfo_0_39, &STATE_VARIABLE_PDInfo_51_51);
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Generalised_25));
    }
    transform_hlds__deforest__create_deforest_goal_12_p_0(EarlierGoal_18, BetweenGoals_19, MaybeLaterGoal_20, FoldGoal_21, ConjNonLocals_22, (MR_Integer) 1, ProcPair_23, Size_24, Var_53, MaybeGoal_26, STATE_VARIABLE_PDInfo_51_51, &STATE_VARIABLE_PDInfo_54_54);
  }
  else
  {
    transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_39, (MR_String) "do_generalisation", (MR_String) "MSG failed\n", (MR_Word) ((MR_Unsigned) 0U));
    *MaybeGoal_26 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_PDInfo_54_54 = STATE_VARIABLE_PDInfo_0_39;
  }
  transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_30, STATE_VARIABLE_PDInfo_54_54, STATE_VARIABLE_PDInfo_40);
}

static MR_bool MR_CALL 
transform_hlds__deforest__try_MSG_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word VersionInstMap_3,
  MR_Word Renaming_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_InstMap_0_6,
  MR_Word * STATE_VARIABLE_InstMap_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_InstMap_7 = STATE_VARIABLE_InstMap_0_6;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word VersionArgVar_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word VersionArgVars_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word VersionType_22;
      MR_Word VersionInst_23;
      MR_Word STATE_VARIABLE_InstMap_29_29;
      MR_Word ArgVar_24;
      MR_Word Inst_26;
      MR_Word VarInst_25;
      MR_Box conv0_ArgVar_24;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_InstMap_0_6;

      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, VersionArgVar_19, &VersionType_22);
      hlds__instmap__instmap_lookup_var_3_p_0(VersionInstMap_3, VersionArgVar_19, &VersionInst_23);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[1]), (MR_Word) (&transform_hlds__deforest_scalar_common_1[1]), Renaming_4, ((MR_Box) (VersionArgVar_19)), &conv0_ArgVar_24);
      if (succeeded)
      {
        ArgVar_24 = ((MR_Word) (conv0_ArgVar_24));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        hlds__instmap__instmap_lookup_var_3_p_0(STATE_VARIABLE_InstMap_0_6, ArgVar_24, &VarInst_25);
        succeeded = transform_hlds__pd_util__inst_MSG_5_p_0(ModuleInfo_1, VersionType_22, VersionInst_23, VarInst_25, &Inst_26);
      }
      if (succeeded)
        hlds__instmap__instmap_set_var_4_p_0(ArgVar_24, Inst_26, STATE_VARIABLE_InstMap_0_6, &STATE_VARIABLE_InstMap_29_29);
      else
        STATE_VARIABLE_InstMap_29_29 = STATE_VARIABLE_InstMap_0_6;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = VersionArgVars_20;
      next_value_of_STATE_VARIABLE_InstMap_0_6 = STATE_VARIABLE_InstMap_29_29;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_InstMap_0_6 = next_value_of_STATE_VARIABLE_InstMap_0_6;
      continue;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__deforest__create_call_goal_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VersionInfo_10,
  MR_Word Renaming_11,
  MR_Word TypeSubn_12,
  MR_Word * Goal_13,
  MR_Word STATE_VARIABLE_PDInfo_0_42,
  MR_Word * STATE_VARIABLE_PDInfo_43)
{
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word OldArgVars_15 = ((MR_Word) ((MR_hl_field(0, VersionInfo_10, (MR_Integer) 2))));
  MR_Word ModuleInfo_16;
  MR_Word CalledPredInfo_17;
  MR_Word CalledProcInfo_18;
  MR_Word CalledTVarSet_19;
  MR_Word ArgTypes0_21;
  MR_Word ProcInfo0_22;
  MR_Word PredInfo0_23;
  MR_Word VarTable0_24;
  MR_Word TVarSet0_25;
  MR_Word TVarSet_26;
  MR_Word TypeRenaming_27;
  MR_Word PredInfo_28;
  MR_Word ArgTypes1_29;
  MR_Word ArgVars_30;
  MR_Word VarTable_31;
  MR_Word ProcInfo_32;
  MR_Word ArgModes_33;
  MR_Word InstMapDelta_34;
  MR_Word Detism_35;
  MR_Word NonLocals_36;
  MR_Word Purity_37;
  MR_Word GoalInfo_38;
  MR_Word PredModule_39;
  MR_String PredName_40;
  MR_Word GoalExpr_41;
  MR_Word STATE_VARIABLE_PDInfo_44_44;
  MR_Word Var_48;
  MR_Word _CalledExistQVars_20;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_42, &ModuleInfo_16);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_16, PredId_8, ProcId_9, &CalledPredInfo_17, &CalledProcInfo_18);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(CalledPredInfo_17, &CalledTVarSet_19, &_CalledExistQVars_20, &ArgTypes0_21);
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_42, &ProcInfo0_22);
  transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(STATE_VARIABLE_PDInfo_0_42, &PredInfo0_23);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_22, &VarTable0_24);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_23, &TVarSet0_25);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_25, CalledTVarSet_19, &TVarSet_26, &TypeRenaming_27);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet_26, PredInfo0_23, &PredInfo_28);
  transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(PredInfo_28, STATE_VARIABLE_PDInfo_0_42, &STATE_VARIABLE_PDInfo_44_44);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TypeRenaming_27, ArgTypes0_21, &ArgTypes1_29);
  transform_hlds__deforest__create_deforest_call_arg_vars_8_p_0(ModuleInfo_16, Renaming_11, TypeSubn_12, OldArgVars_15, ArgTypes1_29, &ArgVars_30, VarTable0_24, &VarTable_31);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_31, ProcInfo0_22, &ProcInfo_32);
  transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(ProcInfo_32, STATE_VARIABLE_PDInfo_44_44, STATE_VARIABLE_PDInfo_43);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalledProcInfo_18, &ArgModes_33);
  hlds__instmap__instmap_delta_from_mode_list_4_p_0(ModuleInfo_16, ArgVars_30, ArgModes_33, &InstMapDelta_34);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_32, &Detism_35);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_30, &NonLocals_36);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(CalledPredInfo_17, &Purity_37);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_36, InstMapDelta_34, Detism_35, Purity_37, &GoalInfo_38);
  PredModule_39 = hlds__hlds_pred__pred_info_module_1_f_0(CalledPredInfo_17);
  PredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(CalledPredInfo_17);
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (PredModule_39));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (PredName_40));
  }
  {
    GoalExpr_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_41, 0) = ((MR_Box) (PredId_8));
    MR_hl_field(2, GoalExpr_41, 1) = ((MR_Box) (ProcId_9));
    MR_hl_field(2, GoalExpr_41, 2) = ((MR_Box) (ArgVars_30));
    MR_hl_field(2, GoalExpr_41, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_41, 5) = ((MR_Box) (Var_48));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_41));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_38));
  }
}

static void MR_CALL 
transform_hlds__deforest__create_deforest_call_arg_vars_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Renaming_2,
  MR_Word TypeSubn_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_VarTable_0_7,
  MR_Word * STATE_VARIABLE_VarTable_8)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTable_8 = STATE_VARIABLE_VarTable_0_7;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.deforest.create_deforest_call_arg_vars\'/8", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.deforest.create_deforest_call_arg_vars\'/8", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgType_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ArgTypes_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ArgVar_44;
      MR_Word ArgVars_45;
      MR_Word STATE_VARIABLE_VarTable_51_51;
      MR_Word ArgVarPrime_47;
      MR_Box conv0_ArgVarPrime_47;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[1]), (MR_Word) (&transform_hlds__deforest_scalar_common_1[1]), Renaming_2, ((MR_Box) (Var_54)), &conv0_ArgVarPrime_47);
      if (succeeded)
      {
        ArgVarPrime_47 = ((MR_Word) (conv0_ArgVarPrime_47));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        ArgVar_44 = ArgVarPrime_47;
        STATE_VARIABLE_VarTable_51_51 = STATE_VARIABLE_VarTable_0_7;
      }
      else
      {
        MR_Word SubnArgType_48;

        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(TypeSubn_3, ArgType_42, &SubnArgType_48);
        hlds__var_table_hlds__create_fresh_var_5_p_0(ModuleInfo_1, SubnArgType_48, &ArgVar_44, STATE_VARIABLE_VarTable_0_7, &STATE_VARIABLE_VarTable_51_51);
      }
      transform_hlds__deforest__create_deforest_call_arg_vars_8_p_0(ModuleInfo_1, Renaming_2, TypeSubn_3, Var_53, ArgTypes_43, &ArgVars_45, STATE_VARIABLE_VarTable_51_51, STATE_VARIABLE_VarTable_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgVar_44));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArgVars_45));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__create_deforest_goal_12_p_0(
  MR_Word EarlierGoal_13,
  MR_Word BetweenGoals_14,
  MR_Word MaybeLaterGoal_15,
  MR_Word FoldGoal0_16,
  MR_Word NonLocals_17,
  MR_Word RunModes_18,
  MR_Word ProcPair_19,
  MR_Integer Size_20,
  MR_Word MaybeGeneralised_21,
  MR_Word * MaybeCallGoal_22,
  MR_Word STATE_VARIABLE_PDInfo_0_86,
  MR_Word * STATE_VARIABLE_PDInfo_87)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_24;
  MR_Word Globals_25;
  MR_Word OptTuple_26;
  MR_Integer VarsThreshold_27;
  MR_Word PredId1_30;
  MR_Integer ProcId1_31;
  MR_Word Args1_32;
  MR_Word EarlierGoalExpr_28;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_86, &ModuleInfo0_24);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo0_24, &Globals_25);
  libs__globals__get_opt_tuple_2_p_0(Globals_25, &OptTuple_26);
  VarsThreshold_27 = ((MR_Integer) ((MR_hl_field(0, OptTuple_26, (MR_Integer) 22))));
  EarlierGoalExpr_28 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_13, (MR_Integer) 0))));
  succeeded = ((MR_tag((MR_Word) EarlierGoalExpr_28)) == (MR_Integer) 2);
  if (succeeded)
  {
    PredId1_30 = ((MR_Word) ((MR_hl_field(2, EarlierGoalExpr_28, (MR_Integer) 0))));
    ProcId1_31 = ((MR_Integer) ((MR_hl_field(2, EarlierGoalExpr_28, (MR_Integer) 1))));
    Args1_32 = ((MR_Word) ((MR_hl_field(2, EarlierGoalExpr_28, (MR_Integer) 2))));
    succeeded = (VarsThreshold_27 == (MR_Integer) -1);
    if (!(succeeded))
    {
      MR_Word CalledProcInfo1_37;
      MR_Word CalledGoal1_38;
      MR_Word GoalVars1_39;
      MR_Word GoalVarsList1_40;
      MR_Word GoalVars2_41;
      MR_Word GoalVarsList2_42;
      MR_Integer NumVars1_43;
      MR_Integer NumVars2_44;
      MR_Integer NumVars_45;
      MR_Word Var_36;

      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_24, PredId1_30, ProcId1_31, &Var_36, &CalledProcInfo1_37);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(CalledProcInfo1_37, &CalledGoal1_38);
      hlds__goal_util__goal_vars_2_p_0(CalledGoal1_38, &GoalVars1_39);
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars1_39, &GoalVarsList1_40);
      hlds__goal_util__goals_goal_vars_2_p_0(BetweenGoals_14, &GoalVars2_41);
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars2_41, &GoalVarsList2_42);
      mercury__list__length_2_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[1]), GoalVarsList1_40, &NumVars1_43);
      mercury__list__length_2_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[1]), GoalVarsList2_42, &NumVars2_44);
      NumVars_45 = (MR_Integer) ((MR_Unsigned) NumVars1_43 + (MR_Unsigned) NumVars2_44);
      succeeded = (NumVars_45 < VarsThreshold_27);
    }
  }
  if (succeeded)
  {
    MR_Word InstMap0_46;
    MR_Word ProcInfo0_47;
    MR_Word UnfoldedCall_49;
    MR_Word DidUnfold_50;
    MR_Word DeforestGoal0_51;
    MR_Word NonLocalsList_52;
    MR_Word DeforestGoal_53;
    MR_Word FoldGoal_55;
    MR_Word Errors_57;
    MR_Word STATE_VARIABLE_PDInfo_95_95;
    MR_Word STATE_VARIABLE_PDInfo_102_102;
    MR_Word STATE_VARIABLE_PDInfo_128_128;
    MR_Word STATE_VARIABLE_PDInfo_137_137;

    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_86, &InstMap0_46);
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_86, &ProcInfo0_47);
    transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_86, (MR_String) "create_deforest_goal", (MR_String) "unfolding first call\n", (MR_Word) ((MR_Unsigned) 0U));
    transform_hlds__deforest__unfold_call_10_p_0((MR_Integer) 0, (MR_Integer) 0, PredId1_30, ProcId1_31, Args1_32, EarlierGoal_13, &UnfoldedCall_49, &DidUnfold_50, STATE_VARIABLE_PDInfo_0_86, &STATE_VARIABLE_PDInfo_95_95);
    transform_hlds__deforest__create_conj_5_p_0(UnfoldedCall_49, BetweenGoals_14, MaybeLaterGoal_15, NonLocals_17, &DeforestGoal0_51);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_17, &NonLocalsList_52);
    succeeded = (DidUnfold_50 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (RunModes_18 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Errors1_54;
      MR_Word Errors2_56;
      MR_Word STATE_VARIABLE_PDInfo_101_101;

      transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_95_95, (MR_String) "create_deforest_goal", (MR_String) "running modes on deforest goal\n", (MR_Word) ((MR_Unsigned) 0U));
      transform_hlds__pd_util__unique_modecheck_goal_5_p_0(DeforestGoal0_51, &DeforestGoal_53, &Errors1_54, STATE_VARIABLE_PDInfo_95_95, &STATE_VARIABLE_PDInfo_101_101);
      transform_hlds__pd_util__unique_modecheck_goal_5_p_0(FoldGoal0_16, &FoldGoal_55, &Errors2_56, STATE_VARIABLE_PDInfo_101_101, &STATE_VARIABLE_PDInfo_102_102);
      Errors_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), Errors1_54, Errors2_56);
    }
    else
    {
      DeforestGoal_53 = DeforestGoal0_51;
      FoldGoal_55 = FoldGoal0_16;
      Errors_57 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_PDInfo_102_102 = STATE_VARIABLE_PDInfo_95_95;
    }
    succeeded = (DidUnfold_50 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Errors_57 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word PredProcId_58;
      MR_Word CallGoal_59;
      MR_Word PredId_60;
      MR_Word ModuleInfo_62;
      MR_String PredName_63;
      MR_Word CalledPreds_72;
      MR_Word Parents0_73;
      MR_Word ProcInfo1_74;
      MR_Word VarTable_75;
      MR_Word ArgTypes_76;
      MR_Word VersionInfo_77;
      MR_Word TermInfo0_78;
      MR_Word TermInfo_79;
      MR_Word Parents_80;
      MR_Word UnfoldInfo_81;
      MR_Integer CostDelta_82;
      MR_Integer SizeDelta_83;
      MR_Word ProgressStream_84;
      MR_Word CurPredProcId_85;
      MR_Word STATE_VARIABLE_PDInfo_103_103;
      MR_Word STATE_VARIABLE_PDInfo_120_120;
      MR_Word Var_121;
      MR_Word STATE_VARIABLE_PDInfo_122_122;
      MR_Word STATE_VARIABLE_PDInfo_123_123;
      MR_Word STATE_VARIABLE_PDInfo_124_124;
      MR_Word STATE_VARIABLE_PDInfo_125_125;
      MR_Word STATE_VARIABLE_PDInfo_126_126;
      MR_Word STATE_VARIABLE_PDInfo_127_127;
      MR_Word Var_107;
      MR_Word Var_109;
      MR_Word PredId2_66;
      MR_Integer ProcId2_67;
      MR_Word LaterGoalExpr_64;
      MR_Word Var_111;

      transform_hlds__pd_info__pd_info_define_new_pred_5_p_0(DeforestGoal_53, &PredProcId_58, &CallGoal_59, STATE_VARIABLE_PDInfo_102_102, &STATE_VARIABLE_PDInfo_103_103);
      PredId_60 = ((MR_Word) ((MR_hl_field(0, PredProcId_58, (MR_Integer) 0))));
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_103_103, &ModuleInfo_62);
      PredName_63 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_62, PredId_60);
      {
        Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_109, 1) = ((MR_Box) (PredName_63));
      }
      {
        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_109));
        MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_103_103, (MR_String) "create_deforest_goal", (MR_String) "created predicate %s\n", Var_107);
      succeeded = (MaybeLaterGoal_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_111 = ((MR_Word) ((MR_hl_field(1, MaybeLaterGoal_15, (MR_Integer) 0))));
        LaterGoalExpr_64 = ((MR_Word) ((MR_hl_field(0, Var_111, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) LaterGoalExpr_64)) == (MR_Integer) 2);
        if (succeeded)
        {
          PredId2_66 = ((MR_Word) ((MR_hl_field(2, LaterGoalExpr_64, (MR_Integer) 0))));
          ProcId2_67 = ((MR_Integer) ((MR_hl_field(2, LaterGoalExpr_64, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_114;

        {
          Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_112, 0) = ((MR_Box) (PredId1_30));
          MR_hl_field(0, Var_112, 1) = ((MR_Box) (ProcId1_31));
        }
        {
          Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_114, 0) = ((MR_Box) (PredId2_66));
          MR_hl_field(0, Var_114, 1) = ((MR_Box) (ProcId2_67));
        }
        {
          Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
          MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          CalledPreds_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CalledPreds_72, 0) = ((MR_Box) (Var_112));
          MR_hl_field(1, CalledPreds_72, 1) = ((MR_Box) (Var_113));
        }
      }
      else
      {
        MR_Word Var_116;

        {
          Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_116, 0) = ((MR_Box) (PredId1_30));
          MR_hl_field(0, Var_116, 1) = ((MR_Box) (ProcId1_31));
        }
        {
          CalledPreds_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CalledPreds_72, 0) = ((MR_Box) (Var_116));
          MR_hl_field(1, CalledPreds_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      transform_hlds__pd_info__pd_info_get_parent_versions_2_p_0(STATE_VARIABLE_PDInfo_103_103, &Parents0_73);
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_103_103, &ProcInfo1_74);
      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo1_74, &VarTable_75);
      parse_tree__var_table__lookup_var_types_3_p_0(VarTable_75, NonLocalsList_52, &ArgTypes_76);
      {
        VersionInfo_77 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VersionInfo_77, 0) = ((MR_Box) (FoldGoal_55));
        MR_hl_field(0, VersionInfo_77, 1) = ((MR_Box) (CalledPreds_72));
        MR_hl_field(0, VersionInfo_77, 2) = ((MR_Box) (NonLocalsList_52));
        MR_hl_field(0, VersionInfo_77, 3) = ((MR_Box) (ArgTypes_76));
        MR_hl_field(0, VersionInfo_77, 4) = ((MR_Box) (InstMap0_46));
        MR_hl_field(0, VersionInfo_77, 5) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, VersionInfo_77, 6) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, VersionInfo_77, 7) = ((MR_Box) (Parents0_73));
        MR_hl_field(0, VersionInfo_77, 8) = ((MR_Box) (MaybeGeneralised_21));
      }
      transform_hlds__pd_info__pd_info_get_global_term_info_2_p_0(STATE_VARIABLE_PDInfo_103_103, &TermInfo0_78);
      transform_hlds__pd_term__update_global_term_info_5_p_0(ProcPair_19, PredProcId_58, Size_20, TermInfo0_78, &TermInfo_79);
      transform_hlds__pd_info__pd_info_set_global_term_info_3_p_0(TermInfo_79, STATE_VARIABLE_PDInfo_103_103, &STATE_VARIABLE_PDInfo_120_120);
      {
        Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_121, 0) = ((MR_Box) (PredProcId_58));
        MR_hl_field(1, Var_121, 1) = ((MR_Box) (CalledPreds_72));
      }
      mercury__set__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_121, Parents0_73, &Parents_80);
      transform_hlds__pd_info__pd_info_set_parent_versions_3_p_0(Parents_80, STATE_VARIABLE_PDInfo_120_120, &STATE_VARIABLE_PDInfo_122_122);
      transform_hlds__pd_info__pd_info_register_version_4_p_0(PredProcId_58, VersionInfo_77, STATE_VARIABLE_PDInfo_122_122, &STATE_VARIABLE_PDInfo_123_123);
      transform_hlds__pd_info__pd_info_get_unfold_info_2_p_0(STATE_VARIABLE_PDInfo_123_123, &UnfoldInfo_81);
      transform_hlds__deforest__deforest_proc_deltas_5_p_0(PredProcId_58, &CostDelta_82, &SizeDelta_83, STATE_VARIABLE_PDInfo_123_123, &STATE_VARIABLE_PDInfo_124_124);
      transform_hlds__pd_info__pd_info_set_unfold_info_3_p_0(UnfoldInfo_81, STATE_VARIABLE_PDInfo_124_124, &STATE_VARIABLE_PDInfo_125_125);
      transform_hlds__pd_info__pd_info_incr_cost_delta_3_p_0(CostDelta_82, STATE_VARIABLE_PDInfo_125_125, &STATE_VARIABLE_PDInfo_126_126);
      transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(SizeDelta_83, STATE_VARIABLE_PDInfo_126_126, &STATE_VARIABLE_PDInfo_127_127);
      transform_hlds__pd_info__pd_info_set_parent_versions_3_p_0(Parents0_73, STATE_VARIABLE_PDInfo_127_127, &STATE_VARIABLE_PDInfo_128_128);
      transform_hlds__pd_info__pd_info_get_progress_stream_2_p_0(STATE_VARIABLE_PDInfo_128_128, &ProgressStream_84);
      transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_PDInfo_128_128, &CurPredProcId_85);
      hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_84, ModuleInfo_62, (MR_String) "Back in", CurPredProcId_85);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCallGoal_22 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CallGoal_59));
      }
    }
    else
    {
      transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_102_102, (MR_String) "create_deforest_goal", (MR_String) "generalisation produced mode errors\n", (MR_Word) ((MR_Unsigned) 0U));
      *MaybeCallGoal_22 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_PDInfo_128_128 = STATE_VARIABLE_PDInfo_102_102;
    }
    transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(ProcInfo0_47, STATE_VARIABLE_PDInfo_128_128, &STATE_VARIABLE_PDInfo_137_137);
    transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_46, STATE_VARIABLE_PDInfo_137_137, STATE_VARIABLE_PDInfo_87);
  }
  else
  {
    transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_86, (MR_String) "create_deforest_goal", (MR_String) "vars threshold exceeded\n", (MR_Word) ((MR_Unsigned) 0U));
    *MaybeCallGoal_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PDInfo_87 = STATE_VARIABLE_PDInfo_0_86;
  }
}

static void MR_CALL 
transform_hlds__deforest__create_conj_5_p_0(
  MR_Word EarlierGoal_6,
  MR_Word BetweenGoals_7,
  MR_Word MaybeLaterGoal_8,
  MR_Word NonLocals_9,
  MR_Word * FoldGoal_10)
{
  MR_Word DeforestConj_12;
  MR_Word Detism_13;
  MR_Word InstMapDelta0_14;
  MR_Word InstMapDelta_15;
  MR_Word Purity_16;
  MR_Word ConjInfo0_17;
  MR_Word EarlierGoalInfo_19;
  MR_Word EarlierContext_20;
  MR_Word ConjInfo_21;
  MR_Word Var_25;

  if ((MaybeLaterGoal_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      DeforestConj_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DeforestConj_12, 0) = ((MR_Box) (EarlierGoal_6));
      MR_hl_field(1, DeforestConj_12, 1) = ((MR_Box) (BetweenGoals_7));
    }
  else
  {
    MR_Word LaterGoal_11 = ((MR_Word) ((MR_hl_field(1, MaybeLaterGoal_8, (MR_Integer) 0))));
    MR_Word Var_22;
    MR_Word Var_23;

    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (EarlierGoal_6));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (BetweenGoals_7));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (LaterGoal_11));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_22, Var_23, &DeforestConj_12);
  }
  hlds__hlds_goal__goal_list_determinism_2_p_0(DeforestConj_12, &Detism_13);
  hlds__hlds_goal__goal_list_instmap_delta_2_p_0(DeforestConj_12, &InstMapDelta0_14);
  hlds__instmap__instmap_delta_restrict_3_p_0(NonLocals_9, InstMapDelta0_14, &InstMapDelta_15);
  hlds__hlds_goal__goal_list_purity_2_p_0(DeforestConj_12, &Purity_16);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_9, InstMapDelta_15, Detism_13, Purity_16, &ConjInfo0_17);
  EarlierGoalInfo_19 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_6, (MR_Integer) 1))));
  EarlierContext_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(EarlierGoalInfo_19);
  hlds__hlds_goal__goal_info_set_context_3_p_0(EarlierContext_20, ConjInfo0_17, &ConjInfo_21);
  {
    Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_25, 2) = ((MR_Box) (DeforestConj_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *FoldGoal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (ConjInfo_21));
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_proc_3_p_0(
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  MR_Integer Var_6;
  MR_Integer Var_7;

  transform_hlds__deforest__deforest_proc_deltas_5_p_0(PredProcId_4, &Var_6, &Var_7, STATE_VARIABLE_PDInfo_0_8, STATE_VARIABLE_PDInfo_9);
}

static void MR_CALL 
transform_hlds__deforest__deforest_proc_deltas_5_p_0(
  MR_Word PredProcId_6,
  MR_Integer * CostDelta_7,
  MR_Integer * SizeDelta_8,
  MR_Word STATE_VARIABLE_PDInfo_0_27,
  MR_Word * STATE_VARIABLE_PDInfo_28)
{
  MR_Word ProgressStream_14;
  MR_Word Globals_16;
  MR_Word SimplifyTasks_17;
  MR_Word Changed_18;
  MR_Word STATE_VARIABLE_ModuleInfo_29_29;
  MR_Word STATE_VARIABLE_PredInfo_33_33;
  MR_Word STATE_VARIABLE_ProcInfo_34_34;
  MR_Word STATE_VARIABLE_PDInfo_35_35;
  MR_Word STATE_VARIABLE_Goal_36_36;
  MR_Word STATE_VARIABLE_Goal_39_39;
  MR_Word STATE_VARIABLE_PDInfo_40_40;
  MR_Word STATE_VARIABLE_Goal_41_41;
  MR_Word STATE_VARIABLE_PDInfo_42_42;
  MR_Word STATE_VARIABLE_Goal_47_47;
  MR_Word STATE_VARIABLE_PDInfo_48_48;
  MR_Word STATE_VARIABLE_ProcInfo_49_49;
  MR_Word STATE_VARIABLE_ProcInfo_50_50;
  MR_Word STATE_VARIABLE_PDInfo_65_65;
  MR_Word STATE_VARIABLE_ModuleInfo_70_70;
  MR_Word GoalExpr0_77;
  MR_Word GoalInfo0_78;
  MR_Word GoalExpr_79;
  MR_Word GoalInfo_80;

  transform_hlds__pd_info__pd_info_get_progress_stream_2_p_0(STATE_VARIABLE_PDInfo_0_27, &ProgressStream_14);
  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_27, &STATE_VARIABLE_ModuleInfo_29_29);
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_14, STATE_VARIABLE_ModuleInfo_29_29, (MR_String) "Deforesting", PredProcId_6);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_29_29, PredProcId_6, &STATE_VARIABLE_PredInfo_33_33, &STATE_VARIABLE_ProcInfo_34_34);
  transform_hlds__pd_info__pd_info_init_unfold_info_5_p_0(PredProcId_6, STATE_VARIABLE_PredInfo_33_33, STATE_VARIABLE_ProcInfo_34_34, STATE_VARIABLE_PDInfo_0_27, &STATE_VARIABLE_PDInfo_35_35);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_34_34, &STATE_VARIABLE_Goal_36_36);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_29_29, &Globals_16);
  check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(Globals_16, (MR_Integer) 0, &SimplifyTasks_17);
  transform_hlds__pd_util__pd_simplify_goal_6_p_0((MR_String) "deforest_proc_deltas", SimplifyTasks_17, STATE_VARIABLE_Goal_36_36, &STATE_VARIABLE_Goal_39_39, STATE_VARIABLE_PDInfo_35_35, &STATE_VARIABLE_PDInfo_40_40);
  transform_hlds__pd_util__propagate_constraints_4_p_0(STATE_VARIABLE_Goal_39_39, &STATE_VARIABLE_Goal_41_41, STATE_VARIABLE_PDInfo_40_40, &STATE_VARIABLE_PDInfo_42_42);
  transform_hlds__pd_debug__pd_debug_output_goal_6_p_0(STATE_VARIABLE_PDInfo_42_42, (MR_String) "deforest_proc_deltas", (MR_String) "after constraints\n", STATE_VARIABLE_Goal_41_41);
  GoalExpr0_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_41_41, (MR_Integer) 0))));
  GoalInfo0_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_41_41, (MR_Integer) 1))));
  transform_hlds__deforest__deforest_goal_expr_6_p_0(GoalExpr0_77, &GoalExpr_79, GoalInfo0_78, &GoalInfo_80, STATE_VARIABLE_PDInfo_42_42, &STATE_VARIABLE_PDInfo_48_48);
  {
    STATE_VARIABLE_Goal_47_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Goal_47_47, 0) = ((MR_Box) (GoalExpr_79));
    MR_hl_field(0, STATE_VARIABLE_Goal_47_47, 1) = ((MR_Box) (GoalInfo_80));
  }
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_48_48, &STATE_VARIABLE_ProcInfo_49_49);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_47_47, STATE_VARIABLE_ProcInfo_49_49, &STATE_VARIABLE_ProcInfo_50_50);
  transform_hlds__pd_info__pd_info_get_changed_2_p_0(STATE_VARIABLE_PDInfo_48_48, &Changed_18);
  switch (Changed_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_ModuleInfo_66_66;
        MR_Word STATE_VARIABLE_PredInfo_59_75;
        MR_Word STATE_VARIABLE_ModuleInfo_63_76;

        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_48_48, &STATE_VARIABLE_ModuleInfo_66_66);
        transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(STATE_VARIABLE_PDInfo_48_48, &STATE_VARIABLE_PredInfo_59_75);
        hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_6, STATE_VARIABLE_PredInfo_59_75, STATE_VARIABLE_ProcInfo_50_50, STATE_VARIABLE_ModuleInfo_66_66, &STATE_VARIABLE_ModuleInfo_63_76);
        transform_hlds__pd_info__pd_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_63_76, STATE_VARIABLE_PDInfo_48_48, &STATE_VARIABLE_PDInfo_65_65);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstMap0_19;
        MR_Word VarTable_20;
        MR_Word InstVarSet_21;
        MR_Word RerunDet_22;
        MR_Word ProcArgInfo0_25;
        MR_Word ProcArgInfo_26;
        MR_Word STATE_VARIABLE_ModuleInfo_51_51;
        MR_Word STATE_VARIABLE_ProcInfo_53_53;
        MR_Word STATE_VARIABLE_Goal_54_54;
        MR_Word STATE_VARIABLE_Goal_56_56;
        MR_Word STATE_VARIABLE_ModuleInfo_57_57;
        MR_Word STATE_VARIABLE_PDInfo_58_58;
        MR_Word STATE_VARIABLE_PredInfo_59_59;
        MR_Word STATE_VARIABLE_ProcInfo_60_60;
        MR_Word STATE_VARIABLE_ModuleInfo_61_61;
        MR_Word STATE_VARIABLE_ModuleInfo_62_62;
        MR_Word STATE_VARIABLE_ModuleInfo_63_63;
        MR_Word STATE_VARIABLE_PDInfo_64_64;

        transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_48_48, &STATE_VARIABLE_ModuleInfo_51_51);
        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_50_50, &STATE_VARIABLE_ProcInfo_53_53);
        hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_53_53, &STATE_VARIABLE_Goal_54_54);
        hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_51_51, STATE_VARIABLE_ProcInfo_53_53, &InstMap0_19);
        hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_53_53, &VarTable_20);
        hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_53_53, &InstVarSet_21);
        check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 0, VarTable_20, InstVarSet_21, InstMap0_19, STATE_VARIABLE_Goal_54_54, &STATE_VARIABLE_Goal_56_56, STATE_VARIABLE_ModuleInfo_51_51, &STATE_VARIABLE_ModuleInfo_57_57);
        transform_hlds__pd_info__pd_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_57_57, STATE_VARIABLE_PDInfo_48_48, &STATE_VARIABLE_PDInfo_58_58);
        transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(STATE_VARIABLE_PDInfo_58_58, &STATE_VARIABLE_PredInfo_59_59);
        hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_56_56, STATE_VARIABLE_ProcInfo_53_53, &STATE_VARIABLE_ProcInfo_60_60);
        hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_6, STATE_VARIABLE_PredInfo_59_59, STATE_VARIABLE_ProcInfo_60_60, STATE_VARIABLE_ModuleInfo_57_57, &STATE_VARIABLE_ModuleInfo_61_61);
        transform_hlds__pd_info__pd_info_get_rerun_det_2_p_0(STATE_VARIABLE_PDInfo_58_58, &RerunDet_22);
        switch (RerunDet_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_ModuleInfo_62_62 = STATE_VARIABLE_ModuleInfo_61_61;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_23 = ((MR_Word) ((MR_hl_field(0, PredProcId_6, (MR_Integer) 0))));
              MR_Integer ProcId_24 = ((MR_Integer) ((MR_hl_field(0, PredProcId_6, (MR_Integer) 1))));

              check_hlds__det_analysis__det_infer_proc_ignore_msgs_5_p_0(ProgressStream_14, PredId_23, ProcId_24, STATE_VARIABLE_ModuleInfo_61_61, &STATE_VARIABLE_ModuleInfo_62_62);
            }
            break;
        }
        transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(STATE_VARIABLE_PDInfo_58_58, &ProcArgInfo0_25);
        transform_hlds__pd_util__get_branch_vars_proc_6_p_0(PredProcId_6, STATE_VARIABLE_ProcInfo_60_60, STATE_VARIABLE_ModuleInfo_62_62, &STATE_VARIABLE_ModuleInfo_63_63, ProcArgInfo0_25, &ProcArgInfo_26);
        transform_hlds__pd_info__pd_info_set_proc_arg_info_3_p_0(ProcArgInfo_26, STATE_VARIABLE_PDInfo_58_58, &STATE_VARIABLE_PDInfo_64_64);
        transform_hlds__pd_info__pd_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_63_63, STATE_VARIABLE_PDInfo_64_64, &STATE_VARIABLE_PDInfo_65_65);
      }
      break;
  }
  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_65_65, &STATE_VARIABLE_ModuleInfo_70_70);
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_14, STATE_VARIABLE_ModuleInfo_70_70, (MR_String) "Finished deforesting", PredProcId_6);
  transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(STATE_VARIABLE_PDInfo_65_65, CostDelta_7);
  transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(STATE_VARIABLE_PDInfo_65_65, SizeDelta_8);
  transform_hlds__pd_info__pd_info_unset_unfold_info_2_p_0(STATE_VARIABLE_PDInfo_65_65, STATE_VARIABLE_PDInfo_28);
}

static void MR_CALL 
transform_hlds__deforest__deforest_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_PDInfo_0_5,
  MR_Word * STATE_VARIABLE_PDInfo_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadVar__3_3, HeadVar__4_4);
      *STATE_VARIABLE_PDInfo_6 = STATE_VARIABLE_PDInfo_0_5;
    }
    else
    {
      MR_Word Goal0_13;
      MR_Word MaybeBranchInfo_14;
      MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals1_21;
      MR_Word DeforestInfo_22;
      MR_Word GoalBranchInfo_20;
      MR_Word Var_38;

      Goal0_13 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
      MaybeBranchInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 1))));
      succeeded = (MaybeBranchInfo_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        GoalBranchInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeBranchInfo_14, (MR_Integer) 0))));
        Var_38 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = transform_hlds__deforest__search_for_deforest_goal_6_p_0(Goal0_13, GoalBranchInfo_20, Var_38, Goals0_15, &Goals1_21, &DeforestInfo_22);
      }
      if (succeeded)
      {
        MR_Word RevGoals1_23;
        MR_Word Goals2_24;
        MR_Word Optimized_25;
        MR_Word STATE_VARIABLE_PDInfo_30_30;

        transform_hlds__deforest__handle_deforestation_9_p_0(NonLocals_2, DeforestInfo_22, HeadVar__3_3, &RevGoals1_23, Goals1_21, &Goals2_24, &Optimized_25, STATE_VARIABLE_PDInfo_0_5, &STATE_VARIABLE_PDInfo_30_30);
        switch (Optimized_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word RevGoals2_26;
              MR_Word STATE_VARIABLE_PDInfo_32_32;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_HeadVar__3_3;
              MR_Word next_value_of_STATE_VARIABLE_PDInfo_0_5;

              transform_hlds__pd_info__pd_info_update_goal_3_p_0(Goal0_13, STATE_VARIABLE_PDInfo_30_30, &STATE_VARIABLE_PDInfo_32_32);
              {
                RevGoals2_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, RevGoals2_26, 0) = ((MR_Box) (Goal0_13));
                MR_hl_field(1, RevGoals2_26, 1) = ((MR_Box) (HeadVar__3_3));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Goals0_15;
              next_value_of_HeadVar__3_3 = RevGoals2_26;
              next_value_of_STATE_VARIABLE_PDInfo_0_5 = STATE_VARIABLE_PDInfo_32_32;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_PDInfo_0_5 = next_value_of_STATE_VARIABLE_PDInfo_0_5;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Goals2_24;
              MR_Word next_value_of_HeadVar__3_3 = RevGoals1_23;
              MR_Word next_value_of_STATE_VARIABLE_PDInfo_0_5 = STATE_VARIABLE_PDInfo_30_30;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_PDInfo_0_5 = next_value_of_STATE_VARIABLE_PDInfo_0_5;
              continue;
            }
            break;
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_PDInfo_34_34;
        MR_Word RevGoals1_36;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_PDInfo_0_5;

        transform_hlds__pd_info__pd_info_update_goal_3_p_0(Goal0_13, STATE_VARIABLE_PDInfo_0_5, &STATE_VARIABLE_PDInfo_34_34);
        {
          RevGoals1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RevGoals1_36, 0) = ((MR_Box) (Goal0_13));
          MR_hl_field(1, RevGoals1_36, 1) = ((MR_Box) (HeadVar__3_3));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals0_15;
        next_value_of_HeadVar__3_3 = RevGoals1_36;
        next_value_of_STATE_VARIABLE_PDInfo_0_5 = STATE_VARIABLE_PDInfo_34_34;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_PDInfo_0_5 = next_value_of_STATE_VARIABLE_PDInfo_0_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Goals_3,
  MR_Word STATE_VARIABLE_PDInfo_0_4,
  MR_Word * STATE_VARIABLE_PDInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadVar__2_2, Goals_3);
      *STATE_VARIABLE_PDInfo_5 = STATE_VARIABLE_PDInfo_0_4;
    }
    else
    {
      MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal1_16;
      MR_Word RevGoals2_20;
      MR_Word STATE_VARIABLE_PDInfo_23_23;
      MR_Word STATE_VARIABLE_PDInfo_24_24;
      MR_Word GoalExpr0_29 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
      MR_Word GoalInfo0_30 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
      MR_Word GoalExpr_31;
      MR_Word GoalInfo_32;
      MR_Word Goals1_17;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PDInfo_0_4;

      transform_hlds__deforest__deforest_goal_expr_6_p_0(GoalExpr0_29, &GoalExpr_31, GoalInfo0_30, &GoalInfo_32, STATE_VARIABLE_PDInfo_0_4, &STATE_VARIABLE_PDInfo_23_23);
      {
        Goal1_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal1_16, 0) = ((MR_Box) (GoalExpr_31));
        MR_hl_field(0, Goal1_16, 1) = ((MR_Box) (GoalInfo_32));
      }
      transform_hlds__pd_info__pd_info_update_goal_3_p_0(Goal1_16, STATE_VARIABLE_PDInfo_23_23, &STATE_VARIABLE_PDInfo_24_24);
      Var_25 = ((MR_Word) ((MR_hl_field(0, Goal1_16, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_26 = ((MR_Unsigned) ((MR_hl_field(3, Var_25, (MR_Integer) 1))) & (MR_Integer) 1);
        Goals1_17 = ((MR_Word) ((MR_hl_field(3, Var_25, (MR_Integer) 2))));
        succeeded = (Var_26 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_Word RevGoals1_19;

        mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals1_17, &RevGoals1_19);
        mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevGoals1_19, HeadVar__2_2, &RevGoals2_20);
      }
      else
        {
          RevGoals2_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RevGoals2_20, 0) = ((MR_Box) (Goal1_16));
          MR_hl_field(1, RevGoals2_20, 1) = ((MR_Box) (HeadVar__2_2));
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_12;
      next_value_of_HeadVar__2_2 = RevGoals2_20;
      next_value_of_STATE_VARIABLE_PDInfo_0_4 = STATE_VARIABLE_PDInfo_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PDInfo_0_4 = next_value_of_STATE_VARIABLE_PDInfo_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_34 = ((MR_Integer) ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_34));
  transform_hlds__deforest__deforest_call_9_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Box conv2_Arg_35;
    MR_Word Var_37;
    MR_Word Var_38;

    mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[1]), (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__LeftArg_34, &conv2_Arg_35);
    (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_35 = ((MR_Word) (conv2_Arg_35));
    hlds__instmap__instmap_lookup_var_3_p_0((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Arg_35, &(env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_36);
    (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_50 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_49 = base;
      MR_hl_field(1, base, 0) = NULL;
      MR_hl_field(1, base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_50));
    }
    (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ArgInst_36, &(env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_214);
    if ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_215_215 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0);
      (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__deforest____Unify____list__list_1_1((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__TypeCtorInfo_215_215, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_49, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_214);
      if ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
      {
        (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_51 = (MR_Integer) 0;
        (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_5_p_0((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__Var_51);
        if ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
        {
          hlds__hlds_module__module_info_pred_proc_info_5_p_0((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, &Var_38, &(env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_39);
          hlds__hlds_pred__proc_info_get_goal_2_p_0((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledProcInfo_39, &(env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_40);
          hlds__goal_util__goal_size_2_p_0((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoal_40, &(env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_41);
          (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29 == (MR_Integer) -1);
          if (!((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded))
            (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__CalledGoalSize_41 < (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29);
          if ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
            transform_hlds__deforest__deforest_call_9_p_0_1(env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word TypeCtorInfo_213_213;
        MR_Word ProcArgInfo_30;
        MR_Word LeftArgs_32;
        MR_Word Var_48;
        MR_Box conv0_ProcArgInfo_30;
        MR_Word Var_31;
        MR_Word Var_33;

        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11));
        }
        (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[0]), (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18, ((MR_Box) (Var_48)), &conv0_ProcArgInfo_30);
        if ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
        {
          ProcArgInfo_30 = ((MR_Word) (conv0_ProcArgInfo_30));
          (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
        }
        if ((env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
        {
          LeftArgs_32 = ((MR_Word) ((MR_hl_field(0, ProcArgInfo_30, (MR_Integer) 1))));
          TypeCtorInfo_213_213 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
          mercury__set__member_2_p_1(TypeCtorInfo_213_213, &(env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__conv1_LeftArg_34, LeftArgs_32, transform_hlds__deforest__deforest_call_9_p_0_3, env_ptr);
        }
      }
      (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__deforest__deforest_call_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word Args_12,
  MR_Word SymName_13,
  MR_Word BuiltinState_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_PDInfo_0_46,
  MR_Word * STATE_VARIABLE_PDInfo_47)
{
  struct transform_hlds__deforest__deforest_call_9_p_0_env_0_s env;

  (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10 = PredId_10;
  (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11 = ProcId_11;
  (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12 = Args_12;
  (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__BuiltinState_14 = BuiltinState_14;
  {
    MR_String Name_21;
    MR_Integer Arity_22;
    MR_Word GoalInfo0_24;
    MR_Word Context_25;
    MR_Word LocalTermInfo0_26;
    MR_Word Globals_27;
    MR_Word OptTuple_28;
    MR_Word GoalExpr0_23;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_172;
    MR_Integer Var_173;
    MR_Integer Var_174;
    MR_Integer Var_175;
    MR_Integer Var_176;
    MR_Integer Var_177;
    MR_Integer Var_178;
    MR_Integer Var_179;
    MR_Integer Var_180;
    MR_Integer Var_181;
    MR_Integer Var_182;
    MR_Integer Var_183;
    MR_Integer Var_184;
    MR_Integer Var_185;
    MR_Integer Var_186;
    MR_Integer Var_187;
    MR_Integer Var_188;
    MR_Integer Var_189;
    MR_Integer Var_190;
    MR_Integer Var_191;
    MR_Integer Var_192;
    MR_Integer Var_193;
    MR_Integer Var_194;
    MR_Integer Var_195;
    MR_Integer Var_196;
    MR_Integer Var_197;
    MR_Integer Var_198;
    MR_Integer Var_199;
    MR_Integer Var_200;
    MR_Integer Var_201;
    MR_Integer Var_202;
    MR_Integer Var_203;
    MR_Integer Var_204;
    MR_Integer Var_205;
    MR_Integer Var_206;
    MR_Integer Var_207;
    MR_Integer Var_208;
    MR_String Var_209;

    transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(STATE_VARIABLE_PDInfo_0_46, &(env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcArgInfos_18);
    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_46, &(env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_46, &(env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20);
    Name_21 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_13);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_1[1]), (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, &Arity_22);
    GoalInfo0_24 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 1))));
    Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_24);
    transform_hlds__pd_info__pd_info_get_local_term_info_2_p_0(STATE_VARIABLE_PDInfo_0_46, &LocalTermInfo0_26);
    hlds__hlds_module__module_info_get_globals_2_p_0((env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, &Globals_27);
    libs__globals__get_opt_tuple_2_p_0(Globals_27, &OptTuple_28);
    (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__SizeThreshold_29 = ((MR_Integer) ((MR_hl_field(0, OptTuple_28, (MR_Integer) 23))));
    transform_hlds__deforest__deforest_call_9_p_0_4(&env);
    if ((env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
    {
      MR_Word Var_55;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word LocalTermInfo_43;

      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (Name_21));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (Arity_22));
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
      }
      transform_hlds__pd_debug__pd_debug_message_context_7_p_0(STATE_VARIABLE_PDInfo_0_46, (MR_String) "deforest_call", Context_25, (MR_String) "Found extra information for call to %s/%i\n", Var_55);
      (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded = transform_hlds__pd_term__local_check_5_p_0((env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ModuleInfo_19, Goal0_15, (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__InstMap_20, LocalTermInfo0_26, &LocalTermInfo_43);
      if ((env).transform_hlds__deforest__deforest_call_9_p_0_env_0__succeeded)
      {
        MR_Word Goal1_44;
        MR_Word Optimized_45;
        MR_Word STATE_VARIABLE_PDInfo_66_66;
        MR_Word STATE_VARIABLE_PDInfo_69_69;
        MR_Word STATE_VARIABLE_PDInfo_70_70;

        transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_46, (MR_String) "deforest_call", (MR_String) "Local termination check succeeded\n", (MR_Word) ((MR_Unsigned) 0U));
        transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(LocalTermInfo_43, STATE_VARIABLE_PDInfo_0_46, &STATE_VARIABLE_PDInfo_66_66);
        transform_hlds__deforest__unfold_call_10_p_0((MR_Integer) 1, (MR_Integer) 1, (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__PredId_10, (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__ProcId_11, (env).transform_hlds__deforest__deforest_call_9_p_0_env_0__Args_12, Goal0_15, &Goal1_44, &Optimized_45, STATE_VARIABLE_PDInfo_66_66, &STATE_VARIABLE_PDInfo_69_69);
        switch (Optimized_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Goal_16 = Goal1_44;
              STATE_VARIABLE_PDInfo_70_70 = STATE_VARIABLE_PDInfo_69_69;
            }
            break;
          case (MR_Integer) 1:
            transform_hlds__deforest__deforest_goal_4_p_0(Goal1_44, Goal_16, STATE_VARIABLE_PDInfo_69_69, &STATE_VARIABLE_PDInfo_70_70);
            break;
        }
        transform_hlds__pd_info__pd_info_set_local_term_info_3_p_0(LocalTermInfo0_26, STATE_VARIABLE_PDInfo_70_70, STATE_VARIABLE_PDInfo_47);
      }
      else
      {
        transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_46, (MR_String) "deforest_call", (MR_String) "Local termination check failed\n", (MR_Word) ((MR_Unsigned) 0U));
        *Goal_16 = Goal0_15;
        *STATE_VARIABLE_PDInfo_47 = STATE_VARIABLE_PDInfo_0_46;
      }
    }
    else
    {
      MR_Word Var_80;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;

      {
        Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_82, 1) = ((MR_Box) (Name_21));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (Arity_22));
      }
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_82));
        MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
      }
      transform_hlds__pd_debug__pd_debug_message_context_7_p_0(STATE_VARIABLE_PDInfo_0_46, (MR_String) "deforest_call", Context_25, (MR_String) "No extra information for call to %s/%i\n", Var_80);
      *Goal_16 = Goal0_15;
      *STATE_VARIABLE_PDInfo_47 = STATE_VARIABLE_PDInfo_0_46;
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__deforest__append_goal_9_p_0(
  MR_Word Goal0_10,
  MR_Word BetweenGoals_11,
  MR_Word GoalToAppend0_12,
  MR_Word NonLocals0_13,
  MR_Integer CurrBranch_14,
  MR_Word Branches_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_PDInfo_0_30,
  MR_Word * STATE_VARIABLE_PDInfo_31)
{
  MR_bool succeeded;
  MR_Word GoalToAppend_19;
  MR_Word GoalList0_20;
  MR_Word GoalListToAppend_21;
  MR_Word Goals_22;
  MR_Word SubNonLocals_23;
  MR_Word NonLocals_24;
  MR_Word Delta0_25;
  MR_Word Delta_26;
  MR_Word Detism_27;
  MR_Word Purity_28;
  MR_Word GoalInfo_29;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_41;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (CurrBranch_14)), Branches_15);
  if (succeeded)
  {
    MR_Word InstMap0_18;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_PDInfo_34_34;
    MR_Word STATE_VARIABLE_PDInfo_35_35;
    MR_Word GoalExpr0_51;
    MR_Word GoalInfo0_52;
    MR_Word GoalExpr_53;
    MR_Word GoalInfo_54;
    MR_Box conv1_STATE_VARIABLE_PDInfo_34_34;

    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_30, &InstMap0_18);
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Goal0_10));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (BetweenGoals_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0), (MR_Word) (&transform_hlds__deforest_scalar_common_2[13]), Var_33, ((MR_Box) (STATE_VARIABLE_PDInfo_0_30)), &conv1_STATE_VARIABLE_PDInfo_34_34);
    STATE_VARIABLE_PDInfo_34_34 = ((MR_Word) (conv1_STATE_VARIABLE_PDInfo_34_34));
    GoalExpr0_51 = ((MR_Word) ((MR_hl_field(0, GoalToAppend0_12, (MR_Integer) 0))));
    GoalInfo0_52 = ((MR_Word) ((MR_hl_field(0, GoalToAppend0_12, (MR_Integer) 1))));
    transform_hlds__deforest__deforest_goal_expr_6_p_0(GoalExpr0_51, &GoalExpr_53, GoalInfo0_52, &GoalInfo_54, STATE_VARIABLE_PDInfo_34_34, &STATE_VARIABLE_PDInfo_35_35);
    {
      GoalToAppend_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GoalToAppend_19, 0) = ((MR_Box) (GoalExpr_53));
      MR_hl_field(0, GoalToAppend_19, 1) = ((MR_Box) (GoalInfo_54));
    }
    transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_18, STATE_VARIABLE_PDInfo_35_35, STATE_VARIABLE_PDInfo_31);
  }
  else
  {
    GoalToAppend_19 = GoalToAppend0_12;
    *STATE_VARIABLE_PDInfo_31 = STATE_VARIABLE_PDInfo_0_30;
  }
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_10, &GoalList0_20);
  hlds__hlds_goal__goal_to_conj_list_2_p_0(GoalToAppend_19, &GoalListToAppend_21);
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (GoalListToAppend_21));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (BetweenGoals_11));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (GoalList0_20));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_38));
  }
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_37, &Goals_22);
  hlds__hlds_goal__goal_list_nonlocals_2_p_0(Goals_22, &SubNonLocals_23);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_13, SubNonLocals_23, &NonLocals_24);
  hlds__hlds_goal__goal_list_instmap_delta_2_p_0(Goals_22, &Delta0_25);
  hlds__instmap__instmap_delta_restrict_3_p_0(NonLocals_24, Delta0_25, &Delta_26);
  hlds__hlds_goal__goal_list_determinism_2_p_0(Goals_22, &Detism_27);
  hlds__hlds_goal__goal_list_purity_2_p_0(Goals_22, &Purity_28);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_24, Delta_26, Detism_27, Purity_28, &GoalInfo_29);
  {
    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_41, 2) = ((MR_Box) (Goals_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_29));
  }
}

static void MR_CALL 
transform_hlds__deforest__append_goal_to_cases_10_p_0(
  MR_Word Var_1,
  MR_Word BetweenGoals_2,
  MR_Word GoalToAppend_3,
  MR_Word NonLocals_4,
  MR_Integer CurrCase_5,
  MR_Word Branches_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_PDInfo_0_9,
  MR_Word * STATE_VARIABLE_PDInfo_10)
{
  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PDInfo_10 = STATE_VARIABLE_PDInfo_0_9;
  }
  else
  {
    MR_Word Case0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
    MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
    MR_Word Case_28;
    MR_Word Cases_29;
    MR_Word MainConsId_31 = ((MR_Word) ((MR_hl_field(0, Case0_26, (MR_Integer) 0))));
    MR_Word OtherConsIds_32 = ((MR_Word) ((MR_hl_field(0, Case0_26, (MR_Integer) 1))));
    MR_Word Goal0_33 = ((MR_Word) ((MR_hl_field(0, Case0_26, (MR_Integer) 2))));
    MR_Word InstMap0_34;
    MR_Word Goal_35;
    MR_Integer NextCase_36;
    MR_Word STATE_VARIABLE_PDInfo_39_39;
    MR_Word STATE_VARIABLE_PDInfo_40_40;
    MR_Word STATE_VARIABLE_PDInfo_42_42;

    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_9, &InstMap0_34);
    transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(Var_1, MainConsId_31, OtherConsIds_32, STATE_VARIABLE_PDInfo_0_9, &STATE_VARIABLE_PDInfo_39_39);
    transform_hlds__deforest__append_goal_9_p_0(Goal0_33, BetweenGoals_2, GoalToAppend_3, NonLocals_4, CurrCase_5, Branches_6, &Goal_35, STATE_VARIABLE_PDInfo_39_39, &STATE_VARIABLE_PDInfo_40_40);
    {
      Case_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_28, 0) = ((MR_Box) (MainConsId_31));
      MR_hl_field(0, Case_28, 1) = ((MR_Box) (OtherConsIds_32));
      MR_hl_field(0, Case_28, 2) = ((MR_Box) (Goal_35));
    }
    NextCase_36 = (MR_Integer) ((MR_Unsigned) CurrCase_5 + (MR_Unsigned) 1);
    transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_34, STATE_VARIABLE_PDInfo_40_40, &STATE_VARIABLE_PDInfo_42_42);
    transform_hlds__deforest__append_goal_to_cases_10_p_0(Var_1, BetweenGoals_2, GoalToAppend_3, NonLocals_4, NextCase_36, Branches_6, Cases0_27, &Cases_29, STATE_VARIABLE_PDInfo_42_42, STATE_VARIABLE_PDInfo_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_29));
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(
  MR_Word BetweenGoals_1,
  MR_Word GoalToAppend_2,
  MR_Word NonLocals_3,
  MR_Integer CurrBranch_4,
  MR_Word Branches_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_PDInfo_0_8,
  MR_Word * STATE_VARIABLE_PDInfo_9)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PDInfo_9 = STATE_VARIABLE_PDInfo_0_8;
  }
  else
  {
    MR_Word Goal0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Goals0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
    MR_Word Goal_25;
    MR_Word Goals_26;
    MR_Word InstMap0_28;
    MR_Integer NextBranch_29;
    MR_Word STATE_VARIABLE_PDInfo_32_32;
    MR_Word STATE_VARIABLE_PDInfo_34_34;

    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_8, &InstMap0_28);
    transform_hlds__deforest__append_goal_9_p_0(Goal0_23, BetweenGoals_1, GoalToAppend_2, NonLocals_3, CurrBranch_4, Branches_5, &Goal_25, STATE_VARIABLE_PDInfo_0_8, &STATE_VARIABLE_PDInfo_32_32);
    NextBranch_29 = (MR_Integer) ((MR_Unsigned) CurrBranch_4 + (MR_Unsigned) 1);
    transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_28, STATE_VARIABLE_PDInfo_32_32, &STATE_VARIABLE_PDInfo_34_34);
    transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(BetweenGoals_1, GoalToAppend_2, NonLocals_3, NextBranch_29, Branches_5, Goals0_24, &Goals_26, STATE_VARIABLE_PDInfo_34_34, STATE_VARIABLE_PDInfo_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_25));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_26));
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__push_goal_into_goal_8_p_0(
  MR_Word NonLocals_9,
  MR_Word DeforestInfo_10,
  MR_Word EarlierGoal_11,
  MR_Word BetweenGoals_12,
  MR_Word LaterGoal_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_PDInfo_0_87,
  MR_Word * STATE_VARIABLE_PDInfo_88)
{
  MR_Word InstMap0_16;
  MR_Word EarlierGoalExpr_17;
  MR_Word GoalExpr_24;
  MR_Word Delta0_66;
  MR_Word LaterInfo_68;
  MR_Word Delta1_69;
  MR_Word Delta2_70;
  MR_Word Delta_71;
  MR_Word Detism0_72;
  MR_Word Detism1_73;
  MR_Word Detism_74;
  MR_Word Purity0_75;
  MR_Word Purity1_76;
  MR_Word Purity_77;
  MR_Word GoalInfo_78;
  MR_Word Goal2_79;
  MR_Word ModuleInfo_80;
  MR_Word Globals_81;
  MR_Word SimplifyTasks0_82;
  MR_Word SimpList0_83;
  MR_Word SimpList_84;
  MR_Word SimplifyTasks_85;
  MR_Word Goal3_86;
  MR_Word STATE_VARIABLE_PDInfo_90_90;
  MR_Word STATE_VARIABLE_PDInfo_101_101;
  MR_Word Var_102;
  MR_Word STATE_VARIABLE_PDInfo_109_109;
  MR_Word STATE_VARIABLE_PDInfo_110_110;
  MR_Word STATE_VARIABLE_PDInfo_111_111;

  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_87, &InstMap0_16);
  EarlierGoalExpr_17 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_11, (MR_Integer) 0))));
  switch (MR_tag((MR_Word) EarlierGoalExpr_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, EarlierGoalExpr_17, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.deforest.push_goal_into_goal\'/8", (MR_String) "unexpected goal type");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_35 = ((MR_Word) ((MR_hl_field(3, EarlierGoalExpr_17, (MR_Integer) 1))));
            MR_Word Disjuncts_36;

            transform_hlds__deforest__append_goal_to_disjuncts_9_p_0(BetweenGoals_12, LaterGoal_13, NonLocals_9, (MR_Integer) 1, DeforestInfo_10, Disjuncts0_35, &Disjuncts_36, STATE_VARIABLE_PDInfo_0_87, &STATE_VARIABLE_PDInfo_90_90);
            {
              GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_24, 1) = ((MR_Box) (Disjuncts_36));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var1_19 = ((MR_Word) ((MR_hl_field(3, EarlierGoalExpr_17, (MR_Integer) 1))));
            MR_Word CanFail1_20 = ((MR_Unsigned) ((MR_hl_field(3, EarlierGoalExpr_17, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases1_21 = ((MR_Word) ((MR_hl_field(3, EarlierGoalExpr_17, (MR_Integer) 3))));
            MR_Word CaseNonLocals_22;
            MR_Word Cases_23;

            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var1_19, NonLocals_9, &CaseNonLocals_22);
            transform_hlds__deforest__append_goal_to_cases_10_p_0(Var1_19, BetweenGoals_12, LaterGoal_13, CaseNonLocals_22, (MR_Integer) 1, DeforestInfo_10, Cases1_21, &Cases_23, STATE_VARIABLE_PDInfo_0_87, &STATE_VARIABLE_PDInfo_90_90);
            {
              GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_24, 1) = ((MR_Box) (Var1_19));
              MR_hl_field(3, GoalExpr_24, 2) = (MR_Box) ((MR_Unsigned) (CanFail1_20));
              MR_hl_field(3, GoalExpr_24, 3) = ((MR_Box) (Cases_23));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(3, EarlierGoalExpr_17, (MR_Integer) 1))));
            MR_Word Cond_26 = ((MR_Word) ((MR_hl_field(3, EarlierGoalExpr_17, (MR_Integer) 2))));
            MR_Word Then0_27 = ((MR_Word) ((MR_hl_field(3, EarlierGoalExpr_17, (MR_Integer) 3))));
            MR_Word Else0_28 = ((MR_Word) ((MR_hl_field(3, EarlierGoalExpr_17, (MR_Integer) 4))));
            MR_Word CondInfo_30;
            MR_Word CondNonLocals_31;
            MR_Word ThenNonLocals_32;
            MR_Word Then_33;
            MR_Word Else_34;
            MR_Word STATE_VARIABLE_PDInfo_91_91;
            MR_Word STATE_VARIABLE_PDInfo_93_93;
            MR_Word STATE_VARIABLE_PDInfo_94_94;

            transform_hlds__pd_info__pd_info_update_goal_3_p_0(Cond_26, STATE_VARIABLE_PDInfo_0_87, &STATE_VARIABLE_PDInfo_91_91);
            CondInfo_30 = ((MR_Word) ((MR_hl_field(0, Cond_26, (MR_Integer) 1))));
            CondNonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CondInfo_30);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondNonLocals_31, NonLocals_9, &ThenNonLocals_32);
            transform_hlds__deforest__append_goal_9_p_0(Then0_27, BetweenGoals_12, LaterGoal_13, ThenNonLocals_32, (MR_Integer) 1, DeforestInfo_10, &Then_33, STATE_VARIABLE_PDInfo_91_91, &STATE_VARIABLE_PDInfo_93_93);
            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_16, STATE_VARIABLE_PDInfo_93_93, &STATE_VARIABLE_PDInfo_94_94);
            transform_hlds__deforest__append_goal_9_p_0(Else0_28, BetweenGoals_12, LaterGoal_13, NonLocals_9, (MR_Integer) 2, DeforestInfo_10, &Else_34, STATE_VARIABLE_PDInfo_94_94, &STATE_VARIABLE_PDInfo_90_90);
            {
              GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_24, 1) = ((MR_Box) (Vars_25));
              MR_hl_field(3, GoalExpr_24, 2) = ((MR_Box) (Cond_26));
              MR_hl_field(3, GoalExpr_24, 3) = ((MR_Box) (Then_33));
              MR_hl_field(3, GoalExpr_24, 4) = ((MR_Box) (Else_34));
            }
          }
          break;
      }
      break;
  }
  transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_16, STATE_VARIABLE_PDInfo_90_90, &STATE_VARIABLE_PDInfo_101_101);
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (EarlierGoal_11));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (BetweenGoals_12));
  }
  hlds__hlds_goal__goal_list_instmap_delta_2_p_0(Var_102, &Delta0_66);
  LaterInfo_68 = ((MR_Word) ((MR_hl_field(0, LaterGoal_13, (MR_Integer) 1))));
  Delta1_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(LaterInfo_68);
  hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(Delta0_66, Delta1_69, (MR_Integer) 2, &Delta2_70);
  hlds__instmap__instmap_delta_restrict_3_p_0(NonLocals_9, Delta2_70, &Delta_71);
  hlds__hlds_goal__goal_list_determinism_2_p_0(Var_102, &Detism0_72);
  Detism1_73 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(LaterInfo_68);
  parse_tree__prog_detism__det_conjunction_detism_3_p_0(Detism0_72, Detism1_73, &Detism_74);
  hlds__hlds_goal__goal_list_purity_2_p_0(Var_102, &Purity0_75);
  Purity1_76 = hlds__hlds_goal__goal_info_get_purity_1_f_0(LaterInfo_68);
  Purity_77 = parse_tree__prog_data__worst_purity_2_f_0(Purity0_75, Purity1_76);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_9, Delta_71, Detism_74, Purity_77, &GoalInfo_78);
  {
    Goal2_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal2_79, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(0, Goal2_79, 1) = ((MR_Box) (GoalInfo_78));
  }
  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_101_101, &ModuleInfo_80);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_80, &Globals_81);
  check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(Globals_81, (MR_Integer) 0, &SimplifyTasks0_82);
  SimpList0_83 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(SimplifyTasks0_82);
  {
    SimpList_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SimpList_84, 0) = ((MR_Box) ((MR_Integer) 13));
    MR_hl_field(1, SimpList_84, 1) = ((MR_Box) (SimpList0_83));
  }
  SimplifyTasks_85 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_2_f_0(Globals_81, SimpList_84);
  transform_hlds__pd_util__pd_simplify_goal_6_p_0((MR_String) "push_goal_into_goal", SimplifyTasks_85, Goal2_79, &Goal3_86, STATE_VARIABLE_PDInfo_101_101, &STATE_VARIABLE_PDInfo_109_109);
  transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_16, STATE_VARIABLE_PDInfo_109_109, &STATE_VARIABLE_PDInfo_110_110);
  transform_hlds__deforest__deforest_goal_4_p_0(Goal3_86, Goal_14, STATE_VARIABLE_PDInfo_110_110, &STATE_VARIABLE_PDInfo_111_111);
  transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_16, STATE_VARIABLE_PDInfo_111_111, STATE_VARIABLE_PDInfo_88);
}

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  transform_hlds__pd_info__pd_info_remove_version_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  transform_hlds__pd_info__pd_info_update_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__deforest__handle_deforestation_9_p_0(
  MR_Word NonLocals_10,
  MR_Word DeforestInfo0_11,
  MR_Word STATE_VARIABLE_RevBeforeGoals_0_84,
  MR_Word * STATE_VARIABLE_RevBeforeGoals_85,
  MR_Word STATE_VARIABLE_AfterGoals_0_86,
  MR_Word * STATE_VARIABLE_AfterGoals_87,
  MR_Word * Optimized_14,
  MR_Word STATE_VARIABLE_PDInfo_0_88,
  MR_Word * STATE_VARIABLE_PDInfo_89)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_16;
  MR_Word InstMap0_17;
  MR_Word CreatedVersions0_18;
  MR_Integer Depth0_19;
  MR_Word DeforestInfo_21;
  MR_Word BeforeIrrelevant_22;
  MR_Word AfterIrrelevant_23;
  MR_Word ConjNonLocals_24;
  MR_Word CurrPredProcId_25;
  MR_Word Parents0_26;
  MR_Integer CostDelta0_27;
  MR_Integer SizeDelta0_28;
  MR_Word EarlierGoal_29;
  MR_Word BetweenGoals_31;
  MR_Word LaterGoal_32;
  MR_Word DeforestBranches_34;
  MR_Word ShouldOptimize_35;
  MR_Word Optimized0_36;
  MR_Word Goals_37;
  MR_Word STATE_VARIABLE_PDInfo_98_98;
  MR_Word STATE_VARIABLE_PDInfo_99_99;
  MR_Word STATE_VARIABLE_PDInfo_112_112;
  MR_Word STATE_VARIABLE_PDInfo_163_163;
  MR_Word STATE_VARIABLE_PDInfo_164_164;
  MR_Word STATE_VARIABLE_PDInfo_168_168;
  MR_Word Var_93;
  MR_Word Var_95;
  MR_Box conv1_STATE_VARIABLE_PDInfo_98_98;
  MR_Word Var_183;
  MR_Word Var_185;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_88, &ModuleInfo_16);
  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_88, &InstMap0_17);
  transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(STATE_VARIABLE_PDInfo_0_88, &CreatedVersions0_18);
  transform_hlds__pd_info__pd_info_get_depth_2_p_0(STATE_VARIABLE_PDInfo_0_88, &Depth0_19);
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Depth0_19));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_95));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_88, (MR_String) "handle_deforestation", (MR_String) "checking for deforestation at depth %i\n", Var_93);
  transform_hlds__deforest__reorder_conj_5_p_0(DeforestInfo0_11, &DeforestInfo_21, &BeforeIrrelevant_22, &AfterIrrelevant_23, STATE_VARIABLE_PDInfo_0_88);
  transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(NonLocals_10, DeforestInfo_21, STATE_VARIABLE_RevBeforeGoals_0_84, BeforeIrrelevant_22, AfterIrrelevant_23, STATE_VARIABLE_AfterGoals_0_86, &ConjNonLocals_24);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0), (MR_Word) (&transform_hlds__deforest_scalar_common_2[11]), BeforeIrrelevant_22, ((MR_Box) (STATE_VARIABLE_PDInfo_0_88)), &conv1_STATE_VARIABLE_PDInfo_98_98);
  STATE_VARIABLE_PDInfo_98_98 = ((MR_Word) (conv1_STATE_VARIABLE_PDInfo_98_98));
  transform_hlds__pd_info__pd_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_PDInfo_98_98, &CurrPredProcId_25);
  transform_hlds__pd_info__pd_info_get_parents_2_p_0(STATE_VARIABLE_PDInfo_98_98, &Parents0_26);
  transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(STATE_VARIABLE_PDInfo_98_98, &CostDelta0_27);
  transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(STATE_VARIABLE_PDInfo_98_98, &SizeDelta0_28);
  EarlierGoal_29 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_21, (MR_Integer) 0))));
  BetweenGoals_31 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_21, (MR_Integer) 2))));
  LaterGoal_32 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_21, (MR_Integer) 3))));
  DeforestBranches_34 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_21, (MR_Integer) 5))));
  transform_hlds__deforest__should_try_deforestation_4_p_0(DeforestInfo_21, &ShouldOptimize_35, STATE_VARIABLE_PDInfo_98_98, &STATE_VARIABLE_PDInfo_99_99);
  switch (ShouldOptimize_35) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Optimized0_36 = (MR_Integer) 0;
        Goals_37 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_PDInfo_112_112 = STATE_VARIABLE_PDInfo_99_99;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredId1_38;
        MR_Word PredId2_45;
        MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_29, (MR_Integer) 0))));
        MR_Word Var_101;

        succeeded = ((MR_tag((MR_Word) Var_100)) == (MR_Integer) 2);
        if (succeeded)
        {
          PredId1_38 = ((MR_Word) ((MR_hl_field(2, Var_100, (MR_Integer) 0))));
          Var_101 = ((MR_Word) ((MR_hl_field(0, LaterGoal_32, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_101)) == (MR_Integer) 2);
          if (succeeded)
            PredId2_45 = ((MR_Word) ((MR_hl_field(2, Var_101, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_String PredName1_52;
          MR_String PredName2_53;
          MR_Word MaybeGoal_54;
          MR_Word Var_111;
          MR_Word Var_105;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_Word Var_109;

          PredName1_52 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_16, PredId1_38);
          PredName2_53 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_16, PredId2_45);
          {
            Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_107, 1) = ((MR_Box) (PredName1_52));
          }
          {
            Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_109, 1) = ((MR_Box) (PredName2_53));
          }
          {
            Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
            MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_107));
            MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_108));
          }
          transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_99_99, (MR_String) "handle_deforestation", (MR_String) "deforesting calls to %s and %s\n", Var_105);
          {
            Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_111, 0) = ((MR_Box) (LaterGoal_32));
          }
          transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(EarlierGoal_29, BetweenGoals_31, Var_111, &MaybeGoal_54, STATE_VARIABLE_PDInfo_99_99, &STATE_VARIABLE_PDInfo_112_112);
          if ((MaybeGoal_54 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            Optimized0_36 = (MR_Integer) 0;
            Goals_37 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Goal_55 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_54, (MR_Integer) 0))));

            Optimized0_36 = (MR_Integer) 1;
            {
              Goals_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Goals_37, 0) = ((MR_Box) (Goal_55));
              MR_hl_field(1, Goals_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        else
        {
          MR_Word PredId_58;
          MR_Word PredProcId_65;
          MR_Word EarlierGoalExpr_56 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_29, (MR_Integer) 0))));
          MR_Integer ProcId_59;
          MR_Word Var_114;
          MR_Word TypeCtorInfo_196_196;

          succeeded = hlds__goal_util__goal_is_branched_1_p_0(EarlierGoalExpr_56);
          if (succeeded)
          {
            Var_114 = ((MR_Word) ((MR_hl_field(0, LaterGoal_32, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_114)) == (MR_Integer) 2);
            if (succeeded)
            {
              PredId_58 = ((MR_Word) ((MR_hl_field(2, Var_114, (MR_Integer) 0))));
              ProcId_59 = ((MR_Integer) ((MR_hl_field(2, Var_114, (MR_Integer) 1))));
              {
                PredProcId_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredProcId_65, 0) = ((MR_Box) (PredId_58));
                MR_hl_field(0, PredProcId_65, 1) = ((MR_Box) (ProcId_59));
              }
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_65, CurrPredProcId_25);
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeCtorInfo_196_196 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
                succeeded = mercury__set__member_2_p_0(TypeCtorInfo_196_196, ((MR_Box) (PredProcId_65)), Parents0_26);
                succeeded = !(succeeded);
              }
            }
          }
          if (succeeded)
          {
            MR_String CurrPredName_66;
            MR_Word Parents_67;
            MR_Word STATE_VARIABLE_PDInfo_123_123;
            MR_Word Goal_188;
            MR_Word Var_118;
            MR_Word Var_120;

            CurrPredName_66 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_16, PredId_58);
            {
              Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_120, 1) = ((MR_Box) (CurrPredName_66));
            }
            {
              Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_120));
              MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_99_99, (MR_String) "handle_deforestation", (MR_String) "pushing call to %s into goal\n", Var_118);
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_65)), Parents0_26, &Parents_67);
            transform_hlds__pd_info__pd_info_set_parents_3_p_0(Parents_67, STATE_VARIABLE_PDInfo_99_99, &STATE_VARIABLE_PDInfo_123_123);
            transform_hlds__deforest__push_goal_into_goal_8_p_0(ConjNonLocals_24, DeforestBranches_34, EarlierGoal_29, BetweenGoals_31, LaterGoal_32, &Goal_188, STATE_VARIABLE_PDInfo_123_123, &STATE_VARIABLE_PDInfo_112_112);
            {
              Goals_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Goals_37, 0) = ((MR_Box) (Goal_188));
              MR_hl_field(1, Goals_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Optimized0_36 = (MR_Integer) 1;
          }
          else
          {
            MR_Word LaterGoalExpr_69 = ((MR_Word) ((MR_hl_field(0, LaterGoal_32, (MR_Integer) 0))));
            MR_Word EarlierGoalExpr_189 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_29, (MR_Integer) 0))));

            succeeded = hlds__goal_util__goal_is_branched_1_p_0(EarlierGoalExpr_189);
            if (succeeded)
              succeeded = hlds__goal_util__goal_is_branched_1_p_0(LaterGoalExpr_69);
            if (succeeded)
            {
              MR_Integer ConjSize1_75;
              MR_Integer ConjSize2_76;
              MR_Integer NewSize_77;
              MR_Integer SizeDiff_78;
              MR_Word STATE_VARIABLE_PDInfo_149_149;
              MR_Word Var_155;
              MR_Integer Var_156;
              MR_Word Goal_190;

              transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_99_99, (MR_String) "handle_deforestation", (MR_String) "pushing goal into goal\n", (MR_Word) ((MR_Unsigned) 0U));
              transform_hlds__pd_debug__pd_debug_output_goal_6_p_0(STATE_VARIABLE_PDInfo_99_99, (MR_String) "handle_deforestation", (MR_String) "first goal being pushed into", EarlierGoal_29);
              if ((BetweenGoals_31 == (MR_Word) ((MR_Unsigned) 0U)))
                transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_99_99, (MR_String) "handle_deforestation", (MR_String) "no goal between first/second goals\n", (MR_Word) ((MR_Unsigned) 0U));
              else
              {
                MR_Word Var_203 = ((MR_Word) ((MR_hl_field(1, BetweenGoals_31, (MR_Integer) 1))));
                MR_Word Var_204 = ((MR_Word) ((MR_hl_field(1, BetweenGoals_31, (MR_Integer) 0))));

                if ((Var_203 == (MR_Word) ((MR_Unsigned) 0U)))
                  transform_hlds__pd_debug__pd_debug_output_goal_6_p_0(STATE_VARIABLE_PDInfo_99_99, (MR_String) "handle_deforestation", (MR_String) "one goal between first/second goals", Var_204);
                else
                  transform_hlds__pd_debug__pd_debug_output_goals_6_p_0(STATE_VARIABLE_PDInfo_99_99, (MR_String) "handle_deforestation", (MR_String) "goals beteween first/second goals", BetweenGoals_31);
              }
              transform_hlds__pd_debug__pd_debug_output_goal_6_p_0(STATE_VARIABLE_PDInfo_99_99, (MR_String) "handle_deforestation", (MR_String) "second goal being pushed", LaterGoal_32);
              transform_hlds__deforest__push_goal_into_goal_8_p_0(ConjNonLocals_24, DeforestBranches_34, EarlierGoal_29, BetweenGoals_31, LaterGoal_32, &Goal_190, STATE_VARIABLE_PDInfo_99_99, &STATE_VARIABLE_PDInfo_149_149);
              transform_hlds__pd_debug__pd_debug_output_goal_6_p_0(STATE_VARIABLE_PDInfo_149_149, (MR_String) "handle_deforestation", (MR_String) "result of pushing goal into goal", Goal_190);
              {
                Goals_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Goals_37, 0) = ((MR_Box) (Goal_190));
                MR_hl_field(1, Goals_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_155, 0) = ((MR_Box) (EarlierGoal_29));
                MR_hl_field(1, Var_155, 1) = ((MR_Box) (BetweenGoals_31));
              }
              hlds__goal_util__goals_size_2_p_0(Var_155, &ConjSize1_75);
              hlds__goal_util__goal_size_2_p_0(LaterGoal_32, &ConjSize2_76);
              hlds__goal_util__goal_size_2_p_0(Goal_190, &NewSize_77);
              Var_156 = (MR_Integer) ((MR_Unsigned) NewSize_77 - (MR_Unsigned) ConjSize1_75);
              SizeDiff_78 = (MR_Integer) ((MR_Unsigned) Var_156 - (MR_Unsigned) ConjSize2_76);
              transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(SizeDiff_78, STATE_VARIABLE_PDInfo_149_149, &STATE_VARIABLE_PDInfo_112_112);
              Optimized0_36 = (MR_Integer) 1;
            }
            else
            {
              transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_99_99, (MR_String) "handle_deforestation", (MR_String) "not optimizing\n", (MR_Word) ((MR_Unsigned) 0U));
              Goals_37 = (MR_Word) ((MR_Unsigned) 0U);
              Optimized0_36 = (MR_Integer) 0;
              STATE_VARIABLE_PDInfo_112_112 = STATE_VARIABLE_PDInfo_99_99;
            }
          }
        }
      }
      break;
  }
  *Optimized_14 = transform_hlds__deforest__is_improvement_worth_while_4_f_0(STATE_VARIABLE_PDInfo_112_112, Optimized0_36, CostDelta0_27, SizeDelta0_28);
  transform_hlds__pd_info__pd_info_set_depth_3_p_0(Depth0_19, STATE_VARIABLE_PDInfo_112_112, &STATE_VARIABLE_PDInfo_163_163);
  transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_PDInfo_163_163, &STATE_VARIABLE_PDInfo_164_164);
  switch (*Optimized_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CreatedVersions_79;
        MR_Word NewVersions0_80;
        MR_Word NewVersions_81;
        MR_Word STATE_VARIABLE_PDInfo_165_165;
        MR_Word STATE_VARIABLE_PDInfo_166_166;
        MR_Box conv3_STATE_VARIABLE_PDInfo_168_168;

        transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(CostDelta0_27, STATE_VARIABLE_PDInfo_164_164, &STATE_VARIABLE_PDInfo_165_165);
        transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(SizeDelta0_28, STATE_VARIABLE_PDInfo_165_165, &STATE_VARIABLE_PDInfo_166_166);
        transform_hlds__pd_info__pd_info_get_created_versions_2_p_0(STATE_VARIABLE_PDInfo_166_166, &CreatedVersions_79);
        mercury__set__difference_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CreatedVersions_79, CreatedVersions0_18, &NewVersions0_80);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), NewVersions0_80, &NewVersions_81);
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0), (MR_Word) (&transform_hlds__deforest_scalar_common_2[12]), NewVersions_81, ((MR_Box) (STATE_VARIABLE_PDInfo_166_166)), &conv3_STATE_VARIABLE_PDInfo_168_168);
        STATE_VARIABLE_PDInfo_168_168 = ((MR_Word) (conv3_STATE_VARIABLE_PDInfo_168_168));
        *STATE_VARIABLE_AfterGoals_87 = STATE_VARIABLE_AfterGoals_0_86;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GoalsToProcess_82;
        MR_Word GoalsAndInfo_83;
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_Word STATE_VARIABLE_PDInfo_173_173;
        MR_Word STATE_VARIABLE_PDInfo_175_175;
        MR_Word STATE_VARIABLE_PDInfo_177_177;

        {
          Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_171, 0) = ((MR_Box) (AfterIrrelevant_23));
          MR_hl_field(1, Var_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_170, 0) = ((MR_Box) (Goals_37));
          MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_171));
        }
        {
          Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_169, 0) = ((MR_Box) (BeforeIrrelevant_22));
          MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_170));
        }
        mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_169, &GoalsToProcess_82);
        transform_hlds__deforest__compute_goal_infos_4_p_0(GoalsToProcess_82, &GoalsAndInfo_83, STATE_VARIABLE_PDInfo_164_164, &STATE_VARIABLE_PDInfo_173_173);
        mercury__list__append_3_p_1((MR_Word) (&transform_hlds__deforest_scalar_common_2[1]), GoalsAndInfo_83, STATE_VARIABLE_AfterGoals_0_86, STATE_VARIABLE_AfterGoals_87);
        transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_PDInfo_173_173, &STATE_VARIABLE_PDInfo_175_175);
        transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, STATE_VARIABLE_PDInfo_175_175, &STATE_VARIABLE_PDInfo_177_177);
        transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, STATE_VARIABLE_PDInfo_177_177, &STATE_VARIABLE_PDInfo_168_168);
      }
      break;
  }
  {
    Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_185, 0) = ((MR_Box) (Depth0_19));
  }
  {
    Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_183, 0) = ((MR_Box) (Var_185));
    MR_hl_field(1, Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_168_168, (MR_String) "handle_deforestation", (MR_String) "finished deforestation at depth %i\n", Var_183);
  transform_hlds__pd_info__pd_info_set_parents_3_p_0(Parents0_26, STATE_VARIABLE_PDInfo_168_168, STATE_VARIABLE_PDInfo_89);
  *STATE_VARIABLE_RevBeforeGoals_85 = STATE_VARIABLE_RevBeforeGoals_0_84;
}

static void MR_CALL 
transform_hlds__deforest__deforest_cases_5_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_PDInfo_0_4,
  MR_Word * STATE_VARIABLE_PDInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PDInfo_5 = STATE_VARIABLE_PDInfo_0_4;
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_13;
    MR_Word Cases_14;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_11, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_11, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_11, (MR_Integer) 2))));
    MR_Word InstMap0_19;
    MR_Word Goal_20;
    MR_Word STATE_VARIABLE_PDInfo_23_23;
    MR_Word STATE_VARIABLE_PDInfo_24_24;
    MR_Word STATE_VARIABLE_PDInfo_25_25;
    MR_Word GoalExpr0_26;
    MR_Word GoalInfo0_27;
    MR_Word GoalExpr_28;
    MR_Word GoalInfo_29;

    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_4, &InstMap0_19);
    transform_hlds__pd_info__pd_info_bind_var_to_functors_5_p_0(Var_1, MainConsId_16, OtherConsIds_17, STATE_VARIABLE_PDInfo_0_4, &STATE_VARIABLE_PDInfo_23_23);
    GoalExpr0_26 = ((MR_Word) ((MR_hl_field(0, Goal0_18, (MR_Integer) 0))));
    GoalInfo0_27 = ((MR_Word) ((MR_hl_field(0, Goal0_18, (MR_Integer) 1))));
    transform_hlds__deforest__deforest_goal_expr_6_p_0(GoalExpr0_26, &GoalExpr_28, GoalInfo0_27, &GoalInfo_29, STATE_VARIABLE_PDInfo_23_23, &STATE_VARIABLE_PDInfo_24_24);
    {
      Goal_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_20, 0) = ((MR_Box) (GoalExpr_28));
      MR_hl_field(0, Goal_20, 1) = ((MR_Box) (GoalInfo_29));
    }
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_13, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_13, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_13, 2) = ((MR_Box) (Goal_20));
    }
    transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_19, STATE_VARIABLE_PDInfo_24_24, &STATE_VARIABLE_PDInfo_25_25);
    transform_hlds__deforest__deforest_cases_5_p_0(Var_1, Cases0_12, &Cases_14, STATE_VARIABLE_PDInfo_25_25, STATE_VARIABLE_PDInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_14));
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_PDInfo_0_3,
  MR_Word * STATE_VARIABLE_PDInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PDInfo_4 = STATE_VARIABLE_PDInfo_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word InstMap0_13;
    MR_Word STATE_VARIABLE_PDInfo_16_16;
    MR_Word STATE_VARIABLE_PDInfo_17_17;
    MR_Word GoalExpr0_18;
    MR_Word GoalInfo0_19;
    MR_Word GoalExpr_20;
    MR_Word GoalInfo_21;

    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_3, &InstMap0_13);
    GoalExpr0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 0))));
    GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 1))));
    transform_hlds__deforest__deforest_goal_expr_6_p_0(GoalExpr0_18, &GoalExpr_20, GoalInfo0_19, &GoalInfo_21, STATE_VARIABLE_PDInfo_0_3, &STATE_VARIABLE_PDInfo_16_16);
    {
      Goal_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_10, 0) = ((MR_Box) (GoalExpr_20));
      MR_hl_field(0, Goal_10, 1) = ((MR_Box) (GoalInfo_21));
    }
    transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_13, STATE_VARIABLE_PDInfo_16_16, &STATE_VARIABLE_PDInfo_17_17);
    transform_hlds__deforest__deforest_disj_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_PDInfo_17_17, STATE_VARIABLE_PDInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_goal_expr_6_p_0(
  MR_Word GoalExpr0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_61,
  MR_Word * STATE_VARIABLE_GoalInfo_62,
  MR_Word STATE_VARIABLE_PDInfo_0_63,
  MR_Word * STATE_VARIABLE_PDInfo_64)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_32 = (MR_Word) ((MR_Word) (GoalExpr0_7));
        MR_Word SubGoal_33;

        transform_hlds__deforest__deforest_goal_4_p_0(SubGoal0_32, &SubGoal_33, STATE_VARIABLE_PDInfo_0_63, STATE_VARIABLE_PDInfo_64);
        *GoalExpr_8 = (MR_Word) ((MR_Word) (SubGoal_33));
        *STATE_VARIABLE_GoalInfo_62 = STATE_VARIABLE_GoalInfo_0_61;
      }
      break;
    case (MR_Integer) 1:
      {
        *GoalExpr_8 = GoalExpr0_7;
        *STATE_VARIABLE_GoalInfo_62 = STATE_VARIABLE_GoalInfo_0_61;
        *STATE_VARIABLE_PDInfo_64 = STATE_VARIABLE_PDInfo_0_63;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_37 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 0))));
        MR_Integer ProcId_38 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 1))));
        MR_Word Args_39 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 2))));
        MR_Word BuiltinState_40 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word Name_42 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, (MR_Integer) 5))));
        MR_Word Var_91;
        MR_Word Var_92;

        {
          Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_91, 0) = ((MR_Box) (GoalExpr0_7));
          MR_hl_field(0, Var_91, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_61));
        }
        transform_hlds__deforest__deforest_call_9_p_0(PredId_37, ProcId_38, Args_39, Name_42, BuiltinState_40, Var_91, &Var_92, STATE_VARIABLE_PDInfo_0_63, STATE_VARIABLE_PDInfo_64);
        *GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 0))));
        *STATE_VARIABLE_GoalInfo_62 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 1))));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *GoalExpr_8 = GoalExpr0_7;
            *STATE_VARIABLE_GoalInfo_62 = STATE_VARIABLE_GoalInfo_0_61;
            *STATE_VARIABLE_PDInfo_64 = STATE_VARIABLE_PDInfo_0_63;
          }
          break;
        case (MR_Integer) 1:
          {
            *GoalExpr_8 = GoalExpr0_7;
            *STATE_VARIABLE_GoalInfo_62 = STATE_VARIABLE_GoalInfo_0_61;
            *STATE_VARIABLE_PDInfo_64 = STATE_VARIABLE_PDInfo_0_63;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_11 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals_13;
            MR_Word STATE_VARIABLE_Goals_65_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));

            switch (ConjType_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_PDInfo_64 = STATE_VARIABLE_PDInfo_0_63;
                  Goals_13 = STATE_VARIABLE_Goals_65_65;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word InstMap0_14;
                  MR_Word NonLocals_15;
                  MR_Word ModuleInfo_16;
                  MR_Word Globals_17;
                  MR_Word OptTuple_18;
                  MR_Word Deforest_19;
                  MR_Word PropConstraints_20;
                  MR_Word STATE_VARIABLE_Goals_67_67;
                  MR_Word STATE_VARIABLE_PDInfo_68_68;
                  MR_Word STATE_VARIABLE_PDInfo_69_69;
                  MR_Word STATE_VARIABLE_Goals_74_74;
                  MR_Word STATE_VARIABLE_PDInfo_75_75;
                  MR_Word STATE_VARIABLE_PDInfo_76_76;
                  MR_Word STATE_VARIABLE_PDInfo_79_79;

                  transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_63, &InstMap0_14);
                  transform_hlds__deforest__partially_evaluate_conj_goals_5_p_0(STATE_VARIABLE_Goals_65_65, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Goals_67_67, STATE_VARIABLE_PDInfo_0_63, &STATE_VARIABLE_PDInfo_68_68);
                  transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_14, STATE_VARIABLE_PDInfo_68_68, &STATE_VARIABLE_PDInfo_69_69);
                  NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_61);
                  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_69_69, &ModuleInfo_16);
                  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_17);
                  libs__globals__get_opt_tuple_2_p_0(Globals_17, &OptTuple_18);
                  PropConstraints_20 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_18, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
                  Deforest_19 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_18, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
                  switch (Deforest_19) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word STATE_VARIABLE_Goals_70_70;
                        MR_Word STATE_VARIABLE_PDInfo_71_71;
                        MR_Word STATE_VARIABLE_PDInfo_72_72;

                        transform_hlds__deforest__compute_goal_infos_4_p_0(STATE_VARIABLE_Goals_67_67, &STATE_VARIABLE_Goals_70_70, STATE_VARIABLE_PDInfo_69_69, &STATE_VARIABLE_PDInfo_71_71);
                        transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_14, STATE_VARIABLE_PDInfo_71_71, &STATE_VARIABLE_PDInfo_72_72);
                        transform_hlds__deforest__deforest_conj_6_p_0(STATE_VARIABLE_Goals_70_70, NonLocals_15, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Goals_74_74, STATE_VARIABLE_PDInfo_72_72, &STATE_VARIABLE_PDInfo_75_75);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_PDInfo_75_75 = STATE_VARIABLE_PDInfo_69_69;
                        STATE_VARIABLE_Goals_74_74 = STATE_VARIABLE_Goals_67_67;
                      }
                      break;
                  }
                  transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_14, STATE_VARIABLE_PDInfo_75_75, &STATE_VARIABLE_PDInfo_76_76);
                  switch (PropConstraints_20) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_PDInfo_79_79 = STATE_VARIABLE_PDInfo_76_76;
                        Goals_13 = STATE_VARIABLE_Goals_74_74;
                      }
                      break;
                    case (MR_Integer) 0:
                      transform_hlds__deforest__propagate_conj_constraints_6_p_0(STATE_VARIABLE_Goals_74_74, NonLocals_15, (MR_Word) ((MR_Unsigned) 0U), &Goals_13, STATE_VARIABLE_PDInfo_76_76, &STATE_VARIABLE_PDInfo_79_79);
                      break;
                  }
                  transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_14, STATE_VARIABLE_PDInfo_79_79, STATE_VARIABLE_PDInfo_64);
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_11));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_13));
            }
            *STATE_VARIABLE_GoalInfo_62 = STATE_VARIABLE_GoalInfo_0_61;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_97 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Goals_98;

            transform_hlds__deforest__deforest_disj_4_p_0(Goals0_97, &Goals_98, STATE_VARIABLE_PDInfo_0_63, STATE_VARIABLE_PDInfo_64);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Goals_98));
            }
            *STATE_VARIABLE_GoalInfo_62 = STATE_VARIABLE_GoalInfo_0_61;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word CanFail_29 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Cases_31;

            transform_hlds__deforest__deforest_cases_5_p_0(Var_28, Cases0_30, &Cases_31, STATE_VARIABLE_PDInfo_0_63, STATE_VARIABLE_PDInfo_64);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_28));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_29));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_31));
            }
            *STATE_VARIABLE_GoalInfo_62 = STATE_VARIABLE_GoalInfo_0_61;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word SubGoal_101;
            MR_Word FGT_36;

            succeeded = ((((MR_tag((MR_Word) Reason_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_34, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_36 = ((MR_Unsigned) ((MR_hl_field(3, Reason_34, (MR_Integer) 2))) & (MR_Integer) 3);
              switch (FGT_36) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
            {
              SubGoal_101 = SubGoal0_100;
              *STATE_VARIABLE_PDInfo_64 = STATE_VARIABLE_PDInfo_0_63;
            }
            else
              transform_hlds__deforest__deforest_goal_4_p_0(SubGoal0_100, &SubGoal_101, STATE_VARIABLE_PDInfo_0_63, STATE_VARIABLE_PDInfo_64);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_34));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_101));
            }
            *STATE_VARIABLE_GoalInfo_62 = STATE_VARIABLE_GoalInfo_0_61;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Cond0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Then0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Else0_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 4))));
            MR_Word Cond_25;
            MR_Word Then_26;
            MR_Word Else_27;
            MR_Word STATE_VARIABLE_PDInfo_82_82;
            MR_Word STATE_VARIABLE_PDInfo_83_83;
            MR_Word STATE_VARIABLE_PDInfo_84_84;
            MR_Word STATE_VARIABLE_PDInfo_85_85;
            MR_Word STATE_VARIABLE_PDInfo_86_86;
            MR_Word InstMap0_99;

            transform_hlds__pd_info__pd_info_get_instmap_2_p_0(STATE_VARIABLE_PDInfo_0_63, &InstMap0_99);
            transform_hlds__deforest__deforest_goal_4_p_0(Cond0_22, &Cond_25, STATE_VARIABLE_PDInfo_0_63, &STATE_VARIABLE_PDInfo_82_82);
            transform_hlds__pd_info__pd_info_update_goal_3_p_0(Cond_25, STATE_VARIABLE_PDInfo_82_82, &STATE_VARIABLE_PDInfo_83_83);
            transform_hlds__deforest__deforest_goal_4_p_0(Then0_23, &Then_26, STATE_VARIABLE_PDInfo_83_83, &STATE_VARIABLE_PDInfo_84_84);
            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_99, STATE_VARIABLE_PDInfo_84_84, &STATE_VARIABLE_PDInfo_85_85);
            transform_hlds__deforest__deforest_goal_4_p_0(Else0_24, &Else_27, STATE_VARIABLE_PDInfo_85_85, &STATE_VARIABLE_PDInfo_86_86);
            transform_hlds__pd_info__pd_info_set_instmap_3_p_0(InstMap0_99, STATE_VARIABLE_PDInfo_86_86, STATE_VARIABLE_PDInfo_64);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_21));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_25));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_26));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_27));
            }
            *STATE_VARIABLE_GoalInfo_62 = STATE_VARIABLE_GoalInfo_0_61;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.deforest.deforest_goal_expr\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__deforest__deforest_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_PDInfo_0_12,
  MR_Word * STATE_VARIABLE_PDInfo_13)
{
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word GoalExpr_10;
  MR_Word GoalInfo_11;

  transform_hlds__deforest__deforest_goal_expr_6_p_0(GoalExpr0_8, &GoalExpr_10, GoalInfo0_9, &GoalInfo_11, STATE_VARIABLE_PDInfo_0_12, STATE_VARIABLE_PDInfo_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____list__list_1_1(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box ArgX1_3;
  MR_Word ArgX2_5;
  MR_Word ArgY2_6;

  if (succeeded)
  {
    ArgX1_3 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)) = ArgX1_3;
    ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_11, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest__unfold_call_10_p_0(
  MR_Word CheckImprovement_11,
  MR_Word CheckVars_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word Args_15,
  MR_Word Goal0_16,
  MR_Word * Goal_17,
  MR_Word * Optimized_18,
  MR_Word STATE_VARIABLE_PDInfo_0_74,
  MR_Word * STATE_VARIABLE_PDInfo_75)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_20;
  MR_Word Globals_21;
  MR_Word OptTuple_22;
  MR_Integer VarsThreshold_23;
  MR_Word ProcInfo0_24;
  MR_Word VarTable0_25;
  MR_Integer NumVars_26;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_74, &ModuleInfo_20);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_20, &Globals_21);
  libs__globals__get_opt_tuple_2_p_0(Globals_21, &OptTuple_22);
  VarsThreshold_23 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 22))));
  transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(STATE_VARIABLE_PDInfo_0_74, &ProcInfo0_24);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_24, &VarTable0_25);
  parse_tree__var_table__var_table_count_2_p_0(VarTable0_25, &NumVars_26);
  succeeded = (CheckVars_12 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (VarsThreshold_23 == (MR_Integer) -1);
    if (!(succeeded))
      succeeded = (NumVars_26 < VarsThreshold_23);
  }
  if (succeeded)
  {
    MR_Word PredInfo0_27;
    MR_Word CalledPredInfo_28;
    MR_Word CalledProcInfo_29;
    MR_Word TypeVarSet0_30;
    MR_Word UnivQVars_31;
    MR_Word RttiVarMaps0_32;
    MR_Word TypeVarSet_33;
    MR_Word VarTable_34;
    MR_Word RttiVarMaps_35;
    MR_Word Goal1_36;
    MR_Word PredInfo_37;
    MR_Word CalledHasParallelConj_38;
    MR_Word ProcInfo1_39;
    MR_Word ProcInfo2_40;
    MR_Word ProcInfo_41;
    MR_Integer OriginalCost_42;
    MR_Integer CostDelta0_43;
    MR_Integer SizeDelta0_44;
    MR_Word Changed0_45;
    MR_Word GoalInfo1_47;
    MR_Word NonLocals1_48;
    MR_Word NonLocals_49;
    MR_Word Goal2_50;
    MR_Word ArgLives_52;
    MR_Word LiveVars0_53;
    MR_Word LiveVars1_54;
    MR_Word LiveVars_55;
    MR_Word Goal3_56;
    MR_Word Errors_57;
    MR_Word Optimized0_58;
    MR_Word SimplifyTasks_61;
    MR_Word Goal4_62;
    MR_Integer CostDelta1_63;
    MR_Integer CostDelta_64;
    MR_Integer GoalSize_65;
    MR_Integer SizeDelta_66;
    MR_Word STATE_VARIABLE_PDInfo_77_77;
    MR_Word STATE_VARIABLE_PDInfo_78_78;
    MR_Word STATE_VARIABLE_PDInfo_79_79;
    MR_Word STATE_VARIABLE_PDInfo_85_85;
    MR_Word STATE_VARIABLE_PDInfo_93_93;
    MR_Integer Var_94;

    transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(STATE_VARIABLE_PDInfo_0_74, &PredInfo0_27);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_20, PredId_13, ProcId_14, &CalledPredInfo_28, &CalledProcInfo_29);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_27, &TypeVarSet0_30);
    hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(PredInfo0_27, &UnivQVars_31);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_24, &RttiVarMaps0_32);
    transform_hlds__inlining__do_inline_call_12_p_0(ModuleInfo_20, UnivQVars_31, Args_15, CalledPredInfo_28, CalledProcInfo_29, TypeVarSet0_30, &TypeVarSet_33, VarTable0_25, &VarTable_34, RttiVarMaps0_32, &RttiVarMaps_35, &Goal1_36);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_33, PredInfo0_27, &PredInfo_37);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(CalledProcInfo_29, &CalledHasParallelConj_38);
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_34, ProcInfo0_24, &ProcInfo1_39);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_35, ProcInfo1_39, &ProcInfo2_40);
    switch (CalledHasParallelConj_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ProcInfo_41 = ProcInfo2_40;
        break;
      case (MR_Integer) 0:
        hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, ProcInfo2_40, &ProcInfo_41);
        break;
    }
    transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(PredInfo_37, STATE_VARIABLE_PDInfo_0_74, &STATE_VARIABLE_PDInfo_77_77);
    transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(ProcInfo_41, STATE_VARIABLE_PDInfo_77_77, &STATE_VARIABLE_PDInfo_78_78);
    transform_hlds__pd_cost__goal_cost_2_p_0(Goal1_36, &OriginalCost_42);
    transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(STATE_VARIABLE_PDInfo_78_78, &CostDelta0_43);
    transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(STATE_VARIABLE_PDInfo_78_78, &SizeDelta0_44);
    transform_hlds__pd_info__pd_info_get_changed_2_p_0(STATE_VARIABLE_PDInfo_78_78, &Changed0_45);
    GoalInfo1_47 = ((MR_Word) ((MR_hl_field(0, Goal1_36, (MR_Integer) 1))));
    NonLocals1_48 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo1_47);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Args_15, &NonLocals_49);
    succeeded = parse_tree__set_of_var__equal_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals1_48, NonLocals_49);
    if (succeeded)
    {
      Goal2_50 = Goal1_36;
      STATE_VARIABLE_PDInfo_79_79 = STATE_VARIABLE_PDInfo_78_78;
    }
    else
      transform_hlds__pd_util__pd_requantify_goal_5_p_0(NonLocals_49, Goal1_36, &Goal2_50, STATE_VARIABLE_PDInfo_78_78, &STATE_VARIABLE_PDInfo_79_79);
    transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_79_79, (MR_String) "unfold_call", (MR_String) "running unique modes\n", (MR_Word) ((MR_Unsigned) 0U));
    hlds__hlds_proc_util__proc_info_arglives_3_p_0(ModuleInfo_20, CalledProcInfo_29, &ArgLives_52);
    check_hlds__modecheck_util__get_live_vars_3_p_0(Args_15, ArgLives_52, &LiveVars0_53);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVars0_53, &LiveVars1_54);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_49, LiveVars1_54, &LiveVars_55);
    transform_hlds__pd_util__unique_modecheck_goal_live_vars_6_p_0(LiveVars_55, Goal2_50, &Goal3_56, &Errors_57, STATE_VARIABLE_PDInfo_79_79, &STATE_VARIABLE_PDInfo_85_85);
    if ((Errors_57 == (MR_Word) ((MR_Unsigned) 0U)))
      Optimized0_58 = (MR_Integer) 1;
    else
      Optimized0_58 = (MR_Integer) 0;
    transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_85_85, (MR_String) "unfold_call", (MR_String) "running simplify\n", (MR_Word) ((MR_Unsigned) 0U));
    check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(Globals_21, (MR_Integer) 0, &SimplifyTasks_61);
    transform_hlds__pd_util__pd_simplify_goal_6_p_0((MR_String) "unfold_call", SimplifyTasks_61, Goal3_56, &Goal4_62, STATE_VARIABLE_PDInfo_85_85, &STATE_VARIABLE_PDInfo_93_93);
    transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(STATE_VARIABLE_PDInfo_93_93, &CostDelta1_63);
    CostDelta_64 = (MR_Integer) ((MR_Unsigned) CostDelta1_63 - (MR_Unsigned) CostDelta0_43);
    hlds__goal_util__goal_size_2_p_0(Goal4_62, &GoalSize_65);
    Var_94 = transform_hlds__pd_cost__cost_of_call_0_f_0();
    SizeDelta_66 = (MR_Integer) ((MR_Unsigned) GoalSize_65 - (MR_Unsigned) Var_94);
    succeeded = (Optimized0_58 == (MR_Integer) 1);
    if (succeeded)
      switch (CheckImprovement_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          {
            succeeded = transform_hlds__deforest__is_simple_goal_1_p_0(Goal3_56);
            if (succeeded)
              succeeded = MR_TRUE;
            else
              succeeded = transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(GoalSize_65, OriginalCost_42, CostDelta_64);
          }
          break;
      }
    if (succeeded)
    {
      MR_Word GoalInfo0_69;
      MR_Word Det0_70;
      MR_Word GoalInfo_72;
      MR_Word Det_73;
      MR_Word STATE_VARIABLE_PDInfo_104_104;
      MR_Word STATE_VARIABLE_PDInfo_106_106;
      MR_Word Var_98;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;

      *Goal_17 = Goal4_62;
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (CostDelta_64));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) (SizeDelta_66));
      }
      {
        Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
        MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_100));
        MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_101));
      }
      transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_93_93, (MR_String) "unfold_call", (MR_String) "inlined: cost(%i) size(%i)\n", Var_98);
      transform_hlds__pd_info__pd_info_incr_size_delta_3_p_0(SizeDelta_66, STATE_VARIABLE_PDInfo_93_93, &STATE_VARIABLE_PDInfo_104_104);
      transform_hlds__pd_info__pd_info_set_changed_3_p_0((MR_Integer) 1, STATE_VARIABLE_PDInfo_104_104, &STATE_VARIABLE_PDInfo_106_106);
      GoalInfo0_69 = ((MR_Word) ((MR_hl_field(0, Goal0_16, (MR_Integer) 1))));
      Det0_70 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_69);
      GoalInfo_72 = ((MR_Word) ((MR_hl_field(0, *Goal_17, (MR_Integer) 1))));
      Det_73 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_72);
      succeeded = (Det_73 == Det0_70);
      if (succeeded)
        *STATE_VARIABLE_PDInfo_75 = STATE_VARIABLE_PDInfo_106_106;
      else
        transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, STATE_VARIABLE_PDInfo_106_106, STATE_VARIABLE_PDInfo_75);
      *Optimized_18 = (MR_Integer) 1;
    }
    else
    {
      MR_Word STATE_VARIABLE_PDInfo_120_120;
      MR_Word STATE_VARIABLE_PDInfo_121_121;
      MR_Word STATE_VARIABLE_PDInfo_122_122;
      MR_Word STATE_VARIABLE_PDInfo_123_123;
      MR_Word Var_112;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;

      {
        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_116, 0) = ((MR_Box) (CostDelta_64));
      }
      {
        Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_118, 0) = ((MR_Box) (SizeDelta_66));
      }
      {
        Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
        MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_116));
        MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_117));
      }
      transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_93_93, (MR_String) "unfold_call", (MR_String) "not enough improvement - not inlining: cost(%i) size(%i)\n", Var_112);
      transform_hlds__pd_info__pd_info_set_pred_info_3_p_0(PredInfo0_27, STATE_VARIABLE_PDInfo_93_93, &STATE_VARIABLE_PDInfo_120_120);
      transform_hlds__pd_info__pd_info_set_proc_info_3_p_0(ProcInfo0_24, STATE_VARIABLE_PDInfo_120_120, &STATE_VARIABLE_PDInfo_121_121);
      transform_hlds__pd_info__pd_info_set_size_delta_3_p_0(SizeDelta0_44, STATE_VARIABLE_PDInfo_121_121, &STATE_VARIABLE_PDInfo_122_122);
      transform_hlds__pd_info__pd_info_set_cost_delta_3_p_0(CostDelta0_43, STATE_VARIABLE_PDInfo_122_122, &STATE_VARIABLE_PDInfo_123_123);
      transform_hlds__pd_info__pd_info_set_changed_3_p_0(Changed0_45, STATE_VARIABLE_PDInfo_123_123, STATE_VARIABLE_PDInfo_75);
      *Goal_17 = Goal0_16;
      *Optimized_18 = (MR_Integer) 0;
    }
  }
  else
  {
    transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_74, (MR_String) "unfold_call", (MR_String) "too many variables - not inlining\n", (MR_Word) ((MR_Unsigned) 0U));
    *Goal_17 = Goal0_16;
    *Optimized_18 = (MR_Integer) 0;
    *STATE_VARIABLE_PDInfo_75 = STATE_VARIABLE_PDInfo_0_74;
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_109_112_114_111_118_101_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Integer Size_6,
  MR_Integer OriginalCost_7,
  MR_Integer CostDelta_8)
{
  MR_bool succeeded = (Size_6 <= (MR_Integer) 5);

  if (succeeded)
    succeeded = (CostDelta_8 > (MR_Integer) 0);
  else
  {
    MR_Integer PercentChange_9;
    MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) CostDelta_8 * (MR_Unsigned) 100);

    PercentChange_9 = mercury__int__f_47_47_2_f_0(Var_12, OriginalCost_7);
    succeeded = (PercentChange_9 >= (MR_Integer) 5);
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word GoalExpr_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  {
    MR_Word Var_6;

    Var_6 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr_2);
    succeeded = (Var_6 == (MR_Integer) 1);
  }
  if (!(succeeded))
  {
    MR_Word Goal1_4;
    MR_Word GoalList1_5;

    succeeded = ((MR_tag((MR_Word) GoalExpr_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      Goal1_4 = (MR_Word) ((MR_Word) (GoalExpr_2));
      hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal1_4, &GoalList1_5);
      succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0(GoalList1_5);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest__reorder_conj_5_p_0(
  MR_Word DeforestInfo0_6,
  MR_Word * DeforestInfo_7,
  MR_Word * BeforeIrrelevant_8,
  MR_Word * AfterIrrelevant_9,
  MR_Word PDInfo_10)
{
  MR_Word ModuleInfo_11;
  MR_Word Globals_12;
  MR_Word EarlierGoal_14;
  MR_Word EarlierBranchInfo_15;
  MR_Word BetweenGoals0_16;
  MR_Word LaterGoal_17;
  MR_Word LaterBranchInfo_18;
  MR_Word DeforestBranches_19;
  MR_Word FullyStrict_20;
  MR_Word RevBetweenGoals1_21;
  MR_Word RevBeforeIrrelevant_22;
  MR_Word BetweenGoals_23;

  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_10, &ModuleInfo_11);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_12);
  transform_hlds__pd_debug__pd_debug_message_6_p_0(PDInfo_10, (MR_String) "reorder_conj", (MR_String) "starting\n", (MR_Word) ((MR_Unsigned) 0U));
  EarlierGoal_14 = ((MR_Word) ((MR_hl_field(0, DeforestInfo0_6, (MR_Integer) 0))));
  EarlierBranchInfo_15 = ((MR_Word) ((MR_hl_field(0, DeforestInfo0_6, (MR_Integer) 1))));
  BetweenGoals0_16 = ((MR_Word) ((MR_hl_field(0, DeforestInfo0_6, (MR_Integer) 2))));
  LaterGoal_17 = ((MR_Word) ((MR_hl_field(0, DeforestInfo0_6, (MR_Integer) 3))));
  LaterBranchInfo_18 = ((MR_Word) ((MR_hl_field(0, DeforestInfo0_6, (MR_Integer) 4))));
  DeforestBranches_19 = ((MR_Word) ((MR_hl_field(0, DeforestInfo0_6, (MR_Integer) 5))));
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 242, &FullyStrict_20);
  transform_hlds__deforest__move_goals__ho2_9_p_0(ModuleInfo_11, FullyStrict_20, BetweenGoals0_16, (MR_Word) ((MR_Unsigned) 0U), &RevBetweenGoals1_21, EarlierGoal_14, (MR_Word) ((MR_Unsigned) 0U), &RevBeforeIrrelevant_22);
  transform_hlds__deforest__move_goals__ho1_9_p_0(ModuleInfo_11, FullyStrict_20, RevBetweenGoals1_21, (MR_Word) ((MR_Unsigned) 0U), &BetweenGoals_23, LaterGoal_17, (MR_Word) ((MR_Unsigned) 0U), AfterIrrelevant_9);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevBeforeIrrelevant_22, BeforeIrrelevant_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *DeforestInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (EarlierGoal_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (EarlierBranchInfo_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (BetweenGoals_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (LaterGoal_17));
    MR_hl_field(0, base, 4) = ((MR_Box) (LaterBranchInfo_18));
    MR_hl_field(0, base, 5) = ((MR_Box) (DeforestBranches_19));
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_35 = ((MR_Word) ((env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_35));
  transform_hlds__deforest__move_goals__ho2_9_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2, (env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3, (env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__EarlierGoal_35, (env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23);
  (env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
  if ((env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
    transform_hlds__deforest__move_goals__ho2_9_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__conv0_EarlierGoal_35, (env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__Var_32, transform_hlds__deforest__move_goals__ho2_9_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho2_9_p_0(
  MR_Word ModuleInfo_2,
  MR_Word FullyStrict_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_BetweenGoals_0_5,
  MR_Word * STATE_VARIABLE_BetweenGoals_6,
  MR_Word EndGoal_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  struct transform_hlds__deforest__move_goals__ho2_9_p_0_env_0_s env;

  (env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__ModuleInfo_2 = ModuleInfo_2;
  (env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__FullyStrict_3 = FullyStrict_3;
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__9_9 = HeadVar__8_8;
      *STATE_VARIABLE_BetweenGoals_6 = STATE_VARIABLE_BetweenGoals_0_5;
    }
    else
    {
      MR_Word RevBetweenGoals0_24;
      MR_Word STATE_VARIABLE_MovedGoals_33_33;
      MR_Word STATE_VARIABLE_BetweenGoals_34_34;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_BetweenGoals_0_5;
      MR_Word next_value_of_HeadVar__8_8;

      (env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      RevBetweenGoals0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        (env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__Var_32 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (EndGoal_7));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_BetweenGoals_0_5));
      }
      transform_hlds__deforest__move_goals__ho2_9_p_0_4(&env);
      (env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded = !((env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded);
      if ((env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__succeeded)
      {
        {
          STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
          MR_hl_field(1, STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (HeadVar__8_8));
        }
        STATE_VARIABLE_BetweenGoals_34_34 = STATE_VARIABLE_BetweenGoals_0_5;
      }
      else
      {
        {
          STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((env).transform_hlds__deforest__move_goals__ho2_9_p_0_env_0__BetweenGoal_23));
          MR_hl_field(1, STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (STATE_VARIABLE_BetweenGoals_0_5));
        }
        STATE_VARIABLE_MovedGoals_33_33 = HeadVar__8_8;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = RevBetweenGoals0_24;
      next_value_of_STATE_VARIABLE_BetweenGoals_0_5 = STATE_VARIABLE_BetweenGoals_34_34;
      next_value_of_HeadVar__8_8 = STATE_VARIABLE_MovedGoals_33_33;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_BetweenGoals_0_5 = next_value_of_STATE_VARIABLE_BetweenGoals_0_5;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_35 = ((MR_Word) ((env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_35));
  transform_hlds__deforest__move_goals__ho1_9_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = transform_hlds__pd_util__pd_can_reorder_goals_4_p_0((env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2, (env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3, (env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23, (env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__LaterGoal_35);
  (env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
  if ((env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
    transform_hlds__deforest__move_goals__ho1_9_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__conv0_LaterGoal_35, (env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__Var_32, transform_hlds__deforest__move_goals__ho1_9_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__deforest__move_goals__ho1_9_p_0(
  MR_Word ModuleInfo_2,
  MR_Word FullyStrict_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_BetweenGoals_0_5,
  MR_Word * STATE_VARIABLE_BetweenGoals_6,
  MR_Word EndGoal_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  struct transform_hlds__deforest__move_goals__ho1_9_p_0_env_0_s env;

  (env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__ModuleInfo_2 = ModuleInfo_2;
  (env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__FullyStrict_3 = FullyStrict_3;
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__9_9 = HeadVar__8_8;
      *STATE_VARIABLE_BetweenGoals_6 = STATE_VARIABLE_BetweenGoals_0_5;
    }
    else
    {
      MR_Word RevBetweenGoals0_24;
      MR_Word STATE_VARIABLE_MovedGoals_33_33;
      MR_Word STATE_VARIABLE_BetweenGoals_34_34;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_BetweenGoals_0_5;
      MR_Word next_value_of_HeadVar__8_8;

      (env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      RevBetweenGoals0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        (env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__Var_32 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (EndGoal_7));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_BetweenGoals_0_5));
      }
      transform_hlds__deforest__move_goals__ho1_9_p_0_4(&env);
      (env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded = !((env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded);
      if ((env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__succeeded)
      {
        {
          STATE_VARIABLE_MovedGoals_33_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_MovedGoals_33_33, 0) = ((MR_Box) ((env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
          MR_hl_field(1, STATE_VARIABLE_MovedGoals_33_33, 1) = ((MR_Box) (HeadVar__8_8));
        }
        STATE_VARIABLE_BetweenGoals_34_34 = STATE_VARIABLE_BetweenGoals_0_5;
      }
      else
      {
        {
          STATE_VARIABLE_BetweenGoals_34_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_BetweenGoals_34_34, 0) = ((MR_Box) ((env).transform_hlds__deforest__move_goals__ho1_9_p_0_env_0__BetweenGoal_23));
          MR_hl_field(1, STATE_VARIABLE_BetweenGoals_34_34, 1) = ((MR_Box) (STATE_VARIABLE_BetweenGoals_0_5));
        }
        STATE_VARIABLE_MovedGoals_33_33 = HeadVar__8_8;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = RevBetweenGoals0_24;
      next_value_of_STATE_VARIABLE_BetweenGoals_0_5 = STATE_VARIABLE_BetweenGoals_34_34;
      next_value_of_HeadVar__8_8 = STATE_VARIABLE_MovedGoals_33_33;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_BetweenGoals_0_5 = next_value_of_STATE_VARIABLE_BetweenGoals_0_5;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_31;

  transform_hlds__deforest__IntroducedFrom__pred__do_get_sub_conj_nonlocals__1695__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_31);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_31));
}

static void MR_CALL 
transform_hlds__deforest__get_sub_conj_nonlocals_7_p_0(
  MR_Word NonLocals0_8,
  MR_Word DeforestInfo_9,
  MR_Word RevBeforeGoals_10,
  MR_Word BeforeIrrelevant_11,
  MR_Word AfterIrrelevant_12,
  MR_Word AfterGoals0_13,
  MR_Word * SubConjNonLocals_14)
{
  MR_Word EarlierGoal_15 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_9, (MR_Integer) 0))));
  MR_Word BetweenGoals_17 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_9, (MR_Integer) 2))));
  MR_Word LaterGoal_18 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_9, (MR_Integer) 3))));
  MR_Word AfterGoals_21;
  MR_Word Var_22;
  MR_Word LaterGoal_26;
  MR_Word STATE_VARIABLE_NonLocals_32_27;
  MR_Word STATE_VARIABLE_NonLocals_33_28;
  MR_Word STATE_VARIABLE_NonLocals_34_29;
  MR_Word STATE_VARIABLE_NonLocals_35_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word STATE_VARIABLE_SubConjNonLocals_38_33;
  MR_Word STATE_VARIABLE_SubConjNonLocals_39_34;
  MR_Word GoalInfo_39;
  MR_Word GoalNonLocals_40;
  MR_Box conv1_STATE_VARIABLE_NonLocals_32_27;
  MR_Box conv2_STATE_VARIABLE_NonLocals_33_28;
  MR_Box conv3_STATE_VARIABLE_NonLocals_34_29;
  MR_Box conv4_STATE_VARIABLE_NonLocals_35_30;
  MR_Box conv5_STATE_VARIABLE_SubConjNonLocals_38_33;

  mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[3]), AfterGoals0_13, &AfterGoals_21);
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (LaterGoal_18));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[6]), (MR_Word) (&transform_hlds__deforest_scalar_common_2[10]), RevBeforeGoals_10, ((MR_Box) (NonLocals0_8)), &conv1_STATE_VARIABLE_NonLocals_32_27);
  STATE_VARIABLE_NonLocals_32_27 = ((MR_Word) (conv1_STATE_VARIABLE_NonLocals_32_27));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[6]), (MR_Word) (&transform_hlds__deforest_scalar_common_2[10]), BeforeIrrelevant_11, ((MR_Box) (STATE_VARIABLE_NonLocals_32_27)), &conv2_STATE_VARIABLE_NonLocals_33_28);
  STATE_VARIABLE_NonLocals_33_28 = ((MR_Word) (conv2_STATE_VARIABLE_NonLocals_33_28));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[6]), (MR_Word) (&transform_hlds__deforest_scalar_common_2[10]), AfterIrrelevant_12, ((MR_Box) (STATE_VARIABLE_NonLocals_33_28)), &conv3_STATE_VARIABLE_NonLocals_34_29);
  STATE_VARIABLE_NonLocals_34_29 = ((MR_Word) (conv3_STATE_VARIABLE_NonLocals_34_29));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[6]), (MR_Word) (&transform_hlds__deforest_scalar_common_2[10]), AfterGoals_21, ((MR_Box) (STATE_VARIABLE_NonLocals_34_29)), &conv4_STATE_VARIABLE_NonLocals_35_30);
  STATE_VARIABLE_NonLocals_35_30 = ((MR_Word) (conv4_STATE_VARIABLE_NonLocals_35_30));
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (EarlierGoal_15));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (BetweenGoals_17));
  }
  Var_32 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[6]), (MR_Word) (&transform_hlds__deforest_scalar_common_2[10]), Var_31, ((MR_Box) (Var_32)), &conv5_STATE_VARIABLE_SubConjNonLocals_38_33);
  STATE_VARIABLE_SubConjNonLocals_38_33 = ((MR_Word) (conv5_STATE_VARIABLE_SubConjNonLocals_38_33));
  LaterGoal_26 = ((MR_Word) ((MR_hl_field(1, Var_22, (MR_Integer) 0))));
  GoalInfo_39 = ((MR_Word) ((MR_hl_field(0, LaterGoal_26, (MR_Integer) 1))));
  GoalNonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_39);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalNonLocals_40, STATE_VARIABLE_SubConjNonLocals_38_33, &STATE_VARIABLE_SubConjNonLocals_39_34);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_NonLocals_35_30, STATE_VARIABLE_SubConjNonLocals_39_34, SubConjNonLocals_14);
}

static MR_Word MR_CALL 
transform_hlds__deforest__is_improvement_worth_while_4_f_0(
  MR_Word PDInfo_6,
  MR_Word Optimized0_7,
  MR_Integer CostDelta0_8,
  MR_Integer SizeDelta0_9)
{
  MR_bool succeeded;
  MR_Word Optimized_10;
  MR_Integer CostDelta_11;
  MR_Integer SizeDelta_12;
  MR_Integer Improvement_13;
  MR_Integer SizeDifference_14;
  MR_Word ModuleInfo_15;
  MR_Word Globals_16;
  MR_Word OptTuple_17;
  MR_Integer Factor_18;

  transform_hlds__pd_info__pd_info_get_cost_delta_2_p_0(PDInfo_6, &CostDelta_11);
  transform_hlds__pd_info__pd_info_get_size_delta_2_p_0(PDInfo_6, &SizeDelta_12);
  Improvement_13 = (MR_Integer) ((MR_Unsigned) CostDelta_11 - (MR_Unsigned) CostDelta0_8);
  SizeDifference_14 = (MR_Integer) ((MR_Unsigned) SizeDelta_12 - (MR_Unsigned) SizeDelta0_9);
  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_6, &ModuleInfo_15);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_15, &Globals_16);
  libs__globals__get_opt_tuple_2_p_0(Globals_16, &OptTuple_17);
  Factor_18 = ((MR_Integer) ((MR_hl_field(0, OptTuple_17, (MR_Integer) 21))));
  succeeded = (Optimized0_7 == (MR_Integer) 1);
  if (succeeded)
    succeeded = transform_hlds__deforest__check_deforestation_improvement_3_p_0(Factor_18, Improvement_13, SizeDifference_14);
  if (succeeded)
  {
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;

    Optimized_10 = (MR_Integer) 1;
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Improvement_13));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (SizeDifference_14));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
    }
    transform_hlds__pd_debug__pd_debug_message_6_p_0(PDInfo_6, (MR_String) "is_improvement_worth_while", (MR_String) "enough improvement: cost(%i) size(%i)\n", Var_23);
  }
  else
  {
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    Optimized_10 = (MR_Integer) 0;
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Improvement_13));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (SizeDifference_14));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
    }
    transform_hlds__pd_debug__pd_debug_message_6_p_0(PDInfo_6, (MR_String) "is_improvement_worth_while", (MR_String) "not enough improvement: cost(%i) size(%i)\n", Var_32);
  }
  return Optimized_10;
}

static MR_bool MR_CALL 
transform_hlds__deforest__check_deforestation_improvement_3_p_0(
  MR_Integer Factor_4,
  MR_Integer CostDelta_5,
  MR_Integer SizeChange_6)
{
  MR_bool succeeded = (SizeChange_6 <= (MR_Integer) 5);

  if (succeeded)
    succeeded = (CostDelta_5 > (MR_Integer) 0);
  else
  {
    MR_Integer ExpectedCostDelta_7;
    MR_Integer FudgedCostDelta_8;
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Integer Var_14;

    Var_14 = transform_hlds__pd_cost__cost_of_heap_incr_0_f_0();
    Var_12 = (MR_Integer) ((MR_Unsigned) 1000 * (MR_Unsigned) Var_14);
    Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 * (MR_Unsigned) SizeChange_6);
    ExpectedCostDelta_7 = mercury__int__f_47_47_2_f_0(Var_11, (MR_Integer) 3);
    FudgedCostDelta_8 = (MR_Integer) ((MR_Unsigned) CostDelta_5 * (MR_Unsigned) Factor_4);
    succeeded = (FudgedCostDelta_8 >= ExpectedCostDelta_7);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_34;

    (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_35 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_33, (MR_Integer) 1))));
    (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_36 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0((env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoalInfo_35);
    (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_64_64 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_37 = parse_tree__set_of_var__set_to_bitset_1_f_0((env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_64_64, (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_32);
    parse_tree__set_of_var__intersect_3_p_0((env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_64_64, (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueNonLocals_36, (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVarsSet_37, &(env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_38);
    (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__TypeCtorInfo_64_64, (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__UsedOpaqueVars_38);
    if ((env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
      transform_hlds__deforest__should_try_deforestation_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_33 = ((MR_Word) ((env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_33));
  transform_hlds__deforest__should_try_deforestation_4_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word Var_30;
        MR_Word Var_31;

        (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueVars_32 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9, (MR_Integer) 2))));
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__conv0_OpaqueGoal_33, (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10, transform_hlds__deforest__should_try_deforestation_4_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__OpaqueGoal_33 = (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11;
        transform_hlds__deforest__should_try_deforestation_4_p_0_2(env_ptr);
      }
      (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__deforest__should_try_deforestation_4_p_0(
  MR_Word DeforestInfo_5,
  MR_Word * ShouldTry_6,
  MR_Word STATE_VARIABLE_PDInfo_0_44,
  MR_Word * STATE_VARIABLE_PDInfo_45)
{
  struct transform_hlds__deforest__should_try_deforestation_4_p_0_env_0_s env;

  {
    MR_Word EarlierGoal_8 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_5, (MR_Integer) 0))));
    MR_Word UselessVersions_14;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word TypeInfo_62_62;
    MR_Word PredId1_15;
    MR_Integer ProcId1_16;
    MR_Word PredId2_22;
    MR_Integer ProcId2_23;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_21;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_28;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;

    (env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__EarlierBranchInfo_9 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_5, (MR_Integer) 1))));
    (env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__BetweenGoals_10 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_5, (MR_Integer) 2))));
    (env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11 = ((MR_Word) ((MR_hl_field(0, DeforestInfo_5, (MR_Integer) 3))));
    transform_hlds__pd_info__pd_info_get_useless_versions_2_p_0(STATE_VARIABLE_PDInfo_0_44, &UselessVersions_14);
    Var_46 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_8, (MR_Integer) 0))));
    (env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 2);
    if ((env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
    {
      PredId1_15 = ((MR_Word) ((MR_hl_field(2, Var_46, (MR_Integer) 0))));
      ProcId1_16 = ((MR_Integer) ((MR_hl_field(2, Var_46, (MR_Integer) 1))));
      Var_47 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__LaterGoal_11, (MR_Integer) 0))));
      (env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 2);
      if ((env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
      {
        PredId2_22 = ((MR_Word) ((MR_hl_field(2, Var_47, (MR_Integer) 0))));
        ProcId2_23 = ((MR_Integer) ((MR_hl_field(2, Var_47, (MR_Integer) 1))));
        TypeInfo_62_62 = (MR_Word) (&transform_hlds__deforest_scalar_common_2[3]);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (PredId1_15));
          MR_hl_field(0, Var_49, 1) = ((MR_Box) (ProcId1_16));
        }
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (PredId2_22));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (ProcId2_23));
        }
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) (Var_50));
        }
        (env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = mercury__set__member_2_p_0(TypeInfo_62_62, ((MR_Box) (Var_48)), UselessVersions_14);
      }
    }
    if ((env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
      *ShouldTry_6 = (MR_Integer) 0;
    else
    {
      transform_hlds__deforest__should_try_deforestation_4_p_0_4(&env);
      if ((env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
        *ShouldTry_6 = (MR_Integer) 0;
      else
      {
        MR_Word EarlierGoalInfo_40 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_8, (MR_Integer) 1))));
        MR_Word EarlierGoalDetism_41;
        MR_Word EarlierGoalMaxSolns_43;
        MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_8, (MR_Integer) 0))));
        MR_Word Var_39;
        MR_Word Var_42;

        (env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_61, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if ((env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
        {
          EarlierGoalDetism_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(EarlierGoalInfo_40);
          parse_tree__prog_data__determinism_components_3_p_0(EarlierGoalDetism_41, &Var_42, &EarlierGoalMaxSolns_43);
          (env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded = (EarlierGoalMaxSolns_43 != (MR_Integer) 3);
        }
        if ((env).transform_hlds__deforest__should_try_deforestation_4_p_0_env_0__succeeded)
          *ShouldTry_6 = (MR_Integer) 0;
        else
          *ShouldTry_6 = (MR_Integer) 1;
      }
    }
    *STATE_VARIABLE_PDInfo_45 = STATE_VARIABLE_PDInfo_0_44;
  }
}

static void MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_24;

  transform_hlds__deforest__IntroducedFrom__pred__potential_deforestation__652__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_24);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_24));
}

static MR_bool MR_CALL 
transform_hlds__deforest__search_for_deforest_goal_6_p_0(
  MR_Word EarlierGoal_7,
  MR_Word EarlierBranchInfo_8,
  MR_Word RevBetweenGoals0_9,
  MR_Word HeadVar__4_4,
  MR_Word * Goals_12,
  MR_Word * DeforestInfo_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_10;
    MR_Word Goals0_11;
    MR_Word LaterGoal_14;
    MR_Word LaterBranchInfo_15;
    MR_Word DeforestBranches_16;
    MR_Word TypeInfo_28_34;
    MR_Word TypeInfo_29_35;
    MR_Word TypeCtorInfo_31_36;
    MR_Word TypeInfo_32_37;
    MR_Word Var_19;
    MR_Word VarMap1_24;
    MR_Word LeftVars2_28;
    MR_Word VarMap_30;
    MR_Word VarAssoc_31;
    MR_Word GetBranches_32;
    MR_Word DeforestBranches0_33;
    MR_Box conv1_DeforestBranches_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      Goals0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      LaterGoal_14 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
      succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        LaterBranchInfo_15 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
        VarMap1_24 = ((MR_Word) ((MR_hl_field(0, EarlierBranchInfo_8, (MR_Integer) 0))));
        LeftVars2_28 = ((MR_Word) ((MR_hl_field(0, LaterBranchInfo_15, (MR_Integer) 1))));
        TypeInfo_28_34 = (MR_Word) (&transform_hlds__deforest_scalar_common_1[1]);
        TypeInfo_29_35 = (MR_Word) (&transform_hlds__deforest_scalar_common_1[4]);
        mercury__map__select_3_p_0(TypeInfo_28_34, TypeInfo_29_35, VarMap1_24, LeftVars2_28, &VarMap_30);
        mercury__map__to_assoc_list_2_p_0(TypeInfo_28_34, TypeInfo_29_35, VarMap_30, &VarAssoc_31);
        succeeded = mercury__map__is_empty_1_p_0(TypeInfo_28_34, TypeInfo_29_35, VarMap_30);
        succeeded = !(succeeded);
        if (succeeded)
        {
          GetBranches_32 = (MR_Word) (&transform_hlds__deforest_scalar_common_2[9]);
          TypeCtorInfo_31_36 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
          mercury__set__init_1_p_0(TypeCtorInfo_31_36, &DeforestBranches0_33);
          TypeInfo_32_37 = (MR_Word) (&transform_hlds__deforest_scalar_common_2[2]);
          mercury__list__foldl_4_p_0(TypeInfo_32_37, TypeInfo_29_35, GetBranches_32, VarAssoc_31, ((MR_Box) (DeforestBranches0_33)), &conv1_DeforestBranches_16);
          DeforestBranches_16 = ((MR_Word) (conv1_DeforestBranches_16));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word BetweenGoals1_17;
        MR_Word BetweenGoals_18;

        mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_2[1]), RevBetweenGoals0_9, &BetweenGoals1_17);
        mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[3]), BetweenGoals1_17, &BetweenGoals_18);
        *Goals_12 = Goals0_11;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *DeforestInfo_13 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (EarlierGoal_7));
          MR_hl_field(0, base, 1) = ((MR_Box) (EarlierBranchInfo_8));
          MR_hl_field(0, base, 2) = ((MR_Box) (BetweenGoals_18));
          MR_hl_field(0, base, 3) = ((MR_Box) (LaterGoal_14));
          MR_hl_field(0, base, 4) = ((MR_Box) (LaterBranchInfo_15));
          MR_hl_field(0, base, 5) = ((MR_Box) (DeforestBranches_16));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_20;
        MR_Word next_value_of_RevBetweenGoals0_9;
        MR_Word next_value_of_HeadVar__4_4;

        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Goal_10));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (RevBetweenGoals0_9));
        }
        // direct tailcall eliminated
        ;
        next_value_of_RevBetweenGoals0_9 = Var_20;
        next_value_of_HeadVar__4_4 = Goals0_11;
        RevBetweenGoals0_9 = next_value_of_RevBetweenGoals0_9;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_31;

  transform_hlds__deforest__IntroducedFrom__pred__do_get_sub_conj_nonlocals__1695__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_31);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_31));
}

static MR_bool MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__deforest__IntroducedFrom__pred__propagate_conj_constraints__514__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest__propagate_conj_constraints_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word * Goals_4,
  MR_Word STATE_VARIABLE_PDInfo_0_5,
  MR_Word * STATE_VARIABLE_PDInfo_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadVar__3_3, Goals_4);
      *STATE_VARIABLE_PDInfo_6 = STATE_VARIABLE_PDInfo_0_5;
    }
    else
    {
      MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleInfo_19;
      MR_Word SymName_27;
      MR_Word Constraints_32;
      MR_Word Goals1_33;
      MR_Word TypeCtorInfo_71_71;
      MR_Word GoalExpr0_20;
      MR_Word PredId_22;
      MR_Word PredInfo_28;
      MR_Word Var_43;

      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_5, &ModuleInfo_19);
      GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) GoalExpr0_20)) == (MR_Integer) 2);
      if (succeeded)
      {
        PredId_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_20, (MR_Integer) 0))));
        SymName_27 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_20, (MR_Integer) 5))));
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_19, PredId_22, &PredInfo_28);
        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_28);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_43 = (MR_Word) (&transform_hlds__deforest_scalar_common_2[7]);
          TypeCtorInfo_71_71 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
          mercury__list__take_while_4_p_0(TypeCtorInfo_71_71, Var_43, Goals0_14, &Constraints_32, &Goals1_33);
          succeeded = (Constraints_32 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_String SymNameString_36;
        MR_Word MaybeGoal_39;
        MR_Word STATE_VARIABLE_PDInfo_57_57;
        MR_Word STATE_VARIABLE_NonLocals_32_74;
        MR_Word STATE_VARIABLE_NonLocals_33_75;
        MR_Word STATE_VARIABLE_NonLocals_34_76;
        MR_Word STATE_VARIABLE_NonLocals_35_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word STATE_VARIABLE_SubConjNonLocals_39_81;
        MR_Word Var_49;
        MR_Word Var_51;
        MR_Box conv1_STATE_VARIABLE_NonLocals_32_74;
        MR_Box conv2_STATE_VARIABLE_NonLocals_33_75;
        MR_Box conv3_STATE_VARIABLE_NonLocals_34_76;
        MR_Box conv4_STATE_VARIABLE_NonLocals_35_77;
        MR_Box conv5_STATE_VARIABLE_SubConjNonLocals_39_81;
        MR_Word ConjNonLocals_38;

        SymNameString_36 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_27);
        {
          Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_51, 1) = ((MR_Box) (SymNameString_36));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        transform_hlds__pd_debug__pd_debug_message_6_p_0(STATE_VARIABLE_PDInfo_0_5, (MR_String) "propagate_conj_constraints", (MR_String) "propagating constraints into call to %s\n", Var_49);
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[6]), (MR_Word) (&transform_hlds__deforest_scalar_common_2[8]), HeadVar__3_3, ((MR_Box) (NonLocals_2)), &conv1_STATE_VARIABLE_NonLocals_32_74);
        STATE_VARIABLE_NonLocals_32_74 = ((MR_Word) (conv1_STATE_VARIABLE_NonLocals_32_74));
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[6]), (MR_Word) (&transform_hlds__deforest_scalar_common_2[8]), (MR_Word) ((MR_Unsigned) 0U), ((MR_Box) (STATE_VARIABLE_NonLocals_32_74)), &conv2_STATE_VARIABLE_NonLocals_33_75);
        STATE_VARIABLE_NonLocals_33_75 = ((MR_Word) (conv2_STATE_VARIABLE_NonLocals_33_75));
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[6]), (MR_Word) (&transform_hlds__deforest_scalar_common_2[8]), (MR_Word) ((MR_Unsigned) 0U), ((MR_Box) (STATE_VARIABLE_NonLocals_33_75)), &conv3_STATE_VARIABLE_NonLocals_34_76);
        STATE_VARIABLE_NonLocals_34_76 = ((MR_Word) (conv3_STATE_VARIABLE_NonLocals_34_76));
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[6]), (MR_Word) (&transform_hlds__deforest_scalar_common_2[8]), Goals1_33, ((MR_Box) (STATE_VARIABLE_NonLocals_34_76)), &conv4_STATE_VARIABLE_NonLocals_35_77);
        STATE_VARIABLE_NonLocals_35_77 = ((MR_Word) (conv4_STATE_VARIABLE_NonLocals_35_77));
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (Goal0_13));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (Constraints_32));
        }
        Var_79 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[6]), (MR_Word) (&transform_hlds__deforest_scalar_common_2[8]), Var_78, ((MR_Box) (Var_79)), &conv5_STATE_VARIABLE_SubConjNonLocals_39_81);
        STATE_VARIABLE_SubConjNonLocals_39_81 = ((MR_Word) (conv5_STATE_VARIABLE_SubConjNonLocals_39_81));
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_NonLocals_35_77, STATE_VARIABLE_SubConjNonLocals_39_81, &ConjNonLocals_38);
        transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(Goal0_13, Constraints_32, (MR_Word) ((MR_Unsigned) 0U), &MaybeGoal_39, STATE_VARIABLE_PDInfo_0_5, &STATE_VARIABLE_PDInfo_57_57);
        if ((MaybeGoal_39 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word STATE_VARIABLE_PDInfo_63_63;
          MR_Word Var_64;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_STATE_VARIABLE_PDInfo_0_5;

          transform_hlds__pd_info__pd_info_update_goal_3_p_0(Goal0_13, STATE_VARIABLE_PDInfo_57_57, &STATE_VARIABLE_PDInfo_63_63);
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (Goal0_13));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (HeadVar__3_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Goals0_14;
          next_value_of_HeadVar__3_3 = Var_64;
          next_value_of_STATE_VARIABLE_PDInfo_0_5 = STATE_VARIABLE_PDInfo_63_63;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          STATE_VARIABLE_PDInfo_0_5 = next_value_of_STATE_VARIABLE_PDInfo_0_5;
          continue;
        }
        else
        {
          MR_Word Goal_40 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_39, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_PDInfo_59_59;
          MR_Word STATE_VARIABLE_PDInfo_60_60;
          MR_Word Var_61;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_STATE_VARIABLE_PDInfo_0_5;

          transform_hlds__pd_info__pd_info_set_rerun_det_3_p_0((MR_Integer) 1, STATE_VARIABLE_PDInfo_57_57, &STATE_VARIABLE_PDInfo_59_59);
          transform_hlds__pd_info__pd_info_update_goal_3_p_0(Goal_40, STATE_VARIABLE_PDInfo_59_59, &STATE_VARIABLE_PDInfo_60_60);
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (Goal_40));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) (HeadVar__3_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Goals1_33;
          next_value_of_HeadVar__3_3 = Var_61;
          next_value_of_STATE_VARIABLE_PDInfo_0_5 = STATE_VARIABLE_PDInfo_60_60;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          STATE_VARIABLE_PDInfo_0_5 = next_value_of_STATE_VARIABLE_PDInfo_0_5;
          continue;
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_PDInfo_66_66;
        MR_Word Var_67;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_PDInfo_0_5;

        transform_hlds__pd_info__pd_info_update_goal_3_p_0(Goal0_13, STATE_VARIABLE_PDInfo_0_5, &STATE_VARIABLE_PDInfo_66_66);
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Goal0_13));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (HeadVar__3_3));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals0_14;
        next_value_of_HeadVar__3_3 = Var_67;
        next_value_of_STATE_VARIABLE_PDInfo_0_5 = STATE_VARIABLE_PDInfo_66_66;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_PDInfo_0_5 = next_value_of_STATE_VARIABLE_PDInfo_0_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__deforest__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
  MR_Word EarlierGoal_9,
  MR_Word BetweenGoals_10,
  MR_Word MaybeLaterGoal_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_PDInfo_0_15,
  MR_Word * STATE_VARIABLE_PDInfo_16)
{
  while (MR_TRUE)
  {
    MR_Word ShouldTry_14;
    MR_Word STATE_VARIABLE_PDInfo_17_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    transform_hlds__deforest__can_optimize_conj_6_p_0(EarlierGoal_9, BetweenGoals_10, MaybeLaterGoal_11, &ShouldTry_14, STATE_VARIABLE_PDInfo_0_15, &STATE_VARIABLE_PDInfo_17_17);
    switch (ShouldTry_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeGoal_12 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_PDInfo_16 = STATE_VARIABLE_PDInfo_17_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_STATE_VARIABLE_PDInfo_0_15 = STATE_VARIABLE_PDInfo_17_17;

          // direct tailcall eliminated
          ;
          STATE_VARIABLE_PDInfo_0_15 = next_value_of_STATE_VARIABLE_PDInfo_0_15;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_33;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_21, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_22, &Var_33, &(env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_34);
    hlds__hlds_pred__proc_info_get_goal_2_p_0((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledProcInfo_34, &(env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_35);
    hlds__goal_util__goal_size_2_p_0((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoal_35, &(env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_36);
    (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_18 != (MR_Integer) -1);
    if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__CalledGoalSize_36 > (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_18);
      if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        transform_hlds__deforest__can_optimize_conj_6_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_0) == 0)
    {
      (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_18 != (MR_Integer) -1);
      if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
      {
        {
          MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0))));
          MR_Word Var_27;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;

          (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 2);
          if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_21 = ((MR_Word) ((MR_hl_field(2, Var_64, (MR_Integer) 0))));
            (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_22 = ((MR_Integer) ((MR_hl_field(2, Var_64, (MR_Integer) 1))));
            transform_hlds__deforest__can_optimize_conj_6_p_0_2(env_ptr);
          }
        }
        {
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_32;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;

          (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
          {
            Var_65 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0))));
            Var_66 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 0))));
            (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 2);
            if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
            {
              (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_21 = ((MR_Word) ((MR_hl_field(2, Var_66, (MR_Integer) 0))));
              (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_22 = ((MR_Integer) ((MR_hl_field(2, Var_66, (MR_Integer) 1))));
            }
          }
          if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
            transform_hlds__deforest__can_optimize_conj_6_p_0_2(env_ptr);
        }
      }
      (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__inlining__can_inline_proc_5_p_0((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_95, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_96, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40, (MR_Integer) 0);
    (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
      transform_hlds__deforest__can_optimize_conj_6_p_0_4(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_1) == 0)
    {
      {
        MR_Word EarlierGoalExpr_37 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (MR_Integer) 0))));
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Unsigned packed_word_0;

        (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) EarlierGoalExpr_37)) == (MR_Integer) 2);
        if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        {
          (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_95 = ((MR_Word) ((MR_hl_field(2, EarlierGoalExpr_37, (MR_Integer) 0))));
          (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_96 = ((MR_Integer) ((MR_hl_field(2, EarlierGoalExpr_37, (MR_Integer) 1))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, EarlierGoalExpr_37, (MR_Integer) 3)));
          (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40 = ((MR_Unsigned) ((MR_hl_field(2, EarlierGoalExpr_37, (MR_Integer) 3))) & (MR_Integer) 1);
          transform_hlds__deforest__can_optimize_conj_6_p_0_5(env_ptr);
        }
      }
      {
        MR_Word LaterGoalExpr_43;
        MR_Word Var_72;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Unsigned packed_word_1;

        (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        {
          Var_72 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0))));
          LaterGoalExpr_43 = ((MR_Word) ((MR_hl_field(0, Var_72, (MR_Integer) 0))));
          (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) LaterGoalExpr_43)) == (MR_Integer) 2);
          if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__PredId_95 = ((MR_Word) ((MR_hl_field(2, LaterGoalExpr_43, (MR_Integer) 0))));
            (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ProcId_96 = ((MR_Integer) ((MR_hl_field(2, LaterGoalExpr_43, (MR_Integer) 1))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, LaterGoalExpr_43, (MR_Integer) 3)));
            (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BuiltinState_40 = ((MR_Unsigned) ((MR_hl_field(2, LaterGoalExpr_43, (MR_Integer) 3))) & (MR_Integer) 1);
          }
        }
        if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
          transform_hlds__deforest__can_optimize_conj_6_p_0_5(env_ptr);
      }
      (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2, 1);
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_49;
    MR_Word Var_84;

    (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_50 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_48, (MR_Integer) 1))));
    Var_84 = hlds__hlds_goal__goal_info_get_purity_1_f_0((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoalInfo_50);
    (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (Var_84 != (MR_Integer) 0);
    if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
      transform_hlds__deforest__can_optimize_conj_6_p_0_7(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_9(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_48 = ((MR_Word) ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_48));
  transform_hlds__deforest__can_optimize_conj_6_p_0_8(env_ptr);
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_10(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_2) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv0_ImpureGoal_48, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_9, env_ptr);
      {
        (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_48 = (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7;
        transform_hlds__deforest__can_optimize_conj_6_p_0_8(env_ptr);
      }
      {
        (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        {
          (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ImpureGoal_48 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0))));
          transform_hlds__deforest__can_optimize_conj_6_p_0_8(env_ptr);
        }
      }
      (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_11(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3, 1);
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_12(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = hlds__goal_util__reordering_maintains_termination_old_4_p_0((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_51, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_52);
  (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
  if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
    transform_hlds__deforest__can_optimize_conj_6_p_0_11(env_ptr);
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_13(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_52 = ((MR_Word) ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_52));
  transform_hlds__deforest__can_optimize_conj_6_p_0_12(env_ptr);
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0_14(
  void * env_ptr_arg)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s * env_ptr = (struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__commit_3) == 0)
    {
      {
        MR_Unsigned packed_word_2;

        (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_19)) == (MR_Integer) 1);
        if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        {
          packed_word_2 = (MR_Unsigned) ((MR_hl_field(1, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_19, (MR_Integer) 0)));
          (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrict_51 = ((MR_Unsigned) ((MR_hl_field(1, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_19, (MR_Integer) 0))) & (MR_Integer) 1);
          mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__conv1_OtherGoal_52, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8, transform_hlds__deforest__can_optimize_conj_6_p_0_13, env_ptr);
          (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9 != (MR_Word) ((MR_Unsigned) 0U));
          if ((env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__OtherGoal_52 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9, (MR_Integer) 0))));
            transform_hlds__deforest__can_optimize_conj_6_p_0_12(env_ptr);
          }
        }
      }
      (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__deforest__can_optimize_conj_6_p_0(
  MR_Word EarlierGoal_7,
  MR_Word BetweenGoals_8,
  MR_Word MaybeLaterGoal_9,
  MR_Word * ShouldTry_10,
  MR_Word STATE_VARIABLE_PDInfo_0_54,
  MR_Word * STATE_VARIABLE_PDInfo_55)
{
  struct transform_hlds__deforest__can_optimize_conj_6_p_0_env_0_s env;

  (env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__EarlierGoal_7 = EarlierGoal_7;
  (env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8 = BetweenGoals_8;
  (env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__MaybeLaterGoal_9 = MaybeLaterGoal_9;
  {
    MR_Integer Depth0_12;
    MR_Word Globals_14;
    MR_Word OptTuple_15;
    MR_Integer MaxDepth_16;
    MR_Integer Depth_17;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_172;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_175;
    MR_Word Var_176;
    MR_Word Var_177;
    MR_Word Var_178;
    MR_Word Var_179;
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word Var_182;
    MR_Word Var_183;
    MR_Integer Var_184;
    MR_Integer Var_185;
    MR_Integer Var_186;
    MR_Integer Var_187;
    MR_Integer Var_188;
    MR_Integer Var_189;
    MR_Integer Var_190;
    MR_Integer Var_191;
    MR_Integer Var_192;
    MR_Integer Var_193;
    MR_Integer Var_194;
    MR_Integer Var_195;
    MR_Integer Var_196;
    MR_Integer Var_197;
    MR_Integer Var_198;
    MR_Integer Var_199;
    MR_Integer Var_200;
    MR_Integer Var_201;
    MR_Integer Var_202;
    MR_Integer Var_203;
    MR_Integer Var_204;
    MR_Integer Var_205;
    MR_Integer Var_206;
    MR_Integer Var_207;
    MR_Integer Var_208;
    MR_Integer Var_209;
    MR_Integer Var_210;
    MR_Integer Var_211;
    MR_Integer Var_212;
    MR_Integer Var_213;
    MR_Integer Var_214;
    MR_Integer Var_215;
    MR_Integer Var_216;
    MR_Integer Var_217;
    MR_Integer Var_218;
    MR_Integer Var_219;
    MR_String Var_220;
    MR_Word Var_221;
    MR_Word Var_222;
    MR_Word Var_223;
    MR_Word Var_224;
    MR_Word Var_225;
    MR_Word Var_226;
    MR_Word Var_227;
    MR_Word Var_228;
    MR_Word Var_229;
    MR_Word Var_230;
    MR_Word Var_231;
    MR_Word Var_232;
    MR_Word Var_233;
    MR_Word Var_234;
    MR_Word Var_235;
    MR_Word Var_236;
    MR_Word Var_237;
    MR_Word Var_238;
    MR_Word Var_239;
    MR_Word Var_240;
    MR_Word Var_241;
    MR_Word Var_242;
    MR_Word Var_243;
    MR_Word Var_244;
    MR_Word Var_245;
    MR_Word Var_246;
    MR_Word Var_247;
    MR_Word Var_248;
    MR_Word Var_249;
    MR_Word Var_250;
    MR_Word Var_251;
    MR_Word Var_252;
    MR_Word Var_253;
    MR_Word Var_254;
    MR_Word Var_255;
    MR_Word Var_256;
    MR_Word Var_257;
    MR_Word Var_258;
    MR_Word Var_259;
    MR_Word Var_260;
    MR_Word Var_261;
    MR_Word Var_262;
    MR_Word Var_263;
    MR_Word Var_264;
    MR_Word Var_265;
    MR_Word Var_266;
    MR_Word Var_267;
    MR_Word Var_268;
    MR_Word Var_269;
    MR_Word Var_270;
    MR_Word Var_271;
    MR_Word Var_272;
    MR_Word Var_273;
    MR_Word Var_274;
    MR_Word Var_275;
    MR_Word Var_276;
    MR_Word Var_277;
    MR_Word Var_278;
    MR_Word Var_279;
    MR_Word Var_280;
    MR_Word Var_281;
    MR_Word Var_282;
    MR_Word Var_283;
    MR_Word Var_284;
    MR_Word Var_285;
    MR_Word Var_286;
    MR_Word Var_287;
    MR_Word Var_288;
    MR_Word Var_289;
    MR_Word Var_290;
    MR_Word Var_291;
    MR_Word Var_292;
    MR_Word Var_293;
    MR_Word Var_294;
    MR_Word Var_295;
    MR_Word Var_296;
    MR_Word Var_297;
    MR_Word Var_298;
    MR_Word Var_299;
    MR_Word Var_300;
    MR_Word Var_301;
    MR_Word Var_302;
    MR_Word Var_303;
    MR_Word Var_304;
    MR_Word Var_305;
    MR_Word Var_306;
    MR_Word Var_307;
    MR_Integer Var_308;
    MR_Integer Var_309;
    MR_Integer Var_310;
    MR_Integer Var_311;
    MR_Integer Var_312;
    MR_Integer Var_313;
    MR_Integer Var_314;
    MR_Integer Var_315;
    MR_Integer Var_316;
    MR_Integer Var_317;
    MR_Integer Var_318;
    MR_Integer Var_319;
    MR_Integer Var_320;
    MR_Integer Var_321;
    MR_Integer Var_322;
    MR_Integer Var_323;
    MR_Integer Var_324;
    MR_Integer Var_325;
    MR_Integer Var_326;
    MR_Integer Var_327;
    MR_Integer Var_328;
    MR_Integer Var_329;
    MR_Integer Var_330;
    MR_Integer Var_331;
    MR_Integer Var_332;
    MR_Integer Var_333;
    MR_Integer Var_334;
    MR_Integer Var_335;
    MR_Integer Var_336;
    MR_Integer Var_337;
    MR_Integer Var_338;
    MR_Integer Var_339;
    MR_Integer Var_340;
    MR_Integer Var_341;
    MR_Integer Var_342;
    MR_Integer Var_343;
    MR_String Var_344;

    transform_hlds__pd_info__pd_info_get_depth_2_p_0(STATE_VARIABLE_PDInfo_0_54, &Depth0_12);
    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(STATE_VARIABLE_PDInfo_0_54, &(env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13);
    hlds__hlds_module__module_info_get_globals_2_p_0((env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__ModuleInfo_13, &Globals_14);
    libs__globals__get_opt_tuple_2_p_0(Globals_14, &OptTuple_15);
    MaxDepth_16 = ((MR_Integer) ((MR_hl_field(0, OptTuple_15, (MR_Integer) 20))));
    Depth_17 = (MR_Integer) ((MR_Unsigned) Depth0_12 + (MR_Unsigned) 1);
    transform_hlds__pd_info__pd_info_set_depth_3_p_0(Depth_17, STATE_VARIABLE_PDInfo_0_54, STATE_VARIABLE_PDInfo_55);
    (env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__SizeLimit_18 = ((MR_Integer) ((MR_hl_field(0, OptTuple_15, (MR_Integer) 23))));
    libs__globals__lookup_option_3_p_0(Globals_14, (MR_Integer) 242, &(env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__FullyStrictOp_19);
    (env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (MaxDepth_16 != (MR_Integer) -1);
    if ((env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
      (env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = (Depth0_12 >= MaxDepth_16);
    if ((env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
      *ShouldTry_10 = (MR_Integer) 0;
    else
    {
      transform_hlds__deforest__can_optimize_conj_6_p_0_3(&env);
      if ((env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
      {
        transform_hlds__pd_debug__pd_debug_message_6_p_0(*STATE_VARIABLE_PDInfo_55, (MR_String) "can_optimize_conj", (MR_String) "goal too large\n", (MR_Word) ((MR_Unsigned) 0U));
        *ShouldTry_10 = (MR_Integer) 0;
      }
      else
      {
        transform_hlds__deforest__can_optimize_conj_6_p_0_6(&env);
        if ((env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
        {
          transform_hlds__pd_debug__pd_debug_message_6_p_0(*STATE_VARIABLE_PDInfo_55, (MR_String) "can_optimize_conj", (MR_String) "non-inlineable calls\n", (MR_Word) ((MR_Unsigned) 0U));
          *ShouldTry_10 = (MR_Integer) 0;
        }
        else
        {
          (env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0((env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__BetweenGoals_8);
          (env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded = !((env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded);
          if ((env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
          {
            transform_hlds__pd_debug__pd_debug_message_6_p_0(*STATE_VARIABLE_PDInfo_55, (MR_String) "can_optimize_conj", (MR_String) "between goals not simple enough\n", (MR_Word) ((MR_Unsigned) 0U));
            *ShouldTry_10 = (MR_Integer) 0;
          }
          else
          {
            transform_hlds__deforest__can_optimize_conj_6_p_0_10(&env);
            if ((env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
            {
              transform_hlds__pd_debug__pd_debug_message_6_p_0(*STATE_VARIABLE_PDInfo_55, (MR_String) "can_optimize_conj", (MR_String) "goal list contains impure goal(s)\n", (MR_Word) ((MR_Unsigned) 0U));
              *ShouldTry_10 = (MR_Integer) 0;
            }
            else
            {
              transform_hlds__deforest__can_optimize_conj_6_p_0_14(&env);
              if ((env).transform_hlds__deforest__can_optimize_conj_6_p_0_env_0__succeeded)
              {
                transform_hlds__pd_debug__pd_debug_message_6_p_0(*STATE_VARIABLE_PDInfo_55, (MR_String) "can_optimize_conj", (MR_String) "interleaving execution could change termination behaviour\n", (MR_Word) ((MR_Unsigned) 0U));
                *ShouldTry_10 = (MR_Integer) 0;
              }
              else
                *ShouldTry_10 = (MR_Integer) 1;
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__is_simple_goal_list_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_4 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;

      {
        MR_Word Var_8;

        Var_8 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr_4);
        succeeded = (Var_8 == (MR_Integer) 1);
      }
      if (!(succeeded))
      {
        MR_Word Goal1_6;
        MR_Word GoalList1_7;

        succeeded = ((MR_tag((MR_Word) GoalExpr_4)) == (MR_Integer) 0);
        if (succeeded)
        {
          Goal1_6 = (MR_Word) ((MR_Word) (GoalExpr_4));
          hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal1_6, &GoalList1_7);
          succeeded = transform_hlds__deforest__is_simple_goal_list_1_p_0(GoalList1_7);
        }
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__deforest__compute_goal_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_PDInfo_0_3,
  MR_Word * STATE_VARIABLE_PDInfo_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PDInfo_4 = STATE_VARIABLE_PDInfo_0_3;
  }
  else
  {
    MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word MaybeBranchInfo_10;
    MR_Word Goals_11;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_PDInfo_16_16;
    MR_Word STATE_VARIABLE_PDInfo_17_17;
    MR_Word GoalExpr_18 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MaybeBranchInfo_10 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_PDInfo_16_16 = STATE_VARIABLE_PDInfo_0_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_50 = ((MR_Word) ((MR_hl_field(2, GoalExpr_18, (MR_Integer) 0))));
          MR_Integer ProcId_51 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_18, (MR_Integer) 1))));
          MR_Word Args_52 = ((MR_Word) ((MR_hl_field(2, GoalExpr_18, (MR_Integer) 2))));
          MR_Word ProcBranchInfos_56;
          MR_Word BranchInfo0_57;
          MR_Word Var_60;
          MR_Box conv0_BranchInfo0_57;

          transform_hlds__pd_info__pd_info_get_proc_arg_info_2_p_0(STATE_VARIABLE_PDInfo_0_3, &ProcBranchInfos_56);
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_60, 0) = ((MR_Box) (PredId_50));
            MR_hl_field(0, Var_60, 1) = ((MR_Box) (ProcId_51));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[0]), ProcBranchInfos_56, ((MR_Box) (Var_60)), &conv0_BranchInfo0_57);
          if (succeeded)
          {
            BranchInfo0_57 = ((MR_Word) (conv0_BranchInfo0_57));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word BranchInfo_58;

            transform_hlds__pd_util__convert_branch_info_3_p_0(BranchInfo0_57, Args_52, &BranchInfo_58);
            {
              MaybeBranchInfo_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeBranchInfo_10, 0) = ((MR_Box) (BranchInfo_58));
            }
          }
          else
            MaybeBranchInfo_10 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_PDInfo_16_16 = STATE_VARIABLE_PDInfo_0_3;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 5:
            {
              MaybeBranchInfo_10 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_PDInfo_16_16 = STATE_VARIABLE_PDInfo_0_3;
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 6:
            transform_hlds__pd_util__get_branch_vars_goal_4_p_0(Goal_8, &MaybeBranchInfo_10, STATE_VARIABLE_PDInfo_0_3, &STATE_VARIABLE_PDInfo_16_16);
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.deforest.deforest_get_branch_vars_goal\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (Goal_8));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (MaybeBranchInfo_10));
    }
    transform_hlds__pd_info__pd_info_update_goal_3_p_0(Goal_8, STATE_VARIABLE_PDInfo_16_16, &STATE_VARIABLE_PDInfo_17_17);
    transform_hlds__deforest__compute_goal_infos_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_PDInfo_17_17, STATE_VARIABLE_PDInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(
  MR_Word PredProcId_8,
  MR_Word ProcInfo_9,
  MR_Word * ProcInfo_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word UnivProcArgInfo0_11,
  MR_Word * UnivProcArgInfo_12)
{
  MR_Word ProcArgInfo0_13;
  MR_Word ProcArgInfo_14;
  MR_Box conv0_ProcArgInfo0_13;

  *ProcInfo_3 = ProcInfo_9;
  mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_2[0]), UnivProcArgInfo0_11, &conv0_ProcArgInfo0_13);
  ProcArgInfo0_13 = ((MR_Word) (conv0_ProcArgInfo0_13));
  transform_hlds__pd_util__get_branch_vars_proc_6_p_0(PredProcId_8, ProcInfo_9, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, ProcArgInfo0_13, &ProcArgInfo_14);
  mercury__univ__type_to_univ_2_p_1((MR_Word) (&transform_hlds__deforest_scalar_common_2[0]), ((MR_Box) (ProcArgInfo_14)), UnivProcArgInfo_12);
}

static void MR_CALL 
transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(
  MR_Word PredProcId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_Word PredInfo_6;
  MR_Word ProcInfo0_7;
  MR_Word Detism0_8;
  MR_Word MaxSolns_10;
  MR_Word Var_9;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_12, PredProcId_4, &PredInfo_6, &ProcInfo0_7);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo0_7, &Detism0_8);
  parse_tree__prog_data__determinism_components_3_p_0(Detism0_8, &Var_9, &MaxSolns_10);
  switch (MaxSolns_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word ProcInfo_11;

        hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0((MR_Integer) 6, ProcInfo0_7, &ProcInfo_11);
        hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_4, PredInfo_6, ProcInfo_11, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_ModuleInfo_13 = STATE_VARIABLE_ModuleInfo_0_12;
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__deforest__deforest_module_3_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__deforest__IntroducedFrom__pred__deforest_module__157__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest__deforest_module_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ModuleInfo_13;

  transform_hlds__deforest__reset_inferred_proc_determinism_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ModuleInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_13));
}

static void MR_CALL 
transform_hlds__deforest__deforest_module_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_PDInfo_9;

  transform_hlds__deforest__deforest_proc_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_PDInfo_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_PDInfo_9));
}

static void MR_CALL 
transform_hlds__deforest__deforest_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_ProcInfo_3;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_16;
  MR_Word conv0_UnivProcArgInfo_12;

  transform_hlds__deforest__get_branch_vars_proc_univ_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_ProcInfo_3, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) (wrapper_arg_6)), &conv0_UnivProcArgInfo_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_ProcInfo_3));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_16));
  *wrapper_arg_7 = ((MR_Box) (conv0_UnivProcArgInfo_12));
}

void MR_CALL 
transform_hlds__deforest__deforest_module_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  MR_bool succeeded;
  MR_Word ProcArgInfo0_6;
  MR_Word UnivProcArgInfo0_7;
  MR_Word Task0_8;
  MR_Word Task_9;
  MR_Word ProcArgInfo_13;
  MR_Word DepInfo_14;
  MR_Word DepList_15;
  MR_Word PDInfo0_16;
  MR_Word PDInfo_17;
  MR_Word VersionIndex_18;
  MR_Word Versions_19;
  MR_Word Globals_20;
  MR_Word OptTuple_21;
  MR_Word PropConstraints_22;
  MR_Word STATE_VARIABLE_ModuleInfo_32_32;
  MR_Word STATE_VARIABLE_ModuleInfo_35_35;
  MR_Word STATE_VARIABLE_ModuleInfo_37_37;
  MR_Word STATE_VARIABLE_ModuleInfo_38_38;
  MR_Word ProcArgInfo1_12;
  MR_Word UnivProcArgInfo_11;
  MR_Box conv3_ProcArgInfo1_12;
  MR_Box conv5_PDInfo_17;

  transform_hlds__deforest__proc_arg_info_init_1_p_0(&ProcArgInfo0_6);
  mercury__univ__type_to_univ_2_p_1((MR_Word) (&transform_hlds__deforest_scalar_common_2[0]), ((MR_Box) (ProcArgInfo0_6)), &UnivProcArgInfo0_7);
  {
    Task0_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Task0_8, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Task0_8, 1) = ((MR_Box) (&transform_hlds__deforest_scalar_common_2[4]));
    MR_hl_field(3, Task0_8, 2) = ((MR_Box) (UnivProcArgInfo0_7));
  }
  hlds__passes_aux__process_valid_nonimported_procs_update_4_p_0(Task0_8, &Task_9, STATE_VARIABLE_ModuleInfo_0_29, &STATE_VARIABLE_ModuleInfo_32_32);
  succeeded = ((((MR_tag((MR_Word) Task_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Task_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    UnivProcArgInfo_11 = ((MR_Word) ((MR_hl_field(3, Task_9, (MR_Integer) 2))));
    succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&transform_hlds__deforest_scalar_common_2[0]), UnivProcArgInfo_11, &conv3_ProcArgInfo1_12);
    if (succeeded)
    {
      ProcArgInfo1_12 = ((MR_Word) (conv3_ProcArgInfo1_12));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    ProcArgInfo_13 = ProcArgInfo1_12;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.deforest.deforest_module\'/3", (MR_String) "passes_aux stuffed up");
      return;
    }
  hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_32_32, &STATE_VARIABLE_ModuleInfo_35_35, &DepInfo_14);
  DepList_15 = libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_14);
  transform_hlds__pd_info__pd_info_init_4_p_0(ProgressStream_4, STATE_VARIABLE_ModuleInfo_35_35, ProcArgInfo_13, &PDInfo0_16);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_pd_info_0), (MR_Word) (&transform_hlds__deforest_scalar_common_2[5]), DepList_15, ((MR_Box) (PDInfo0_16)), &conv5_PDInfo_17);
  PDInfo_17 = ((MR_Word) (conv5_PDInfo_17));
  transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_17, &STATE_VARIABLE_ModuleInfo_37_37);
  hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_37_37, &STATE_VARIABLE_ModuleInfo_38_38);
  transform_hlds__pd_info__pd_info_get_versions_2_p_0(PDInfo_17, &VersionIndex_18);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__pd_info__transform_hlds__pd_info__type_ctor_info_version_info_0), VersionIndex_18, &Versions_19);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_38_38, &Globals_20);
  libs__globals__get_opt_tuple_2_p_0(Globals_20, &OptTuple_21);
  PropConstraints_22 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_21, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
  succeeded = (PropConstraints_22 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Versions_19 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word NoWarnGlobals_26;
    MR_Word Specs_27;
    MR_Word FoundErrors_28;
    MR_Word STATE_VARIABLE_ModuleInfo_40_40;
    MR_Word STATE_VARIABLE_ModuleInfo_41_41;
    MR_Word STATE_VARIABLE_ModuleInfo_42_42;
    MR_Word Var_44;
    MR_Box conv7_STATE_VARIABLE_ModuleInfo_40_40;
    MR_Word _OptionsToRestore_25;

    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__deforest_scalar_common_2[6]), Versions_19, ((MR_Box) (STATE_VARIABLE_ModuleInfo_38_38)), &conv7_STATE_VARIABLE_ModuleInfo_40_40);
    STATE_VARIABLE_ModuleInfo_40_40 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_40_40));
    check_hlds__det_analysis__disable_det_warnings_3_p_0(&_OptionsToRestore_25, Globals_20, &NoWarnGlobals_26);
    hlds__hlds_module__module_info_set_globals_3_p_0(NoWarnGlobals_26, STATE_VARIABLE_ModuleInfo_40_40, &STATE_VARIABLE_ModuleInfo_41_41);
    check_hlds__det_analysis__determinism_pass_4_p_0(ProgressStream_4, &Specs_27, STATE_VARIABLE_ModuleInfo_41_41, &STATE_VARIABLE_ModuleInfo_42_42);
    hlds__hlds_module__module_info_set_globals_3_p_0(Globals_20, STATE_VARIABLE_ModuleInfo_42_42, STATE_VARIABLE_ModuleInfo_30);
    FoundErrors_28 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, Specs_27);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&transform_hlds__deforest_scalar_common_6[0]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (transform_hlds__deforest__deforest_module_3_p_0_4));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (FoundErrors_28));
      MR_hl_field(0, Var_44, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140transform_hlds.deforest.deforest_module\'/3", (MR_String) "determinism errors after deforestation");
  }
  else
    *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_38_38;
}

static void MR_CALL 
transform_hlds__deforest__proc_arg_info_init_1_p_0(
  MR_Word * ProcArgInfo0_2)
{
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__deforest_scalar_common_1[0]), ProcArgInfo0_2);
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____annotated_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__deforest____Unify____annotated_conj_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest____Compare____annotated_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__deforest____Compare____annotated_conj_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____can_move_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__deforest____Unify____can_move_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest____Compare____can_move_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__deforest____Compare____can_move_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__deforest____Unify____deforest_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__deforest____Unify____deforest_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__deforest____Compare____deforest_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__deforest____Compare____deforest_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module transform_hlds.deforest.
