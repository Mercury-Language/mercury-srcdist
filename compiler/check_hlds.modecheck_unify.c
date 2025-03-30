/*
** Automatically generated from `modecheck_unify.m'
** by the Mercury compiler,
** version rotd-2025-03-30
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


// :- module check_hlds.modecheck_unify.
// :- implementation.

/*
INIT mercury__check_hlds__modecheck_unify__init
ENDINIT
*/

#include "check_hlds.modecheck_unify.mih"


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
#include "getopt.mih"
#include "hlds.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_abstract_unify.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.mode_top_functor.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.polymorphism_lambda.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unique_modes.mih"
#include "hlds.const_struct.mih"
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
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s {
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16;
  MR_bool check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ModuleInfo0_29;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__VarTable_30;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstsOfArgVars_31;
  jmp_buf check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__commit_0;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstOfArgVar_93;
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__conv0_InitInstOfArgVar_93;
  jmp_buf check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__commit_1;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgType_92;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVar_94;
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__conv1_ArgVar_94;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0;

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1;

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_ordinal_ordered_match_mode_result_0[2];

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0[2];

static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0[2];

static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0[1];

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_1[1];

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0[2];

static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0[2];

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_rhs_lambda_undetermined_mode__1623__1_2_p_0(
  MR_Word ModuleInfo_16,
  MR_Tuple HeadVar__2_67);

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__categorize_unify_var_lambda__1541__1_1_f_0(
  MR_Word LambdaHeadVar__1_84);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1522__1_2_p_0(
  MR_Word MaybeTakeAddr_32,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_rhs_lambda_std__1344__1_4_p_0(
  MR_Word ModuleInfo0_23,
  MR_Word InstMap1_30,
  MR_Word VarTable_38,
  MR_Word LambdaHeadVar__1_71);

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1094__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__776__1_2_p_0(
  MR_Word MaybeTakeAddr_34,
  MR_Word HeadVar__2_74);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_var_functor__518__1_2_p_0(
  MR_Word ArgVars0_18,
  MR_Word HeadVar__2_50);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_var_functor__516__1_2_p_0(
  MR_Word IsExistConstruction_17,
  MR_Word HeadVar__2_46);

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_8_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_rhs_lambda_undetermined_mode_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_rhs_lambda_undetermined_mode_8_p_0(
  MR_Word X_9,
  MR_Word RHS0_10,
  MR_Word Unification_11,
  MR_Word UnifyContext_12,
  MR_Word GoalInfo0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_47,
  MR_Word * STATE_VARIABLE_ModeInfo_48);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_121_95_114_104_115_95_108_97_109_98_100_97_95_115_116_100_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_121_95_114_104_115_95_108_97_109_98_100_97_95_115_116_100_95_95_91_53_93_95_48_8_p_0(
  MR_Word X_9,
  MR_Word RHS0_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_67,
  MR_Word * STATE_VARIABLE_ModeInfo_68);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_with_lambda_12_p_0(
  MR_Word X_13,
  MR_Word PredOrFunc_14,
  MR_Word ArgVars_15,
  MR_Word LambdaModes_16,
  MR_Word LambdaDetism_17,
  MR_Word RHS0_18,
  MR_Word * RHS_19,
  MR_Word Unification0_20,
  MR_Word * Unification_21,
  MR_Word * UnifyMode_22,
  MR_Word STATE_VARIABLE_ModeInfo_0_38,
  MR_Word * STATE_VARIABLE_ModeInfo_39);

static MR_Box MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0(
  MR_Word InitInstX_13,
  MR_Word FinalInstX_14,
  MR_Word ArgInsts_15,
  MR_Word X_16,
  MR_Word ArgVars_17,
  MR_Word PredOrFunc_18,
  MR_Word RHS0_19,
  MR_Word * RHS_20,
  MR_Word Unification0_21,
  MR_Word * Unification_22,
  MR_Word STATE_VARIABLE_ModeInfo_0_72,
  MR_Word * STATE_VARIABLE_ModeInfo_73);

static void MR_CALL 
check_hlds__modecheck_unify__acc_non_ground_vars_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevNonGroundVarsInsts_0_5,
  MR_Word * STATE_VARIABLE_RevNonGroundVarsInsts_6);

static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_loop_over_procs_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap_3,
  MR_Word ArgVars_4,
  MR_Word CalleePredInfo_5,
  MR_Word CalleeErrorMap_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_RevMatchedProcIds_0_8,
  MR_Word * STATE_VARIABLE_RevMatchedProcIds_9,
  MR_Word STATE_VARIABLE_NonGroundNonLocals_0_10,
  MR_Word * STATE_VARIABLE_NonGroundNonLocals_11);

static void MR_CALL 
check_hlds__modecheck_unify__match_arg_modes_by_higher_order_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0(
  MR_Word X0_12,
  MR_Word TypeOfX_13,
  MR_Word ConsId0_14,
  MR_Word IsExistConstruction_15,
  MR_Word ArgVars0_16,
  MR_Word Unification0_17,
  MR_Word UnifyContext_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalExpr_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_61,
  MR_Word * STATE_VARIABLE_ModeInfo_62);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(
  MR_Word ArgInitInsts_4,
  MR_Word FinalInst_5,
  MR_Word * ArgFromToInsts_6);

static void MR_CALL 
check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FinalInst_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__modecheck_unify__pair_up_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0(
  MR_Word InstOfX_7,
  MR_Word Inst_8,
  MR_Word ArgVars_9,
  MR_Word InstOfXArgs_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * STATE_VARIABLE_ModeInfo_17);

static void MR_CALL 
check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(
  MR_Word X_6,
  MR_Word InstOfX_7,
  MR_Word ConsId_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20);

static void MR_CALL 
check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(
  MR_Word X_10,
  MR_Word InstConsId_11,
  MR_Word ArgVars0_12,
  MR_Word InstOfX_13,
  MR_Word InstArgs_14,
  MR_Word WaitingVarsList_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * STATE_VARIABLE_ModeInfo_23);

static void MR_CALL 
check_hlds__modecheck_unify__handle_occur_check_failure_9_p_0(
  MR_Word X_10,
  MR_Word TypeOfX_11,
  MR_Word InitInstOfX_12,
  MR_Word ArgVars0_13,
  MR_Word InitInstsOfArgVars_14,
  MR_Word InstConsId_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_5_p_0(
  MR_Word Inst_6,
  MR_Word ArgVars_7,
  MR_Word UnifyArgInsts_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__ground_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_arg_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5);

static void MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(
  MR_Word Unification0_8,
  MR_Word * Unification_9,
  MR_Word ArgVars0_10,
  MR_Word * ArgVars_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_21,
  MR_Word * STATE_VARIABLE_ModeInfo_22);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_loop_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_13_p_0(
  MR_Word InitInstOfX_14,
  MR_Word FinalInstOfX_15,
  MR_Word FromToInstsOfXArgs_16,
  MR_Word ArgFromToInsts_17,
  MR_Word X_18,
  MR_Word NewConsId_19,
  MR_Word ArgVars_20,
  MR_Word VarTable_21,
  MR_Word UnifyContext_22,
  MR_Word Unification0_23,
  MR_Word * Unification_24,
  MR_Word STATE_VARIABLE_ModeInfo_0_69,
  MR_Word * STATE_VARIABLE_ModeInfo_70);

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5);

