/*
** Automatically generated from `modecheck_unify.m'
** by the Mercury compiler,
** version rotd-2024-01-03
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
#include "check_hlds.polymorphism_goal.mih"
#include "check_hlds.polymorphism_info.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s {
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16;
  MR_bool check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTable_30;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstsOfArgVars_31;
  jmp_buf check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstOfArgVar_99;
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InitInstOfArgVar_99;
  jmp_buf check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_1;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_98;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_100;
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_100;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

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

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1660__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1409__1_2_p_0(
  MR_Word MaybeTakeAddr_34,
  MR_Word HeadVar__2_75);

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__categorize_unify_var_lambda__1330__1_1_f_0(
  MR_Word LambdaHeadVar__1_84);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1312__1_2_p_0(
  MR_Word MaybeTakeAddr_32,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_undetermined_mode_lambda__542__1_2_p_0(
  MR_Word ModuleInfo_16,
  MR_Tuple HeadVar__2_69);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__376__1_4_p_0(
  MR_Word ModuleInfo0_24,
  MR_Word InstMap1_31,
  MR_Word NonLocalTypes_40,
  MR_Word LambdaHeadVar__1_70);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__283__1_2_p_0(
  MR_Word ArgVars0_14,
  MR_Word HeadVar__2_53);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__281__1_2_p_0(
  MR_Word IsExistConstruction_13,
  MR_Word HeadVar__2_49);

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
check_hlds__modecheck_unify__modecheck_unification_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_8(
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
  MR_Word * InitInstX_12,
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
  MR_Word STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * STATE_VARIABLE_ModeInfo_30);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(
  MR_Word X_9,
  MR_Word RHS0_10,
  MR_Word Unification_11,
  MR_Word UnifyContext_12,
  MR_Word GoalInfo0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_49,
  MR_Word * STATE_VARIABLE_ModeInfo_50);

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
  MR_Word STATE_VARIABLE_ModeInfo_0_66,
  MR_Word * STATE_VARIABLE_ModeInfo_67);

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
  MR_Word STATE_VARIABLE_ModeInfo_0_36,
  MR_Word * STATE_VARIABLE_ModeInfo_37);

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
check_hlds__modecheck_unify__acc_non_ground_vars_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word InstMap_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevNonGroundVarsInsts_0_4,
  MR_Word * STATE_VARIABLE_RevNonGroundVarsInsts_5);

static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap_3,
  MR_Word ArgVars_4,
  MR_Word CalleePredInfo_5,
  MR_Word CalleeErrorMap_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_RevMatchedProcIds_0_8,
  MR_Word STATE_VARIABLE_NonGroundNonLocals_0_9,
  MR_Word * Result_10);

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
check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word UnifyGoalInfo0_13,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_33,
  MR_Word * STATE_VARIABLE_ModeInfo_34);

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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[3]))
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
    ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[3])),
    ((MR_Box) (check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1)),
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_unify____vpti_tuple_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0) }
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

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1660__1_1_f_0(
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
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1409__1_2_p_0(
  MR_Word MaybeTakeAddr_34,
  MR_Word HeadVar__2_75)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[4]), ((MR_Box) (MaybeTakeAddr_34)), ((MR_Box) (HeadVar__2_75)));
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__categorize_unify_var_lambda__1330__1_1_f_0(
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
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1312__1_2_p_0(
  MR_Word MaybeTakeAddr_32,
  MR_Word HeadVar__2_77)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[4]), ((MR_Box) (MaybeTakeAddr_32)), ((MR_Box) (HeadVar__2_77)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_undetermined_mode_lambda__542__1_2_p_0(
  MR_Word ModuleInfo_16,
  MR_Tuple HeadVar__2_69)
{
  MR_bool succeeded;
  MR_Word PredId_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_69, (MR_Integer) 0))));
  MR_Word PredInfo_73;
  MR_String PredName_74;
  MR_Word Var_75;
  MR_Word Var_76;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, PredId_71, &PredInfo_73);
  Var_75 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  Var_76 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_73);
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_75, Var_76);
  if (succeeded)
  {
    PredName_74 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_73);
    if ((strcmp(PredName_74, (MR_String) "type_info_from_typeclass_info") == 0))
      succeeded = MR_TRUE;
    else
    if ((strcmp(PredName_74, (MR_String) "superclass_from_typeclass_info") == 0))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__376__1_4_p_0(
  MR_Word ModuleInfo0_24,
  MR_Word InstMap1_31,
  MR_Word NonLocalTypes_40,
  MR_Word LambdaHeadVar__1_70)
{
  MR_bool succeeded;
  MR_Word NonLocalType_43;
  MR_Word NonLocalInst_44;

  parse_tree__var_table__lookup_var_type_3_p_0(NonLocalTypes_40, LambdaHeadVar__1_70, &NonLocalType_43);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap1_31, LambdaHeadVar__1_70, &NonLocalInst_44);
  succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(ModuleInfo0_24, NonLocalType_43, NonLocalInst_44, (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_2[3])));
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__283__1_2_p_0(
  MR_Word ArgVars0_14,
  MR_Word HeadVar__2_53)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]), ((MR_Box) (ArgVars0_14)), ((MR_Box) (HeadVar__2_53)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__281__1_2_p_0(
  MR_Word IsExistConstruction_13,
  MR_Word HeadVar__2_49)
{
  MR_bool succeeded = (IsExistConstruction_13 == HeadVar__2_49);

  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
    }
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
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
check_hlds__modecheck_unify__modecheck_unification_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__inst_test__var_inst_contains_any_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__283__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__281__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHS_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word UnifyGoalInfo0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_35,
  MR_Word * STATE_VARIABLE_ModeInfo_36)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) RHS_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RHSVar_16 = ((MR_Word) ((MR_hl_field(0, RHS_10, (MR_Integer) 0))));

          check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(LHSVar_9, RHSVar_16, Unification0_11, UnifyContext_12, UnifyGoalInfo0_13, Goal_14, STATE_VARIABLE_ModeInfo_0_35, STATE_VARIABLE_ModeInfo_36);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(1, RHS_10, (MR_Integer) 0))));
          MR_Word IsExistConstr_18 = ((MR_Unsigned) ((MR_hl_field(1, RHS_10, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word RHSVars_19 = ((MR_Word) ((MR_hl_field(1, RHS_10, (MR_Integer) 2))));
          MR_Word VarTable0_48;
          MR_Word TypeOfX_49;
          MR_Word Purity_50;
          MR_Word PredArgTypes_53;
          MR_Word ShroudedPredProcId_54;
          MR_Word Var_51;

          check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &VarTable0_48);
          parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_48, LHSVar_9, &TypeOfX_49);
          succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(TypeOfX_49, &Purity_50, &Var_51, &PredArgTypes_53);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) ConsId_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_17, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
              ShroudedPredProcId_54 = ((MR_Word) ((MR_hl_field(3, ConsId_17, (MR_Integer) 1))));
          }
          if (succeeded)
          {
            MR_Word ModuleInfo0_56;
            MR_Word Context_57;
            MR_Word PredId_58;
            MR_Integer ProcId_59;
            MR_Word MaybeRHS0_60;
            MR_Word VarTable_61;
            MR_Word Var_64;
            MR_Word STATE_VARIABLE_ModeInfo_40_65;

            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &ModuleInfo0_56);
            check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &Context_57);
            Var_64 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_54);
            PredId_58 = ((MR_Word) ((MR_hl_field(0, Var_64, (MR_Integer) 0))));
            ProcId_59 = ((MR_Integer) ((MR_hl_field(0, Var_64, (MR_Integer) 1))));
            check_hlds__polymorphism_lambda__convert_pred_to_lambda_goal_14_p_0(ModuleInfo0_56, Purity_50, LHSVar_9, PredId_58, ProcId_59, RHSVars_19, PredArgTypes_53, UnifyContext_12, UnifyGoalInfo0_13, Context_57, &MaybeRHS0_60, VarTable0_48, &VarTable_61);
            check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_61, STATE_VARIABLE_ModeInfo_0_35, &STATE_VARIABLE_ModeInfo_40_65);
            if (((MR_tag((MR_Word) MaybeRHS0_60)) == (MR_Integer) 0))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "could not convert pred to lambda goal; polymorphism.m should have stopped us getting here");
                return;
              }
            else
            {
              MR_Word RHS0_62 = ((MR_Word) ((MR_hl_field(1, MaybeRHS0_60, (MR_Integer) 0))));
              MR_Word next_value_of_RHS_10 = RHS0_62;
              MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_35 = STATE_VARIABLE_ModeInfo_40_65;

              // direct tailcall eliminated
              ;
              RHS_10 = next_value_of_RHS_10;
              STATE_VARIABLE_ModeInfo_0_35 = next_value_of_STATE_VARIABLE_ModeInfo_0_35;
              continue;
            }
          }
          else
          {
            MR_Integer ConstNum_63;

            succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(ConsId_17, &ConstNum_63);
            if (succeeded)
            {
              MR_Word Var_68;
              MR_Word Var_72;

              {
                Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_68, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[4]));
                MR_hl_field(0, Var_68, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_8_p_0_1));
                MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_68, 3) = ((MR_Box) (IsExistConstr_18));
                MR_hl_field(0, Var_68, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction is existential");
              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_72, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[5]));
                MR_hl_field(0, Var_72, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_8_p_0_2));
                MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_72, 3) = ((MR_Box) (RHSVars_19));
                MR_hl_field(0, Var_72, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction has args");
              check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(LHSVar_9, ConsId_17, ConstNum_63, UnifyContext_12, Goal_14, STATE_VARIABLE_ModeInfo_0_35, STATE_VARIABLE_ModeInfo_36);
            }
            else
              check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(LHSVar_9, TypeOfX_49, ConsId_17, IsExistConstr_18, RHSVars_19, Unification0_11, UnifyContext_12, UnifyGoalInfo0_13, Goal_14, STATE_VARIABLE_ModeInfo_0_35, STATE_VARIABLE_ModeInfo_36);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Purity_20 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_10, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
          MR_Word HOGroundness_21 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word LambdaNonLocals_24 = ((MR_Word) ((MR_hl_field(2, RHS_10, (MR_Integer) 2))));
          MR_Word HeadAnyVar_31;
          MR_Word TailAnyVars_32;
          MR_Word TypeInfo_45_45;
          MR_Word ModuleInfo_28;
          MR_Word InstMap_29;
          MR_Word AnyVars_30;
          MR_Word Var_39;

          succeeded = (Purity_20 != (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = (HOGroundness_21 == (MR_Integer) 0);
            if (succeeded)
            {
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &ModuleInfo_28);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_35, &InstMap_29);
              TypeInfo_45_45 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]);
              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_39, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_7[0]));
                MR_hl_field(0, Var_39, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_8_p_0_3));
                MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_39, 3) = ((MR_Box) (ModuleInfo_28));
                MR_hl_field(0, Var_39, 4) = ((MR_Box) (InstMap_29));
              }
              AnyVars_30 = mercury__list__filter_2_f_0(TypeInfo_45_45, Var_39, LambdaNonLocals_24);
              succeeded = (AnyVars_30 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                HeadAnyVar_31 = ((MR_Word) ((MR_hl_field(1, AnyVars_30, (MR_Integer) 0))));
                TailAnyVars_32 = ((MR_Word) ((MR_hl_field(1, AnyVars_30, (MR_Integer) 1))));
              }
            }
          }
          if (succeeded)
          {
            MR_Word WaitingVars_33;
            MR_Word OoMAnyVars_34;
            MR_Word Var_40;

            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_33);
            {
              OoMAnyVars_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMAnyVars_34, 0) = ((MR_Box) (HeadAnyVar_31));
              MR_hl_field(0, OoMAnyVars_34, 1) = ((MR_Box) (TailAnyVars_32));
            }
            {
              Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(3, Var_40, 1) = ((MR_Box) (OoMAnyVars_34));
            }
            check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_33, Var_40, STATE_VARIABLE_ModeInfo_0_35, STATE_VARIABLE_ModeInfo_36);
            *Goal_14 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_2[2]));
          }
          else
          {
            succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(UnifyGoalInfo0_13, (MR_Integer) 23);
            if (succeeded)
              check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(LHSVar_9, RHS_10, Unification0_11, UnifyContext_12, UnifyGoalInfo0_13, Goal_14, STATE_VARIABLE_ModeInfo_0_35, STATE_VARIABLE_ModeInfo_36);
            else
              check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(LHSVar_9, RHS_10, Unification0_11, UnifyContext_12, Goal_14, STATE_VARIABLE_ModeInfo_0_35, STATE_VARIABLE_ModeInfo_36);
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstOfArgVar_99 = ((MR_Word) ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InitInstOfArgVar_99));
  check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(env_ptr);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_free_2_p_0((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstOfArgVar_99);
  if ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
    check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InitInstOfArgVar_99, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstsOfArgVars_31, check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3, env_ptr);
      (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_7(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_100 = ((MR_Word) ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_100));
  check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(env_ptr);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

  parse_tree__var_table__lookup_var_type_3_p_0((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTable_30, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_100, &(env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_98);
  (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_98);
  if ((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
    check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(env_ptr);
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_8(
  void * env_ptr_arg)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), &(env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_100, (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_7, env_ptr);
      (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_TRUE;
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
  MR_Word STATE_VARIABLE_ModeInfo_0_61,
  MR_Word * STATE_VARIABLE_ModeInfo_62)
{
  struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s env;

  (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16 = ArgVars0_16;
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
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_63_63, &(env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29);
    check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_63_63, &(env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTable_30);
    hlds__instmap__instmap_lookup_vars_3_p_0(InstMap1_27, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &(env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstsOfArgVars_31);
    check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(STATE_VARIABLE_ModeInfo_63_63, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &LiveArgs_32);
    parse_tree__prog_type__qualify_cons_id_4_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, ConsId0_14, &ConsId_33, &InstConsId_34);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (InstConsId_34));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstsOfArgVars_31));
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
    (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ((MR_Box) (X_23)), (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16);
    if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
    {
      (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, InitInstOfX_24);
      if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
      {
        check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_23, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_63_63, STATE_VARIABLE_ModeInfo_62);
        *GoalExpr_20 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_1[7]));
      }
      else
      {
        MR_Word Var_73;

        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (X_23));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(X_23, InstConsId_34, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, InitInstOfX_24, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstsOfArgVars_31, Var_73, GoalExpr_20, STATE_VARIABLE_ModeInfo_63_63, STATE_VARIABLE_ModeInfo_62);
      }
    }
    else
    {
      MR_Word UnifiedInst_36;
      MR_Word Detism_37;
      MR_Word ModuleInfo1_38;
      MR_Word Var_76;

      (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_free_2_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, InitInstOfX_24);
      if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
      {
        check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(&env);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
          check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_8(&env);
      }
      (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = !((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded);
      if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
      {
        Var_76 = (MR_Integer) 0;
        (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_functor_11_p_0(LiveX_25, InitInstOfX_24, InstConsId_34, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstsOfArgVars_31, LiveArgs_32, Var_76, TypeOfX_13, &UnifiedInst_36, &Detism_37, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, &ModuleInfo1_38);
      }
      if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
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
        MR_Word STATE_VARIABLE_ModeInfo_77_77;
        MR_Word STATE_VARIABLE_ModeInfo_79_79;
        MR_Word STATE_VARIABLE_ModeInfo_80_80;
        MR_Word Var_81;
        MR_Word STATE_VARIABLE_ModeInfo_82_82;
        MR_Word STATE_VARIABLE_ModeInfo_83_83;
        MR_Word ArgFromToInstsPrime_103;
        MR_Word ArgFromToInstsPrime_106;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Unsigned packed_word_0;

        check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_38, STATE_VARIABLE_ModeInfo_63_63, &STATE_VARIABLE_ModeInfo_77_77);
        {
          UnifyMode_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnifyMode_39, 0) = ((MR_Box) (InitInstOfX_24));
          MR_hl_field(0, UnifyMode_39, 1) = ((MR_Box) (UnifiedInst_36));
          MR_hl_field(0, UnifyMode_39, 2) = ((MR_Box) (InitInstOfY_35));
          MR_hl_field(0, UnifyMode_39, 3) = ((MR_Box) (UnifiedInst_36));
        }
        (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstsOfArgVars_31, UnifiedInst_36, &ArgFromToInstsPrime_103);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
          ArgFromToInsts_40 = ArgFromToInstsPrime_103;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.get_mode_of_args\'/3", (MR_String) "try_get_mode_of_args failed");
            return;
          }
        check_hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo1_38, InitInstOfX_24, &InitInstOfX1_41);
        mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &Arity_42);
        parse_tree__prog_mode__get_arg_insts_det_4_p_0(InitInstOfX1_41, InstConsId_34, Arity_42, &InitInstOfXArgs_43);
        (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(InitInstOfXArgs_43, UnifiedInst_36, &ArgFromToInstsPrime_106);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
          ModeOfXArgs_44 = ArgFromToInstsPrime_106;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.get_mode_of_args\'/3", (MR_String) "try_get_mode_of_args failed");
            return;
          }
        check_hlds__modecheck_unify__categorize_unify_var_functor_13_p_0(InitInstOfX_24, UnifiedInst_36, ModeOfXArgs_44, ArgFromToInsts_40, X_23, ConsId_33, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTable_30, UnifyContext_18, Unification0_17, &Unification1_45, STATE_VARIABLE_ModeInfo_77_77, &STATE_VARIABLE_ModeInfo_79_79);
        check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(Unification1_45, &Unification_46, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &ArgVars_47, &ExtraGoalsSplitSubUnifies_48, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_80_80);
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (InitInstOfY_35));
        }
        check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_23, UnifiedInst_36, Var_81, STATE_VARIABLE_ModeInfo_80_80, &STATE_VARIABLE_ModeInfo_82_82);
        check_hlds__modecheck_unify__bind_args_if_needed_6_p_0(InitInstOfX_24, UnifiedInst_36, ArgVars_47, InitInstOfXArgs_43, STATE_VARIABLE_ModeInfo_82_82, &STATE_VARIABLE_ModeInfo_83_83);
        (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) Unification_46)) == (MR_Integer) 0);
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
        {
          Var_49 = ((MR_Word) ((MR_hl_field(0, Unification_46, (MR_Integer) 0))));
          Var_50 = ((MR_Word) ((MR_hl_field(0, Unification_46, (MR_Integer) 1))));
          Var_51 = ((MR_Word) ((MR_hl_field(0, Unification_46, (MR_Integer) 2))));
          Var_52 = ((MR_Word) ((MR_hl_field(0, Unification_46, (MR_Integer) 3))));
          Var_53 = ((MR_Word) ((MR_hl_field(0, Unification_46, (MR_Integer) 4))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Unification_46, (MR_Integer) 5)));
          Var_54 = ((MR_Unsigned) ((MR_hl_field(0, Unification_46, (MR_Integer) 5))) & (MR_Integer) 1);
          Var_55 = ((MR_Word) ((MR_hl_field(0, Unification_46, (MR_Integer) 6))));
          (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (LiveX_25 == (MR_Integer) 1);
        }
        if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
        {
          *GoalExpr_20 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_2[2]));
          *STATE_VARIABLE_ModeInfo_62 = STATE_VARIABLE_ModeInfo_83_83;
        }
        else
        {
          (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (Detism_37 == (MR_Integer) 7);
          if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
          {
            *GoalExpr_20 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_1[7]));
            check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(X_23, InitInstOfX_24, ConsId_33, STATE_VARIABLE_ModeInfo_83_83, STATE_VARIABLE_ModeInfo_62);
          }
          else
          {
            MR_Word Functor_56;
            MR_Word UnifyExpr_57;
            MR_Word ExtraGoals_58;
            MR_Word Var_92;
            MR_Word Var_93;
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
            (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (HowToCheckGoal_28 == (MR_Integer) 1);
            if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
            {
              (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (ExtraGoals_58 != (MR_Word) ((MR_Unsigned) 0U));
              if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
              {
                Var_59 = ((MR_Word) ((MR_hl_field(1, ExtraGoals_58, (MR_Integer) 0))));
                Var_60 = ((MR_Word) ((MR_hl_field(1, ExtraGoals_58, (MR_Integer) 1))));
                (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_27);
              }
            }
            if ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_functor\'/11", (MR_String) "re-modecheck of unification encountered complicated sub-unifies");
                return;
              }
            else
            {
            }
            {
              Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_92, 0) = ((MR_Box) (X0_12));
              MR_hl_field(1, Var_92, 1) = ((MR_Box) ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
            }
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (X_23));
              MR_hl_field(1, Var_93, 1) = ((MR_Box) (ArgVars_47));
            }
            check_hlds__modecheck_util__handle_extra_goals_9_p_0(UnifyExpr_57, ExtraGoals_58, GoalInfo0_19, Var_92, Var_93, InstMap0_22, GoalExpr_20, STATE_VARIABLE_ModeInfo_83_83, STATE_VARIABLE_ModeInfo_62);
          }
        }
      }
      else
      {
        MR_Word Var_95;

        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (X_23));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) ((env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
        }
        check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(X_23, InstConsId_34, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, InitInstOfX_24, (env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InitInstsOfArgVars_31, Var_95, GoalExpr_20, STATE_VARIABLE_ModeInfo_63_63, STATE_VARIABLE_ModeInfo_62);
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
          MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, FinalInst_5, (MR_Integer) 1))));

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
          MR_Word BoundInsts_9 = ((MR_Word) ((MR_hl_field(2, FinalInst_5, (MR_Integer) 2))));

          if ((BoundInsts_9 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(ArgInitInsts_4, (MR_Word) ((MR_Unsigned) 4U), ArgFromToInsts_6);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word FunctorArgInsts_11;
            MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, BoundInsts_9, (MR_Integer) 0))));
            MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, BoundInsts_9, (MR_Integer) 1))));

            succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FunctorArgInsts_11 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
              check_hlds__modecheck_unify__pair_up_insts_3_p_0(ArgInitInsts_4, FunctorArgInsts_11, ArgFromToInsts_6);
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, FinalInst_5, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_13 = ((MR_Word) ((MR_hl_field(3, FinalInst_5, (MR_Integer) 2))));
              MR_Word next_value_of_FinalInst_5 = SubInst_13;

              // direct tailcall eliminated
              ;
              FinalInst_5 = next_value_of_FinalInst_5;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_14 = ((MR_Word) ((MR_hl_field(3, FinalInst_5, (MR_Integer) 2))));

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
    MR_Word InitInst_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word InitInsts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.pair_up_insts\'/3", (MR_String) "mismatched list lengths");
        return;
      }
    else
    {
      MR_Word InstB_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word InstsB_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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

  conv0_LambdaHeadVar__2_20 = check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1660__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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

          UnifyArgInsts_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[2]), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_2[5]), InstOfXArgs_10);
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

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1409__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_ModeInfo_0_70,
  MR_Word * STATE_VARIABLE_ModeInfo_71)
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
        ConsId_37 = ((MR_Word) ((MR_hl_field(0, Unification0_23, (MR_Integer) 1))));
        SubInfo_36 = ((MR_Word) ((MR_hl_field(0, Unification0_23, (MR_Integer) 6))));
        if (!((SubInfo_36 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word MaybeTakeAddr_34 = ((MR_Word) ((MR_hl_field(1, SubInfo_36, (MR_Integer) 0))));
          MR_Word Var_72;

          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_72, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[0]));
            MR_hl_field(0, Var_72, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_functor_13_p_0_1));
            MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_72, 3) = ((MR_Box) (MaybeTakeAddr_34));
            MR_hl_field(0, Var_72, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_functor\'/13", (MR_String) "take_addr");
        }
      }
      break;
    case (MR_Integer) 1:
      {
        ConsId_37 = ((MR_Word) ((MR_hl_field(1, Unification0_23, (MR_Integer) 1))));
        SubInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        SubInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
        ConsId_37 = NewConsId_19;
      }
      break;
    case (MR_Integer) 3:
      {
        SubInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
        ConsId_37 = NewConsId_19;
      }
      break;
  }
  check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(FromToInstsOfXArgs_16, ArgFromToInsts_17, &ArgModes_50);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_70, &ModuleInfo_51);
  succeeded = check_hlds__mode_test__init_final_insts_is_output_3_p_0(ModuleInfo_51, InitInstOfX_14, FinalInstOfX_15);
  if (succeeded)
  {
    MR_Word Var_78;
    MR_Word STATE_VARIABLE_ModeInfo_79_79;
    MR_Word STATE_VARIABLE_ModeInfo_80_80;

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
      Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_78, 0) = ((MR_Box) (UnifyContext_22));
    }
    check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_78, STATE_VARIABLE_ModeInfo_0_70, &STATE_VARIABLE_ModeInfo_79_79);
    check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(ArgVars_20, VarTable_21, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_80_80);
    check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_80_80, STATE_VARIABLE_ModeInfo_71);
  }
  else
  {
    MR_Word CanFail_60;
    MR_Word ExpandedInitInstOfX_52;
    MR_Word ExpandedFinalInstOfX_56;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;

    check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_51, InitInstOfX_14, &ExpandedInitInstOfX_52);
    succeeded = ((MR_tag((MR_Word) ExpandedInitInstOfX_52)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_82 = ((MR_Word) ((MR_hl_field(2, ExpandedInitInstOfX_52, (MR_Integer) 2))));
      succeeded = (Var_82 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_83 = ((MR_Word) ((MR_hl_field(1, Var_82, (MR_Integer) 1))));
        succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_51, FinalInstOfX_15, &ExpandedFinalInstOfX_56);
          succeeded = ((MR_tag((MR_Word) ExpandedFinalInstOfX_56)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_84 = ((MR_Word) ((MR_hl_field(2, ExpandedFinalInstOfX_56, (MR_Integer) 2))));
            succeeded = (Var_84 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_85 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 1))));
              succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
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

      succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_51, TypeOfX_26, &Constructors_61);
      if (succeeded)
      {
        succeeded = (Constructors_61 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_86 = ((MR_Word) ((MR_hl_field(1, Constructors_61, (MR_Integer) 1))));
          succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
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
        succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(TypeOfX_26, &Var_64, &PredOrFunc_65, &Var_67);
        if (succeeded)
          succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_63);
        if (succeeded)
        {
          MR_Word WaitingVars_68;
          MR_Word ModeError_69;
          MR_Word Var_87;

          parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_68);
          {
            Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_87, 0) = ((MR_Box) (ConsId_37));
            MR_hl_field(1, Var_87, 1) = ((MR_Box) (ArgVars_20));
          }
          {
            ModeError_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_69, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, ModeError_69, 1) = ((MR_Box) (X_18));
            MR_hl_field(3, ModeError_69, 2) = ((MR_Box) (Var_87));
            MR_hl_field(3, ModeError_69, 3) = ((MR_Box) (TypeOfX_26));
            MR_hl_field(3, ModeError_69, 4) = (MR_Box) ((MR_Unsigned) (PredOrFunc_65));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_68, ModeError_69, STATE_VARIABLE_ModeInfo_0_70, STATE_VARIABLE_ModeInfo_71);
        }
        else
          *STATE_VARIABLE_ModeInfo_71 = STATE_VARIABLE_ModeInfo_0_70;
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
      MR_Word ArgVar_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgVars_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
    X_14 = ((MR_Word) ((MR_hl_field(1, Unification0_8, (MR_Integer) 0))));
    ConsId_15 = ((MR_Word) ((MR_hl_field(1, Unification0_8, (MR_Integer) 1))));
    Var_26 = ((MR_Word) ((MR_hl_field(1, Unification0_8, (MR_Integer) 2))));
    ArgModes0_16 = ((MR_Word) ((MR_hl_field(1, Unification0_8, (MR_Integer) 3))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(1, Unification0_8, (MR_Integer) 4)));
    TypeInfo_27_27 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[1]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgVars0_10)), ((MR_Box) (Var_26)));
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.split_complicated_subunifies\'/7", (MR_String) "split_complicated_subunifies_2 failed");
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
check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(
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
    MR_Word Var0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
      ArgMode0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgModes0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_5, &ModuleInfo_17);
      InitInstX_18 = ((MR_Word) ((MR_hl_field(0, ArgMode0_12, (MR_Integer) 0))));
      FinalInstX_19 = ((MR_Word) ((MR_hl_field(0, ArgMode0_12, (MR_Integer) 1))));
      InitInstY_20 = ((MR_Word) ((MR_hl_field(0, ArgMode0_12, (MR_Integer) 2))));
      FinalInstY_21 = ((MR_Word) ((MR_hl_field(0, ArgMode0_12, (MR_Integer) 3))));
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
        Var_49 = ((MR_Word) ((MR_hl_field(0, VarEntry0_39, (MR_Integer) 1))));
        Var_50 = ((MR_Unsigned) ((MR_hl_field(0, VarEntry0_39, (MR_Integer) 2))) & (MR_Integer) 1);
        {
          VarEntry_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VarEntry_40, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, VarEntry_40, 1) = ((MR_Box) (Var_49));
          MR_hl_field(0, VarEntry_40, 2) = (MR_Box) ((MR_Unsigned) (Var_50));
        }
        parse_tree__var_table__add_var_entry_4_p_0(VarEntry_40, &Var_24, VarTable0_38, &VarTable_41);
        check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_41, STATE_VARIABLE_ModeInfo_0_5, &STATE_VARIABLE_ModeInfo_32_32);
        VarType_42 = ((MR_Word) ((MR_hl_field(0, VarEntry0_39, (MR_Integer) 1))));
        check_hlds__modecheck_unify__create_var_var_unification_5_p_0(Var0_10, Var_24, VarType_42, STATE_VARIABLE_ModeInfo_32_32, &ExtraGoal_43);
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
        succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(Vars0_11, ArgModes0_13, &Vars1_26, &ExtraGoals1_27, STATE_VARIABLE_ModeInfo_32_32, STATE_VARIABLE_ModeInfo_6);
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

        succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(Vars0_11, ArgModes0_13, &Vars1_35, HeadVar__4_4, STATE_VARIABLE_ModeInfo_0_5, STATE_VARIABLE_ModeInfo_6);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 26, &WarnCannotSucceed_12);
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
    ModeError_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ModeError_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ModeError_19, 1) = ((MR_Box) (X_10));
    MR_hl_field(3, ModeError_19, 2) = ((MR_Box) (InstConsId_11));
    MR_hl_field(3, ModeError_19, 3) = ((MR_Box) (ArgVars0_12));
    MR_hl_field(3, ModeError_19, 4) = ((MR_Box) (InstOfX_13));
    MR_hl_field(3, ModeError_19, 5) = ((MR_Box) (InstArgs_14));
  }
  check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_18, ModeError_19, STATE_VARIABLE_ModeInfo_0_22, &STATE_VARIABLE_ModeInfo_24_24);
  check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_10, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_24_24, &STATE_VARIABLE_ModeInfo_26_26);
  Var_27 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ArgVars0_12);
  NoArgInsts_21 = mercury__list__duplicate_2_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[2]), Var_27, ((MR_Box) ((MR_Unsigned) 0U)));
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
          MR_Word Uniq_11 = ((MR_Unsigned) ((MR_hl_field(1, Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, Inst_6, (MR_Integer) 1))));

          succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = check_hlds__modecheck_unify__ground_args_5_p_0(Uniq_11, ArgVars_7, UnifyArgInsts_8, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));

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
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, (MR_Integer) 0))));
            MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, BoundInsts_14, (MR_Integer) 1))));

            ArgInsts_16 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 1))));
            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = check_hlds__modecheck_unify__try_bind_args_2_5_p_0(ArgVars_7, ArgInsts_16, UnifyArgInsts_8, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_18 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
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
      MR_Word Arg_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
        UnifyArgInst_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        UnifyArgInsts_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
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
      MR_Word Arg_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
        Inst_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        Insts_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          UnifyArgInst_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
          UnifyArgInsts_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
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
    Var_32 = ((MR_Word) ((MR_hl_field(0, VarEntry0_22, (MR_Integer) 1))));
    Var_33 = ((MR_Unsigned) ((MR_hl_field(0, VarEntry0_22, (MR_Integer) 2))) & (MR_Integer) 1);
    {
      VarEntry_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarEntry_23, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, VarEntry_23, 1) = ((MR_Box) (Var_32));
      MR_hl_field(0, VarEntry_23, 2) = (MR_Box) ((MR_Unsigned) (Var_33));
    }
    parse_tree__var_table__add_var_entry_4_p_0(VarEntry_23, X_11, VarTable0_21, &VarTable_24);
    check_hlds__mode_info__mode_info_set_var_table_3_p_0(VarTable_24, STATE_VARIABLE_ModeInfo_0_19, STATE_VARIABLE_ModeInfo_20);
    VarType_25 = ((MR_Word) ((MR_hl_field(0, VarEntry0_22, (MR_Integer) 1))));
    check_hlds__modecheck_unify__create_var_var_unification_5_p_0(X0_10, *X_11, VarType_25, *STATE_VARIABLE_ModeInfo_20, &ExtraGoal_26);
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

void MR_CALL 
check_hlds__modecheck_unify__create_var_var_unification_5_p_0(
  MR_Word Var0_6,
  MR_Word Var_7,
  MR_Word Type_8,
  MR_Word ModeInfo_9,
  MR_Word * Goal_10)
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
  MainContext_16 = ((MR_Word) ((MR_hl_field(0, UnifyContext_15, (MR_Integer) 0))));
  SubContexts_17 = ((MR_Word) ((MR_hl_field(0, UnifyContext_15, (MR_Integer) 1))));
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (Var_7));
  }
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Var0_6, Var_35, Context_13, MainContext_16, SubContexts_17, &Var_36);
  GoalExpr0_18 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
  GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 1))));
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_7));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var0_6));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_38));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_37, &NonLocals_20);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_20, GoalInfo0_19, &GoalInfo1_21);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_13, GoalInfo1_21, &GoalInfo2_22);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_9, &ModuleInfo_23);
  check_hlds__mode_info__mode_info_get_pred_id_2_p_0(ModeInfo_9, &PredId_24);
  check_hlds__mode_info__mode_info_get_proc_id_2_p_0(ModeInfo_9, &ProcId_25);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_23, PredId_24, ProcId_25, &_PredInfo_26, &ProcInfo_27);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_27, &RttiVarMaps_28);
  succeeded = ((MR_tag((MR_Word) GoalExpr0_18)) == (MR_Integer) 1);
  if (succeeded)
  {
    X_29 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_18, (MR_Integer) 0))));
    Y_30 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_18, (MR_Integer) 1))));
    Mode_31 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_18, (MR_Integer) 2))));
    Unification0_32 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_18, (MR_Integer) 3))));
    FinalUnifyContext_33 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_18, (MR_Integer) 4))));
    {
      MR_Word Unification_34;

      check_hlds__polymorphism_goal__unification_typeinfos_rtti_varmaps_6_p_0(Type_8, RttiVarMaps_28, Unification0_32, &Unification_34, GoalInfo2_22, &GoalInfo_12);
      {
        GoalExpr_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr_11, 0) = ((MR_Box) (X_29));
        MR_hl_field(1, GoalExpr_11, 1) = ((MR_Box) (Y_30));
        MR_hl_field(1, GoalExpr_11, 2) = ((MR_Box) (Mode_31));
        MR_hl_field(1, GoalExpr_11, 3) = ((MR_Box) (Unification_34));
        MR_hl_field(1, GoalExpr_11, 4) = ((MR_Box) (FinalUnifyContext_33));
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.create_var_var_unification\'/5", (MR_String) "unexpected GoalExpr0");
      return;
    }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_12));
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(
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
  InstOfY_22 = ((MR_Word) ((MR_hl_field(0, ConstStruct_18, (MR_Integer) 3))));
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
      ModeError_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, ModeError_28, 1) = ((MR_Box) (X_8));
      MR_hl_field(3, ModeError_28, 2) = ((MR_Box) (ConsId_9));
      MR_hl_field(3, ModeError_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ModeError_28, 4) = ((MR_Box) (InstOfX_15));
      MR_hl_field(3, ModeError_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
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

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_undetermined_mode_lambda__542__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(
  MR_Word X_9,
  MR_Word RHS0_10,
  MR_Word Unification_11,
  MR_Word UnifyContext_12,
  MR_Word GoalInfo0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_49,
  MR_Word * STATE_VARIABLE_ModeInfo_50)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_16;
  MR_Word Goal0_24;
  MR_Word PredId_28;
  MR_Word ArgVars_29;
  MR_Word PredIdsArgs0_25;
  MR_Word PredIdsArgs_27;
  MR_Word Var_51;
  MR_Tuple Var_52;
  MR_Word Var_53;
  MR_Word Var_26;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_49, &ModuleInfo_16);
  Goal0_24 = ((MR_Word) ((MR_hl_field(2, RHS0_10, (MR_Integer) 5))));
  hlds__goal_util__pred_ids_args_called_from_goal_2_p_0(Goal0_24, &PredIdsArgs0_25);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[2]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (ModuleInfo_16));
  }
  mercury__list__filter_4_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_3[0]), Var_51, PredIdsArgs0_25, &Var_26, &PredIdsArgs_27);
  succeeded = (PredIdsArgs_27 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_52 = ((MR_Tuple) ((MR_hl_field(1, PredIdsArgs_27, (MR_Integer) 0))));
    Var_53 = ((MR_Word) ((MR_hl_field(1, PredIdsArgs_27, (MR_Integer) 1))));
    succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PredId_28 = ((MR_Word) ((MR_hl_field(0, Var_52, (MR_Integer) 0))));
      ArgVars_29 = ((MR_Word) ((MR_hl_field(0, Var_52, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word ProcModeErrorMap_30;
    MR_Word VarTable_31;
    MR_Word InstMap_32;
    MR_Word MatchResult_33;
    MR_Word CalleePredInfo_98;
    MR_Word CalleeErrorMap_100;
    MR_Word CalleeProcIds_101;
    MR_Word CalleeErrorMapPrime_99;
    MR_Box conv0_CalleeErrorMapPrime_99;

    check_hlds__mode_info__mode_info_get_proc_mode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_0_49, &ProcModeErrorMap_30);
    check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_49, &VarTable_31);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_49, &InstMap_32);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, PredId_28, &CalleePredInfo_98);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_2[1]), ProcModeErrorMap_30, ((MR_Box) (PredId_28)), &conv0_CalleeErrorMapPrime_99);
    if (succeeded)
    {
      CalleeErrorMapPrime_99 = ((MR_Word) (conv0_CalleeErrorMapPrime_99));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      CalleeErrorMap_100 = CalleeErrorMapPrime_99;
    else
      mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[5]), &CalleeErrorMap_100);
    CalleeProcIds_101 = hlds__hlds_pred__pred_info_all_procids_1_f_0(CalleePredInfo_98);
    check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_10_p_0(ModuleInfo_16, VarTable_31, InstMap_32, ArgVars_29, CalleePredInfo_98, CalleeErrorMap_100, CalleeProcIds_101, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &MatchResult_33);
    if (((MR_tag((MR_Word) MatchResult_33)) == (MR_Integer) 0))
    {
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(0, MatchResult_33, (MR_Integer) 0))));

      if ((Var_95 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MultiModeError_35;
        MR_Word PredMultiModeError_39;
        MR_Word WaitingVars_40;
        MR_Word ModeError_41;
        MR_Word MultiModeErrorMap0_42;
        MR_Word MultiModeErrorMap_43;
        MR_Word STATE_VARIABLE_ModeInfo_57_57;

        {
          MultiModeError_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MultiModeError_35, 0) = ((MR_Box) (ArgVars_29));
        }
        {
          PredMultiModeError_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredMultiModeError_39, 0) = ((MR_Box) (PredId_28));
          MR_hl_field(0, PredMultiModeError_39, 1) = ((MR_Box) (MultiModeError_35));
        }
        WaitingVars_40 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_9);
        {
          ModeError_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ModeError_41, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, ModeError_41, 1) = ((MR_Box) (X_9));
          MR_hl_field(3, ModeError_41, 2) = ((MR_Box) (PredMultiModeError_39));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_40, ModeError_41, STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_57_57);
        check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_57_57, &MultiModeErrorMap0_42);
        mercury__map__set_4_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0), ((MR_Box) (X_9)), ((MR_Box) (PredMultiModeError_39)), MultiModeErrorMap0_42, &MultiModeErrorMap_43);
        check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap_43, STATE_VARIABLE_ModeInfo_57_57, STATE_VARIABLE_ModeInfo_50);
        *Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
      }
      else
      {
        MR_Word Var_96 = ((MR_Word) ((MR_hl_field(1, Var_95, (MR_Integer) 1))));
        MR_Integer Var_97 = ((MR_Integer) ((MR_hl_field(1, Var_95, (MR_Integer) 0))));

        if ((Var_96 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeRHS_45;

          check_hlds__polymorphism_lambda__fix_undetermined_mode_lambda_goal_4_p_0(ModuleInfo_16, Var_97, RHS0_10, &MaybeRHS_45);
          if (((MR_tag((MR_Word) MaybeRHS_45)) == (MR_Integer) 0))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_undetermined_mode_lambda\'/8", (MR_String) "could not fix up lambda goal; polymorphism.m should have stopped us getting here");
              return;
            }
          else
          {
            MR_Word RHS_46 = ((MR_Word) ((MR_hl_field(1, MaybeRHS_45, (MR_Integer) 0))));
            MR_Word GoalInfo_47;

            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 23, GoalInfo0_13, &GoalInfo_47);
            check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(X_9, RHS_46, Unification_11, UnifyContext_12, Goal_14, STATE_VARIABLE_ModeInfo_0_49, STATE_VARIABLE_ModeInfo_50);
          }
        }
        else
        {
          MR_Word MultiModeError_75;
          MR_Word PredMultiModeError_76;
          MR_Word WaitingVars_77;
          MR_Word ModeError_78;
          MR_Word MultiModeErrorMap0_79;
          MR_Word MultiModeErrorMap_80;
          MR_Word STATE_VARIABLE_ModeInfo_57_81;

          {
            MultiModeError_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MultiModeError_75, 0) = ((MR_Box) (ArgVars_29));
          }
          {
            PredMultiModeError_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredMultiModeError_76, 0) = ((MR_Box) (PredId_28));
            MR_hl_field(0, PredMultiModeError_76, 1) = ((MR_Box) (MultiModeError_75));
          }
          WaitingVars_77 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_9);
          {
            ModeError_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_78, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, ModeError_78, 1) = ((MR_Box) (X_9));
            MR_hl_field(3, ModeError_78, 2) = ((MR_Box) (PredMultiModeError_76));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_77, ModeError_78, STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_57_81);
          check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_57_81, &MultiModeErrorMap0_79);
          mercury__map__set_4_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0), ((MR_Box) (X_9)), ((MR_Box) (PredMultiModeError_76)), MultiModeErrorMap0_79, &MultiModeErrorMap_80);
          check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap_80, STATE_VARIABLE_ModeInfo_57_81, STATE_VARIABLE_ModeInfo_50);
          *Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
        }
      }
    }
    else
    {
      MR_Word NonGroundArgVars_34 = ((MR_Word) ((MR_hl_field(1, MatchResult_33, (MR_Integer) 0))));
      MR_Word MultiModeError_85;
      MR_Word PredMultiModeError_86;
      MR_Word WaitingVars_87;
      MR_Word ModeError_88;
      MR_Word MultiModeErrorMap0_89;
      MR_Word MultiModeErrorMap_90;
      MR_Word STATE_VARIABLE_ModeInfo_57_91;

      {
        MultiModeError_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MultiModeError_85, 0) = ((MR_Box) (NonGroundArgVars_34));
      }
      {
        PredMultiModeError_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredMultiModeError_86, 0) = ((MR_Box) (PredId_28));
        MR_hl_field(0, PredMultiModeError_86, 1) = ((MR_Box) (MultiModeError_85));
      }
      WaitingVars_87 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_9);
      {
        ModeError_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_88, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, ModeError_88, 1) = ((MR_Box) (X_9));
        MR_hl_field(3, ModeError_88, 2) = ((MR_Box) (PredMultiModeError_86));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_87, ModeError_88, STATE_VARIABLE_ModeInfo_0_49, &STATE_VARIABLE_ModeInfo_57_91);
      check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(STATE_VARIABLE_ModeInfo_57_91, &MultiModeErrorMap0_89);
      mercury__map__set_4_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0), ((MR_Box) (X_9)), ((MR_Box) (PredMultiModeError_86)), MultiModeErrorMap0_89, &MultiModeErrorMap_90);
      check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(MultiModeErrorMap_90, STATE_VARIABLE_ModeInfo_57_91, STATE_VARIABLE_ModeInfo_50);
      *Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_undetermined_mode_lambda\'/8", (MR_String) "expecting single call");
      return;
    }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__376__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(
  MR_Word X_9,
  MR_Word LambdaRHS_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_66,
  MR_Word * STATE_VARIABLE_ModeInfo_67)
{
  MR_bool succeeded;
  MR_Word Purity_16 = ((((MR_Unsigned) ((MR_hl_field(2, LambdaRHS_10, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
  MR_Word Groundness_17 = ((((MR_Unsigned) ((MR_hl_field(2, LambdaRHS_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(2, LambdaRHS_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word LambdaNonLocals_20 = ((MR_Word) ((MR_hl_field(2, LambdaRHS_10, (MR_Integer) 2))));
  MR_Word VarsModes_21 = ((MR_Word) ((MR_hl_field(2, LambdaRHS_10, (MR_Integer) 3))));
  MR_Word Det_22 = ((MR_Unsigned) ((MR_hl_field(2, LambdaRHS_10, (MR_Integer) 4))) & (MR_Integer) 7);
  MR_Word Goal0_23 = ((MR_Word) ((MR_hl_field(2, LambdaRHS_10, (MR_Integer) 5))));
  MR_Word ModuleInfo0_24;
  MR_Word Vars_25;
  MR_Word Modes_26;
  MR_Word VarInitialInsts_27;
  MR_Word VarInstAL_28;
  MR_Word VarInstMapDelta_29;
  MR_Word InstMap0_30;
  MR_Word InstMap1_31;
  MR_Word ArgLives_32;
  MR_Word LiveVarsList_33;
  MR_Word LiveVars_34;
  MR_Word GoalInfo0_36;
  MR_Word NonLocals0_37;
  MR_Word NonLocals1_38;
  MR_Word NonLocals_39;
  MR_Word NonLocalsList_45;
  MR_Word NonLocalInsts_46;
  MR_Word ModuleInfo2_47;
  MR_Word RHS_56;
  MR_Word Unification_57;
  MR_Word UnifyMode_58;
  MR_Word STATE_VARIABLE_ModeInfo_68_68;
  MR_Word STATE_VARIABLE_ModeInfo_69_69;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, LambdaRHS_10, (MR_Integer) 0)));

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_66, &ModuleInfo0_24);
  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), VarsModes_21, &Vars_25, &Modes_26);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_24, Modes_26, &VarInitialInsts_27);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Vars_25, VarInitialInsts_27, &VarInstAL_28);
  VarInstMapDelta_29 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(VarInstAL_28);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_66, &InstMap0_30);
  hlds__instmap__apply_instmap_delta_3_p_0(VarInstMapDelta_29, InstMap0_30, &InstMap1_31);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_31, STATE_VARIABLE_ModeInfo_0_66, &STATE_VARIABLE_ModeInfo_68_68);
  check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_24, Modes_26, &ArgLives_32);
  check_hlds__modecheck_util__get_live_vars_3_p_0(Vars_25, ArgLives_32, &LiveVarsList_33);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVarsList_33, &LiveVars_34);
  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(LiveVars_34, STATE_VARIABLE_ModeInfo_68_68, &STATE_VARIABLE_ModeInfo_69_69);
  GoalInfo0_36 = ((MR_Word) ((MR_hl_field(0, Goal0_23, (MR_Integer) 1))));
  NonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_36);
  parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_25, NonLocals0_37, &NonLocals1_38);
  switch (Groundness_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word NonLocalTypes_40;
        MR_Word FilterPred_41;

        check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &NonLocalTypes_40);
        {
          FilterPred_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FilterPred_41, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[0]));
          MR_hl_field(0, FilterPred_41, 1) = ((MR_Box) (check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1));
          MR_hl_field(0, FilterPred_41, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, FilterPred_41, 3) = ((MR_Box) (ModuleInfo0_24));
          MR_hl_field(0, FilterPred_41, 4) = ((MR_Box) (InstMap1_31));
          MR_hl_field(0, FilterPred_41, 5) = ((MR_Box) (NonLocalTypes_40));
        }
        parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FilterPred_41, NonLocals1_38, &NonLocals_39);
      }
      break;
    case (MR_Integer) 0:
      NonLocals_39 = NonLocals1_38;
      break;
  }
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_39, &NonLocalsList_45);
  hlds__instmap__instmap_lookup_vars_3_p_0(InstMap1_31, NonLocalsList_45, &NonLocalInsts_46);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &ModuleInfo2_47);
  succeeded = (Groundness_17 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Purity_16 != (MR_Integer) 2);
  if (succeeded)
    succeeded = check_hlds__inst_test__inst_list_is_ground_2_p_0(ModuleInfo2_47, NonLocalInsts_46);
  else
    succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(ModuleInfo2_47, NonLocalInsts_46);
  if (succeeded)
  {
    MR_Word SharedNonLocalInsts_48;
    MR_Word ModuleInfo3_49;
    MR_Word InstMap2_50;
    MR_Word HowToCheckGoal_51;
    MR_Word Goal_52;
    MR_Word FinalInsts_53;
    MR_Word InstMap11_54;
    MR_Word RHS0_55;
    MR_Word STATE_VARIABLE_ModeInfo_74_74;
    MR_Word STATE_VARIABLE_ModeInfo_75_75;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_ModeInfo_77_77;
    MR_Word STATE_VARIABLE_ModeInfo_80_80;
    MR_Word STATE_VARIABLE_ModeInfo_81_81;
    MR_Word STATE_VARIABLE_ModeInfo_83_83;
    MR_Word STATE_VARIABLE_ModeInfo_86_86;
    MR_Word STATE_VARIABLE_ModeInfo_87_87;
    MR_Word STATE_VARIABLE_ModeInfo_89_89;
    MR_Word STATE_VARIABLE_ModeInfo_90_90;

    check_hlds__inst_util__make_shared_inst_list_4_p_0(NonLocalInsts_46, &SharedNonLocalInsts_48, ModuleInfo2_47, &ModuleInfo3_49);
    hlds__instmap__instmap_set_vars_corresponding_4_p_0(NonLocalsList_45, SharedNonLocalInsts_48, InstMap1_31, &InstMap2_50);
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo3_49, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_74_74);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap2_50, STATE_VARIABLE_ModeInfo_74_74, &STATE_VARIABLE_ModeInfo_75_75);
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
    }
    check_hlds__mode_info__mode_info_lock_vars_4_p_0(Var_76, NonLocals_39, STATE_VARIABLE_ModeInfo_75_75, &STATE_VARIABLE_ModeInfo_77_77);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "lambda goal", STATE_VARIABLE_ModeInfo_77_77, &STATE_VARIABLE_ModeInfo_80_80);
    check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(STATE_VARIABLE_ModeInfo_80_80, &HowToCheckGoal_51);
    switch (HowToCheckGoal_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__modecheck_goal__modecheck_goal_4_p_0(Goal0_23, &Goal_52, STATE_VARIABLE_ModeInfo_80_80, &STATE_VARIABLE_ModeInfo_81_81);
        break;
      case (MR_Integer) 1:
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_23, &Goal_52, STATE_VARIABLE_ModeInfo_80_80, &STATE_VARIABLE_ModeInfo_81_81);
        break;
    }
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_24, Modes_26, &FinalInsts_53);
    check_hlds__modes__modecheck_lambda_final_insts_4_p_0(Vars_25, FinalInsts_53, STATE_VARIABLE_ModeInfo_81_81, &STATE_VARIABLE_ModeInfo_83_83);
    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "lambda goal", STATE_VARIABLE_ModeInfo_83_83, &STATE_VARIABLE_ModeInfo_86_86);
    check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(LiveVars_34, STATE_VARIABLE_ModeInfo_86_86, &STATE_VARIABLE_ModeInfo_87_87);
    check_hlds__mode_info__mode_info_unlock_vars_4_p_0(Var_76, NonLocals_39, STATE_VARIABLE_ModeInfo_87_87, &STATE_VARIABLE_ModeInfo_89_89);
    hlds__instmap__instmap_set_vars_corresponding_4_p_0(NonLocalsList_45, SharedNonLocalInsts_48, InstMap0_30, &InstMap11_54);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap11_54, STATE_VARIABLE_ModeInfo_89_89, &STATE_VARIABLE_ModeInfo_90_90);
    {
      RHS0_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, RHS0_55, 0) = (MR_Box) (packed_word_0);
      MR_hl_field(2, RHS0_55, 1) = NULL;
      MR_hl_field(2, RHS0_55, 2) = ((MR_Box) (LambdaNonLocals_20));
      MR_hl_field(2, RHS0_55, 3) = ((MR_Box) (VarsModes_21));
      MR_hl_field(2, RHS0_55, 4) = (MR_Box) ((MR_Unsigned) (Det_22));
      MR_hl_field(2, RHS0_55, 5) = ((MR_Box) (Goal_52));
    }
    check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(X_9, PredOrFunc_18, LambdaNonLocals_20, Modes_26, Det_22, RHS0_55, &RHS_56, Unification0_11, &Unification_57, &UnifyMode_58, STATE_VARIABLE_ModeInfo_90_90, STATE_VARIABLE_ModeInfo_67);
  }
  else
  {
    MR_Word RevNonGroundVarsInsts_59;
    MR_Word NonGroundVarsInsts_60;

    check_hlds__modecheck_unify__acc_non_ground_vars_5_p_0(ModuleInfo2_47, InstMap1_31, NonLocalsList_45, (MR_Word) ((MR_Unsigned) 0U), &RevNonGroundVarsInsts_59);
    mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_2[0]), RevNonGroundVarsInsts_59, &NonGroundVarsInsts_60);
    if ((NonGroundVarsInsts_60 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_lambda\'/8", (MR_String) "very strange var");
        return;
      }
    else
    {
      MR_Word BadVar_61;
      MR_Word BadInst_62;
      MR_Word WaitingVars_64;
      MR_Word ModeError_65;
      MR_Word Var_93 = ((MR_Word) ((MR_hl_field(1, NonGroundVarsInsts_60, (MR_Integer) 0))));

      BadVar_61 = ((MR_Word) ((MR_hl_field(0, Var_93, (MR_Integer) 0))));
      BadInst_62 = ((MR_Word) ((MR_hl_field(0, Var_93, (MR_Integer) 1))));
      WaitingVars_64 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BadVar_61);
      {
        ModeError_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, ModeError_65, 1) = ((MR_Box) (BadVar_61));
        MR_hl_field(3, ModeError_65, 2) = ((MR_Box) (BadInst_62));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_64, ModeError_65, STATE_VARIABLE_ModeInfo_69_69, STATE_VARIABLE_ModeInfo_67);
    }
    RHS_56 = LambdaRHS_10;
    UnifyMode_58 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_3[1]);
    Unification_57 = Unification0_11;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *UnifyGoalExpr_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (X_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (RHS_56));
    MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_58));
    MR_hl_field(1, base, 3) = ((MR_Box) (Unification_57));
    MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_12));
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
  MR_Word STATE_VARIABLE_ModeInfo_0_36,
  MR_Word * STATE_VARIABLE_ModeInfo_37)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_24;
  MR_Word InstMap0_25;
  MR_Word InstOfX_26;
  MR_Word InstOfY_27;
  MR_Word LambdaPredInfo_28;
  MR_Word Var_39;
  MR_Word UnifyInst_29;
  MR_Word ModuleInfo1_31;
  MR_Word _Detism_30;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_36, &ModuleInfo0_24);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_36, &InstMap0_25);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_25, X_13, &InstOfX_26);
  {
    LambdaPredInfo_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaPredInfo_28, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
    MR_hl_field(0, LambdaPredInfo_28, 1) = ((MR_Box) (LambdaModes_16));
    MR_hl_field(0, LambdaPredInfo_28, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, LambdaPredInfo_28, 3) = (MR_Box) ((MR_Unsigned) (LambdaDetism_17));
  }
  Var_39 = (MR_Word) (MR_mkword(1, (MR_Word) (LambdaPredInfo_28)));
  {
    InstOfY_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstOfY_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(1, InstOfY_27, 1) = ((MR_Box) (Var_39));
  }
  succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0((MR_Integer) 1, InstOfX_26, InstOfY_27, (MR_Integer) 0, &UnifyInst_29, &_Detism_30, ModuleInfo0_24, &ModuleInfo1_31);
  if (succeeded)
  {
    MR_Word ArgInsts_33;
    MR_Word STATE_VARIABLE_ModeInfo_43_43;
    MR_Word STATE_VARIABLE_ModeInfo_45_45;

    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_31, STATE_VARIABLE_ModeInfo_0_36, &STATE_VARIABLE_ModeInfo_43_43);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *UnifyMode_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InstOfX_26));
      MR_hl_field(0, base, 1) = ((MR_Box) (UnifyInst_29));
      MR_hl_field(0, base, 2) = ((MR_Box) (InstOfY_27));
      MR_hl_field(0, base, 3) = ((MR_Box) (UnifyInst_29));
    }
    hlds__instmap__instmap_lookup_vars_3_p_0(InstMap0_25, ArgVars_15, &ArgInsts_33);
    check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0(InstOfX_26, UnifyInst_29, ArgInsts_33, X_13, ArgVars_15, PredOrFunc_14, RHS0_18, RHS_19, Unification0_20, Unification_21, STATE_VARIABLE_ModeInfo_43_43, &STATE_VARIABLE_ModeInfo_45_45);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_13, UnifyInst_29, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_45_45, STATE_VARIABLE_ModeInfo_37);
  }
  else
  {
    MR_Word WaitingVars_34;
    MR_Word ModeError_35;
    MR_Word Var_48;
    MR_Word STATE_VARIABLE_ModeInfo_50_50;

    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (X_13));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_48, &WaitingVars_34);
    {
      ModeError_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ModeError_35, 1) = ((MR_Box) (X_13));
      MR_hl_field(3, ModeError_35, 2) = ((MR_Box) (InstOfX_26));
      MR_hl_field(3, ModeError_35, 3) = ((MR_Box) (InstOfY_27));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_34, ModeError_35, STATE_VARIABLE_ModeInfo_0_36, &STATE_VARIABLE_ModeInfo_50_50);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_13, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_50_50, STATE_VARIABLE_ModeInfo_37);
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

  conv0_LambdaHeadVar__2_85 = check_hlds__modecheck_unify__IntroducedFrom__func__categorize_unify_var_lambda__1330__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_85));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1312__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word ArgFromToInsts_47;
  MR_Word ArgModes_49;
  MR_Word InstMap_50;
  MR_Word ModuleInfo_51;

  mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ArgVars_17, &Arity_24);
  switch (MR_tag((MR_Word) Unification0_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        ConsId_26 = ((MR_Word) ((MR_hl_field(0, Unification0_21, (MR_Integer) 1))));
        SubInfo_31 = ((MR_Word) ((MR_hl_field(0, Unification0_21, (MR_Integer) 6))));
        if (!((SubInfo_31 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word MaybeTakeAddr_32 = ((MR_Word) ((MR_hl_field(1, SubInfo_31, (MR_Integer) 0))));
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
        ConsId_26 = ((MR_Word) ((MR_hl_field(1, Unification0_21, (MR_Integer) 1))));
        SubInfo_31 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        SubInfo_31 = (MR_Word) ((MR_Unsigned) 0U);
        {
          ConsId_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConsId_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ConsId_26, 1) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[2]));
          MR_hl_field(3, ConsId_26, 2) = ((MR_Box) (Arity_24));
          MR_hl_field(3, ConsId_26, 3) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[9]));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        SubInfo_31 = (MR_Word) ((MR_Unsigned) 0U);
        {
          ConsId_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConsId_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ConsId_26, 1) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_4[2]));
          MR_hl_field(3, ConsId_26, 2) = ((MR_Box) (Arity_24));
          MR_hl_field(3, ConsId_26, 3) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[9]));
        }
      }
      break;
  }
  ArgFromToInsts_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_2[4]), ArgInsts_15);
  check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(ArgFromToInsts_47, ArgFromToInsts_47, &ArgModes_49);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_72, &InstMap_50);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_72, &ModuleInfo_51);
  succeeded = check_hlds__mode_test__init_final_insts_is_output_3_p_0(ModuleInfo_51, InitInstX_13, FinalInstX_14);
  if (succeeded)
  {
    MR_Word ShroudedPredProcId_52;

    succeeded = ((((MR_tag((MR_Word) ConsId_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_26, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      ShroudedPredProcId_52 = ((MR_Word) ((MR_hl_field(3, ConsId_26, (MR_Integer) 1))));
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_50);
    }
    if (succeeded)
    {
      MR_Word PredId_54;
      MR_Integer ProcId_55;
      MR_Word Var_88;
      MR_Word Goal_62;
      MR_Word Var_89;
      MR_Word Var_104;
      MR_Integer Var_105;

      Var_88 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_52);
      PredId_54 = ((MR_Word) ((MR_hl_field(0, Var_88, (MR_Integer) 0))));
      ProcId_55 = ((MR_Integer) ((MR_hl_field(0, Var_88, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) RHS0_19)) == (MR_Integer) 2);
      if (succeeded)
      {
        Goal_62 = ((MR_Word) ((MR_hl_field(2, RHS0_19, (MR_Integer) 5))));
        succeeded = MR_TRUE;
        if (succeeded)
        {
          Var_89 = ((MR_Word) ((MR_hl_field(0, Goal_62, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_89)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_104 = ((MR_Word) ((MR_hl_field(2, Var_89, (MR_Integer) 0))));
            Var_105 = ((MR_Integer) ((MR_hl_field(2, Var_89, (MR_Integer) 1))));
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_54, Var_104);
            if (succeeded)
              succeeded = (ProcId_55 == Var_105);
          }
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
      MR_hl_field(0, base, 3) = ((MR_Box) (ArgModes_49));
      MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, base, 6) = ((MR_Box) (SubInfo_31));
    }
    *STATE_VARIABLE_ModeInfo_73 = STATE_VARIABLE_ModeInfo_0_72;
  }
  else
  {
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_50);
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
        MR_hl_field(2, Var_95, 1) = ((MR_Box) (ArgFromToInsts_47));
      }
      {
        ModeError_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, ModeError_71, 1) = ((MR_Box) (X_16));
        MR_hl_field(3, ModeError_71, 2) = ((MR_Box) (Var_95));
        MR_hl_field(3, ModeError_71, 3) = ((MR_Box) (Type_70));
        MR_hl_field(3, ModeError_71, 4) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_68, ModeError_71, STATE_VARIABLE_ModeInfo_0_72, STATE_VARIABLE_ModeInfo_73);
      *Unification_22 = Unification0_21;
      *RHS_20 = RHS0_19;
    }
    else
    {
      *Unification_22 = Unification0_21;
      *RHS_20 = RHS0_19;
      *STATE_VARIABLE_ModeInfo_73 = STATE_VARIABLE_ModeInfo_0_72;
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__acc_non_ground_vars_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word InstMap_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevNonGroundVarsInsts_0_4,
  MR_Word * STATE_VARIABLE_RevNonGroundVarsInsts_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevNonGroundVarsInsts_5 = STATE_VARIABLE_RevNonGroundVarsInsts_0_4;
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Inst_16;
      MR_Word STATE_VARIABLE_RevNonGroundVarsInsts_19_19;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevNonGroundVarsInsts_0_4;

      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_2, Var_13, &Inst_16);
      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_1, Inst_16);
      if (succeeded)
        STATE_VARIABLE_RevNonGroundVarsInsts_19_19 = STATE_VARIABLE_RevNonGroundVarsInsts_0_4;
      else
      {
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (Var_13));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (Inst_16));
        }
        {
          STATE_VARIABLE_RevNonGroundVarsInsts_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevNonGroundVarsInsts_19_19, 0) = ((MR_Box) (Var_20));
          MR_hl_field(1, STATE_VARIABLE_RevNonGroundVarsInsts_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevNonGroundVarsInsts_0_4));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Vars_14;
      next_value_of_STATE_VARIABLE_RevNonGroundVarsInsts_0_4 = STATE_VARIABLE_RevNonGroundVarsInsts_19_19;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevNonGroundVarsInsts_0_4 = next_value_of_STATE_VARIABLE_RevNonGroundVarsInsts_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap_3,
  MR_Word ArgVars_4,
  MR_Word CalleePredInfo_5,
  MR_Word CalleeErrorMap_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_RevMatchedProcIds_0_8,
  MR_Word STATE_VARIABLE_NonGroundNonLocals_0_9,
  MR_Word * Result_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((STATE_VARIABLE_NonGroundNonLocals_0_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_24;

        Var_24 = mercury__list__reverse_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), STATE_VARIABLE_RevMatchedProcIds_0_8);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_NonGroundNonLocals_25_25;

        STATE_VARIABLE_NonGroundNonLocals_25_25 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), STATE_VARIABLE_NonGroundNonLocals_0_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_NonGroundNonLocals_25_25));
        }
      }
    else
    {
      MR_Integer ProcId_32 = ((MR_Integer) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
      MR_Word ProcIds_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_NonGroundNonLocals_46_46;
      MR_Word STATE_VARIABLE_RevMatchedProcIds_47_47;
      MR_Word CalleeModeErrors_37;
      MR_Box conv0_CalleeModeErrors_37;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_RevMatchedProcIds_0_8;
      MR_Word next_value_of_STATE_VARIABLE_NonGroundNonLocals_0_9;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[5]), CalleeErrorMap_6, ((MR_Box) (ProcId_32)), &conv0_CalleeModeErrors_37);
      if (succeeded)
      {
        CalleeModeErrors_37 = ((MR_Word) (conv0_CalleeModeErrors_37));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (CalleeModeErrors_37 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_NonGroundNonLocals_46_46 = STATE_VARIABLE_NonGroundNonLocals_0_9;
        STATE_VARIABLE_RevMatchedProcIds_47_47 = STATE_VARIABLE_RevMatchedProcIds_0_8;
      }
      else
      {
        MR_Word CalleeProcInfo_40;
        MR_Word ArgModes_41;
        MR_Word ProcNonGroundNonLocals_42;
        MR_Word ProcResult_43;

        hlds__hlds_pred__pred_info_proc_info_3_p_0(CalleePredInfo_5, ProcId_32, &CalleeProcInfo_40);
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_40, &ArgModes_41);
        check_hlds__modecheck_unify__match_mode_by_higher_order_insts_7_p_0(ModuleInfo_1, VarTable_2, InstMap_3, ArgVars_4, ArgModes_41, &ProcNonGroundNonLocals_42, &ProcResult_43);
        STATE_VARIABLE_NonGroundNonLocals_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), ProcNonGroundNonLocals_42, STATE_VARIABLE_NonGroundNonLocals_0_9);
        switch (ProcResult_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_RevMatchedProcIds_47_47 = STATE_VARIABLE_RevMatchedProcIds_0_8;
            break;
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_RevMatchedProcIds_47_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevMatchedProcIds_47_47, 0) = ((MR_Box) (ProcId_32));
              MR_hl_field(1, STATE_VARIABLE_RevMatchedProcIds_47_47, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchedProcIds_0_8));
            }
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = ProcIds_33;
      next_value_of_STATE_VARIABLE_RevMatchedProcIds_0_8 = STATE_VARIABLE_RevMatchedProcIds_47_47;
      next_value_of_STATE_VARIABLE_NonGroundNonLocals_0_9 = STATE_VARIABLE_NonGroundNonLocals_46_46;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_RevMatchedProcIds_0_8 = next_value_of_STATE_VARIABLE_RevMatchedProcIds_0_8;
      STATE_VARIABLE_NonGroundNonLocals_0_9 = next_value_of_STATE_VARIABLE_NonGroundNonLocals_0_9;
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
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Integer) 0;
  }
  else
  {
    MR_Word ArgVar_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word ArgVars_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word ArgMode_20;
    MR_Word ArgModes_21;
    MR_Word TailNonGroundArgVars_22;
    MR_Word TailResult_23;
    MR_Word Initial_24;
    MR_Word Var_31;

    if ((ArgModesList_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_unify.match_mode_by_higher_order_insts\'/7", (MR_String) "too many arguments");
        return;
      }
    else
    {
      ArgMode_20 = ((MR_Word) ((MR_hl_field(1, ArgModesList_5, (MR_Integer) 0))));
      ArgModes_21 = ((MR_Word) ((MR_hl_field(1, ArgModesList_5, (MR_Integer) 1))));
    }
    check_hlds__modecheck_unify__match_mode_by_higher_order_insts_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgVars_16, ArgModes_21, &TailNonGroundArgVars_22, &TailResult_23);
    Initial_24 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(HeadVar__1_1, ArgMode_20);
    succeeded = ((MR_tag((MR_Word) Initial_24)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_31 = ((MR_Word) ((MR_hl_field(1, Initial_24, (MR_Integer) 1))));
      succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word ArgInst_27;
      MR_Word ArgType_28;

      hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__3_3, ArgVar_15, &ArgInst_27);
      parse_tree__var_table__lookup_var_type_3_p_0(HeadVar__2_2, ArgVar_15, &ArgType_28);
      succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(HeadVar__1_1, ArgType_28, ArgInst_27, Initial_24);
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
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ArgVar_15));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailNonGroundArgVars_22));
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

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Unification0_11,
  MR_Word UnifyContext_12,
  MR_Word UnifyGoalInfo0_13,
  MR_Word * UnifyGoalExpr_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_33,
  MR_Word * STATE_VARIABLE_ModeInfo_34)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_16;
  MR_Word VarTable_17;
  MR_Word InstMap_18;
  MR_Word InstOfX_19;
  MR_Word InstOfY_20;
  MR_Word LiveX_21;
  MR_Word LiveY_22;
  MR_Word BothLive_23;
  MR_Word UnifiedInst_24;
  MR_Word Detism_25;
  MR_Word ModuleInfo1_26;
  MR_Word _XLockedReason_27;
  MR_Word _YLockedReason_28;
  MR_Word TypeInfo_54_54;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_33, &ModuleInfo0_16);
  check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_33, &VarTable_17);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_33, &InstMap_18);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_18, X_9, &InstOfX_19);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_18, Y_10, &InstOfY_20);
  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_33, X_9, &LiveX_21);
  check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_33, Y_10, &LiveY_22);
  succeeded = (LiveX_21 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (LiveY_22 == (MR_Integer) 0);
  if (succeeded)
    BothLive_23 = (MR_Integer) 0;
  else
    BothLive_23 = (MR_Integer) 1;
  succeeded = check_hlds__inst_abstract_unify__abstractly_unify_inst_8_p_0(BothLive_23, InstOfX_19, InstOfY_20, (MR_Integer) 0, &UnifiedInst_24, &Detism_25, ModuleInfo0_16, &ModuleInfo1_26);
  if (succeeded)
  {
    succeeded = (UnifiedInst_24 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_0_33, X_9, &_XLockedReason_27);
      if (succeeded)
      {
        succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_0_33, Y_10, &_YLockedReason_28);
        if (succeeded)
        {
          TypeInfo_54_54 = (MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_54_54, ((MR_Box) (X_9)), ((MR_Box) (Y_10)));
          succeeded = !(succeeded);
        }
      }
    }
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_ModeInfo_36_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_ModeInfo_38_38;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_ModeInfo_40_40;
    MR_Word ModuleInfo0_55;
    MR_Word Unification_56;
    MR_Word STATE_VARIABLE_ModeInfo_52_75;
    MR_Word AssignTarget_59;
    MR_Word AssignSource_60;
    MR_Word Var_76;
    MR_Word Var_86;

    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_26, STATE_VARIABLE_ModeInfo_0_33, &STATE_VARIABLE_ModeInfo_36_36);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (InstOfY_20));
    }
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_9, UnifiedInst_24, Var_37, STATE_VARIABLE_ModeInfo_36_36, &STATE_VARIABLE_ModeInfo_38_38);
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (InstOfX_19));
    }
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Y_10, UnifiedInst_24, Var_39, STATE_VARIABLE_ModeInfo_38_38, &STATE_VARIABLE_ModeInfo_40_40);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &ModuleInfo0_55);
    succeeded = check_hlds__mode_test__init_final_insts_is_output_3_p_0(ModuleInfo0_55, InstOfX_19, UnifiedInst_24);
    if (succeeded)
    {
      {
        Unification_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Unification_56, 0) = ((MR_Box) (X_9));
        MR_hl_field(2, Unification_56, 1) = ((MR_Box) (Y_10));
      }
      STATE_VARIABLE_ModeInfo_52_75 = STATE_VARIABLE_ModeInfo_40_40;
    }
    else
    {
      succeeded = check_hlds__mode_test__init_final_insts_is_output_3_p_0(ModuleInfo0_55, InstOfY_20, UnifiedInst_24);
      if (succeeded)
      {
        {
          Unification_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Unification_56, 0) = ((MR_Box) (Y_10));
          MR_hl_field(2, Unification_56, 1) = ((MR_Box) (X_9));
        }
        STATE_VARIABLE_ModeInfo_52_75 = STATE_VARIABLE_ModeInfo_40_40;
      }
      else
      {
        succeeded = check_hlds__mode_test__init_final_insts_is_unused_3_p_0(ModuleInfo0_55, InstOfX_19, UnifiedInst_24);
        if (succeeded)
          succeeded = check_hlds__mode_test__init_final_insts_is_unused_3_p_0(ModuleInfo0_55, InstOfY_20, UnifiedInst_24);
        if (succeeded)
        {
          switch (LiveX_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                Unification_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Unification_56, 0) = ((MR_Box) (X_9));
                MR_hl_field(2, Unification_56, 1) = ((MR_Box) (Y_10));
              }
              break;
            case (MR_Integer) 0:
              switch (LiveY_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    Unification_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Unification_56, 0) = ((MR_Box) (Y_10));
                    MR_hl_field(2, Unification_56, 1) = ((MR_Box) (X_9));
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
          STATE_VARIABLE_ModeInfo_52_75 = STATE_VARIABLE_ModeInfo_40_40;
        }
        else
        {
          succeeded = (InstOfX_19 == (MR_Word) ((MR_Unsigned) 4U));
          if (!(succeeded))
            succeeded = (InstOfY_20 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            {
              Unification_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Unification_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Unification_56, 1) = ((MR_Box) (X_9));
              MR_hl_field(3, Unification_56, 2) = ((MR_Box) (Y_10));
            }
            STATE_VARIABLE_ModeInfo_52_75 = STATE_VARIABLE_ModeInfo_40_40;
          }
          else
          {
            MR_Word Type_57;
            MR_Word Var_58;

            parse_tree__var_table__lookup_var_type_3_p_0(VarTable_17, X_9, &Type_57);
            succeeded = check_hlds__type_util__type_is_atomic_2_p_0(ModuleInfo0_55, Type_57);
            if (succeeded)
            {
              succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo0_55, Type_57, &Var_58);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              {
                Unification_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Unification_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Unification_56, 1) = ((MR_Box) (X_9));
                MR_hl_field(3, Unification_56, 2) = ((MR_Box) (Y_10));
              }
              STATE_VARIABLE_ModeInfo_52_75 = STATE_VARIABLE_ModeInfo_40_40;
            }
            else
            {
              MR_Word Var_74;
              MR_Word Var_85;

              Var_85 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_57, Var_85);
              if (succeeded)
              {
                Var_74 = (MR_Integer) 22;
                succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(UnifyGoalInfo0_13, Var_74);
              }
              if (succeeded)
              {
                {
                  Unification_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Unification_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Unification_56, 1) = ((MR_Box) (X_9));
                  MR_hl_field(3, Unification_56, 2) = ((MR_Box) (Y_10));
                }
                STATE_VARIABLE_ModeInfo_52_75 = STATE_VARIABLE_ModeInfo_40_40;
              }
              else
                check_hlds__modecheck_unify__modecheck_complicated_unify_12_p_0(X_9, Y_10, Type_57, InstOfX_19, InstOfY_20, UnifiedInst_24, Detism_25, UnifyContext_12, Unification0_11, &Unification_56, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_52_75);
            }
          }
        }
      }
    }
    succeeded = ((MR_tag((MR_Word) Unification_56)) == (MR_Integer) 2);
    if (succeeded)
    {
      AssignTarget_59 = ((MR_Word) ((MR_hl_field(2, Unification_56, (MR_Integer) 0))));
      AssignSource_60 = ((MR_Word) ((MR_hl_field(2, Unification_56, (MR_Integer) 1))));
      Var_76 = (MR_Integer) 1;
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_52_75, AssignTarget_59, &Var_86);
      succeeded = (Var_76 == Var_86);
    }
    if (succeeded)
    {
      MR_Word NonLocals_88;

      *UnifyGoalExpr_14 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_2[2]));
      NonLocals_88 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(UnifyGoalInfo0_13);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_88, AssignTarget_59);
      if (succeeded)
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_88, AssignSource_60);
      if (succeeded)
        *STATE_VARIABLE_ModeInfo_34 = STATE_VARIABLE_ModeInfo_52_75;
      else
        check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(STATE_VARIABLE_ModeInfo_52_75, STATE_VARIABLE_ModeInfo_34);
    }
    else
    {
      MR_Word TestVar1_61;
      MR_Word TestVar2_62;

      succeeded = (Detism_25 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Unification_56)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification_56, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          TestVar1_61 = ((MR_Word) ((MR_hl_field(3, Unification_56, (MR_Integer) 1))));
          TestVar2_62 = ((MR_Word) ((MR_hl_field(3, Unification_56, (MR_Integer) 2))));
        }
      }
      if (succeeded)
      {
        MR_Word NonLocals_90;

        *UnifyGoalExpr_14 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_2[2]));
        NonLocals_90 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(UnifyGoalInfo0_13);
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_90, TestVar1_61);
        if (succeeded)
          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_90, TestVar2_62);
        if (succeeded)
          *STATE_VARIABLE_ModeInfo_34 = STATE_VARIABLE_ModeInfo_52_75;
        else
          check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(STATE_VARIABLE_ModeInfo_52_75, STATE_VARIABLE_ModeInfo_34);
      }
      else
      {
        succeeded = (Detism_25 == (MR_Integer) 7);
        if (succeeded)
        {
          MR_Word ModuleInfo_63;
          MR_Word Globals_64;
          MR_Word WarnCannotSucceed_65;

          *UnifyGoalExpr_14 = (MR_Word) (MR_mkword(3, &check_hlds__modecheck_unify_scalar_common_1[7]));
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_52_75, &ModuleInfo_63);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_63, &Globals_64);
          libs__globals__lookup_bool_option_3_p_0(Globals_64, (MR_Integer) 26, &WarnCannotSucceed_65);
          switch (WarnCannotSucceed_65) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_ModeInfo_34 = STATE_VARIABLE_ModeInfo_52_75;
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredId_66;
                MR_Word PredInfo_67;
                MR_Word Origin_68;
                MR_Word ReportWarning_69;

                check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_52_75, &PredId_66);
                hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_63, PredId_66, &PredInfo_67);
                hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_67, &Origin_68);
                ReportWarning_69 = check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(Origin_68);
                switch (ReportWarning_69) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_ModeInfo_34 = STATE_VARIABLE_ModeInfo_52_75;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Warning_70;

                      {
                        Warning_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Warning_70, 0) = ((MR_Box) (X_9));
                        MR_hl_field(0, Warning_70, 1) = ((MR_Box) (Y_10));
                        MR_hl_field(0, Warning_70, 2) = ((MR_Box) (InstOfX_19));
                        MR_hl_field(0, Warning_70, 3) = ((MR_Box) (InstOfY_20));
                      }
                      check_hlds__mode_info__mode_info_warning_3_p_0(Warning_70, STATE_VARIABLE_ModeInfo_52_75, STATE_VARIABLE_ModeInfo_34);
                    }
                    break;
                }
              }
              break;
          }
        }
        else
        {
          MR_Word UnifyModes_71;
          MR_Word Var_84;

          {
            UnifyModes_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, UnifyModes_71, 0) = ((MR_Box) (InstOfX_19));
            MR_hl_field(0, UnifyModes_71, 1) = ((MR_Box) (UnifiedInst_24));
            MR_hl_field(0, UnifyModes_71, 2) = ((MR_Box) (InstOfY_20));
            MR_hl_field(0, UnifyModes_71, 3) = ((MR_Box) (UnifiedInst_24));
          }
          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_84, 0) = ((MR_Box) (Y_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *UnifyGoalExpr_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_84));
            MR_hl_field(1, base, 2) = ((MR_Box) (UnifyModes_71));
            MR_hl_field(1, base, 3) = ((MR_Box) (Unification_56));
            MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_12));
          }
          *STATE_VARIABLE_ModeInfo_34 = STATE_VARIABLE_ModeInfo_52_75;
        }
      }
    }
  }
  else
  {
    MR_Word WaitingVars_29;
    MR_Word ModeError_30;
    MR_Word Unification_31;
    MR_Word UnifyMode_32;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_ModeInfo_45_45;
    MR_Word STATE_VARIABLE_ModeInfo_47_47;
    MR_Word Var_51;

    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Y_10));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (X_9));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_42, &WaitingVars_29);
    {
      ModeError_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ModeError_30, 0) = ((MR_Box) (X_9));
      MR_hl_field(2, ModeError_30, 1) = ((MR_Box) (Y_10));
      MR_hl_field(2, ModeError_30, 2) = ((MR_Box) (InstOfX_19));
      MR_hl_field(2, ModeError_30, 3) = ((MR_Box) (InstOfY_20));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_29, ModeError_30, STATE_VARIABLE_ModeInfo_0_33, &STATE_VARIABLE_ModeInfo_45_45);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_9, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_45_45, &STATE_VARIABLE_ModeInfo_47_47);
    check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Y_10, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_47_47, STATE_VARIABLE_ModeInfo_34);
    {
      Unification_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Unification_31, 0) = ((MR_Box) (X_9));
      MR_hl_field(2, Unification_31, 1) = ((MR_Box) (Y_10));
    }
    {
      UnifyMode_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyMode_32, 0) = ((MR_Box) (InstOfX_19));
      MR_hl_field(0, UnifyMode_32, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(0, UnifyMode_32, 2) = ((MR_Box) (InstOfY_20));
      MR_hl_field(0, UnifyMode_32, 3) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (Y_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *UnifyGoalExpr_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (X_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_51));
      MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_32));
      MR_hl_field(1, base, 3) = ((MR_Box) (Unification_31));
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
  MR_Word ModuleInfo0_37;
  MR_Word STATE_VARIABLE_ModeInfo_70_70;
  MR_Word Var_26;
  MR_Word UnifyTypeInfoVars0_29;
  MR_Word Errors_38;

  {
    UnifyMode_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_24, 0) = ((MR_Box) (InitInstX_16));
    MR_hl_field(0, UnifyMode_24, 1) = ((MR_Box) (UnifiedInst_18));
    MR_hl_field(0, UnifyMode_24, 2) = ((MR_Box) (InitInstY_17));
    MR_hl_field(0, UnifyMode_24, 3) = ((MR_Box) (UnifiedInst_18));
  }
  parse_tree__prog_data__determinism_components_3_p_0(Detism_19, &CanFail_25, &Var_26);
  succeeded = ((((MR_tag((MR_Word) Unification0_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification0_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    UnifyTypeInfoVars0_29 = ((MR_Word) ((MR_hl_field(3, Unification0_21, (MR_Integer) 3))));
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
    STATE_VARIABLE_ModeInfo_70_70 = STATE_VARIABLE_ModeInfo_0_59;
  else
  {
    MR_Integer NumTypeInfoVars_33;
    MR_Word ExpectedInsts_34;
    MR_Word Var_67;
    MR_Word STATE_VARIABLE_ModeInfo_68_68;
    MR_Word STATE_VARIABLE_ModeInfo_69_69;
    MR_Word _InstVarSub_36;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_unify_scalar_common_1[0]), UnifyTypeInfoVars_30, &NumTypeInfoVars_33);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumTypeInfoVars_33, ((MR_Box) (MR_mkword(1, &check_hlds__modecheck_unify_scalar_common_1[8]))), &ExpectedInsts_34);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (UnifyContext_20));
    }
    check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_67, STATE_VARIABLE_ModeInfo_0_59, &STATE_VARIABLE_ModeInfo_68_68);
    check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(UnifyTypeInfoVars_30, ExpectedInsts_34, (MR_Integer) 0, &_InstVarSub_36, STATE_VARIABLE_ModeInfo_68_68, &STATE_VARIABLE_ModeInfo_69_69);
    check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_70_70);
  }
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &ModuleInfo0_37);
  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &Errors_38);
  succeeded = (Errors_38 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *STATE_VARIABLE_ModeInfo_60 = STATE_VARIABLE_ModeInfo_70_70;
  else
  {
    succeeded = ((MR_tag((MR_Word) Type_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo0_37, InitInstX_16);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word WaitingVars_43;
      MR_Word ModeError_44;

      WaitingVars_43 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_13);
      {
        ModeError_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, ModeError_44, 1) = ((MR_Box) (X_13));
        MR_hl_field(3, ModeError_44, 2) = ((MR_Box) (InitInstX_16));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_43, ModeError_44, STATE_VARIABLE_ModeInfo_70_70, STATE_VARIABLE_ModeInfo_60);
    }
    else
    {
      succeeded = ((MR_tag((MR_Word) Type_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo0_37, InitInstY_17);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word WaitingVars_76;
        MR_Word ModeError_77;

        WaitingVars_76 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Y_14);
        {
          ModeError_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ModeError_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, ModeError_77, 1) = ((MR_Box) (Y_14));
          MR_hl_field(3, ModeError_77, 2) = ((MR_Box) (InitInstY_17));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_76, ModeError_77, STATE_VARIABLE_ModeInfo_70_70, STATE_VARIABLE_ModeInfo_60);
      }
      else
      {
        MR_Word PredOrFunc_48;
        MR_Word Var_47;
        MR_Word Var_50;

        succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(Type_15, &Var_47, &PredOrFunc_48, &Var_50);
        if (succeeded)
        {
          MR_Word PredId_51;
          MR_Word PredInfo_52;
          MR_Word InstMap0_53;

          check_hlds__mode_info__mode_info_get_pred_id_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &PredId_51);
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_37, PredId_51, &PredInfo_52);
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &InstMap0_53);
          succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_52);
          if (!(succeeded))
            succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap0_53);
          if (succeeded)
            *STATE_VARIABLE_ModeInfo_60 = STATE_VARIABLE_ModeInfo_70_70;
          else
          {
            MR_Word Var_73;
            MR_Word WaitingVars_78;
            MR_Word ModeError_79;

            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_78);
            {
              Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_73, 0) = ((MR_Box) (Y_14));
            }
            {
              ModeError_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ModeError_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, ModeError_79, 1) = ((MR_Box) (X_13));
              MR_hl_field(3, ModeError_79, 2) = ((MR_Box) (Var_73));
              MR_hl_field(3, ModeError_79, 3) = ((MR_Box) (Type_15));
              MR_hl_field(3, ModeError_79, 4) = (MR_Box) ((MR_Unsigned) (PredOrFunc_48));
            }
            check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_78, ModeError_79, STATE_VARIABLE_ModeInfo_70_70, STATE_VARIABLE_ModeInfo_60);
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

            check_hlds__mode_info__mode_info_get_context_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &Context_55);
            check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &InstVarSet_56);
            {
              UnifyProcId_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, UnifyProcId_57, 0) = ((MR_Box) (TypeCtor_54));
              MR_hl_field(0, UnifyProcId_57, 1) = ((MR_Box) (UnifyMode_24));
            }
            check_hlds__proc_requests__request_unify_6_p_0(UnifyProcId_57, InstVarSet_56, Detism_19, Context_55, ModuleInfo0_37, &ModuleInfo_58);
            check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_58, STATE_VARIABLE_ModeInfo_70_70, STATE_VARIABLE_ModeInfo_60);
          }
          else
            *STATE_VARIABLE_ModeInfo_60 = STATE_VARIABLE_ModeInfo_70_70;
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
