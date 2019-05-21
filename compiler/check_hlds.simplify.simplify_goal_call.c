/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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


/* :- module check_hlds.simplify.simplify_goal_call. */
/* :- implementation. */

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
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
  MR_Word check_hlds__simplify__simplify_goal_call__IOStateType_16,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_128);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_3_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_4,
  MR_Word check_hlds__simplify__simplify_goal_call__OrigArgTypes_5,
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Arg_0_4,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Arg_5);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_call__wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_12,
  MR_String check_hlds__simplify__simplify_goal_call__ModuleName_13,
  MR_String check_hlds__simplify__simplify_goal_call__PredName_14,
  MR_Word check_hlds__simplify__simplify_goal_call__Args_16,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_18,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19,
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_9,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_10,
  MR_String check_hlds__simplify__simplify_goal_call__PredName_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Args_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_uint_binary_op_goal_expr_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_10,
  MR_String check_hlds__simplify__simplify_goal_call__PredName_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Args_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
  MR_Word check_hlds__simplify__simplify_goal_call__X_10,
  MR_Integer check_hlds__simplify__simplify_goal_call__IntConst_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_13,
  MR_Word check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__Args_9,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__TI_11,
  MR_Word check_hlds__simplify__simplify_goal_call__X_12,
  MR_Word check_hlds__simplify__simplify_goal_call__Y_13,
  MR_String check_hlds__simplify__simplify_goal_call__Inequality_14,
  MR_Word check_hlds__simplify__simplify_goal_call__Invert_15,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_16,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_18,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3(
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_12,
  MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_13,
  MR_Word check_hlds__simplify__simplify_goal_call__Args_14,
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_15,
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_16,
  MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_17,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_18,
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_19,
  MR_Word check_hlds__simplify__simplify_goal_call__Common_20,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6,
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_8,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[38][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[3][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[3][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[1][6];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[5][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_7[5][3];


/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0;
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[6];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[32];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_9_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0;
  const MR_Integer check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_9_0_s check_hlds__simplify__simplify_goal_call_vector_common_9[10];



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
    ((MR_Box) ((MR_Integer) 44)),
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

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[5][1] = {
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
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "uint"))
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

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[32] = {
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
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_9_0_s check_hlds__simplify__simplify_goal_call_vector_common_9[10] = {
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
    (MR_String) "\100<",
    (MR_Integer) 0
  },
  /* row 6 */
  {
    (MR_String) "\100=<",
    (MR_Integer) 1
  },
  /* row 7 */
  {
    (MR_String) "\100>",
    (MR_Integer) 2
  },
  /* row 8 */
  {
    (MR_String) "\100>=",
    (MR_Integer) 3
  },
  /* row 9 */
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
  MR_Word check_hlds__simplify__simplify_goal_call__IOStateType_16,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_128)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

    {
      check_hlds__simplify__simplify_goal_call__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__simplify__simplify_goal_call__IOStateType_16, check_hlds__simplify__simplify_goal_call__HeadVar__2_128);
    }
    return check_hlds__simplify__simplify_goal_call__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_3_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_4,
  MR_Word check_hlds__simplify__simplify_goal_call__OrigArgTypes_5,
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_19_19;
    MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7;
    MR_Word check_hlds__simplify__simplify_goal_call__ArgTypes_8;
    MR_Word check_hlds__simplify__simplify_goal_call__HeadArgType_9;
    MR_Word check_hlds__simplify__simplify_goal_call__TailArgTypes_10;
    MR_Word check_hlds__simplify__simplify_goal_call__HeadArgTypeSymName_11;
    MR_String check_hlds__simplify__simplify_goal_call__HeadArgTypeName_12;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_13;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_14;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_15;
    MR_String check_hlds__simplify__simplify_goal_call__Var_16;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_17;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_4, check_hlds__simplify__simplify_goal_call__PredId_6, &check_hlds__simplify__simplify_goal_call__PredInfo_7);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_7, &check_hlds__simplify__simplify_goal_call__ArgTypes_8);
    }
    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__ArgTypes_8)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        check_hlds__simplify__simplify_goal_call__HeadArgType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgTypes_8, (MR_Integer) 0)));
        check_hlds__simplify__simplify_goal_call__TailArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgTypes_8, (MR_Integer) 1)));
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadArgType_9)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            check_hlds__simplify__simplify_goal_call__HeadArgTypeSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadArgType_9, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_call__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadArgType_9, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_call__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadArgType_9, (MR_Integer) 2)));
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadArgTypeSymName_11)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_call__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadArgTypeSymName_11, (MR_Integer) 0)));
                        check_hlds__simplify__simplify_goal_call__HeadArgTypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadArgTypeSymName_11, (MR_Integer) 1)));
                        {
                          check_hlds__simplify__simplify_goal_call__Var_17 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__simplify_goal_call__Var_15, check_hlds__simplify__simplify_goal_call__Var_17);
                        }
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__Var_16 = (MR_String) "stream";
                            {
                              check_hlds__simplify__simplify_goal_call__succeeded = mercury__string__suffix_2_p_0(check_hlds__simplify__simplify_goal_call__HeadArgTypeName_12, check_hlds__simplify__simplify_goal_call__Var_16);
                            }
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__TypeInfo_19_19 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[10];
                                {
                                  check_hlds__simplify__simplify_goal_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_goal_call__TypeInfo_19_19, ((MR_Box) (check_hlds__simplify__simplify_goal_call__TailArgTypes_10)), ((MR_Box) (check_hlds__simplify__simplify_goal_call__OrigArgTypes_5)));
                                }
                              }
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__simplify__simplify_goal_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Arg_0_4,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Arg_5)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Arg_0_4, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_goal_call__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Arg_0_4, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_call__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Arg_0_4, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_goal_call__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Arg_0_4, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Arg_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43,
  MR_Word check_hlds__simplify__simplify_goal_call___NestedContext0_14,
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_15,
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

    {
      check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43, check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2;

    {
      check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2));
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_call__wrapper_arg_2)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_call__conv2_STATE_VARIABLE_Arg_5;

    {
      check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1), &check_hlds__simplify__simplify_goal_call__conv2_STATE_VARIABLE_Arg_5);
    }
    *check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv2_STATE_VARIABLE_Arg_5));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_call__wrapper_arg_2)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_call__conv1_STATE_VARIABLE_Arg_5;

    {
      check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1), &check_hlds__simplify__simplify_goal_call__conv1_STATE_VARIABLE_Arg_5);
    }
    *check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv1_STATE_VARIABLE_Arg_5));
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2;

    {
      check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2));
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43,
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_15,
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__Attributes_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_call__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
    MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_goal_call__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_goal_call__ExtraArgs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_goal_call__MaybeTraceRuntimeCond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_goal_call__Impl_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 7)));
    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49;
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58;
    MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_59_59;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_26;
    MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_27;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleSymName_28;
    MR_String check_hlds__simplify__simplify_goal_call__ModuleName_29;
    MR_String check_hlds__simplify__simplify_goal_call__PredName_30;
    MR_Word check_hlds__simplify__simplify_goal_call__ArgVars_32;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_46;
    MR_Integer check_hlds__simplify__simplify_goal_call__ModeNum_31;

    {
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        {
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
        }
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, &check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
        {
          check_hlds__simplify__simplify_goal_call__ModuleSymName_28 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
        {
          check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleSymName_28, &check_hlds__simplify__simplify_goal_call__ModuleName_29);
        }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__ExtraArgs0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                {
                  check_hlds__simplify__simplify_goal_call__PredName_30 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
                }
                {
                  hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__ModeNum_31);
                }
                check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
                check_hlds__simplify__simplify_goal_call__TypeInfo_59_59 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
                check_hlds__simplify__simplify_goal_call__Var_46 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_7[1];
                {
                  check_hlds__simplify__simplify_goal_call__ArgVars_32 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58, check_hlds__simplify__simplify_goal_call__TypeInfo_59_59, check_hlds__simplify__simplify_goal_call__Var_46, check_hlds__simplify__simplify_goal_call__Args0_22);
                }
                {
                  check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__ModuleName_29, check_hlds__simplify__simplify_goal_call__PredName_30, check_hlds__simplify__simplify_goal_call__ArgVars_32, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47, check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49);
                }
              }
          }
      }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49;
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47;
        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33;
        *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_call__BoxPolicy_34;
        MR_Word check_hlds__simplify__simplify_goal_call__Args_35;
        MR_Word check_hlds__simplify__simplify_goal_call__ExtraArgs_36;
        MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
        MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38;

        {
          check_hlds__simplify__simplify_goal_call__BoxPolicy_34 = parse_tree__prog_data_foreign__get_box_policy_1_f_0(check_hlds__simplify__simplify_goal_call__Attributes_19);
        }
        switch (check_hlds__simplify__simplify_goal_call__BoxPolicy_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;

              {
                mercury__list__map_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_64_64, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_64_64, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_7[2], check_hlds__simplify__simplify_goal_call__Args0_22, &check_hlds__simplify__simplify_goal_call__Args_35);
              }
              {
                mercury__list__map_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_64_64, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_64_64, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_7[3], check_hlds__simplify__simplify_goal_call__ExtraArgs0_23, &check_hlds__simplify__simplify_goal_call__ExtraArgs_36);
              }
              {
                check_hlds__simplify__simplify_goal_call__GoalExpr1_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Attributes_19));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__PredId_20));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ProcId_21));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Args_35));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ExtraArgs_36));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 6) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__MaybeTraceRuntimeCond_24));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 7) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Impl_25));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              check_hlds__simplify__simplify_goal_call__Args_35 = check_hlds__simplify__simplify_goal_call__Args0_22;
              check_hlds__simplify__simplify_goal_call__ExtraArgs_36 = check_hlds__simplify__simplify_goal_call__ExtraArgs0_23;
              check_hlds__simplify__simplify_goal_call__GoalExpr1_37 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
            }
            break;
        }
        {
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38);
        }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__ExtraArgs_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            MR_Word check_hlds__simplify__simplify_goal_call__Purity_39;
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40;
            MR_Word check_hlds__simplify__simplify_goal_call__ArgVars_55;
            MR_Word check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41;

            {
              check_hlds__simplify__simplify_goal_call__ArgVars_55 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0], (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_7[4], check_hlds__simplify__simplify_goal_call__Args_35);
            }
            {
              check_hlds__simplify__simplify_goal_call__Purity_39 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42);
            }
            {
              check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__ArgVars_55, check_hlds__simplify__simplify_goal_call__Purity_39, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, check_hlds__simplify__simplify_goal_call__GoalExpr1_37, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45);
            }
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38 == (MR_Integer) 1);
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40, (MR_Integer) 0)));
              }
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41;
            else
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
          }
        else
          {
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
            *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44;
          }
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42;
      }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_4,
  MR_Word check_hlds__simplify__simplify_goal_call___NestedContext0_14,
  MR_Word check_hlds__simplify__simplify_goal_call___InstMap0_15,
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

    {
      check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalInfo_4, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_4,
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__GenericCall_19;
    MR_Word check_hlds__simplify__simplify_goal_call__Args_20;
    MR_Word check_hlds__simplify__simplify_goal_call__Modes_21;
    MR_Word check_hlds__simplify__simplify_goal_call__Det_23;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_22;

    *check_hlds__simplify__simplify_goal_call__GoalInfo_4 = check_hlds__simplify__simplify_goal_call__GoalInfo_13;
    check_hlds__simplify__simplify_goal_call__GenericCall_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
    check_hlds__simplify__simplify_goal_call__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
    check_hlds__simplify__simplify_goal_call__Modes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
    check_hlds__simplify__simplify_goal_call__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
    check_hlds__simplify__simplify_goal_call__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__GenericCall_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__simplify_goal_call__Closure_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__simplify_goal_call__Purity_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__simplify_goal_call__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 2)));
          MR_Integer check_hlds__simplify__simplify_goal_call__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 3)));
          MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28;

          {
            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28);
          }
          if (check_hlds__simplify__simplify_goal_call__succeeded)
            {
              MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29;
              MR_Word check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30;

              {
                check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(check_hlds__simplify__simplify_goal_call__Closure_24, check_hlds__simplify__simplify_goal_call__Args_20, check_hlds__simplify__simplify_goal_call__Modes_21, check_hlds__simplify__simplify_goal_call__Det_23, check_hlds__simplify__simplify_goal_call__Purity_25, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
              }
              check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28 == (MR_Integer) 1);
              if (check_hlds__simplify__simplify_goal_call__succeeded)
                {
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29)) == (MR_mktag((MR_Integer) 1)));
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
                    check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29, (MR_Integer) 0)));
                }
              if (check_hlds__simplify__simplify_goal_call__succeeded)
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30;
              else
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
            }
          else
            {
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
              *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
              *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37;
            }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
          *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
          *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
          }
          *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
          *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_15,
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_17,
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_18,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_42,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_call__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_26;
    MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_27;
    MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_28;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleSymName_31;
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_32;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44_44;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_goal_call__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
    MR_String check_hlds__simplify__simplify_goal_call__ModuleName_33;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_42, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__PredInfo_27, &check_hlds__simplify__simplify_goal_call__ProcInfo_28);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_implicit_stream_calls_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_42);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        MR_Word check_hlds__simplify__simplify_goal_call__MaybeImplicitStreamSpec_29;

        {
          check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__MaybeImplicitStreamSpec_29);
        }
        if ((check_hlds__simplify__simplify_goal_call__MaybeImplicitStreamSpec_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44_44 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_42;
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_call__ImplicitStreamSpec_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeImplicitStreamSpec_29, (MR_Integer) 0)));

            {
              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(check_hlds__simplify__simplify_goal_call__ImplicitStreamSpec_30, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_42, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44_44);
            }
          }
      }
    else
      check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44_44 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_42;
    {
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44_44, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45);
    }
    {
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__IsBuiltin_23, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__ProcInfo_28, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__NestedContext_15, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46);
    }
    {
      check_hlds__simplify__simplify_goal_call__ModuleSymName_31 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, &check_hlds__simplify__simplify_goal_call__Globals_32);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleSymName_31, &check_hlds__simplify__simplify_goal_call__ModuleName_33);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        MR_String check_hlds__simplify__simplify_goal_call__PredName_34;
        MR_Integer check_hlds__simplify__simplify_goal_call__ModeNum_35;
        MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_36;
        MR_Word check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_37;
        MR_Word check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_38;

        {
          check_hlds__simplify__simplify_goal_call__PredName_34 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__ModeNum_35);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46, &check_hlds__simplify__simplify_goal_call__VarTypes_36);
        }
        {
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46);
        }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            check_hlds__simplify__simplify_goal_call__succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(check_hlds__simplify__simplify_goal_call__Globals_32, check_hlds__simplify__simplify_goal_call__VarTypes_36, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_33, check_hlds__simplify__simplify_goal_call__PredName_34, check_hlds__simplify__simplify_goal_call__ModeNum_35, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_37, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_38);
          }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_37;
            *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_38;
            *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
            {
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43);
            }
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_call__OptDupCalls_65;

            {
              check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46, &check_hlds__simplify__simplify_goal_call__OptDupCalls_65);
            }
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_48_48;
                MR_Word check_hlds__simplify__simplify_goal_call__Purity_66;
                MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_67;
                MR_Word check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_68;

                {
                  check_hlds__simplify__simplify_goal_call__Purity_66 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo0_13);
                }
                {
                  check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__Purity_66, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_67, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_48_48);
                }
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_67)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_67, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDupCalls_65 == (MR_Integer) 1);
                  }
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_68;
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_48_48;
                  }
                else
                  {
                    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_40;
                    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_41;
                    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_50_50;

                    {
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_33, check_hlds__simplify__simplify_goal_call__PredName_34, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_40, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_41, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_48_48, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_50_50);
                    }
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                      {
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_50_50;
                        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_40;
                        *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_41;
                      }
                    else
                      {
                        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
                        *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_48_48;
                      }
                  }
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_87;
                MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_88;
                MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_50_89;

                *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
                {
                  check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_33, check_hlds__simplify__simplify_goal_call__PredName_34, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_87, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_88, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_50_89);
                }
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_50_89;
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_87;
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_88;
                  }
                else
                  {
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46;
                  }
              }
          }
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_call__OptDupCalls_81;

        {
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46, &check_hlds__simplify__simplify_goal_call__OptDupCalls_81);
        }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            MR_Word check_hlds__simplify__simplify_goal_call__Purity_82;
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_83;
            MR_Word check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_84;

            {
              check_hlds__simplify__simplify_goal_call__Purity_82 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo0_13);
            }
            {
              check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__Purity_82, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_83, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43);
            }
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_83)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_83, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDupCalls_81 == (MR_Integer) 1);
              }
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_84;
                *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
              }
            else
              {
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
                *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
              }
          }
        else
          {
            *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_46_46;
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
            *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_12,
  MR_String check_hlds__simplify__simplify_goal_call__ModuleName_13,
  MR_String check_hlds__simplify__simplify_goal_call__PredName_14,
  MR_Word check_hlds__simplify__simplify_goal_call__Args_16,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_18,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19,
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_9,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_34_34;

    {
      check_hlds__simplify__simplify_goal_call__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__simplify__simplify_goal_call__InstMap0_9, check_hlds__simplify__simplify_goal_call__InstMap0_12);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_13, (MR_String) "int") == 0))
          {
            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__PredName_14, check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_34_34);
          }
        else
        if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_13, (MR_String) "uint") == 0))
          {
            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__PredName_14, check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_34_34);
          }
        else
        if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_13, (MR_String) "builtin") == 0))
          {
            MR_Integer check_hlds__simplify__simplify_goal_call__lo_0;
            MR_Integer check_hlds__simplify__simplify_goal_call__hi_1;
            MR_Integer check_hlds__simplify__simplify_goal_call__mid_2;
            MR_Integer check_hlds__simplify__simplify_goal_call__result_3;

            /* binary string jump switch */
            check_hlds__simplify__simplify_goal_call__lo_0 = (MR_Integer) 0;
            check_hlds__simplify__simplify_goal_call__hi_1 = (MR_Integer) 4;
            do
              {
                check_hlds__simplify__simplify_goal_call__mid_2 = (((check_hlds__simplify__simplify_goal_call__lo_0 + check_hlds__simplify__simplify_goal_call__hi_1)) / (MR_Integer) 2);
                check_hlds__simplify__simplify_goal_call__result_3 = MR_strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[5 + check_hlds__simplify__simplify_goal_call__mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
                if ((check_hlds__simplify__simplify_goal_call__result_3 == (MR_Integer) 0))
                  {
                    switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[5 + check_hlds__simplify__simplify_goal_call__mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          /* case "@<" */
                          {
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_23;
                            MR_Word check_hlds__simplify__simplify_goal_call__X_24;
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_25;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_31;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_32;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_33;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__TI_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_31)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_call__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_31, (MR_Integer) 0)));
                                    check_hlds__simplify__simplify_goal_call__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_31, (MR_Integer) 1)));
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_32)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Y_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_32, (MR_Integer) 0)));
                                        check_hlds__simplify__simplify_goal_call__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_32, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            {
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_23, check_hlds__simplify__simplify_goal_call__X_24, check_hlds__simplify__simplify_goal_call__Y_25, (MR_String) "<", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_34_34);
                                            }
                                            *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                                          }
                                      }
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          /* case "@=<" */
                          {
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_38;
                            MR_Word check_hlds__simplify__simplify_goal_call__X_39;
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_40;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_41;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_42;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_43;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__TI_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_41)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_call__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_41, (MR_Integer) 0)));
                                    check_hlds__simplify__simplify_goal_call__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_41, (MR_Integer) 1)));
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_42)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Y_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_42, (MR_Integer) 0)));
                                        check_hlds__simplify__simplify_goal_call__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_42, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            {
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_38, check_hlds__simplify__simplify_goal_call__X_39, check_hlds__simplify__simplify_goal_call__Y_40, (MR_String) ">", (MR_Integer) 1, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_34_34);
                                            }
                                            *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                                          }
                                      }
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          /* case "@>" */
                          {
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_46;
                            MR_Word check_hlds__simplify__simplify_goal_call__X_47;
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_48;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_49;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_50;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_51;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__TI_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_49)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_call__X_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_49, (MR_Integer) 0)));
                                    check_hlds__simplify__simplify_goal_call__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_49, (MR_Integer) 1)));
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_50)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Y_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_50, (MR_Integer) 0)));
                                        check_hlds__simplify__simplify_goal_call__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_50, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            {
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_46, check_hlds__simplify__simplify_goal_call__X_47, check_hlds__simplify__simplify_goal_call__Y_48, (MR_String) ">", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_34_34);
                                            }
                                            *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                                          }
                                      }
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          /* case "@>=" */
                          {
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_54;
                            MR_Word check_hlds__simplify__simplify_goal_call__X_55;
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_56;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_57;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_58;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_59;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__TI_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_57)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_call__X_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_57, (MR_Integer) 0)));
                                    check_hlds__simplify__simplify_goal_call__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_57, (MR_Integer) 1)));
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_58)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Y_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_58, (MR_Integer) 0)));
                                        check_hlds__simplify__simplify_goal_call__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_58, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            {
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_54, check_hlds__simplify__simplify_goal_call__X_55, check_hlds__simplify__simplify_goal_call__Y_56, (MR_String) "<", (MR_Integer) 1, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_34_34);
                                            }
                                            *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                                          }
                                      }
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          /* case "compare" */
                          {
                            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_34_34);
                          }
                        }
                        break;
                    }
                    /* jump out of search loop */
                    goto label_0;
                  }
                else
                if ((check_hlds__simplify__simplify_goal_call__result_3 < (MR_Integer) 0))
                  check_hlds__simplify__simplify_goal_call__hi_1 = (check_hlds__simplify__simplify_goal_call__mid_2 - (MR_Integer) 1);
                else
                  check_hlds__simplify__simplify_goal_call__lo_0 = (check_hlds__simplify__simplify_goal_call__mid_2 + (MR_Integer) 1);
              }
            while ((check_hlds__simplify__simplify_goal_call__lo_0 <= check_hlds__simplify__simplify_goal_call__hi_1));
            check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
          label_0:;
          }
        else
          check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            {
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_34_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27);
            }
            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
          }
      }
    return check_hlds__simplify__simplify_goal_call__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_117_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_10,
  MR_String check_hlds__simplify__simplify_goal_call__PredName_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Args_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_17;
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_18;
    MR_Integer check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_40;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_97;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_98;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_99;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_100;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_101;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_102;
    MR_Integer check_hlds__simplify__simplify_goal_call__lo_0;
    MR_Integer check_hlds__simplify__simplify_goal_call__hi_1;
    MR_Integer check_hlds__simplify__simplify_goal_call__mid_2;
    MR_Integer check_hlds__simplify__simplify_goal_call__result_3;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__Globals_18);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__simplify__simplify_goal_call__Globals_18, (MR_Integer) 233, (MR_Integer) 0);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        {
          libs__int_emu__target_bits_per_int_2_p_0(check_hlds__simplify__simplify_goal_call__Globals_18, &check_hlds__simplify__simplify_goal_call__Var_40);
        }
        check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19 = (MR_Integer) check_hlds__simplify__simplify_goal_call__Var_40;
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_13)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            check_hlds__simplify__simplify_goal_call__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_call__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_97)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_97, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_call__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_97, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_99)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_call__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_99, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_call__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_99, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                      {
                        /* binary string jump switch */
                        check_hlds__simplify__simplify_goal_call__lo_0 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__hi_1 = (MR_Integer) 4;
                        do
                          {
                            check_hlds__simplify__simplify_goal_call__mid_2 = (((check_hlds__simplify__simplify_goal_call__lo_0 + check_hlds__simplify__simplify_goal_call__hi_1)) / (MR_Integer) 2);
                            check_hlds__simplify__simplify_goal_call__result_3 = MR_strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, ((&check_hlds__simplify__simplify_goal_call_vector_common_9[0 + check_hlds__simplify__simplify_goal_call__mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0);
                            if ((check_hlds__simplify__simplify_goal_call__result_3 == (MR_Integer) 0))
                              {
                                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_9[0 + check_hlds__simplify__simplify_goal_call__mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_1) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      /* case "/", "//" */
                                      {
                                        MR_Word check_hlds__simplify__simplify_goal_call__InstY_23;
                                        MR_Unsigned check_hlds__simplify__simplify_goal_call__YVal_26;
                                        MR_String check_hlds__simplify__simplify_goal_call__Op_27;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_73;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_74;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_75;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_76;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_77;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_78;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_24;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_25;

                                        {
                                          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__Var_100, &check_hlds__simplify__simplify_goal_call__InstY_23);
                                        }
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_23, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_23, (MR_Integer) 2)));
                                            check_hlds__simplify__simplify_goal_call__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_23, (MR_Integer) 3)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_73)) == (MR_mktag((MR_Integer) 1)));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_73, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_73, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_74, (MR_Integer) 0)));
                                                    check_hlds__simplify__simplify_goal_call__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_74, (MR_Integer) 1)));
                                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_75, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__YVal_26 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_75, (MR_Integer) 1)));
                                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_26 == 0U);
                                                            check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
                                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                              {
                                                                check_hlds__simplify__simplify_goal_call__Op_27 = (MR_String) "unchecked_quotient";
                                                                check_hlds__simplify__simplify_goal_call__Var_78 = (MR_Integer) 0;
                                                                {
                                                                  check_hlds__simplify__simplify_goal_call__simplify_make_uint_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_27, check_hlds__simplify__simplify_goal_call__Var_78, check_hlds__simplify__simplify_goal_call__Var_98, check_hlds__simplify__simplify_goal_call__Var_100, check_hlds__simplify__simplify_goal_call__Var_102, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                                }
                                                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
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
                                      /* case "<<" */
                                      {
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_54;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_55;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_56;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_57;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_58;
                                        MR_Integer check_hlds__simplify__simplify_goal_call__Var_59;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_60;
                                        MR_Word check_hlds__simplify__simplify_goal_call__InstY_88;
                                        MR_Integer check_hlds__simplify__simplify_goal_call__YVal_89;
                                        MR_String check_hlds__simplify__simplify_goal_call__Op_90;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_30;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_31;

                                        {
                                          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__Var_100, &check_hlds__simplify__simplify_goal_call__InstY_88);
                                        }
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_88)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_88, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_88, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_88, (MR_Integer) 2)));
                                            check_hlds__simplify__simplify_goal_call__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_88, (MR_Integer) 3)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_54)) == (MR_mktag((MR_Integer) 1)));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_54, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_54, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_55, (MR_Integer) 0)));
                                                    check_hlds__simplify__simplify_goal_call__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_55, (MR_Integer) 1)));
                                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__YVal_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_56, (MR_Integer) 1)));
                                                            check_hlds__simplify__simplify_goal_call__Var_59 = (MR_Integer) 0;
                                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_89 >= check_hlds__simplify__simplify_goal_call__Var_59);
                                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                              {
                                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_89 < check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19);
                                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                                  {
                                                                    check_hlds__simplify__simplify_goal_call__Op_90 = (MR_String) "unchecked_left_shift";
                                                                    check_hlds__simplify__simplify_goal_call__Var_60 = (MR_Integer) 0;
                                                                    {
                                                                      check_hlds__simplify__simplify_goal_call__simplify_make_uint_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_90, check_hlds__simplify__simplify_goal_call__Var_60, check_hlds__simplify__simplify_goal_call__Var_98, check_hlds__simplify__simplify_goal_call__Var_100, check_hlds__simplify__simplify_goal_call__Var_102, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                                    }
                                                                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
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
                                      /* case ">>" */
                                      {
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_44;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_45;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_46;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_47;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_48;
                                        MR_Integer check_hlds__simplify__simplify_goal_call__Var_49;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_50;
                                        MR_Word check_hlds__simplify__simplify_goal_call__InstY_94;
                                        MR_Integer check_hlds__simplify__simplify_goal_call__YVal_95;
                                        MR_String check_hlds__simplify__simplify_goal_call__Op_96;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_32;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_33;

                                        {
                                          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__Var_100, &check_hlds__simplify__simplify_goal_call__InstY_94);
                                        }
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_94)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_94, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_94, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_94, (MR_Integer) 2)));
                                            check_hlds__simplify__simplify_goal_call__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_94, (MR_Integer) 3)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_44)) == (MR_mktag((MR_Integer) 1)));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_44, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_44, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_45, (MR_Integer) 0)));
                                                    check_hlds__simplify__simplify_goal_call__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_45, (MR_Integer) 1)));
                                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_46, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__YVal_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_46, (MR_Integer) 1)));
                                                            check_hlds__simplify__simplify_goal_call__Var_49 = (MR_Integer) 0;
                                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_95 >= check_hlds__simplify__simplify_goal_call__Var_49);
                                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                              {
                                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_95 < check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19);
                                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                                  {
                                                                    check_hlds__simplify__simplify_goal_call__Op_96 = (MR_String) "unchecked_right_shift";
                                                                    check_hlds__simplify__simplify_goal_call__Var_50 = (MR_Integer) 0;
                                                                    {
                                                                      check_hlds__simplify__simplify_goal_call__simplify_make_uint_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_96, check_hlds__simplify__simplify_goal_call__Var_50, check_hlds__simplify__simplify_goal_call__Var_98, check_hlds__simplify__simplify_goal_call__Var_100, check_hlds__simplify__simplify_goal_call__Var_102, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                                    }
                                                                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
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
                                      /* case "rem" */
                                      {
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_64;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_65;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_66;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_67;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_68;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_69;
                                        MR_Word check_hlds__simplify__simplify_goal_call__InstY_82;
                                        MR_Unsigned check_hlds__simplify__simplify_goal_call__YVal_83;
                                        MR_String check_hlds__simplify__simplify_goal_call__Op_84;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_28;
                                        MR_Word check_hlds__simplify__simplify_goal_call__Var_29;

                                        {
                                          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__Var_100, &check_hlds__simplify__simplify_goal_call__InstY_82);
                                        }
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_82)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_82, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_82, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_82, (MR_Integer) 2)));
                                            check_hlds__simplify__simplify_goal_call__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_82, (MR_Integer) 3)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_64)) == (MR_mktag((MR_Integer) 1)));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_64, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_64, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_65, (MR_Integer) 0)));
                                                    check_hlds__simplify__simplify_goal_call__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_65, (MR_Integer) 1)));
                                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_66, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__YVal_83 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_66, (MR_Integer) 1)));
                                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_83 == 0U);
                                                            check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
                                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                              {
                                                                check_hlds__simplify__simplify_goal_call__Op_84 = (MR_String) "unchecked_rem";
                                                                check_hlds__simplify__simplify_goal_call__Var_69 = (MR_Integer) 0;
                                                                {
                                                                  check_hlds__simplify__simplify_goal_call__simplify_make_uint_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_84, check_hlds__simplify__simplify_goal_call__Var_69, check_hlds__simplify__simplify_goal_call__Var_98, check_hlds__simplify__simplify_goal_call__Var_100, check_hlds__simplify__simplify_goal_call__Var_102, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                                }
                                                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
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
                                /* jump out of search loop */
                                goto label_0;
                              }
                            else
                            if ((check_hlds__simplify__simplify_goal_call__result_3 < (MR_Integer) 0))
                              check_hlds__simplify__simplify_goal_call__hi_1 = (check_hlds__simplify__simplify_goal_call__mid_2 - (MR_Integer) 1);
                            else
                              check_hlds__simplify__simplify_goal_call__lo_0 = (check_hlds__simplify__simplify_goal_call__mid_2 + (MR_Integer) 1);
                          }
                        while ((check_hlds__simplify__simplify_goal_call__lo_0 <= check_hlds__simplify__simplify_goal_call__hi_1));
                        check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
                      label_0:;
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                          {
                            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
                            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34;
                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__simplify__simplify_goal_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_uint_binary_op_goal_expr_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__UIntModuleSymName_15;
    MR_Word check_hlds__simplify__simplify_goal_call__OpSymName_16;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_17;
    MR_Word check_hlds__simplify__simplify_goal_call__PredTable_18;
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIds_19;
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredId_21;
    MR_Integer check_hlds__simplify__simplify_goal_call__OpProcId_23;
    MR_Word check_hlds__simplify__simplify_goal_call__OpArgs_24;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_35;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_36;
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_30;

    {
      check_hlds__simplify__simplify_goal_call__UIntModuleSymName_15 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_5[4]);
    }
    {
      check_hlds__simplify__simplify_goal_call__OpSymName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_16, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UIntModuleSymName_15));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_16, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Op_9));
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__Info_8, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__PredTable_18);
    }
    {
      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(check_hlds__simplify__simplify_goal_call__PredTable_18, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__OpSymName_16, (MR_Integer) 2, &check_hlds__simplify__simplify_goal_call__OpPredIds_19);
    }
    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__OpPredIds_19)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 0)));
        check_hlds__simplify__simplify_goal_call__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 1)));
        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      check_hlds__simplify__simplify_goal_call__OpPredId_21 = check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
    else
      {
        MR_String check_hlds__simplify__simplify_goal_call__Var_33;

        {
          check_hlds__simplify__simplify_goal_call__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find ", check_hlds__simplify__simplify_goal_call__Op_9);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_call", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_make_uint_binary_op_goal_expr\'/7", check_hlds__simplify__simplify_goal_call__Var_33);
          return;
        }
      }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_1(&check_hlds__simplify__simplify_goal_call__OpProcId_23, (MR_Integer) 0);
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Z_13));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_12));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_35, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_36));
    }
    {
      check_hlds__simplify__simplify_goal_call__OpArgs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_11));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__simplify__simplify_goal_call__GoalExpr_14 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpPredId_21));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpProcId_23));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpArgs_24));
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IsBuiltin_10));
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpSymName_16));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_10,
  MR_String check_hlds__simplify__simplify_goal_call__PredName_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Args_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_17;
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_18;
    MR_Integer check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_40;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_115;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_116;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_117;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_118;
    MR_Integer check_hlds__simplify__simplify_goal_call__slot_0;
    MR_String check_hlds__simplify__simplify_goal_call__str_1;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__Globals_18);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__simplify__simplify_goal_call__Globals_18, (MR_Integer) 233, (MR_Integer) 0);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        {
          libs__int_emu__target_bits_per_int_2_p_0(check_hlds__simplify__simplify_goal_call__Globals_18, &check_hlds__simplify__simplify_goal_call__Var_40);
        }
        check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19 = (MR_Integer) check_hlds__simplify__simplify_goal_call__Var_40;
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_13)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            check_hlds__simplify__simplify_goal_call__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_call__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_115)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_115, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_call__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_115, (MR_Integer) 1)));
                /* hashed string jump switch */
                /* compute the hash value of the input string */
                check_hlds__simplify__simplify_goal_call__slot_0 = ((MR_hash_string5(check_hlds__simplify__simplify_goal_call__PredName_11)) & (MR_Integer) 31);
                /* no collisions; no hash chain loop */
                /* lookup the string for this hash slot */
                check_hlds__simplify__simplify_goal_call__str_1 = ((&check_hlds__simplify__simplify_goal_call_vector_common_8[0 + check_hlds__simplify__simplify_goal_call__slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;
                /* did we find a match? */
                if ((((check_hlds__simplify__simplify_goal_call__str_1 != NULL)) && ((strcmp(check_hlds__simplify__simplify_goal_call__str_1, check_hlds__simplify__simplify_goal_call__PredName_11) == 0))))
                  {
                    /* we found a match; dispatch to the corresponding code */
                    switch (check_hlds__simplify__simplify_goal_call__slot_0) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 10:
                        {
                          /* case "<<" */
                          {
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_53;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_54;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_55;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_56;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_57;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_58;
                            MR_Integer check_hlds__simplify__simplify_goal_call__Var_59;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_60;
                            MR_String check_hlds__simplify__simplify_goal_call__Op_105;
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_106;
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_107;
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_108;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_30;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_31;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_117)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Z_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_117, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_117, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    {
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__Var_118, &check_hlds__simplify__simplify_goal_call__InstY_107);
                                    }
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 2)));
                                        check_hlds__simplify__simplify_goal_call__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 3)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_54)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_54, (MR_Integer) 0)));
                                            check_hlds__simplify__simplify_goal_call__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_54, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_55, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_55, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__YVal_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_56, (MR_Integer) 1)));
                                                        check_hlds__simplify__simplify_goal_call__Var_59 = (MR_Integer) 0;
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_108 >= check_hlds__simplify__simplify_goal_call__Var_59);
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_108 < check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19);
                                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                              {
                                                                check_hlds__simplify__simplify_goal_call__Op_105 = (MR_String) "unchecked_left_shift";
                                                                check_hlds__simplify__simplify_goal_call__Var_60 = (MR_Integer) 0;
                                                                {
                                                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_105, check_hlds__simplify__simplify_goal_call__Var_60, check_hlds__simplify__simplify_goal_call__Var_116, check_hlds__simplify__simplify_goal_call__Var_118, check_hlds__simplify__simplify_goal_call__Z_106, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                                }
                                                                *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
                                                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
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
                          /* case "rem" */
                          {
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_63;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_64;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_65;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_66;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_67;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_68;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_69;
                            MR_String check_hlds__simplify__simplify_goal_call__Op_99;
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_100;
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_101;
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_102;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_28;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_29;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_117)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Z_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_117, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_117, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    {
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__Var_118, &check_hlds__simplify__simplify_goal_call__InstY_101);
                                    }
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_101)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 2)));
                                        check_hlds__simplify__simplify_goal_call__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 3)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_64)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_64, (MR_Integer) 0)));
                                            check_hlds__simplify__simplify_goal_call__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_64, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_65, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_65, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_66, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__YVal_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_66, (MR_Integer) 1)));
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_102 == (MR_Integer) 0);
                                                        check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__Op_99 = (MR_String) "unchecked_rem";
                                                            check_hlds__simplify__simplify_goal_call__Var_69 = (MR_Integer) 0;
                                                            {
                                                              check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_99, check_hlds__simplify__simplify_goal_call__Var_69, check_hlds__simplify__simplify_goal_call__Var_116, check_hlds__simplify__simplify_goal_call__Var_118, check_hlds__simplify__simplify_goal_call__Z_100, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                            }
                                                            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
                                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
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
                          /* case "/", "//" */
                          {
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_23;
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_24;
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_27;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_72;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_73;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_74;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_75;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_76;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_77;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_78;
                            MR_String check_hlds__simplify__simplify_goal_call__Op_96;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_25;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_26;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_117)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Z_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_117, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_117, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    {
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__Var_118, &check_hlds__simplify__simplify_goal_call__InstY_24);
                                    }
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 2)));
                                        check_hlds__simplify__simplify_goal_call__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 3)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_73)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_73, (MR_Integer) 0)));
                                            check_hlds__simplify__simplify_goal_call__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_73, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_74, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_74, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_75, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__YVal_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_75, (MR_Integer) 1)));
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_27 == (MR_Integer) 0);
                                                        check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__Op_96 = (MR_String) "unchecked_quotient";
                                                            check_hlds__simplify__simplify_goal_call__Var_78 = (MR_Integer) 0;
                                                            {
                                                              check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_96, check_hlds__simplify__simplify_goal_call__Var_78, check_hlds__simplify__simplify_goal_call__Var_116, check_hlds__simplify__simplify_goal_call__Var_118, check_hlds__simplify__simplify_goal_call__Z_23, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                            }
                                                            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
                                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
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
                          /* case "rem_bits_per_int" */
                          {
                            MR_String check_hlds__simplify__simplify_goal_call__Op_93;

                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Op_93 = (MR_String) "unchecked_rem";
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_93, check_hlds__simplify__simplify_goal_call__Var_116, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__Var_118, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
                                }
                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 22:
                        {
                          /* case ">>" */
                          {
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_43;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_44;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_45;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_46;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_47;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_48;
                            MR_Integer check_hlds__simplify__simplify_goal_call__Var_49;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_50;
                            MR_String check_hlds__simplify__simplify_goal_call__Op_111;
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_112;
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_113;
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_114;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_32;
                            MR_Word check_hlds__simplify__simplify_goal_call__Var_33;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_117)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Z_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_117, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_117, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    {
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__Var_118, &check_hlds__simplify__simplify_goal_call__InstY_113);
                                    }
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_113)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 2)));
                                        check_hlds__simplify__simplify_goal_call__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 3)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_44)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_44, (MR_Integer) 0)));
                                            check_hlds__simplify__simplify_goal_call__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_44, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_45, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_45, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_46, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__YVal_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_46, (MR_Integer) 1)));
                                                        check_hlds__simplify__simplify_goal_call__Var_49 = (MR_Integer) 0;
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_114 >= check_hlds__simplify__simplify_goal_call__Var_49);
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_114 < check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19);
                                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                              {
                                                                check_hlds__simplify__simplify_goal_call__Op_111 = (MR_String) "unchecked_right_shift";
                                                                check_hlds__simplify__simplify_goal_call__Var_50 = (MR_Integer) 0;
                                                                {
                                                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_111, check_hlds__simplify__simplify_goal_call__Var_50, check_hlds__simplify__simplify_goal_call__Var_116, check_hlds__simplify__simplify_goal_call__Var_118, check_hlds__simplify__simplify_goal_call__Z_112, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                                }
                                                                *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
                                                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
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
                          /* case "quot_bits_per_int" */
                          {
                            MR_String check_hlds__simplify__simplify_goal_call__Op_22;

                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Op_22 = (MR_String) "unchecked_quotient";
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_22, check_hlds__simplify__simplify_goal_call__Var_116, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__Var_118, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
                                }
                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 29:
                        {
                          /* case "times_bits_per_int" */
                          {
                            MR_String check_hlds__simplify__simplify_goal_call__Op_90;

                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Op_90 = (MR_String) "*";
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_90, check_hlds__simplify__simplify_goal_call__Var_116, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__Var_118, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
                                }
                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                              }
                          }
                        }
                        break;
                    }
                    /* jump out of search loop */
                    goto label_0;
                  }
                check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
              label_0:;
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34;
                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__simplify__simplify_goal_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
  MR_Word check_hlds__simplify__simplify_goal_call__X_10,
  MR_Integer check_hlds__simplify__simplify_goal_call__IntConst_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_13,
  MR_Word check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66;
    MR_Word check_hlds__simplify__simplify_goal_call__ConstVar_16;
    MR_Word check_hlds__simplify__simplify_goal_call__ConstGoal_17;
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoalExpr_18;
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoal_19;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_25;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_26;
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_34;
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_35;
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_36;
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_37;
    MR_Word check_hlds__simplify__simplify_goal_call__ConstConsId_38;
    MR_Word check_hlds__simplify__simplify_goal_call__Unification_39;
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_40;
    MR_Word check_hlds__simplify__simplify_goal_call__Ground_42;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyMode_43;
    MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr_44;
    MR_Word check_hlds__simplify__simplify_goal_call__NonLocals_45;
    MR_Word check_hlds__simplify__simplify_goal_call__InstMapDelta_46;
    MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_47;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_48;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_60;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_62;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__VarSet0_34);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__VarTypes0_35);
    }
    check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66, &check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__VarSet0_34, &check_hlds__simplify__simplify_goal_call__VarSet_36);
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_48 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__Var_48, check_hlds__simplify__simplify_goal_call__VarTypes0_35, &check_hlds__simplify__simplify_goal_call__VarTypes_37);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_call__VarSet_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21);
    }
    {
      check_hlds__simplify__simplify_goal_call__ConstConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_38, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IntConst_11));
    }
    {
      check_hlds__simplify__simplify_goal_call__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_16));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_38));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__RHS_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_38));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__Ground_42 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_60, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_62, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_62, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
    }
    {
      check_hlds__simplify__simplify_goal_call__UnifyMode_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyMode_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_60));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyMode_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_62));
    }
    {
      check_hlds__simplify__simplify_goal_call__GoalExpr_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_16));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_40));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyMode_43));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unification_39));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[37]));
    }
    {
      check_hlds__simplify__simplify_goal_call__NonLocals_45 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66, check_hlds__simplify__simplify_goal_call__ConstVar_16);
    }
    {
      check_hlds__simplify__simplify_goal_call__InstMapDelta_46 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__simplify__simplify_goal_call__ConstVar_16);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__simplify_goal_call__NonLocals_45, check_hlds__simplify__simplify_goal_call__InstMapDelta_46, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__simplify_goal_call__GoalInfo_47);
    }
    {
      check_hlds__simplify__simplify_goal_call__ConstGoal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstGoal_17, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalExpr_44));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstGoal_17, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalInfo_47));
    }
    {
      check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21, check_hlds__simplify__simplify_goal_call__Op_9, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__X_10, check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__Y_12, &check_hlds__simplify__simplify_goal_call__OpGoalExpr_18);
    }
    {
      check_hlds__simplify__simplify_goal_call__OpGoal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__OpGoal_19, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoalExpr_18));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__OpGoal_19, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoal_19));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstGoal_17));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__simplify__simplify_goal_call__GoalExpr_13 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_25));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__IntModuleSymName_15;
    MR_Word check_hlds__simplify__simplify_goal_call__OpSymName_16;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_17;
    MR_Word check_hlds__simplify__simplify_goal_call__PredTable_18;
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIds_19;
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredId_21;
    MR_Integer check_hlds__simplify__simplify_goal_call__OpProcId_23;
    MR_Word check_hlds__simplify__simplify_goal_call__OpArgs_24;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_35;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_36;
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_30;

    {
      check_hlds__simplify__simplify_goal_call__IntModuleSymName_15 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_5[3]);
    }
    {
      check_hlds__simplify__simplify_goal_call__OpSymName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_16, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IntModuleSymName_15));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_16, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Op_9));
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__Info_8, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__PredTable_18);
    }
    {
      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(check_hlds__simplify__simplify_goal_call__PredTable_18, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__OpSymName_16, (MR_Integer) 2, &check_hlds__simplify__simplify_goal_call__OpPredIds_19);
    }
    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__OpPredIds_19)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 0)));
        check_hlds__simplify__simplify_goal_call__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 1)));
        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      check_hlds__simplify__simplify_goal_call__OpPredId_21 = check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
    else
      {
        MR_String check_hlds__simplify__simplify_goal_call__Var_33;

        {
          check_hlds__simplify__simplify_goal_call__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find ", check_hlds__simplify__simplify_goal_call__Op_9);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_call", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_make_int_binary_op_goal_expr\'/7", check_hlds__simplify__simplify_goal_call__Var_33);
          return;
        }
      }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_1(&check_hlds__simplify__simplify_goal_call__OpProcId_23, (MR_Integer) 0);
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Z_13));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_12));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_35, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_36));
    }
    {
      check_hlds__simplify__simplify_goal_call__OpArgs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_11));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__simplify__simplify_goal_call__GoalExpr_14 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpPredId_21));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpProcId_23));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpArgs_24));
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IsBuiltin_10));
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpSymName_16));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__Args_9,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_86_86;
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_13;
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_14;
    MR_Word check_hlds__simplify__simplify_goal_call__Y_15;
    MR_Word check_hlds__simplify__simplify_goal_call__X_16;
    MR_Word check_hlds__simplify__simplify_goal_call__Res_17;
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_19;
    MR_Word check_hlds__simplify__simplify_goal_call__Type_20;
    MR_Word check_hlds__simplify__simplify_goal_call__Context_21;
    MR_Word check_hlds__simplify__simplify_goal_call__CondEq_22;
    MR_Word check_hlds__simplify__simplify_goal_call__CondLt_23;
    MR_Word check_hlds__simplify__simplify_goal_call__Builtin_24;
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtor_25;
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnEq_26;
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnLt_27;
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnGt_28;
    MR_Word check_hlds__simplify__simplify_goal_call__NonLocals_29;
    MR_Word check_hlds__simplify__simplify_goal_call__RestExpr_30;
    MR_Word check_hlds__simplify__simplify_goal_call__Rest_31;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_38;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_39;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_40;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_41;
    MR_String check_hlds__simplify__simplify_goal_call__Var_42;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_43;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_44;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_45;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_46;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_47;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_48;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_49;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_50;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_51;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_52;
    MR_String check_hlds__simplify__simplify_goal_call__Var_53;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_54;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_55;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_56;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_57;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_59;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_60;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_63;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_64;
    MR_String check_hlds__simplify__simplify_goal_call__Var_65;
    MR_Integer check_hlds__simplify__simplify_goal_call__Var_66;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_67;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_68;
    MR_String check_hlds__simplify__simplify_goal_call__Var_69;
    MR_Integer check_hlds__simplify__simplify_goal_call__Var_70;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_71;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_72;
    MR_String check_hlds__simplify__simplify_goal_call__Var_73;
    MR_Integer check_hlds__simplify__simplify_goal_call__Var_74;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_75;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_76;
    MR_String check_hlds__simplify__simplify_goal_call__Var_77;
    MR_Integer check_hlds__simplify__simplify_goal_call__Var_78;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_79;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_84;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_85;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_18;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__ModuleInfo_13);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_13, &check_hlds__simplify__simplify_goal_call__Globals_14);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__simplify__simplify_goal_call__Globals_14, (MR_Integer) 279, (MR_Integer) 1);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        check_hlds__simplify__simplify_goal_call__TypeInfo_86_86 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
        {
          mercury__list__reverse_2_p_0(check_hlds__simplify__simplify_goal_call__TypeInfo_86_86, check_hlds__simplify__simplify_goal_call__Args_9, &check_hlds__simplify__simplify_goal_call__Var_38);
        }
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_38)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            check_hlds__simplify__simplify_goal_call__Y_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_38, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_call__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_38, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_39)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_39, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_call__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_39, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_40)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_call__Res_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_40, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_call__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_40, (MR_Integer) 1)));
                    {
                      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__VarTypes_19);
                    }
                    {
                      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_19, check_hlds__simplify__simplify_goal_call__Y_15, &check_hlds__simplify__simplify_goal_call__Type_20);
                    }
                    {
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Type_20);
                    }
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                      {
                        {
                          check_hlds__simplify__simplify_goal_call__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32);
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Var_41 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
                        check_hlds__simplify__simplify_goal_call__Var_42 = (MR_String) "builtin_compound_eq";
                        check_hlds__simplify__simplify_goal_call__Var_43 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        check_hlds__simplify__simplify_goal_call__Var_45 = (MR_Integer) 1;
                        check_hlds__simplify__simplify_goal_call__Var_46 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__Var_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        check_hlds__simplify__simplify_goal_call__Var_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          check_hlds__simplify__simplify_goal_call__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_15));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_51));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_47, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_16));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_47, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_50));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Var_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
                        {
                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__Var_41, check_hlds__simplify__simplify_goal_call__Var_42, check_hlds__simplify__simplify_goal_call__Var_43, check_hlds__simplify__simplify_goal_call__Var_44, check_hlds__simplify__simplify_goal_call__Var_45, check_hlds__simplify__simplify_goal_call__Var_46, check_hlds__simplify__simplify_goal_call__Var_47, check_hlds__simplify__simplify_goal_call__Var_48, check_hlds__simplify__simplify_goal_call__Var_49, check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Context_21, &check_hlds__simplify__simplify_goal_call__CondEq_22);
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Var_52 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
                        check_hlds__simplify__simplify_goal_call__Var_53 = (MR_String) "builtin_compound_lt";
                        check_hlds__simplify__simplify_goal_call__Var_54 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__Var_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        check_hlds__simplify__simplify_goal_call__Var_56 = (MR_Integer) 1;
                        check_hlds__simplify__simplify_goal_call__Var_57 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__Var_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          check_hlds__simplify__simplify_goal_call__Var_60 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
                        {
                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__Var_52, check_hlds__simplify__simplify_goal_call__Var_53, check_hlds__simplify__simplify_goal_call__Var_54, check_hlds__simplify__simplify_goal_call__Var_55, check_hlds__simplify__simplify_goal_call__Var_56, check_hlds__simplify__simplify_goal_call__Var_57, check_hlds__simplify__simplify_goal_call__Var_47, check_hlds__simplify__simplify_goal_call__Var_59, check_hlds__simplify__simplify_goal_call__Var_60, check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Context_21, &check_hlds__simplify__simplify_goal_call__CondLt_23);
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Builtin_24 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Var_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
                        check_hlds__simplify__simplify_goal_call__Var_65 = (MR_String) "comparison_result";
                        check_hlds__simplify__simplify_goal_call__Var_66 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__Var_69 = (MR_String) "=";
                        check_hlds__simplify__simplify_goal_call__Var_70 = (MR_Integer) 0;
                        {
                          check_hlds__simplify__simplify_goal_call__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_63, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_64));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_65));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__TypeCtor_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_63));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_66));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_68, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_69));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_67, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_68));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_67, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_70));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_67, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
                        }
                        {
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__Var_67, &check_hlds__simplify__simplify_goal_call__ReturnEq_26);
                        }
                        check_hlds__simplify__simplify_goal_call__Var_73 = (MR_String) "<";
                        check_hlds__simplify__simplify_goal_call__Var_74 = (MR_Integer) 0;
                        {
                          check_hlds__simplify__simplify_goal_call__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_72, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_72, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_73));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_71, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_72));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_71, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_74));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_71, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
                        }
                        {
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__Var_71, &check_hlds__simplify__simplify_goal_call__ReturnLt_27);
                        }
                        check_hlds__simplify__simplify_goal_call__Var_77 = (MR_String) ">";
                        check_hlds__simplify__simplify_goal_call__Var_78 = (MR_Integer) 0;
                        {
                          check_hlds__simplify__simplify_goal_call__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_76, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_77));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_75, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_76));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_75, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_78));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_75, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
                        }
                        {
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__Var_75, &check_hlds__simplify__simplify_goal_call__ReturnGt_28);
                        }
                        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          check_hlds__simplify__simplify_goal_call__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_79, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Res_17));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_79, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_47));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__NonLocals_29 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_call__Var_79);
                        }
                        {
                          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__NonLocals_29, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33);
                        }
                        check_hlds__simplify__simplify_goal_call__Var_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        check_hlds__simplify__simplify_goal_call__Var_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34;
                        {
                          check_hlds__simplify__simplify_goal_call__RestExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_84));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CondLt_23));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnLt_27));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnGt_28));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Rest_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Rest_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RestExpr_30));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Rest_31, 1) = ((MR_Box) (*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_85));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CondEq_22));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnEq_26));
                          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Rest_31));
                        }
                        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return check_hlds__simplify__simplify_goal_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__TI_11,
  MR_Word check_hlds__simplify__simplify_goal_call__X_12,
  MR_Word check_hlds__simplify__simplify_goal_call__Y_13,
  MR_String check_hlds__simplify__simplify_goal_call__Inequality_14,
  MR_Word check_hlds__simplify__simplify_goal_call__Invert_15,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_16,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_18,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107;
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_20;
    MR_Word check_hlds__simplify__simplify_goal_call__CmpRes_21;
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_22;
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_23;
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_24;
    MR_Word check_hlds__simplify__simplify_goal_call__Context_25;
    MR_Word check_hlds__simplify__simplify_goal_call__Args_26;
    MR_Word check_hlds__simplify__simplify_goal_call__XInst_27;
    MR_Word check_hlds__simplify__simplify_goal_call__YInst_28;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_29;
    MR_Integer check_hlds__simplify__simplify_goal_call__ModeNo_30;
    MR_Word check_hlds__simplify__simplify_goal_call__Unique_31;
    MR_Word check_hlds__simplify__simplify_goal_call__ArgInsts_32;
    MR_Word check_hlds__simplify__simplify_goal_call__BuiltinModule_33;
    MR_Word check_hlds__simplify__simplify_goal_call__CmpGoal0_34;
    MR_Word check_hlds__simplify__simplify_goal_call__CmpExpr_35;
    MR_Word check_hlds__simplify__simplify_goal_call__CmpInfo0_36;
    MR_Word check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37;
    MR_Word check_hlds__simplify__simplify_goal_call__CmpNonLocals_38;
    MR_Word check_hlds__simplify__simplify_goal_call__CmpInfo_39;
    MR_Word check_hlds__simplify__simplify_goal_call__CmpGoal_40;
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtor_41;
    MR_Word check_hlds__simplify__simplify_goal_call__ConsId_42;
    MR_Word check_hlds__simplify__simplify_goal_call__Bound_43;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyMode_44;
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_45;
    MR_Word check_hlds__simplify__simplify_goal_call__UKind_46;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyExpr_48;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyInfo_51;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyGoal_52;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_56;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_58;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_59;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_60;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_64;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_68;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_72;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_73;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_74;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_77;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_81;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_82;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_85;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_86;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, &check_hlds__simplify__simplify_goal_call__VarSet0_20);
    }
    check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, &check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__VarSet0_20, &check_hlds__simplify__simplify_goal_call__VarSet_22);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_call__VarSet_22, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_goal_call__VarTypes0_23);
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_56 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__Var_56, check_hlds__simplify__simplify_goal_call__VarTypes0_23, &check_hlds__simplify__simplify_goal_call__VarTypes_24);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_24, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);
    }
    {
      check_hlds__simplify__simplify_goal_call__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_16);
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_60, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_13));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_12));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_59, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_60));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_58, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_58, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_59));
    }
    {
      check_hlds__simplify__simplify_goal_call__Args_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TI_11));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_58));
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_18, check_hlds__simplify__simplify_goal_call__X_12, &check_hlds__simplify__simplify_goal_call__XInst_27);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_18, check_hlds__simplify__simplify_goal_call__Y_13, &check_hlds__simplify__simplify_goal_call__YInst_28);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54, &check_hlds__simplify__simplify_goal_call__ModuleInfo_29);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__XInst_27);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        {
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__YInst_28);
        }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 1;
        else
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 2;
      }
    else
      {
        {
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__YInst_28);
        }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 3;
        else
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 0;
      }
    check_hlds__simplify__simplify_goal_call__Unique_31 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_7[0]);
    {
      check_hlds__simplify__simplify_goal_call__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_31));
    }
    {
      check_hlds__simplify__simplify_goal_call__ArgInsts_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_64));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__BuiltinModule_33 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ModeNo_30));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_72 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__simplify_goal_call__ArgInsts_32);
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__BuiltinModule_33, (MR_String) "compare", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__Var_68, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__Args_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_call__Var_72, check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__Context_25, &check_hlds__simplify__simplify_goal_call__CmpGoal0_34);
    }
    check_hlds__simplify__simplify_goal_call__CmpExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal0_34, (MR_Integer) 0)));
    check_hlds__simplify__simplify_goal_call__CmpInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal0_34, (MR_Integer) 1)));
    {
      check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__CmpInfo0_36);
    }
    {
      parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37, &check_hlds__simplify__simplify_goal_call__CmpNonLocals_38);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__CmpNonLocals_38, check_hlds__simplify__simplify_goal_call__CmpInfo0_36, &check_hlds__simplify__simplify_goal_call__CmpInfo_39);
    }
    {
      check_hlds__simplify__simplify_goal_call__CmpGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal_40, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpExpr_35));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal_40, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpInfo_39));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_74 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_73, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_74));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_73, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      check_hlds__simplify__simplify_goal_call__TypeCtor_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_41, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_73));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_41, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__BuiltinModule_33));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_77, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Inequality_14));
    }
    {
      check_hlds__simplify__simplify_goal_call__ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_77));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_41));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_82, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_81, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_82));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__Bound_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_81));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_85, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_31));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_85, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
    }
    {
      check_hlds__simplify__simplify_goal_call__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_86, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
    }
    {
      check_hlds__simplify__simplify_goal_call__UnifyMode_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyMode_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_85));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyMode_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_86));
    }
    {
      check_hlds__simplify__simplify_goal_call__RHS_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__UKind_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      check_hlds__simplify__simplify_goal_call__UnifyExpr_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_45));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyMode_44));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UKind_46));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[36]));
    }
    {
      check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_16);
    }
    {
      parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49, &check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50, check_hlds__simplify__simplify_goal_call__GoalInfo_16, &check_hlds__simplify__simplify_goal_call__UnifyInfo_51);
    }
    {
      check_hlds__simplify__simplify_goal_call__UnifyGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyGoal_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyExpr_48));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyGoal_52, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyInfo_51));
    }
    switch (check_hlds__simplify__simplify_goal_call__Invert_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__simplify_goal_call__Var_104;
          MR_Word check_hlds__simplify__simplify_goal_call__Var_105;

          {
            check_hlds__simplify__simplify_goal_call__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyGoal_52));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__simplify_goal_call__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_104, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_40));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_104, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_105));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_104));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__simplify_goal_call__Var_98;
          MR_Word check_hlds__simplify__simplify_goal_call__Var_99;
          MR_Word check_hlds__simplify__simplify_goal_call__Var_100;
          MR_Word check_hlds__simplify__simplify_goal_call__Var_101 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_goal_call__UnifyGoal_52);

          {
            check_hlds__simplify__simplify_goal_call__Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_100, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_101));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_100, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyInfo_51));
          }
          {
            check_hlds__simplify__simplify_goal_call__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_99, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_100));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__simplify_goal_call__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_98, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_40));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_98, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_99));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_98));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3(
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

    (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_26 = ((MR_Word) (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_26);
    {
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(check_hlds__simplify__simplify_goal_call__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

    {
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_23, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_26);
    }
    if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
      {
        {
          (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_23, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_26);
        }
        (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
        if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
          {
            check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(check_hlds__simplify__simplify_goal_call__env_ptr);
          }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_26, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_25, check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3, check_hlds__simplify__simplify_goal_call__env_ptr);
          }
        }
        (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_12,
  MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_13,
  MR_Word check_hlds__simplify__simplify_goal_call__Args_14,
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_15,
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_16,
  MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_17,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_18,
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_19,
  MR_Word check_hlds__simplify__simplify_goal_call__Common_20,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s check_hlds__simplify__simplify_goal_call__env;

    {
      MR_Word check_hlds__simplify__simplify_goal_call__CurPredProcId_22;
      MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_24;
      MR_Word check_hlds__simplify__simplify_goal_call__Purity_28;
      MR_Integer check_hlds__simplify__simplify_goal_call__Var_37;
      MR_Word check_hlds__simplify__simplify_goal_call__Var_84;
      MR_Integer check_hlds__simplify__simplify_goal_call__Var_85;
      MR_Word check_hlds__simplify__simplify_goal_call__Var_81;
      MR_Word check_hlds__simplify__simplify_goal_call__Var_82;
      MR_Word check_hlds__simplify__simplify_goal_call__Var_38;
      MR_Word check_hlds__simplify__simplify_goal_call__Var_86;
      MR_Word check_hlds__simplify__simplify_goal_call__Var_27;

      {
        (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35);
      }
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
        {
          {
            check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_goal_call__CurPredProcId_22);
          }
          check_hlds__simplify__simplify_goal_call__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CurPredProcId_22, (MR_Integer) 0)));
          check_hlds__simplify__simplify_goal_call__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CurPredProcId_22, (MR_Integer) 1)));
          {
            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_12, check_hlds__simplify__simplify_goal_call__Var_84);
          }
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
            {
              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__ProcId_13 == check_hlds__simplify__simplify_goal_call__Var_85);
              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                {
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__IsBuiltin_15 == (MR_Integer) 0);
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                    {
                      check_hlds__simplify__simplify_goal_call__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 0)));
                      check_hlds__simplify__simplify_goal_call__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 1)));
                      check_hlds__simplify__simplify_goal_call__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 2)));
                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__Var_37 == (MR_Integer) 0);
                      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                        {
                          {
                            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_23);
                          }
                          {
                            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &check_hlds__simplify__simplify_goal_call__HeadVars_24);
                          }
                          {
                            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_25);
                          }
                          {
                            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(check_hlds__simplify__simplify_goal_call__Args_14, check_hlds__simplify__simplify_goal_call__HeadVars_24, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_25, check_hlds__simplify__simplify_goal_call__Common_20, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_23);
                          }
                          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                            {
                              {
                                check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(&check_hlds__simplify__simplify_goal_call__env);
                              }
                              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
                              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                                {
                                  {
                                    check_hlds__simplify__simplify_goal_call__Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__Var_38, 0) = NULL;
                                  }
                                  {
                                    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &check_hlds__simplify__simplify_goal_call__Var_86);
                                  }
                                  {
                                    (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(check_hlds__simplify__simplify_goal_call__Var_38, check_hlds__simplify__simplify_goal_call__Var_86);
                                  }
                                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
                                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                                    {
                                      {
                                        hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_16, &check_hlds__simplify__simplify_goal_call__Purity_28);
                                      }
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__Purity_28 == (MR_Integer) 2);
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
        {
          MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_29;
          MR_Word check_hlds__simplify__simplify_goal_call__Msg_32;
          MR_Word check_hlds__simplify__simplify_goal_call__Spec_34;
          MR_Word check_hlds__simplify__simplify_goal_call__Var_78;

          {
            check_hlds__simplify__simplify_goal_call__GoalContext_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_18);
          }
          {
            check_hlds__simplify__simplify_goal_call__Msg_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_29));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[35])));
          }
          {
            check_hlds__simplify__simplify_goal_call__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_78, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_32));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__simplify_goal_call__Spec_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_34, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_78));
          }
          {
            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(check_hlds__simplify__simplify_goal_call__Spec_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);
          }
        }
      else
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_goal_call__ArgX1_13;

    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        check_hlds__simplify__simplify_goal_call__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
        (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ArgX1_13));
        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
      }
    return check_hlds__simplify__simplify_goal_call__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

        if ((check_hlds__simplify__simplify_goal_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_call__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_call__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_call__HeadVar_11;
            MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_12;
            MR_Word check_hlds__simplify__simplify_goal_call__Mode_13;
            MR_Word check_hlds__simplify__simplify_goal_call__Modes_14;

            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call__HeadVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_call__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_call__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__3_3, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_call__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__3_3, (MR_Integer) 1)));
                    {
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_5, check_hlds__simplify__simplify_goal_call__Mode_13);
                    }
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(check_hlds__simplify__simplify_goal_call__Arg_9, check_hlds__simplify__simplify_goal_call__HeadVar_11, check_hlds__simplify__simplify_goal_call__CommonInfo_4);
                      }
                    else
                      check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__simplify__simplify_goal_call__next_value_of_HeadVar__1_1 = check_hlds__simplify__simplify_goal_call__Args_10;
                          MR_Word check_hlds__simplify__simplify_goal_call__next_value_of_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__HeadVars_12;
                          MR_Word check_hlds__simplify__simplify_goal_call__next_value_of_HeadVar__3_3 = check_hlds__simplify__simplify_goal_call__Modes_14;

                          check_hlds__simplify__simplify_goal_call__HeadVar__3_3 = check_hlds__simplify__simplify_goal_call__next_value_of_HeadVar__3_3;
                          check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__next_value_of_HeadVar__2_2;
                          check_hlds__simplify__simplify_goal_call__HeadVar__1_1 = check_hlds__simplify__simplify_goal_call__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__simplify__simplify_goal_call__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6,
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_8,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_24)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_14;
    MR_Word check_hlds__simplify__simplify_goal_call__Markers_10;
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredProcId_11;
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredId_12;
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredInfo_15;
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredMarkers_16;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_25;
    MR_Integer check_hlds__simplify__simplify_goal_call___ThisProcId_13;
    MR_Word check_hlds__simplify__simplify_goal_call__Var_26;

    {
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_23);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        {
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_7, &check_hlds__simplify__simplify_goal_call__Markers_10);
        }
        check_hlds__simplify__simplify_goal_call__Var_25 = (MR_Integer) 5;
        {
          check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__Markers_10, check_hlds__simplify__simplify_goal_call__Var_25);
        }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            {
              check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_23, &check_hlds__simplify__simplify_goal_call__ThisPredProcId_11);
            }
            check_hlds__simplify__simplify_goal_call__ThisPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ThisPredProcId_11, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_call___ThisProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ThisPredProcId_11, (MR_Integer) 1)));
            {
              check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_6, check_hlds__simplify__simplify_goal_call__ThisPredId_12);
            }
            check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                {
                  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_23, &check_hlds__simplify__simplify_goal_call__ModuleInfo_14);
                }
                {
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_14, check_hlds__simplify__simplify_goal_call__ThisPredId_12, &check_hlds__simplify__simplify_goal_call__ThisPredInfo_15);
                }
                {
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredInfo_15, &check_hlds__simplify__simplify_goal_call__ThisPredMarkers_16);
                }
                check_hlds__simplify__simplify_goal_call__Var_26 = (MR_Integer) 5;
                {
                  check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredMarkers_16, check_hlds__simplify__simplify_goal_call__Var_26);
                }
                check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
              }
          }
      }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_56_56;
        MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_17;
        MR_Word check_hlds__simplify__simplify_goal_call__PredPieces_18;
        MR_Word check_hlds__simplify__simplify_goal_call__Pieces_19;
        MR_Word check_hlds__simplify__simplify_goal_call__Msg_20;
        MR_Word check_hlds__simplify__simplify_goal_call__Spec_22;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_32;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_39;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_40;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_43;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_44;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_53;

        {
          check_hlds__simplify__simplify_goal_call__GoalContext_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_8);
        }
        {
          check_hlds__simplify__simplify_goal_call__PredPieces_18 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_14, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__PredId_6);
        }
        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          check_hlds__simplify__simplify_goal_call__Var_32 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_56_56, check_hlds__simplify__simplify_goal_call__PredPieces_18, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12]));
        }
        {
          check_hlds__simplify__simplify_goal_call__Pieces_19 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_56_56, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[30]), check_hlds__simplify__simplify_goal_call__Var_32);
        }
        {
          check_hlds__simplify__simplify_goal_call__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Pieces_19));
        }
        {
          check_hlds__simplify__simplify_goal_call__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_44));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__simplify_goal_call__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_40, 0) = ((MR_Box) (((MR_Integer) 44 | (((MR_Integer) 1 << (MR_Integer) 10)))));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_40, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_43));
        }
        {
          check_hlds__simplify__simplify_goal_call__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_39, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_40));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__simplify_goal_call__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_20, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_17));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_20, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_39));
        }
        {
          check_hlds__simplify__simplify_goal_call__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_53, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_20));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__simplify_goal_call__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_22, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_53));
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(check_hlds__simplify__simplify_goal_call__Spec_22, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_23, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_24);
        }
      }
    else
      *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_24 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_23;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;

    {
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
    return check_hlds__simplify__simplify_goal_call__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;

    {
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__349__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
    return check_hlds__simplify__simplify_goal_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_6,
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_7,
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_8,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_9,
  MR_Word * check_hlds__simplify__simplify_goal_call__MaybeSpec_10)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleName_11;
    MR_String check_hlds__simplify__simplify_goal_call__PredName_12;
    MR_Word check_hlds__simplify__simplify_goal_call__PredOrFunc_13;

    {
      hlds__hlds_pred__pred_info_get_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_8, &check_hlds__simplify__simplify_goal_call__ModuleName_11);
    }
    {
      hlds__hlds_pred__pred_info_get_name_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_8, &check_hlds__simplify__simplify_goal_call__PredName_12);
    }
    {
      check_hlds__simplify__simplify_goal_call__PredOrFunc_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_8);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal_call__GoalInfo_9, (MR_Integer) 24);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      *check_hlds__simplify__simplify_goal_call__MaybeSpec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_130_130;
        MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_132_132;
        MR_Word check_hlds__simplify__simplify_goal_call__ArgTypes_14;
        MR_Word check_hlds__simplify__simplify_goal_call__IOStateTypeSymName_15;
        MR_Word check_hlds__simplify__simplify_goal_call__IOStateType_16;
        MR_Word check_hlds__simplify__simplify_goal_call__IOStateArgTypes_17;
        MR_Word check_hlds__simplify__simplify_goal_call__PredTable_20;
        MR_Word check_hlds__simplify__simplify_goal_call__PredSymName_21;
        MR_Integer check_hlds__simplify__simplify_goal_call__Arity_22;
        MR_Word check_hlds__simplify__simplify_goal_call__PredIds_23;
        MR_Word check_hlds__simplify__simplify_goal_call__OneExtraStreamArgPredIds_24;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_35;
        MR_String check_hlds__simplify__simplify_goal_call__Var_36;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_37;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_38;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_39;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_40;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_41;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_42;
        MR_Integer check_hlds__simplify__simplify_goal_call__Var_43;
        MR_Integer check_hlds__simplify__simplify_goal_call__Var_44;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_45;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_18;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_19;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_25;
        MR_Word check_hlds__simplify__simplify_goal_call__Var_26;

        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__PredOrFunc_13 == (MR_Integer) 0);
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            {
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_8, &check_hlds__simplify__simplify_goal_call__ArgTypes_14);
            }
            {
              check_hlds__simplify__simplify_goal_call__Var_35 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
            check_hlds__simplify__simplify_goal_call__Var_36 = (MR_String) "state";
            check_hlds__simplify__simplify_goal_call__Var_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            check_hlds__simplify__simplify_goal_call__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            check_hlds__simplify__simplify_goal_call__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            {
              check_hlds__simplify__simplify_goal_call__IOStateTypeSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__IOStateTypeSymName_15, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_35));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__IOStateTypeSymName_15, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_36));
            }
            {
              check_hlds__simplify__simplify_goal_call__IOStateType_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__IOStateType_16, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IOStateTypeSymName_15));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__IOStateType_16, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_37));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__IOStateType_16, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_38));
            }
            {
              check_hlds__simplify__simplify_goal_call__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_39, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_39, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IOStateType_16));
            }
            {
              mercury__list__filter_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_130_130, check_hlds__simplify__simplify_goal_call__Var_39, check_hlds__simplify__simplify_goal_call__ArgTypes_14, &check_hlds__simplify__simplify_goal_call__IOStateArgTypes_17);
            }
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__IOStateArgTypes_17)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__IOStateArgTypes_17, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_call__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__IOStateArgTypes_17, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Var_40)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_call__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_40, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_call__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_40, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                      {
                        {
                          hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_6, &check_hlds__simplify__simplify_goal_call__PredTable_20);
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__PredSymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__PredSymName_21, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ModuleName_11));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__PredSymName_21, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__PredName_12));
                        }
                        {
                          mercury__list__length_2_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_130_130, check_hlds__simplify__simplify_goal_call__ArgTypes_14, &check_hlds__simplify__simplify_goal_call__Arity_22);
                        }
                        check_hlds__simplify__simplify_goal_call__Var_42 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__Var_44 = (MR_Integer) 1;
                        check_hlds__simplify__simplify_goal_call__Var_43 = (check_hlds__simplify__simplify_goal_call__Arity_22 + check_hlds__simplify__simplify_goal_call__Var_44);
                        {
                          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(check_hlds__simplify__simplify_goal_call__PredTable_20, check_hlds__simplify__simplify_goal_call__Var_42, check_hlds__simplify__simplify_goal_call__PredOrFunc_13, check_hlds__simplify__simplify_goal_call__PredSymName_21, check_hlds__simplify__simplify_goal_call__Var_43, &check_hlds__simplify__simplify_goal_call__PredIds_23);
                        }
                        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_132_132 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
                        {
                          check_hlds__simplify__simplify_goal_call__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_45, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[0]));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_45, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_45, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ModuleInfo_6));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_45, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ArgTypes_14));
                        }
                        {
                          mercury__list__filter_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_132_132, check_hlds__simplify__simplify_goal_call__Var_45, check_hlds__simplify__simplify_goal_call__PredIds_23, &check_hlds__simplify__simplify_goal_call__OneExtraStreamArgPredIds_24);
                        }
                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__OneExtraStreamArgPredIds_24)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OneExtraStreamArgPredIds_24, (MR_Integer) 0)));
                            check_hlds__simplify__simplify_goal_call__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OneExtraStreamArgPredIds_24, (MR_Integer) 1)));
                          }
                      }
                  }
              }
          }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_133_133;
            MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_27;
            MR_Word check_hlds__simplify__simplify_goal_call__PredPieces_28;
            MR_Word check_hlds__simplify__simplify_goal_call__Pieces_29;
            MR_Word check_hlds__simplify__simplify_goal_call__Msg_30;
            MR_Word check_hlds__simplify__simplify_goal_call__Spec_32;
            MR_Word check_hlds__simplify__simplify_goal_call__Var_51;
            MR_Word check_hlds__simplify__simplify_goal_call__Var_61;
            MR_Word check_hlds__simplify__simplify_goal_call__Var_62;
            MR_Word check_hlds__simplify__simplify_goal_call__Var_65;
            MR_Word check_hlds__simplify__simplify_goal_call__Var_66;
            MR_Word check_hlds__simplify__simplify_goal_call__Var_75;

            {
              check_hlds__simplify__simplify_goal_call__GoalContext_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_9);
            }
            {
              check_hlds__simplify__simplify_goal_call__PredPieces_28 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_6, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__PredId_7);
            }
            check_hlds__simplify__simplify_goal_call__TypeCtorInfo_133_133 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              check_hlds__simplify__simplify_goal_call__Var_51 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_133_133, check_hlds__simplify__simplify_goal_call__PredPieces_28, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[5]));
            }
            {
              check_hlds__simplify__simplify_goal_call__Pieces_29 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_133_133, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[26]), check_hlds__simplify__simplify_goal_call__Var_51);
            }
            {
              check_hlds__simplify__simplify_goal_call__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_66, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Pieces_29));
            }
            {
              check_hlds__simplify__simplify_goal_call__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_65, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_66));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__simplify__simplify_goal_call__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_62, 0) = ((MR_Box) (((MR_Integer) 26 | (((MR_Integer) 1 << (MR_Integer) 10)))));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_62, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_65));
            }
            {
              check_hlds__simplify__simplify_goal_call__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_61, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_62));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__simplify__simplify_goal_call__Msg_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_30, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_27));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_30, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_61));
            }
            {
              check_hlds__simplify__simplify_goal_call__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_75, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_30));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__simplify__simplify_goal_call__Spec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_75));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__simplify__simplify_goal_call__MaybeSpec_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Spec_32));
            }
          }
        else
          {
            MR_String check_hlds__simplify__simplify_goal_call__Dir_33;
            MR_Word check_hlds__simplify__simplify_goal_call__Var_135;
            MR_Integer check_hlds__simplify__simplify_goal_call__lo_0;
            MR_Integer check_hlds__simplify__simplify_goal_call__hi_1;
            MR_Integer check_hlds__simplify__simplify_goal_call__mid_2;
            MR_Integer check_hlds__simplify__simplify_goal_call__result_3;

            {
              check_hlds__simplify__simplify_goal_call__Var_135 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
            {
              check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__simplify_goal_call__ModuleName_11, check_hlds__simplify__simplify_goal_call__Var_135);
            }
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__PredOrFunc_13 == (MR_Integer) 0);
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    /* binary string simple lookup switch */
                    check_hlds__simplify__simplify_goal_call__lo_0 = (MR_Integer) 0;
                    check_hlds__simplify__simplify_goal_call__hi_1 = (MR_Integer) 5;
                    do
                      {
                        check_hlds__simplify__simplify_goal_call__mid_2 = (((check_hlds__simplify__simplify_goal_call__lo_0 + check_hlds__simplify__simplify_goal_call__hi_1)) / (MR_Integer) 2);
                        check_hlds__simplify__simplify_goal_call__result_3 = MR_strcmp(check_hlds__simplify__simplify_goal_call__PredName_12, ((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + check_hlds__simplify__simplify_goal_call__mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0);
                        if ((check_hlds__simplify__simplify_goal_call__result_3 == (MR_Integer) 0))
                          {
                            check_hlds__simplify__simplify_goal_call__Dir_33 = ((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + check_hlds__simplify__simplify_goal_call__mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
                            /* jump out of search loop */
                            goto label_0;
                          }
                        else
                        if ((check_hlds__simplify__simplify_goal_call__result_3 < (MR_Integer) 0))
                          check_hlds__simplify__simplify_goal_call__hi_1 = (check_hlds__simplify__simplify_goal_call__mid_2 - (MR_Integer) 1);
                        else
                          check_hlds__simplify__simplify_goal_call__lo_0 = (check_hlds__simplify__simplify_goal_call__mid_2 + (MR_Integer) 1);
                      }
                    while ((check_hlds__simplify__simplify_goal_call__lo_0 <= check_hlds__simplify__simplify_goal_call__hi_1));
                    check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
                  label_0:;
                  }
              }
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_134_134;
                MR_Word check_hlds__simplify__simplify_goal_call__Var_82;
                MR_Word check_hlds__simplify__simplify_goal_call__Var_83;
                MR_Word check_hlds__simplify__simplify_goal_call__Var_86;
                MR_Word check_hlds__simplify__simplify_goal_call__Var_89;
                MR_Word check_hlds__simplify__simplify_goal_call__Var_90;
                MR_Word check_hlds__simplify__simplify_goal_call__Var_100;
                MR_Word check_hlds__simplify__simplify_goal_call__Var_101;
                MR_Word check_hlds__simplify__simplify_goal_call__Var_104;
                MR_Word check_hlds__simplify__simplify_goal_call__Var_105;
                MR_Word check_hlds__simplify__simplify_goal_call__Var_114;
                MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_116;
                MR_Word check_hlds__simplify__simplify_goal_call__PredPieces_117;
                MR_Word check_hlds__simplify__simplify_goal_call__Pieces_118;
                MR_Word check_hlds__simplify__simplify_goal_call__Msg_119;
                MR_Word check_hlds__simplify__simplify_goal_call__Spec_121;

                {
                  check_hlds__simplify__simplify_goal_call__GoalContext_116 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_9);
                }
                {
                  check_hlds__simplify__simplify_goal_call__PredPieces_117 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_6, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__PredId_7);
                }
                check_hlds__simplify__simplify_goal_call__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                {
                  check_hlds__simplify__simplify_goal_call__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Var_90, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Dir_33));
                }
                {
                  check_hlds__simplify__simplify_goal_call__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_89, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_90));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[9])));
                }
                {
                  check_hlds__simplify__simplify_goal_call__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[28])));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_89));
                }
                {
                  check_hlds__simplify__simplify_goal_call__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_83, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_86));
                }
                {
                  check_hlds__simplify__simplify_goal_call__Var_82 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_134_134, check_hlds__simplify__simplify_goal_call__PredPieces_117, check_hlds__simplify__simplify_goal_call__Var_83);
                }
                {
                  check_hlds__simplify__simplify_goal_call__Pieces_118 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_134_134, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[26]), check_hlds__simplify__simplify_goal_call__Var_82);
                }
                {
                  check_hlds__simplify__simplify_goal_call__Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Var_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Pieces_118));
                }
                {
                  check_hlds__simplify__simplify_goal_call__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_104, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_105));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__simplify__simplify_goal_call__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_101, 0) = ((MR_Box) (((MR_Integer) 26 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_101, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_104));
                }
                {
                  check_hlds__simplify__simplify_goal_call__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_100, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_101));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__simplify__simplify_goal_call__Msg_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_119, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_116));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_119, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_100));
                }
                {
                  check_hlds__simplify__simplify_goal_call__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_114, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_119));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__simplify__simplify_goal_call__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_121, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Var_114));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__simplify__simplify_goal_call__MaybeSpec_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Spec_121));
                }
              }
            else
              *check_hlds__simplify__simplify_goal_call__MaybeSpec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

/* :- end_module check_hlds.simplify.simplify_goal_call. */