static void MR_CALL 
check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(
  MR_Word IsExistConstruction_9,
  MR_Word X0_10,
  MR_Word * X_11,
  MR_Word * InitInstX_12,
  MR_Word * LiveX_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_const_struct_7_p_0(
  MR_Word X_8,
  MR_Word ConsId_9,
  MR_Integer ConstNum_10,
  MR_Word UnifyContext_11,
  MR_Word * UnifyGoalExpr_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * STATE_VARIABLE_ModeInfo_30);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_var_var_8_p_0(
  MR_Word X_9,
  MR_Word RHS_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word UnifyGoalInfo0_13,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_35,
  MR_Word * STATE_VARIABLE_ModeInfo_36);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_complicated_unify_12_p_0(
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Type_15,
  MR_Word InitInstX_16,
  MR_Word InitInstY_17,
  MR_Word UnifiedInst_18,
  MR_Word Detism_19,
  MR_Word UnifyContext_20,
  MR_Word Unification0_21,
  MR_Word * Unification_22,
  MR_Word STATE_VARIABLE_ModeInfo_0_59,
  MR_Word * STATE_VARIABLE_ModeInfo_60);

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_1[10][2];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_2[6][3];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_4[3][1];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_5[6][5];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_6[1][7];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_7[1][6];




static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_2[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[5]))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[1])),
    ((MR_Box) (check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[2])),
    ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_4[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "int")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "__LambdaGoal__")) },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_5[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_unify____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_is_exist_constr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_is_exist_constr_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__modecheck_unify__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0 = {
  (MR_String) "ho_insts_match",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1 = {
  (MR_String) "ho_insts_do_not_match",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_ordinal_ordered_match_mode_result_0[2] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0[2] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0
};

static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_mode_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_unify",
  (MR_String) "match_mode_result",
  { check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0 },
  { check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_ordinal_ordered_match_mode_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0,

};

static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0 = {
  (MR_String) "possible_modes",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__modecheck_unify__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1 = {
  (MR_String) "some_ho_args_not_ground",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0[1] = { &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1[1] = { &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1 };

static const MR_DuPtagLayout check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0[2] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1
};

static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_modes_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_unify",
  (MR_String) "match_modes_result",
  { check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0 },
  { check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0,

};

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_rhs_lambda_undetermined_mode__1623__1_2_p_0(
  MR_Word ModuleInfo_16,
  MR_Tuple HeadVar__2_67)
{
  MR_bool succeeded;
  MR_Word PredId_69 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_67, 0))));
  MR_Word PredInfo_71;
  MR_String PredName_72;
  MR_Word Var_73;
  MR_Word Var_74;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, PredId_69, &PredInfo_71);
  Var_73 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  Var_74 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_71);
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_73, Var_74);
  if (succeeded)
  {
    PredName_72 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_71);
    if ((strcmp(PredName_72, (MR_String) "type_info_from_typeclass_info") == 0))
      succeeded = MR_TRUE;
    else
    if ((strcmp(PredName_72, (MR_String) "superclass_from_typeclass_info") == 0))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__categorize_unify_var_lambda__1541__1_1_f_0(
  MR_Word LambdaHeadVar__1_84)
{
  MR_Word LambdaHeadVar__2_85;

  {
    LambdaHeadVar__2_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_85, 0) = ((MR_Box) (LambdaHeadVar__1_84));
    MR_hl_field(0, LambdaHeadVar__2_85, 1) = ((MR_Box) (LambdaHeadVar__1_84));
  }
  return LambdaHeadVar__2_85;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1522__1_2_p_0(
  MR_Word MaybeTakeAddr_32,
  MR_Word HeadVar__2_77)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[3]), ((MR_Box) (MaybeTakeAddr_32)), ((MR_Box) (HeadVar__2_77)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_rhs_lambda_std__1344__1_4_p_0(
  MR_Word ModuleInfo0_23,
  MR_Word InstMap1_30,
  MR_Word VarTable_38,
  MR_Word LambdaHeadVar__1_71)
{
  MR_bool succeeded;
  MR_Word NonLocalType_42;
  MR_Word NonLocalInst_43;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_38, LambdaHeadVar__1_71, &NonLocalType_42);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap1_30, LambdaHeadVar__1_71, &NonLocalInst_43);
  succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(ModuleInfo0_23, NonLocalType_42, NonLocalInst_43, (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_2[3])));
  succeeded = !(succeeded);
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1094__1_1_f_0(
  MR_Word LambdaHeadVar__1_19)
{
  MR_Word LambdaHeadVar__2_20;

  {
    LambdaHeadVar__2_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_20, 0) = ((MR_Box) (LambdaHeadVar__1_19));
  }
  return LambdaHeadVar__2_20;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__776__1_2_p_0(
  MR_Word MaybeTakeAddr_34,
  MR_Word HeadVar__2_74)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[3]), ((MR_Box) (MaybeTakeAddr_34)), ((MR_Box) (HeadVar__2_74)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_var_functor__518__1_2_p_0(
  MR_Word ArgVars0_18,
  MR_Word HeadVar__2_50)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]), ((MR_Box) (ArgVars0_18)), ((MR_Box) (HeadVar__2_50)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_var_functor__516__1_2_p_0(
  MR_Word IsExistConstruction_17,
  MR_Word HeadVar__2_46)
{
  MR_bool succeeded = (IsExistConstruction_17 == HeadVar__2_46);

  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_10_10 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__inst_test__var_inst_contains_any_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_8_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_var_functor__518__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_var_functor__516__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHS_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word UnifyGoalInfo0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * STATE_VARIABLE_ModeInfo_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) RHS_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__modecheck_unify__modecheck_unify_var_var_8_p_0(LHSVar_9, RHS_10, Unification0_11, UnifyContext_12, UnifyGoalInfo0_13, Goal_14, STATE_VARIABLE_ModeInfo_0_27, STATE_VARIABLE_ModeInfo_28);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_29 = ((MR_Word) ((MR_hl_field(1, RHS_10, 0))));
          MR_Word IsExistConstruction_30 = ((MR_Unsigned) ((MR_hl_field(1, RHS_10, 1))) & (MR_Integer) 1);
          MR_Word ArgVars0_31 = ((MR_Word) ((MR_hl_field(1, RHS_10, 2))));
          MR_Word VarTable0_32;
          MR_Word TypeOfX_33;
          MR_Word Purity_34;
          MR_Word PredArgTypes_36;
          MR_Word ShroudedPredProcId_37;
          MR_Word Var_35;

          check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &VarTable0_32);
          parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_32, LHSVar_9, &TypeOfX_33);
          succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(TypeOfX_33, &Purity_34, &Var_35, &PredArgTypes_36);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) ConsId_29)) == (MR_Integer) 2);
            if (succeeded)
              ShroudedPredProcId_37 = (MR_Word) (MR_body((MR_Word) (ConsId_29), (MR_Integer) 2));
          }
          if (succeeded)
          {
            MR_Word ModuleInfo0_38;
            MR_Word Context_39;
            MR_Word PredId_40;
            MR_Integer ProcId_41;
            MR_Word MaybeRHS1_42;
            MR_Word VarTable_43;
            MR_Word Var_46;
            MR_Word STATE_VARIABLE_ModeInfo_37_47;

            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &ModuleInfo0_38);
            check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &Context_39);
            Var_46 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_37);
            PredId_40 = ((MR_Word) ((MR_hl_field(0, Var_46, 0))));
            ProcId_41 = ((MR_Integer) ((MR_hl_field(0, Var_46, 1))));
            check_hlds__polymorphism_lambda__convert_pred_to_lambda_goal_13_p_0(ModuleInfo0_38, Purity_34, LHSVar_9, PredId_40, ProcId_41, ArgVars0_31, PredArgTypes_36, UnifyContext_12, UnifyGoalInfo0_13, Context_39, &MaybeRHS1_42, VarTable0_32, &VarTable_43);
            check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_43, STATE_VARIABLE_ModeInfo_0_27, &STATE_VARIABLE_ModeInfo_37_47);
            if (((MR_tag((MR_Word) MaybeRHS1_42)) == (MR_Integer) 0))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_var_functor\'/8", (MR_String) "could not convert pred to lambda goal; polymorphism.m should have stopped us getting here");
                return;
              }
            else
            {
              MR_Word RHS1_44 = ((MR_Word) ((MR_hl_field(1, MaybeRHS1_42, 0))));
              MR_Word next_value_of_RHS_10 = RHS1_44;
              MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_27 = STATE_VARIABLE_ModeInfo_37_47;

              // direct tailcall eliminated
              ;
              RHS_10 = next_value_of_RHS_10;
              STATE_VARIABLE_ModeInfo_0_27 = next_value_of_STATE_VARIABLE_ModeInfo_0_27;
              continue;
            }
          }
          else
          {
            MR_Integer ConstNum_45;

            succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(ConsId_29, &ConstNum_45);
            if (succeeded)
            {
              MR_Word Var_50;
              MR_Word Var_54;

              {
                Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_50, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[4]));
                MR_hl_field(0, Var_50, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unify_8_p_0_1));
                MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_50, 3) = ((MR_Box) (IsExistConstruction_30));
                MR_hl_field(0, Var_50, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_var_functor\'/8", (MR_String) "const struct construction is existential");
              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_54, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[5]));
                MR_hl_field(0, Var_54, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unify_8_p_0_2));
                MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_54, 3) = ((MR_Box) (ArgVars0_31));
                MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_var_functor\'/8", (MR_String) "const struct construction has args");
              check_hlds__modecheck_unify__modecheck_unify_functor_const_struct_7_p_0(LHSVar_9, ConsId_29, ConstNum_45, UnifyContext_12, Goal_14, STATE_VARIABLE_ModeInfo_0_27, STATE_VARIABLE_ModeInfo_28);
            }
            else
              check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0(LHSVar_9, TypeOfX_33, ConsId_29, IsExistConstruction_30, ArgVars0_31, Unification0_11, UnifyContext_12, UnifyGoalInfo0_13, Goal_14, STATE_VARIABLE_ModeInfo_0_27, STATE_VARIABLE_ModeInfo_28);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Purity_58 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_10, 0))) >> 2)) & (MR_Integer) 3);
          MR_Word HOGroundness_59 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_10, 0))) >> 1)) & (MR_Integer) 1);
          MR_Word LambdaNonLocals_61 = ((MR_Word) ((MR_hl_field(2, RHS_10, 1))));
          MR_Word HeadAnyVar_68;
          MR_Word TailAnyVars_69;
          MR_Word TypeInfo_38_75;
          MR_Word ModuleInfo_65;
          MR_Word InstMap_66;
          MR_Word AnyVars_67;
          MR_Word Var_72;

          succeeded = (Purity_58 != (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = (HOGroundness_59 == (MR_Integer) 0);
            if (succeeded)
            {
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &ModuleInfo_65);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &InstMap_66);
              TypeInfo_38_75 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]);
              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_72, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_7[0]));
                MR_hl_field(0, Var_72, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unify_8_p_0_3));
                MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_72, 3) = ((MR_Box) (ModuleInfo_65));
                MR_hl_field(0, Var_72, 4) = ((MR_Box) (InstMap_66));
              }
              AnyVars_67 = mercury__list__filter_2_f_0(TypeInfo_38_75, Var_72, LambdaNonLocals_61);
              succeeded = (AnyVars_67 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                HeadAnyVar_68 = ((MR_Word) ((MR_hl_field(1, AnyVars_67, 0))));
                TailAnyVars_69 = ((MR_Word) ((MR_hl_field(1, AnyVars_67, 1))));
              }
            }
          }
          if (succeeded)
          {
            MR_Word WaitingVars_70;
            MR_Word OoMAnyVars_71;
            MR_Word Var_73;

            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_70);
            {
              OoMAnyVars_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMAnyVars_71, 0) = ((MR_Box) (HeadAnyVar_68));
              MR_hl_field(0, OoMAnyVars_71, 1) = ((MR_Box) (TailAnyVars_69));
            }
            {
              Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(3, Var_73, 1) = ((MR_Box) (OoMAnyVars_71));
            }
            check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_70, Var_73, STATE_VARIABLE_ModeInfo_0_27, STATE_VARIABLE_ModeInfo_28);
            *Goal_14 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_2[2]));
          }
          else
          {
            succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(UnifyGoalInfo0_13, (MR_Integer) 23);
            if (succeeded)
              check_hlds__modecheck_unify__modecheck_unify_rhs_lambda_undetermined_mode_8_p_0(LHSVar_9, RHS_10, Unification0_11, UnifyContext_12, UnifyGoalInfo0_13, Goal_14, STATE_VARIABLE_ModeInfo_0_27, STATE_VARIABLE_ModeInfo_28);
            else
              check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_121_95_114_104_115_95_108_97_109_98_100_97_95_115_116_100_95_95_91_53_93_95_48_8_p_0(LHSVar_9, RHS_10, Unification0_11, UnifyContext_12, Goal_14, STATE_VARIABLE_ModeInfo_0_27, STATE_VARIABLE_ModeInfo_28);
          }
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_rhs_lambda_undetermined_mode_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_rhs_lambda_undetermined_mode__1623__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Tuple) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_rhs_lambda_undetermined_mode_8_p_0(
  MR_Word X_9,
  MR_Word RHS0_10,
  MR_Word Unification_11,
  MR_Word UnifyContext_12,
  MR_Word GoalInfo0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_47,
  MR_Word * STATE_VARIABLE_ModeInfo_48)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_16;
  MR_Word Goal0_23;
  MR_Word PredId_26;
  MR_Word ArgVars_27;
  MR_Word PredIdsArgs0_24;
  MR_Word PredIdsArgs_25;
  MR_Word Var_49;
  MR_Tuple Var_50;
  MR_Word Var_51;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_47, &ModuleInfo_16);
  Goal0_23 = ((MR_Word) ((MR_hl_field(2, RHS0_10, 4))));
  hlds__goal_util__pred_ids_args_called_from_goal_2_p_0(Goal0_23, &PredIdsArgs0_24);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[3]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unify_rhs_lambda_undetermined_mode_8_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (ModuleInfo_16));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_3[0]), Var_49, PredIdsArgs0_24, &PredIdsArgs_25);
  succeeded = (PredIdsArgs_25 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_50 = ((MR_Tuple) ((MR_hl_field(1, PredIdsArgs_25, 0))));
    Var_51 = ((MR_Word) ((MR_hl_field(1, PredIdsArgs_25, 1))));
    succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PredId_26 = ((MR_Word) ((MR_hl_field(0, Var_50, 0))));
      ArgVars_27 = ((MR_Word) ((MR_hl_field(0, Var_50, 1))));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word ProcModeErrorMap_28;
    MR_Word VarTable_29;
    MR_Word InstMap_30;
    MR_Word CalleePredInfo_96;
    MR_Word CalleeErrorMap_98;
    MR_Word CalleeProcIds_99;
    MR_Word RevMatchedProcIds_100;
    MR_Word NonGroundNonLocals_101;
    MR_Word CalleeErrorMapPrime_97;
    MR_Box conv0_CalleeErrorMapPrime_97;

    check_hlds__mode_info__mode_info_get_proc_mode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_0_47, &ProcModeErrorMap_28);
    check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_47, &VarTable_29);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_47, &InstMap_30);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, PredId_26, &CalleePredInfo_96);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_2[1]), ProcModeErrorMap_28, ((MR_Box) (PredId_26)), &conv0_CalleeErrorMapPrime_97);
    if (succeeded)
    {
      CalleeErrorMapPrime_97 = ((MR_Word) (conv0_CalleeErrorMapPrime_97));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      CalleeErrorMap_98 = CalleeErrorMapPrime_97;
    else
      mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[5]), &CalleeErrorMap_98);
    CalleeProcIds_99 = hlds__hlds_pred__pred_info_all_procids_1_f_0(CalleePredInfo_96);
    check_hlds__modecheck_unify__match_modes_by_higher_order_insts_loop_over_procs_11_p_0(ModuleInfo_16, VarTable_29, InstMap_30, ArgVars_27, CalleePredInfo_96, CalleeErrorMap_98, CalleeProcIds_99, (MR_Word) ((MR_Unsigned) 0U), &RevMatchedProcIds_100, (MR_Word) ((MR_Unsigned) 0U), &NonGroundNonLocals_101);
    if ((NonGroundNonLocals_101 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_107;

      Var_107 = mercury__list__reverse_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), RevMatchedProcIds_100);
      if ((Var_107 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MultiModeError_33;
        MR_Word PredMultiModeError_37;
        MR_Word WaitingVars_38;
        MR_Word ModeError_39;
        MR_Word MultiModeErrorMap0_40;
        MR_Word MultiModeErrorMap_41;
        MR_Word STATE_VARIABLE_ModeInfo_55_55;

        {
          MultiModeError_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MultiModeError_33, 0) = ((MR_Box) (ArgVars_27));
        }
        {
          PredMultiModeError_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredMultiModeError_37, 0) = ((MR_Box) (PredId_26));
          MR_hl_field(0, PredMultiModeError_37, 1) = ((MR_Box) (MultiModeError_33));
        }
        WaitingVars_38 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_9);
        {
          ModeError_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ModeError_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ModeError_39, 1) = ((MR_Box) (X_9));
          MR_hl_field(3, ModeError_39, 2) = ((MR_Box) (PredMultiModeError_37));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_38, ModeError_39, STATE_VARIABLE_ModeInfo_0_47, &STATE_VARIABLE_ModeInfo_55_55);
        check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_55_55, &MultiModeErrorMap0_40);
        mercury__map__set_4_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0), ((MR_Box) (X_9)), ((MR_Box) (PredMultiModeError_37)), MultiModeErrorMap0_40, &MultiModeErrorMap_41);
        check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap_41, STATE_VARIABLE_ModeInfo_55_55, STATE_VARIABLE_ModeInfo_48);
        *Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
      }
      else
      {
        MR_Word Var_94 = ((MR_Word) ((MR_hl_field(1, Var_107, 1))));
        MR_Integer Var_95 = ((MR_Integer) ((MR_hl_field(1, Var_107, 0))));

        if ((Var_94 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeRHS_43;

          check_hlds__polymorphism_lambda__fix_undetermined_mode_lambda_goal_4_p_0(ModuleInfo_16, Var_95, RHS0_10, &MaybeRHS_43);
          if (((MR_tag((MR_Word) MaybeRHS_43)) == (MR_Integer) 0))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_rhs_lambda_undetermined_mode\'/8", (MR_String) "could not fix up lambda goal; polymorphism.m should have stopped us getting here");
              return;
            }
          else
          {
            MR_Word RHS_44 = ((MR_Word) ((MR_hl_field(1, MaybeRHS_43, 0))));
            MR_Word GoalInfo_45;

            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 23, GoalInfo0_13, &GoalInfo_45);
            check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_121_95_114_104_115_95_108_97_109_98_100_97_95_115_116_100_95_95_91_53_93_95_48_8_p_0(X_9, RHS_44, Unification_11, UnifyContext_12, Goal_14, STATE_VARIABLE_ModeInfo_0_47, STATE_VARIABLE_ModeInfo_48);
          }
        }
        else
        {
          MR_Integer ProcB_35 = ((MR_Integer) ((MR_hl_field(1, Var_94, 0))));
          MR_Word ProcCs_36 = ((MR_Word) ((MR_hl_field(1, Var_94, 1))));
          MR_Word MultiModeError_73;
          MR_Word PredMultiModeError_74;
          MR_Word WaitingVars_75;
          MR_Word ModeError_76;
          MR_Word MultiModeErrorMap0_77;
          MR_Word MultiModeErrorMap_78;
          MR_Word STATE_VARIABLE_ModeInfo_55_79;

          {
            MultiModeError_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MultiModeError_73, 0) = ((MR_Box) (ArgVars_27));
            MR_hl_field(1, MultiModeError_73, 1) = ((MR_Box) (Var_95));
            MR_hl_field(1, MultiModeError_73, 2) = ((MR_Box) (ProcB_35));
            MR_hl_field(1, MultiModeError_73, 3) = ((MR_Box) (ProcCs_36));
          }
          {
            PredMultiModeError_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredMultiModeError_74, 0) = ((MR_Box) (PredId_26));
            MR_hl_field(0, PredMultiModeError_74, 1) = ((MR_Box) (MultiModeError_73));
          }
          WaitingVars_75 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_9);
          {
            ModeError_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, ModeError_76, 1) = ((MR_Box) (X_9));
            MR_hl_field(3, ModeError_76, 2) = ((MR_Box) (PredMultiModeError_74));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_75, ModeError_76, STATE_VARIABLE_ModeInfo_0_47, &STATE_VARIABLE_ModeInfo_55_79);
          check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_55_79, &MultiModeErrorMap0_77);
          mercury__map__set_4_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0), ((MR_Box) (X_9)), ((MR_Box) (PredMultiModeError_74)), MultiModeErrorMap0_77, &MultiModeErrorMap_78);
          check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap_78, STATE_VARIABLE_ModeInfo_55_79, STATE_VARIABLE_ModeInfo_48);
          *Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
        }
      }
    }
    else
    {
      MR_Word NonGroundArgVars_32;
      MR_Word MultiModeError_83;
      MR_Word PredMultiModeError_84;
      MR_Word WaitingVars_85;
      MR_Word ModeError_86;
      MR_Word MultiModeErrorMap0_87;
      MR_Word MultiModeErrorMap_88;
      MR_Word STATE_VARIABLE_ModeInfo_55_89;

      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), NonGroundNonLocals_101, &NonGroundArgVars_32);
      {
        MultiModeError_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MultiModeError_83, 0) = ((MR_Box) (NonGroundArgVars_32));
      }
      {
        PredMultiModeError_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredMultiModeError_84, 0) = ((MR_Box) (PredId_26));
        MR_hl_field(0, PredMultiModeError_84, 1) = ((MR_Box) (MultiModeError_83));
      }
      WaitingVars_85 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_9);
      {
        ModeError_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, ModeError_86, 1) = ((MR_Box) (X_9));
        MR_hl_field(3, ModeError_86, 2) = ((MR_Box) (PredMultiModeError_84));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_85, ModeError_86, STATE_VARIABLE_ModeInfo_0_47, &STATE_VARIABLE_ModeInfo_55_89);
      check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_55_89, &MultiModeErrorMap0_87);
      mercury__map__set_4_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0), ((MR_Box) (X_9)), ((MR_Box) (PredMultiModeError_84)), MultiModeErrorMap0_87, &MultiModeErrorMap_88);
      check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap_88, STATE_VARIABLE_ModeInfo_55_89, STATE_VARIABLE_ModeInfo_48);
      *Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_rhs_lambda_undetermined_mode\'/8", (MR_String) "expecting single call");
      return;
    }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_121_95_114_104_115_95_108_97_109_98_100_97_95_115_116_100_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unify_rhs_lambda_std__1344__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_121_95_114_104_115_95_108_97_109_98_100_97_95_115_116_100_95_95_91_53_93_95_48_8_p_0(
  MR_Word X_9,
  MR_Word RHS0_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_67,
  MR_Word * STATE_VARIABLE_ModeInfo_68)
{
  MR_bool succeeded;
  MR_Word Purity_16 = ((((MR_Unsigned) ((MR_hl_field(2, RHS0_10, 0))) >> 2)) & (MR_Integer) 3);
  MR_Word Groundness_17 = ((((MR_Unsigned) ((MR_hl_field(2, RHS0_10, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_10, 0))) & (MR_Integer) 1);
  MR_Word LambdaNonLocals_19 = ((MR_Word) ((MR_hl_field(2, RHS0_10, 1))));
  MR_Word VarsModes_20 = ((MR_Word) ((MR_hl_field(2, RHS0_10, 2))));
  MR_Word Det_21 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_10, 3))) & (MR_Integer) 7);
  MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(2, RHS0_10, 4))));
  MR_Word ModuleInfo0_23;
  MR_Word Vars_24;
  MR_Word Modes_25;
  MR_Word VarInitialInsts_26;
  MR_Word VarInstAL_27;
  MR_Word VarInstMapDelta_28;
  MR_Word InstMap0_29;
  MR_Word InstMap1_30;
  MR_Word ArgLives_31;
  MR_Word LiveVarsList_32;
  MR_Word LiveVars_33;
  MR_Word GoalInfo0_35;
  MR_Word NonLocals0_36;
  MR_Word NonLocals1_37;
  MR_Word VarTable_38;
  MR_Word NonLocals_39;
  MR_Word NonLocalsList_44;
  MR_Word NonLocalTypes_45;
  MR_Word NonLocalInsts_46;
  MR_Word ModuleInfo2_47;
  MR_Word RHS_57;
  MR_Word Unification_58;
  MR_Word UnifyMode_59;
  MR_Word STATE_VARIABLE_ModeInfo_69_69;
  MR_Word STATE_VARIABLE_ModeInfo_70_70;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, RHS0_10, 0)));

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_67, &ModuleInfo0_23);
  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), VarsModes_20, &Vars_24, &Modes_25);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_23, Modes_25, &VarInitialInsts_26);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Vars_24, VarInitialInsts_26, &VarInstAL_27);
  VarInstMapDelta_28 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(VarInstAL_27);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_67, &InstMap0_29);
  hlds__instmap__apply_instmap_delta_3_p_0(VarInstMapDelta_28, InstMap0_29, &InstMap1_30);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_30, STATE_VARIABLE_ModeInfo_0_67, &STATE_VARIABLE_ModeInfo_69_69);
  check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_23, Modes_25, &ArgLives_31);
  check_hlds__modecheck_util__get_live_vars_3_p_0(Vars_24, ArgLives_31, &LiveVarsList_32);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVarsList_32, &LiveVars_33);
  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(LiveVars_33, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_70_70);
  GoalInfo0_35 = ((MR_Word) ((MR_hl_field(0, Goal0_22, 1))));
  NonLocals0_36 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_35);
  parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_24, NonLocals0_36, &NonLocals1_37);
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &VarTable_38);
  switch (Groundness_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FilterPred_40;

        {
          FilterPred_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FilterPred_40, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[0]));
          MR_hl_field(0, FilterPred_40, 1) = ((MR_Box) (check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_121_95_114_104_115_95_108_97_109_98_100_97_95_115_116_100_95_95_91_53_93_95_48_8_p_0_1));
          MR_hl_field(0, FilterPred_40, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, FilterPred_40, 3) = ((MR_Box) (ModuleInfo0_23));
          MR_hl_field(0, FilterPred_40, 4) = ((MR_Box) (InstMap1_30));
          MR_hl_field(0, FilterPred_40, 5) = ((MR_Box) (VarTable_38));
        }
        parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FilterPred_40, NonLocals1_37, &NonLocals_39);
      }
      break;
    case (MR_Integer) 0:
      NonLocals_39 = NonLocals1_37;
      break;
  }
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_39, &NonLocalsList_44);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_38, NonLocalsList_44, &NonLocalTypes_45);
  hlds__instmap__instmap_lookup_vars_3_p_0(InstMap1_30, NonLocalsList_44, &NonLocalInsts_46);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &ModuleInfo2_47);
  succeeded = (Groundness_17 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Purity_16 != (MR_Integer) 2);
  if (succeeded)
    succeeded = check_hlds__inst_test__inst_list_is_ground_3_p_0(ModuleInfo2_47, NonLocalTypes_45, NonLocalInsts_46);
  else
    succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(ModuleInfo2_47, NonLocalInsts_46);
  if (succeeded)
  {
    MR_Word SharedNonLocalInsts_48;
    MR_Word ModuleInfo3_49;
    MR_Word InstMap2_50;
    MR_Word VarLock_51;
    MR_Word HowToCheckGoal_52;
    MR_Word Goal_53;
    MR_Word FinalInsts_54;
    MR_Word InstMap11_55;
    MR_Word RHS1_56;
    MR_Word STATE_VARIABLE_ModeInfo_75_75;
    MR_Word STATE_VARIABLE_ModeInfo_76_76;
    MR_Word STATE_VARIABLE_ModeInfo_77_77;
    MR_Word STATE_VARIABLE_ModeInfo_80_80;
    MR_Word STATE_VARIABLE_ModeInfo_81_81;
    MR_Word STATE_VARIABLE_ModeInfo_83_83;
    MR_Word STATE_VARIABLE_ModeInfo_86_86;
    MR_Word STATE_VARIABLE_ModeInfo_87_87;
    MR_Word STATE_VARIABLE_ModeInfo_88_88;
    MR_Word STATE_VARIABLE_ModeInfo_89_89;

    check_hlds__inst_util__make_shared_inst_list_5_p_0(NonLocalTypes_45, NonLocalInsts_46, &SharedNonLocalInsts_48, ModuleInfo2_47, &ModuleInfo3_49);
    hlds__instmap__instmap_set_vars_corresponding_4_p_0(NonLocalsList_44, SharedNonLocalInsts_48, InstMap1_30, &InstMap2_50);
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo3_49, STATE_VARIABLE_ModeInfo_70_70, &STATE_VARIABLE_ModeInfo_75_75);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap2_50, STATE_VARIABLE_ModeInfo_75_75, &STATE_VARIABLE_ModeInfo_76_76);
    {
      VarLock_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VarLock_51, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
    }
    check_hlds__mode_info__mode_info_lock_vars_4_p_0(VarLock_51, NonLocals_39, STATE_VARIABLE_ModeInfo_76_76, &STATE_VARIABLE_ModeInfo_77_77);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "lambda goal", STATE_VARIABLE_ModeInfo_77_77, &STATE_VARIABLE_ModeInfo_80_80);
    check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(STATE_VARIABLE_ModeInfo_80_80, &HowToCheckGoal_52);
    switch (HowToCheckGoal_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_22, &Goal_53, STATE_VARIABLE_ModeInfo_80_80, &STATE_VARIABLE_ModeInfo_81_81);
        break;
      case (MR_Integer) 1:
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_22, &Goal_53, STATE_VARIABLE_ModeInfo_80_80, &STATE_VARIABLE_ModeInfo_81_81);
        break;
    }
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_23, Modes_25, &FinalInsts_54);
    check_hlds__modes__modecheck_lambda_final_insts_4_p_0(Vars_24, FinalInsts_54, STATE_VARIABLE_ModeInfo_81_81, &STATE_VARIABLE_ModeInfo_83_83);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "lambda goal", STATE_VARIABLE_ModeInfo_83_83, &STATE_VARIABLE_ModeInfo_86_86);
    check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(LiveVars_33, STATE_VARIABLE_ModeInfo_86_86, &STATE_VARIABLE_ModeInfo_87_87);
    check_hlds__mode_info__mode_info_unlock_vars_4_p_0(VarLock_51, NonLocals_39, STATE_VARIABLE_ModeInfo_87_87, &STATE_VARIABLE_ModeInfo_88_88);
    hlds__instmap__instmap_set_vars_corresponding_4_p_0(NonLocalsList_44, SharedNonLocalInsts_48, InstMap0_29, &InstMap11_55);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap11_55, STATE_VARIABLE_ModeInfo_88_88, &STATE_VARIABLE_ModeInfo_89_89);
    {
      RHS1_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, RHS1_56, 0) = (MR_Box) (packed_word_0);
      MR_hl_field(2, RHS1_56, 1) = ((MR_Box) (LambdaNonLocals_19));
      MR_hl_field(2, RHS1_56, 2) = ((MR_Box) (VarsModes_20));
      MR_hl_field(2, RHS1_56, 3) = (MR_Box) ((MR_Unsigned) (Det_21));
      MR_hl_field(2, RHS1_56, 4) = ((MR_Box) (Goal_53));
    }
    check_hlds__modecheck_unify__modecheck_unify_with_lambda_12_p_0(X_9, PredOrFunc_18, LambdaNonLocals_19, Modes_25, Det_21, RHS1_56, &RHS_57, Unification0_11, &Unification_58, &UnifyMode_59, STATE_VARIABLE_ModeInfo_89_89, STATE_VARIABLE_ModeInfo_68);
  }
  else
  {
    MR_Word RevNonGroundVarsInsts_60;
    MR_Word NonGroundVarsInsts_61;

    check_hlds__modecheck_unify__acc_non_ground_vars_6_p_0(ModuleInfo2_47, VarTable_38, InstMap1_30, NonLocalsList_44, (MR_Word) ((MR_Unsigned) 0U), &RevNonGroundVarsInsts_60);
    mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_2[0]), RevNonGroundVarsInsts_60, &NonGroundVarsInsts_61);
    if ((NonGroundVarsInsts_61 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_rhs_lambda_std\'/8", (MR_String) "very strange var");
        return;
      }
    else
    {
      MR_Word BadVar_62;
      MR_Word BadInst_63;
      MR_Word WaitingVars_65;
      MR_Word ModeError_66;
      MR_Word Var_92 = ((MR_Word) ((MR_hl_field(1, NonGroundVarsInsts_61, 0))));

      BadVar_62 = ((MR_Word) ((MR_hl_field(0, Var_92, 0))));
      BadInst_63 = ((MR_Word) ((MR_hl_field(0, Var_92, 1))));
      WaitingVars_65 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BadVar_62);
      {
        ModeError_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_66, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ModeError_66, 1) = ((MR_Box) (BadVar_62));
        MR_hl_field(3, ModeError_66, 2) = ((MR_Box) (BadInst_63));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_65, ModeError_66, STATE_VARIABLE_ModeInfo_70_70, STATE_VARIABLE_ModeInfo_68);
    }
    RHS_57 = RHS0_10;
    UnifyMode_59 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_3[1]);
    Unification_58 = Unification0_11;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *UnifyGoalExpr_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (X_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (RHS_57));
    MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_59));
    MR_hl_field(1, base, 3) = ((MR_Box) (Unification_58));
    MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_12));
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_with_lambda_12_p_0(
  MR_Word X_13,
  MR_Word PredOrFunc_14,
  MR_Word ArgVars_15,
  MR_Word LambdaModes_16,
  MR_Word LambdaDetism_17,
  MR_Word RHS0_18,
  MR_Word * RHS_19,
  MR_Word Unification0_20,
  MR_Word * Unification_21,
  MR_Word * UnifyMode_22,
  MR_Word STATE_VARIABLE_ModeInfo_0_38,
  MR_Word * STATE_VARIABLE_ModeInfo_39)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_24;
  MR_Word InstMap0_25;
  MR_Word InstOfX_26;
  MR_Word InstOfY_27;
  MR_Word LambdaPredInfo_28;
  MR_Word VarTable_29;
  MR_Word TypeOfX_30;
  MR_Word Var_41;
  MR_Word UnifyInst_31;
  MR_Word ModuleInfo1_33;
  MR_Word _Detism_32;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_38, &ModuleInfo0_24);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_38, &InstMap0_25);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_25, X_13, &InstOfX_26);
  {
    LambdaPredInfo_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaPredInfo_28, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
    MR_hl_field(0, LambdaPredInfo_28, 1) = ((MR_Box) (LambdaModes_16));
    MR_hl_field(0, LambdaPredInfo_28, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, LambdaPredInfo_28, 3) = (MR_Box) ((MR_Unsigned) (LambdaDetism_17));
  }
  Var_41 = (MR_Word) (MR_mkword(1, (MR_Word) (LambdaPredInfo_28)));
  {
    InstOfY_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstOfY_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(1, InstOfY_27, 1) = ((MR_Box) (Var_41));
  }
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_38, &VarTable_29);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_29, X_13, &TypeOfX_30);
  succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(TypeOfX_30, (MR_Integer) 1, (MR_Integer) 0, InstOfX_26, InstOfY_27, &UnifyInst_31, &_Detism_32, ModuleInfo0_24, &ModuleInfo1_33);
  if (succeeded)
  {
    MR_Word ArgInsts_35;
    MR_Word STATE_VARIABLE_ModeInfo_45_45;
    MR_Word STATE_VARIABLE_ModeInfo_47_47;

    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_33, STATE_VARIABLE_ModeInfo_0_38, &STATE_VARIABLE_ModeInfo_45_45);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *UnifyMode_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InstOfX_26));
      MR_hl_field(0, base, 1) = ((MR_Box) (UnifyInst_31));
      MR_hl_field(0, base, 2) = ((MR_Box) (InstOfY_27));
      MR_hl_field(0, base, 3) = ((MR_Box) (UnifyInst_31));
    }
    hlds__instmap__instmap_lookup_vars_3_p_0(InstMap0_25, ArgVars_15, &ArgInsts_35);
    check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0(InstOfX_26, UnifyInst_31, ArgInsts_35, X_13, ArgVars_15, PredOrFunc_14, RHS0_18, RHS_19, Unification0_20, Unification_21, STATE_VARIABLE_ModeInfo_45_45, &STATE_VARIABLE_ModeInfo_47_47);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_13, UnifyInst_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_47_47, STATE_VARIABLE_ModeInfo_39);
  }
  else
  {
    MR_Word WaitingVars_36;
    MR_Word ModeError_37;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_ModeInfo_52_52;

    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (X_13));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_50, &WaitingVars_36);
    {
      ModeError_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ModeError_37, 1) = ((MR_Box) (X_13));
      MR_hl_field(3, ModeError_37, 2) = ((MR_Box) (InstOfX_26));
      MR_hl_field(3, ModeError_37, 3) = ((MR_Box) (InstOfY_27));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_36, ModeError_37, STATE_VARIABLE_ModeInfo_0_38, &STATE_VARIABLE_ModeInfo_52_52);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_13, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_52_52, STATE_VARIABLE_ModeInfo_39);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *UnifyMode_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InstOfX_26));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(0, base, 2) = ((MR_Box) (InstOfY_27));
      MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    *Unification_21 = Unification0_20;
    *RHS_19 = RHS0_18;
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_85;

  conv0_LambdaHeadVar__2_85 = check_hlds__modecheck_unify__IntroducedFrom__func__categorize_unify_var_lambda__1541__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_85));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1522__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0(
  MR_Word InitInstX_13,
  MR_Word FinalInstX_14,
  MR_Word ArgInsts_15,
  MR_Word X_16,
  MR_Word ArgVars_17,
  MR_Word PredOrFunc_18,
  MR_Word RHS0_19,
  MR_Word * RHS_20,
  MR_Word Unification0_21,
  MR_Word * Unification_22,
  MR_Word STATE_VARIABLE_ModeInfo_0_72,
  MR_Word * STATE_VARIABLE_ModeInfo_73)
{
  MR_bool succeeded;
  MR_Integer Arity_24;
  MR_Word ConsId_26;
  MR_Word SubInfo_31;
  MR_Word ArgFromToInsts_48;
  MR_Word ArgModes_50;
  MR_Word InstMap_51;
  MR_Word ModuleInfo_52;

  mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ArgVars_17, &Arity_24);
  switch (MR_tag((MR_Word) Unification0_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        ConsId_26 = ((MR_Word) ((MR_hl_field(0, Unification0_21, 1))));
        SubInfo_31 = ((MR_Word) ((MR_hl_field(0, Unification0_21, 6))));
        if (!((SubInfo_31 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word MaybeTakeAddr_32 = ((MR_Word) ((MR_hl_field(1, SubInfo_31, 0))));
          MR_Word Var_74;

          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_74, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[0]));
            MR_hl_field(0, Var_74, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0_1));
            MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_74, 3) = ((MR_Box) (MaybeTakeAddr_32));
            MR_hl_field(0, Var_74, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/12", (MR_String) "take_addr");
        }
      }
      break;
    case (MR_Integer) 1:
      {
        ConsId_26 = ((MR_Word) ((MR_hl_field(1, Unification0_21, 1))));
        SubInfo_31 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        MR_Word DuCtor_47;

        SubInfo_31 = (MR_Word) ((MR_Unsigned) 0U);
        {
          DuCtor_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DuCtor_47, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[2]));
          MR_hl_field(0, DuCtor_47, 1) = ((MR_Box) (Arity_24));
          MR_hl_field(0, DuCtor_47, 2) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[9]));
        }
        ConsId_26 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_47)));
      }
      break;
  }
  ArgFromToInsts_48 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_2[5]), ArgInsts_15);
  check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(ArgFromToInsts_48, ArgFromToInsts_48, &ArgModes_50);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_72, &InstMap_51);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_72, &ModuleInfo_52);
  succeeded = check_hlds__mode_test__init_final_insts_is_output_3_p_0(ModuleInfo_52, InitInstX_13, FinalInstX_14);
  if (succeeded)
  {
    MR_Word ShroudedPredProcId_53;

    succeeded = ((MR_tag((MR_Word) ConsId_26)) == (MR_Integer) 2);
    if (succeeded)
    {
      ShroudedPredProcId_53 = (MR_Word) (MR_body((MR_Word) (ConsId_26), (MR_Integer) 2));
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_51);
    }
    if (succeeded)
    {
      MR_Word PredId_54;
      MR_Integer ProcId_55;
      MR_Word Var_88;
      MR_Word Goal_62;
      MR_Word Var_89;
      MR_Word Var_103;
      MR_Integer Var_104;

      Var_88 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_53);
      PredId_54 = ((MR_Word) ((MR_hl_field(0, Var_88, 0))));
      ProcId_55 = ((MR_Integer) ((MR_hl_field(0, Var_88, 1))));
      succeeded = ((MR_tag((MR_Word) RHS0_19)) == (MR_Integer) 2);
      if (succeeded)
      {
        Goal_62 = ((MR_Word) ((MR_hl_field(2, RHS0_19, 4))));
        Var_89 = ((MR_Word) ((MR_hl_field(0, Goal_62, 0))));
        succeeded = ((MR_tag((MR_Word) Var_89)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_103 = ((MR_Word) ((MR_hl_field(2, Var_89, 0))));
          Var_104 = ((MR_Integer) ((MR_hl_field(2, Var_89, 1))));
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_54, Var_103);
          if (succeeded)
            succeeded = (ProcId_55 == Var_104);
        }
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *RHS_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_26));
          MR_hl_field(1, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(1, base, 2) = ((MR_Box) (ArgVars_17));
        }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/12", (MR_String) "reintroduced lambda goal");
          return;
        }
    }
    else
      *RHS_20 = RHS0_19;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *Unification_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (X_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (ConsId_26));
      MR_hl_field(0, base, 2) = ((MR_Box) (ArgVars_17));
      MR_hl_field(0, base, 3) = ((MR_Box) (ArgModes_50));
      MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, base, 6) = ((MR_Box) (SubInfo_31));
    }
    *STATE_VARIABLE_ModeInfo_73 = STATE_VARIABLE_ModeInfo_0_72;
  }
  else
  {
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_51);
    if (succeeded)
    {
      MR_Word WaitingVars_68;
      MR_Word VarTable0_69;
      MR_Word Type_70;
      MR_Word ModeError_71;
      MR_Word Var_95;

      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_68);
      check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_72, &VarTable0_69);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_69, X_16, &Type_70);
      {
        Var_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_95, 0) = ((MR_Box) (ArgVars_17));
        MR_hl_field(2, Var_95, 1) = ((MR_Box) (ArgFromToInsts_48));
      }
      {
        ModeError_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_71, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, ModeError_71, 1) = ((MR_Box) (X_16));
        MR_hl_field(3, ModeError_71, 2) = ((MR_Box) (Var_95));
        MR_hl_field(3, ModeError_71, 3) = ((MR_Box) (Type_70));
        MR_hl_field(3, ModeError_71, 4) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_68, ModeError_71, STATE_VARIABLE_ModeInfo_0_72, STATE_VARIABLE_ModeInfo_73);
    }
    else
      *STATE_VARIABLE_ModeInfo_73 = STATE_VARIABLE_ModeInfo_0_72;
    *Unification_22 = Unification0_21;
    *RHS_20 = RHS0_19;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__acc_non_ground_vars_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevNonGroundVarsInsts_0_5,
  MR_Word * STATE_VARIABLE_RevNonGroundVarsInsts_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevNonGroundVarsInsts_6 = STATE_VARIABLE_RevNonGroundVarsInsts_0_5;
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Type_19;
      MR_Word Inst_20;
      MR_Word STATE_VARIABLE_RevNonGroundVarsInsts_23_23;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevNonGroundVarsInsts_0_5;

      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, Var_16, &Type_19);
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_3, Var_16, &Inst_20);
      succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_1, Type_19, Inst_20);
      if (succeeded)
        STATE_VARIABLE_RevNonGroundVarsInsts_23_23 = STATE_VARIABLE_RevNonGroundVarsInsts_0_5;
      else
      {
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (Var_16));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) (Inst_20));
        }
        {
          STATE_VARIABLE_RevNonGroundVarsInsts_23_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevNonGroundVarsInsts_23_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, STATE_VARIABLE_RevNonGroundVarsInsts_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevNonGroundVarsInsts_0_5));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Vars_17;
      next_value_of_STATE_VARIABLE_RevNonGroundVarsInsts_0_5 = STATE_VARIABLE_RevNonGroundVarsInsts_23_23;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevNonGroundVarsInsts_0_5 = next_value_of_STATE_VARIABLE_RevNonGroundVarsInsts_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_loop_over_procs_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap_3,
  MR_Word ArgVars_4,
  MR_Word CalleePredInfo_5,
  MR_Word CalleeErrorMap_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_RevMatchedProcIds_0_8,
  MR_Word * STATE_VARIABLE_RevMatchedProcIds_9,
  MR_Word STATE_VARIABLE_NonGroundNonLocals_0_10,
  MR_Word * STATE_VARIABLE_NonGroundNonLocals_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NonGroundNonLocals_11 = STATE_VARIABLE_NonGroundNonLocals_0_10;
      *STATE_VARIABLE_RevMatchedProcIds_9 = STATE_VARIABLE_RevMatchedProcIds_0_8;
    }
    else
    {
      MR_Integer ProcId_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word ProcIds_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_Word STATE_VARIABLE_NonGroundNonLocals_45_45;
      MR_Word STATE_VARIABLE_RevMatchedProcIds_46_46;
      MR_Word CalleeModeErrors_34;
      MR_Box conv0_CalleeModeErrors_34;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_RevMatchedProcIds_0_8;
      MR_Word next_value_of_STATE_VARIABLE_NonGroundNonLocals_0_10;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[5]), CalleeErrorMap_6, ((MR_Box) (ProcId_30)), &conv0_CalleeModeErrors_34);
      if (succeeded)
      {
        CalleeModeErrors_34 = ((MR_Word) (conv0_CalleeModeErrors_34));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = (CalleeModeErrors_34 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        STATE_VARIABLE_NonGroundNonLocals_45_45 = STATE_VARIABLE_NonGroundNonLocals_0_10;
        STATE_VARIABLE_RevMatchedProcIds_46_46 = STATE_VARIABLE_RevMatchedProcIds_0_8;
      }
      else
      {
        MR_Word CalleeProcInfo_37;
        MR_Word ArgModes_38;
        MR_Word ProcNonGroundNonLocals_39;
        MR_Word ProcResult_40;

        hlds__hlds_pred__pred_info_proc_info_3_p_0(CalleePredInfo_5, ProcId_30, &CalleeProcInfo_37);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_37, &ArgModes_38);
        check_hlds__modecheck_unify__match_arg_modes_by_higher_order_insts_7_p_0(ModuleInfo_1, VarTable_2, InstMap_3, ArgVars_4, ArgModes_38, &ProcNonGroundNonLocals_39, &ProcResult_40);
        STATE_VARIABLE_NonGroundNonLocals_45_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ProcNonGroundNonLocals_39, STATE_VARIABLE_NonGroundNonLocals_0_10);
        switch (ProcResult_40) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_RevMatchedProcIds_46_46 = STATE_VARIABLE_RevMatchedProcIds_0_8;
            break;
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_RevMatchedProcIds_46_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevMatchedProcIds_46_46, 0) = ((MR_Box) (ProcId_30));
              MR_hl_field(1, STATE_VARIABLE_RevMatchedProcIds_46_46, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchedProcIds_0_8));
            }
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = ProcIds_31;
      next_value_of_STATE_VARIABLE_RevMatchedProcIds_0_8 = STATE_VARIABLE_RevMatchedProcIds_46_46;
      next_value_of_STATE_VARIABLE_NonGroundNonLocals_0_10 = STATE_VARIABLE_NonGroundNonLocals_45_45;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_RevMatchedProcIds_0_8 = next_value_of_STATE_VARIABLE_RevMatchedProcIds_0_8;
      STATE_VARIABLE_NonGroundNonLocals_0_10 = next_value_of_STATE_VARIABLE_NonGroundNonLocals_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__match_arg_modes_by_higher_order_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.match_arg_modes_by_higher_order_insts\'/7", (MR_String) "too many arguments");
        return;
      }
    else
    {
      MR_Word ArgMode_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ArgModes_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word TailNonGroundArgVars_30;
      MR_Word TailResult_31;
      MR_Word Initial_32;
      MR_Word Var_37;

      check_hlds__modecheck_unify__match_arg_modes_by_higher_order_insts_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Var_38, ArgModes_27, &TailNonGroundArgVars_30, &TailResult_31);
      Initial_32 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(HeadVar__1_1, ArgMode_26);
      succeeded = ((MR_tag((MR_Word) Initial_32)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_37 = ((MR_Word) ((MR_hl_field(1, Initial_32, 1))));
        succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word ArgInst_35;
        MR_Word ArgType_36;

        hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__3_3, Var_39, &ArgInst_35);
        parse_tree__var_table__lookup_var_type_3_p_0(HeadVar__2_2, Var_39, &ArgType_36);
        succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(HeadVar__1_1, ArgType_36, ArgInst_35, Initial_32);
        if (succeeded)
        {
          *HeadVar__6_6 = TailNonGroundArgVars_30;
          *HeadVar__7_7 = TailResult_31;
        }
        else
        {
          succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(HeadVar__1_1, ArgType_36, ArgInst_35);
          if (succeeded)
            *HeadVar__6_6 = TailNonGroundArgVars_30;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailNonGroundArgVars_30));
            }
          *HeadVar__7_7 = (MR_Integer) 1;
        }
      }
      else
      {
        *HeadVar__6_6 = TailNonGroundArgVars_30;
        *HeadVar__7_7 = TailResult_31;
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstOfArgVar_93 = ((MR_Word) ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__conv0_InitInstOfArgVar_93));
  check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_2(env_ptr);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_free_2_p_0((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ModuleInfo0_29, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstOfArgVar_93);
  if ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
    check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__conv0_InitInstOfArgVar_93, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstsOfArgVars_31, check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_3, env_ptr);
      (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_7(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVar_94 = ((MR_Word) ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__conv1_ArgVar_94));
  check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_6(env_ptr);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s *) (env_ptr_arg);

  parse_tree__var_table__lookup_var_type_3_p_0((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__VarTable_30, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVar_94, &(env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgType_92);
  (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ModuleInfo0_29, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgType_92);
  if ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
    check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_5(env_ptr);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_8(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), &(env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__conv1_ArgVar_94, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_7, env_ptr);
      (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0(
  MR_Word X0_12,
  MR_Word TypeOfX_13,
  MR_Word ConsId0_14,
  MR_Word IsExistConstruction_15,
  MR_Word ArgVars0_16,
  MR_Word Unification0_17,
  MR_Word UnifyContext_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalExpr_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_61,
  MR_Word * STATE_VARIABLE_ModeInfo_62)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0_s env;

  (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16 = ArgVars0_16;
  {
    MR_Word InstMap0_22;
    MR_Word X_23;
    MR_Word InitInstOfX_24;
    MR_Word LiveX_25;
    MR_Word ExtraGoalsExistConstruct_26;
    MR_Word InstMap1_27;
    MR_Word HowToCheckGoal_28;
    MR_Word LiveArgs_32;
    MR_Word ConsId_33;
    MR_Word InstConsId_34;
    MR_Word InitInstOfY_35;
    MR_Word STATE_VARIABLE_ModeInfo_63_63;
    MR_Word Var_66;
    MR_Word Var_67;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_61, &InstMap0_22);
    check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(IsExistConstruction_15, X0_12, &X_23, &InitInstOfX_24, &LiveX_25, &ExtraGoalsExistConstruct_26, STATE_VARIABLE_ModeInfo_0_61, &STATE_VARIABLE_ModeInfo_63_63);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_63_63, &InstMap1_27);
    check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(STATE_VARIABLE_ModeInfo_63_63, &HowToCheckGoal_28);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_63_63, &(env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ModuleInfo0_29);
    check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_63_63, &(env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__VarTable_30);
    hlds__instmap__instmap_lookup_vars_3_p_0(InstMap1_27, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16, &(env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstsOfArgVars_31);
    check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(STATE_VARIABLE_ModeInfo_63_63, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16, &LiveArgs_32);
    parse_tree__prog_type__qualify_cons_id_4_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16, ConsId0_14, &ConsId_33, &InstConsId_34);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (InstConsId_34));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstsOfArgVars_31));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      InitInstOfY_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, InitInstOfY_35, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, InitInstOfY_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, InitInstOfY_35, 2) = ((MR_Box) (Var_66));
    }
    (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ((MR_Box) (X_23)), (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16);
    if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
      check_hlds__modecheck_unify__handle_occur_check_failure_9_p_0(X_23, TypeOfX_13, InitInstOfX_24, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstsOfArgVars_31, InstConsId_34, GoalExpr_20, STATE_VARIABLE_ModeInfo_63_63, STATE_VARIABLE_ModeInfo_62);
    else
    {
      MR_Word UnifiedInst_36;
      MR_Word Detism_37;
      MR_Word ModuleInfo1_38;
      MR_Word Var_70;

      (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_free_2_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ModuleInfo0_29, InitInstOfX_24);
      if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
      {
        check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_4(&env);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
          check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_8(&env);
      }
      (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = !((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded);
      if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
      {
        Var_70 = (MR_Integer) 0;
        (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(TypeOfX_13, LiveX_25, Var_70, InitInstOfX_24, InstConsId_34, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstsOfArgVars_31, LiveArgs_32, &UnifiedInst_36, &Detism_37, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ModuleInfo0_29, &ModuleInfo1_38);
      }
      if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
      {
        MR_Word UnifyMode_39;
        MR_Word ArgFromToInsts_40;
        MR_Word InitInstOfX1_41;
        MR_Integer Arity_42;
        MR_Word InitInstOfXArgs_43;
        MR_Word ModeOfXArgs_44;
        MR_Word Unification1_45;
        MR_Word Unification_46;
        MR_Word ArgVars_47;
        MR_Word ExtraGoalsSplitSubUnifies_48;
        MR_Word STATE_VARIABLE_ModeInfo_71_71;
        MR_Word STATE_VARIABLE_ModeInfo_73_73;
        MR_Word STATE_VARIABLE_ModeInfo_74_74;
        MR_Word Var_75;
        MR_Word STATE_VARIABLE_ModeInfo_76_76;
        MR_Word STATE_VARIABLE_ModeInfo_77_77;
        MR_Word ArgFromToInstsPrime_97;
        MR_Word ArgFromToInstsPrime_100;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;

        check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_38, STATE_VARIABLE_ModeInfo_63_63, &STATE_VARIABLE_ModeInfo_71_71);
        {
          UnifyMode_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnifyMode_39, 0) = ((MR_Box) (InitInstOfX_24));
          MR_hl_field(0, UnifyMode_39, 1) = ((MR_Box) (UnifiedInst_36));
          MR_hl_field(0, UnifyMode_39, 2) = ((MR_Box) (InitInstOfY_35));
          MR_hl_field(0, UnifyMode_39, 3) = ((MR_Box) (UnifiedInst_36));
        }
        (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstsOfArgVars_31, UnifiedInst_36, &ArgFromToInstsPrime_97);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
          ArgFromToInsts_40 = ArgFromToInstsPrime_97;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.get_mode_of_args\'/3", (MR_String) "try_get_mode_of_args failed");
            return;
          }
        check_hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo1_38, InitInstOfX_24, &InitInstOfX1_41);
        mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16, &Arity_42);
        parse_tree__prog_mode__get_arg_insts_det_4_p_0(InitInstOfX1_41, InstConsId_34, Arity_42, &InitInstOfXArgs_43);
        (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(InitInstOfXArgs_43, UnifiedInst_36, &ArgFromToInstsPrime_100);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
          ModeOfXArgs_44 = ArgFromToInstsPrime_100;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.get_mode_of_args\'/3", (MR_String) "try_get_mode_of_args failed");
            return;
          }
        check_hlds__modecheck_unify__categorize_unify_var_functor_13_p_0(InitInstOfX_24, UnifiedInst_36, ModeOfXArgs_44, ArgFromToInsts_40, X_23, ConsId_33, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__VarTable_30, UnifyContext_18, Unification0_17, &Unification1_45, STATE_VARIABLE_ModeInfo_71_71, &STATE_VARIABLE_ModeInfo_73_73);
        check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(Unification1_45, &Unification_46, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16, &ArgVars_47, &ExtraGoalsSplitSubUnifies_48, STATE_VARIABLE_ModeInfo_73_73, &STATE_VARIABLE_ModeInfo_74_74);
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (InitInstOfY_35));
        }
        check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_23, UnifiedInst_36, Var_75, STATE_VARIABLE_ModeInfo_74_74, &STATE_VARIABLE_ModeInfo_76_76);
        check_hlds__modecheck_unify__bind_args_if_needed_6_p_0(InitInstOfX_24, UnifiedInst_36, ArgVars_47, InitInstOfXArgs_43, STATE_VARIABLE_ModeInfo_76_76, &STATE_VARIABLE_ModeInfo_77_77);
        (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) Unification_46)) == (MR_Integer) 0);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
          (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = (LiveX_25 == (MR_Integer) 1);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
        {
          *GoalExpr_20 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_2[2]));
          *STATE_VARIABLE_ModeInfo_62 = STATE_VARIABLE_ModeInfo_77_77;
        }
        else
        {
          (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = (Detism_37 == (MR_Integer) 7);
          if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
          {
            *GoalExpr_20 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_1[7]));
            check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(X_23, InitInstOfX_24, ConsId_33, STATE_VARIABLE_ModeInfo_77_77, STATE_VARIABLE_ModeInfo_62);
          }
          else
          {
            MR_Word Functor_56;
            MR_Word UnifyExpr_57;
            MR_Word ExtraGoals_58;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_59;
            MR_Word Var_60;

            {
              Functor_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Functor_56, 0) = ((MR_Box) (ConsId_33));
              MR_hl_field(1, Functor_56, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstruction_15));
              MR_hl_field(1, Functor_56, 2) = ((MR_Box) (ArgVars_47));
            }
            {
              UnifyExpr_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UnifyExpr_57, 0) = ((MR_Box) (X_23));
              MR_hl_field(1, UnifyExpr_57, 1) = ((MR_Box) (Functor_56));
              MR_hl_field(1, UnifyExpr_57, 2) = ((MR_Box) (UnifyMode_39));
              MR_hl_field(1, UnifyExpr_57, 3) = ((MR_Box) (Unification_46));
              MR_hl_field(1, UnifyExpr_57, 4) = ((MR_Box) (UnifyContext_18));
            }
            check_hlds__modecheck_util__append_extra_goals_3_p_0(ExtraGoalsExistConstruct_26, ExtraGoalsSplitSubUnifies_48, &ExtraGoals_58);
            (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = (HowToCheckGoal_28 == (MR_Integer) 1);
            if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
            {
              (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = (ExtraGoals_58 != (MR_Word) ((MR_Unsigned) 0U));
              if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
                (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_27);
            }
            if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__succeeded)
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_functor_std\'/11", (MR_String) "re-modecheck of unification encountered complicated sub-unifies");
                return;
              }
            else
            {
            }
            {
              Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_86, 0) = ((MR_Box) (X0_12));
              MR_hl_field(1, Var_86, 1) = ((MR_Box) ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16));
            }
            {
              Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_87, 0) = ((MR_Box) (X_23));
              MR_hl_field(1, Var_87, 1) = ((MR_Box) (ArgVars_47));
            }
            check_hlds__modecheck_util__handle_extra_goals_9_p_0(UnifyExpr_57, ExtraGoals_58, GoalInfo0_19, Var_86, Var_87, InstMap0_22, GoalExpr_20, STATE_VARIABLE_ModeInfo_77_77, STATE_VARIABLE_ModeInfo_62);
          }
        }
      }
      else
      {
        MR_Word Var_89;

        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (X_23));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) ((env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16));
        }
        check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(X_23, InstConsId_34, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__ArgVars0_16, InitInstOfX_24, (env).check_hlds__modecheck_unify__modecheck_unify_functor_std_11_p_0_env_0__InitInstsOfArgVars_31, Var_89, GoalExpr_20, STATE_VARIABLE_ModeInfo_63_63, STATE_VARIABLE_ModeInfo_62);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(
  MR_Word ArgInitInsts_4,
  MR_Word FinalInst_5,
  MR_Word * ArgFromToInsts_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) FinalInst_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(FinalInst_5)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(ArgInitInsts_4, FinalInst_5, ArgFromToInsts_6);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, FinalInst_5, 1))));

          succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(ArgInitInsts_4, FinalInst_5, ArgFromToInsts_6);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundInsts_9 = ((MR_Word) ((MR_hl_field(2, FinalInst_5, 2))));

          if ((BoundInsts_9 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(ArgInitInsts_4, (MR_Word) ((MR_Unsigned) 4U), ArgFromToInsts_6);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word FunctorArgInsts_11;
            MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, BoundInsts_9, 0))));
            MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, BoundInsts_9, 1))));

            succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FunctorArgInsts_11 = ((MR_Word) ((MR_hl_field(0, Var_17, 1))));
              check_hlds__modecheck_unify__pair_up_insts_3_p_0(ArgInitInsts_4, FunctorArgInsts_11, ArgFromToInsts_6);
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, FinalInst_5, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_13 = ((MR_Word) ((MR_hl_field(3, FinalInst_5, 2))));
              MR_Word next_value_of_FinalInst_5 = SubInst_13;

              // direct tailcall eliminated
              ;
              FinalInst_5 = next_value_of_FinalInst_5;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_14 = ((MR_Word) ((MR_hl_field(3, FinalInst_5, 2))));

              succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(ArgInitInsts_4, FinalInst_5, ArgFromToInsts_6);
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FinalInst_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InitInst_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word InitInsts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word FromToInst_8;
    MR_Word FromToInsts_9;

    {
      FromToInst_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FromToInst_8, 0) = ((MR_Box) (InitInst_5));
      MR_hl_field(0, FromToInst_8, 1) = ((MR_Box) (FinalInst_2));
    }
    check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(InitInsts_6, FinalInst_2, &FromToInsts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FromToInst_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (FromToInsts_9));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__pair_up_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.pair_up_insts\'/3", (MR_String) "mismatched list lengths");
        return;
      }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.pair_up_insts\'/3", (MR_String) "mismatched list lengths");
        return;
      }
    else
    {
      MR_Word InstB_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word InstsB_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word FromToInst_18;
      MR_Word FromToInsts_19;

      {
        FromToInst_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FromToInst_18, 0) = ((MR_Box) (Var_21));
        MR_hl_field(0, FromToInst_18, 1) = ((MR_Box) (InstB_16));
      }
      check_hlds__modecheck_unify__pair_up_insts_3_p_0(Var_20, InstsB_17, &FromToInsts_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FromToInst_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (FromToInsts_19));
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_20;

  conv0_LambdaHeadVar__2_20 = check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1094__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0(
  MR_Word InstOfX_7,
  MR_Word Inst_8,
  MR_Word ArgVars_9,
  MR_Word InstOfXArgs_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * STATE_VARIABLE_ModeInfo_17)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_12;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_16, &ModuleInfo_12);
  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_12, InstOfX_7);
  if (succeeded)
    *STATE_VARIABLE_ModeInfo_17 = STATE_VARIABLE_ModeInfo_0_16;
  else
  {
    MR_Word InFromGroundTerm_13;

    check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(STATE_VARIABLE_ModeInfo_0_16, &InFromGroundTerm_13);
    switch (InFromGroundTerm_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModeInfo_17 = STATE_VARIABLE_ModeInfo_0_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnifyArgInsts_14;
          MR_Word STATE_VARIABLE_ModeInfo_12_25;

          UnifyArgInsts_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[4]), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_2[4]), InstOfXArgs_10);
          succeeded = check_hlds__modecheck_unify__try_bind_args_5_p_0(Inst_8, ArgVars_9, UnifyArgInsts_14, STATE_VARIABLE_ModeInfo_0_16, &STATE_VARIABLE_ModeInfo_12_25);
          if (succeeded)
            *STATE_VARIABLE_ModeInfo_17 = STATE_VARIABLE_ModeInfo_12_25;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.bind_args\'/5", (MR_String) "try_bind_args failed");
              return;
            }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(
  MR_Word X_6,
  MR_Word InstOfX_7,
  MR_Word ConsId_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20)
{
  MR_Word ModuleInfo_10;
  MR_Word Globals_11;
  MR_Word WarnCannotSucceed_12;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &ModuleInfo_10);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 27, &WarnCannotSucceed_12);
  switch (WarnCannotSucceed_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ModeInfo_20 = STATE_VARIABLE_ModeInfo_0_19;
      break;
    case (MR_Integer) 1:
      {
        MR_Word InDuplForSwitch_13;

        check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &InDuplForSwitch_13);
        switch (InDuplForSwitch_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ModeInfo_20 = STATE_VARIABLE_ModeInfo_0_19;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_14;
              MR_Word PredInfo_15;
              MR_Word Origin_16;
              MR_Word ReportWarning_17;

              check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &PredId_14);
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_14, &PredInfo_15);
              hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_15, &Origin_16);
              ReportWarning_17 = check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(Origin_16);
              switch (ReportWarning_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_ModeInfo_20 = STATE_VARIABLE_ModeInfo_0_19;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Warning_18;

                    {
                      Warning_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Warning_18, 0) = ((MR_Box) (X_6));
                      MR_hl_field(1, Warning_18, 1) = ((MR_Box) (InstOfX_7));
                      MR_hl_field(1, Warning_18, 2) = ((MR_Box) (ConsId_8));
                    }
                    check_hlds__mode_info__mode_info_warning_3_p_0(Warning_18, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(
  MR_Word X_10,
  MR_Word InstConsId_11,
  MR_Word ArgVars0_12,
  MR_Word InstOfX_13,
  MR_Word InstArgs_14,
  MR_Word WaitingVarsList_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * STATE_VARIABLE_ModeInfo_23)
{
  MR_bool succeeded;
  MR_Word WaitingVars_18;
  MR_Word ModeError_19;
  MR_Word NoArgInsts_21;
  MR_Word STATE_VARIABLE_ModeInfo_24_24;
  MR_Word STATE_VARIABLE_ModeInfo_26_26;
  MR_Integer Var_27;
  MR_Word STATE_VARIABLE_ModeInfo_12_34;

  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), WaitingVarsList_15, &WaitingVars_18);
  {
    ModeError_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ModeError_19, 0) = ((MR_Box) (X_10));
    MR_hl_field(2, ModeError_19, 1) = ((MR_Box) (InstConsId_11));
    MR_hl_field(2, ModeError_19, 2) = ((MR_Box) (ArgVars0_12));
    MR_hl_field(2, ModeError_19, 3) = ((MR_Box) (InstOfX_13));
    MR_hl_field(2, ModeError_19, 4) = ((MR_Box) (InstArgs_14));
  }
  check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_18, ModeError_19, STATE_VARIABLE_ModeInfo_0_22, &STATE_VARIABLE_ModeInfo_24_24);
  check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_10, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_24_24, &STATE_VARIABLE_ModeInfo_26_26);
  Var_27 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ArgVars0_12);
  NoArgInsts_21 = mercury__list__duplicate_2_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[4]), Var_27, ((MR_Box) ((MR_Unsigned) 0U)));
  succeeded = check_hlds__modecheck_unify__try_bind_args_5_p_0((MR_Word) ((MR_Unsigned) 4U), ArgVars0_12, NoArgInsts_21, STATE_VARIABLE_ModeInfo_26_26, &STATE_VARIABLE_ModeInfo_12_34);
  if (succeeded)
    *STATE_VARIABLE_ModeInfo_23 = STATE_VARIABLE_ModeInfo_12_34;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.bind_args\'/5", (MR_String) "try_bind_args failed");
      return;
    }
  *GoalExpr_16 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_1[7]));
}

