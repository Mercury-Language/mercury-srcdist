/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2018-03-08
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


// :- module check_hlds.simplify.simplify_goal_call.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_goal_call__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_call.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
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
#include "libs.int_emu.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "transform_hlds.const_prop.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s {
  MR_bool check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded;
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_23;
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_25;
  jmp_buf check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0;
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_26;
  MR_Box check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_26;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__349__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_128);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word OrigArgTypes_5,
  MR_Word PredId_6);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(
  MR_Word STATE_VARIABLE_Arg_0_4,
  MR_Word * STATE_VARIABLE_Arg_5);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word GoalInfo0_17,
  MR_Word * ImprovedGoalInfo_18,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_54_52_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_54_52_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_51_50_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_51_50_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_49_54_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_49_54_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_56_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_56_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_36,
  MR_Word * STATE_VARIABLE_GoalInfo_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_36,
  MR_Word * STATE_VARIABLE_GoalInfo_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(
  MR_String ModuleName_10,
  MR_String Op_11,
  MR_Word X_12,
  MR_Integer IntConst_13,
  MR_Word Y_14,
  MR_Word * GoalExpr_15,
  MR_Word OrigGoalInfo_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(
  MR_Word Info_9,
  MR_String ModuleName_10,
  MR_String Op_11,
  MR_Word IsBuiltin_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Z_15,
  MR_Word * GoalExpr_16);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word Args_9,
  MR_Word * ImprovedGoalExpr_10,
  MR_Word STATE_VARIABLE_GoalInfo_0_32,
  MR_Word * STATE_VARIABLE_GoalInfo_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
  MR_Word TI_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_String Inequality_14,
  MR_Word Invert_15,
  MR_Word GoalInfo_16,
  MR_Word * ImprovedGoalExpr_17,
  MR_Word InstMap0_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Args_14,
  MR_Word IsBuiltin_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word GoalInfo_18,
  MR_Word NestedContext_19,
  MR_Word Common_20,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word CommonInfo_4,
  MR_Word ModuleInfo_5);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
  MR_Word PredId_6,
  MR_Word PredInfo_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[38][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[3][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[3][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[1][6];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[3][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_7[5][3];


/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0;
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[6];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[96];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_9_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0;
  const MR_Integer check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_9_0_s check_hlds__simplify__simplify_goal_call_vector_common_9[50];



static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[38][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "explicitly specifying a stream."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "could have an additional argument"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to later I/O operations."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "stream it specifies"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "infinite recursion."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: recursive call will lead to"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "leading to infinite recursion."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with exactly the same input arguments,"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the procedure will call itself"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "If this recursive call is executed,"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The call to"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "could be made redundant by explicitly passing"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: call to obsolete"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[24])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (((MR_Integer) 24 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_5[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[3][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 26)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 45)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[16])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "simplify_inline_builtin_inequality"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_7[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[6] = {
  /* row 0 */
  {
    (MR_String) "see",
    (MR_String) "input"
  },
  /* row 1 */
  {
    (MR_String) "seen",
    (MR_String) "input"
  },
  /* row 2 */
  {
    (MR_String) "set_input_stream",
    (MR_String) "input"
  },
  /* row 3 */
  {
    (MR_String) "set_output_stream",
    (MR_String) "output"
  },
  /* row 4 */
  {
    (MR_String) "tell",
    (MR_String) "output"
  },
  /* row 5 */
  {
    (MR_String) "told",
    (MR_String) "output"
  },
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[96] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     NULL },
  /* row 2 */   {     NULL },
  /* row 3 */   {     NULL },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     NULL },
  /* row 10 */   {     (MR_String) "<<" },
  /* row 11 */   {     (MR_String) "rem" },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     (MR_String) "/" },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     (MR_String) "rem_bits_per_int" },
  /* row 22 */   {     (MR_String) ">>" },
  /* row 23 */   {     NULL },
  /* row 24 */   {     (MR_String) "//" },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     (MR_String) "quot_bits_per_int" },
  /* row 28 */   {     NULL },
  /* row 29 */   {     (MR_String) "times_bits_per_int" },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     NULL },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     (MR_String) "uint32" },
  /* row 36 */   {     NULL },
  /* row 37 */   {     NULL },
  /* row 38 */   {     NULL },
  /* row 39 */   {     (MR_String) "int16" },
  /* row 40 */   {     (MR_String) "int" },
  /* row 41 */   {     NULL },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     NULL },
  /* row 45 */   {     (MR_String) "uint8" },
  /* row 46 */   {     NULL },
  /* row 47 */   {     NULL },
  /* row 48 */   {     (MR_String) "builtin" },
  /* row 49 */   {     NULL },
  /* row 50 */   {     NULL },
  /* row 51 */   {     NULL },
  /* row 52 */   {     (MR_String) "uint" },
  /* row 53 */   {     NULL },
  /* row 54 */   {     NULL },
  /* row 55 */   {     (MR_String) "int8" },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     NULL },
  /* row 59 */   {     NULL },
  /* row 60 */   {     (MR_String) "uint64" },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
  /* row 64 */   {     NULL },
  /* row 65 */   {     (MR_String) "uint16" },
  /* row 66 */   {     NULL },
  /* row 67 */   {     NULL },
  /* row 68 */   {     NULL },
  /* row 69 */   {     (MR_String) "int32" },
  /* row 70 */   {     NULL },
  /* row 71 */   {     NULL },
  /* row 72 */   {     NULL },
  /* row 73 */   {     NULL },
  /* row 74 */   {     NULL },
  /* row 75 */   {     NULL },
  /* row 76 */   {     NULL },
  /* row 77 */   {     NULL },
  /* row 78 */   {     NULL },
  /* row 79 */   {     NULL },
  /* row 80 */   {     (MR_String) "int64" },
  /* row 81 */   {     NULL },
  /* row 82 */   {     NULL },
  /* row 83 */   {     NULL },
  /* row 84 */   {     NULL },
  /* row 85 */   {     NULL },
  /* row 86 */   {     NULL },
  /* row 87 */   {     NULL },
  /* row 88 */   {     NULL },
  /* row 89 */   {     NULL },
  /* row 90 */   {     NULL },
  /* row 91 */   {     NULL },
  /* row 92 */   {     NULL },
  /* row 93 */   {     NULL },
  /* row 94 */   {     NULL },
  /* row 95 */   {     NULL },
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_9_0_s check_hlds__simplify__simplify_goal_call_vector_common_9[50] = {
  /* row 0 */
  {
    (MR_String) "/",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "//",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "<<",
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) ">>",
    (MR_Integer) 2
  },
  /* row 4 */
  {
    (MR_String) "rem",
    (MR_Integer) 3
  },
  /* row 5 */
  {
    (MR_String) "/",
    (MR_Integer) 0
  },
  /* row 6 */
  {
    (MR_String) "//",
    (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_String) "<<",
    (MR_Integer) 1
  },
  /* row 8 */
  {
    (MR_String) ">>",
    (MR_Integer) 2
  },
  /* row 9 */
  {
    (MR_String) "rem",
    (MR_Integer) 3
  },
  /* row 10 */
  {
    (MR_String) "/",
    (MR_Integer) 0
  },
  /* row 11 */
  {
    (MR_String) "//",
    (MR_Integer) 0
  },
  /* row 12 */
  {
    (MR_String) "<<",
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_String) ">>",
    (MR_Integer) 2
  },
  /* row 14 */
  {
    (MR_String) "rem",
    (MR_Integer) 3
  },
  /* row 15 */
  {
    (MR_String) "/",
    (MR_Integer) 0
  },
  /* row 16 */
  {
    (MR_String) "//",
    (MR_Integer) 0
  },
  /* row 17 */
  {
    (MR_String) "<<",
    (MR_Integer) 1
  },
  /* row 18 */
  {
    (MR_String) ">>",
    (MR_Integer) 2
  },
  /* row 19 */
  {
    (MR_String) "rem",
    (MR_Integer) 3
  },
  /* row 20 */
  {
    (MR_String) "/",
    (MR_Integer) 0
  },
  /* row 21 */
  {
    (MR_String) "//",
    (MR_Integer) 0
  },
  /* row 22 */
  {
    (MR_String) "<<",
    (MR_Integer) 1
  },
  /* row 23 */
  {
    (MR_String) ">>",
    (MR_Integer) 2
  },
  /* row 24 */
  {
    (MR_String) "rem",
    (MR_Integer) 3
  },
  /* row 25 */
  {
    (MR_String) "/",
    (MR_Integer) 0
  },
  /* row 26 */
  {
    (MR_String) "//",
    (MR_Integer) 0
  },
  /* row 27 */
  {
    (MR_String) "<<",
    (MR_Integer) 1
  },
  /* row 28 */
  {
    (MR_String) ">>",
    (MR_Integer) 2
  },
  /* row 29 */
  {
    (MR_String) "rem",
    (MR_Integer) 3
  },
  /* row 30 */
  {
    (MR_String) "/",
    (MR_Integer) 0
  },
  /* row 31 */
  {
    (MR_String) "//",
    (MR_Integer) 0
  },
  /* row 32 */
  {
    (MR_String) "<<",
    (MR_Integer) 1
  },
  /* row 33 */
  {
    (MR_String) ">>",
    (MR_Integer) 2
  },
  /* row 34 */
  {
    (MR_String) "rem",
    (MR_Integer) 3
  },
  /* row 35 */
  {
    (MR_String) "/",
    (MR_Integer) 0
  },
  /* row 36 */
  {
    (MR_String) "//",
    (MR_Integer) 0
  },
  /* row 37 */
  {
    (MR_String) "<<",
    (MR_Integer) 1
  },
  /* row 38 */
  {
    (MR_String) ">>",
    (MR_Integer) 2
  },
  /* row 39 */
  {
    (MR_String) "rem",
    (MR_Integer) 3
  },
  /* row 40 */
  {
    (MR_String) "/",
    (MR_Integer) 0
  },
  /* row 41 */
  {
    (MR_String) "//",
    (MR_Integer) 0
  },
  /* row 42 */
  {
    (MR_String) "<<",
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_String) ">>",
    (MR_Integer) 2
  },
  /* row 44 */
  {
    (MR_String) "rem",
    (MR_Integer) 3
  },
  /* row 45 */
  {
    (MR_String) "\100<",
    (MR_Integer) 0
  },
  /* row 46 */
  {
    (MR_String) "\100=<",
    (MR_Integer) 1
  },
  /* row 47 */
  {
    (MR_String) "\100>",
    (MR_Integer) 2
  },
  /* row 48 */
  {
    (MR_String) "\100>=",
    (MR_Integer) 3
  },
  /* row 49 */
  {
    (MR_String) "compare",
    (MR_Integer) 4
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__349__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_128)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(IOStateType_16, HeadVar__2_128);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word OrigArgTypes_5,
  MR_Word PredId_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_19_19;
    MR_Word PredInfo_7;
    MR_Word ArgTypes_8;
    MR_Word HeadArgType_9;
    MR_Word TailArgTypes_10;
    MR_Word HeadArgTypeSymName_11;
    MR_String HeadArgTypeName_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_String Var_16;
    MR_Word Var_17;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_6, &PredInfo_7);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_7, &ArgTypes_8);
    succeeded = ((MR_tag((MR_Word) ArgTypes_8)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      HeadArgType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_8, (MR_Integer) 0)));
      TailArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_8, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) HeadArgType_9)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadArgTypeSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadArgType_9, (MR_Integer) 0)));
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadArgType_9, (MR_Integer) 1)));
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadArgType_9, (MR_Integer) 2)));
        succeeded = (Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) HeadArgTypeSymName_11)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadArgTypeSymName_11, (MR_Integer) 0)));
              HeadArgTypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadArgTypeSymName_11, (MR_Integer) 1)));
              Var_17 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_15, Var_17);
              if (succeeded)
              {
                Var_16 = (MR_String) "stream";
                succeeded = mercury__string__suffix_2_p_0(HeadArgTypeName_12, Var_16);
                if (succeeded)
                {
                  TypeInfo_19_19 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[10];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (TailArgTypes_10)), ((MR_Box) (OrigArgTypes_5)));
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(
  MR_Word STATE_VARIABLE_Arg_0_4,
  MR_Word * STATE_VARIABLE_Arg_5)
{
  {
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Arg_0_4, (MR_Integer) 0)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Arg_0_4, (MR_Integer) 1)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Arg_0_4, (MR_Integer) 2)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Arg_0_4, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Arg_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_GoalInfo_0_42,
  MR_Word * STATE_VARIABLE_GoalInfo_43,
  MR_Word _NestedContext0_14,
  MR_Word InstMap0_15,
  MR_Word Common0_16,
  MR_Word * Common_17,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(GoalExpr0_11, GoalExpr_12, STATE_VARIABLE_GoalInfo_0_42, STATE_VARIABLE_GoalInfo_43, InstMap0_15, Common0_16, Common_17, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Arg_5;

    check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(((MR_Word) wrapper_arg_1), &conv2_STATE_VARIABLE_Arg_5);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Arg_5));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Arg_5;

    check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(((MR_Word) wrapper_arg_1), &conv1_STATE_VARIABLE_Arg_5);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Arg_5));
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_GoalInfo_0_42,
  MR_Word * STATE_VARIABLE_GoalInfo_43,
  MR_Word InstMap0_15,
  MR_Word Common0_16,
  MR_Word * Common_17,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  {
    MR_bool succeeded;
    MR_Word Attributes_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
    MR_Word PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
    MR_Integer ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3)));
    MR_Word Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4)));
    MR_Word ExtraArgs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 5)));
    MR_Word MaybeTraceRuntimeCond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 6)));
    MR_Word Impl_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 7)));
    MR_Word ImprovedGoalExpr_33;
    MR_Word STATE_VARIABLE_GoalInfo_47_47;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_Word TypeCtorInfo_57_57;
    MR_Word TypeInfo_58_58;
    MR_Word ModuleInfo_26;
    MR_Word PredInfo_27;
    MR_Word ModuleSymName_28;
    MR_String ModuleName_29;
    MR_String PredName_30;
    MR_Word ArgVars_32;
    MR_Word Var_46;
    MR_Integer ModeNum_31;

    succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(STATE_VARIABLE_Info_0_44);
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_44, &ModuleInfo_26);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_26, PredId_20, &PredInfo_27);
      ModuleSymName_28 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_27);
      succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_28, &ModuleName_29);
      if (succeeded)
      {
        succeeded = (ExtraArgs0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          PredName_30 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_27);
          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_21, &ModeNum_31);
          TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
          TypeInfo_58_58 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
          Var_46 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_7[1];
          ArgVars_32 = mercury__list__map_2_f_0(TypeCtorInfo_57_57, TypeInfo_58_58, Var_46, Args0_22);
          succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_15, ModuleName_29, PredName_30, ArgVars_32, &ImprovedGoalExpr_33, STATE_VARIABLE_GoalInfo_0_42, &STATE_VARIABLE_GoalInfo_47_47, STATE_VARIABLE_Info_0_44, &STATE_VARIABLE_Info_48_48);
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_48_48;
      *STATE_VARIABLE_GoalInfo_43 = STATE_VARIABLE_GoalInfo_47_47;
      *GoalExpr_12 = ImprovedGoalExpr_33;
      *Common_17 = Common0_16;
    }
    else
    {
      MR_Word BoxPolicy_34;
      MR_Word Args_35;
      MR_Word ExtraArgs_36;
      MR_Word GoalExpr1_37;
      MR_Word OptDuplicateCalls_38;

      BoxPolicy_34 = parse_tree__prog_data_foreign__get_box_policy_1_f_0(Attributes_19);
      switch (BoxPolicy_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;

            mercury__list__map_3_p_0(TypeCtorInfo_63_63, TypeCtorInfo_63_63, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_7[2], Args0_22, &Args_35);
            mercury__list__map_3_p_0(TypeCtorInfo_63_63, TypeCtorInfo_63_63, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_7[3], ExtraArgs0_23, &ExtraArgs_36);
            {
              GoalExpr1_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 1) = ((MR_Box) (Attributes_19));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 2) = ((MR_Box) (PredId_20));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 3) = ((MR_Box) (ProcId_21));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 4) = ((MR_Box) (Args_35));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 5) = ((MR_Box) (ExtraArgs_36));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 6) = ((MR_Box) (MaybeTraceRuntimeCond_24));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 7) = ((MR_Box) (Impl_25));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            Args_35 = Args0_22;
            ExtraArgs_36 = ExtraArgs0_23;
            GoalExpr1_37 = GoalExpr0_11;
          }
          break;
      }
      succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_0_44, &OptDuplicateCalls_38);
      if (succeeded)
        succeeded = (ExtraArgs_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        MR_Word Purity_39;
        MR_Word MaybeAssignsGoalExpr_40;
        MR_Word ArgVars_54;
        MR_Word AssignsGoalExpr_41;

        ArgVars_54 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0], (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_7[4], Args_35);
        Purity_39 = hlds__hlds_goal__goal_info_get_purity_1_f_0(STATE_VARIABLE_GoalInfo_0_42);
        check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_20, ProcId_21, ArgVars_54, Purity_39, STATE_VARIABLE_GoalInfo_0_42, GoalExpr1_37, &MaybeAssignsGoalExpr_40, Common0_16, Common_17, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
        succeeded = (OptDuplicateCalls_38 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeAssignsGoalExpr_40)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            AssignsGoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr_40, (MR_Integer) 0)));
        }
        if (succeeded)
          *GoalExpr_12 = AssignsGoalExpr_41;
        else
          *GoalExpr_12 = GoalExpr1_37;
      }
      else
      {
        *GoalExpr_12 = GoalExpr1_37;
        *Common_17 = Common0_16;
        *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
      }
      *STATE_VARIABLE_GoalInfo_43 = STATE_VARIABLE_GoalInfo_0_42;
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo_13,
  MR_Word * GoalInfo_4,
  MR_Word _NestedContext0_14,
  MR_Word _InstMap0_15,
  MR_Word Common0_16,
  MR_Word * Common_17,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(GoalExpr0_11, GoalExpr_12, GoalInfo_13, GoalInfo_4, Common0_16, Common_17, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo_13,
  MR_Word * GoalInfo_4,
  MR_Word Common0_16,
  MR_Word * Common_17,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_bool succeeded;
    MR_Word GenericCall_19;
    MR_Word Args_20;
    MR_Word Modes_21;
    MR_Word Det_23;
    MR_Word Var_22;

    *GoalInfo_4 = GoalInfo_13;
    GenericCall_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1)));
    Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2)));
    Modes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4)));
    Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 5)));
    switch (MR_tag((MR_Word) GenericCall_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Closure_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_19, (MR_Integer) 0)));
          MR_Word Purity_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_19, (MR_Integer) 1)));
          MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_19, (MR_Integer) 2)));
          MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GenericCall_19, (MR_Integer) 3)));
          MR_Word OptDuplicateCalls_28;

          succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_0_37, &OptDuplicateCalls_28);
          if (succeeded)
          {
            MR_Word MaybeAssignsGoalExpr_29;
            MR_Word AssignsGoalExpr_30;

            check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(Closure_24, Args_20, Modes_21, Det_23, Purity_25, GoalInfo_13, GoalExpr0_11, &MaybeAssignsGoalExpr_29, Common0_16, Common_17, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
            succeeded = (OptDuplicateCalls_28 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeAssignsGoalExpr_29)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                AssignsGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr_29, (MR_Integer) 0)));
            }
            if (succeeded)
              *GoalExpr_12 = AssignsGoalExpr_30;
            else
              *GoalExpr_12 = GoalExpr0_11;
          }
          else
          {
            *GoalExpr_12 = GoalExpr0_11;
            *Common_17 = Common0_16;
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          *GoalExpr_12 = GoalExpr0_11;
          *Common_17 = Common0_16;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
        }
        break;
      case (MR_Integer) 2:
        {
          check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
          *GoalExpr_12 = GoalExpr0_11;
          *Common_17 = Common0_16;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext_15,
  MR_Word InstMap0_16,
  MR_Word Common0_17,
  MR_Word * Common_18,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_bool succeeded;
    MR_Word PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 0)));
    MR_Integer ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 1)));
    MR_Word Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 2)));
    MR_Word IsBuiltin_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 3)));
    MR_Word ModuleInfo_26;
    MR_Word PredInfo_27;
    MR_Word ProcInfo_28;
    MR_Word ModuleSymName_31;
    MR_Word Globals_32;
    MR_Word STATE_VARIABLE_Info_44_44;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Word STATE_VARIABLE_Info_46_46;
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 5)));
    MR_String ModuleName_33;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_42, &ModuleInfo_26);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_26, PredId_20, ProcId_21, &PredInfo_27, &ProcInfo_28);
    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_implicit_stream_calls_1_p_0(STATE_VARIABLE_Info_0_42);
    if (succeeded)
    {
      MR_Word MaybeImplicitStreamSpec_29;

      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(ModuleInfo_26, PredId_20, PredInfo_27, GoalInfo0_13, &MaybeImplicitStreamSpec_29);
      if ((MaybeImplicitStreamSpec_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_Info_44_44 = STATE_VARIABLE_Info_0_42;
      else
      {
        MR_Word ImplicitStreamSpec_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeImplicitStreamSpec_29, (MR_Integer) 0)));

        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(ImplicitStreamSpec_30, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_44_44);
      }
    }
    else
      STATE_VARIABLE_Info_44_44 = STATE_VARIABLE_Info_0_42;
    check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(PredId_20, PredInfo_27, GoalInfo0_13, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_45_45);
    check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(PredId_20, ProcId_21, Args_22, IsBuiltin_23, PredInfo_27, ProcInfo_28, GoalInfo0_13, NestedContext_15, Common0_17, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_46_46);
    ModuleSymName_31 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_27);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_26, &Globals_32);
    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_31, &ModuleName_33);
    if (succeeded)
    {
      MR_String PredName_34;
      MR_Integer ModeNum_35;
      MR_Word VarTypes_36;
      MR_Word EvaluatedGoalExpr_37;
      MR_Word EvaluatedGoalInfo_38;

      PredName_34 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_27);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_21, &ModeNum_35);
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_46_46, &VarTypes_36);
      succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(STATE_VARIABLE_Info_46_46);
      if (succeeded)
        succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(Globals_32, VarTypes_36, InstMap0_16, ModuleName_33, PredName_34, ModeNum_35, Args_22, &EvaluatedGoalExpr_37, GoalInfo0_13, &EvaluatedGoalInfo_38);
      if (succeeded)
      {
        *GoalExpr_12 = EvaluatedGoalExpr_37;
        *GoalInfo_14 = EvaluatedGoalInfo_38;
        *Common_18 = Common0_17;
        check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_43);
      }
      else
      {
        MR_Word OptDupCalls_64;

        succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_46_46, &OptDupCalls_64);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_Info_48_48;
          MR_Word Purity_65;
          MR_Word MaybeAssignsGoalExpr0_66;
          MR_Word _AssignsGoalExpr0_67;

          Purity_65 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
          check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_20, ProcId_21, Args_22, Purity_65, GoalInfo0_13, GoalExpr0_11, &MaybeAssignsGoalExpr0_66, Common0_17, Common_18, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_48_48);
          succeeded = ((MR_tag((MR_Word) MaybeAssignsGoalExpr0_66)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            _AssignsGoalExpr0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr0_66, (MR_Integer) 0)));
            succeeded = (OptDupCalls_64 == (MR_Integer) 1);
          }
          if (succeeded)
          {
            *GoalExpr_12 = _AssignsGoalExpr0_67;
            *GoalInfo_14 = GoalInfo0_13;
            *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_48_48;
          }
          else
          {
            MR_Word ImprovedGoalExpr_40;
            MR_Word ImprovedGoalInfo_41;
            MR_Word STATE_VARIABLE_Info_49_49;

            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_16, ModuleName_33, PredName_34, Args_22, &ImprovedGoalExpr_40, GoalInfo0_13, &ImprovedGoalInfo_41, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_49_49);
            if (succeeded)
            {
              *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_49_49;
              *GoalExpr_12 = ImprovedGoalExpr_40;
              *GoalInfo_14 = ImprovedGoalInfo_41;
            }
            else
            {
              *GoalExpr_12 = GoalExpr0_11;
              *GoalInfo_14 = GoalInfo0_13;
              *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_48_48;
            }
          }
        }
        else
        {
          MR_Word ImprovedGoalExpr_86;
          MR_Word ImprovedGoalInfo_87;
          MR_Word STATE_VARIABLE_Info_49_88;

          *Common_18 = Common0_17;
          succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_16, ModuleName_33, PredName_34, Args_22, &ImprovedGoalExpr_86, GoalInfo0_13, &ImprovedGoalInfo_87, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_49_88);
          if (succeeded)
          {
            *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_49_88;
            *GoalExpr_12 = ImprovedGoalExpr_86;
            *GoalInfo_14 = ImprovedGoalInfo_87;
          }
          else
          {
            *GoalExpr_12 = GoalExpr0_11;
            *GoalInfo_14 = GoalInfo0_13;
            *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_46_46;
          }
        }
      }
    }
    else
    {
      MR_Word OptDupCalls_80;

      succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_46_46, &OptDupCalls_80);
      if (succeeded)
      {
        MR_Word Purity_81;
        MR_Word MaybeAssignsGoalExpr0_82;
        MR_Word _AssignsGoalExpr0_83;

        Purity_81 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
        check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_20, ProcId_21, Args_22, Purity_81, GoalInfo0_13, GoalExpr0_11, &MaybeAssignsGoalExpr0_82, Common0_17, Common_18, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_43);
        succeeded = ((MR_tag((MR_Word) MaybeAssignsGoalExpr0_82)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          _AssignsGoalExpr0_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr0_82, (MR_Integer) 0)));
          succeeded = (OptDupCalls_80 == (MR_Integer) 1);
        }
        if (succeeded)
        {
          *GoalExpr_12 = _AssignsGoalExpr0_83;
          *GoalInfo_14 = GoalInfo0_13;
        }
        else
        {
          *GoalExpr_12 = GoalExpr0_11;
          *GoalInfo_14 = GoalInfo0_13;
        }
      }
      else
      {
        *Common_18 = Common0_17;
        *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_46_46;
        *GoalExpr_12 = GoalExpr0_11;
        *GoalInfo_14 = GoalInfo0_13;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word GoalInfo0_17,
  MR_Word * ImprovedGoalInfo_18,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Info_41_41;
    MR_Integer slot_4 = ((MR_hash_string6(ModuleName_12)) & (MR_Integer) 63);
    MR_String str_5 = ((&check_hlds__simplify__simplify_goal_call_vector_common_8[32 + slot_4]))->check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;

    // hashed string jump switch
    // compute the hash value of the input string
    // no collisions; no hash chain loop
    // lookup the string for this hash slot
    // did we find a match?
    if ((((str_5 != NULL)) && ((strcmp(str_5, ModuleName_12) == 0))))
    {
      // we found a match; dispatch to the corresponding code
      switch (slot_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            // case "uint32"
            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_51_50_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
          }
          break;
        case (MR_Integer) 7:
          {
            // case "int16"
            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_49_54_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
          }
          break;
        case (MR_Integer) 8:
          {
            // case "int"
            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
          }
          break;
        case (MR_Integer) 13:
          {
            // case "uint8"
            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_56_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
          }
          break;
        case (MR_Integer) 16:
          {
            // case "builtin"
            {
              MR_Integer lo_0 = (MR_Integer) 0;
              MR_Integer hi_1 = (MR_Integer) 4;
              MR_Integer mid_2;
              MR_Integer result_3;

              // binary string jump switch
              do
              {
                mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
                result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[45 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
                if ((result_3 == (MR_Integer) 0))
                {
                  switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[45 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        // case "@<"
                        {
                          MR_Word TI_22;
                          MR_Word X_23;
                          MR_Word Y_24;
                          MR_Word Var_38;
                          MR_Word Var_39;
                          MR_Word Var_40;

                          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            TI_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
                            Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
                            succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              X_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0)));
                              Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1)));
                              succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Y_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0)));
                                Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1)));
                                succeeded = (Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_22, X_23, Y_24, (MR_String) "<", (MR_Integer) 0, GoalInfo0_17, ImprovedGoalExpr_16, InstMap0_11, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
                                  *ImprovedGoalInfo_18 = GoalInfo0_17;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        // case "@=<"
                        {
                          MR_Word TI_45;
                          MR_Word X_46;
                          MR_Word Y_47;
                          MR_Word Var_48;
                          MR_Word Var_49;
                          MR_Word Var_50;

                          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            TI_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
                            Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
                            succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              X_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0)));
                              Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 1)));
                              succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Y_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0)));
                                Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 1)));
                                succeeded = (Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_45, X_46, Y_47, (MR_String) ">", (MR_Integer) 1, GoalInfo0_17, ImprovedGoalExpr_16, InstMap0_11, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
                                  *ImprovedGoalInfo_18 = GoalInfo0_17;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        // case "@>"
                        {
                          MR_Word TI_53;
                          MR_Word X_54;
                          MR_Word Y_55;
                          MR_Word Var_56;
                          MR_Word Var_57;
                          MR_Word Var_58;

                          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            TI_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
                            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
                            succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              X_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0)));
                              Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 1)));
                              succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Y_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 0)));
                                Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 1)));
                                succeeded = (Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_53, X_54, Y_55, (MR_String) ">", (MR_Integer) 0, GoalInfo0_17, ImprovedGoalExpr_16, InstMap0_11, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
                                  *ImprovedGoalInfo_18 = GoalInfo0_17;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        // case "@>="
                        {
                          MR_Word TI_61;
                          MR_Word X_62;
                          MR_Word Y_63;
                          MR_Word Var_64;
                          MR_Word Var_65;
                          MR_Word Var_66;

                          succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            TI_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
                            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              X_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
                              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
                              succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_mktag((MR_Integer) 1)));
                              if (succeeded)
                              {
                                Y_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_65, (MR_Integer) 0)));
                                Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_65, (MR_Integer) 1)));
                                succeeded = (Var_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_61, X_62, Y_63, (MR_String) "<", (MR_Integer) 1, GoalInfo0_17, ImprovedGoalExpr_16, InstMap0_11, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
                                  *ImprovedGoalInfo_18 = GoalInfo0_17;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        // case "compare"
                        succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
                      }
                      break;
                  }
                  // jump out of search loop
                  goto label_0;
                }
                else
                if ((result_3 < (MR_Integer) 0))
                  hi_1 = (mid_2 - (MR_Integer) 1);
                else
                  lo_0 = (mid_2 + (MR_Integer) 1);
              }
              while ((lo_0 <= hi_1));
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 20:
          {
            // case "uint"
            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
          }
          break;
        case (MR_Integer) 23:
          {
            // case "int8"
            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_56_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
          }
          break;
        case (MR_Integer) 28:
          {
            // case "uint64"
            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_54_52_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
          }
          break;
        case (MR_Integer) 33:
          {
            // case "uint16"
            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_49_54_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
          }
          break;
        case (MR_Integer) 37:
          {
            // case "int32"
            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_51_50_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
          }
          break;
        case (MR_Integer) 48:
          {
            // case "int64"
            succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_54_52_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_41_41);
          }
          break;
      }
      // jump out of search loop
      goto label_1;
    }
    succeeded = MR_FALSE;
  label_1:;
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_26);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_54_52_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word X_19;
    MR_Word Y_20;
    MR_Word Z_21;
    MR_String Op_26;
    MR_Word Var_73;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 0)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1)));
          succeeded = (Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            // binary string jump switch
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 4;
            do
            {
              mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[40 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[40 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "/", "//"
                      {
                        MR_Word InstY_22;
                        uint64_t YVal_25;
                        MR_Word Var_68;
                        MR_Word Var_69;
                        MR_Word Var_70;
                        MR_Word Var_71;
                        MR_Word Var_72;
                        MR_Word Var_23;
                        MR_Word Var_24;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_22);
                        succeeded = ((((MR_tag((MR_Word) InstY_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 1)));
                          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 2)));
                          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));
                            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1)));
                            succeeded = (Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0)));
                              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1)));
                              succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                if (succeeded)
                                {
                                  YVal_25 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 1)));
                                  succeeded = (YVal_25 == UINT64_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_quotient";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "<<"
                      {
                        MR_Word Var_50;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_Word Var_53;
                        MR_Word Var_54;
                        MR_Integer Var_55;
                        MR_Integer Var_56;
                        MR_Word InstY_76;
                        MR_Integer YVal_77;
                        MR_Word Var_29;
                        MR_Word Var_30;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_76);
                        succeeded = ((((MR_tag((MR_Word) InstY_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 1)));
                          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 2)));
                          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
                            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
                            succeeded = (Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0)));
                              Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1)));
                              succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 1)));
                                  Var_55 = (MR_Integer) 0;
                                  succeeded = (YVal_77 >= Var_55);
                                  if (succeeded)
                                  {
                                    Var_56 = (MR_Integer) 64;
                                    succeeded = (YVal_77 < Var_56);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_left_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case ">>"
                      {
                        MR_Word Var_40;
                        MR_Word Var_41;
                        MR_Word Var_42;
                        MR_Word Var_43;
                        MR_Word Var_44;
                        MR_Integer Var_45;
                        MR_Integer Var_46;
                        MR_Word InstY_78;
                        MR_Integer YVal_79;
                        MR_Word Var_31;
                        MR_Word Var_32;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_78);
                        succeeded = ((((MR_tag((MR_Word) InstY_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 1)));
                          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 2)));
                          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
                            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
                            succeeded = (Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
                              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1)));
                              succeeded = (Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 1)));
                                  Var_45 = (MR_Integer) 0;
                                  succeeded = (YVal_79 >= Var_45);
                                  if (succeeded)
                                  {
                                    Var_46 = (MR_Integer) 64;
                                    succeeded = (YVal_79 < Var_46);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_right_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "rem"
                      {
                        MR_Word Var_60;
                        MR_Word Var_61;
                        MR_Word Var_62;
                        MR_Word Var_63;
                        MR_Word Var_64;
                        MR_Word InstY_74;
                        uint64_t YVal_75;
                        MR_Word Var_27;
                        MR_Word Var_28;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_74);
                        succeeded = ((((MR_tag((MR_Word) InstY_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 1)));
                          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 2)));
                          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1)));
                            succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
                              Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1)));
                              succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 14)));
                                if (succeeded)
                                {
                                  YVal_75 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                                  succeeded = (YVal_75 == UINT64_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_rem";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                }
                // jump out of search loop
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (mid_2 - (MR_Integer) 1);
              else
                lo_0 = (mid_2 + (MR_Integer) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
            if (succeeded)
            {
              Var_73 = (MR_Integer) 0;
              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_35, ModuleName_12, Op_26, Var_73, X_19, Y_20, Z_21, ImprovedGoalExpr_16);
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
              *STATE_VARIABLE_GoalInfo_34 = STATE_VARIABLE_GoalInfo_0_33;
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_54_52_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word X_19;
    MR_Word Y_20;
    MR_Word Z_21;
    MR_String Op_26;
    MR_Word Var_73;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 0)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1)));
          succeeded = (Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            // binary string jump switch
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 4;
            do
            {
              mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[35 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[35 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "/", "//"
                      {
                        MR_Word InstY_22;
                        int64_t YVal_25;
                        MR_Word Var_68;
                        MR_Word Var_69;
                        MR_Word Var_70;
                        MR_Word Var_71;
                        MR_Word Var_72;
                        MR_Word Var_23;
                        MR_Word Var_24;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_22);
                        succeeded = ((((MR_tag((MR_Word) InstY_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 1)));
                          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 2)));
                          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));
                            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1)));
                            succeeded = (Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0)));
                              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1)));
                              succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 0)))) == (MR_Integer) 13)));
                                if (succeeded)
                                {
                                  YVal_25 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 1)));
                                  succeeded = (YVal_25 == INT64_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_quotient";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "<<"
                      {
                        MR_Word Var_50;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_Word Var_53;
                        MR_Word Var_54;
                        MR_Integer Var_55;
                        MR_Integer Var_56;
                        MR_Word InstY_76;
                        MR_Integer YVal_77;
                        MR_Word Var_29;
                        MR_Word Var_30;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_76);
                        succeeded = ((((MR_tag((MR_Word) InstY_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 1)));
                          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 2)));
                          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
                            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
                            succeeded = (Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0)));
                              Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1)));
                              succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 1)));
                                  Var_55 = (MR_Integer) 0;
                                  succeeded = (YVal_77 >= Var_55);
                                  if (succeeded)
                                  {
                                    Var_56 = (MR_Integer) 64;
                                    succeeded = (YVal_77 < Var_56);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_left_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case ">>"
                      {
                        MR_Word Var_40;
                        MR_Word Var_41;
                        MR_Word Var_42;
                        MR_Word Var_43;
                        MR_Word Var_44;
                        MR_Integer Var_45;
                        MR_Integer Var_46;
                        MR_Word InstY_78;
                        MR_Integer YVal_79;
                        MR_Word Var_31;
                        MR_Word Var_32;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_78);
                        succeeded = ((((MR_tag((MR_Word) InstY_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 1)));
                          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 2)));
                          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
                            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
                            succeeded = (Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
                              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1)));
                              succeeded = (Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 1)));
                                  Var_45 = (MR_Integer) 0;
                                  succeeded = (YVal_79 >= Var_45);
                                  if (succeeded)
                                  {
                                    Var_46 = (MR_Integer) 64;
                                    succeeded = (YVal_79 < Var_46);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_right_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "rem"
                      {
                        MR_Word Var_60;
                        MR_Word Var_61;
                        MR_Word Var_62;
                        MR_Word Var_63;
                        MR_Word Var_64;
                        MR_Word InstY_74;
                        int64_t YVal_75;
                        MR_Word Var_27;
                        MR_Word Var_28;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_74);
                        succeeded = ((((MR_tag((MR_Word) InstY_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 1)));
                          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 2)));
                          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1)));
                            succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
                              Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1)));
                              succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 13)));
                                if (succeeded)
                                {
                                  YVal_75 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                                  succeeded = (YVal_75 == INT64_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_rem";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                }
                // jump out of search loop
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (mid_2 - (MR_Integer) 1);
              else
                lo_0 = (mid_2 + (MR_Integer) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
            if (succeeded)
            {
              Var_73 = (MR_Integer) 0;
              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_35, ModuleName_12, Op_26, Var_73, X_19, Y_20, Z_21, ImprovedGoalExpr_16);
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
              *STATE_VARIABLE_GoalInfo_34 = STATE_VARIABLE_GoalInfo_0_33;
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_51_50_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word X_19;
    MR_Word Y_20;
    MR_Word Z_21;
    MR_String Op_26;
    MR_Word Var_73;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 0)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1)));
          succeeded = (Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            // binary string jump switch
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 4;
            do
            {
              mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[30 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[30 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "/", "//"
                      {
                        MR_Word InstY_22;
                        uint32_t YVal_25;
                        MR_Word Var_68;
                        MR_Word Var_69;
                        MR_Word Var_70;
                        MR_Word Var_71;
                        MR_Word Var_72;
                        MR_Word Var_23;
                        MR_Word Var_24;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_22);
                        succeeded = ((((MR_tag((MR_Word) InstY_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 1)));
                          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 2)));
                          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));
                            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1)));
                            succeeded = (Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0)));
                              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1)));
                              succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 0)))) == (MR_Integer) 12)));
                                if (succeeded)
                                {
                                  YVal_25 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 1)));
                                  succeeded = (YVal_25 == UINT32_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_quotient";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "<<"
                      {
                        MR_Word Var_50;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_Word Var_53;
                        MR_Word Var_54;
                        MR_Integer Var_55;
                        MR_Integer Var_56;
                        MR_Word InstY_76;
                        MR_Integer YVal_77;
                        MR_Word Var_29;
                        MR_Word Var_30;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_76);
                        succeeded = ((((MR_tag((MR_Word) InstY_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 1)));
                          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 2)));
                          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
                            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
                            succeeded = (Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0)));
                              Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1)));
                              succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 1)));
                                  Var_55 = (MR_Integer) 0;
                                  succeeded = (YVal_77 >= Var_55);
                                  if (succeeded)
                                  {
                                    Var_56 = (MR_Integer) 32;
                                    succeeded = (YVal_77 < Var_56);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_left_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case ">>"
                      {
                        MR_Word Var_40;
                        MR_Word Var_41;
                        MR_Word Var_42;
                        MR_Word Var_43;
                        MR_Word Var_44;
                        MR_Integer Var_45;
                        MR_Integer Var_46;
                        MR_Word InstY_78;
                        MR_Integer YVal_79;
                        MR_Word Var_31;
                        MR_Word Var_32;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_78);
                        succeeded = ((((MR_tag((MR_Word) InstY_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 1)));
                          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 2)));
                          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
                            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
                            succeeded = (Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
                              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1)));
                              succeeded = (Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 1)));
                                  Var_45 = (MR_Integer) 0;
                                  succeeded = (YVal_79 >= Var_45);
                                  if (succeeded)
                                  {
                                    Var_46 = (MR_Integer) 32;
                                    succeeded = (YVal_79 < Var_46);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_right_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "rem"
                      {
                        MR_Word Var_60;
                        MR_Word Var_61;
                        MR_Word Var_62;
                        MR_Word Var_63;
                        MR_Word Var_64;
                        MR_Word InstY_74;
                        uint32_t YVal_75;
                        MR_Word Var_27;
                        MR_Word Var_28;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_74);
                        succeeded = ((((MR_tag((MR_Word) InstY_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 1)));
                          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 2)));
                          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1)));
                            succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
                              Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1)));
                              succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 12)));
                                if (succeeded)
                                {
                                  YVal_75 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                                  succeeded = (YVal_75 == UINT32_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_rem";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                }
                // jump out of search loop
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (mid_2 - (MR_Integer) 1);
              else
                lo_0 = (mid_2 + (MR_Integer) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
            if (succeeded)
            {
              Var_73 = (MR_Integer) 0;
              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_35, ModuleName_12, Op_26, Var_73, X_19, Y_20, Z_21, ImprovedGoalExpr_16);
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
              *STATE_VARIABLE_GoalInfo_34 = STATE_VARIABLE_GoalInfo_0_33;
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_51_50_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word X_19;
    MR_Word Y_20;
    MR_Word Z_21;
    MR_String Op_26;
    MR_Word Var_73;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 0)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1)));
          succeeded = (Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            // binary string jump switch
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 4;
            do
            {
              mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[25 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[25 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "/", "//"
                      {
                        MR_Word InstY_22;
                        int32_t YVal_25;
                        MR_Word Var_68;
                        MR_Word Var_69;
                        MR_Word Var_70;
                        MR_Word Var_71;
                        MR_Word Var_72;
                        MR_Word Var_23;
                        MR_Word Var_24;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_22);
                        succeeded = ((((MR_tag((MR_Word) InstY_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 1)));
                          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 2)));
                          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));
                            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1)));
                            succeeded = (Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0)));
                              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1)));
                              succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 0)))) == (MR_Integer) 11)));
                                if (succeeded)
                                {
                                  YVal_25 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 1)));
                                  succeeded = (YVal_25 == INT32_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_quotient";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "<<"
                      {
                        MR_Word Var_50;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_Word Var_53;
                        MR_Word Var_54;
                        MR_Integer Var_55;
                        MR_Integer Var_56;
                        MR_Word InstY_76;
                        MR_Integer YVal_77;
                        MR_Word Var_29;
                        MR_Word Var_30;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_76);
                        succeeded = ((((MR_tag((MR_Word) InstY_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 1)));
                          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 2)));
                          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
                            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
                            succeeded = (Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0)));
                              Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1)));
                              succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 1)));
                                  Var_55 = (MR_Integer) 0;
                                  succeeded = (YVal_77 >= Var_55);
                                  if (succeeded)
                                  {
                                    Var_56 = (MR_Integer) 32;
                                    succeeded = (YVal_77 < Var_56);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_left_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case ">>"
                      {
                        MR_Word Var_40;
                        MR_Word Var_41;
                        MR_Word Var_42;
                        MR_Word Var_43;
                        MR_Word Var_44;
                        MR_Integer Var_45;
                        MR_Integer Var_46;
                        MR_Word InstY_78;
                        MR_Integer YVal_79;
                        MR_Word Var_31;
                        MR_Word Var_32;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_78);
                        succeeded = ((((MR_tag((MR_Word) InstY_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 1)));
                          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 2)));
                          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
                            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
                            succeeded = (Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
                              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1)));
                              succeeded = (Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 1)));
                                  Var_45 = (MR_Integer) 0;
                                  succeeded = (YVal_79 >= Var_45);
                                  if (succeeded)
                                  {
                                    Var_46 = (MR_Integer) 32;
                                    succeeded = (YVal_79 < Var_46);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_right_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "rem"
                      {
                        MR_Word Var_60;
                        MR_Word Var_61;
                        MR_Word Var_62;
                        MR_Word Var_63;
                        MR_Word Var_64;
                        MR_Word InstY_74;
                        int32_t YVal_75;
                        MR_Word Var_27;
                        MR_Word Var_28;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_74);
                        succeeded = ((((MR_tag((MR_Word) InstY_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 1)));
                          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 2)));
                          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1)));
                            succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
                              Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1)));
                              succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 11)));
                                if (succeeded)
                                {
                                  YVal_75 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                                  succeeded = (YVal_75 == INT32_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_rem";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                }
                // jump out of search loop
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (mid_2 - (MR_Integer) 1);
              else
                lo_0 = (mid_2 + (MR_Integer) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
            if (succeeded)
            {
              Var_73 = (MR_Integer) 0;
              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_35, ModuleName_12, Op_26, Var_73, X_19, Y_20, Z_21, ImprovedGoalExpr_16);
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
              *STATE_VARIABLE_GoalInfo_34 = STATE_VARIABLE_GoalInfo_0_33;
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_49_54_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word X_19;
    MR_Word Y_20;
    MR_Word Z_21;
    MR_String Op_26;
    MR_Word Var_73;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 0)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1)));
          succeeded = (Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            // binary string jump switch
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 4;
            do
            {
              mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[20 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[20 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "/", "//"
                      {
                        MR_Word InstY_22;
                        uint16_t YVal_25;
                        MR_Word Var_68;
                        MR_Word Var_69;
                        MR_Word Var_70;
                        MR_Word Var_71;
                        MR_Word Var_72;
                        MR_Word Var_23;
                        MR_Word Var_24;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_22);
                        succeeded = ((((MR_tag((MR_Word) InstY_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 1)));
                          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 2)));
                          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));
                            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1)));
                            succeeded = (Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0)));
                              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1)));
                              succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 0)))) == (MR_Integer) 10)));
                                if (succeeded)
                                {
                                  YVal_25 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 1)));
                                  succeeded = (YVal_25 == UINT16_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_quotient";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "<<"
                      {
                        MR_Word Var_50;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_Word Var_53;
                        MR_Word Var_54;
                        MR_Integer Var_55;
                        MR_Integer Var_56;
                        MR_Word InstY_76;
                        MR_Integer YVal_77;
                        MR_Word Var_29;
                        MR_Word Var_30;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_76);
                        succeeded = ((((MR_tag((MR_Word) InstY_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 1)));
                          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 2)));
                          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
                            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
                            succeeded = (Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0)));
                              Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1)));
                              succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 1)));
                                  Var_55 = (MR_Integer) 0;
                                  succeeded = (YVal_77 >= Var_55);
                                  if (succeeded)
                                  {
                                    Var_56 = (MR_Integer) 16;
                                    succeeded = (YVal_77 < Var_56);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_left_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case ">>"
                      {
                        MR_Word Var_40;
                        MR_Word Var_41;
                        MR_Word Var_42;
                        MR_Word Var_43;
                        MR_Word Var_44;
                        MR_Integer Var_45;
                        MR_Integer Var_46;
                        MR_Word InstY_78;
                        MR_Integer YVal_79;
                        MR_Word Var_31;
                        MR_Word Var_32;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_78);
                        succeeded = ((((MR_tag((MR_Word) InstY_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 1)));
                          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 2)));
                          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
                            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
                            succeeded = (Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
                              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1)));
                              succeeded = (Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 1)));
                                  Var_45 = (MR_Integer) 0;
                                  succeeded = (YVal_79 >= Var_45);
                                  if (succeeded)
                                  {
                                    Var_46 = (MR_Integer) 16;
                                    succeeded = (YVal_79 < Var_46);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_right_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "rem"
                      {
                        MR_Word Var_60;
                        MR_Word Var_61;
                        MR_Word Var_62;
                        MR_Word Var_63;
                        MR_Word Var_64;
                        MR_Word InstY_74;
                        uint16_t YVal_75;
                        MR_Word Var_27;
                        MR_Word Var_28;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_74);
                        succeeded = ((((MR_tag((MR_Word) InstY_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 1)));
                          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 2)));
                          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1)));
                            succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
                              Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1)));
                              succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 10)));
                                if (succeeded)
                                {
                                  YVal_75 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                                  succeeded = (YVal_75 == UINT16_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_rem";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                }
                // jump out of search loop
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (mid_2 - (MR_Integer) 1);
              else
                lo_0 = (mid_2 + (MR_Integer) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
            if (succeeded)
            {
              Var_73 = (MR_Integer) 0;
              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_35, ModuleName_12, Op_26, Var_73, X_19, Y_20, Z_21, ImprovedGoalExpr_16);
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
              *STATE_VARIABLE_GoalInfo_34 = STATE_VARIABLE_GoalInfo_0_33;
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_49_54_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word X_19;
    MR_Word Y_20;
    MR_Word Z_21;
    MR_String Op_26;
    MR_Word Var_73;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 0)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1)));
          succeeded = (Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            // binary string jump switch
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 4;
            do
            {
              mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[15 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[15 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "/", "//"
                      {
                        MR_Word InstY_22;
                        int16_t YVal_25;
                        MR_Word Var_68;
                        MR_Word Var_69;
                        MR_Word Var_70;
                        MR_Word Var_71;
                        MR_Word Var_72;
                        MR_Word Var_23;
                        MR_Word Var_24;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_22);
                        succeeded = ((((MR_tag((MR_Word) InstY_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 1)));
                          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 2)));
                          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));
                            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1)));
                            succeeded = (Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0)));
                              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1)));
                              succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 0)))) == (MR_Integer) 9)));
                                if (succeeded)
                                {
                                  YVal_25 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 1)));
                                  succeeded = (YVal_25 == INT16_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_quotient";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "<<"
                      {
                        MR_Word Var_50;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_Word Var_53;
                        MR_Word Var_54;
                        MR_Integer Var_55;
                        MR_Integer Var_56;
                        MR_Word InstY_76;
                        MR_Integer YVal_77;
                        MR_Word Var_29;
                        MR_Word Var_30;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_76);
                        succeeded = ((((MR_tag((MR_Word) InstY_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 1)));
                          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 2)));
                          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
                            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
                            succeeded = (Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0)));
                              Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1)));
                              succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 1)));
                                  Var_55 = (MR_Integer) 0;
                                  succeeded = (YVal_77 >= Var_55);
                                  if (succeeded)
                                  {
                                    Var_56 = (MR_Integer) 16;
                                    succeeded = (YVal_77 < Var_56);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_left_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case ">>"
                      {
                        MR_Word Var_40;
                        MR_Word Var_41;
                        MR_Word Var_42;
                        MR_Word Var_43;
                        MR_Word Var_44;
                        MR_Integer Var_45;
                        MR_Integer Var_46;
                        MR_Word InstY_78;
                        MR_Integer YVal_79;
                        MR_Word Var_31;
                        MR_Word Var_32;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_78);
                        succeeded = ((((MR_tag((MR_Word) InstY_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 1)));
                          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 2)));
                          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
                            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
                            succeeded = (Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
                              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1)));
                              succeeded = (Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 1)));
                                  Var_45 = (MR_Integer) 0;
                                  succeeded = (YVal_79 >= Var_45);
                                  if (succeeded)
                                  {
                                    Var_46 = (MR_Integer) 16;
                                    succeeded = (YVal_79 < Var_46);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_right_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "rem"
                      {
                        MR_Word Var_60;
                        MR_Word Var_61;
                        MR_Word Var_62;
                        MR_Word Var_63;
                        MR_Word Var_64;
                        MR_Word InstY_74;
                        int16_t YVal_75;
                        MR_Word Var_27;
                        MR_Word Var_28;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_74);
                        succeeded = ((((MR_tag((MR_Word) InstY_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 1)));
                          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 2)));
                          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1)));
                            succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
                              Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1)));
                              succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 9)));
                                if (succeeded)
                                {
                                  YVal_75 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                                  succeeded = (YVal_75 == INT16_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_rem";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                }
                // jump out of search loop
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (mid_2 - (MR_Integer) 1);
              else
                lo_0 = (mid_2 + (MR_Integer) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
            if (succeeded)
            {
              Var_73 = (MR_Integer) 0;
              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_35, ModuleName_12, Op_26, Var_73, X_19, Y_20, Z_21, ImprovedGoalExpr_16);
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
              *STATE_VARIABLE_GoalInfo_34 = STATE_VARIABLE_GoalInfo_0_33;
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_56_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word X_19;
    MR_Word Y_20;
    MR_Word Z_21;
    MR_String Op_26;
    MR_Word Var_73;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 0)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1)));
          succeeded = (Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            // binary string jump switch
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 4;
            do
            {
              mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[10 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[10 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "/", "//"
                      {
                        MR_Word InstY_22;
                        uint8_t YVal_25;
                        MR_Word Var_68;
                        MR_Word Var_69;
                        MR_Word Var_70;
                        MR_Word Var_71;
                        MR_Word Var_72;
                        MR_Word Var_23;
                        MR_Word Var_24;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_22);
                        succeeded = ((((MR_tag((MR_Word) InstY_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 1)));
                          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 2)));
                          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));
                            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1)));
                            succeeded = (Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0)));
                              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1)));
                              succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                if (succeeded)
                                {
                                  YVal_25 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 1)));
                                  succeeded = (YVal_25 == UINT8_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_quotient";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "<<"
                      {
                        MR_Word Var_50;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_Word Var_53;
                        MR_Word Var_54;
                        MR_Integer Var_55;
                        MR_Integer Var_56;
                        MR_Word InstY_76;
                        MR_Integer YVal_77;
                        MR_Word Var_29;
                        MR_Word Var_30;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_76);
                        succeeded = ((((MR_tag((MR_Word) InstY_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 1)));
                          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 2)));
                          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
                            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
                            succeeded = (Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0)));
                              Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1)));
                              succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 1)));
                                  Var_55 = (MR_Integer) 0;
                                  succeeded = (YVal_77 >= Var_55);
                                  if (succeeded)
                                  {
                                    Var_56 = (MR_Integer) 8;
                                    succeeded = (YVal_77 < Var_56);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_left_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case ">>"
                      {
                        MR_Word Var_40;
                        MR_Word Var_41;
                        MR_Word Var_42;
                        MR_Word Var_43;
                        MR_Word Var_44;
                        MR_Integer Var_45;
                        MR_Integer Var_46;
                        MR_Word InstY_78;
                        MR_Integer YVal_79;
                        MR_Word Var_31;
                        MR_Word Var_32;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_78);
                        succeeded = ((((MR_tag((MR_Word) InstY_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 1)));
                          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 2)));
                          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
                            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
                            succeeded = (Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
                              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1)));
                              succeeded = (Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 1)));
                                  Var_45 = (MR_Integer) 0;
                                  succeeded = (YVal_79 >= Var_45);
                                  if (succeeded)
                                  {
                                    Var_46 = (MR_Integer) 8;
                                    succeeded = (YVal_79 < Var_46);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_right_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "rem"
                      {
                        MR_Word Var_60;
                        MR_Word Var_61;
                        MR_Word Var_62;
                        MR_Word Var_63;
                        MR_Word Var_64;
                        MR_Word InstY_74;
                        uint8_t YVal_75;
                        MR_Word Var_27;
                        MR_Word Var_28;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_74);
                        succeeded = ((((MR_tag((MR_Word) InstY_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 1)));
                          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 2)));
                          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1)));
                            succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
                              Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1)));
                              succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 8)));
                                if (succeeded)
                                {
                                  YVal_75 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                                  succeeded = (YVal_75 == UINT8_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_rem";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                }
                // jump out of search loop
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (mid_2 - (MR_Integer) 1);
              else
                lo_0 = (mid_2 + (MR_Integer) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
            if (succeeded)
            {
              Var_73 = (MR_Integer) 0;
              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_35, ModuleName_12, Op_26, Var_73, X_19, Y_20, Z_21, ImprovedGoalExpr_16);
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
              *STATE_VARIABLE_GoalInfo_34 = STATE_VARIABLE_GoalInfo_0_33;
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_56_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
    MR_Word X_19;
    MR_Word Y_20;
    MR_Word Z_21;
    MR_String Op_26;
    MR_Word Var_73;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 0)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1)));
          succeeded = (Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            // binary string jump switch
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 4;
            do
            {
              mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[5 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[5 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "/", "//"
                      {
                        MR_Word InstY_22;
                        int8_t YVal_25;
                        MR_Word Var_68;
                        MR_Word Var_69;
                        MR_Word Var_70;
                        MR_Word Var_71;
                        MR_Word Var_72;
                        MR_Word Var_23;
                        MR_Word Var_24;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_22);
                        succeeded = ((((MR_tag((MR_Word) InstY_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 1)));
                          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 2)));
                          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_22, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));
                            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1)));
                            succeeded = (Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0)));
                              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1)));
                              succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 0)))) == (MR_Integer) 7)));
                                if (succeeded)
                                {
                                  YVal_25 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_70, (MR_Integer) 1)));
                                  succeeded = (YVal_25 == INT8_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_quotient";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "<<"
                      {
                        MR_Word Var_50;
                        MR_Word Var_51;
                        MR_Word Var_52;
                        MR_Word Var_53;
                        MR_Word Var_54;
                        MR_Integer Var_55;
                        MR_Integer Var_56;
                        MR_Word InstY_76;
                        MR_Integer YVal_77;
                        MR_Word Var_29;
                        MR_Word Var_30;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_76);
                        succeeded = ((((MR_tag((MR_Word) InstY_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 1)));
                          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 2)));
                          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_76, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0)));
                            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1)));
                            succeeded = (Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0)));
                              Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1)));
                              succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 1)));
                                  Var_55 = (MR_Integer) 0;
                                  succeeded = (YVal_77 >= Var_55);
                                  if (succeeded)
                                  {
                                    Var_56 = (MR_Integer) 8;
                                    succeeded = (YVal_77 < Var_56);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_left_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case ">>"
                      {
                        MR_Word Var_40;
                        MR_Word Var_41;
                        MR_Word Var_42;
                        MR_Word Var_43;
                        MR_Word Var_44;
                        MR_Integer Var_45;
                        MR_Integer Var_46;
                        MR_Word InstY_78;
                        MR_Integer YVal_79;
                        MR_Word Var_31;
                        MR_Word Var_32;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_78);
                        succeeded = ((((MR_tag((MR_Word) InstY_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 1)));
                          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 2)));
                          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
                            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
                            succeeded = (Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
                              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1)));
                              succeeded = (Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 1)));
                                  Var_45 = (MR_Integer) 0;
                                  succeeded = (YVal_79 >= Var_45);
                                  if (succeeded)
                                  {
                                    Var_46 = (MR_Integer) 8;
                                    succeeded = (YVal_79 < Var_46);
                                    if (succeeded)
                                    {
                                      Op_26 = (MR_String) "unchecked_right_shift";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "rem"
                      {
                        MR_Word Var_60;
                        MR_Word Var_61;
                        MR_Word Var_62;
                        MR_Word Var_63;
                        MR_Word Var_64;
                        MR_Word InstY_74;
                        int8_t YVal_75;
                        MR_Word Var_27;
                        MR_Word Var_28;

                        X_19 = Var_81;
                        Y_20 = Var_83;
                        Z_21 = Var_85;
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_20, &InstY_74);
                        succeeded = ((((MR_tag((MR_Word) InstY_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 1)));
                          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 2)));
                          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_74, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1)));
                            succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
                              Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1)));
                              succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 0)))) == (MR_Integer) 7)));
                                if (succeeded)
                                {
                                  YVal_75 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_62, (MR_Integer) 1)));
                                  succeeded = (YVal_75 == INT8_C(0));
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_26 = (MR_String) "unchecked_rem";
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                }
                // jump out of search loop
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (mid_2 - (MR_Integer) 1);
              else
                lo_0 = (mid_2 + (MR_Integer) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
            if (succeeded)
            {
              Var_73 = (MR_Integer) 0;
              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_35, ModuleName_12, Op_26, Var_73, X_19, Y_20, Z_21, ImprovedGoalExpr_16);
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
              *STATE_VARIABLE_GoalInfo_34 = STATE_VARIABLE_GoalInfo_0_33;
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_36,
  MR_Word * STATE_VARIABLE_GoalInfo_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_19;
    MR_Word Globals_20;
    MR_Integer TargetBitsPerInt_21;
    MR_Word X_22;
    MR_Word Y_23;
    MR_Word Z_24;
    MR_String Op_29;
    MR_Word Var_42;
    MR_Word Var_77;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_38, &ModuleInfo_19);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_19, &Globals_20);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_20, (MR_Integer) 238, (MR_Integer) 0);
    if (succeeded)
    {
      libs__int_emu__target_bits_per_int_2_p_0(Globals_20, &Var_42);
      TargetBitsPerInt_21 = (MR_Integer) Var_42;
      succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
        Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 0)));
          Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_86, (MR_Integer) 0)));
            Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_86, (MR_Integer) 1)));
            succeeded = (Var_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              // binary string jump switch
              lo_0 = (MR_Integer) 0;
              hi_1 = (MR_Integer) 4;
              do
              {
                mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
                result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
                if ((result_3 == (MR_Integer) 0))
                {
                  switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        // case "/", "//"
                        {
                          MR_Word InstY_25;
                          MR_Unsigned YVal_28;
                          MR_Word Var_72;
                          MR_Word Var_73;
                          MR_Word Var_74;
                          MR_Word Var_75;
                          MR_Word Var_76;
                          MR_Word Var_26;
                          MR_Word Var_27;

                          X_22 = Var_85;
                          Y_23 = Var_87;
                          Z_24 = Var_89;
                          hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_23, &InstY_25);
                          succeeded = ((((MR_tag((MR_Word) InstY_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_25, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_25, (MR_Integer) 1)));
                            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_25, (MR_Integer) 2)));
                            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_25, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0)));
                              Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1)));
                              succeeded = (Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 0)));
                                Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 1)));
                                succeeded = (Var_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_28 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 1)));
                                    succeeded = (YVal_28 == 0U);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      Op_29 = (MR_String) "unchecked_quotient";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        // case "<<"
                        {
                          MR_Word Var_55;
                          MR_Word Var_56;
                          MR_Word Var_57;
                          MR_Word Var_58;
                          MR_Word Var_59;
                          MR_Integer Var_60;
                          MR_Word InstY_80;
                          MR_Integer YVal_81;
                          MR_Word Var_32;
                          MR_Word Var_33;

                          X_22 = Var_85;
                          Y_23 = Var_87;
                          Z_24 = Var_89;
                          hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_23, &InstY_80);
                          succeeded = ((((MR_tag((MR_Word) InstY_80)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_80, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_80, (MR_Integer) 1)));
                            Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_80, (MR_Integer) 2)));
                            Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_80, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 0)));
                              Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 1)));
                              succeeded = (Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 0)));
                                Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1)));
                                succeeded = (Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_57, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_57, (MR_Integer) 1)));
                                    Var_60 = (MR_Integer) 0;
                                    succeeded = (YVal_81 >= Var_60);
                                    if (succeeded)
                                    {
                                      succeeded = (YVal_81 < TargetBitsPerInt_21);
                                      if (succeeded)
                                      {
                                        Op_29 = (MR_String) "unchecked_left_shift";
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        // case ">>"
                        {
                          MR_Word Var_46;
                          MR_Word Var_47;
                          MR_Word Var_48;
                          MR_Word Var_49;
                          MR_Word Var_50;
                          MR_Integer Var_51;
                          MR_Word InstY_82;
                          MR_Integer YVal_83;
                          MR_Word Var_34;
                          MR_Word Var_35;

                          X_22 = Var_85;
                          Y_23 = Var_87;
                          Z_24 = Var_89;
                          hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_23, &InstY_82);
                          succeeded = ((((MR_tag((MR_Word) InstY_82)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_82, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_82, (MR_Integer) 1)));
                            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_82, (MR_Integer) 2)));
                            Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_82, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0)));
                              Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1)));
                              succeeded = (Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0)));
                                Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1)));
                                succeeded = (Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_48, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                  if (succeeded)
                                  {
                                    YVal_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_48, (MR_Integer) 1)));
                                    Var_51 = (MR_Integer) 0;
                                    succeeded = (YVal_83 >= Var_51);
                                    if (succeeded)
                                    {
                                      succeeded = (YVal_83 < TargetBitsPerInt_21);
                                      if (succeeded)
                                      {
                                        Op_29 = (MR_String) "unchecked_right_shift";
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        // case "rem"
                        {
                          MR_Word Var_64;
                          MR_Word Var_65;
                          MR_Word Var_66;
                          MR_Word Var_67;
                          MR_Word Var_68;
                          MR_Word InstY_78;
                          MR_Unsigned YVal_79;
                          MR_Word Var_30;
                          MR_Word Var_31;

                          X_22 = Var_85;
                          Y_23 = Var_87;
                          Z_24 = Var_89;
                          hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Y_23, &InstY_78);
                          succeeded = ((((MR_tag((MR_Word) InstY_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 1)));
                            Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 2)));
                            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_78, (MR_Integer) 3)));
                            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                            {
                              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
                              Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
                              succeeded = (Var_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 0)));
                                Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 1)));
                                succeeded = (Var_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                  if (succeeded)
                                  {
                                    YVal_79 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 1)));
                                    succeeded = (YVal_79 == 0U);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      Op_29 = (MR_String) "unchecked_rem";
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                  }
                  // jump out of search loop
                  goto label_0;
                }
                else
                if ((result_3 < (MR_Integer) 0))
                  hi_1 = (mid_2 - (MR_Integer) 1);
                else
                  lo_0 = (mid_2 + (MR_Integer) 1);
              }
              while ((lo_0 <= hi_1));
              succeeded = MR_FALSE;
            label_0:;
              if (succeeded)
              {
                Var_77 = (MR_Integer) 0;
                check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_38, ModuleName_12, Op_29, Var_77, X_22, Y_23, Z_24, ImprovedGoalExpr_16);
                *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
                *STATE_VARIABLE_GoalInfo_37 = STATE_VARIABLE_GoalInfo_0_36;
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word STATE_VARIABLE_GoalInfo_0_36,
  MR_Word * STATE_VARIABLE_GoalInfo_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_19;
    MR_Word Globals_20;
    MR_Integer TargetBitsPerInt_21;
    MR_Word Var_42;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Integer slot_0;
    MR_String str_1;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_38, &ModuleInfo_19);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_19, &Globals_20);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_20, (MR_Integer) 238, (MR_Integer) 0);
    if (succeeded)
    {
      libs__int_emu__target_bits_per_int_2_p_0(Globals_20, &Var_42);
      TargetBitsPerInt_21 = (MR_Integer) Var_42;
      succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
        Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_117)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_117, (MR_Integer) 0)));
          Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_117, (MR_Integer) 1)));
          // hashed string jump switch
          // compute the hash value of the input string
          slot_0 = ((MR_hash_string5(PredName_13)) & (MR_Integer) 31);
          // no collisions; no hash chain loop
          // lookup the string for this hash slot
          str_1 = ((&check_hlds__simplify__simplify_goal_call_vector_common_8[0 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;
          // did we find a match?
          if ((((str_1 != NULL)) && ((strcmp(str_1, PredName_13) == 0))))
          {
            // we found a match; dispatch to the corresponding code
            switch (slot_0) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 10:
                {
                  // case "<<"
                  {
                    MR_Word Var_55;
                    MR_Word Var_56;
                    MR_Word Var_57;
                    MR_Word Var_58;
                    MR_Word Var_59;
                    MR_Word Var_60;
                    MR_Integer Var_61;
                    MR_Word Var_62;
                    MR_String Op_107;
                    MR_Word Z_108;
                    MR_Word InstY_109;
                    MR_Integer YVal_110;
                    MR_Word Var_32;
                    MR_Word Var_33;

                    succeeded = ((MR_tag((MR_Word) Var_119)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Z_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_119, (MR_Integer) 0)));
                      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_119, (MR_Integer) 1)));
                      succeeded = (Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Var_120, &InstY_109);
                        succeeded = ((((MR_tag((MR_Word) InstY_109)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_109, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_109, (MR_Integer) 1)));
                          Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_109, (MR_Integer) 2)));
                          Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_109, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0)));
                            Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 1)));
                            succeeded = (Var_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0)));
                              Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1)));
                              succeeded = (Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_58, (MR_Integer) 1)));
                                  Var_61 = (MR_Integer) 0;
                                  succeeded = (YVal_110 >= Var_61);
                                  if (succeeded)
                                  {
                                    succeeded = (YVal_110 < TargetBitsPerInt_21);
                                    if (succeeded)
                                    {
                                      Op_107 = (MR_String) "unchecked_left_shift";
                                      Var_62 = (MR_Integer) 0;
                                      check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_38, ModuleName_12, Op_107, Var_62, Var_118, Var_120, Z_108, ImprovedGoalExpr_16);
                                      *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
                                      succeeded = MR_TRUE;
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
                break;
              case (MR_Integer) 11:
                {
                  // case "rem"
                  {
                    MR_Word Var_65;
                    MR_Word Var_66;
                    MR_Word Var_67;
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Word Var_70;
                    MR_Word Var_71;
                    MR_String Op_101;
                    MR_Word Z_102;
                    MR_Word InstY_103;
                    MR_Integer YVal_104;
                    MR_Word Var_30;
                    MR_Word Var_31;

                    succeeded = ((MR_tag((MR_Word) Var_119)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Z_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_119, (MR_Integer) 0)));
                      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_119, (MR_Integer) 1)));
                      succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Var_120, &InstY_103);
                        succeeded = ((((MR_tag((MR_Word) InstY_103)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_103, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_103, (MR_Integer) 1)));
                          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_103, (MR_Integer) 2)));
                          Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_103, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0)));
                            Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 1)));
                            succeeded = (Var_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_67, (MR_Integer) 0)));
                              Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_67, (MR_Integer) 1)));
                              succeeded = (Var_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_68, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_68, (MR_Integer) 1)));
                                  succeeded = (YVal_104 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_101 = (MR_String) "unchecked_rem";
                                    Var_71 = (MR_Integer) 0;
                                    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_38, ModuleName_12, Op_101, Var_71, Var_118, Var_120, Z_102, ImprovedGoalExpr_16);
                                    *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
                                    succeeded = MR_TRUE;
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
                break;
              case (MR_Integer) 14:
              case (MR_Integer) 24:
                {
                  // case "/", "//"
                  {
                    MR_Word Z_25;
                    MR_Word InstY_26;
                    MR_Integer YVal_29;
                    MR_Word Var_74;
                    MR_Word Var_75;
                    MR_Word Var_76;
                    MR_Word Var_77;
                    MR_Word Var_78;
                    MR_Word Var_79;
                    MR_Word Var_80;
                    MR_String Op_98;
                    MR_Word Var_27;
                    MR_Word Var_28;

                    succeeded = ((MR_tag((MR_Word) Var_119)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Z_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_119, (MR_Integer) 0)));
                      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_119, (MR_Integer) 1)));
                      succeeded = (Var_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Var_120, &InstY_26);
                        succeeded = ((((MR_tag((MR_Word) InstY_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_26, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_26, (MR_Integer) 1)));
                          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_26, (MR_Integer) 2)));
                          Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_26, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_75)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_75, (MR_Integer) 0)));
                            Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_75, (MR_Integer) 1)));
                            succeeded = (Var_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0)));
                              Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 1)));
                              succeeded = (Var_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_77)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_77, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_77, (MR_Integer) 1)));
                                  succeeded = (YVal_29 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    Op_98 = (MR_String) "unchecked_quotient";
                                    Var_80 = (MR_Integer) 0;
                                    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_38, ModuleName_12, Op_98, Var_80, Var_118, Var_120, Z_25, ImprovedGoalExpr_16);
                                    *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
                                    succeeded = MR_TRUE;
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
                break;
              case (MR_Integer) 21:
                {
                  // case "rem_bits_per_int"
                  {
                    MR_String Op_95;

                    succeeded = (Var_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Op_95 = (MR_String) "unchecked_rem";
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_12, Op_95, Var_118, TargetBitsPerInt_21, Var_120, ImprovedGoalExpr_16, STATE_VARIABLE_GoalInfo_0_36, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 22:
                {
                  // case ">>"
                  {
                    MR_Word Var_45;
                    MR_Word Var_46;
                    MR_Word Var_47;
                    MR_Word Var_48;
                    MR_Word Var_49;
                    MR_Word Var_50;
                    MR_Integer Var_51;
                    MR_Word Var_52;
                    MR_String Op_113;
                    MR_Word Z_114;
                    MR_Word InstY_115;
                    MR_Integer YVal_116;
                    MR_Word Var_34;
                    MR_Word Var_35;

                    succeeded = ((MR_tag((MR_Word) Var_119)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Z_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_119, (MR_Integer) 0)));
                      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_119, (MR_Integer) 1)));
                      succeeded = (Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_11, Var_120, &InstY_115);
                        succeeded = ((((MR_tag((MR_Word) InstY_115)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstY_115, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_115, (MR_Integer) 1)));
                          Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_115, (MR_Integer) 2)));
                          Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstY_115, (MR_Integer) 3)));
                          succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0)));
                            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1)));
                            succeeded = (Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0)));
                              Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1)));
                              succeeded = (Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_48, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YVal_116 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_48, (MR_Integer) 1)));
                                  Var_51 = (MR_Integer) 0;
                                  succeeded = (YVal_116 >= Var_51);
                                  if (succeeded)
                                  {
                                    succeeded = (YVal_116 < TargetBitsPerInt_21);
                                    if (succeeded)
                                    {
                                      Op_113 = (MR_String) "unchecked_right_shift";
                                      Var_52 = (MR_Integer) 0;
                                      check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_38, ModuleName_12, Op_113, Var_52, Var_118, Var_120, Z_114, ImprovedGoalExpr_16);
                                      *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
                                      succeeded = MR_TRUE;
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
                break;
              case (MR_Integer) 27:
                {
                  // case "quot_bits_per_int"
                  {
                    MR_String Op_24;

                    succeeded = (Var_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Op_24 = (MR_String) "unchecked_quotient";
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_12, Op_24, Var_118, TargetBitsPerInt_21, Var_120, ImprovedGoalExpr_16, STATE_VARIABLE_GoalInfo_0_36, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 29:
                {
                  // case "times_bits_per_int"
                  {
                    MR_String Op_92;

                    succeeded = (Var_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Op_92 = (MR_String) "*";
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_12, Op_92, Var_118, TargetBitsPerInt_21, Var_120, ImprovedGoalExpr_16, STATE_VARIABLE_GoalInfo_0_36, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
            }
            // jump out of search loop
            goto label_0;
          }
          succeeded = MR_FALSE;
        label_0:;
          if (succeeded)
          {
            *STATE_VARIABLE_GoalInfo_37 = STATE_VARIABLE_GoalInfo_0_36;
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(
  MR_String ModuleName_10,
  MR_String Op_11,
  MR_Word X_12,
  MR_Integer IntConst_13,
  MR_Word Y_14,
  MR_Word * GoalExpr_15,
  MR_Word OrigGoalInfo_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word TypeCtorInfo_44_68;
    MR_Word ConstVar_18;
    MR_Word ConstGoal_19;
    MR_Word OpGoalExpr_20;
    MR_Word OpGoal_21;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word VarSet0_36;
    MR_Word VarTypes0_37;
    MR_Word VarSet_38;
    MR_Word VarTypes_39;
    MR_Word ConstConsId_40;
    MR_Word Unification_41;
    MR_Word RHS_42;
    MR_Word Ground_44;
    MR_Word UnifyMode_45;
    MR_Word GoalExpr_46;
    MR_Word NonLocals_47;
    MR_Word InstMapDelta_48;
    MR_Word GoalInfo_49;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_Info_27_51;
    MR_Word Var_62;
    MR_Word Var_64;

    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_22, &VarSet0_36);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_22, &VarTypes0_37);
    TypeCtorInfo_44_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__new_var_3_p_0(TypeCtorInfo_44_68, &ConstVar_18, VarSet0_36, &VarSet_38);
    Var_50 = parse_tree__builtin_lib_types__int_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(ConstVar_18, Var_50, VarTypes0_37, &VarTypes_39);
    check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_38, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_27_51);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_39, STATE_VARIABLE_Info_27_51, STATE_VARIABLE_Info_23);
    {
      ConstConsId_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConstConsId_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ConstConsId_40, 1) = ((MR_Box) (IntConst_13));
    }
    {
      Unification_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_41, 0) = ((MR_Box) (ConstVar_18));
      MR_hl_field(MR_mktag(0), Unification_41, 1) = ((MR_Box) (ConstConsId_40));
      MR_hl_field(MR_mktag(0), Unification_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Unification_41, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Unification_41, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), Unification_41, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification_41, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      RHS_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_42, 0) = ((MR_Box) (ConstConsId_40));
      MR_hl_field(MR_mktag(1), RHS_42, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_42, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Ground_44 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Ground_44));
    }
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Ground_44));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Ground_44));
    }
    {
      UnifyMode_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_45, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), UnifyMode_45, 1) = ((MR_Box) (Var_64));
    }
    {
      GoalExpr_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_46, 0) = ((MR_Box) (ConstVar_18));
      MR_hl_field(MR_mktag(1), GoalExpr_46, 1) = ((MR_Box) (RHS_42));
      MR_hl_field(MR_mktag(1), GoalExpr_46, 2) = ((MR_Box) (UnifyMode_45));
      MR_hl_field(MR_mktag(1), GoalExpr_46, 3) = ((MR_Box) (Unification_41));
      MR_hl_field(MR_mktag(1), GoalExpr_46, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[37]));
    }
    NonLocals_47 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_44_68, ConstVar_18);
    InstMapDelta_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(ConstVar_18);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_47, InstMapDelta_48, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_49);
    {
      ConstGoal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConstGoal_19, 0) = ((MR_Box) (GoalExpr_46));
      MR_hl_field(MR_mktag(0), ConstGoal_19, 1) = ((MR_Box) (GoalInfo_49));
    }
    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(*STATE_VARIABLE_Info_23, ModuleName_10, Op_11, (MR_Integer) 0, X_12, ConstVar_18, Y_14, &OpGoalExpr_20);
    {
      OpGoal_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OpGoal_21, 0) = ((MR_Box) (OpGoalExpr_20));
      MR_hl_field(MR_mktag(0), OpGoal_21, 1) = ((MR_Box) (OrigGoalInfo_16));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (OpGoal_21));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (ConstGoal_19));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_15 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_27));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(
  MR_Word Info_9,
  MR_String ModuleName_10,
  MR_String Op_11,
  MR_Word IsBuiltin_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Z_15,
  MR_Word * GoalExpr_16)
{
  {
    MR_bool succeeded;
    MR_Word ModuleSymName_17;
    MR_Word OpSymName_18;
    MR_Word ModuleInfo_19;
    MR_Word PredTable_20;
    MR_Word OpPredIds_21;
    MR_Word OpPredId_23;
    MR_Integer OpProcId_25;
    MR_Word OpArgs_26;
    MR_Word Var_28;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word OpPredIdPrime_22;
    MR_Word Var_31;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (ModuleName_10));
    }
    ModuleSymName_17 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(Var_28);
    {
      OpSymName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpSymName_18, 0) = ((MR_Box) (ModuleSymName_17));
      MR_hl_field(MR_mktag(1), OpSymName_18, 1) = ((MR_Box) (Op_11));
    }
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_9, &ModuleInfo_19);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_19, &PredTable_20);
    hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredTable_20, (MR_Integer) 0, OpSymName_18, (MR_Integer) 2, &OpPredIds_21);
    succeeded = ((MR_tag((MR_Word) OpPredIds_21)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      OpPredIdPrime_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpPredIds_21, (MR_Integer) 0)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpPredIds_21, (MR_Integer) 1)));
      succeeded = (Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
      OpPredId_23 = OpPredIdPrime_22;
    else
    {
      MR_String Var_34;

      Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find ", Op_11);
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_call", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_make_binary_op_goal_expr\'/8", Var_34);
        return;
      }
    }
    hlds__hlds_pred__proc_id_to_int_2_p_1(&OpProcId_25, (MR_Integer) 0);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Z_15));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Y_14));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      OpArgs_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpArgs_26, 0) = ((MR_Box) (X_13));
      MR_hl_field(MR_mktag(1), OpArgs_26, 1) = ((MR_Box) (Var_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_16 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (OpPredId_23));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (OpProcId_25));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (OpArgs_26));
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (IsBuiltin_12));
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (OpSymName_18));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word Args_9,
  MR_Word * ImprovedGoalExpr_10,
  MR_Word STATE_VARIABLE_GoalInfo_0_32,
  MR_Word * STATE_VARIABLE_GoalInfo_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_86_86;
    MR_Word TypeCtorInfo_87_87;
    MR_Word ModuleInfo_13;
    MR_Word Globals_14;
    MR_Word Y_15;
    MR_Word X_16;
    MR_Word Res_17;
    MR_Word VarTypes_19;
    MR_Word Type_20;
    MR_Word Context_21;
    MR_Word CondEq_22;
    MR_Word CondLt_23;
    MR_Word Builtin_24;
    MR_Word TypeCtor_25;
    MR_Word ReturnEq_26;
    MR_Word ReturnLt_27;
    MR_Word ReturnGt_28;
    MR_Word NonLocals_29;
    MR_Word RestExpr_30;
    MR_Word Rest_31;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_String Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_String Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_String Var_65;
    MR_Integer Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_String Var_69;
    MR_Integer Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_String Var_73;
    MR_Integer Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_String Var_77;
    MR_Integer Var_78;
    MR_Word Var_79;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_18;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_13);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_13, &Globals_14);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_14, (MR_Integer) 281, (MR_Integer) 1);
    if (succeeded)
    {
      TypeInfo_86_86 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
      mercury__list__reverse_2_p_0(TypeInfo_86_86, Args_9, &Var_38);
      succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Y_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0)));
        Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Res_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
            Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
            check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_34, &VarTypes_19);
            hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Y_15, &Type_20);
            succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_13, Type_20);
            if (succeeded)
            {
              Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_32);
              Var_41 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              Var_42 = (MR_String) "builtin_compound_eq";
              Var_43 = (MR_Integer) 0;
              Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              Var_45 = (MR_Integer) 1;
              Var_46 = (MR_Integer) 0;
              Var_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              Var_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Y_15));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (X_16));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
              }
              Var_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
              hlds__goal_util__generate_simple_call_12_p_0(Var_41, Var_42, Var_43, Var_44, Var_45, Var_46, Var_47, Var_48, Var_49, ModuleInfo_13, Context_21, &CondEq_22);
              Var_52 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              Var_53 = (MR_String) "builtin_compound_lt";
              Var_54 = (MR_Integer) 0;
              Var_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              Var_56 = (MR_Integer) 1;
              Var_57 = (MR_Integer) 0;
              Var_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              Var_60 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
              hlds__goal_util__generate_simple_call_12_p_0(Var_52, Var_53, Var_54, Var_55, Var_56, Var_57, Var_47, Var_59, Var_60, ModuleInfo_13, Context_21, &CondLt_23);
              Builtin_24 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              Var_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              Var_65 = (MR_String) "comparison_result";
              Var_66 = (MR_Integer) 0;
              Var_69 = (MR_String) "=";
              Var_70 = (MR_Integer) 0;
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
              }
              {
                TypeCtor_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeCtor_25, 0) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(0), TypeCtor_25, 1) = ((MR_Box) (Var_66));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Builtin_24));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(3), Var_67, 2) = ((MR_Box) (Var_70));
                MR_hl_field(MR_mktag(3), Var_67, 3) = ((MR_Box) (TypeCtor_25));
              }
              hlds__make_goal__make_const_construction_4_p_0(Context_21, Res_17, Var_67, &ReturnEq_26);
              Var_73 = (MR_String) "<";
              Var_74 = (MR_Integer) 0;
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Builtin_24));
                MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
              }
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(3), Var_71, 2) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(3), Var_71, 3) = ((MR_Box) (TypeCtor_25));
              }
              hlds__make_goal__make_const_construction_4_p_0(Context_21, Res_17, Var_71, &ReturnLt_27);
              Var_77 = (MR_String) ">";
              Var_78 = (MR_Integer) 0;
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Builtin_24));
                MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(3), Var_75, 2) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(3), Var_75, 3) = ((MR_Box) (TypeCtor_25));
              }
              hlds__make_goal__make_const_construction_4_p_0(Context_21, Res_17, Var_75, &ReturnGt_28);
              TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Res_17));
                MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_47));
              }
              NonLocals_29 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_87_87, Var_79);
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_29, STATE_VARIABLE_GoalInfo_0_32, STATE_VARIABLE_GoalInfo_33);
              Var_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              Var_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
              {
                RestExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RestExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), RestExpr_30, 1) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(3), RestExpr_30, 2) = ((MR_Box) (CondLt_23));
                MR_hl_field(MR_mktag(3), RestExpr_30, 3) = ((MR_Box) (ReturnLt_27));
                MR_hl_field(MR_mktag(3), RestExpr_30, 4) = ((MR_Box) (ReturnGt_28));
              }
              {
                Rest_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Rest_31, 0) = ((MR_Box) (RestExpr_30));
                MR_hl_field(MR_mktag(0), Rest_31, 1) = ((MR_Box) (*STATE_VARIABLE_GoalInfo_33));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ImprovedGoalExpr_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_85));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CondEq_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ReturnEq_26));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Rest_31));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
  MR_Word TI_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_String Inequality_14,
  MR_Word Invert_15,
  MR_Word GoalInfo_16,
  MR_Word * ImprovedGoalExpr_17,
  MR_Word InstMap0_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_107_107;
    MR_Word VarSet0_20;
    MR_Word CmpRes_21;
    MR_Word VarSet_22;
    MR_Word VarTypes0_23;
    MR_Word VarTypes_24;
    MR_Word Context_25;
    MR_Word Args_26;
    MR_Word XInst_27;
    MR_Word YInst_28;
    MR_Word ModuleInfo_29;
    MR_Integer ModeNo_30;
    MR_Word Unique_31;
    MR_Word ArgInsts_32;
    MR_Word BuiltinModule_33;
    MR_Word CmpGoal0_34;
    MR_Word CmpExpr_35;
    MR_Word CmpInfo0_36;
    MR_Word CmpNonLocals0_37;
    MR_Word CmpNonLocals_38;
    MR_Word CmpInfo_39;
    MR_Word CmpGoal_40;
    MR_Word TypeCtor_41;
    MR_Word ConsId_42;
    MR_Word Bound_43;
    MR_Word UnifyMode_44;
    MR_Word RHS_45;
    MR_Word UKind_46;
    MR_Word UnifyExpr_48;
    MR_Word UnifyNonLocals0_49;
    MR_Word UnifyNonLocals_50;
    MR_Word UnifyInfo_51;
    MR_Word UnifyGoal_52;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_64;
    MR_Word Var_68;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_86;

    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_53, &VarSet0_20);
    TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    mercury__varset__new_var_3_p_0(TypeCtorInfo_107_107, &CmpRes_21, VarSet0_20, &VarSet_22);
    check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_22, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_55_55);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_55_55, &VarTypes0_23);
    Var_56 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(CmpRes_21, Var_56, VarTypes0_23, &VarTypes_24);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_24, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_54);
    Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Y_13));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (X_12));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (CmpRes_21));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      Args_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Args_26, 0) = ((MR_Box) (TI_11));
      MR_hl_field(MR_mktag(1), Args_26, 1) = ((MR_Box) (Var_58));
    }
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, X_12, &XInst_27);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, Y_13, &YInst_28);
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_54, &ModuleInfo_29);
    succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_29, XInst_27);
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_29, YInst_28);
      if (succeeded)
        ModeNo_30 = (MR_Integer) 1;
      else
        ModeNo_30 = (MR_Integer) 2;
    }
    else
    {
      succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_29, YInst_28);
      if (succeeded)
        ModeNo_30 = (MR_Integer) 3;
      else
        ModeNo_30 = (MR_Integer) 0;
    }
    Unique_31 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_7[0]);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (CmpRes_21));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Unique_31));
    }
    {
      ArgInsts_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgInsts_32, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), ArgInsts_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    BuiltinModule_33 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ModeNo_30));
    }
    Var_72 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(ArgInsts_32);
    hlds__goal_util__generate_simple_call_12_p_0(BuiltinModule_33, (MR_String) "compare", (MR_Integer) 0, Var_68, (MR_Integer) 0, (MR_Integer) 0, Args_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_72, ModuleInfo_29, Context_25, &CmpGoal0_34);
    CmpExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), CmpGoal0_34, (MR_Integer) 0)));
    CmpInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), CmpGoal0_34, (MR_Integer) 1)));
    CmpNonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CmpInfo0_36);
    parse_tree__set_of_var__insert_3_p_0(TypeCtorInfo_107_107, CmpRes_21, CmpNonLocals0_37, &CmpNonLocals_38);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(CmpNonLocals_38, CmpInfo0_36, &CmpInfo_39);
    {
      CmpGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CmpGoal_40, 0) = ((MR_Box) (CmpExpr_35));
      MR_hl_field(MR_mktag(0), CmpGoal_40, 1) = ((MR_Box) (CmpInfo_39));
    }
    Var_74 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      TypeCtor_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_41, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), TypeCtor_41, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (BuiltinModule_33));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Inequality_14));
    }
    {
      ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_42, 1) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(3), ConsId_42, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsId_42, 3) = ((MR_Box) (TypeCtor_41));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (ConsId_42));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Bound_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Bound_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Bound_43, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Bound_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(3), Bound_43, 3) = ((MR_Box) (Var_81));
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Unique_31));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (Bound_43));
    }
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Bound_43));
      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (Bound_43));
    }
    {
      UnifyMode_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_44, 0) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), UnifyMode_44, 1) = ((MR_Box) (Var_86));
    }
    {
      RHS_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_45, 0) = ((MR_Box) (ConsId_42));
      MR_hl_field(MR_mktag(1), RHS_45, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      UKind_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UKind_46, 0) = ((MR_Box) (CmpRes_21));
      MR_hl_field(MR_mktag(1), UKind_46, 1) = ((MR_Box) (ConsId_42));
      MR_hl_field(MR_mktag(1), UKind_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), UKind_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), UKind_46, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), UKind_46, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      UnifyExpr_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 0) = ((MR_Box) (CmpRes_21));
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 1) = ((MR_Box) (RHS_45));
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 2) = ((MR_Box) (UnifyMode_44));
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 3) = ((MR_Box) (UKind_46));
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[36]));
    }
    UnifyNonLocals0_49 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
    parse_tree__set_of_var__insert_3_p_0(TypeCtorInfo_107_107, CmpRes_21, UnifyNonLocals0_49, &UnifyNonLocals_50);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(UnifyNonLocals_50, GoalInfo_16, &UnifyInfo_51);
    {
      UnifyGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyGoal_52, 0) = ((MR_Box) (UnifyExpr_48));
      MR_hl_field(MR_mktag(0), UnifyGoal_52, 1) = ((MR_Box) (UnifyInfo_51));
    }
    switch (Invert_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_104;
          MR_Word Var_105;

          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (UnifyGoal_52));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (CmpGoal_40));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ImprovedGoalExpr_17 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_104));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_Word Var_101 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) UnifyGoal_52);

          {
            Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Var_101));
            MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (UnifyInfo_51));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (CmpGoal_40));
            MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ImprovedGoalExpr_17 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_98));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_26 = ((MR_Word) (env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_26);
    check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_23, (env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_26);
    if ((env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
    {
      (env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_23, (env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_26);
      (env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
      if ((env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
        check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_26, (env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_25, check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Args_14,
  MR_Word IsBuiltin_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word GoalInfo_18,
  MR_Word NestedContext_19,
  MR_Word Common_20,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s env;

    {
      MR_Word CurPredProcId_22;
      MR_Word HeadVars_24;
      MR_Word Purity_28;
      MR_Integer Var_37;
      MR_Word Var_84;
      MR_Integer Var_85;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_38;
      MR_Word Var_86;
      MR_Word Var_27;

      (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(STATE_VARIABLE_Info_0_35);
      if ((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
      {
        check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_35, &CurPredProcId_22);
        Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurPredProcId_22, (MR_Integer) 0)));
        Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CurPredProcId_22, (MR_Integer) 1)));
        (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_12, Var_84);
        if ((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
        {
          (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (ProcId_13 == Var_85);
          if ((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
          {
            (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (IsBuiltin_15 == (MR_Integer) 0);
            (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
            if ((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
            {
              Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), NestedContext_19, (MR_Integer) 0)));
              Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), NestedContext_19, (MR_Integer) 1)));
              Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), NestedContext_19, (MR_Integer) 2)));
              (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (Var_37 == (MR_Integer) 0);
              if ((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
              {
                check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_35, &(env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_23);
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_24);
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_17, &(env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_25);
                (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(Args_14, HeadVars_24, (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_25, Common_20, (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_23);
                if ((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                {
                  check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(&env);
                  (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
                  if ((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                  {
                    {
                      Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_38, 0) = NULL;
                    }
                    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_17, &Var_86);
                    (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(Var_38, Var_86);
                    (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
                    if ((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                    {
                      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_16, &Purity_28);
                      (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (Purity_28 == (MR_Integer) 2);
                      (env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ((env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
      {
        MR_Word GoalContext_29;
        MR_Word Msg_32;
        MR_Word Spec_34;
        MR_Word Var_78;

        GoalContext_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
        {
          Msg_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_32, 0) = ((MR_Box) (GoalContext_29));
          MR_hl_field(MR_mktag(0), Msg_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[35])));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Msg_32));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
          MR_hl_field(MR_mktag(0), Spec_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
          MR_hl_field(MR_mktag(0), Spec_34, 2) = ((MR_Box) (Var_78));
        }
        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_34, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
      }
      else
        *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
    MR_Word ArgX1_13;

    if (succeeded)
    {
      ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
      (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (ArgX1_13));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word CommonInfo_4,
  MR_Word ModuleInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = (HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    else
    {
      MR_Word Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word HeadVar_11;
      MR_Word HeadVars_12;
      MR_Word Mode_13;
      MR_Word Modes_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
          Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
          succeeded = check_hlds__mode_util__mode_is_input_2_p_0(ModuleInfo_5, Mode_13);
          if (succeeded)
            succeeded = check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(Arg_9, HeadVar_11, CommonInfo_4);
          else
            succeeded = MR_TRUE;
          if (succeeded)
          {
            // direct tailcall eliminated
            next_value_of_HeadVar__1_1 = Args_10;
            next_value_of_HeadVar__2_2 = HeadVars_12;
            next_value_of_HeadVar__3_3 = Modes_14;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
  MR_Word PredId_6,
  MR_Word PredInfo_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_14;
    MR_Word Markers_10;
    MR_Word ThisPredProcId_11;
    MR_Word ThisPredId_12;
    MR_Word ThisPredInfo_15;
    MR_Word ThisPredMarkers_16;
    MR_Word Var_25;
    MR_Integer _ThisProcId_13;
    MR_Word Var_26;

    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(STATE_VARIABLE_Info_0_23);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, &Markers_10);
      Var_25 = (MR_Integer) 5;
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_10, Var_25);
      if (succeeded)
      {
        check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_23, &ThisPredProcId_11);
        ThisPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ThisPredProcId_11, (MR_Integer) 0)));
        _ThisProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ThisPredProcId_11, (MR_Integer) 1)));
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_6, ThisPredId_12);
        succeeded = !(succeeded);
        if (succeeded)
        {
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_23, &ModuleInfo_14);
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, ThisPredId_12, &ThisPredInfo_15);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(ThisPredInfo_15, &ThisPredMarkers_16);
          Var_26 = (MR_Integer) 5;
          succeeded = hlds__hlds_pred__check_marker_2_p_0(ThisPredMarkers_16, Var_26);
          succeeded = !(succeeded);
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_56_56;
      MR_Word GoalContext_17;
      MR_Word PredPieces_18;
      MR_Word Pieces_19;
      MR_Word Msg_20;
      MR_Word Spec_22;
      MR_Word Var_32;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_53;

      GoalContext_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
      PredPieces_18 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_14, (MR_Integer) 0, PredId_6);
      TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      Var_32 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_56_56, PredPieces_18, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12]));
      Pieces_19 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_56_56, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[30]), Var_32);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Pieces_19));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (((MR_Integer) 45 | (((MR_Integer) 1 << (MR_Integer) 10)))));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_20, 0) = ((MR_Box) (GoalContext_17));
        MR_hl_field(MR_mktag(0), Msg_20, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Msg_20));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_53));
      }
      check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
    }
    else
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__349__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word PredInfo_8,
  MR_Word GoalInfo_9,
  MR_Word * MaybeSpec_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_11;
    MR_String PredName_12;
    MR_Word PredOrFunc_13;

    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_8, &ModuleName_11);
    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_8, &PredName_12);
    PredOrFunc_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_8);
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_9, (MR_Integer) 25);
    if (succeeded)
      *MaybeSpec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TypeCtorInfo_130_130;
      MR_Word TypeCtorInfo_132_132;
      MR_Word ArgTypes_14;
      MR_Word IOStateTypeSymName_15;
      MR_Word IOStateType_16;
      MR_Word IOStateArgTypes_17;
      MR_Word PredTable_20;
      MR_Word PredSymName_21;
      MR_Integer Arity_22;
      MR_Word PredIds_23;
      MR_Word OneExtraStreamArgPredIds_24;
      MR_Word Var_35;
      MR_String Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Integer Var_43;
      MR_Integer Var_44;
      MR_Word Var_45;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_25;
      MR_Word Var_26;

      succeeded = (PredOrFunc_13 == (MR_Integer) 0);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_8, &ArgTypes_14);
        Var_35 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        Var_36 = (MR_String) "state";
        Var_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        {
          IOStateTypeSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IOStateTypeSymName_15, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), IOStateTypeSymName_15, 1) = ((MR_Box) (Var_36));
        }
        {
          IOStateType_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IOStateType_16, 0) = ((MR_Box) (IOStateTypeSymName_15));
          MR_hl_field(MR_mktag(1), IOStateType_16, 1) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), IOStateType_16, 2) = ((MR_Box) (Var_38));
        }
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (IOStateType_16));
        }
        mercury__list__filter_3_p_0(TypeCtorInfo_130_130, Var_39, ArgTypes_14, &IOStateArgTypes_17);
        succeeded = ((MR_tag((MR_Word) IOStateArgTypes_17)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), IOStateArgTypes_17, (MR_Integer) 0)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), IOStateArgTypes_17, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1)));
            succeeded = (Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_6, &PredTable_20);
              {
                PredSymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PredSymName_21, 0) = ((MR_Box) (ModuleName_11));
                MR_hl_field(MR_mktag(1), PredSymName_21, 1) = ((MR_Box) (PredName_12));
              }
              mercury__list__length_2_p_0(TypeCtorInfo_130_130, ArgTypes_14, &Arity_22);
              Var_42 = (MR_Integer) 0;
              Var_44 = (MR_Integer) 1;
              Var_43 = (Arity_22 + Var_44);
              hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_20, Var_42, PredOrFunc_13, PredSymName_21, Var_43, &PredIds_23);
              TypeCtorInfo_132_132 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ModuleInfo_6));
                MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (ArgTypes_14));
              }
              mercury__list__filter_3_p_0(TypeCtorInfo_132_132, Var_45, PredIds_23, &OneExtraStreamArgPredIds_24);
              succeeded = ((MR_tag((MR_Word) OneExtraStreamArgPredIds_24)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), OneExtraStreamArgPredIds_24, (MR_Integer) 0)));
                Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), OneExtraStreamArgPredIds_24, (MR_Integer) 1)));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_133_133;
        MR_Word GoalContext_27;
        MR_Word PredPieces_28;
        MR_Word Pieces_29;
        MR_Word Msg_30;
        MR_Word Spec_32;
        MR_Word Var_51;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_75;

        GoalContext_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
        PredPieces_28 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
        TypeCtorInfo_133_133 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        Var_51 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_133_133, PredPieces_28, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[5]));
        Pieces_29 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_133_133, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[26]), Var_51);
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Pieces_29));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (((MR_Integer) 26 | (((MR_Integer) 1 << (MR_Integer) 10)))));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_30, 0) = ((MR_Box) (GoalContext_27));
          MR_hl_field(MR_mktag(0), Msg_30, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Msg_30));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
          MR_hl_field(MR_mktag(0), Spec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
          MR_hl_field(MR_mktag(0), Spec_32, 2) = ((MR_Box) (Var_75));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpec_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_32));
        }
      }
      else
      {
        MR_String Dir_33;
        MR_Word Var_135;
        MR_Integer lo_0;
        MR_Integer hi_1;
        MR_Integer mid_2;
        MR_Integer result_3;

        Var_135 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_11, Var_135);
        if (succeeded)
        {
          succeeded = (PredOrFunc_13 == (MR_Integer) 0);
          if (succeeded)
          {
            // binary string simple lookup switch
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 5;
            do
            {
              mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_12, ((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                Dir_33 = ((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
                succeeded = MR_TRUE;
                // jump out of search loop
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (mid_2 - (MR_Integer) 1);
              else
                lo_0 = (mid_2 + (MR_Integer) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
          }
        }
        if (succeeded)
        {
          MR_Word TypeCtorInfo_134_134;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_86;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_114;
          MR_Word GoalContext_116;
          MR_Word PredPieces_117;
          MR_Word Pieces_118;
          MR_Word Msg_119;
          MR_Word Spec_121;

          GoalContext_116 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
          PredPieces_117 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
          TypeCtorInfo_134_134 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Dir_33));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[9])));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[28])));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[27])));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
          }
          Var_82 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_134_134, PredPieces_117, Var_83);
          Pieces_118 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_134_134, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[26]), Var_82);
          {
            Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (Pieces_118));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (((MR_Integer) 26 | (((MR_Integer) 1 << (MR_Integer) 10)))));
            MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_104));
          }
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
            MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Msg_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_119, 0) = ((MR_Box) (GoalContext_116));
            MR_hl_field(MR_mktag(0), Msg_119, 1) = ((MR_Box) (Var_100));
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Msg_119));
            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
            MR_hl_field(MR_mktag(0), Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
            MR_hl_field(MR_mktag(0), Spec_121, 2) = ((MR_Box) (Var_114));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpec_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_121));
          }
        }
        else
          *MaybeSpec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
  }
}

void mercury__check_hlds__simplify__simplify_goal_call__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_call__init_type_tables(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_call__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_call__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_goal_call.
