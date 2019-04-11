/*
** Automatically generated from `modecheck_unify.m'
** by the Mercury compiler,
** version rotd-2018-06-12
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unique_modes.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s {
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16;
  MR_bool check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31;
  jmp_buf check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_105_105;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_37;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_38;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_39;
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_37;
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_38;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0;

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1;

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0[2];

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0[2];

static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0[2];

static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0[1];

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_1[1];

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0[2];

static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0[2];

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1618__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1378__1_2_p_0(
  MR_Word MaybeTakeAddr_32,
  MR_Word HeadVar__2_75);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1273__1_2_p_0(
  MR_Word MaybeTakeAddr_30,
  MR_Word HeadVar__2_90);

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__modecheck_unify_lambda__509__1_1_f_0(
  MR_Word LambdaHeadVar__1_49);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__459__1_3_p_0(
  MR_Word InstMap1_33,
  MR_Word ModuleInfo2_48,
  MR_Word LambdaHeadVar__1_96);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__380__1_4_p_0(
  MR_Word ModuleInfo0_25,
  MR_Word InstMap1_33,
  MR_Word NonLocalTypes_42,
  MR_Word LambdaHeadVar__1_73);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__277__1_2_p_0(
  MR_Word ArgVars0_14,
  MR_Word HeadVar__2_56);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__275__1_2_p_0(
  MR_Word IsExistConstruction_13,
  MR_Word HeadVar__2_52);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(
  MR_Word tscc_proc_2_input_1_X_11,
  MR_Word tscc_proc_2_input_2_ConsId_12,
  MR_Word tscc_proc_2_input_3_IsExistConstruction_13,
  MR_Word tscc_proc_2_input_4_ArgVars0_14,
  MR_Word tscc_proc_2_input_5_Unification0_15,
  MR_Word tscc_proc_2_input_6_UnifyContext_16,
  MR_Word tscc_proc_2_input_7_GoalInfo0_17,
  MR_Word * tscc_output_ptr_1_Goal_14,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModeInfo_36);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(
  MR_Word X_9,
  MR_Word RHS0_10,
  MR_Word Unification_11,
  MR_Word UnifyContext_12,
  MR_Word GoalInfo0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_46,
  MR_Word * STATE_VARIABLE_ModeInfo_47);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(
  MR_Word X_9,
  MR_Word LambdaRHS_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_68,
  MR_Word * STATE_VARIABLE_ModeInfo_69);

static MR_Box MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(
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
  MR_Word STATE_VARIABLE_ModeInfo_0_40,
  MR_Word * STATE_VARIABLE_ModeInfo_41);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(
  MR_Word FromToInstsOfX_12,
  MR_Word ArgFromToInsts_13,
  MR_Word X_14,
  MR_Word ArgVars_15,
  MR_Word PredOrFunc_16,
  MR_Word RHS0_17,
  MR_Word * RHS_18,
  MR_Word Unification0_19,
  MR_Word * Unification_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_80,
  MR_Word * STATE_VARIABLE_ModeInfo_81);

static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTypes_8,
  MR_Word InstMap_9,
  MR_Word ArgVars_10,
  MR_Word CalleePredInfo_11,
  MR_Word * Result_12);

static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word InstMap_3,
  MR_Word ArgVars_4,
  MR_Word CalleePredInfo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevMatchedProcIds_0_7,
  MR_Word STATE_VARIABLE_NonGroundNonLocals_0_8,
  MR_Word * Result_9);

static void MR_CALL 
check_hlds__modecheck_unify__match_mode_by_higher_order_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word ArgModesList_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(
  MR_Word X0_12,
  MR_Word TypeOfX_13,
  MR_Word ConsId0_14,
  MR_Word IsExistConstruction_15,
  MR_Word ArgVars0_16,
  MR_Word Unification0_17,
  MR_Word UnifyContext_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalExpr_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_67,
  MR_Word * STATE_VARIABLE_ModeInfo_68);

static void MR_CALL 
check_hlds__modecheck_unify__get_mode_of_args_3_p_0(
  MR_Word ArgInitInsts_4,
  MR_Word FinalInst_5,
  MR_Word * ArgFromToInsts_6);

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

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(
  MR_Word FromToInstsOfX_13,
  MR_Word FromToInstsOfXArgs_14,
  MR_Word ArgFromToInsts_15,
  MR_Word X_16,
  MR_Word NewConsId_17,
  MR_Word ArgVars_18,
  MR_Word VarTypes_19,
  MR_Word UnifyContext_20,
  MR_Word Unification0_21,
  MR_Word * Unification_22,
  MR_Word STATE_VARIABLE_ModeInfo_0_70,
  MR_Word * STATE_VARIABLE_ModeInfo_71);

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
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
check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6);

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
check_hlds__modecheck_unify__try_bind_args_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5);

static void MR_CALL 
check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(
  MR_Word IsExistConstruction_9,
  MR_Word X0_10,
  MR_Word * X_11,
  MR_Word * InstOfX_12,
  MR_Word * LiveX_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(
  MR_Word X_8,
  MR_Word ConsId_9,
  MR_Integer ConstNum_10,
  MR_Word UnifyContext_11,
  MR_Word * UnifyGoalExpr_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word UnifyGoalInfo0_13,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_36,
  MR_Word * STATE_VARIABLE_ModeInfo_37);

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(
  MR_Word FromToInstsOfX_15,
  MR_Word FromToInstsOfY_16,
  MR_Word LiveX_17,
  MR_Word LiveY_18,
  MR_Word X_19,
  MR_Word Y_20,
  MR_Word Detism_21,
  MR_Word UnifyContext_22,
  MR_Word GoalInfo_23,
  MR_Word VarTypes_24,
  MR_Word Unification0_25,
  MR_Word * Unify_26,
  MR_Word STATE_VARIABLE_ModeInfo_0_51,
  MR_Word * STATE_VARIABLE_ModeInfo_52);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Type_14,
  MR_Word FromToInstsOfX_15,
  MR_Word FromToInstsOfY_16,
  MR_Word Detism_17,
  MR_Word UnifyContext_18,
  MR_Word Unification0_19,
  MR_Word * Unification_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_61,
  MR_Word * STATE_VARIABLE_ModeInfo_62);

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


static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_1[14][2];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_3[4][3];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_4[5][5];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_5[4][1];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_6[1][7];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_7[2][6];




static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[6])),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_2[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[2])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[3])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[1])),
    ((MR_Box) (check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[2])),
    ((MR_Box) (check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_is_exist_constr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_is_exist_constr_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_5[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "__LambdaGoal__"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0 = {
  (MR_String) "ho_insts_match",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1 = {
  (MR_String) "ho_insts_do_not_match",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_unify",
  (MR_String) "match_mode_result",
  {     check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0 },
  {     check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0
};

static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0 = {
  (MR_String) "possible_modes",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_unify__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1 = {
  (MR_String) "some_ho_args_not_ground",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0[1] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1[1] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1
};

static const MR_DuPtagLayout check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_unify",
  (MR_String) "match_modes_result",
  {     check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0 },
  {     check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0
};

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1618__1_1_f_0(
  MR_Word LambdaHeadVar__1_19)
{
  {
    MR_Word LambdaHeadVar__2_20;

    {
      LambdaHeadVar__2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_20, 0) = ((MR_Box) (LambdaHeadVar__1_19));
    }
    return LambdaHeadVar__2_20;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1378__1_2_p_0(
  MR_Word MaybeTakeAddr_32,
  MR_Word HeadVar__2_75)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[4]), ((MR_Box) (MaybeTakeAddr_32)), ((MR_Box) (HeadVar__2_75)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1273__1_2_p_0(
  MR_Word MaybeTakeAddr_30,
  MR_Word HeadVar__2_90)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[4]), ((MR_Box) (MaybeTakeAddr_30)), ((MR_Box) (HeadVar__2_90)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__modecheck_unify_lambda__509__1_1_f_0(
  MR_Word LambdaHeadVar__1_49)
{
  {
    MR_Word LambdaHeadVar__2_50;

    {
      LambdaHeadVar__2_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_50, 0) = ((MR_Box) (LambdaHeadVar__1_49));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_50, 1) = ((MR_Box) (LambdaHeadVar__1_49));
    }
    return LambdaHeadVar__2_50;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__459__1_3_p_0(
  MR_Word InstMap1_33,
  MR_Word ModuleInfo2_48,
  MR_Word LambdaHeadVar__1_96)
{
  {
    MR_bool succeeded;
    MR_Word Inst_61;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap1_33, LambdaHeadVar__1_96, &Inst_61);
    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo2_48, Inst_61);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__380__1_4_p_0(
  MR_Word ModuleInfo0_25,
  MR_Word InstMap1_33,
  MR_Word NonLocalTypes_42,
  MR_Word LambdaHeadVar__1_73)
{
  {
    MR_bool succeeded;
    MR_Word NonLocalType_44;
    MR_Word NonLocalInst_45;

    hlds__vartypes__lookup_var_type_3_p_0(NonLocalTypes_42, LambdaHeadVar__1_73, &NonLocalType_44);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap1_33, LambdaHeadVar__1_73, &NonLocalInst_45);
    succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(NonLocalInst_45, (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__modecheck_unify_scalar_common_1[13])), NonLocalType_44, ModuleInfo0_25);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__277__1_2_p_0(
  MR_Word ArgVars0_14,
  MR_Word HeadVar__2_56)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]), ((MR_Box) (ArgVars0_14)), ((MR_Box) (HeadVar__2_56)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__275__1_2_p_0(
  MR_Word IsExistConstruction_13,
  MR_Word HeadVar__2_52)
{
  {
    MR_bool succeeded = (IsExistConstruction_13 == HeadVar__2_52);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_10_10 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__inst_util__var_inst_contains_any_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__277__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__275__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0(
  MR_Word tscc_proc_1_input_1_LHSVar_9,
  MR_Word tscc_proc_1_input_2_RHS_10,
  MR_Word tscc_proc_1_input_3_Unification0_11,
  MR_Word tscc_proc_1_input_4_UnifyContext_12,
  MR_Word tscc_proc_1_input_5_UnifyGoalInfo0_13,
  MR_Word * tscc_output_ptr_1_Goal_14,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_ModeInfo_0_35,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModeInfo_36)
{
  {
    MR_Word tscc_proc_2_input_1_X_11;
    MR_Word tscc_proc_2_input_2_ConsId_12;
    MR_Word tscc_proc_2_input_3_IsExistConstruction_13;
    MR_Word tscc_proc_2_input_4_ArgVars0_14;
    MR_Word tscc_proc_2_input_5_Unification0_15;
    MR_Word tscc_proc_2_input_6_UnifyContext_16;
    MR_Word tscc_proc_2_input_7_GoalInfo0_17;
    MR_Word tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39;
    MR_Word tscc_output_1_Goal_14;
    MR_Word tscc_output_2_STATE_VARIABLE_ModeInfo_36;

    // The code for TSCC PROC 1: pred check_hlds.modecheck_unify.modecheck_unification/8-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.modecheck_unify.modecheck_unification/8-0
    ;
    // proc 2 in TSCC: pred check_hlds.modecheck_unify.modecheck_unification_functor/10-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word LHSVar_9 = tscc_proc_1_input_1_LHSVar_9;
      MR_Word RHS_10 = tscc_proc_1_input_2_RHS_10;
      MR_Word Unification0_11 = tscc_proc_1_input_3_Unification0_11;
      MR_Word UnifyContext_12 = tscc_proc_1_input_4_UnifyContext_12;
      MR_Word UnifyGoalInfo0_13 = tscc_proc_1_input_5_UnifyGoalInfo0_13;
      MR_Word Goal_14;
      MR_Word STATE_VARIABLE_ModeInfo_0_35 = tscc_proc_1_input_6_STATE_VARIABLE_ModeInfo_0_35;
      MR_Word STATE_VARIABLE_ModeInfo_36;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word RHSVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_10, (MR_Integer) 0))));

            check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(LHSVar_9, RHSVar_16, Unification0_11, UnifyContext_12, UnifyGoalInfo0_13, &Goal_14, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_36);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_10, (MR_Integer) 0))));
            MR_Word IsExistConstr_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_10, (MR_Integer) 1))));
            MR_Word RHSVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_10, (MR_Integer) 2))));
            MR_Word next_value_of_tscc_proc_2_input_1_X_11 = LHSVar_9;
            MR_Word next_value_of_tscc_proc_2_input_2_ConsId_12 = ConsId_17;
            MR_Word next_value_of_tscc_proc_2_input_3_IsExistConstruction_13 = IsExistConstr_18;
            MR_Word next_value_of_tscc_proc_2_input_4_ArgVars0_14 = RHSVars_19;
            MR_Word next_value_of_tscc_proc_2_input_5_Unification0_15 = Unification0_11;
            MR_Word next_value_of_tscc_proc_2_input_6_UnifyContext_16 = UnifyContext_12;
            MR_Word next_value_of_tscc_proc_2_input_7_GoalInfo0_17 = UnifyGoalInfo0_13;
            MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39 = STATE_VARIABLE_ModeInfo_0_35;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_X_11 = next_value_of_tscc_proc_2_input_1_X_11;
            tscc_proc_2_input_2_ConsId_12 = next_value_of_tscc_proc_2_input_2_ConsId_12;
            tscc_proc_2_input_3_IsExistConstruction_13 = next_value_of_tscc_proc_2_input_3_IsExistConstruction_13;
            tscc_proc_2_input_4_ArgVars0_14 = next_value_of_tscc_proc_2_input_4_ArgVars0_14;
            tscc_proc_2_input_5_Unification0_15 = next_value_of_tscc_proc_2_input_5_Unification0_15;
            tscc_proc_2_input_6_UnifyContext_16 = next_value_of_tscc_proc_2_input_6_UnifyContext_16;
            tscc_proc_2_input_7_GoalInfo0_17 = next_value_of_tscc_proc_2_input_7_GoalInfo0_17;
            tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Purity_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_10, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word HOGroundness_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_10, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word LambdaNonLocals_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_10, (MR_Integer) 2))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_10, (MR_Integer) 0)));
            MR_Word AnyVars_31;
            MR_Word TypeInfo_47_47;
            MR_Word ModuleInfo_29;
            MR_Word InstMap_30;
            MR_Word Var_37;

            succeeded = (Purity_20 == (MR_Integer) 2);
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = (HOGroundness_21 == (MR_Integer) 0);
              if (succeeded)
              {
                check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &ModuleInfo_29);
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &InstMap_30);
                TypeInfo_47_47 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]);
                {
                  Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_7[1]));
                  MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_8_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ModuleInfo_29));
                  MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (InstMap_30));
                }
                AnyVars_31 = mercury__list__filter_2_f_0(TypeInfo_47_47, Var_37, LambdaNonLocals_24);
                succeeded = ((MR_tag((MR_Word) AnyVars_31)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                }
              }
            }
            if (succeeded)
            {
              MR_Word WaitingVars_34;
              MR_Word Var_38;

              parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_34);
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (AnyVars_31));
              }
              check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_34, Var_38, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_36);
              Goal_14 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_3[1]));
            }
            else
            {
              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(UnifyGoalInfo0_13, (MR_Integer) 23);
              if (succeeded)
                check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(LHSVar_9, RHS_10, Unification0_11, UnifyContext_12, UnifyGoalInfo0_13, &Goal_14, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_36);
              else
                check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(LHSVar_9, RHS_10, Unification0_11, UnifyContext_12, &Goal_14, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_36);
            }
          }
          break;
      }
      tscc_output_1_Goal_14 = Goal_14;
      tscc_output_2_STATE_VARIABLE_ModeInfo_36 = STATE_VARIABLE_ModeInfo_36;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word X_11 = tscc_proc_2_input_1_X_11;
      MR_Word ConsId_12 = tscc_proc_2_input_2_ConsId_12;
      MR_Word IsExistConstruction_13 = tscc_proc_2_input_3_IsExistConstruction_13;
      MR_Word ArgVars0_14 = tscc_proc_2_input_4_ArgVars0_14;
      MR_Word Unification0_15 = tscc_proc_2_input_5_Unification0_15;
      MR_Word UnifyContext_16 = tscc_proc_2_input_6_UnifyContext_16;
      MR_Word GoalInfo0_17 = tscc_proc_2_input_7_GoalInfo0_17;
      MR_Word GoalExpr_18;
      MR_Word STATE_VARIABLE_ModeInfo_0_39 = tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39;
      MR_Word STATE_VARIABLE_ModeInfo_40;
      MR_bool succeeded;
      MR_Word VarTypes0_20;
      MR_Word TypeOfX_21;
      MR_Word Purity_22;
      MR_Word PredArgTypes_25;
      MR_Word ShroudedPredProcId_26;
      MR_Word Var_23;

      check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_39, &VarTypes0_20);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_20, X_11, &TypeOfX_21);
      succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(TypeOfX_21, &Purity_22, &Var_23, &PredArgTypes_25);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0))) == (MR_Integer) 4)));
        if (succeeded)
          ShroudedPredProcId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 1))));
      }
      if (succeeded)
      {
        MR_Word ModuleInfo0_28;
        MR_Word VarSet0_29;
        MR_Word Context_30;
        MR_Word PredId_31;
        MR_Integer ProcId_32;
        MR_Word MaybeRHS0_33;
        MR_Word VarSet_34;
        MR_Word VarTypes_35;
        MR_Word Var_41;
        MR_Word STATE_VARIABLE_ModeInfo_42_42;
        MR_Word STATE_VARIABLE_ModeInfo_43_43;

        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_39, &ModuleInfo0_28);
        check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_39, &VarSet0_29);
        check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_0_39, &Context_30);
        Var_41 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_26);
        PredId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
        ProcId_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
        check_hlds__polymorphism__convert_pred_to_lambda_goal_16_p_0(Purity_22, X_11, PredId_31, ProcId_32, ArgVars0_14, PredArgTypes_25, UnifyContext_16, GoalInfo0_17, Context_30, ModuleInfo0_28, &MaybeRHS0_33, VarSet0_29, &VarSet_34, VarTypes0_20, &VarTypes_35);
        check_hlds__mode_info__mode_info_set_varset_3_p_0(VarSet_34, STATE_VARIABLE_ModeInfo_0_39, &STATE_VARIABLE_ModeInfo_42_42);
        check_hlds__mode_info__mode_info_set_var_types_3_p_0(VarTypes_35, STATE_VARIABLE_ModeInfo_42_42, &STATE_VARIABLE_ModeInfo_43_43);
        if (((MR_tag((MR_Word) MaybeRHS0_33)) == (MR_mktag((MR_Integer) 0))))
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "could not convert pred to lambda goal; polymorphism.m should have stopped us getting here");
            return;
          }
        }
        else
        {
          MR_Word RHS0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRHS0_33, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_LHSVar_9 = X_11;
          MR_Word next_value_of_tscc_proc_1_input_2_RHS_10 = RHS0_36;
          MR_Word next_value_of_tscc_proc_1_input_3_Unification0_11 = Unification0_15;
          MR_Word next_value_of_tscc_proc_1_input_4_UnifyContext_12 = UnifyContext_16;
          MR_Word next_value_of_tscc_proc_1_input_5_UnifyGoalInfo0_13 = GoalInfo0_17;
          MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_ModeInfo_0_35 = STATE_VARIABLE_ModeInfo_43_43;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_LHSVar_9 = next_value_of_tscc_proc_1_input_1_LHSVar_9;
          tscc_proc_1_input_2_RHS_10 = next_value_of_tscc_proc_1_input_2_RHS_10;
          tscc_proc_1_input_3_Unification0_11 = next_value_of_tscc_proc_1_input_3_Unification0_11;
          tscc_proc_1_input_4_UnifyContext_12 = next_value_of_tscc_proc_1_input_4_UnifyContext_12;
          tscc_proc_1_input_5_UnifyGoalInfo0_13 = next_value_of_tscc_proc_1_input_5_UnifyGoalInfo0_13;
          tscc_proc_1_input_6_STATE_VARIABLE_ModeInfo_0_35 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_ModeInfo_0_35;
          goto top_of_proc_1;
        }
      }
      else
      {
        MR_Integer ConstNum_38;

        succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(ConsId_12, &ConstNum_38);
        if (succeeded)
        {
          MR_Word Var_49;
          MR_Word Var_53;

          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (IsExistConstruction_13));
            MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction is existential");
          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_3));
            MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (ArgVars0_14));
            MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction has args");
          check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(X_11, ConsId_12, ConstNum_38, UnifyContext_16, &GoalExpr_18, STATE_VARIABLE_ModeInfo_0_39, &STATE_VARIABLE_ModeInfo_40);
        }
        else
          check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(X_11, TypeOfX_21, ConsId_12, IsExistConstruction_13, ArgVars0_14, Unification0_15, UnifyContext_16, GoalInfo0_17, &GoalExpr_18, STATE_VARIABLE_ModeInfo_0_39, &STATE_VARIABLE_ModeInfo_40);
      }
      tscc_output_1_Goal_14 = GoalExpr_18;
      tscc_output_2_STATE_VARIABLE_ModeInfo_36 = STATE_VARIABLE_ModeInfo_40;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Goal_14 = tscc_output_1_Goal_14;
    *tscc_output_ptr_2_STATE_VARIABLE_ModeInfo_36 = tscc_output_2_STATE_VARIABLE_ModeInfo_36;
    return;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(
  MR_Word tscc_proc_2_input_1_X_11,
  MR_Word tscc_proc_2_input_2_ConsId_12,
  MR_Word tscc_proc_2_input_3_IsExistConstruction_13,
  MR_Word tscc_proc_2_input_4_ArgVars0_14,
  MR_Word tscc_proc_2_input_5_Unification0_15,
  MR_Word tscc_proc_2_input_6_UnifyContext_16,
  MR_Word tscc_proc_2_input_7_GoalInfo0_17,
  MR_Word * tscc_output_ptr_1_Goal_14,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModeInfo_36)
{
  {
    MR_Word tscc_proc_1_input_1_LHSVar_9;
    MR_Word tscc_proc_1_input_2_RHS_10;
    MR_Word tscc_proc_1_input_3_Unification0_11;
    MR_Word tscc_proc_1_input_4_UnifyContext_12;
    MR_Word tscc_proc_1_input_5_UnifyGoalInfo0_13;
    MR_Word tscc_proc_1_input_6_STATE_VARIABLE_ModeInfo_0_35;
    MR_Word tscc_output_1_Goal_14;
    MR_Word tscc_output_2_STATE_VARIABLE_ModeInfo_36;

    // The code for TSCC PROC 2: pred check_hlds.modecheck_unify.modecheck_unification_functor/10-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.modecheck_unify.modecheck_unification/8-0
    ;
    // proc 2 in TSCC: pred check_hlds.modecheck_unify.modecheck_unification_functor/10-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word LHSVar_9 = tscc_proc_1_input_1_LHSVar_9;
      MR_Word RHS_10 = tscc_proc_1_input_2_RHS_10;
      MR_Word Unification0_11 = tscc_proc_1_input_3_Unification0_11;
      MR_Word UnifyContext_12 = tscc_proc_1_input_4_UnifyContext_12;
      MR_Word UnifyGoalInfo0_13 = tscc_proc_1_input_5_UnifyGoalInfo0_13;
      MR_Word Goal_14;
      MR_Word STATE_VARIABLE_ModeInfo_0_35 = tscc_proc_1_input_6_STATE_VARIABLE_ModeInfo_0_35;
      MR_Word STATE_VARIABLE_ModeInfo_36;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) RHS_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word RHSVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_10, (MR_Integer) 0))));

            check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(LHSVar_9, RHSVar_16, Unification0_11, UnifyContext_12, UnifyGoalInfo0_13, &Goal_14, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_36);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_10, (MR_Integer) 0))));
            MR_Word IsExistConstr_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_10, (MR_Integer) 1))));
            MR_Word RHSVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_10, (MR_Integer) 2))));
            MR_Word next_value_of_tscc_proc_2_input_1_X_11 = LHSVar_9;
            MR_Word next_value_of_tscc_proc_2_input_2_ConsId_12 = ConsId_17;
            MR_Word next_value_of_tscc_proc_2_input_3_IsExistConstruction_13 = IsExistConstr_18;
            MR_Word next_value_of_tscc_proc_2_input_4_ArgVars0_14 = RHSVars_19;
            MR_Word next_value_of_tscc_proc_2_input_5_Unification0_15 = Unification0_11;
            MR_Word next_value_of_tscc_proc_2_input_6_UnifyContext_16 = UnifyContext_12;
            MR_Word next_value_of_tscc_proc_2_input_7_GoalInfo0_17 = UnifyGoalInfo0_13;
            MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39 = STATE_VARIABLE_ModeInfo_0_35;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_X_11 = next_value_of_tscc_proc_2_input_1_X_11;
            tscc_proc_2_input_2_ConsId_12 = next_value_of_tscc_proc_2_input_2_ConsId_12;
            tscc_proc_2_input_3_IsExistConstruction_13 = next_value_of_tscc_proc_2_input_3_IsExistConstruction_13;
            tscc_proc_2_input_4_ArgVars0_14 = next_value_of_tscc_proc_2_input_4_ArgVars0_14;
            tscc_proc_2_input_5_Unification0_15 = next_value_of_tscc_proc_2_input_5_Unification0_15;
            tscc_proc_2_input_6_UnifyContext_16 = next_value_of_tscc_proc_2_input_6_UnifyContext_16;
            tscc_proc_2_input_7_GoalInfo0_17 = next_value_of_tscc_proc_2_input_7_GoalInfo0_17;
            tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Purity_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_10, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word HOGroundness_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_10, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word LambdaNonLocals_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_10, (MR_Integer) 2))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_10, (MR_Integer) 0)));
            MR_Word AnyVars_31;
            MR_Word TypeInfo_47_47;
            MR_Word ModuleInfo_29;
            MR_Word InstMap_30;
            MR_Word Var_37;

            succeeded = (Purity_20 == (MR_Integer) 2);
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = (HOGroundness_21 == (MR_Integer) 0);
              if (succeeded)
              {
                check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &ModuleInfo_29);
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &InstMap_30);
                TypeInfo_47_47 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]);
                {
                  Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_7[1]));
                  MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_8_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ModuleInfo_29));
                  MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (InstMap_30));
                }
                AnyVars_31 = mercury__list__filter_2_f_0(TypeInfo_47_47, Var_37, LambdaNonLocals_24);
                succeeded = ((MR_tag((MR_Word) AnyVars_31)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                }
              }
            }
            if (succeeded)
            {
              MR_Word WaitingVars_34;
              MR_Word Var_38;

              parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_34);
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (AnyVars_31));
              }
              check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_34, Var_38, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_36);
              Goal_14 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_3[1]));
            }
            else
            {
              succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(UnifyGoalInfo0_13, (MR_Integer) 23);
              if (succeeded)
                check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(LHSVar_9, RHS_10, Unification0_11, UnifyContext_12, UnifyGoalInfo0_13, &Goal_14, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_36);
              else
                check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(LHSVar_9, RHS_10, Unification0_11, UnifyContext_12, &Goal_14, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_36);
            }
          }
          break;
      }
      tscc_output_1_Goal_14 = Goal_14;
      tscc_output_2_STATE_VARIABLE_ModeInfo_36 = STATE_VARIABLE_ModeInfo_36;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word X_11 = tscc_proc_2_input_1_X_11;
      MR_Word ConsId_12 = tscc_proc_2_input_2_ConsId_12;
      MR_Word IsExistConstruction_13 = tscc_proc_2_input_3_IsExistConstruction_13;
      MR_Word ArgVars0_14 = tscc_proc_2_input_4_ArgVars0_14;
      MR_Word Unification0_15 = tscc_proc_2_input_5_Unification0_15;
      MR_Word UnifyContext_16 = tscc_proc_2_input_6_UnifyContext_16;
      MR_Word GoalInfo0_17 = tscc_proc_2_input_7_GoalInfo0_17;
      MR_Word GoalExpr_18;
      MR_Word STATE_VARIABLE_ModeInfo_0_39 = tscc_proc_2_input_8_STATE_VARIABLE_ModeInfo_0_39;
      MR_Word STATE_VARIABLE_ModeInfo_40;
      MR_bool succeeded;
      MR_Word VarTypes0_20;
      MR_Word TypeOfX_21;
      MR_Word Purity_22;
      MR_Word PredArgTypes_25;
      MR_Word ShroudedPredProcId_26;
      MR_Word Var_23;

      check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_39, &VarTypes0_20);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_20, X_11, &TypeOfX_21);
      succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(TypeOfX_21, &Purity_22, &Var_23, &PredArgTypes_25);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0))) == (MR_Integer) 4)));
        if (succeeded)
          ShroudedPredProcId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 1))));
      }
      if (succeeded)
      {
        MR_Word ModuleInfo0_28;
        MR_Word VarSet0_29;
        MR_Word Context_30;
        MR_Word PredId_31;
        MR_Integer ProcId_32;
        MR_Word MaybeRHS0_33;
        MR_Word VarSet_34;
        MR_Word VarTypes_35;
        MR_Word Var_41;
        MR_Word STATE_VARIABLE_ModeInfo_42_42;
        MR_Word STATE_VARIABLE_ModeInfo_43_43;

        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_39, &ModuleInfo0_28);
        check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_39, &VarSet0_29);
        check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_0_39, &Context_30);
        Var_41 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_26);
        PredId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
        ProcId_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
        check_hlds__polymorphism__convert_pred_to_lambda_goal_16_p_0(Purity_22, X_11, PredId_31, ProcId_32, ArgVars0_14, PredArgTypes_25, UnifyContext_16, GoalInfo0_17, Context_30, ModuleInfo0_28, &MaybeRHS0_33, VarSet0_29, &VarSet_34, VarTypes0_20, &VarTypes_35);
        check_hlds__mode_info__mode_info_set_varset_3_p_0(VarSet_34, STATE_VARIABLE_ModeInfo_0_39, &STATE_VARIABLE_ModeInfo_42_42);
        check_hlds__mode_info__mode_info_set_var_types_3_p_0(VarTypes_35, STATE_VARIABLE_ModeInfo_42_42, &STATE_VARIABLE_ModeInfo_43_43);
        if (((MR_tag((MR_Word) MaybeRHS0_33)) == (MR_mktag((MR_Integer) 0))))
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "could not convert pred to lambda goal; polymorphism.m should have stopped us getting here");
            return;
          }
        }
        else
        {
          MR_Word RHS0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRHS0_33, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_LHSVar_9 = X_11;
          MR_Word next_value_of_tscc_proc_1_input_2_RHS_10 = RHS0_36;
          MR_Word next_value_of_tscc_proc_1_input_3_Unification0_11 = Unification0_15;
          MR_Word next_value_of_tscc_proc_1_input_4_UnifyContext_12 = UnifyContext_16;
          MR_Word next_value_of_tscc_proc_1_input_5_UnifyGoalInfo0_13 = GoalInfo0_17;
          MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_ModeInfo_0_35 = STATE_VARIABLE_ModeInfo_43_43;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_LHSVar_9 = next_value_of_tscc_proc_1_input_1_LHSVar_9;
          tscc_proc_1_input_2_RHS_10 = next_value_of_tscc_proc_1_input_2_RHS_10;
          tscc_proc_1_input_3_Unification0_11 = next_value_of_tscc_proc_1_input_3_Unification0_11;
          tscc_proc_1_input_4_UnifyContext_12 = next_value_of_tscc_proc_1_input_4_UnifyContext_12;
          tscc_proc_1_input_5_UnifyGoalInfo0_13 = next_value_of_tscc_proc_1_input_5_UnifyGoalInfo0_13;
          tscc_proc_1_input_6_STATE_VARIABLE_ModeInfo_0_35 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_ModeInfo_0_35;
          goto top_of_proc_1;
        }
      }
      else
      {
        MR_Integer ConstNum_38;

        succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(ConsId_12, &ConstNum_38);
        if (succeeded)
        {
          MR_Word Var_49;
          MR_Word Var_53;

          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (IsExistConstruction_13));
            MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction is existential");
          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_3));
            MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (ArgVars0_14));
            MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction has args");
          check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(X_11, ConsId_12, ConstNum_38, UnifyContext_16, &GoalExpr_18, STATE_VARIABLE_ModeInfo_0_39, &STATE_VARIABLE_ModeInfo_40);
        }
        else
          check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(X_11, TypeOfX_21, ConsId_12, IsExistConstruction_13, ArgVars0_14, Unification0_15, UnifyContext_16, GoalInfo0_17, &GoalExpr_18, STATE_VARIABLE_ModeInfo_0_39, &STATE_VARIABLE_ModeInfo_40);
      }
      tscc_output_1_Goal_14 = GoalExpr_18;
      tscc_output_2_STATE_VARIABLE_ModeInfo_36 = STATE_VARIABLE_ModeInfo_40;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Goal_14 = tscc_output_1_Goal_14;
    *tscc_output_ptr_2_STATE_VARIABLE_ModeInfo_36 = tscc_output_2_STATE_VARIABLE_ModeInfo_36;
    return;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(
  MR_Word X_9,
  MR_Word RHS0_10,
  MR_Word Unification_11,
  MR_Word UnifyContext_12,
  MR_Word GoalInfo0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_46,
  MR_Word * STATE_VARIABLE_ModeInfo_47)
{
  {
    MR_bool succeeded;
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 6))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 0)));
    MR_Word PredId_25;
    MR_Word ArgVars_26;
    MR_Word TypeInfo_94_94;
    MR_Word Var_48;
    MR_Tuple Var_49;
    MR_Word Var_70;

    hlds__goal_util__predids_with_args_from_goal_2_p_0(Goal0_24, &Var_48);
    succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_49 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 1))));
      TypeInfo_94_94 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_94_94, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Var_70)));
      if (succeeded)
      {
        PredId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
        ArgVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word ModuleInfo_27;
      MR_Word InstMap_28;
      MR_Word VarTypes_29;
      MR_Word PredInfo_30;
      MR_Word MatchResult_31;

      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_46, &ModuleInfo_27);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_46, &InstMap_28);
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_46, &VarTypes_29);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_27, PredId_25, &PredInfo_30);
      check_hlds__modecheck_unify__match_modes_by_higher_order_insts_6_p_0(ModuleInfo_27, VarTypes_29, InstMap_28, ArgVars_26, PredInfo_30, &MatchResult_31);
      if (((MR_tag((MR_Word) MatchResult_31)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MatchResult_31, (MR_Integer) 0))));

        if ((Var_91 == (MR_Word) ((MR_Integer) 0)))
        {
          MR_Word MultiModeError_33;
          MR_Word WaitingVars_37;
          MR_Word ModeError_38;
          MR_Word MultiModeMap0_39;
          MR_Word MultiModeMap_40;
          MR_Word STATE_VARIABLE_ModeInfo_62_62;
          MR_Word Var_63;

          {
            MultiModeError_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MultiModeError_33, 0) = ((MR_Box) (ArgVars_26));
          }
          WaitingVars_37 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_9);
          {
            ModeError_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ModeError_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
            MR_hl_field(MR_mktag(3), ModeError_38, 1) = ((MR_Box) (X_9));
            MR_hl_field(MR_mktag(3), ModeError_38, 2) = ((MR_Box) (PredId_25));
            MR_hl_field(MR_mktag(3), ModeError_38, 3) = ((MR_Box) (MultiModeError_33));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_37, ModeError_38, STATE_VARIABLE_ModeInfo_0_46, &STATE_VARIABLE_ModeInfo_62_62);
          check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_62_62, &MultiModeMap0_39);
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (PredId_25));
            MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (MultiModeError_33));
          }
          mercury__map__set_4_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0), ((MR_Box) (X_9)), ((MR_Box) (Var_63)), MultiModeMap0_39, &MultiModeMap_40);
          check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(MultiModeMap_40, STATE_VARIABLE_ModeInfo_62_62, STATE_VARIABLE_ModeInfo_47);
          *Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
        }
        else
        {
          MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 1))));
          MR_Integer Var_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 0))));

          if ((Var_92 == (MR_Word) ((MR_Integer) 0)))
          {
            MR_Word MaybeRHS_42;

            check_hlds__polymorphism__fix_undetermined_mode_lambda_goal_4_p_0(ModuleInfo_27, Var_93, RHS0_10, &MaybeRHS_42);
            if (((MR_tag((MR_Word) MaybeRHS_42)) == (MR_mktag((MR_Integer) 0))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_undetermined_mode_lambda\'/8", (MR_String) "could not fix up lambda goal; polymorphism.m should have stopped us getting here");
                return;
              }
            }
            else
            {
              MR_Word RHS_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRHS_42, (MR_Integer) 0))));
              MR_Word GoalInfo_44;

              hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 23, GoalInfo0_13, &GoalInfo_44);
              check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(X_9, RHS_43, Unification_11, UnifyContext_12, Goal_14, STATE_VARIABLE_ModeInfo_0_46, STATE_VARIABLE_ModeInfo_47);
            }
          }
          else
          {
            MR_Word MultiModeError_71;
            MR_Word WaitingVars_72;
            MR_Word ModeError_73;
            MR_Word MultiModeMap0_74;
            MR_Word MultiModeMap_75;
            MR_Word STATE_VARIABLE_ModeInfo_62_76;
            MR_Word Var_77;

            {
              MultiModeError_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MultiModeError_71, 0) = ((MR_Box) (ArgVars_26));
            }
            WaitingVars_72 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_9);
            {
              ModeError_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ModeError_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), ModeError_73, 1) = ((MR_Box) (X_9));
              MR_hl_field(MR_mktag(3), ModeError_73, 2) = ((MR_Box) (PredId_25));
              MR_hl_field(MR_mktag(3), ModeError_73, 3) = ((MR_Box) (MultiModeError_71));
            }
            check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_72, ModeError_73, STATE_VARIABLE_ModeInfo_0_46, &STATE_VARIABLE_ModeInfo_62_76);
            check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_62_76, &MultiModeMap0_74);
            {
              Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (PredId_25));
              MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (MultiModeError_71));
            }
            mercury__map__set_4_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0), ((MR_Box) (X_9)), ((MR_Box) (Var_77)), MultiModeMap0_74, &MultiModeMap_75);
            check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(MultiModeMap_75, STATE_VARIABLE_ModeInfo_62_76, STATE_VARIABLE_ModeInfo_47);
            *Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
          }
        }
      }
      else
      {
        MR_Word NonGroundArgVars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchResult_31, (MR_Integer) 0))));
        MR_Word MultiModeError_81;
        MR_Word WaitingVars_82;
        MR_Word ModeError_83;
        MR_Word MultiModeMap0_84;
        MR_Word MultiModeMap_85;
        MR_Word STATE_VARIABLE_ModeInfo_62_86;
        MR_Word Var_87;

        {
          MultiModeError_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MultiModeError_81, 0) = ((MR_Box) (NonGroundArgVars_32));
        }
        WaitingVars_82 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_9);
        {
          ModeError_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ModeError_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
          MR_hl_field(MR_mktag(3), ModeError_83, 1) = ((MR_Box) (X_9));
          MR_hl_field(MR_mktag(3), ModeError_83, 2) = ((MR_Box) (PredId_25));
          MR_hl_field(MR_mktag(3), ModeError_83, 3) = ((MR_Box) (MultiModeError_81));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_82, ModeError_83, STATE_VARIABLE_ModeInfo_0_46, &STATE_VARIABLE_ModeInfo_62_86);
        check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(STATE_VARIABLE_ModeInfo_62_86, &MultiModeMap0_84);
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (PredId_25));
          MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (MultiModeError_81));
        }
        mercury__map__set_4_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0), ((MR_Box) (X_9)), ((MR_Box) (Var_87)), MultiModeMap0_84, &MultiModeMap_85);
        check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(MultiModeMap_85, STATE_VARIABLE_ModeInfo_62_86, STATE_VARIABLE_ModeInfo_47);
        *Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
      }
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_undetermined_mode_lambda\'/8", (MR_String) "expecting single call");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__459__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__380__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(
  MR_Word X_9,
  MR_Word LambdaRHS_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_68,
  MR_Word * STATE_VARIABLE_ModeInfo_69)
{
  {
    MR_bool succeeded;
    MR_Word Purity_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), LambdaRHS_10, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Groundness_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), LambdaRHS_10, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word PredOrFunc_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), LambdaRHS_10, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ArgVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaRHS_10, (MR_Integer) 2))));
    MR_Word Vars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaRHS_10, (MR_Integer) 3))));
    MR_Word Modes0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaRHS_10, (MR_Integer) 4))));
    MR_Word Det_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaRHS_10, (MR_Integer) 5))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaRHS_10, (MR_Integer) 6))));
    MR_Word ModuleInfo0_25;
    MR_Word HowToCheckGoal_26;
    MR_Word Modes_28;
    MR_Word VarInitialInsts_29;
    MR_Word VarInstAL_30;
    MR_Word VarInstMapDelta_31;
    MR_Word InstMap0_32;
    MR_Word InstMap1_33;
    MR_Word ArgLives_34;
    MR_Word LiveVarsList_35;
    MR_Word LiveVars_36;
    MR_Word GoalInfo0_38;
    MR_Word NonLocals0_39;
    MR_Word NonLocals1_40;
    MR_Word NonLocals_41;
    MR_Word NonLocalsList_46;
    MR_Word NonLocalInsts_47;
    MR_Word ModuleInfo2_48;
    MR_Word RHS_57;
    MR_Word Unification_58;
    MR_Word UnifyMode_59;
    MR_Word STATE_VARIABLE_ModeInfo_70_70;
    MR_Word STATE_VARIABLE_ModeInfo_71_71;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), LambdaRHS_10, (MR_Integer) 0)));

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_68, &ModuleInfo0_25);
    check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(STATE_VARIABLE_ModeInfo_0_68, &HowToCheckGoal_26);
    switch (HowToCheckGoal_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word VarTypes_27;

          check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(STATE_VARIABLE_ModeInfo_0_68, Vars_21, &VarTypes_27);
          check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(ModuleInfo0_25, VarTypes_27, Modes0_22, &Modes_28);
        }
        break;
      case (MR_Integer) 1:
        Modes_28 = Modes0_22;
        break;
    }
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_25, Modes_28, &VarInitialInsts_29);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Vars_21, VarInitialInsts_29, &VarInstAL_30);
    VarInstMapDelta_31 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(VarInstAL_30);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_68, &InstMap0_32);
    hlds__instmap__apply_instmap_delta_3_p_0(InstMap0_32, VarInstMapDelta_31, &InstMap1_33);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_33, STATE_VARIABLE_ModeInfo_0_68, &STATE_VARIABLE_ModeInfo_70_70);
    check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_25, Modes_28, &ArgLives_34);
    check_hlds__modecheck_util__get_live_vars_3_p_0(Vars_21, ArgLives_34, &LiveVarsList_35);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVarsList_35, &LiveVars_36);
    check_hlds__mode_info__mode_info_add_live_vars_3_p_0(LiveVars_36, STATE_VARIABLE_ModeInfo_70_70, &STATE_VARIABLE_ModeInfo_71_71);
    GoalInfo0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_24, (MR_Integer) 1))));
    NonLocals0_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_38);
    parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_21, NonLocals0_39, &NonLocals1_40);
    switch (Groundness_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word NonLocalTypes_42;
          MR_Word Var_72;

          check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &NonLocalTypes_42);
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (ModuleInfo0_25));
            MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (InstMap1_33));
            MR_hl_field(MR_mktag(0), Var_72, 5) = ((MR_Box) (NonLocalTypes_42));
          }
          NonLocals_41 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_72, NonLocals1_40);
        }
        break;
      case (MR_Integer) 0:
        NonLocals_41 = NonLocals1_40;
        break;
    }
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_41, &NonLocalsList_46);
    hlds__instmap__instmap_lookup_vars_3_p_0(InstMap1_33, NonLocalsList_46, &NonLocalInsts_47);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &ModuleInfo2_48);
    succeeded = (Groundness_17 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Purity_16 == (MR_Integer) 2);
      succeeded = !(succeeded);
    }
    if (succeeded)
      succeeded = check_hlds__inst_test__inst_list_is_ground_2_p_0(NonLocalInsts_47, ModuleInfo2_48);
    else
      succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(NonLocalInsts_47, ModuleInfo2_48);
    if (succeeded)
    {
      MR_Word SharedNonLocalInsts_49;
      MR_Word ModuleInfo3_50;
      MR_Word InstMap2_51;
      MR_Word Goal1_52;
      MR_Word FinalInsts_53;
      MR_Word Goal_54;
      MR_Word InstMap11_55;
      MR_Word RHS0_56;
      MR_Word STATE_VARIABLE_ModeInfo_77_77;
      MR_Word STATE_VARIABLE_ModeInfo_78_78;
      MR_Word Var_79;
      MR_Word STATE_VARIABLE_ModeInfo_80_80;
      MR_Word STATE_VARIABLE_ModeInfo_83_83;
      MR_Word STATE_VARIABLE_ModeInfo_85_85;
      MR_Word STATE_VARIABLE_ModeInfo_86_86;
      MR_Word STATE_VARIABLE_ModeInfo_89_89;
      MR_Word STATE_VARIABLE_ModeInfo_90_90;
      MR_Word STATE_VARIABLE_ModeInfo_92_92;
      MR_Word STATE_VARIABLE_ModeInfo_93_93;

      check_hlds__inst_util__make_shared_inst_list_4_p_0(NonLocalInsts_47, &SharedNonLocalInsts_49, ModuleInfo2_48, &ModuleInfo3_50);
      hlds__instmap__instmap_set_vars_corresponding_4_p_0(NonLocalsList_46, SharedNonLocalInsts_49, InstMap1_33, &InstMap2_51);
      check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo3_50, STATE_VARIABLE_ModeInfo_71_71, &STATE_VARIABLE_ModeInfo_77_77);
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap2_51, STATE_VARIABLE_ModeInfo_77_77, &STATE_VARIABLE_ModeInfo_78_78);
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (PredOrFunc_18));
      }
      check_hlds__mode_info__mode_info_lock_vars_4_p_0(Var_79, NonLocals_41, STATE_VARIABLE_ModeInfo_78_78, &STATE_VARIABLE_ModeInfo_80_80);
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "lambda goal", STATE_VARIABLE_ModeInfo_80_80, &STATE_VARIABLE_ModeInfo_83_83);
      switch (HowToCheckGoal_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_24, &Goal1_52, STATE_VARIABLE_ModeInfo_83_83, &STATE_VARIABLE_ModeInfo_85_85);
          break;
        case (MR_Integer) 1:
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_24, &Goal1_52, STATE_VARIABLE_ModeInfo_83_83, &STATE_VARIABLE_ModeInfo_85_85);
          break;
      }
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_25, Modes_28, &FinalInsts_53);
      check_hlds__modes__modecheck_lambda_final_insts_6_p_0(Vars_21, FinalInsts_53, Goal1_52, &Goal_54, STATE_VARIABLE_ModeInfo_85_85, &STATE_VARIABLE_ModeInfo_86_86);
      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "lambda goal", STATE_VARIABLE_ModeInfo_86_86, &STATE_VARIABLE_ModeInfo_89_89);
      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(LiveVars_36, STATE_VARIABLE_ModeInfo_89_89, &STATE_VARIABLE_ModeInfo_90_90);
      check_hlds__mode_info__mode_info_unlock_vars_4_p_0(Var_79, NonLocals_41, STATE_VARIABLE_ModeInfo_90_90, &STATE_VARIABLE_ModeInfo_92_92);
      hlds__instmap__instmap_set_vars_corresponding_4_p_0(NonLocalsList_46, SharedNonLocalInsts_49, InstMap0_32, &InstMap11_55);
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap11_55, STATE_VARIABLE_ModeInfo_92_92, &STATE_VARIABLE_ModeInfo_93_93);
      {
        RHS0_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), RHS0_56, 0) = (MR_Box) (packed_args_0);
        MR_hl_field(MR_mktag(2), RHS0_56, 1) = NULL;
        MR_hl_field(MR_mktag(2), RHS0_56, 2) = ((MR_Box) (ArgVars_20));
        MR_hl_field(MR_mktag(2), RHS0_56, 3) = ((MR_Box) (Vars_21));
        MR_hl_field(MR_mktag(2), RHS0_56, 4) = ((MR_Box) (Modes_28));
        MR_hl_field(MR_mktag(2), RHS0_56, 5) = ((MR_Box) (Det_23));
        MR_hl_field(MR_mktag(2), RHS0_56, 6) = ((MR_Box) (Goal_54));
      }
      check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(X_9, PredOrFunc_18, ArgVars_20, Modes_28, Det_23, RHS0_56, &RHS_57, Unification0_11, &Unification_58, &UnifyMode_59, STATE_VARIABLE_ModeInfo_93_93, STATE_VARIABLE_ModeInfo_69);
    }
    else
    {
      MR_Word NonGroundNonLocals_62;
      MR_Word Var_95;

      {
        Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (InstMap1_33));
        MR_hl_field(MR_mktag(0), Var_95, 4) = ((MR_Box) (ModuleInfo2_48));
      }
      mercury__list__filter_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), Var_95, NonLocalsList_46, &NonGroundNonLocals_62);
      if ((NonGroundNonLocals_62 == (MR_Word) ((MR_Integer) 0)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_lambda\'/8", (MR_String) "very strange var");
          return;
        }
      }
      else
      {
        MR_Word BadVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonGroundNonLocals_62, (MR_Integer) 0))));
        MR_Word BadInst_65;
        MR_Word WaitingVars_66;
        MR_Word ModeError_67;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap1_33, BadVar_63, &BadInst_65);
        WaitingVars_66 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BadVar_63);
        {
          ModeError_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ModeError_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ModeError_67, 1) = ((MR_Box) (BadVar_63));
          MR_hl_field(MR_mktag(3), ModeError_67, 2) = ((MR_Box) (BadInst_65));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_66, ModeError_67, STATE_VARIABLE_ModeInfo_71_71, STATE_VARIABLE_ModeInfo_69);
      }
      RHS_57 = LambdaRHS_10;
      UnifyMode_59 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[7]);
      Unification_58 = Unification0_11;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *UnifyGoalExpr_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_57));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_59));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_58));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_12));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_50;

    conv0_LambdaHeadVar__2_50 = check_hlds__modecheck_unify__IntroducedFrom__func__modecheck_unify_lambda__509__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_50));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(
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
  MR_Word STATE_VARIABLE_ModeInfo_0_40,
  MR_Word * STATE_VARIABLE_ModeInfo_41)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_24;
    MR_Word InstMap0_25;
    MR_Word InstOfX_26;
    MR_Word InstOfY_27;
    MR_Word LambdaPredInfo_28;
    MR_Word Var_43;
    MR_Word UnifyInst_29;
    MR_Word ModuleInfo1_31;
    MR_Word _Detism_30;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_40, &ModuleInfo0_24);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_40, &InstMap0_25);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_25, X_13, &InstOfX_26);
    {
      LambdaPredInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaPredInfo_28, 0) = ((MR_Box) (PredOrFunc_14));
      MR_hl_field(MR_mktag(0), LambdaPredInfo_28, 1) = ((MR_Box) (LambdaModes_16));
      MR_hl_field(MR_mktag(0), LambdaPredInfo_28, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), LambdaPredInfo_28, 3) = ((MR_Box) (LambdaDetism_17));
    }
    Var_43 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (LambdaPredInfo_28)));
    {
      InstOfY_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InstOfY_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), InstOfY_27, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), InstOfY_27, 2) = ((MR_Box) (Var_43));
    }
    succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, InstOfX_26, InstOfY_27, (MR_Integer) 0, &UnifyInst_29, &_Detism_30, ModuleInfo0_24, &ModuleInfo1_31);
    if (succeeded)
    {
      MR_Word FromToInstsOfX_33;
      MR_Word FromToInstsOfY_34;
      MR_Word ArgInsts_35;
      MR_Word ArgFromToInsts_36;
      MR_Word STATE_VARIABLE_ModeInfo_47_47;
      MR_Word STATE_VARIABLE_ModeInfo_52_52;

      check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_31, STATE_VARIABLE_ModeInfo_0_40, &STATE_VARIABLE_ModeInfo_47_47);
      {
        FromToInstsOfX_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfX_33, 0) = ((MR_Box) (InstOfX_26));
        MR_hl_field(MR_mktag(0), FromToInstsOfX_33, 1) = ((MR_Box) (UnifyInst_29));
      }
      {
        FromToInstsOfY_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfY_34, 0) = ((MR_Box) (InstOfY_27));
        MR_hl_field(MR_mktag(0), FromToInstsOfY_34, 1) = ((MR_Box) (UnifyInst_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *UnifyMode_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FromToInstsOfX_33));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FromToInstsOfY_34));
      }
      hlds__instmap__instmap_lookup_vars_3_p_0(InstMap0_25, ArgVars_15, &ArgInsts_35);
      ArgFromToInsts_36 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_3[3]), ArgInsts_35);
      check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(FromToInstsOfX_33, ArgFromToInsts_36, X_13, ArgVars_15, PredOrFunc_14, RHS0_18, RHS_19, Unification0_20, Unification_21, STATE_VARIABLE_ModeInfo_47_47, &STATE_VARIABLE_ModeInfo_52_52);
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_13, UnifyInst_29, (MR_Word) ((MR_Integer) 0), STATE_VARIABLE_ModeInfo_52_52, STATE_VARIABLE_ModeInfo_41);
    }
    else
    {
      MR_Word WaitingVars_38;
      MR_Word ModeError_39;
      MR_Word Var_55;
      MR_Word STATE_VARIABLE_ModeInfo_57_57;
      MR_Word FromToInstsOfX_62;
      MR_Word FromToInstsOfY_63;

      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (X_13));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_55, &WaitingVars_38);
      {
        ModeError_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeError_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
        MR_hl_field(MR_mktag(3), ModeError_39, 1) = ((MR_Box) (X_13));
        MR_hl_field(MR_mktag(3), ModeError_39, 2) = ((MR_Box) (InstOfX_26));
        MR_hl_field(MR_mktag(3), ModeError_39, 3) = ((MR_Box) (InstOfY_27));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_38, ModeError_39, STATE_VARIABLE_ModeInfo_0_40, &STATE_VARIABLE_ModeInfo_57_57);
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_13, (MR_Word) ((MR_Integer) 4), (MR_Word) ((MR_Integer) 0), STATE_VARIABLE_ModeInfo_57_57, STATE_VARIABLE_ModeInfo_41);
      {
        FromToInstsOfX_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfX_62, 0) = ((MR_Box) (InstOfX_26));
        MR_hl_field(MR_mktag(0), FromToInstsOfX_62, 1) = ((MR_Box) ((MR_Integer) 4));
      }
      {
        FromToInstsOfY_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfY_63, 0) = ((MR_Box) (InstOfY_27));
        MR_hl_field(MR_mktag(0), FromToInstsOfY_63, 1) = ((MR_Box) ((MR_Integer) 4));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *UnifyMode_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FromToInstsOfX_62));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FromToInstsOfY_63));
      }
      *Unification_21 = Unification0_20;
      *RHS_19 = RHS0_18;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1273__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(
  MR_Word FromToInstsOfX_12,
  MR_Word ArgFromToInsts_13,
  MR_Word X_14,
  MR_Word ArgVars_15,
  MR_Word PredOrFunc_16,
  MR_Word RHS0_17,
  MR_Word * RHS_18,
  MR_Word Unification0_19,
  MR_Word * Unification_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_80,
  MR_Word * STATE_VARIABLE_ModeInfo_81)
{
  {
    MR_bool succeeded;
    MR_Integer Arity_22;
    MR_Word ConsId_24;
    MR_Word SubInfo_29;
    MR_Word ArgModes_45;
    MR_Word InstMap_46;
    MR_Word ModuleInfo_47;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ArgVars_15, &Arity_22);
    switch (MR_tag((MR_Word) Unification0_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ConsId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_19, (MR_Integer) 1))));
          SubInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_19, (MR_Integer) 6))));
          if (!((SubInfo_29 == (MR_Word) ((MR_Integer) 0))))
          {
            MR_Word MaybeTakeAddr_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_29, (MR_Integer) 0))));
            MR_Word Var_87;

            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1));
              MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (MaybeTakeAddr_30));
              MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_87, (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "take_addr");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ConsId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 1))));
          SubInfo_29 = (MR_Word) ((MR_Integer) 0);
        }
        break;
      case (MR_Integer) 2:
        {
          SubInfo_29 = (MR_Word) ((MR_Integer) 0);
          {
            ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ConsId_24, 1) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[1]));
            MR_hl_field(MR_mktag(3), ConsId_24, 2) = ((MR_Box) (Arity_22));
            MR_hl_field(MR_mktag(3), ConsId_24, 3) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[10]));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          SubInfo_29 = (MR_Word) ((MR_Integer) 0);
          {
            ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ConsId_24, 1) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[1]));
            MR_hl_field(MR_mktag(3), ConsId_24, 2) = ((MR_Box) (Arity_22));
            MR_hl_field(MR_mktag(3), ConsId_24, 3) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[10]));
          }
        }
        break;
    }
    check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(ArgFromToInsts_13, ArgFromToInsts_13, &ArgModes_45);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_80, &InstMap_46);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_80, &ModuleInfo_47);
    succeeded = check_hlds__mode_util__from_to_insts_is_output_2_p_0(ModuleInfo_47, FromToInstsOfX_12);
    if (succeeded)
    {
      MR_Word ShroudedPredProcId_48;

      succeeded = ((((MR_tag((MR_Word) ConsId_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_24, (MR_Integer) 0))) == (MR_Integer) 4)));
      if (succeeded)
      {
        ShroudedPredProcId_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_24, (MR_Integer) 1))));
        succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_46);
      }
      if (succeeded)
      {
        MR_Word PredId_50;
        MR_Integer ProcId_51;
        MR_Word Var_92;
        MR_Word Goal_59;
        MR_Word Var_93;
        MR_Word Var_116;
        MR_Integer Var_117;
        MR_Unsigned packed_args_0;

        Var_92 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_48);
        PredId_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_92, (MR_Integer) 0))));
        ProcId_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_92, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) RHS0_17)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
        {
          packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_17, (MR_Integer) 0)));
          Goal_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_17, (MR_Integer) 6))));
          succeeded = MR_TRUE;
          if (succeeded)
          {
            Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_59, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_93)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_93, (MR_Integer) 0))));
              Var_117 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_93, (MR_Integer) 1))));
              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_50, Var_116);
              if (succeeded)
                succeeded = (ProcId_51 == Var_117);
            }
          }
        }
        if (succeeded)
        {
          MR_Word PredInfo_65;
          MR_Word PredModule_66;
          MR_String PredName_67;
          MR_Word VarTypes_68;
          MR_Word Type_69;
          MR_Word RHSTypeCtor_75;
          MR_Word RHSConsId_76;
          MR_Word Var_102;
          MR_Word PorF_70;

          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_47, PredId_50, &PredInfo_65);
          PredModule_66 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_65);
          PredName_67 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_65);
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_80, &VarTypes_68);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_68, X_14, &Type_69);
          succeeded = ((((MR_tag((MR_Word) Type_69)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_69, (MR_Integer) 0))) == (MR_Integer) 1)));
          if (succeeded)
          {
            PorF_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_69, (MR_Integer) 1))));
            switch (PorF_70) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                RHSTypeCtor_75 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[11]);
                break;
              case (MR_Integer) 0:
                RHSTypeCtor_75 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[12]);
                break;
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "bad HO type");
              return;
            }
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (PredModule_66));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (PredName_67));
          }
          {
            RHSConsId_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RHSConsId_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), RHSConsId_76, 1) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(3), RHSConsId_76, 2) = ((MR_Box) (Arity_22));
            MR_hl_field(MR_mktag(3), RHSConsId_76, 3) = ((MR_Box) (RHSTypeCtor_75));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *RHS_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RHSConsId_76));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ArgVars_15));
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "reintroduced lambda goal");
            return;
          }
        }
      }
      else
        *RHS_18 = RHS0_17;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        *Unification_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConsId_24));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgVars_15));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgModes_45));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (SubInfo_29));
      }
      *STATE_VARIABLE_ModeInfo_81 = STATE_VARIABLE_ModeInfo_0_80;
    }
    else
    {
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_46);
      if (succeeded)
      {
        MR_Word WaitingVars_77;
        MR_Word VarTypes0_78;
        MR_Word ModeError_79;
        MR_Word Var_108;
        MR_Word Type_110;

        parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_77);
        check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_80, &VarTypes0_78);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_78, X_14, &Type_110);
        {
          Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (ArgVars_15));
          MR_hl_field(MR_mktag(2), Var_108, 1) = ((MR_Box) (ArgFromToInsts_13));
        }
        {
          ModeError_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ModeError_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), ModeError_79, 1) = ((MR_Box) (X_14));
          MR_hl_field(MR_mktag(3), ModeError_79, 2) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(3), ModeError_79, 3) = ((MR_Box) (Type_110));
          MR_hl_field(MR_mktag(3), ModeError_79, 4) = ((MR_Box) (PredOrFunc_16));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_77, ModeError_79, STATE_VARIABLE_ModeInfo_0_80, STATE_VARIABLE_ModeInfo_81);
        *Unification_20 = Unification0_19;
        *RHS_18 = RHS0_17;
      }
      else
      {
        *Unification_20 = Unification0_19;
        *RHS_18 = RHS0_17;
        *STATE_VARIABLE_ModeInfo_81 = STATE_VARIABLE_ModeInfo_0_80;
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTypes_8,
  MR_Word InstMap_9,
  MR_Word ArgVars_10,
  MR_Word CalleePredInfo_11,
  MR_Word * Result_12)
{
  {
    MR_Word CalleeProcIds_13;

    CalleeProcIds_13 = hlds__hlds_pred__pred_info_procids_1_f_0(CalleePredInfo_11);
    check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_9_p_0(ModuleInfo_7, VarTypes_8, InstMap_9, ArgVars_10, CalleePredInfo_11, CalleeProcIds_13, (MR_Word) ((MR_Integer) 0), (MR_Word) ((MR_Integer) 0), Result_12);
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word InstMap_3,
  MR_Word ArgVars_4,
  MR_Word CalleePredInfo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevMatchedProcIds_0_7,
  MR_Word STATE_VARIABLE_NonGroundNonLocals_0_8,
  MR_Word * Result_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Integer) 0)))
      if ((STATE_VARIABLE_NonGroundNonLocals_0_8 == (MR_Word) ((MR_Integer) 0)))
      {
        MR_Word Var_23;

        Var_23 = mercury__list__reverse_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), STATE_VARIABLE_RevMatchedProcIds_0_7);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *Result_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_NonGroundNonLocals_22_22;

        STATE_VARIABLE_NonGroundNonLocals_22_22 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), STATE_VARIABLE_NonGroundNonLocals_0_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (STATE_VARIABLE_NonGroundNonLocals_22_22));
        }
      }
    else
    {
      MR_Integer ProcId_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word ProcIds_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word CalleeProcInfo_34;
      MR_Word ArgModes_35;
      MR_Word ProcNonGroundNonLocals_36;
      MR_Word ProcResult_37;
      MR_Word STATE_VARIABLE_NonGroundNonLocals_40_40;
      MR_Word STATE_VARIABLE_RevMatchedProcIds_41_41;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevMatchedProcIds_0_7;
      MR_Word next_value_of_STATE_VARIABLE_NonGroundNonLocals_0_8;

      hlds__hlds_pred__pred_info_proc_info_3_p_0(CalleePredInfo_5, ProcId_29, &CalleeProcInfo_34);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_34, &ArgModes_35);
      check_hlds__modecheck_unify__match_mode_by_higher_order_insts_7_p_0(ModuleInfo_1, VarTypes_2, InstMap_3, ArgVars_4, ArgModes_35, &ProcNonGroundNonLocals_36, &ProcResult_37);
      STATE_VARIABLE_NonGroundNonLocals_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ProcNonGroundNonLocals_36, STATE_VARIABLE_NonGroundNonLocals_0_8);
      switch (ProcResult_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_RevMatchedProcIds_41_41 = STATE_VARIABLE_RevMatchedProcIds_0_7;
          break;
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_RevMatchedProcIds_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchedProcIds_41_41, 0) = ((MR_Box) (ProcId_29));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchedProcIds_41_41, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchedProcIds_0_7));
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = ProcIds_30;
      next_value_of_STATE_VARIABLE_RevMatchedProcIds_0_7 = STATE_VARIABLE_RevMatchedProcIds_41_41;
      next_value_of_STATE_VARIABLE_NonGroundNonLocals_0_8 = STATE_VARIABLE_NonGroundNonLocals_40_40;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevMatchedProcIds_0_7 = next_value_of_STATE_VARIABLE_RevMatchedProcIds_0_7;
      STATE_VARIABLE_NonGroundNonLocals_0_8 = next_value_of_STATE_VARIABLE_NonGroundNonLocals_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__match_mode_by_higher_order_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word ArgModesList_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Integer) 0)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Integer) 0);
      *HeadVar__7_7 = (MR_Integer) 0;
    }
    else
    {
      MR_Word ArgVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ArgVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word ArgMode_20;
      MR_Word ArgModes_21;
      MR_Word TailNonGroundArgVars_22;
      MR_Word TailResult_23;
      MR_Word Initial_24;
      MR_Word Var_31;

      if ((ArgModesList_5 == (MR_Word) ((MR_Integer) 0)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.match_mode_by_higher_order_insts\'/7", (MR_String) "too many arguments");
          return;
        }
      }
      else
      {
        ArgMode_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModesList_5, (MR_Integer) 0))));
        ArgModes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModesList_5, (MR_Integer) 1))));
      }
      check_hlds__modecheck_unify__match_mode_by_higher_order_insts_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgVars_16, ArgModes_21, &TailNonGroundArgVars_22, &TailResult_23);
      Initial_24 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(HeadVar__1_1, ArgMode_20);
      succeeded = ((((MR_tag((MR_Word) Initial_24)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Initial_24, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initial_24, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word ArgInst_27;
        MR_Word ArgType_28;

        hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__3_3, ArgVar_15, &ArgInst_27);
        hlds__vartypes__lookup_var_type_3_p_0(HeadVar__2_2, ArgVar_15, &ArgType_28);
        succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(ArgInst_27, Initial_24, ArgType_28, HeadVar__1_1);
        if (succeeded)
        {
          *HeadVar__6_6 = TailNonGroundArgVars_22;
          *HeadVar__7_7 = TailResult_23;
        }
        else
        {
          succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(HeadVar__1_1, ArgInst_27);
          if (succeeded)
            *HeadVar__6_6 = TailNonGroundArgVars_22;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgVar_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailNonGroundArgVars_22));
            }
          *HeadVar__7_7 = (MR_Integer) 1;
        }
      }
      else
      {
        *HeadVar__6_6 = TailNonGroundArgVars_22;
        *HeadVar__7_7 = TailResult_23;
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_37 = ((MR_Word) ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_37));
    check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_38 = ((MR_Word) ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_38));
    check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(env_ptr);
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

    hlds__vartypes__lookup_var_type_3_p_0((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_38, &(env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_39);
    (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_39);
    if ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
      check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_free_2_p_0((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_37);
    if ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
    {
      (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_105_105 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]);
      mercury__list__member_2_p_1((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_105_105, &(env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_38, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5, env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(
  void * env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word TypeCtorInfo_104_104;

          (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_free_2_p_0((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24);
          if ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
          {
            TypeCtorInfo_104_104 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
            mercury__list__member_2_p_1(TypeCtorInfo_104_104, &(env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_37, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31, check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3, env_ptr);
          }
        }
        (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(
  MR_Word X0_12,
  MR_Word TypeOfX_13,
  MR_Word ConsId0_14,
  MR_Word IsExistConstruction_15,
  MR_Word ArgVars0_16,
  MR_Word Unification0_17,
  MR_Word UnifyContext_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalExpr_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_67,
  MR_Word * STATE_VARIABLE_ModeInfo_68)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s env;

    (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16 = ArgVars0_16;
    {
      MR_Word InstMap0_22;
      MR_Word X_23;
      MR_Word LiveX_25;
      MR_Word ExtraGoalsExistConstruct_26;
      MR_Word InstMap1_27;
      MR_Word HowToCheckGoal_28;
      MR_Word LiveArgs_32;
      MR_Word ConsId_33;
      MR_Word InstConsId_34;
      MR_Word InstOfY_35;
      MR_Word STATE_VARIABLE_ModeInfo_69_69;
      MR_Word Var_72;
      MR_Word Var_73;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_67, &InstMap0_22);
      check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(IsExistConstruction_15, X0_12, &X_23, &(env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, &LiveX_25, &ExtraGoalsExistConstruct_26, STATE_VARIABLE_ModeInfo_0_67, &STATE_VARIABLE_ModeInfo_69_69);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &InstMap1_27);
      check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &HowToCheckGoal_28);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &(env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29);
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &(env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30);
      hlds__instmap__instmap_lookup_vars_3_p_0(InstMap1_27, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &(env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31);
      check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(STATE_VARIABLE_ModeInfo_69_69, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &LiveArgs_32);
      parse_tree__prog_type__qualify_cons_id_4_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, ConsId0_14, &ConsId_33, &InstConsId_34);
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (InstConsId_34));
        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        InstOfY_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), InstOfY_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), InstOfY_35, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), InstOfY_35, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), InstOfY_35, 3) = ((MR_Box) (Var_72));
      }
      (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ((MR_Box) (X_23)), (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16);
      if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
      {
        (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
        {
          MR_Word Warning_36;
          MR_Word STATE_VARIABLE_ModeInfo_75_75;

          {
            Warning_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Warning_36, 0) = ((MR_Box) (X_23));
            MR_hl_field(MR_mktag(2), Warning_36, 1) = ((MR_Box) (ConsId_33));
          }
          check_hlds__mode_info__mode_info_warning_3_p_0(Warning_36, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_75_75);
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_23, (MR_Word) ((MR_Integer) 4), (MR_Word) ((MR_Integer) 0), STATE_VARIABLE_ModeInfo_75_75, STATE_VARIABLE_ModeInfo_68);
          *GoalExpr_20 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[9]));
        }
        else
        {
          MR_Word Var_80;

          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (X_23));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(X_23, InstConsId_34, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31, Var_80, GoalExpr_20, STATE_VARIABLE_ModeInfo_69_69, STATE_VARIABLE_ModeInfo_68);
        }
      }
      else
      {
        MR_Word UnifiedInst_40;
        MR_Word Detism_41;
        MR_Word ModuleInfo1_42;
        MR_Word Var_83;

        check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(&env);
        (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = !((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
        {
          Var_83 = (MR_Integer) 0;
          (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(LiveX_25, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, InstConsId_34, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31, LiveArgs_32, Var_83, TypeOfX_13, &UnifiedInst_40, &Detism_41, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, &ModuleInfo1_42);
        }
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
        {
          MR_Word FromToInstsOfX_43;
          MR_Word FromToInstsOfY_44;
          MR_Word UnifyMode_45;
          MR_Word ArgFromToInsts_46;
          MR_Word InstOfX1_47;
          MR_Integer Arity_48;
          MR_Word InstOfXArgs_49;
          MR_Word ModeOfXArgs_50;
          MR_Word Unification1_51;
          MR_Word Unification_52;
          MR_Word ArgVars_53;
          MR_Word ExtraGoalsSplitSubUnifies_54;
          MR_Word STATE_VARIABLE_ModeInfo_84_84;
          MR_Word STATE_VARIABLE_ModeInfo_85_85;
          MR_Word STATE_VARIABLE_ModeInfo_86_86;
          MR_Word Var_87;
          MR_Word STATE_VARIABLE_ModeInfo_88_88;
          MR_Word STATE_VARIABLE_ModeInfo_89_89;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;

          check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_42, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_84_84);
          {
            FromToInstsOfX_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FromToInstsOfX_43, 0) = ((MR_Box) ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24));
            MR_hl_field(MR_mktag(0), FromToInstsOfX_43, 1) = ((MR_Box) (UnifiedInst_40));
          }
          {
            FromToInstsOfY_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FromToInstsOfY_44, 0) = ((MR_Box) (InstOfY_35));
            MR_hl_field(MR_mktag(0), FromToInstsOfY_44, 1) = ((MR_Box) (UnifiedInst_40));
          }
          {
            UnifyMode_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UnifyMode_45, 0) = ((MR_Box) (FromToInstsOfX_43));
            MR_hl_field(MR_mktag(0), UnifyMode_45, 1) = ((MR_Box) (FromToInstsOfY_44));
          }
          check_hlds__modecheck_unify__get_mode_of_args_3_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31, UnifiedInst_40, &ArgFromToInsts_46);
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo1_42, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, &InstOfX1_47);
          mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &Arity_48);
          parse_tree__prog_mode__get_arg_insts_det_4_p_0(InstOfX1_47, InstConsId_34, Arity_48, &InstOfXArgs_49);
          check_hlds__modecheck_unify__get_mode_of_args_3_p_0(InstOfXArgs_49, UnifiedInst_40, &ModeOfXArgs_50);
          check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(FromToInstsOfX_43, ModeOfXArgs_50, ArgFromToInsts_46, X_23, ConsId_33, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30, UnifyContext_18, Unification0_17, &Unification1_51, STATE_VARIABLE_ModeInfo_84_84, &STATE_VARIABLE_ModeInfo_85_85);
          check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(Unification1_51, &Unification_52, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &ArgVars_53, &ExtraGoalsSplitSubUnifies_54, STATE_VARIABLE_ModeInfo_85_85, &STATE_VARIABLE_ModeInfo_86_86);
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (InstOfY_35));
          }
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_23, UnifiedInst_40, Var_87, STATE_VARIABLE_ModeInfo_86_86, &STATE_VARIABLE_ModeInfo_88_88);
          check_hlds__modecheck_unify__bind_args_if_needed_6_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, UnifiedInst_40, ArgVars_53, InstOfXArgs_49, STATE_VARIABLE_ModeInfo_88_88, &STATE_VARIABLE_ModeInfo_89_89);
          (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) Unification_52)) == (MR_mktag((MR_Integer) 0)));
          if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
          {
            Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_52, (MR_Integer) 0))));
            Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_52, (MR_Integer) 1))));
            Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_52, (MR_Integer) 2))));
            Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_52, (MR_Integer) 3))));
            Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_52, (MR_Integer) 4))));
            Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_52, (MR_Integer) 5))));
            Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_52, (MR_Integer) 6))));
            (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (LiveX_25 == (MR_Integer) 1);
          }
          if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
          {
            *GoalExpr_20 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_3[1]));
            *STATE_VARIABLE_ModeInfo_68 = STATE_VARIABLE_ModeInfo_89_89;
          }
          else
          {
            (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (Detism_41 == (MR_Integer) 7);
            if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
            {
              *GoalExpr_20 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[9]));
              check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(X_23, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, ConsId_33, STATE_VARIABLE_ModeInfo_89_89, STATE_VARIABLE_ModeInfo_68);
            }
            else
            {
              MR_Word Functor_62;
              MR_Word UnifyExpr_63;
              MR_Word ExtraGoals_64;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_65;
              MR_Word Var_66;

              {
                Functor_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Functor_62, 0) = ((MR_Box) (ConsId_33));
                MR_hl_field(MR_mktag(1), Functor_62, 1) = ((MR_Box) (IsExistConstruction_15));
                MR_hl_field(MR_mktag(1), Functor_62, 2) = ((MR_Box) (ArgVars_53));
              }
              {
                UnifyExpr_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), UnifyExpr_63, 0) = ((MR_Box) (X_23));
                MR_hl_field(MR_mktag(1), UnifyExpr_63, 1) = ((MR_Box) (Functor_62));
                MR_hl_field(MR_mktag(1), UnifyExpr_63, 2) = ((MR_Box) (UnifyMode_45));
                MR_hl_field(MR_mktag(1), UnifyExpr_63, 3) = ((MR_Box) (Unification_52));
                MR_hl_field(MR_mktag(1), UnifyExpr_63, 4) = ((MR_Box) (UnifyContext_18));
              }
              check_hlds__modecheck_util__append_extra_goals_3_p_0(ExtraGoalsExistConstruct_26, ExtraGoalsSplitSubUnifies_54, &ExtraGoals_64);
              (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (HowToCheckGoal_28 == (MR_Integer) 1);
              if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
              {
                (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) ExtraGoals_64)) == (MR_mktag((MR_Integer) 1)));
                if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
                {
                  Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExtraGoals_64, (MR_Integer) 0))));
                  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExtraGoals_64, (MR_Integer) 1))));
                  (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_27);
                }
              }
              if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_functor\'/11", (MR_String) "re-modecheck of unification encountered complicated sub-unifies");
                  return;
                }
              }
              else
              {
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (X0_12));
                MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (X_23));
                MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (ArgVars_53));
              }
              check_hlds__modecheck_util__handle_extra_goals_9_p_0(UnifyExpr_63, ExtraGoals_64, GoalInfo0_19, Var_98, Var_99, InstMap0_22, GoalExpr_20, STATE_VARIABLE_ModeInfo_89_89, STATE_VARIABLE_ModeInfo_68);
            }
          }
        }
        else
        {
          MR_Word Var_101;

          {
            Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (X_23));
            MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
          }
          check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(X_23, InstConsId_34, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31, Var_101, GoalExpr_20, STATE_VARIABLE_ModeInfo_69_69, STATE_VARIABLE_ModeInfo_68);
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__get_mode_of_args_3_p_0(
  MR_Word ArgInitInsts_4,
  MR_Word FinalInst_5,
  MR_Word * ArgFromToInsts_6)
{
  {
    MR_bool succeeded;
    MR_Word ArgFromToInstsPrime_7;

    succeeded = check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(ArgInitInsts_4, FinalInst_5, &ArgFromToInstsPrime_7);
    if (succeeded)
      *ArgFromToInsts_6 = ArgFromToInstsPrime_7;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.get_mode_of_args\'/3", (MR_String) "try_get_mode_of_args failed");
        return;
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
      case (MR_Integer) 2:
        {
          MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FinalInst_5, (MR_Integer) 1))));

          succeeded = (Var_18 == (MR_Word) ((MR_Integer) 0));
          if (succeeded)
          {
            check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(ArgInitInsts_4, FinalInst_5, ArgFromToInsts_6);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FinalInst_5, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_5, (MR_Integer) 3))));

              if ((BoundInsts_9 == (MR_Word) ((MR_Integer) 0)))
              {
                check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(ArgInitInsts_4, (MR_Word) ((MR_Integer) 4), ArgFromToInsts_6);
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word FunctorArgInsts_11;
                MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_9, (MR_Integer) 0))));
                MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_9, (MR_Integer) 1))));

                succeeded = (Var_15 == (MR_Word) ((MR_Integer) 0));
                if (succeeded)
                {
                  FunctorArgInsts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
                  check_hlds__modecheck_unify__pair_up_insts_3_p_0(ArgInitInsts_4, FunctorArgInsts_11, ArgFromToInsts_6);
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_5, (MR_Integer) 2))));

              succeeded = (Var_17 == (MR_Word) ((MR_Integer) 0));
              if (succeeded)
              {
                check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(ArgInitInsts_4, FinalInst_5, ArgFromToInsts_6);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_5, (MR_Integer) 2))));
              MR_Word next_value_of_FinalInst_5 = SubInst_13;

              // direct tailcall eliminated
              ;
              FinalInst_5 = next_value_of_FinalInst_5;
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

static void MR_CALL 
check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FinalInst_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
    *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
  else
  {
    MR_Word InitInst_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word InitInsts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word FromToInst_8;
    MR_Word FromToInsts_9;

    {
      FromToInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FromToInst_8, 0) = ((MR_Box) (InitInst_5));
      MR_hl_field(MR_mktag(0), FromToInst_8, 1) = ((MR_Box) (FinalInst_2));
    }
    check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(InitInsts_6, FinalInst_2, &FromToInsts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FromToInst_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FromToInsts_9));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__pair_up_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
      *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.pair_up_insts\'/3", (MR_String) "mismatched list lengths");
        return;
      }
    }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.pair_up_insts\'/3", (MR_String) "mismatched list lengths");
        return;
      }
    }
    else
    {
      MR_Word InstB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word InstsB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word FromToInst_18;
      MR_Word FromToInsts_19;

      {
        FromToInst_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInst_18, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), FromToInst_18, 1) = ((MR_Box) (InstB_16));
      }
      check_hlds__modecheck_unify__pair_up_insts_3_p_0(Var_20, InstsB_17, &FromToInsts_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FromToInst_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FromToInsts_19));
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_20;

    conv0_LambdaHeadVar__2_20 = check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1618__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
    return wrapper_arg_2;
  }
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
            MR_Word STATE_VARIABLE_ModeInfo_12_31;

            UnifyArgInsts_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[2]), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_3[2]), InstOfXArgs_10);
            succeeded = check_hlds__modecheck_unify__try_bind_args_5_p_0(Inst_8, ArgVars_9, UnifyArgInsts_14, STATE_VARIABLE_ModeInfo_0_16, &STATE_VARIABLE_ModeInfo_12_31);
            if (succeeded)
              *STATE_VARIABLE_ModeInfo_17 = STATE_VARIABLE_ModeInfo_12_31;
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.bind_args\'/5", (MR_String) "try_bind_args failed");
                return;
              }
            }
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1378__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(
  MR_Word FromToInstsOfX_13,
  MR_Word FromToInstsOfXArgs_14,
  MR_Word ArgFromToInsts_15,
  MR_Word X_16,
  MR_Word NewConsId_17,
  MR_Word ArgVars_18,
  MR_Word VarTypes_19,
  MR_Word UnifyContext_20,
  MR_Word Unification0_21,
  MR_Word * Unification_22,
  MR_Word STATE_VARIABLE_ModeInfo_0_70,
  MR_Word * STATE_VARIABLE_ModeInfo_71)
{
  {
    MR_bool succeeded;
    MR_Word TypeOfX_24;
    MR_Word SubInfo_34;
    MR_Word ConsId_35;
    MR_Word ArgModes_48;
    MR_Word ModuleInfo_49;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, X_16, &TypeOfX_24);
    switch (MR_tag((MR_Word) Unification0_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ConsId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_21, (MR_Integer) 1))));
          SubInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_21, (MR_Integer) 6))));
          if (!((SubInfo_34 == (MR_Word) ((MR_Integer) 0))))
          {
            MR_Word MaybeTakeAddr_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_34, (MR_Integer) 0))));
            MR_Word Var_72;

            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1));
              MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (MaybeTakeAddr_32));
              MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_functor\'/12", (MR_String) "take_addr");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ConsId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_21, (MR_Integer) 1))));
          SubInfo_34 = (MR_Word) ((MR_Integer) 0);
        }
        break;
      case (MR_Integer) 2:
        {
          SubInfo_34 = (MR_Word) ((MR_Integer) 0);
          ConsId_35 = NewConsId_17;
        }
        break;
      case (MR_Integer) 3:
        {
          SubInfo_34 = (MR_Word) ((MR_Integer) 0);
          ConsId_35 = NewConsId_17;
        }
        break;
    }
    check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(FromToInstsOfXArgs_14, ArgFromToInsts_15, &ArgModes_48);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_70, &ModuleInfo_49);
    succeeded = check_hlds__mode_util__from_to_insts_is_output_2_p_0(ModuleInfo_49, FromToInstsOfX_13);
    if (succeeded)
    {
      MR_Word Var_78;
      MR_Word STATE_VARIABLE_ModeInfo_79_79;
      MR_Word STATE_VARIABLE_ModeInfo_80_80;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        *Unification_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConsId_35));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgVars_18));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgModes_48));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (SubInfo_34));
      }
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (UnifyContext_20));
      }
      check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_78, STATE_VARIABLE_ModeInfo_0_70, &STATE_VARIABLE_ModeInfo_79_79);
      check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(ArgVars_18, VarTypes_19, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_80_80);
      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_80_80, STATE_VARIABLE_ModeInfo_71);
    }
    else
    {
      MR_Word CanFail_60;
      MR_Word InitialInst0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInstsOfX_13, (MR_Integer) 0))));
      MR_Word FinalInst0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInstsOfX_13, (MR_Integer) 1))));
      MR_Word InitialInst_52;
      MR_Word FinalInst_53;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;

      check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_49, InitialInst0_50, &InitialInst_52);
      check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_49, FinalInst0_51, &FinalInst_53);
      succeeded = ((((MR_tag((MR_Word) InitialInst_52)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InitialInst_52, (MR_Integer) 0))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InitialInst_52, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1))));
          succeeded = (Var_83 == (MR_Word) ((MR_Integer) 0));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) FinalInst_53)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FinalInst_53, (MR_Integer) 0))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalInst_53, (MR_Integer) 3))));
              succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 1))));
                succeeded = (Var_85 == (MR_Word) ((MR_Integer) 0));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        CanFail_60 = (MR_Integer) 1;
        *STATE_VARIABLE_ModeInfo_71 = STATE_VARIABLE_ModeInfo_0_70;
      }
      else
      {
        MR_Word Constructors_61;
        MR_Word Var_86;

        succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_49, TypeOfX_24, &Constructors_61);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Constructors_61)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Constructors_61, (MR_Integer) 1))));
            succeeded = (Var_86 == (MR_Word) ((MR_Integer) 0));
          }
        }
        if (succeeded)
        {
          CanFail_60 = (MR_Integer) 1;
          *STATE_VARIABLE_ModeInfo_71 = STATE_VARIABLE_ModeInfo_0_70;
        }
        else
        {
          MR_Word InstMap0_63;
          MR_Word PredOrFunc_65;
          MR_Word Var_64;
          MR_Word Var_67;

          CanFail_60 = (MR_Integer) 0;
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_70, &InstMap0_63);
          succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(TypeOfX_24, &Var_64, &PredOrFunc_65, &Var_67);
          if (succeeded)
            succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_63);
          if (succeeded)
          {
            MR_Word WaitingVars_68;
            MR_Word ModeError_69;
            MR_Word Var_87;

            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_68);
            {
              Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (ConsId_35));
              MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (ArgVars_18));
            }
            {
              ModeError_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ModeError_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), ModeError_69, 1) = ((MR_Box) (X_16));
              MR_hl_field(MR_mktag(3), ModeError_69, 2) = ((MR_Box) (Var_87));
              MR_hl_field(MR_mktag(3), ModeError_69, 3) = ((MR_Box) (TypeOfX_24));
              MR_hl_field(MR_mktag(3), ModeError_69, 4) = ((MR_Box) (PredOrFunc_65));
            }
            check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_68, ModeError_69, STATE_VARIABLE_ModeInfo_0_70, STATE_VARIABLE_ModeInfo_71);
          }
          else
            *STATE_VARIABLE_ModeInfo_71 = STATE_VARIABLE_ModeInfo_0_70;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        *Unification_22 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConsId_35));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ArgVars_18));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ArgModes_48));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (CanFail_60));
        MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) ((MR_Integer) 1));
      }
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
    else
    {
      MR_Word ArgVar_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgType_16;

      hlds__vartypes__lookup_var_type_3_p_0(HeadVar__2_2, ArgVar_11, &ArgType_16);
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(ArgType_16);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_ModeInfo_20_20;
        MR_Word STATE_VARIABLE_ModeInfo_22_22;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_4;

        check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_20_20);
        check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(ArgVar_11, ArgType_16, (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_3[0])), STATE_VARIABLE_ModeInfo_20_20, &STATE_VARIABLE_ModeInfo_22_22);
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
check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(
  MR_Word Unification0_8,
  MR_Word * Unification_9,
  MR_Word ArgVars0_10,
  MR_Word * ArgVars_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_21,
  MR_Word * STATE_VARIABLE_ModeInfo_22)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Unification0_8)) == (MR_mktag((MR_Integer) 1)));
    MR_Word X_14;
    MR_Word ConsId_15;
    MR_Word ArgModes0_16;
    MR_Word Det_17;
    MR_Word CanCGC_18;
    MR_Word TypeInfo_28_28;
    MR_Word Var_27;

    if (succeeded)
    {
      X_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_8, (MR_Integer) 0))));
      ConsId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_8, (MR_Integer) 1))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_8, (MR_Integer) 2))));
      ArgModes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_8, (MR_Integer) 3))));
      Det_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_8, (MR_Integer) 4))));
      CanCGC_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_8, (MR_Integer) 5))));
      TypeInfo_28_28 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgVars0_10)), ((MR_Box) (Var_27)));
    }
    if (succeeded)
    {
      MR_Word ArgVars1_19;
      MR_Word ExtraGoals1_20;
      MR_Word STATE_VARIABLE_ModeInfo_23_23;

      succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(ArgVars0_10, ArgModes0_16, &ArgVars1_19, &ExtraGoals1_20, STATE_VARIABLE_ModeInfo_0_21, &STATE_VARIABLE_ModeInfo_23_23);
      if (succeeded)
      {
        *STATE_VARIABLE_ModeInfo_22 = STATE_VARIABLE_ModeInfo_23_23;
        *ExtraGoals_12 = ExtraGoals1_20;
        *ArgVars_11 = ArgVars1_19;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          *Unification_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConsId_15));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (*ArgVars_11));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ArgModes0_16));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Det_17));
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (CanCGC_18));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.split_complicated_subunifies\'/7", (MR_String) "split_complicated_subunifies_2 failed");
          return;
        }
      }
    }
    else
    {
      *Unification_9 = Unification0_8;
      *ArgVars_11 = ArgVars0_10;
      *ExtraGoals_12 = (MR_Word) ((MR_Integer) 0);
      *STATE_VARIABLE_ModeInfo_22 = STATE_VARIABLE_ModeInfo_0_21;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Integer) 0));
      if (succeeded)
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
        *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
        *STATE_VARIABLE_ModeInfo_6 = STATE_VARIABLE_ModeInfo_0_5;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Var0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgMode0_12;
      MR_Word ArgModes0_13;
      MR_Word ModuleInfo_17;
      MR_Word FromToInstsX_18;
      MR_Word FromToInstsY_19;
      MR_Word VarTypes0_20;
      MR_Word VarType_21;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_34;
      MR_Word Var_35;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgMode0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgModes0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_5, &ModuleInfo_17);
        FromToInstsX_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode0_12, (MR_Integer) 0))));
        FromToInstsY_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode0_12, (MR_Integer) 1))));
        check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_5, &VarTypes0_20);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_20, Var0_10, &VarType_21);
        Var_28 = (MR_Integer) 0;
        check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_17, FromToInstsX_18, VarType_21, &Var_34);
        succeeded = (Var_28 == Var_34);
        if (succeeded)
        {
          Var_29 = (MR_Integer) 0;
          check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_17, FromToInstsY_19, VarType_21, &Var_35);
          succeeded = (Var_29 == Var_35);
        }
        if (succeeded)
        {
          MR_Word Var_22;
          MR_Word ExtraGoals0_23;
          MR_Word Vars1_24;
          MR_Word ExtraGoals1_25;
          MR_Word STATE_VARIABLE_ModeInfo_30_30;
          MR_Word VarSet0_42;
          MR_Word VarTypes0_43;
          MR_Word VarSet_44;
          MR_Word VarType_45;
          MR_Word VarTypes_46;
          MR_Word ExtraGoal_47;
          MR_Word STATE_VARIABLE_ModeInfo_18_48;
          MR_Word Var_51;

          check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_5, &VarSet0_42);
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_5, &VarTypes0_43);
          mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_22, VarSet0_42, &VarSet_44);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_43, Var0_10, &VarType_45);
          hlds__vartypes__add_var_type_4_p_0(Var_22, VarType_45, VarTypes0_43, &VarTypes_46);
          check_hlds__mode_info__mode_info_set_varset_3_p_0(VarSet_44, STATE_VARIABLE_ModeInfo_0_5, &STATE_VARIABLE_ModeInfo_18_48);
          check_hlds__mode_info__mode_info_set_var_types_3_p_0(VarTypes_46, STATE_VARIABLE_ModeInfo_18_48, &STATE_VARIABLE_ModeInfo_30_30);
          check_hlds__modecheck_unify__create_var_var_unification_5_p_0(Var0_10, Var_22, VarType_45, STATE_VARIABLE_ModeInfo_30_30, &ExtraGoal_47);
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (ExtraGoal_47));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            ExtraGoals0_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ExtraGoals0_23, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), ExtraGoals0_23, 1) = ((MR_Box) (Var_51));
          }
          succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(Vars0_11, ArgModes0_13, &Vars1_24, &ExtraGoals1_25, STATE_VARIABLE_ModeInfo_30_30, STATE_VARIABLE_ModeInfo_6);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars1_24));
            }
            check_hlds__modecheck_util__append_extra_goals_3_p_0(ExtraGoals0_23, ExtraGoals1_25, HeadVar__4_4);
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word Vars1_33;

          succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(Vars0_11, ArgModes0_13, &Vars1_33, HeadVar__4_4, STATE_VARIABLE_ModeInfo_0_5, STATE_VARIABLE_ModeInfo_6);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var0_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars1_33));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
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
  {
    MR_Word ModuleInfo_10;
    MR_Word Globals_11;
    MR_Word WarnCannotSucceed_12;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &ModuleInfo_10);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 23, &WarnCannotSucceed_12);
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
                        Warning_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Warning_18, 0) = ((MR_Box) (X_6));
                        MR_hl_field(MR_mktag(1), Warning_18, 1) = ((MR_Box) (InstOfX_7));
                        MR_hl_field(MR_mktag(1), Warning_18, 2) = ((MR_Box) (ConsId_8));
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
  {
    MR_bool succeeded;
    MR_Word WaitingVars_18;
    MR_Word ModeError_19;
    MR_Word NoArgInsts_21;
    MR_Word STATE_VARIABLE_ModeInfo_24_24;
    MR_Word STATE_VARIABLE_ModeInfo_26_26;
    MR_Integer Var_27;
    MR_Word STATE_VARIABLE_ModeInfo_12_40;

    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), WaitingVarsList_15, &WaitingVars_18);
    {
      ModeError_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ModeError_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), ModeError_19, 1) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(3), ModeError_19, 2) = ((MR_Box) (InstConsId_11));
      MR_hl_field(MR_mktag(3), ModeError_19, 3) = ((MR_Box) (ArgVars0_12));
      MR_hl_field(MR_mktag(3), ModeError_19, 4) = ((MR_Box) (InstOfX_13));
      MR_hl_field(MR_mktag(3), ModeError_19, 5) = ((MR_Box) (InstArgs_14));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_18, ModeError_19, STATE_VARIABLE_ModeInfo_0_22, &STATE_VARIABLE_ModeInfo_24_24);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_10, (MR_Word) ((MR_Integer) 4), (MR_Word) ((MR_Integer) 0), STATE_VARIABLE_ModeInfo_24_24, &STATE_VARIABLE_ModeInfo_26_26);
    Var_27 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ArgVars0_12);
    NoArgInsts_21 = mercury__list__duplicate_2_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[2]), Var_27, ((MR_Box) ((MR_Integer) 0)));
    succeeded = check_hlds__modecheck_unify__try_bind_args_5_p_0((MR_Word) ((MR_Integer) 4), ArgVars0_12, NoArgInsts_21, STATE_VARIABLE_ModeInfo_26_26, &STATE_VARIABLE_ModeInfo_12_40);
    if (succeeded)
      *STATE_VARIABLE_ModeInfo_23 = STATE_VARIABLE_ModeInfo_12_40;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.bind_args\'/5", (MR_String) "try_bind_args failed");
        return;
      }
    }
    *GoalExpr_16 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[9]));
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
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

              if ((BoundInsts_14 == (MR_Word) ((MR_Integer) 0)))
              {
                MR_Word InstMap_29;

                hlds__instmap__init_unreachable_1_p_0(&InstMap_29);
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_29, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word ArgInsts_16;
                MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_14, (MR_Integer) 0))));
                MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInsts_14, (MR_Integer) 1))));

                ArgInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
                succeeded = (Var_23 == (MR_Word) ((MR_Integer) 0));
                if (succeeded)
                  succeeded = check_hlds__modecheck_unify__try_bind_args_2_5_p_0(ArgVars_7, ArgInsts_16, UnifyArgInsts_8, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
              MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));

              succeeded = (Var_26 == (MR_Word) ((MR_Integer) 0));
              if (succeeded)
                succeeded = check_hlds__modecheck_unify__ground_args_5_p_0(Uniq_11, ArgVars_7, UnifyArgInsts_8, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
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
    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Integer) 0));
      if (succeeded)
      {
        *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Arg_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word UnifyArgInst_13;
      MR_Word UnifyArgInsts_14;
      MR_Word Ground_16;
      MR_Word Var_19;
      MR_Word STATE_VARIABLE_ModeInfo_20_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        UnifyArgInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        UnifyArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        Var_19 = (MR_Word) ((MR_Integer) 0);
        {
          Ground_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Ground_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Ground_16, 1) = ((MR_Box) (HeadVar__1_1));
          MR_hl_field(MR_mktag(3), Ground_16, 2) = ((MR_Box) (Var_19));
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
check_hlds__modecheck_unify__try_bind_args_2_5_p_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Integer) 0));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Integer) 0));
        if (succeeded)
        {
          *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Arg_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Inst_11;
      MR_Word Insts_12;
      MR_Word UnifyArgInst_13;
      MR_Word UnifyArgInsts_14;
      MR_Word STATE_VARIABLE_ModeInfo_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Inst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Insts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          UnifyArgInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          UnifyArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
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
check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(
  MR_Word IsExistConstruction_9,
  MR_Word X0_10,
  MR_Word * X_11,
  MR_Word * InstOfX_12,
  MR_Word * LiveX_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * STATE_VARIABLE_ModeInfo_20)
{
  {
    MR_bool succeeded;
    MR_Word InstMap0_16;
    MR_Word InstOfX0_17;
    MR_Word ModuleInfo0_18;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &InstMap0_16);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_16, X0_10, &InstOfX0_17);
    succeeded = (IsExistConstruction_9 == (MR_Integer) 1);
    if (succeeded)
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &ModuleInfo0_18);
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo0_18, InstOfX0_17);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word VarSet0_28;
      MR_Word VarTypes0_29;
      MR_Word VarSet_30;
      MR_Word VarType_31;
      MR_Word VarTypes_32;
      MR_Word ExtraGoal_33;
      MR_Word STATE_VARIABLE_ModeInfo_18_34;
      MR_Word Var_37;

      check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &VarSet0_28);
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_19, &VarTypes0_29);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_11, VarSet0_28, &VarSet_30);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_29, X0_10, &VarType_31);
      hlds__vartypes__add_var_type_4_p_0(*X_11, VarType_31, VarTypes0_29, &VarTypes_32);
      check_hlds__mode_info__mode_info_set_varset_3_p_0(VarSet_30, STATE_VARIABLE_ModeInfo_0_19, &STATE_VARIABLE_ModeInfo_18_34);
      check_hlds__mode_info__mode_info_set_var_types_3_p_0(VarTypes_32, STATE_VARIABLE_ModeInfo_18_34, STATE_VARIABLE_ModeInfo_20);
      check_hlds__modecheck_unify__create_var_var_unification_5_p_0(X0_10, *X_11, VarType_31, *STATE_VARIABLE_ModeInfo_20, &ExtraGoal_33);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ExtraGoal_33));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ExtraGoals_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_37));
      }
      *InstOfX_12 = (MR_Word) ((MR_Integer) 0);
      *LiveX_13 = (MR_Integer) 0;
    }
    else
    {
      *X_11 = X0_10;
      *InstOfX_12 = InstOfX0_17;
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_19, *X_11, LiveX_13);
      *ExtraGoals_14 = (MR_Word) ((MR_Integer) 0);
      *STATE_VARIABLE_ModeInfo_20 = STATE_VARIABLE_ModeInfo_0_19;
    }
  }
}

void MR_CALL 
check_hlds__modecheck_unify__create_var_var_unification_5_p_0(
  MR_Word Var0_6,
  MR_Word Var_7,
  MR_Word Type_8,
  MR_Word ModeInfo_9,
  MR_Word * Goal_10)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11;
    MR_Word GoalInfo_12;
    MR_Word Context_13;
    MR_Word ModeContext_14;
    MR_Word UnifyContext_15;
    MR_Word MainContext_16;
    MR_Word SubContexts_17;
    MR_Word GoalExpr0_18;
    MR_Word GoalInfo0_19;
    MR_Word NonLocals_20;
    MR_Word GoalInfo1_21;
    MR_Word GoalInfo2_22;
    MR_Word ModuleInfo_23;
    MR_Word PredId_24;
    MR_Integer ProcId_25;
    MR_Word ProcInfo_27;
    MR_Word RttiVarMaps_28;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word _PredInfo_26;
    MR_Word X_29;
    MR_Word Y_30;
    MR_Word Mode_31;
    MR_Word Unification0_32;
    MR_Word FinalUnifyContext_33;

    check_hlds__mode_info__mode_info_get_context_2_p_0(ModeInfo_9, &Context_13);
    check_hlds__mode_info__mode_info_get_mode_context_2_p_0(ModeInfo_9, &ModeContext_14);
    check_hlds__modecheck_util__mode_context_to_unify_context_3_p_0(ModeInfo_9, ModeContext_14, &UnifyContext_15);
    MainContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyContext_15, (MR_Integer) 0))));
    SubContexts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyContext_15, (MR_Integer) 1))));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Var_7));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Var0_6, Var_35, Context_13, MainContext_16, SubContexts_17, &Var_36);
    GoalExpr0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
    GoalInfo0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var0_6));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_37, &NonLocals_20);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_20, GoalInfo0_19, &GoalInfo1_21);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_13, GoalInfo1_21, &GoalInfo2_22);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_9, &ModuleInfo_23);
    check_hlds__mode_info__mode_info_get_pred_id_2_p_0(ModeInfo_9, &PredId_24);
    check_hlds__mode_info__mode_info_get_proc_id_2_p_0(ModeInfo_9, &ProcId_25);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_23, PredId_24, ProcId_25, &_PredInfo_26, &ProcInfo_27);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_27, &RttiVarMaps_28);
    succeeded = ((MR_tag((MR_Word) GoalExpr0_18)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      X_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_18, (MR_Integer) 0))));
      Y_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_18, (MR_Integer) 1))));
      Mode_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_18, (MR_Integer) 2))));
      Unification0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_18, (MR_Integer) 3))));
      FinalUnifyContext_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_18, (MR_Integer) 4))));
      {
        MR_Word Unification_34;

        check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0(Type_8, RttiVarMaps_28, Unification0_32, &Unification_34, GoalInfo2_22, &GoalInfo_12);
        {
          GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalExpr_11, 0) = ((MR_Box) (X_29));
          MR_hl_field(MR_mktag(1), GoalExpr_11, 1) = ((MR_Box) (Y_30));
          MR_hl_field(MR_mktag(1), GoalExpr_11, 2) = ((MR_Box) (Mode_31));
          MR_hl_field(MR_mktag(1), GoalExpr_11, 3) = ((MR_Box) (Unification_34));
          MR_hl_field(MR_mktag(1), GoalExpr_11, 4) = ((MR_Box) (FinalUnifyContext_33));
        }
      }
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.create_var_var_unification\'/5", (MR_String) "unexpected GoalExpr0");
        return;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_12));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(
  MR_Word X_8,
  MR_Word ConsId_9,
  MR_Integer ConstNum_10,
  MR_Word UnifyContext_11,
  MR_Word * UnifyGoalExpr_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * STATE_VARIABLE_ModeInfo_31)
{
  {
    MR_bool succeeded;
    MR_Word InstMap_14;
    MR_Word InstOfX_15;
    MR_Word ModuleInfo0_16;
    MR_Word ConstStructDb_17;
    MR_Word ConstStruct_18;
    MR_Word InstOfY_22;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &InstMap_14);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_14, X_8, &InstOfX_15);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_30, &ModuleInfo0_16);
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo0_16, &ConstStructDb_17);
    hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_17, ConstNum_10, &ConstStruct_18);
    InstOfY_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_18, (MR_Integer) 3))));
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo0_16, InstOfX_15);
    if (succeeded)
    {
      MR_Word Unification_24;
      MR_Word FromToInstsOfX_25;
      MR_Word FromToInstsOfY_26;
      MR_Word UnifyMode_27;
      MR_Word Var_32;
      MR_Word Var_39;

      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (InstOfY_22));
      }
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_8, InstOfY_22, Var_32, STATE_VARIABLE_ModeInfo_0_30, STATE_VARIABLE_ModeInfo_31);
      {
        Unification_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_24, 0) = ((MR_Box) (X_8));
        MR_hl_field(MR_mktag(0), Unification_24, 1) = ((MR_Box) (ConsId_9));
        MR_hl_field(MR_mktag(0), Unification_24, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Unification_24, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Unification_24, 4) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Unification_24, 5) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_24, 6) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        FromToInstsOfX_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfX_25, 0) = ((MR_Box) (InstOfX_15));
        MR_hl_field(MR_mktag(0), FromToInstsOfX_25, 1) = ((MR_Box) (InstOfY_22));
      }
      {
        FromToInstsOfY_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfY_26, 0) = ((MR_Box) (InstOfY_22));
        MR_hl_field(MR_mktag(0), FromToInstsOfY_26, 1) = ((MR_Box) (InstOfY_22));
      }
      {
        UnifyMode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_27, 0) = ((MR_Box) (FromToInstsOfX_25));
        MR_hl_field(MR_mktag(0), UnifyMode_27, 1) = ((MR_Box) (FromToInstsOfY_26));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (ConsId_9));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_39, 2) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        *UnifyGoalExpr_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_27));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_24));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_11));
      }
    }
    else
    {
      MR_Word WaitingVars_28;
      MR_Word ModeError_29;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_ModeInfo_46_46;
      MR_Word Var_54;
      MR_Word Unification_58;
      MR_Word FromToInstsOfX_59;
      MR_Word FromToInstsOfY_60;
      MR_Word UnifyMode_61;

      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (X_8));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_42, &WaitingVars_28);
      {
        ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeError_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
        MR_hl_field(MR_mktag(3), ModeError_29, 1) = ((MR_Box) (X_8));
        MR_hl_field(MR_mktag(3), ModeError_29, 2) = ((MR_Box) (ConsId_9));
        MR_hl_field(MR_mktag(3), ModeError_29, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), ModeError_29, 4) = ((MR_Box) (InstOfX_15));
        MR_hl_field(MR_mktag(3), ModeError_29, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_28, ModeError_29, STATE_VARIABLE_ModeInfo_0_30, &STATE_VARIABLE_ModeInfo_46_46);
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_8, (MR_Word) ((MR_Integer) 4), (MR_Word) ((MR_Integer) 0), STATE_VARIABLE_ModeInfo_46_46, STATE_VARIABLE_ModeInfo_31);
      {
        Unification_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_58, 0) = ((MR_Box) (X_8));
        MR_hl_field(MR_mktag(0), Unification_58, 1) = ((MR_Box) (ConsId_9));
        MR_hl_field(MR_mktag(0), Unification_58, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Unification_58, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Unification_58, 4) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Unification_58, 5) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_58, 6) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        FromToInstsOfX_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfX_59, 0) = ((MR_Box) (InstOfX_15));
        MR_hl_field(MR_mktag(0), FromToInstsOfX_59, 1) = ((MR_Box) ((MR_Integer) 4));
      }
      {
        FromToInstsOfY_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfY_60, 0) = ((MR_Box) (InstOfY_22));
        MR_hl_field(MR_mktag(0), FromToInstsOfY_60, 1) = ((MR_Box) ((MR_Integer) 4));
      }
      {
        UnifyMode_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_61, 0) = ((MR_Box) (FromToInstsOfX_59));
        MR_hl_field(MR_mktag(0), UnifyMode_61, 1) = ((MR_Box) (FromToInstsOfY_60));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ConsId_9));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Var_54, 2) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        *UnifyGoalExpr_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_61));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_58));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_11));
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word UnifyGoalInfo0_13,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_36,
  MR_Word * STATE_VARIABLE_ModeInfo_37)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_16;
    MR_Word VarTypes_17;
    MR_Word InstMap_18;
    MR_Word InstOfX_19;
    MR_Word InstOfY_20;
    MR_Word LiveX_21;
    MR_Word LiveY_22;
    MR_Word UnifiedInst_24;
    MR_Word Detism1_25;
    MR_Word ModuleInfo1_26;
    MR_Word BothLive_23;
    MR_Word _XLockedReason_27;
    MR_Word _YLockedReason_28;
    MR_Word TypeInfo_58_58;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_36, &ModuleInfo0_16);
    check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_36, &VarTypes_17);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_36, &InstMap_18);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_18, X_9, &InstOfX_19);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_18, Y_10, &InstOfY_20);
    check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_36, X_9, &LiveX_21);
    check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_36, Y_10, &LiveY_22);
    succeeded = (LiveX_21 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (LiveY_22 == (MR_Integer) 0);
    if (succeeded)
      BothLive_23 = (MR_Integer) 0;
    else
      BothLive_23 = (MR_Integer) 1;
    succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(BothLive_23, InstOfX_19, InstOfY_20, (MR_Integer) 0, &UnifiedInst_24, &Detism1_25, ModuleInfo0_16, &ModuleInfo1_26);
    if (succeeded)
    {
      succeeded = (UnifiedInst_24 == (MR_Word) ((MR_Integer) 0));
      if (succeeded)
      {
        succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_0_36, X_9, &_XLockedReason_27);
        if (succeeded)
        {
          succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_0_36, Y_10, &_YLockedReason_28);
          if (succeeded)
          {
            TypeInfo_58_58 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (X_9)), ((MR_Box) (Y_10)));
            succeeded = !(succeeded);
          }
        }
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word FromToInstsOfX_30;
      MR_Word FromToInstsOfY_31;
      MR_Word STATE_VARIABLE_ModeInfo_39_39;
      MR_Word Var_40;
      MR_Word STATE_VARIABLE_ModeInfo_41_41;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_ModeInfo_43_43;

      check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_26, STATE_VARIABLE_ModeInfo_0_36, &STATE_VARIABLE_ModeInfo_39_39);
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (InstOfY_20));
      }
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_9, UnifiedInst_24, Var_40, STATE_VARIABLE_ModeInfo_39_39, &STATE_VARIABLE_ModeInfo_41_41);
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (InstOfX_19));
      }
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Y_10, UnifiedInst_24, Var_42, STATE_VARIABLE_ModeInfo_41_41, &STATE_VARIABLE_ModeInfo_43_43);
      {
        FromToInstsOfX_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfX_30, 0) = ((MR_Box) (InstOfX_19));
        MR_hl_field(MR_mktag(0), FromToInstsOfX_30, 1) = ((MR_Box) (UnifiedInst_24));
      }
      {
        FromToInstsOfY_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfY_31, 0) = ((MR_Box) (InstOfY_20));
        MR_hl_field(MR_mktag(0), FromToInstsOfY_31, 1) = ((MR_Box) (UnifiedInst_24));
      }
      check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(FromToInstsOfX_30, FromToInstsOfY_31, LiveX_21, LiveY_22, X_9, Y_10, Detism1_25, UnifyContext_12, UnifyGoalInfo0_13, VarTypes_17, Unification0_11, UnifyGoalExpr_14, STATE_VARIABLE_ModeInfo_43_43, STATE_VARIABLE_ModeInfo_37);
    }
    else
    {
      MR_Word WaitingVars_32;
      MR_Word ModeError_33;
      MR_Word Unification_34;
      MR_Word UnifyMode_35;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word STATE_VARIABLE_ModeInfo_48_48;
      MR_Word STATE_VARIABLE_ModeInfo_50_50;
      MR_Word Var_53;
      MR_Word FromToInstsOfX_55;
      MR_Word FromToInstsOfY_56;

      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Y_10));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (X_9));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_45, &WaitingVars_32);
      {
        ModeError_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ModeError_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
        MR_hl_field(MR_mktag(3), ModeError_33, 1) = ((MR_Box) (X_9));
        MR_hl_field(MR_mktag(3), ModeError_33, 2) = ((MR_Box) (Y_10));
        MR_hl_field(MR_mktag(3), ModeError_33, 3) = ((MR_Box) (InstOfX_19));
        MR_hl_field(MR_mktag(3), ModeError_33, 4) = ((MR_Box) (InstOfY_20));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_32, ModeError_33, STATE_VARIABLE_ModeInfo_0_36, &STATE_VARIABLE_ModeInfo_48_48);
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_9, (MR_Word) ((MR_Integer) 4), (MR_Word) ((MR_Integer) 0), STATE_VARIABLE_ModeInfo_48_48, &STATE_VARIABLE_ModeInfo_50_50);
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Y_10, (MR_Word) ((MR_Integer) 4), (MR_Word) ((MR_Integer) 0), STATE_VARIABLE_ModeInfo_50_50, STATE_VARIABLE_ModeInfo_37);
      {
        Unification_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Unification_34, 0) = ((MR_Box) (X_9));
        MR_hl_field(MR_mktag(2), Unification_34, 1) = ((MR_Box) (Y_10));
      }
      {
        FromToInstsOfX_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfX_55, 0) = ((MR_Box) (InstOfX_19));
        MR_hl_field(MR_mktag(0), FromToInstsOfX_55, 1) = ((MR_Box) ((MR_Integer) 4));
      }
      {
        FromToInstsOfY_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FromToInstsOfY_56, 0) = ((MR_Box) (InstOfY_20));
        MR_hl_field(MR_mktag(0), FromToInstsOfY_56, 1) = ((MR_Box) ((MR_Integer) 4));
      }
      {
        UnifyMode_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_35, 0) = ((MR_Box) (FromToInstsOfX_55));
        MR_hl_field(MR_mktag(0), UnifyMode_35, 1) = ((MR_Box) (FromToInstsOfY_56));
      }
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Y_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        *UnifyGoalExpr_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_35));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_34));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_12));
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(
  MR_Word FromToInstsOfX_15,
  MR_Word FromToInstsOfY_16,
  MR_Word LiveX_17,
  MR_Word LiveY_18,
  MR_Word X_19,
  MR_Word Y_20,
  MR_Word Detism_21,
  MR_Word UnifyContext_22,
  MR_Word GoalInfo_23,
  MR_Word VarTypes_24,
  MR_Word Unification0_25,
  MR_Word * Unify_26,
  MR_Word STATE_VARIABLE_ModeInfo_0_51,
  MR_Word * STATE_VARIABLE_ModeInfo_52)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_28;
    MR_Word Unification_29;
    MR_Word STATE_VARIABLE_ModeInfo_58_58;
    MR_Word AssignTarget_34;
    MR_Word AssignSource_35;
    MR_Word Var_59;
    MR_Word Var_71;

    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_51, &ModuleInfo0_28);
    succeeded = check_hlds__mode_util__from_to_insts_is_output_2_p_0(ModuleInfo0_28, FromToInstsOfX_15);
    if (succeeded)
    {
      {
        Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Unification_29, 0) = ((MR_Box) (X_19));
        MR_hl_field(MR_mktag(2), Unification_29, 1) = ((MR_Box) (Y_20));
      }
      STATE_VARIABLE_ModeInfo_58_58 = STATE_VARIABLE_ModeInfo_0_51;
    }
    else
    {
      succeeded = check_hlds__mode_util__from_to_insts_is_output_2_p_0(ModuleInfo0_28, FromToInstsOfY_16);
      if (succeeded)
      {
        {
          Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Unification_29, 0) = ((MR_Box) (Y_20));
          MR_hl_field(MR_mktag(2), Unification_29, 1) = ((MR_Box) (X_19));
        }
        STATE_VARIABLE_ModeInfo_58_58 = STATE_VARIABLE_ModeInfo_0_51;
      }
      else
      {
        succeeded = check_hlds__mode_util__from_to_insts_is_unused_2_p_0(ModuleInfo0_28, FromToInstsOfX_15);
        if (succeeded)
          succeeded = check_hlds__mode_util__from_to_insts_is_unused_2_p_0(ModuleInfo0_28, FromToInstsOfY_16);
        if (succeeded)
        {
          switch (LiveX_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Unification_29, 0) = ((MR_Box) (X_19));
                MR_hl_field(MR_mktag(2), Unification_29, 1) = ((MR_Box) (Y_20));
              }
              break;
            case (MR_Integer) 0:
              switch (LiveY_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Unification_29, 0) = ((MR_Box) (Y_20));
                    MR_hl_field(MR_mktag(2), Unification_29, 1) = ((MR_Box) (X_19));
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_var\'/14", (MR_String) "free-free unify!");
                      return;
                    }
                  }
                  break;
              }
              break;
          }
          STATE_VARIABLE_ModeInfo_58_58 = STATE_VARIABLE_ModeInfo_0_51;
        }
        else
        {
          {
            MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInstsOfX_15, (MR_Integer) 0))));

            succeeded = (Var_56 == (MR_Word) ((MR_Integer) 4));
          }
          if (!(succeeded))
          {
            MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInstsOfY_16, (MR_Integer) 0))));

            succeeded = (Var_55 == (MR_Word) ((MR_Integer) 4));
          }
          if (succeeded)
          {
            {
              Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Unification_29, 1) = ((MR_Box) (X_19));
              MR_hl_field(MR_mktag(3), Unification_29, 2) = ((MR_Box) (Y_20));
            }
            STATE_VARIABLE_ModeInfo_58_58 = STATE_VARIABLE_ModeInfo_0_51;
          }
          else
          {
            MR_Word Type_32;
            MR_Word Var_33;

            hlds__vartypes__lookup_var_type_3_p_0(VarTypes_24, X_19, &Type_32);
            succeeded = check_hlds__type_util__type_is_atomic_2_p_0(ModuleInfo0_28, Type_32);
            if (succeeded)
            {
              succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo0_28, Type_32, &Var_33);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              {
                Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Unification_29, 1) = ((MR_Box) (X_19));
                MR_hl_field(MR_mktag(3), Unification_29, 2) = ((MR_Box) (Y_20));
              }
              STATE_VARIABLE_ModeInfo_58_58 = STATE_VARIABLE_ModeInfo_0_51;
            }
            else
            {
              MR_Word Var_57;
              MR_Word Var_70;

              Var_70 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_32, Var_70);
              if (succeeded)
              {
                Var_57 = (MR_Integer) 22;
                succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_23, Var_57);
              }
              if (succeeded)
              {
                {
                  Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Unification_29, 1) = ((MR_Box) (X_19));
                  MR_hl_field(MR_mktag(3), Unification_29, 2) = ((MR_Box) (Y_20));
                }
                STATE_VARIABLE_ModeInfo_58_58 = STATE_VARIABLE_ModeInfo_0_51;
              }
              else
                check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(X_19, Y_20, Type_32, FromToInstsOfX_15, FromToInstsOfY_16, Detism_21, UnifyContext_22, Unification0_25, &Unification_29, STATE_VARIABLE_ModeInfo_0_51, &STATE_VARIABLE_ModeInfo_58_58);
            }
          }
        }
      }
    }
    succeeded = ((MR_tag((MR_Word) Unification_29)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      AssignTarget_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_29, (MR_Integer) 0))));
      AssignSource_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_29, (MR_Integer) 1))));
      Var_59 = (MR_Integer) 1;
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_58_58, AssignTarget_34, &Var_71);
      succeeded = (Var_59 == Var_71);
    }
    if (succeeded)
    {
      MR_Word NonLocals_79;

      *Unify_26 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_3[1]));
      NonLocals_79 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_23);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_79, AssignTarget_34);
      if (succeeded)
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_79, AssignSource_35);
      if (succeeded)
        *STATE_VARIABLE_ModeInfo_52 = STATE_VARIABLE_ModeInfo_58_58;
      else
        check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(STATE_VARIABLE_ModeInfo_58_58, STATE_VARIABLE_ModeInfo_52);
    }
    else
    {
      MR_Word TestVar1_36;
      MR_Word TestVar2_37;

      succeeded = (Detism_21 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Unification_29)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_29, (MR_Integer) 0))) == (MR_Integer) 0)));
        if (succeeded)
        {
          TestVar1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_29, (MR_Integer) 1))));
          TestVar2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_29, (MR_Integer) 2))));
        }
      }
      if (succeeded)
      {
        MR_Word NonLocals_88;

        *Unify_26 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_3[1]));
        NonLocals_88 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_23);
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_88, TestVar1_36);
        if (succeeded)
          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_88, TestVar2_37);
        if (succeeded)
          *STATE_VARIABLE_ModeInfo_52 = STATE_VARIABLE_ModeInfo_58_58;
        else
          check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(STATE_VARIABLE_ModeInfo_58_58, STATE_VARIABLE_ModeInfo_52);
      }
      else
      {
        succeeded = (Detism_21 == (MR_Integer) 7);
        if (succeeded)
        {
          MR_Word ModuleInfo_38;
          MR_Word Globals_39;
          MR_Word WarnCannotSucceed_40;

          *Unify_26 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[9]));
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_58_58, &ModuleInfo_38);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_38, &Globals_39);
          libs__globals__lookup_bool_option_3_p_0(Globals_39, (MR_Integer) 23, &WarnCannotSucceed_40);
          switch (WarnCannotSucceed_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_ModeInfo_52 = STATE_VARIABLE_ModeInfo_58_58;
              break;
            case (MR_Integer) 1:
              {
                MR_Word InitInstOfX_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInstsOfX_15, (MR_Integer) 0))));
                MR_Word InitInstOfY_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInstsOfY_16, (MR_Integer) 0))));
                MR_Word PredId_45;
                MR_Word PredInfo_46;
                MR_Word Origin_47;
                MR_Word ReportWarning_48;

                check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_58_58, &PredId_45);
                hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_38, PredId_45, &PredInfo_46);
                hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_46, &Origin_47);
                ReportWarning_48 = check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(Origin_47);
                switch (ReportWarning_48) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_ModeInfo_52 = STATE_VARIABLE_ModeInfo_58_58;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Warning_49;

                      {
                        Warning_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Warning_49, 0) = ((MR_Box) (X_19));
                        MR_hl_field(MR_mktag(0), Warning_49, 1) = ((MR_Box) (Y_20));
                        MR_hl_field(MR_mktag(0), Warning_49, 2) = ((MR_Box) (InitInstOfX_41));
                        MR_hl_field(MR_mktag(0), Warning_49, 3) = ((MR_Box) (InitInstOfY_43));
                      }
                      check_hlds__mode_info__mode_info_warning_3_p_0(Warning_49, STATE_VARIABLE_ModeInfo_58_58, STATE_VARIABLE_ModeInfo_52);
                    }
                    break;
                }
              }
              break;
          }
        }
        else
        {
          MR_Word UnifyModes_50;
          MR_Word Var_69;

          {
            UnifyModes_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UnifyModes_50, 0) = ((MR_Box) (FromToInstsOfX_15));
            MR_hl_field(MR_mktag(0), UnifyModes_50, 1) = ((MR_Box) (FromToInstsOfY_16));
          }
          {
            Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Y_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *Unify_26 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (X_19));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyModes_50));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_29));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_22));
          }
          *STATE_VARIABLE_ModeInfo_52 = STATE_VARIABLE_ModeInfo_58_58;
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Type_14,
  MR_Word FromToInstsOfX_15,
  MR_Word FromToInstsOfY_16,
  MR_Word Detism_17,
  MR_Word UnifyContext_18,
  MR_Word Unification0_19,
  MR_Word * Unification_20,
  MR_Word STATE_VARIABLE_ModeInfo_0_61,
  MR_Word * STATE_VARIABLE_ModeInfo_62)
{
  {
    MR_bool succeeded;
    MR_Word InitialInstX_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInstsOfX_15, (MR_Integer) 0))));
    MR_Word InitialInstY_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInstsOfY_16, (MR_Integer) 0))));
    MR_Word UnifyMode_26;
    MR_Word CanFail_27;
    MR_Word UnifyTypeInfoVars_32;
    MR_Word ModuleInfo0_39;
    MR_Word STATE_VARIABLE_ModeInfo_71_71;
    MR_Word Var_28;
    MR_Word UnifyTypeInfoVars0_31;
    MR_Word Errors_40;

    {
      UnifyMode_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_26, 0) = ((MR_Box) (FromToInstsOfX_15));
      MR_hl_field(MR_mktag(0), UnifyMode_26, 1) = ((MR_Box) (FromToInstsOfY_16));
    }
    parse_tree__prog_data__determinism_components_3_p_0(Detism_17, &CanFail_27, &Var_28);
    succeeded = ((((MR_tag((MR_Word) Unification0_19)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification0_19, (MR_Integer) 0))) == (MR_Integer) 1)));
    if (succeeded)
    {
      UnifyTypeInfoVars0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification0_19, (MR_Integer) 3))));
      UnifyTypeInfoVars_32 = UnifyTypeInfoVars0_31;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_complicated_unify\'/11", (MR_String) "non-complicated unify");
        return;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *Unification_20 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UnifyMode_26));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CanFail_27));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (UnifyTypeInfoVars_32));
    }
    if ((UnifyTypeInfoVars_32 == (MR_Word) ((MR_Integer) 0)))
      STATE_VARIABLE_ModeInfo_71_71 = STATE_VARIABLE_ModeInfo_0_61;
    else
    {
      MR_Integer NumTypeInfoVars_35;
      MR_Word ExpectedInsts_36;
      MR_Word Var_68;
      MR_Word STATE_VARIABLE_ModeInfo_69_69;
      MR_Word STATE_VARIABLE_ModeInfo_70_70;
      MR_Word _InstVarSub_38;

      mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), UnifyTypeInfoVars_32, &NumTypeInfoVars_35);
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumTypeInfoVars_35, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_3[0]))), &ExpectedInsts_36);
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (UnifyContext_18));
      }
      check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_68, STATE_VARIABLE_ModeInfo_0_61, &STATE_VARIABLE_ModeInfo_69_69);
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(UnifyTypeInfoVars_32, ExpectedInsts_36, (MR_Integer) 0, &_InstVarSub_38, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_70_70);
      check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &STATE_VARIABLE_ModeInfo_71_71);
    }
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &ModuleInfo0_39);
    check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &Errors_40);
    succeeded = ((MR_tag((MR_Word) Errors_40)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      *STATE_VARIABLE_ModeInfo_62 = STATE_VARIABLE_ModeInfo_71_71;
    }
    else
    {
      succeeded = ((MR_tag((MR_Word) Type_14)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo0_39, InitialInstX_22);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word WaitingVars_45;
        MR_Word ModeError_46;

        WaitingVars_45 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_12);
        {
          ModeError_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ModeError_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ModeError_46, 1) = ((MR_Box) (X_12));
          MR_hl_field(MR_mktag(3), ModeError_46, 2) = ((MR_Box) (InitialInstX_22));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_45, ModeError_46, STATE_VARIABLE_ModeInfo_71_71, STATE_VARIABLE_ModeInfo_62);
      }
      else
      {
        succeeded = ((MR_tag((MR_Word) Type_14)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo0_39, InitialInstY_24);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word WaitingVars_77;
          MR_Word ModeError_78;

          WaitingVars_77 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_13);
          {
            ModeError_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ModeError_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ModeError_78, 1) = ((MR_Box) (Y_13));
            MR_hl_field(MR_mktag(3), ModeError_78, 2) = ((MR_Box) (InitialInstY_24));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_77, ModeError_78, STATE_VARIABLE_ModeInfo_71_71, STATE_VARIABLE_ModeInfo_62);
        }
        else
        {
          MR_Word PredOrFunc_50;
          MR_Word Var_49;
          MR_Word Var_52;

          succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_14, &Var_49, &PredOrFunc_50, &Var_52);
          if (succeeded)
          {
            MR_Word PredId_53;
            MR_Word PredInfo_54;
            MR_Word InstMap0_55;

            check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &PredId_53);
            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_39, PredId_53, &PredInfo_54);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &InstMap0_55);
            succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_54);
            if (!(succeeded))
              succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap0_55);
            if (succeeded)
              *STATE_VARIABLE_ModeInfo_62 = STATE_VARIABLE_ModeInfo_71_71;
            else
            {
              MR_Word Var_74;
              MR_Word WaitingVars_79;
              MR_Word ModeError_80;

              parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_79);
              {
                Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Y_13));
              }
              {
                ModeError_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ModeError_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ModeError_80, 1) = ((MR_Box) (X_12));
                MR_hl_field(MR_mktag(3), ModeError_80, 2) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(3), ModeError_80, 3) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(3), ModeError_80, 4) = ((MR_Box) (PredOrFunc_50));
              }
              check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_79, ModeError_80, STATE_VARIABLE_ModeInfo_71_71, STATE_VARIABLE_ModeInfo_62);
            }
          }
          else
          {
            MR_Word TypeCtor_56;

            succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_14, &TypeCtor_56);
            if (succeeded)
            {
              MR_Word Context_57;
              MR_Word InstVarSet_58;
              MR_Word UnifyProcId_59;
              MR_Word ModuleInfo_60;

              check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &Context_57);
              check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &InstVarSet_58);
              {
                UnifyProcId_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), UnifyProcId_59, 0) = ((MR_Box) (TypeCtor_56));
                MR_hl_field(MR_mktag(0), UnifyProcId_59, 1) = ((MR_Box) (UnifyMode_26));
              }
              check_hlds__proc_requests__request_unify_6_p_0(UnifyProcId_59, InstVarSet_58, Detism_17, Context_57, ModuleInfo0_39, &ModuleInfo_60);
              check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_60, STATE_VARIABLE_ModeInfo_71_71, STATE_VARIABLE_ModeInfo_62);
            }
            else
              *STATE_VARIABLE_ModeInfo_62 = STATE_VARIABLE_ModeInfo_71_71;
          }
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
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_unify____Unify____match_mode_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_unify____Compare____match_mode_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_unify____Unify____match_modes_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_unify____Compare____match_modes_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