static void MR_CALL 
check_hlds__modecheck_unify__handle_occur_check_failure_9_p_0(
  MR_Word X_10,
  MR_Word TypeOfX_11,
  MR_Word InitInstOfX_12,
  MR_Word ArgVars0_13,
  MR_Word InitInstsOfArgVars_14,
  MR_Word InstConsId_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_18;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &ModuleInfo0_18);
  succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo0_18, TypeOfX_11, InitInstOfX_12);
  if (succeeded)
  {
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_10, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
    *GoalExpr_16 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_1[7]));
  }
  else
  {
    MR_Word Var_25;
    MR_Word WaitingVars_28;
    MR_Word ModeError_29;
    MR_Word NoArgInsts_31;
    MR_Word STATE_VARIABLE_ModeInfo_24_32;
    MR_Word STATE_VARIABLE_ModeInfo_26_34;
    MR_Integer Var_35;
    MR_Word STATE_VARIABLE_ModeInfo_12_41;

    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (X_10));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_25, &WaitingVars_28);
    {
      ModeError_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ModeError_29, 0) = ((MR_Box) (X_10));
      MR_hl_field(2, ModeError_29, 1) = ((MR_Box) (InstConsId_15));
      MR_hl_field(2, ModeError_29, 2) = ((MR_Box) (ArgVars0_13));
      MR_hl_field(2, ModeError_29, 3) = ((MR_Box) (InitInstOfX_12));
      MR_hl_field(2, ModeError_29, 4) = ((MR_Box) (InitInstsOfArgVars_14));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_28, ModeError_29, STATE_VARIABLE_ModeInfo_0_19, &STATE_VARIABLE_ModeInfo_24_32);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_10, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_24_32, &STATE_VARIABLE_ModeInfo_26_34);
    Var_35 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ArgVars0_13);
    NoArgInsts_31 = mercury__list__duplicate_2_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[4]), Var_35, ((MR_Box) ((MR_Unsigned) 0U)));
    succeeded = check_hlds__modecheck_unify__try_bind_args_5_p_0((MR_Word) ((MR_Unsigned) 4U), ArgVars0_13, NoArgInsts_31, STATE_VARIABLE_ModeInfo_26_34, &STATE_VARIABLE_ModeInfo_12_41);
    if (succeeded)
      *STATE_VARIABLE_ModeInfo_20 = STATE_VARIABLE_ModeInfo_12_41;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.bind_args\'/5", (MR_String) "try_bind_args failed");
        return;
      }
    *GoalExpr_16 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_1[7]));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_5_p_0(
  MR_Word Inst_6,
  MR_Word ArgVars_7,
  MR_Word UnifyArgInsts_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstMap_10;

              hlds__instmap__init_unreachable_1_p_0(&InstMap_10);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_10, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_11 = ((MR_Unsigned) ((MR_hl_field(1, Inst_6, 0))) & (MR_Integer) 7);
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, Inst_6, 1))));

          succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = check_hlds__modecheck_unify__ground_args_5_p_0(Uniq_11, ArgVars_7, UnifyArgInsts_8, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(2, Inst_6, 2))));

          if ((BoundInsts_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word InstMap_29;

            hlds__instmap__init_unreachable_1_p_0(&InstMap_29);
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_29, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word ArgInsts_16;
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, 0))));
            MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, 1))));

            ArgInsts_16 = ((MR_Word) ((MR_hl_field(0, Var_25, 1))));
            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = check_hlds__modecheck_unify__try_bind_arg_list_5_p_0(ArgVars_7, ArgInsts_16, UnifyArgInsts_8, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_18 = ((MR_Word) ((MR_hl_field(3, Inst_6, 2))));
              MR_Word next_value_of_Inst_6 = SubInst_18;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__ground_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Arg_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word UnifyArgInst_13;
      MR_Word UnifyArgInsts_14;
      MR_Word Ground_16;
      MR_Word Var_19;
      MR_Word STATE_VARIABLE_ModeInfo_20_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_4;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        UnifyArgInst_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        UnifyArgInsts_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        Var_19 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Ground_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Ground_16, 0) = (MR_Box) ((MR_Unsigned) (HeadVar__1_1));
          MR_hl_field(1, Ground_16, 1) = ((MR_Box) (Var_19));
        }
        check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Arg_11, Ground_16, UnifyArgInst_13, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_20_20);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Args_12;
        next_value_of_HeadVar__3_3 = UnifyArgInsts_14;
        next_value_of_STATE_VARIABLE_ModeInfo_0_4 = STATE_VARIABLE_ModeInfo_20_20;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_ModeInfo_0_4 = next_value_of_STATE_VARIABLE_ModeInfo_0_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_arg_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Arg_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Args_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Inst_11;
      MR_Word Insts_12;
      MR_Word UnifyArgInst_13;
      MR_Word UnifyArgInsts_14;
      MR_Word STATE_VARIABLE_ModeInfo_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Inst_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        Insts_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          UnifyArgInst_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
          UnifyArgInsts_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Arg_9, Inst_11, UnifyArgInst_13, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Args_10;
          next_value_of_HeadVar__2_2 = Insts_12;
          next_value_of_HeadVar__3_3 = UnifyArgInsts_14;
          next_value_of_STATE_VARIABLE_ModeInfo_0_4 = STATE_VARIABLE_ModeInfo_18_18;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          STATE_VARIABLE_ModeInfo_0_4 = next_value_of_STATE_VARIABLE_ModeInfo_0_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(
  MR_Word Unification0_8,
  MR_Word * Unification_9,
  MR_Word ArgVars0_10,
  MR_Word * ArgVars_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_21,
  MR_Word * STATE_VARIABLE_ModeInfo_22)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Unification0_8)) == (MR_Integer) 1);
  MR_Word X_14;
  MR_Word ConsId_15;
  MR_Word ArgModes0_16;
  MR_Word TypeInfo_27_27;
  MR_Word Var_26;
  MR_Unsigned packed_word_0;

  if (succeeded)
  {
    X_14 = ((MR_Word) ((MR_hl_field(1, Unification0_8, 0))));
    ConsId_15 = ((MR_Word) ((MR_hl_field(1, Unification0_8, 1))));
    Var_26 = ((MR_Word) ((MR_hl_field(1, Unification0_8, 2))));
    ArgModes0_16 = ((MR_Word) ((MR_hl_field(1, Unification0_8, 3))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(1, Unification0_8, 4)));
    TypeInfo_27_27 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgVars0_10)), ((MR_Box) (Var_26)));
  }
  if (succeeded)
  {
    MR_Word ArgVars1_19;
    MR_Word ExtraGoals1_20;
    MR_Word STATE_VARIABLE_ModeInfo_23_23;

    succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_loop_6_p_0(ArgVars0_10, ArgModes0_16, &ArgVars1_19, &ExtraGoals1_20, STATE_VARIABLE_ModeInfo_0_21, &STATE_VARIABLE_ModeInfo_23_23);
    if (succeeded)
    {
      *STATE_VARIABLE_ModeInfo_22 = STATE_VARIABLE_ModeInfo_23_23;
      *ExtraGoals_12 = ExtraGoals1_20;
      *ArgVars_11 = ArgVars1_19;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *Unification_9 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (X_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (ConsId_15));
        MR_hl_field(1, base, 2) = ((MR_Box) (*ArgVars_11));
        MR_hl_field(1, base, 3) = ((MR_Box) (ArgModes0_16));
        MR_hl_field(1, base, 4) = (MR_Box) (packed_word_0);
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.split_complicated_subunifies\'/7", (MR_String) "split_complicated_subunifies_loop failed");
        return;
      }
  }
  else
  {
    *Unification_9 = Unification0_8;
    *ArgVars_11 = ArgVars0_10;
    *ExtraGoals_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_22 = STATE_VARIABLE_ModeInfo_0_21;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_loop_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModeInfo_6 = STATE_VARIABLE_ModeInfo_0_5;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word Var0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Vars0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgMode0_12;
    MR_Word ArgModes0_13;
    MR_Word ModuleInfo_17;
    MR_Word InitInstX_18;
    MR_Word FinalInstX_19;
    MR_Word InitInstY_20;
    MR_Word FinalInstY_21;
    MR_Word VarTable0_22;
    MR_Word VarType_23;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgMode0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgModes0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_5, &ModuleInfo_17);
      InitInstX_18 = ((MR_Word) ((MR_hl_field(0, ArgMode0_12, 0))));
      FinalInstX_19 = ((MR_Word) ((MR_hl_field(0, ArgMode0_12, 1))));
      InitInstY_20 = ((MR_Word) ((MR_hl_field(0, ArgMode0_12, 2))));
      FinalInstY_21 = ((MR_Word) ((MR_hl_field(0, ArgMode0_12, 3))));
      check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_5, &VarTable0_22);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_22, Var0_10, &VarType_23);
      Var_30 = (MR_Integer) 0;
      check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_17, InitInstX_18, FinalInstX_19, VarType_23, &Var_36);
      succeeded = (Var_30 == Var_36);
      if (succeeded)
      {
        Var_31 = (MR_Integer) 0;
        check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_17, InitInstY_20, FinalInstY_21, VarType_23, &Var_37);
        succeeded = (Var_31 == Var_37);
      }
      if (succeeded)
      {
        MR_Word Var_24;
        MR_Word ExtraGoals0_25;
        MR_Word Vars1_26;
        MR_Word ExtraGoals1_27;
        MR_Word STATE_VARIABLE_ModeInfo_32_32;
        MR_Word VarTable0_38;
        MR_Word VarEntry0_39;
        MR_Word VarEntry_40;
        MR_Word VarTable_41;
        MR_Word VarType_42;
        MR_Word ExtraGoal_43;
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_50;

        check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_5, &VarTable0_38);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_38, Var0_10, &VarEntry0_39);
        Var_49 = ((MR_Word) ((MR_hl_field(0, VarEntry0_39, 1))));
        Var_50 = ((MR_Unsigned) ((MR_hl_field(0, VarEntry0_39, 2))) & (MR_Integer) 1);
        {
          VarEntry_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VarEntry_40, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, VarEntry_40, 1) = ((MR_Box) (Var_49));
          MR_hl_field(0, VarEntry_40, 2) = (MR_Box) ((MR_Unsigned) (Var_50));
        }
        parse_tree__var_table__add_var_entry_4_p_0(VarEntry_40, &Var_24, VarTable0_38, &VarTable_41);
        check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_41, STATE_VARIABLE_ModeInfo_0_5, &STATE_VARIABLE_ModeInfo_32_32);
        VarType_42 = ((MR_Word) ((MR_hl_field(0, VarEntry0_39, 1))));
        check_hlds__modecheck_util__create_var_var_unification_5_p_0(Var0_10, Var_24, VarType_42, STATE_VARIABLE_ModeInfo_32_32, &ExtraGoal_43);
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (ExtraGoal_43));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ExtraGoals0_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ExtraGoals0_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, ExtraGoals0_25, 1) = ((MR_Box) (Var_46));
        }
        succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_loop_6_p_0(Vars0_11, ArgModes0_13, &Vars1_26, &ExtraGoals1_27, STATE_VARIABLE_ModeInfo_32_32, STATE_VARIABLE_ModeInfo_6);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
            MR_hl_field(1, base, 1) = ((MR_Box) (Vars1_26));
          }
          check_hlds__modecheck_util__append_extra_goals_3_p_0(ExtraGoals0_25, ExtraGoals1_27, HeadVar__4_4);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word Vars1_35;

        succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_loop_6_p_0(Vars0_11, ArgModes0_13, &Vars1_35, HeadVar__4_4, STATE_VARIABLE_ModeInfo_0_5, STATE_VARIABLE_ModeInfo_6);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var0_10));
            MR_hl_field(1, base, 1) = ((MR_Box) (Vars1_35));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__776__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_13_p_0(
  MR_Word InitInstOfX_14,
  MR_Word FinalInstOfX_15,
  MR_Word FromToInstsOfXArgs_16,
  MR_Word ArgFromToInsts_17,
  MR_Word X_18,
  MR_Word NewConsId_19,
  MR_Word ArgVars_20,
  MR_Word VarTable_21,
  MR_Word UnifyContext_22,
  MR_Word Unification0_23,
  MR_Word * Unification_24,
  MR_Word STATE_VARIABLE_ModeInfo_0_69,
  MR_Word * STATE_VARIABLE_ModeInfo_70)
{
  MR_bool succeeded;
  MR_Word TypeOfX_26;
  MR_Word SubInfo_36;
  MR_Word ConsId_37;
  MR_Word ArgModes_50;
  MR_Word ModuleInfo_51;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_21, X_18, &TypeOfX_26);
  switch (MR_tag((MR_Word) Unification0_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        ConsId_37 = ((MR_Word) ((MR_hl_field(0, Unification0_23, 1))));
        SubInfo_36 = ((MR_Word) ((MR_hl_field(0, Unification0_23, 6))));
        if (!((SubInfo_36 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word MaybeTakeAddr_34 = ((MR_Word) ((MR_hl_field(1, SubInfo_36, 0))));
          MR_Word Var_71;

          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_71, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[0]));
            MR_hl_field(0, Var_71, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_functor_13_p_0_1));
            MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_71, 3) = ((MR_Box) (MaybeTakeAddr_34));
            MR_hl_field(0, Var_71, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_71, (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_functor\'/13", (MR_String) "take_addr");
        }
      }
      break;
    case (MR_Integer) 1:
      {
        ConsId_37 = ((MR_Word) ((MR_hl_field(1, Unification0_23, 1))));
        SubInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        SubInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
        ConsId_37 = NewConsId_19;
      }
      break;
  }
  check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(FromToInstsOfXArgs_16, ArgFromToInsts_17, &ArgModes_50);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_69, &ModuleInfo_51);
  succeeded = check_hlds__mode_test__init_final_insts_is_output_3_p_0(ModuleInfo_51, InitInstOfX_14, FinalInstOfX_15);
  if (succeeded)
  {
    MR_Word Var_77;
    MR_Word STATE_VARIABLE_ModeInfo_78_78;
    MR_Word STATE_VARIABLE_ModeInfo_79_79;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *Unification_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (X_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (ConsId_37));
      MR_hl_field(0, base, 2) = ((MR_Box) (ArgVars_20));
      MR_hl_field(0, base, 3) = ((MR_Box) (ArgModes_50));
      MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, base, 6) = ((MR_Box) (SubInfo_36));
    }
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (UnifyContext_22));
    }
    check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_77, STATE_VARIABLE_ModeInfo_0_69, &STATE_VARIABLE_ModeInfo_78_78);
    check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(ArgVars_20, VarTable_21, STATE_VARIABLE_ModeInfo_78_78, &STATE_VARIABLE_ModeInfo_79_79);
    check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_79_79, STATE_VARIABLE_ModeInfo_70);
  }
  else
  {
    MR_Word CanFail_60;
    MR_Word ExpandedInitInstOfX_52;
    MR_Word ExpandedFinalInstOfX_56;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;

    check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_51, InitInstOfX_14, &ExpandedInitInstOfX_52);
    succeeded = ((MR_tag((MR_Word) ExpandedInitInstOfX_52)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_81 = ((MR_Word) ((MR_hl_field(2, ExpandedInitInstOfX_52, 2))));
      succeeded = (Var_81 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_82 = ((MR_Word) ((MR_hl_field(1, Var_81, 1))));
        succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_51, FinalInstOfX_15, &ExpandedFinalInstOfX_56);
          succeeded = ((MR_tag((MR_Word) ExpandedFinalInstOfX_56)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_83 = ((MR_Word) ((MR_hl_field(2, ExpandedFinalInstOfX_56, 2))));
            succeeded = (Var_83 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_84 = ((MR_Word) ((MR_hl_field(1, Var_83, 1))));
              succeeded = (Var_84 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      CanFail_60 = (MR_Integer) 1;
      *STATE_VARIABLE_ModeInfo_70 = STATE_VARIABLE_ModeInfo_0_69;
    }
    else
    {
      MR_Word Constructors_61;
      MR_Word Var_85;

      succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_51, TypeOfX_26, &Constructors_61);
      if (succeeded)
      {
        succeeded = (Constructors_61 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_85 = ((MR_Word) ((MR_hl_field(1, Constructors_61, 1))));
          succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        CanFail_60 = (MR_Integer) 1;
        *STATE_VARIABLE_ModeInfo_70 = STATE_VARIABLE_ModeInfo_0_69;
      }
      else
      {
        MR_Word InstMap0_63;
        MR_Word PredOrFunc_65;
        MR_Word Var_64;
        MR_Word Var_66;

        CanFail_60 = (MR_Integer) 0;
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_69, &InstMap0_63);
        succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(TypeOfX_26, &Var_64, &PredOrFunc_65, &Var_66);
        if (succeeded)
          succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_63);
        if (succeeded)
        {
          MR_Word WaitingVars_67;
          MR_Word ModeError_68;
          MR_Word Var_86;

          parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_67);
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (ConsId_37));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) (ArgVars_20));
          }
          {
            ModeError_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_68, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, ModeError_68, 1) = ((MR_Box) (X_18));
            MR_hl_field(3, ModeError_68, 2) = ((MR_Box) (Var_86));
            MR_hl_field(3, ModeError_68, 3) = ((MR_Box) (TypeOfX_26));
            MR_hl_field(3, ModeError_68, 4) = (MR_Box) ((MR_Unsigned) (PredOrFunc_65));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_67, ModeError_68, STATE_VARIABLE_ModeInfo_0_69, STATE_VARIABLE_ModeInfo_70);
        }
        else
          *STATE_VARIABLE_ModeInfo_70 = STATE_VARIABLE_ModeInfo_0_69;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *Unification_24 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (ConsId_37));
      MR_hl_field(1, base, 2) = ((MR_Box) (ArgVars_20));
      MR_hl_field(1, base, 3) = ((MR_Box) (ArgModes_50));
      MR_hl_field(1, base, 4) = (MR_Box) (((((MR_Unsigned) (CanFail_60) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
    else
    {
      MR_Word ArgVar_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ArgVars_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ArgType_16;

      parse_tree__var_table__lookup_var_type_3_p_0(HeadVar__2_2, ArgVar_11, &ArgType_16);
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(ArgType_16);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_ModeInfo_20_20;
        MR_Word STATE_VARIABLE_ModeInfo_22_22;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_4;

        check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_20_20);
        check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(ArgVar_11, ArgType_16, (MR_Word) (MR_mkword(1, &check_hlds__modecheck_unify_scalar_common_1[8])), STATE_VARIABLE_ModeInfo_20_20, &STATE_VARIABLE_ModeInfo_22_22);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = ArgVars_12;
        next_value_of_STATE_VARIABLE_ModeInfo_0_4 = STATE_VARIABLE_ModeInfo_22_22;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_ModeInfo_0_4 = next_value_of_STATE_VARIABLE_ModeInfo_0_4;
        continue;
      }
      else
        *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(
  MR_Word IsExistConstruction_9,
  MR_Word X0_10,
  MR_Word * X_11,
  MR_Word * InitInstX_12,
  MR_Word * LiveX_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20)
{
  MR_bool succeeded;
  MR_Word InstMap0_16;
  MR_Word InitInstX0_17;
  MR_Word ModuleInfo0_18;

  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &InstMap0_16);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_16, X0_10, &InitInstX0_17);
  succeeded = (IsExistConstruction_9 == (MR_Integer) 1);
  if (succeeded)
  {
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &ModuleInfo0_18);
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo0_18, InitInstX0_17);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word VarTable0_21;
    MR_Word VarEntry0_22;
    MR_Word VarEntry_23;
    MR_Word VarTable_24;
    MR_Word VarType_25;
    MR_Word ExtraGoal_26;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;

    check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &VarTable0_21);
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_21, X0_10, &VarEntry0_22);
    Var_32 = ((MR_Word) ((MR_hl_field(0, VarEntry0_22, 1))));
    Var_33 = ((MR_Unsigned) ((MR_hl_field(0, VarEntry0_22, 2))) & (MR_Integer) 1);
    {
      VarEntry_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarEntry_23, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, VarEntry_23, 1) = ((MR_Box) (Var_32));
      MR_hl_field(0, VarEntry_23, 2) = (MR_Box) ((MR_Unsigned) (Var_33));
    }
    parse_tree__var_table__add_var_entry_4_p_0(VarEntry_23, X_11, VarTable0_21, &VarTable_24);
    check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_24, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
    VarType_25 = ((MR_Word) ((MR_hl_field(0, VarEntry0_22, 1))));
    check_hlds__modecheck_util__create_var_var_unification_5_p_0(X0_10, *X_11, VarType_25, *STATE_VARIABLE_ModeInfo_20, &ExtraGoal_26);
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (ExtraGoal_26));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ExtraGoals_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_29));
    }
    *InitInstX_12 = (MR_Word) ((MR_Unsigned) 0U);
    *LiveX_13 = (MR_Integer) 0;
  }
  else
  {
    *X_11 = X0_10;
    *InitInstX_12 = InitInstX0_17;
    check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_19, *X_11, LiveX_13);
    *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_20 = STATE_VARIABLE_ModeInfo_0_19;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_const_struct_7_p_0(
  MR_Word X_8,
  MR_Word ConsId_9,
  MR_Integer ConstNum_10,
  MR_Word UnifyContext_11,
  MR_Word * UnifyGoalExpr_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * STATE_VARIABLE_ModeInfo_30)
{
  MR_bool succeeded;
  MR_Word InstMap_14;
  MR_Word InstOfX_15;
  MR_Word ModuleInfo0_16;
  MR_Word ConstStructDb_17;
  MR_Word ConstStruct_18;
  MR_Word InstOfY_22;

  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &InstMap_14);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_14, X_8, &InstOfX_15);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &ModuleInfo0_16);
  hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo0_16, &ConstStructDb_17);
  hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_17, ConstNum_10, &ConstStruct_18);
  InstOfY_22 = ((MR_Word) ((MR_hl_field(0, ConstStruct_18, 3))));
  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo0_16, InstOfX_15);
  if (succeeded)
  {
    MR_Word Unification_25;
    MR_Word UnifyMode_26;
    MR_Word Var_31;
    MR_Word Var_40;

    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (InstOfY_22));
    }
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_8, InstOfY_22, Var_31, STATE_VARIABLE_ModeInfo_0_29, STATE_VARIABLE_ModeInfo_30);
    {
      Unification_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Unification_25, 0) = ((MR_Box) (X_8));
      MR_hl_field(0, Unification_25, 1) = ((MR_Box) (ConsId_9));
      MR_hl_field(0, Unification_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_25, 4) = ((MR_Box) (MR_mkword(2, &check_hlds__modecheck_unify_scalar_common_4[0])));
      MR_hl_field(0, Unification_25, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Unification_25, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      UnifyMode_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyMode_26, 0) = ((MR_Box) (InstOfX_15));
      MR_hl_field(0, UnifyMode_26, 1) = ((MR_Box) (InstOfY_22));
      MR_hl_field(0, UnifyMode_26, 2) = ((MR_Box) (InstOfY_22));
      MR_hl_field(0, UnifyMode_26, 3) = ((MR_Box) (InstOfY_22));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (ConsId_9));
      MR_hl_field(1, Var_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, Var_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *UnifyGoalExpr_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_40));
      MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_26));
      MR_hl_field(1, base, 3) = ((MR_Box) (Unification_25));
      MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_11));
    }
  }
  else
  {
    MR_Word WaitingVars_27;
    MR_Word ModeError_28;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_ModeInfo_47_47;
    MR_Word Var_57;
    MR_Word Unification_61;
    MR_Word UnifyMode_62;

    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (X_8));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_43, &WaitingVars_27);
    {
      ModeError_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ModeError_28, 0) = ((MR_Box) (X_8));
      MR_hl_field(2, ModeError_28, 1) = ((MR_Box) (ConsId_9));
      MR_hl_field(2, ModeError_28, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, ModeError_28, 3) = ((MR_Box) (InstOfX_15));
      MR_hl_field(2, ModeError_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_27, ModeError_28, STATE_VARIABLE_ModeInfo_0_29, &STATE_VARIABLE_ModeInfo_47_47);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_8, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_47_47, STATE_VARIABLE_ModeInfo_30);
    {
      Unification_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Unification_61, 0) = ((MR_Box) (X_8));
      MR_hl_field(0, Unification_61, 1) = ((MR_Box) (ConsId_9));
      MR_hl_field(0, Unification_61, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_61, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Unification_61, 4) = ((MR_Box) (MR_mkword(2, &check_hlds__modecheck_unify_scalar_common_4[0])));
      MR_hl_field(0, Unification_61, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Unification_61, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      UnifyMode_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyMode_62, 0) = ((MR_Box) (InstOfX_15));
      MR_hl_field(0, UnifyMode_62, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(0, UnifyMode_62, 2) = ((MR_Box) (InstOfY_22));
      MR_hl_field(0, UnifyMode_62, 3) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (ConsId_9));
      MR_hl_field(1, Var_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, Var_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *UnifyGoalExpr_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_57));
      MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_62));
      MR_hl_field(1, base, 3) = ((MR_Box) (Unification_61));
      MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_11));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_var_var_8_p_0(
  MR_Word X_9,
  MR_Word RHS_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word UnifyGoalInfo0_13,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_35,
  MR_Word * STATE_VARIABLE_ModeInfo_36)
{
  MR_bool succeeded;
  MR_Word Y_16 = ((MR_Word) ((MR_hl_field(0, RHS_10, 0))));
  MR_Word ModuleInfo0_17;
  MR_Word VarTable_18;
  MR_Word InstMap_19;
  MR_Word InstOfX_20;
  MR_Word InstOfY_21;
  MR_Word LiveX_22;
  MR_Word LiveY_23;
  MR_Word BothLive_24;
  MR_Word TypeOfX_25;
  MR_Word UnifiedInst_26;
  MR_Word Detism_27;
  MR_Word ModuleInfo1_28;
  MR_Word _XLockedReason_29;
  MR_Word _YLockedReason_30;
  MR_Word TypeInfo_56_56;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &ModuleInfo0_17);
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &VarTable_18);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &InstMap_19);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_19, X_9, &InstOfX_20);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_19, Y_16, &InstOfY_21);
  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_35, X_9, &LiveX_22);
  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_35, Y_16, &LiveY_23);
  succeeded = (LiveX_22 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (LiveY_23 == (MR_Integer) 0);
  if (succeeded)
    BothLive_24 = (MR_Integer) 0;
  else
    BothLive_24 = (MR_Integer) 1;
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_18, X_9, &TypeOfX_25);
  succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_9_p_0(TypeOfX_25, BothLive_24, (MR_Integer) 0, InstOfX_20, InstOfY_21, &UnifiedInst_26, &Detism_27, ModuleInfo0_17, &ModuleInfo1_28);
  if (succeeded)
  {
    succeeded = (UnifiedInst_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_0_35, X_9, &_XLockedReason_29);
      if (succeeded)
      {
        succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_0_35, Y_16, &_YLockedReason_30);
        if (succeeded)
        {
          TypeInfo_56_56 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (X_9)), ((MR_Box) (Y_16)));
          succeeded = !(succeeded);
        }
      }
    }
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_ModeInfo_38_38;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_ModeInfo_40_40;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_ModeInfo_42_42;
    MR_Word ModuleInfo0_57;
    MR_Word Unification_58;
    MR_Word STATE_VARIABLE_ModeInfo_52_77;
    MR_Word AssignTarget_61;
    MR_Word AssignSource_62;
    MR_Word Var_78;
    MR_Word Var_88;

    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_28, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_38_38);
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (InstOfY_21));
    }
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_9, UnifiedInst_26, Var_39, STATE_VARIABLE_ModeInfo_38_38, &STATE_VARIABLE_ModeInfo_40_40);
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (InstOfX_20));
    }
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Y_16, UnifiedInst_26, Var_41, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_42_42);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_42_42, &ModuleInfo0_57);
    succeeded = check_hlds__mode_test__init_final_insts_is_output_3_p_0(ModuleInfo0_57, InstOfX_20, UnifiedInst_26);
    if (succeeded)
    {
      {
        Unification_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Unification_58, 0) = ((MR_Box) (X_9));
        MR_hl_field(2, Unification_58, 1) = ((MR_Box) (Y_16));
      }
      STATE_VARIABLE_ModeInfo_52_77 = STATE_VARIABLE_ModeInfo_42_42;
    }
    else
    {
      succeeded = check_hlds__mode_test__init_final_insts_is_output_3_p_0(ModuleInfo0_57, InstOfY_21, UnifiedInst_26);
      if (succeeded)
      {
        {
          Unification_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Unification_58, 0) = ((MR_Box) (Y_16));
          MR_hl_field(2, Unification_58, 1) = ((MR_Box) (X_9));
        }
        STATE_VARIABLE_ModeInfo_52_77 = STATE_VARIABLE_ModeInfo_42_42;
      }
      else
      {
        succeeded = check_hlds__mode_test__init_final_insts_is_unused_3_p_0(ModuleInfo0_57, InstOfX_20, UnifiedInst_26);
        if (succeeded)
          succeeded = check_hlds__mode_test__init_final_insts_is_unused_3_p_0(ModuleInfo0_57, InstOfY_21, UnifiedInst_26);
        if (succeeded)
        {
          switch (LiveX_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                Unification_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Unification_58, 0) = ((MR_Box) (X_9));
                MR_hl_field(2, Unification_58, 1) = ((MR_Box) (Y_16));
              }
              break;
            case (MR_Integer) 0:
              switch (LiveY_23) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    Unification_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Unification_58, 0) = ((MR_Box) (Y_16));
                    MR_hl_field(2, Unification_58, 1) = ((MR_Box) (X_9));
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_var\'/15", (MR_String) "free-free unify!");
                    return;
                  }
                  break;
              }
              break;
          }
          STATE_VARIABLE_ModeInfo_52_77 = STATE_VARIABLE_ModeInfo_42_42;
        }
        else
        {
          succeeded = (InstOfX_20 == (MR_Word) ((MR_Unsigned) 4U));
          if (!(succeeded))
            succeeded = (InstOfY_21 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            {
              Unification_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Unification_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Unification_58, 1) = ((MR_Box) (X_9));
              MR_hl_field(3, Unification_58, 2) = ((MR_Box) (Y_16));
            }
            STATE_VARIABLE_ModeInfo_52_77 = STATE_VARIABLE_ModeInfo_42_42;
          }
          else
          {
            MR_Word Type_59;
            MR_Word Var_60;

            parse_tree__var_table__lookup_var_type_3_p_0(VarTable_18, X_9, &Type_59);
            succeeded = check_hlds__type_util__type_is_atomic_2_p_0(ModuleInfo0_57, Type_59);
            if (succeeded)
            {
              succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo0_57, Type_59, &Var_60);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              {
                Unification_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Unification_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Unification_58, 1) = ((MR_Box) (X_9));
                MR_hl_field(3, Unification_58, 2) = ((MR_Box) (Y_16));
              }
              STATE_VARIABLE_ModeInfo_52_77 = STATE_VARIABLE_ModeInfo_42_42;
            }
            else
            {
              MR_Word Var_76;
              MR_Word Var_87;

              Var_87 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_59, Var_87);
              if (succeeded)
              {
                Var_76 = (MR_Integer) 22;
                succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(UnifyGoalInfo0_13, Var_76);
              }
              if (succeeded)
              {
                {
                  Unification_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Unification_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Unification_58, 1) = ((MR_Box) (X_9));
                  MR_hl_field(3, Unification_58, 2) = ((MR_Box) (Y_16));
                }
                STATE_VARIABLE_ModeInfo_52_77 = STATE_VARIABLE_ModeInfo_42_42;
              }
              else
                check_hlds__modecheck_unify__modecheck_complicated_unify_12_p_0(X_9, Y_16, Type_59, InstOfX_20, InstOfY_21, UnifiedInst_26, Detism_27, UnifyContext_12, Unification0_11, &Unification_58, STATE_VARIABLE_ModeInfo_42_42, &STATE_VARIABLE_ModeInfo_52_77);
            }
          }
        }
      }
    }
    succeeded = ((MR_tag((MR_Word) Unification_58)) == (MR_Integer) 2);
    if (succeeded)
    {
      AssignTarget_61 = ((MR_Word) ((MR_hl_field(2, Unification_58, 0))));
      AssignSource_62 = ((MR_Word) ((MR_hl_field(2, Unification_58, 1))));
      Var_78 = (MR_Integer) 1;
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_52_77, AssignTarget_61, &Var_88);
      succeeded = (Var_78 == Var_88);
    }
    if (succeeded)
    {
      MR_Word NonLocals_90;

      *UnifyGoalExpr_14 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_2[2]));
      NonLocals_90 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(UnifyGoalInfo0_13);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_90, AssignTarget_61);
      if (succeeded)
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_90, AssignSource_62);
      if (succeeded)
        *STATE_VARIABLE_ModeInfo_36 = STATE_VARIABLE_ModeInfo_52_77;
      else
        check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(STATE_VARIABLE_ModeInfo_52_77, STATE_VARIABLE_ModeInfo_36);
    }
    else
    {
      MR_Word TestVar1_63;
      MR_Word TestVar2_64;

      succeeded = (Detism_27 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Unification_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification_58, 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          TestVar1_63 = ((MR_Word) ((MR_hl_field(3, Unification_58, 1))));
          TestVar2_64 = ((MR_Word) ((MR_hl_field(3, Unification_58, 2))));
        }
      }
      if (succeeded)
      {
        MR_Word NonLocals_92;

        *UnifyGoalExpr_14 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_2[2]));
        NonLocals_92 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(UnifyGoalInfo0_13);
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_92, TestVar1_63);
        if (succeeded)
          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_92, TestVar2_64);
        if (succeeded)
          *STATE_VARIABLE_ModeInfo_36 = STATE_VARIABLE_ModeInfo_52_77;
        else
          check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(STATE_VARIABLE_ModeInfo_52_77, STATE_VARIABLE_ModeInfo_36);
      }
      else
      {
        succeeded = (Detism_27 == (MR_Integer) 7);
        if (succeeded)
        {
          MR_Word ModuleInfo_65;
          MR_Word Globals_66;
          MR_Word WarnCannotSucceed_67;

          *UnifyGoalExpr_14 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_1[7]));
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_52_77, &ModuleInfo_65);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_65, &Globals_66);
          libs__globals__lookup_bool_option_3_p_0(Globals_66, (MR_Integer) 27, &WarnCannotSucceed_67);
          switch (WarnCannotSucceed_67) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_ModeInfo_36 = STATE_VARIABLE_ModeInfo_52_77;
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredId_68;
                MR_Word PredInfo_69;
                MR_Word Origin_70;
                MR_Word ReportWarning_71;

                check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_52_77, &PredId_68);
                hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_65, PredId_68, &PredInfo_69);
                hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_69, &Origin_70);
                ReportWarning_71 = check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(Origin_70);
                switch (ReportWarning_71) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_ModeInfo_36 = STATE_VARIABLE_ModeInfo_52_77;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Warning_72;

                      {
                        Warning_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Warning_72, 0) = ((MR_Box) (X_9));
                        MR_hl_field(0, Warning_72, 1) = ((MR_Box) (Y_16));
                        MR_hl_field(0, Warning_72, 2) = ((MR_Box) (InstOfX_20));
                        MR_hl_field(0, Warning_72, 3) = ((MR_Box) (InstOfY_21));
                      }
                      check_hlds__mode_info__mode_info_warning_3_p_0(Warning_72, STATE_VARIABLE_ModeInfo_52_77, STATE_VARIABLE_ModeInfo_36);
                    }
                    break;
                }
              }
              break;
          }
        }
        else
        {
          MR_Word UnifyModes_73;

          {
            UnifyModes_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, UnifyModes_73, 0) = ((MR_Box) (InstOfX_20));
            MR_hl_field(0, UnifyModes_73, 1) = ((MR_Box) (UnifiedInst_26));
            MR_hl_field(0, UnifyModes_73, 2) = ((MR_Box) (InstOfY_21));
            MR_hl_field(0, UnifyModes_73, 3) = ((MR_Box) (UnifiedInst_26));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *UnifyGoalExpr_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, base, 1) = ((MR_Box) (RHS_10));
            MR_hl_field(1, base, 2) = ((MR_Box) (UnifyModes_73));
            MR_hl_field(1, base, 3) = ((MR_Box) (Unification_58));
            MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_12));
          }
          *STATE_VARIABLE_ModeInfo_36 = STATE_VARIABLE_ModeInfo_52_77;
        }
      }
    }
  }
  else
  {
    MR_Word WaitingVars_31;
    MR_Word ModeError_32;
    MR_Word Unification_33;
    MR_Word UnifyMode_34;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_ModeInfo_47_47;
    MR_Word STATE_VARIABLE_ModeInfo_49_49;

    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Y_16));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (X_9));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_44, &WaitingVars_31);
    {
      ModeError_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModeError_32, 0) = ((MR_Box) (X_9));
      MR_hl_field(0, ModeError_32, 1) = ((MR_Box) (Y_16));
      MR_hl_field(0, ModeError_32, 2) = ((MR_Box) (InstOfX_20));
      MR_hl_field(0, ModeError_32, 3) = ((MR_Box) (InstOfY_21));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_31, ModeError_32, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_47_47);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_9, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_47_47, &STATE_VARIABLE_ModeInfo_49_49);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Y_16, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_49_49, STATE_VARIABLE_ModeInfo_36);
    {
      Unification_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Unification_33, 0) = ((MR_Box) (X_9));
      MR_hl_field(2, Unification_33, 1) = ((MR_Box) (Y_16));
    }
    {
      UnifyMode_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyMode_34, 0) = ((MR_Box) (InstOfX_20));
      MR_hl_field(0, UnifyMode_34, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(0, UnifyMode_34, 2) = ((MR_Box) (InstOfY_21));
      MR_hl_field(0, UnifyMode_34, 3) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *UnifyGoalExpr_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (RHS_10));
      MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_34));
      MR_hl_field(1, base, 3) = ((MR_Box) (Unification_33));
      MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_12));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_complicated_unify_12_p_0(
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Type_15,
  MR_Word InitInstX_16,
  MR_Word InitInstY_17,
  MR_Word UnifiedInst_18,
  MR_Word Detism_19,
  MR_Word UnifyContext_20,
  MR_Word Unification0_21,
  MR_Word * Unification_22,
  MR_Word STATE_VARIABLE_ModeInfo_0_59,
  MR_Word * STATE_VARIABLE_ModeInfo_60)
{
  MR_bool succeeded;
  MR_Word UnifyMode_24;
  MR_Word CanFail_25;
  MR_Word UnifyTypeInfoVars_30;
  MR_Word ModuleInfo0_38;
  MR_Word STATE_VARIABLE_ModeInfo_71_71;
  MR_Word Var_26;
  MR_Word UnifyTypeInfoVars0_29;
  MR_Word Errors_39;

  {
    UnifyMode_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_24, 0) = ((MR_Box) (InitInstX_16));
    MR_hl_field(0, UnifyMode_24, 1) = ((MR_Box) (UnifiedInst_18));
    MR_hl_field(0, UnifyMode_24, 2) = ((MR_Box) (InitInstY_17));
    MR_hl_field(0, UnifyMode_24, 3) = ((MR_Box) (UnifiedInst_18));
  }
  parse_tree__prog_data__determinism_components_3_p_0(Detism_19, &CanFail_25, &Var_26);
  succeeded = ((((MR_tag((MR_Word) Unification0_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification0_21, 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    UnifyTypeInfoVars0_29 = ((MR_Word) ((MR_hl_field(3, Unification0_21, 3))));
    UnifyTypeInfoVars_30 = UnifyTypeInfoVars0_29;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_complicated_unify\'/12", (MR_String) "non-complicated unify");
      return;
    }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *Unification_22 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (UnifyMode_24));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_25));
    MR_hl_field(3, base, 3) = ((MR_Box) (UnifyTypeInfoVars_30));
  }
  if ((UnifyTypeInfoVars_30 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ModeInfo_71_71 = STATE_VARIABLE_ModeInfo_0_59;
  else
  {
    MR_Integer NumTypeInfoVars_33;
    MR_Word ExpectedInsts_34;
    MR_Word ArgOffset_35;
    MR_Word Var_67;
    MR_Word STATE_VARIABLE_ModeInfo_68_68;
    MR_Word STATE_VARIABLE_ModeInfo_70_70;
    MR_Word _InstVarSub_36;
    MR_Word _BadInstVars_37;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), UnifyTypeInfoVars_30, &NumTypeInfoVars_33);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumTypeInfoVars_33, ((MR_Box) (MR_mkword(1, &check_hlds__modecheck_unify_scalar_common_1[8]))), &ExpectedInsts_34);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (UnifyContext_20));
    }
    check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_67, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_68_68);
    ArgOffset_35 = check_hlds__modecheck_util__unify_method_event_cast_modecheck_arg_offset_0_f_0();
    check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0((MR_Word) ((MR_Unsigned) 0U), ArgOffset_35, UnifyTypeInfoVars_30, ExpectedInsts_34, &_InstVarSub_36, &_BadInstVars_37, STATE_VARIABLE_ModeInfo_68_68, &STATE_VARIABLE_ModeInfo_70_70);
    check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &STATE_VARIABLE_ModeInfo_71_71);
  }
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &ModuleInfo0_38);
  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &Errors_39);
  succeeded = (Errors_39 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *STATE_VARIABLE_ModeInfo_60 = STATE_VARIABLE_ModeInfo_71_71;
  else
  {
    succeeded = ((MR_tag((MR_Word) Type_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo0_38, InitInstX_16);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word WaitingVars_44;
      MR_Word ModeError_45;

      WaitingVars_44 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_13);
      {
        ModeError_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ModeError_45, 0) = ((MR_Box) (X_13));
        MR_hl_field(1, ModeError_45, 1) = ((MR_Box) (InitInstX_16));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_44, ModeError_45, STATE_VARIABLE_ModeInfo_71_71, STATE_VARIABLE_ModeInfo_60);
    }
    else
    {
      succeeded = ((MR_tag((MR_Word) Type_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo0_38, InitInstY_17);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word WaitingVars_77;
        MR_Word ModeError_78;

        WaitingVars_77 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_14);
        {
          ModeError_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModeError_78, 0) = ((MR_Box) (Y_14));
          MR_hl_field(1, ModeError_78, 1) = ((MR_Box) (InitInstY_17));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_77, ModeError_78, STATE_VARIABLE_ModeInfo_71_71, STATE_VARIABLE_ModeInfo_60);
      }
      else
      {
        MR_Word PredOrFunc_49;
        MR_Word Var_48;
        MR_Word Var_50;

        succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_15, &Var_48, &PredOrFunc_49, &Var_50);
        if (succeeded)
        {
          MR_Word PredId_51;
          MR_Word PredInfo_52;
          MR_Word InstMap0_53;

          check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &PredId_51);
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_38, PredId_51, &PredInfo_52);
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &InstMap0_53);
          succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_52);
          if (!(succeeded))
            succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap0_53);
          if (succeeded)
            *STATE_VARIABLE_ModeInfo_60 = STATE_VARIABLE_ModeInfo_71_71;
          else
          {
            MR_Word Var_74;
            MR_Word WaitingVars_79;
            MR_Word ModeError_80;

            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_79);
            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_74, 0) = ((MR_Box) (Y_14));
            }
            {
              ModeError_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ModeError_80, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, ModeError_80, 1) = ((MR_Box) (X_13));
              MR_hl_field(3, ModeError_80, 2) = ((MR_Box) (Var_74));
              MR_hl_field(3, ModeError_80, 3) = ((MR_Box) (Type_15));
              MR_hl_field(3, ModeError_80, 4) = (MR_Box) ((MR_Unsigned) (PredOrFunc_49));
            }
            check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_79, ModeError_80, STATE_VARIABLE_ModeInfo_71_71, STATE_VARIABLE_ModeInfo_60);
          }
        }
        else
        {
          MR_Word TypeCtor_54;

          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_15, &TypeCtor_54);
          if (succeeded)
          {
            MR_Word Context_55;
            MR_Word InstVarSet_56;
            MR_Word UnifyProcId_57;
            MR_Word ModuleInfo_58;

            check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &Context_55);
            check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &InstVarSet_56);
            {
              UnifyProcId_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, UnifyProcId_57, 0) = ((MR_Box) (TypeCtor_54));
              MR_hl_field(0, UnifyProcId_57, 1) = ((MR_Box) (UnifyMode_24));
            }
            check_hlds__proc_requests__request_unify_6_p_0(UnifyProcId_57, InstVarSet_56, Detism_19, Context_55, ModuleInfo0_38, &ModuleInfo_58);
            check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_58, STATE_VARIABLE_ModeInfo_71_71, STATE_VARIABLE_ModeInfo_60);
          }
          else
            *STATE_VARIABLE_ModeInfo_60 = STATE_VARIABLE_ModeInfo_71_71;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_unify____Unify____match_mode_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_unify____Compare____match_mode_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_unify____Unify____match_modes_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_unify____Compare____match_modes_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__modecheck_unify__init(void)
{
}

void mercury__check_hlds__modecheck_unify__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_mode_result_0);
  MR_register_type_ctor_info(&check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_modes_result_0);
}

void mercury__check_hlds__modecheck_unify__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modecheck_unify__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.modecheck_unify.
