/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22;
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24;
  jmp_buf check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0;
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25;
  MR_Box check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__Args_9,
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);

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

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14);

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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5);

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
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6,
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_8,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23);

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(
  MR_Word check_hlds__simplify__simplify_goal_call__Arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[25][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[5][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[2][5];


/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0;
  const MR_Integer check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[5];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[32];



static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[25][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "infinite recursion."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: recursive call will lead to"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "leading to infinite recursion."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with exactly the same input arguments,"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the procedure will call itself"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "If this recursive call is executed,"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: call to obsolete"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[15])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "simplify_inline_builtin_inequality"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
};


static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[5] = {
  /* row 0 */
  {
    (MR_String) "\100<",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "\100=<",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "\100>",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "\100>=",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "compare",
    (MR_Integer) 4
  },
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[32] = {
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


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

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
    MR_Word check_hlds__simplify__simplify_goal_call__V_40_40;
    MR_Word check_hlds__simplify__simplify_goal_call__V_115_115;
    MR_Word check_hlds__simplify__simplify_goal_call__V_116_116;
    MR_Word check_hlds__simplify__simplify_goal_call__V_117_117;
    MR_Word check_hlds__simplify__simplify_goal_call__V_118_118;
    MR_Integer check_hlds__simplify__simplify_goal_call__slot_0;
    MR_String check_hlds__simplify__simplify_goal_call__str_1;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__Globals_18);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__simplify__simplify_goal_call__Globals_18, (MR_Integer) 223, (MR_Integer) 0);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        {
          libs__int_emu__target_bits_per_int_2_p_0(check_hlds__simplify__simplify_goal_call__Globals_18, &check_hlds__simplify__simplify_goal_call__V_40_40);
        }
        check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19 = (MR_Integer) check_hlds__simplify__simplify_goal_call__V_40_40;
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_13)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            check_hlds__simplify__simplify_goal_call__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_call__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_115_115)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_call__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 1)));
                /* hashed string jump switch */
                /* compute the hash value of the input string */
                check_hlds__simplify__simplify_goal_call__slot_0 = ((MR_hash_string5(check_hlds__simplify__simplify_goal_call__PredName_11)) & (MR_Integer) 31);
                /* no collisions; no hash chain loop */
                /* lookup the string for this hash slot */
                check_hlds__simplify__simplify_goal_call__str_1 = ((&check_hlds__simplify__simplify_goal_call_vector_common_7[0 + check_hlds__simplify__simplify_goal_call__slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
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
                            MR_Word check_hlds__simplify__simplify_goal_call__V_53_53;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_54_54;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_55_55;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;
                            MR_Integer check_hlds__simplify__simplify_goal_call__V_59_59;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
                            MR_String check_hlds__simplify__simplify_goal_call__Op_105;
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_106;
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_107;
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_108;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_117_117)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Z_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    {
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_118_118, &check_hlds__simplify__simplify_goal_call__InstY_107);
                                    }
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 2)));
                                        check_hlds__simplify__simplify_goal_call__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 3)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_54_54)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_54_54, (MR_Integer) 0)));
                                            check_hlds__simplify__simplify_goal_call__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_54_54, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_55_55, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_55_55, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_56_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__YVal_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 1)));
                                                        check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Integer) 0;
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_108 >= check_hlds__simplify__simplify_goal_call__V_59_59);
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_108 < check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19);
                                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                              {
                                                                check_hlds__simplify__simplify_goal_call__Op_105 = (MR_String) "unchecked_left_shift";
                                                                check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Integer) 0;
                                                                {
                                                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_105, check_hlds__simplify__simplify_goal_call__V_60_60, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__Z_106, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
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
                            MR_Word check_hlds__simplify__simplify_goal_call__V_63_63;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_65_65;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_66_66;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_67_67;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_69_69;
                            MR_String check_hlds__simplify__simplify_goal_call__Op_99;
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_100;
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_101;
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_102;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_28_28;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_29_29;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_117_117)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Z_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    {
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_118_118, &check_hlds__simplify__simplify_goal_call__InstY_101);
                                    }
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_101)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 2)));
                                        check_hlds__simplify__simplify_goal_call__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 3)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_64_64)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_64_64, (MR_Integer) 0)));
                                            check_hlds__simplify__simplify_goal_call__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_64_64, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_65_65, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_65_65, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_66_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_66_66, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__YVal_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_66_66, (MR_Integer) 1)));
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_102 == (MR_Integer) 0);
                                                        check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__Op_99 = (MR_String) "unchecked_rem";
                                                            check_hlds__simplify__simplify_goal_call__V_69_69 = (MR_Integer) 0;
                                                            {
                                                              check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_99, check_hlds__simplify__simplify_goal_call__V_69_69, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__Z_100, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
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
                            MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_73_73;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_74_74;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_76_76;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_78_78;
                            MR_String check_hlds__simplify__simplify_goal_call__Op_96;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_117_117)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Z_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    {
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_118_118, &check_hlds__simplify__simplify_goal_call__InstY_24);
                                    }
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 2)));
                                        check_hlds__simplify__simplify_goal_call__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 3)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_73_73)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, (MR_Integer) 0)));
                                            check_hlds__simplify__simplify_goal_call__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_74_74, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_74_74, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_75_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__YVal_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, (MR_Integer) 1)));
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_27 == (MR_Integer) 0);
                                                        check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__Op_96 = (MR_String) "unchecked_quotient";
                                                            check_hlds__simplify__simplify_goal_call__V_78_78 = (MR_Integer) 0;
                                                            {
                                                              check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_96, check_hlds__simplify__simplify_goal_call__V_78_78, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__Z_23, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
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

                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Op_93 = (MR_String) "unchecked_rem";
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_93, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
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
                            MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_44_44;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_45_45;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_47_47;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
                            MR_Integer check_hlds__simplify__simplify_goal_call__V_49_49;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_50_50;
                            MR_String check_hlds__simplify__simplify_goal_call__Op_111;
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_112;
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_113;
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_114;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_32_32;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_33_33;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_117_117)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Z_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    {
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_118_118, &check_hlds__simplify__simplify_goal_call__InstY_113);
                                    }
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_113)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 2)));
                                        check_hlds__simplify__simplify_goal_call__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 3)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_44_44)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_call__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_44_44, (MR_Integer) 0)));
                                            check_hlds__simplify__simplify_goal_call__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_44_44, (MR_Integer) 1)));
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_call__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_45_45, (MR_Integer) 0)));
                                                check_hlds__simplify__simplify_goal_call__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_45_45, (MR_Integer) 1)));
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_goal_call__YVal_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_46_46, (MR_Integer) 1)));
                                                        check_hlds__simplify__simplify_goal_call__V_49_49 = (MR_Integer) 0;
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_114 >= check_hlds__simplify__simplify_goal_call__V_49_49);
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_114 < check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19);
                                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                                                              {
                                                                check_hlds__simplify__simplify_goal_call__Op_111 = (MR_String) "unchecked_right_shift";
                                                                check_hlds__simplify__simplify_goal_call__V_50_50 = (MR_Integer) 0;
                                                                {
                                                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_111, check_hlds__simplify__simplify_goal_call__V_50_50, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__Z_112, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
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

                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Op_22 = (MR_String) "unchecked_quotient";
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_22, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
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

                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__Op_90 = (MR_String) "*";
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_90, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
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
    MR_Word check_hlds__simplify__simplify_goal_call__V_38_38;
    MR_Word check_hlds__simplify__simplify_goal_call__V_39_39;
    MR_Word check_hlds__simplify__simplify_goal_call__V_40_40;
    MR_Word check_hlds__simplify__simplify_goal_call__V_41_41;
    MR_String check_hlds__simplify__simplify_goal_call__V_42_42;
    MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
    MR_Word check_hlds__simplify__simplify_goal_call__V_44_44;
    MR_Word check_hlds__simplify__simplify_goal_call__V_45_45;
    MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
    MR_Word check_hlds__simplify__simplify_goal_call__V_47_47;
    MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
    MR_Word check_hlds__simplify__simplify_goal_call__V_49_49;
    MR_Word check_hlds__simplify__simplify_goal_call__V_50_50;
    MR_Word check_hlds__simplify__simplify_goal_call__V_51_51;
    MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;
    MR_String check_hlds__simplify__simplify_goal_call__V_53_53;
    MR_Word check_hlds__simplify__simplify_goal_call__V_54_54;
    MR_Word check_hlds__simplify__simplify_goal_call__V_55_55;
    MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
    MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
    MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
    MR_Word check_hlds__simplify__simplify_goal_call__V_63_63;
    MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
    MR_String check_hlds__simplify__simplify_goal_call__V_65_65;
    MR_Integer check_hlds__simplify__simplify_goal_call__V_66_66;
    MR_Word check_hlds__simplify__simplify_goal_call__V_67_67;
    MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
    MR_String check_hlds__simplify__simplify_goal_call__V_69_69;
    MR_Integer check_hlds__simplify__simplify_goal_call__V_70_70;
    MR_Word check_hlds__simplify__simplify_goal_call__V_71_71;
    MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
    MR_String check_hlds__simplify__simplify_goal_call__V_73_73;
    MR_Integer check_hlds__simplify__simplify_goal_call__V_74_74;
    MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
    MR_Word check_hlds__simplify__simplify_goal_call__V_76_76;
    MR_String check_hlds__simplify__simplify_goal_call__V_77_77;
    MR_Integer check_hlds__simplify__simplify_goal_call__V_78_78;
    MR_Word check_hlds__simplify__simplify_goal_call__V_79_79;
    MR_Word check_hlds__simplify__simplify_goal_call__V_84_84;
    MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
    MR_Word check_hlds__simplify__simplify_goal_call__V_18_18;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__ModuleInfo_13);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_13, &check_hlds__simplify__simplify_goal_call__Globals_14);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__simplify__simplify_goal_call__Globals_14, (MR_Integer) 269, (MR_Integer) 1);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        check_hlds__simplify__simplify_goal_call__TypeInfo_86_86 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
        {
          mercury__list__reverse_2_p_0(check_hlds__simplify__simplify_goal_call__TypeInfo_86_86, check_hlds__simplify__simplify_goal_call__Args_9, &check_hlds__simplify__simplify_goal_call__V_38_38);
        }
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_38_38)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            check_hlds__simplify__simplify_goal_call__Y_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_39_39)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_call__Res_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 1)));
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
                          check_hlds__simplify__simplify_goal_call__V_41_41 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
                        check_hlds__simplify__simplify_goal_call__V_42_42 = (MR_String) "builtin_compound_eq";
                        check_hlds__simplify__simplify_goal_call__V_43_43 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        check_hlds__simplify__simplify_goal_call__V_45_45 = (MR_Integer) 1;
                        check_hlds__simplify__simplify_goal_call__V_46_46 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        check_hlds__simplify__simplify_goal_call__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          check_hlds__simplify__simplify_goal_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_50_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_15));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_51_51));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_47_47, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_16));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_47_47, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_50_50));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__V_49_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
                        {
                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__V_41_41, check_hlds__simplify__simplify_goal_call__V_42_42, check_hlds__simplify__simplify_goal_call__V_43_43, check_hlds__simplify__simplify_goal_call__V_44_44, check_hlds__simplify__simplify_goal_call__V_45_45, check_hlds__simplify__simplify_goal_call__V_46_46, check_hlds__simplify__simplify_goal_call__V_47_47, check_hlds__simplify__simplify_goal_call__V_48_48, check_hlds__simplify__simplify_goal_call__V_49_49, check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Context_21, &check_hlds__simplify__simplify_goal_call__CondEq_22);
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__V_52_52 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
                        check_hlds__simplify__simplify_goal_call__V_53_53 = (MR_String) "builtin_compound_lt";
                        check_hlds__simplify__simplify_goal_call__V_54_54 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        check_hlds__simplify__simplify_goal_call__V_56_56 = (MR_Integer) 1;
                        check_hlds__simplify__simplify_goal_call__V_57_57 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          check_hlds__simplify__simplify_goal_call__V_60_60 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
                        {
                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__V_52_52, check_hlds__simplify__simplify_goal_call__V_53_53, check_hlds__simplify__simplify_goal_call__V_54_54, check_hlds__simplify__simplify_goal_call__V_55_55, check_hlds__simplify__simplify_goal_call__V_56_56, check_hlds__simplify__simplify_goal_call__V_57_57, check_hlds__simplify__simplify_goal_call__V_47_47, check_hlds__simplify__simplify_goal_call__V_59_59, check_hlds__simplify__simplify_goal_call__V_60_60, check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Context_21, &check_hlds__simplify__simplify_goal_call__CondLt_23);
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__Builtin_24 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__V_64_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
                        check_hlds__simplify__simplify_goal_call__V_65_65 = (MR_String) "comparison_result";
                        check_hlds__simplify__simplify_goal_call__V_66_66 = (MR_Integer) 0;
                        check_hlds__simplify__simplify_goal_call__V_69_69 = (MR_String) "=";
                        check_hlds__simplify__simplify_goal_call__V_70_70 = (MR_Integer) 0;
                        {
                          check_hlds__simplify__simplify_goal_call__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_64_64));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_65_65));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__TypeCtor_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_63_63));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_66_66));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_69_69));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_68_68));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_70_70));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
                        }
                        {
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_67_67, &check_hlds__simplify__simplify_goal_call__ReturnEq_26);
                        }
                        check_hlds__simplify__simplify_goal_call__V_73_73 = (MR_String) "<";
                        check_hlds__simplify__simplify_goal_call__V_74_74 = (MR_Integer) 0;
                        {
                          check_hlds__simplify__simplify_goal_call__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_72_72, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_72_72, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_73_73));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_72_72));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_74_74));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
                        }
                        {
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_71_71, &check_hlds__simplify__simplify_goal_call__ReturnLt_27);
                        }
                        check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_String) ">";
                        check_hlds__simplify__simplify_goal_call__V_78_78 = (MR_Integer) 0;
                        {
                          check_hlds__simplify__simplify_goal_call__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_76_76));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_78_78));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
                        }
                        {
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_75_75, &check_hlds__simplify__simplify_goal_call__ReturnGt_28);
                        }
                        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          check_hlds__simplify__simplify_goal_call__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_79_79, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Res_17));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_79_79, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_47_47));
                        }
                        {
                          check_hlds__simplify__simplify_goal_call__NonLocals_29 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_call__V_79_79);
                        }
                        {
                          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__NonLocals_29, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33);
                        }
                        check_hlds__simplify__simplify_goal_call__V_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        check_hlds__simplify__simplify_goal_call__V_85_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34;
                        {
                          check_hlds__simplify__simplify_goal_call__RestExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_84_84));
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
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_85_85));
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
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33;

    {
      check_hlds__simplify__simplify_goal_call__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__simplify__simplify_goal_call__InstMap0_9, check_hlds__simplify__simplify_goal_call__InstMap0_12);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_13, (MR_String) "int") == 0))
          {
            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__PredName_14, check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
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
                check_hlds__simplify__simplify_goal_call__result_3 = MR_strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, ((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + check_hlds__simplify__simplify_goal_call__mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0);
                if ((check_hlds__simplify__simplify_goal_call__result_3 == (MR_Integer) 0))
                  {
                    switch (((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + check_hlds__simplify__simplify_goal_call__mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          /* case "@<" */
                          {
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_23;
                            MR_Word check_hlds__simplify__simplify_goal_call__X_24;
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_25;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_32_32;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__TI_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_call__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_30_30, (MR_Integer) 0)));
                                    check_hlds__simplify__simplify_goal_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_30_30, (MR_Integer) 1)));
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_31_31)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Y_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_31_31, (MR_Integer) 0)));
                                        check_hlds__simplify__simplify_goal_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_31_31, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            {
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_23, check_hlds__simplify__simplify_goal_call__X_24, check_hlds__simplify__simplify_goal_call__Y_25, (MR_String) "<", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
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
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_37;
                            MR_Word check_hlds__simplify__simplify_goal_call__X_38;
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_39;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_40_40;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_41_41;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__TI_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_call__X_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 0)));
                                    check_hlds__simplify__simplify_goal_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 1)));
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_41_41)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Y_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_41_41, (MR_Integer) 0)));
                                        check_hlds__simplify__simplify_goal_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_41_41, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            {
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_37, check_hlds__simplify__simplify_goal_call__X_38, check_hlds__simplify__simplify_goal_call__Y_39, (MR_String) ">", (MR_Integer) 1, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
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
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_45;
                            MR_Word check_hlds__simplify__simplify_goal_call__X_46;
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_47;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_49_49;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_50_50;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__TI_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_48_48)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_call__X_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_48_48, (MR_Integer) 0)));
                                    check_hlds__simplify__simplify_goal_call__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_48_48, (MR_Integer) 1)));
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_49_49)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Y_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_49_49, (MR_Integer) 0)));
                                        check_hlds__simplify__simplify_goal_call__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_49_49, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            {
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_45, check_hlds__simplify__simplify_goal_call__X_46, check_hlds__simplify__simplify_goal_call__Y_47, (MR_String) ">", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
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
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_53;
                            MR_Word check_hlds__simplify__simplify_goal_call__X_54;
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_55;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
                            MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;

                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__TI_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
                                check_hlds__simplify__simplify_goal_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_56_56)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_call__X_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 0)));
                                    check_hlds__simplify__simplify_goal_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 1)));
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_57_57)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_call__Y_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_57_57, (MR_Integer) 0)));
                                        check_hlds__simplify__simplify_goal_call__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_57_57, (MR_Integer) 1)));
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
                                          {
                                            {
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_53, check_hlds__simplify__simplify_goal_call__X_54, check_hlds__simplify__simplify_goal_call__Y_55, (MR_String) "<", (MR_Integer) 1, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
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
                            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
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
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27);
            }
            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
          }
      }
    return check_hlds__simplify__simplify_goal_call__succeeded;
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

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2;

    {
      check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2));
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2;

    {
      check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2));
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
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
    MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
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
                check_hlds__simplify__simplify_goal_call__V_46_46 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[1];
                {
                  check_hlds__simplify__simplify_goal_call__ArgVars_32 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58, check_hlds__simplify__simplify_goal_call__TypeInfo_59_59, check_hlds__simplify__simplify_goal_call__V_46_46, check_hlds__simplify__simplify_goal_call__Args0_22);
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
              MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;

              {
                check_hlds__simplify__simplify_goal_call__Args_35 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[2], check_hlds__simplify__simplify_goal_call__Args0_22);
              }
              {
                check_hlds__simplify__simplify_goal_call__ExtraArgs_36 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[3], check_hlds__simplify__simplify_goal_call__ExtraArgs0_23);
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
              check_hlds__simplify__simplify_goal_call__ArgVars_55 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0], (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[4], check_hlds__simplify__simplify_goal_call__Args_35);
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
    MR_Word check_hlds__simplify__simplify_goal_call__V_22_22;

    *check_hlds__simplify__simplify_goal_call__GoalInfo_4 = check_hlds__simplify__simplify_goal_call__GoalInfo_13;
    check_hlds__simplify__simplify_goal_call__GenericCall_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
    check_hlds__simplify__simplify_goal_call__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
    check_hlds__simplify__simplify_goal_call__Modes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
    check_hlds__simplify__simplify_goal_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
    check_hlds__simplify__simplify_goal_call__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__GenericCall_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__simplify_goal_call__Closure_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__simplify_goal_call__Purity_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__simplify_goal_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 2)));
          MR_Integer check_hlds__simplify__simplify_goal_call__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 3)));
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_goal_call__V_14_14;

    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        check_hlds__simplify__simplify_goal_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
        (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_14_14));
        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
      }
    return check_hlds__simplify__simplify_goal_call__succeeded;
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
    MR_Word check_hlds__simplify__simplify_goal_call__V_35_35;
    MR_Word check_hlds__simplify__simplify_goal_call__V_36_36;
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
    MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;

    {
      check_hlds__simplify__simplify_goal_call__IntModuleSymName_15 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_3[3]);
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
        check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 1)));
        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      check_hlds__simplify__simplify_goal_call__OpPredId_21 = check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
    else
      {
        MR_String check_hlds__simplify__simplify_goal_call__V_33_33;

        {
          check_hlds__simplify__simplify_goal_call__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find ", check_hlds__simplify__simplify_goal_call__Op_9);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_call", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_make_int_binary_op_goal_expr\'/7", check_hlds__simplify__simplify_goal_call__V_33_33);
          return;
        }
      }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_1(&check_hlds__simplify__simplify_goal_call__OpProcId_23, (MR_Integer) 0);
    }
    {
      check_hlds__simplify__simplify_goal_call__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Z_13));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_35_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_12));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_35_35, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_36_36));
    }
    {
      check_hlds__simplify__simplify_goal_call__OpArgs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_11));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_35_35));
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
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;
    MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_34;
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_35;
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_36;
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_37;
    MR_Word check_hlds__simplify__simplify_goal_call__ConstConsId_38;
    MR_Word check_hlds__simplify__simplify_goal_call__Unification_39;
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_40;
    MR_Word check_hlds__simplify__simplify_goal_call__Ground_42;
    MR_Word check_hlds__simplify__simplify_goal_call__Mode_43;
    MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr_44;
    MR_Word check_hlds__simplify__simplify_goal_call__NonLocals_45;
    MR_Word check_hlds__simplify__simplify_goal_call__InstMapDelta_46;
    MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_47;
    MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49;
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
    MR_Word check_hlds__simplify__simplify_goal_call__V_62_62;

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
      check_hlds__simplify__simplify_goal_call__V_48_48 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__V_48_48, check_hlds__simplify__simplify_goal_call__VarTypes0_35, &check_hlds__simplify__simplify_goal_call__VarTypes_37);
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
      check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_60_60, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_62_62, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_62_62, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
    }
    {
      check_hlds__simplify__simplify_goal_call__Mode_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Mode_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_60_60));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Mode_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_62_62));
    }
    {
      check_hlds__simplify__simplify_goal_call__GoalExpr_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_16));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_40));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Mode_43));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unification_39));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[24]));
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
      check_hlds__simplify__simplify_goal_call__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_26_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoal_19));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_25_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstGoal_17));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_25_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_26_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__simplify__simplify_goal_call__GoalExpr_13 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_25_25));
    }
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
    MR_Word check_hlds__simplify__simplify_goal_call__UMode_44;
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_45;
    MR_Word check_hlds__simplify__simplify_goal_call__UKind_46;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyExpr_48;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyInfo_51;
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyGoal_52;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55;
    MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
    MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;
    MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
    MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
    MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
    MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
    MR_Word check_hlds__simplify__simplify_goal_call__V_73_73;
    MR_Word check_hlds__simplify__simplify_goal_call__V_74_74;
    MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;
    MR_Word check_hlds__simplify__simplify_goal_call__V_81_81;
    MR_Word check_hlds__simplify__simplify_goal_call__V_82_82;
    MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
    MR_Word check_hlds__simplify__simplify_goal_call__V_86_86;

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
      check_hlds__simplify__simplify_goal_call__V_56_56 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__V_56_56, check_hlds__simplify__simplify_goal_call__VarTypes0_23, &check_hlds__simplify__simplify_goal_call__VarTypes_24);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_24, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);
    }
    {
      check_hlds__simplify__simplify_goal_call__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_16);
    }
    {
      check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_60_60, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_13));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_12));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_59_59, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_60_60));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_58_58, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_58_58, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_59_59));
    }
    {
      check_hlds__simplify__simplify_goal_call__Args_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TI_11));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_58_58));
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
    check_hlds__simplify__simplify_goal_call__Unique_31 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0]);
    {
      check_hlds__simplify__simplify_goal_call__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_31));
    }
    {
      check_hlds__simplify__simplify_goal_call__ArgInsts_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_64_64));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__BuiltinModule_33 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__simplify__simplify_goal_call__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ModeNo_30));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_72_72 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__simplify_goal_call__ArgInsts_32);
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__BuiltinModule_33, (MR_String) "compare", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__V_68_68, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__Args_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_call__V_72_72, check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__Context_25, &check_hlds__simplify__simplify_goal_call__CmpGoal0_34);
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
      check_hlds__simplify__simplify_goal_call__V_74_74 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__simplify__simplify_goal_call__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_74_74));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      check_hlds__simplify__simplify_goal_call__TypeCtor_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_41, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_73_73));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_41, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__BuiltinModule_33));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Inequality_14));
    }
    {
      check_hlds__simplify__simplify_goal_call__ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_41));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_82_82, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_81_81, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_82_82));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_call__Bound_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_81_81));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_85_85, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_31));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_85_85, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
    }
    {
      check_hlds__simplify__simplify_goal_call__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_86_86, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_86_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
    }
    {
      check_hlds__simplify__simplify_goal_call__UMode_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UMode_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_85_85));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UMode_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_86_86));
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
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UMode_44));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UKind_46));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[23]));
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
          MR_Word check_hlds__simplify__simplify_goal_call__V_104_104;
          MR_Word check_hlds__simplify__simplify_goal_call__V_105_105;

          {
            check_hlds__simplify__simplify_goal_call__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyGoal_52));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__simplify_goal_call__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_104_104, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_40));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_104_104, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_105_105));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_104_104));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__simplify_goal_call__V_98_98;
          MR_Word check_hlds__simplify__simplify_goal_call__V_99_99;
          MR_Word check_hlds__simplify__simplify_goal_call__V_100_100;
          MR_Word check_hlds__simplify__simplify_goal_call__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_goal_call__UnifyGoal_52);

          {
            check_hlds__simplify__simplify_goal_call__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_100_100, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_101_101));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_100_100, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyInfo_51));
          }
          {
            check_hlds__simplify__simplify_goal_call__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_99_99, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_100_100));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__simplify_goal_call__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_98_98, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_40));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_98_98, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_99_99));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_98_98));
          }
        }
        break;
    }
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
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1__tmp_copy_1 = check_hlds__simplify__simplify_goal_call__Args_10;
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_call__HeadVars_12;
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3__tmp_copy_3 = check_hlds__simplify__simplify_goal_call__Modes_14;

                          check_hlds__simplify__simplify_goal_call__HeadVar__3_3 = check_hlds__simplify__simplify_goal_call__HeadVar__3__tmp_copy_3;
                          check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__HeadVar__2__tmp_copy_2;
                          check_hlds__simplify__simplify_goal_call__HeadVar__1_1 = check_hlds__simplify__simplify_goal_call__HeadVar__1__tmp_copy_1;
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

    (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25 = ((MR_Word) (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25);
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
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25);
    }
    if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
      {
        {
          (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25);
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
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24, check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3, check_hlds__simplify__simplify_goal_call__env_ptr);
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
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35)
{
  {
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s check_hlds__simplify__simplify_goal_call__env;

    {
      MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_23;
      MR_Word check_hlds__simplify__simplify_goal_call__Purity_27;
      MR_Integer check_hlds__simplify__simplify_goal_call__V_36_36;
      MR_Word check_hlds__simplify__simplify_goal_call__V_83_83;
      MR_Integer check_hlds__simplify__simplify_goal_call__V_84_84;
      MR_Word check_hlds__simplify__simplify_goal_call__V_80_80;
      MR_Word check_hlds__simplify__simplify_goal_call__V_81_81;
      MR_Word check_hlds__simplify__simplify_goal_call__V_37_37;
      MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
      MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;

      {
        (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34);
      }
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
        {
          {
            check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__V_83_83, &check_hlds__simplify__simplify_goal_call__V_84_84);
          }
          {
            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_12, check_hlds__simplify__simplify_goal_call__V_83_83);
          }
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
            {
              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__ProcId_13 == check_hlds__simplify__simplify_goal_call__V_84_84);
              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                {
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__IsBuiltin_15 == (MR_Integer) 0);
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                    {
                      check_hlds__simplify__simplify_goal_call__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 0)));
                      check_hlds__simplify__simplify_goal_call__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 1)));
                      check_hlds__simplify__simplify_goal_call__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 2)));
                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__V_36_36 == (MR_Integer) 0);
                      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                        {
                          {
                            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22);
                          }
                          {
                            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &check_hlds__simplify__simplify_goal_call__HeadVars_23);
                          }
                          {
                            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24);
                          }
                          {
                            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(check_hlds__simplify__simplify_goal_call__Args_14, check_hlds__simplify__simplify_goal_call__HeadVars_23, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24, check_hlds__simplify__simplify_goal_call__Common_20, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22);
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
                                    check_hlds__simplify__simplify_goal_call__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__V_37_37, 0) = NULL;
                                  }
                                  {
                                    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &check_hlds__simplify__simplify_goal_call__V_85_85);
                                  }
                                  {
                                    (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(check_hlds__simplify__simplify_goal_call__V_37_37, check_hlds__simplify__simplify_goal_call__V_85_85);
                                  }
                                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
                                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
                                    {
                                      {
                                        hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_16, &check_hlds__simplify__simplify_goal_call__Purity_27);
                                      }
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__Purity_27 == (MR_Integer) 2);
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
          MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_28;
          MR_Word check_hlds__simplify__simplify_goal_call__Msg_31;
          MR_Word check_hlds__simplify__simplify_goal_call__Spec_33;
          MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;

          {
            check_hlds__simplify__simplify_goal_call__GoalContext_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_18);
          }
          {
            check_hlds__simplify__simplify_goal_call__Msg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_28));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
          }
          {
            check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_31));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__simplify_goal_call__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_3[0])));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
          }
          {
            check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_call__Spec_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);
          }
        }
      else
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6,
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_8,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_10;
    MR_Word check_hlds__simplify__simplify_goal_call__Markers_11;
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredId_12;
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredInfo_14;
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15;
    MR_Word check_hlds__simplify__simplify_goal_call__V_24_24;
    MR_Integer check_hlds__simplify__simplify_goal_call__V_13_13;
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, &check_hlds__simplify__simplify_goal_call__ModuleInfo_10);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        {
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_7, &check_hlds__simplify__simplify_goal_call__Markers_11);
        }
        check_hlds__simplify__simplify_goal_call__V_24_24 = (MR_Integer) 4;
        {
          check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__Markers_11, check_hlds__simplify__simplify_goal_call__V_24_24);
        }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            {
              check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, &check_hlds__simplify__simplify_goal_call__ThisPredId_12, &check_hlds__simplify__simplify_goal_call__V_13_13);
            }
            {
              check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_6, check_hlds__simplify__simplify_goal_call__ThisPredId_12);
            }
            check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                {
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_10, check_hlds__simplify__simplify_goal_call__ThisPredId_12, &check_hlds__simplify__simplify_goal_call__ThisPredInfo_14);
                }
                {
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredInfo_14, &check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15);
                }
                check_hlds__simplify__simplify_goal_call__V_25_25 = (MR_Integer) 4;
                {
                  check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15, check_hlds__simplify__simplify_goal_call__V_25_25);
                }
                check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
              }
          }
      }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55;
        MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_16;
        MR_Word check_hlds__simplify__simplify_goal_call__PredPieces_17;
        MR_Word check_hlds__simplify__simplify_goal_call__Pieces_18;
        MR_Word check_hlds__simplify__simplify_goal_call__Msg_19;
        MR_Word check_hlds__simplify__simplify_goal_call__Spec_21;
        MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;
        MR_Word check_hlds__simplify__simplify_goal_call__V_38_38;
        MR_Word check_hlds__simplify__simplify_goal_call__V_39_39;
        MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;
        MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
        MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;

        {
          check_hlds__simplify__simplify_goal_call__GoalContext_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_8);
        }
        {
          check_hlds__simplify__simplify_goal_call__PredPieces_17 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_10, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__PredId_6);
        }
        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          check_hlds__simplify__simplify_goal_call__V_31_31 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55, check_hlds__simplify__simplify_goal_call__PredPieces_17, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3]));
        }
        {
          check_hlds__simplify__simplify_goal_call__Pieces_18 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]), check_hlds__simplify__simplify_goal_call__V_31_31);
        }
        {
          check_hlds__simplify__simplify_goal_call__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Pieces_18));
        }
        {
          check_hlds__simplify__simplify_goal_call__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_43_43));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__simplify_goal_call__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, 0) = ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10)))));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_42_42));
        }
        {
          check_hlds__simplify__simplify_goal_call__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_39_39));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__simplify_goal_call__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_19, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_16));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_19, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_38_38));
        }
        {
          check_hlds__simplify__simplify_goal_call__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_19));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__simplify_goal_call__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_3[0])));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_52_52));
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_call__Spec_21, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23);
        }
      }
    else
      *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22;
  }
}

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(
  MR_Word check_hlds__simplify__simplify_goal_call__Arg_3)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2;
    MR_Word check_hlds__simplify__simplify_goal_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_goal_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_goal_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 3)));

    {
      check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_5_5));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_6_6));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_7_7));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 1));
    }
    return check_hlds__simplify__simplify_goal_call__HeadVar__2_2;
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
check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_15,
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_17,
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_18,
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_40,
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41)
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
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleSymName_29;
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_30;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42;
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
    MR_Word check_hlds__simplify__simplify_goal_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
    MR_String check_hlds__simplify__simplify_goal_call__ModuleName_31;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_40, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__PredInfo_27, &check_hlds__simplify__simplify_goal_call__ProcInfo_28);
    }
    {
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_40, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42);
    }
    {
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__IsBuiltin_23, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__ProcInfo_28, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__NestedContext_15, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43);
    }
    {
      check_hlds__simplify__simplify_goal_call__ModuleSymName_29 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, &check_hlds__simplify__simplify_goal_call__Globals_30);
    }
    {
      check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleSymName_29, &check_hlds__simplify__simplify_goal_call__ModuleName_31);
    }
    if (check_hlds__simplify__simplify_goal_call__succeeded)
      {
        MR_String check_hlds__simplify__simplify_goal_call__PredName_32;
        MR_Integer check_hlds__simplify__simplify_goal_call__ModeNum_33;
        MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_34;
        MR_Word check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35;
        MR_Word check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36;

        {
          check_hlds__simplify__simplify_goal_call__PredName_32 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__ModeNum_33);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__VarTypes_34);
        }
        {
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43);
        }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            check_hlds__simplify__simplify_goal_call__succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(check_hlds__simplify__simplify_goal_call__Globals_30, check_hlds__simplify__simplify_goal_call__VarTypes_34, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__ModeNum_33, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36);
          }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35;
            *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36;
            *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
            {
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41);
            }
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_call__OptDupCalls_62;

            {
              check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__OptDupCalls_62);
            }
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
                MR_Word check_hlds__simplify__simplify_goal_call__Purity_63;
                MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64;
                MR_Word check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65;

                {
                  check_hlds__simplify__simplify_goal_call__Purity_63 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo0_13);
                }
                {
                  check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__Purity_63, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45);
                }
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDupCalls_62 == (MR_Integer) 1);
                  }
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65;
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
                  }
                else
                  {
                    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38;
                    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39;
                    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47;

                    {
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47);
                    }
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
                      {
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47;
                        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38;
                        *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39;
                      }
                    else
                      {
                        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
                        *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
                      }
                  }
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84;
                MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85;
                MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86;

                *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
                {
                  check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86);
                }
                if (check_hlds__simplify__simplify_goal_call__succeeded)
                  {
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86;
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84;
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85;
                  }
                else
                  {
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
                  }
              }
          }
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_call__OptDupCalls_78;

        {
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__OptDupCalls_78);
        }
        if (check_hlds__simplify__simplify_goal_call__succeeded)
          {
            MR_Word check_hlds__simplify__simplify_goal_call__Purity_79;
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80;
            MR_Word check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81;

            {
              check_hlds__simplify__simplify_goal_call__Purity_79 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo0_13);
            }
            {
              check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__Purity_79, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41);
            }
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDupCalls_78 == (MR_Integer) 1);
              }
            if (check_hlds__simplify__simplify_goal_call__succeeded)
              {
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81;
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
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
            *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_goal_call. */
