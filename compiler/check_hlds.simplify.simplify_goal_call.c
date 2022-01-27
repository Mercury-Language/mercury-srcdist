/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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
#include "check_hlds.inst_match.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.const_prop.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 351 "simplify_goal_call.m"
struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s {
#line 437 "simplify_goal_call.m"
  MR_bool check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded;
#line 362 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22;
#line 362 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24;
#line 397 "simplify_goal_call.m"
  jmp_buf check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0;
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25;
#line 399 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25;
#line 351 "simplify_goal_call.m"
};


#line 167 "check_hlds.simplify.simplify_goal_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 664 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(
#line 664 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_10,
#line 664 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_11,
#line 664 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_13,
#line 664 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14,
#line 664 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_33,
#line 664 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_34,
#line 664 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35,
#line 664 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);

#line 614 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
#line 614 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_9,
#line 614 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10,
#line 614 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32,
#line 614 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33,
#line 614 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 614 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);

#line 504 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(
#line 504 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_12,
#line 504 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__ModuleName_13,
#line 504 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_14,
#line 504 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_16,
#line 504 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 504 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_18,
#line 504 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19,
#line 504 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_9,
#line 504 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26,
#line 504 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27);

#line 273 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
#line 273 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 273 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 265 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
#line 265 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 265 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 264 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
#line 264 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 264 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 247 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
#line 247 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 247 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 408 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(
#line 408 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 408 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2);

#line 784 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(
#line 784 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
#line 784 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 784 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
#line 784 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
#line 784 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 784 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
#line 784 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14);

#line 745 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(
#line 745 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 745 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_10,
#line 745 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__IntConst_11,
#line 745 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 745 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_13,
#line 745 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14,
#line 745 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20,
#line 745 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21);

#line 544 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__TI_11,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_12,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_13,
#line 544 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Inequality_14,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Invert_15,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_16,
#line 544 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_18,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53,
#line 544 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);

#line 448 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
#line 448 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 448 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
#line 448 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
#line 448 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
#line 448 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5);

#line 397 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(
#line 397 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 399 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3(
#line 399 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 397 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(
#line 397 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 397 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(
#line 397 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 351 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_12,
#line 351 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_13,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_14,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_15,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_16,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_17,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_18,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_19,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common_20,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 351 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);

#line 303 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
#line 303 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6,
#line 303 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7,
#line 303 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_8,
#line 303 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22,
#line 303 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23);

#line 291 "simplify_goal_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(
#line 291 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[25][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[5][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[2][5];




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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "infinite recursion."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: recursive call will lead to"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "leading to infinite recursion."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with exactly the same input arguments,"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the procedure will call itself"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "If this recursive call is executed,"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10))))),
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
    ((MR_Box) ((MR_Integer) 19)),
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



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 656 "check_hlds.simplify.simplify_goal_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 664 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(
#line 664 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_10,
#line 664 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_11,
#line 664 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_13,
#line 664 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14,
#line 664 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_33,
#line 664 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_34,
#line 664 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35,
#line 664 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36)
#line 664 "simplify_goal_call.m"
{
#line 670 "simplify_goal_call.m"
  {
#line 670 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 670 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_17;
#line 670 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_18;
#line 670 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_118_118;
#line 670 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_119_119;
#line 670 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_120_120;
#line 670 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_121_121;

#line 671 "simplify_goal_call.m"
    {
#line 671 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
#line 672 "simplify_goal_call.m"
    {
#line 672 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__Globals_18);
    }
#line 673 "simplify_goal_call.m"
    {
#line 673 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__simplify__simplify_goal_call__Globals_18, (MR_Integer) 666, (MR_Integer) 0);
    }
#line 670 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 670 "simplify_goal_call.m"
      {
#line 700 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 700 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 700 "simplify_goal_call.m"
          {
#line 700 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 0)));
#line 700 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 1)));
#line 700 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_118_118)) == (MR_mktag((MR_Integer) 1)));
#line 700 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 700 "simplify_goal_call.m"
              {
#line 700 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_118_118, (MR_Integer) 0)));
#line 700 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_118_118, (MR_Integer) 1)));
#line 682 "simplify_goal_call.m"
                if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "<<") == 0))
#line 717 "simplify_goal_call.m"
                  {
#line 717 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;
#line 717 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_53_53;
#line 717 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_54_54;
#line 717 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_55_55;
#line 717 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 717 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
#line 717 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__V_58_58;
#line 717 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__V_59_59;
#line 717 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 717 "simplify_goal_call.m"
                    MR_String check_hlds__simplify__simplify_goal_call__Op_108;
#line 717 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__Z_109;
#line 717 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__InstY_110;
#line 717 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__YVal_111;
#line 720 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_29_29;
#line 720 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;

#line 718 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_120_120)) == (MR_mktag((MR_Integer) 1)));
#line 718 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 718 "simplify_goal_call.m"
                      {
#line 718 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__Z_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_120_120, (MR_Integer) 0)));
#line 718 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_120_120, (MR_Integer) 1)));
#line 718 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "simplify_goal_call.m"
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 717 "simplify_goal_call.m"
                          {
#line 719 "simplify_goal_call.m"
                            {
#line 719 "simplify_goal_call.m"
                              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_121_121, &check_hlds__simplify__simplify_goal_call__InstY_110);
                            }
#line 720 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_110)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_110, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 720 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 720 "simplify_goal_call.m"
                              {
#line 720 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_110, (MR_Integer) 1)));
#line 720 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_110, (MR_Integer) 2)));
#line 720 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_110, (MR_Integer) 3)));
#line 720 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 720 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 720 "simplify_goal_call.m"
                                  {
#line 720 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_53_53, (MR_Integer) 0)));
#line 720 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_53_53, (MR_Integer) 1)));
#line 720 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 717 "simplify_goal_call.m"
                                      {
#line 720 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_54_54, (MR_Integer) 0)));
#line 720 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_54_54, (MR_Integer) 1)));
#line 720 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 717 "simplify_goal_call.m"
                                          {
#line 720 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_55_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_55_55, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 720 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 720 "simplify_goal_call.m"
                                              {
#line 720 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__YVal_111 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_55_55, (MR_Integer) 1)));
#line 721 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_58_58 = (MR_Integer) 0;
#line 721 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_111 >= check_hlds__simplify__simplify_goal_call__V_58_58);
#line 717 "simplify_goal_call.m"
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 717 "simplify_goal_call.m"
                                                  {
#line 722 "simplify_goal_call.m"
                                                    {
#line 722 "simplify_goal_call.m"
                                                      check_hlds__simplify__simplify_goal_call__V_59_59 = mercury__int__bits_per_int_0_f_0();
                                                    }
#line 722 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_111 < check_hlds__simplify__simplify_goal_call__V_59_59);
#line 717 "simplify_goal_call.m"
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 717 "simplify_goal_call.m"
                                                      {
#line 723 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__Op_108 = (MR_String) "unchecked_left_shift";
#line 724 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Integer) 0;
#line 724 "simplify_goal_call.m"
                                                        {
#line 724 "simplify_goal_call.m"
                                                          check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__Op_108, check_hlds__simplify__simplify_goal_call__V_60_60, check_hlds__simplify__simplify_goal_call__V_119_119, check_hlds__simplify__simplify_goal_call__V_121_121, check_hlds__simplify__simplify_goal_call__Z_109, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                        }
#line 717 "simplify_goal_call.m"
                                                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35;
#line 717 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 717 "simplify_goal_call.m"
                                                      }
#line 717 "simplify_goal_call.m"
                                                  }
#line 720 "simplify_goal_call.m"
                                              }
#line 717 "simplify_goal_call.m"
                                          }
#line 717 "simplify_goal_call.m"
                                      }
#line 720 "simplify_goal_call.m"
                                  }
#line 720 "simplify_goal_call.m"
                              }
#line 717 "simplify_goal_call.m"
                          }
#line 718 "simplify_goal_call.m"
                      }
#line 717 "simplify_goal_call.m"
                  }
#line 682 "simplify_goal_call.m"
                else
#line 682 "simplify_goal_call.m"
                if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) ">>") == 0))
#line 727 "simplify_goal_call.m"
                  {
#line 727 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_41_41;
#line 727 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;
#line 727 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
#line 727 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_44_44;
#line 727 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_45_45;
#line 727 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 727 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__V_47_47;
#line 727 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__V_48_48;
#line 727 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_49_49;
#line 727 "simplify_goal_call.m"
                    MR_String check_hlds__simplify__simplify_goal_call__Op_114;
#line 727 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__Z_115;
#line 727 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__InstY_116;
#line 727 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__YVal_117;
#line 730 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;
#line 730 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_32_32;

#line 728 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_120_120)) == (MR_mktag((MR_Integer) 1)));
#line 728 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 728 "simplify_goal_call.m"
                      {
#line 728 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__Z_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_120_120, (MR_Integer) 0)));
#line 728 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_120_120, (MR_Integer) 1)));
#line 728 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "simplify_goal_call.m"
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 727 "simplify_goal_call.m"
                          {
#line 729 "simplify_goal_call.m"
                            {
#line 729 "simplify_goal_call.m"
                              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_121_121, &check_hlds__simplify__simplify_goal_call__InstY_116);
                            }
#line 730 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_116)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_116, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 730 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 730 "simplify_goal_call.m"
                              {
#line 730 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_116, (MR_Integer) 1)));
#line 730 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_116, (MR_Integer) 2)));
#line 730 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_116, (MR_Integer) 3)));
#line 730 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 730 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 730 "simplify_goal_call.m"
                                  {
#line 730 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, (MR_Integer) 0)));
#line 730 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, (MR_Integer) 1)));
#line 730 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 727 "simplify_goal_call.m"
                                      {
#line 730 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_43_43, (MR_Integer) 0)));
#line 730 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_43_43, (MR_Integer) 1)));
#line 730 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 727 "simplify_goal_call.m"
                                          {
#line 730 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_44_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_44_44, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 730 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 730 "simplify_goal_call.m"
                                              {
#line 730 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__YVal_117 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_44_44, (MR_Integer) 1)));
#line 731 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_47_47 = (MR_Integer) 0;
#line 731 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_117 >= check_hlds__simplify__simplify_goal_call__V_47_47);
#line 727 "simplify_goal_call.m"
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 727 "simplify_goal_call.m"
                                                  {
#line 732 "simplify_goal_call.m"
                                                    {
#line 732 "simplify_goal_call.m"
                                                      check_hlds__simplify__simplify_goal_call__V_48_48 = mercury__int__bits_per_int_0_f_0();
                                                    }
#line 732 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_117 < check_hlds__simplify__simplify_goal_call__V_48_48);
#line 727 "simplify_goal_call.m"
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 727 "simplify_goal_call.m"
                                                      {
#line 733 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__Op_114 = (MR_String) "unchecked_right_shift";
#line 734 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__V_49_49 = (MR_Integer) 0;
#line 734 "simplify_goal_call.m"
                                                        {
#line 734 "simplify_goal_call.m"
                                                          check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__Op_114, check_hlds__simplify__simplify_goal_call__V_49_49, check_hlds__simplify__simplify_goal_call__V_119_119, check_hlds__simplify__simplify_goal_call__V_121_121, check_hlds__simplify__simplify_goal_call__Z_115, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                        }
#line 727 "simplify_goal_call.m"
                                                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35;
#line 727 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 727 "simplify_goal_call.m"
                                                      }
#line 727 "simplify_goal_call.m"
                                                  }
#line 730 "simplify_goal_call.m"
                                              }
#line 727 "simplify_goal_call.m"
                                          }
#line 727 "simplify_goal_call.m"
                                      }
#line 730 "simplify_goal_call.m"
                                  }
#line 730 "simplify_goal_call.m"
                              }
#line 727 "simplify_goal_call.m"
                          }
#line 728 "simplify_goal_call.m"
                      }
#line 727 "simplify_goal_call.m"
                  }
#line 682 "simplify_goal_call.m"
                else
#line 682 "simplify_goal_call.m"
                if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "rem") == 0))
#line 708 "simplify_goal_call.m"
                  {
#line 708 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_63_63;
#line 708 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
#line 708 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_65_65;
#line 708 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_66_66;
#line 708 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_67_67;
#line 708 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
#line 708 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_69_69;
#line 708 "simplify_goal_call.m"
                    MR_String check_hlds__simplify__simplify_goal_call__Op_102;
#line 708 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__Z_103;
#line 708 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__InstY_104;
#line 708 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__YVal_105;
#line 711 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_27_27;
#line 711 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_28_28;

#line 709 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_120_120)) == (MR_mktag((MR_Integer) 1)));
#line 709 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 709 "simplify_goal_call.m"
                      {
#line 709 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__Z_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_120_120, (MR_Integer) 0)));
#line 709 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_120_120, (MR_Integer) 1)));
#line 709 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "simplify_goal_call.m"
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 708 "simplify_goal_call.m"
                          {
#line 710 "simplify_goal_call.m"
                            {
#line 710 "simplify_goal_call.m"
                              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_121_121, &check_hlds__simplify__simplify_goal_call__InstY_104);
                            }
#line 711 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_104)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_104, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 711 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 711 "simplify_goal_call.m"
                              {
#line 711 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_104, (MR_Integer) 1)));
#line 711 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_104, (MR_Integer) 2)));
#line 711 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_104, (MR_Integer) 3)));
#line 711 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 711 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 711 "simplify_goal_call.m"
                                  {
#line 711 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_64_64, (MR_Integer) 0)));
#line 711 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_64_64, (MR_Integer) 1)));
#line 711 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 708 "simplify_goal_call.m"
                                      {
#line 711 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_65_65, (MR_Integer) 0)));
#line 711 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_65_65, (MR_Integer) 1)));
#line 711 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 708 "simplify_goal_call.m"
                                          {
#line 711 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_66_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_66_66, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 711 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 711 "simplify_goal_call.m"
                                              {
#line 711 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__YVal_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_66_66, (MR_Integer) 1)));
#line 712 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_105 == (MR_Integer) 0);
#line 712 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 708 "simplify_goal_call.m"
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 708 "simplify_goal_call.m"
                                                  {
#line 713 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__Op_102 = (MR_String) "unchecked_rem";
#line 714 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__V_69_69 = (MR_Integer) 0;
#line 714 "simplify_goal_call.m"
                                                    {
#line 714 "simplify_goal_call.m"
                                                      check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__Op_102, check_hlds__simplify__simplify_goal_call__V_69_69, check_hlds__simplify__simplify_goal_call__V_119_119, check_hlds__simplify__simplify_goal_call__V_121_121, check_hlds__simplify__simplify_goal_call__Z_103, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                    }
#line 708 "simplify_goal_call.m"
                                                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35;
#line 708 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 708 "simplify_goal_call.m"
                                                  }
#line 711 "simplify_goal_call.m"
                                              }
#line 708 "simplify_goal_call.m"
                                          }
#line 708 "simplify_goal_call.m"
                                      }
#line 711 "simplify_goal_call.m"
                                  }
#line 711 "simplify_goal_call.m"
                              }
#line 708 "simplify_goal_call.m"
                          }
#line 709 "simplify_goal_call.m"
                      }
#line 708 "simplify_goal_call.m"
                  }
#line 682 "simplify_goal_call.m"
                else
#line 682 "simplify_goal_call.m"
                if ((((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "/") == 0)) || ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "//") == 0))))
#line 699 "simplify_goal_call.m"
                  {
#line 699 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__Z_22;
#line 699 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__InstY_23;
#line 699 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__YVal_26;
#line 699 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
#line 699 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_73_73;
#line 699 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_74_74;
#line 699 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
#line 699 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_76_76;
#line 699 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;
#line 699 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_78_78;
#line 699 "simplify_goal_call.m"
                    MR_String check_hlds__simplify__simplify_goal_call__Op_99;
#line 702 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_24_24;
#line 702 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;

#line 700 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_120_120)) == (MR_mktag((MR_Integer) 1)));
#line 700 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 700 "simplify_goal_call.m"
                      {
#line 700 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__Z_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_120_120, (MR_Integer) 0)));
#line 700 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_120_120, (MR_Integer) 1)));
#line 700 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "simplify_goal_call.m"
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 699 "simplify_goal_call.m"
                          {
#line 701 "simplify_goal_call.m"
                            {
#line 701 "simplify_goal_call.m"
                              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_121_121, &check_hlds__simplify__simplify_goal_call__InstY_23);
                            }
#line 702 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 702 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 702 "simplify_goal_call.m"
                              {
#line 702 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_23, (MR_Integer) 1)));
#line 702 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_23, (MR_Integer) 2)));
#line 702 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_23, (MR_Integer) 3)));
#line 702 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 702 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 702 "simplify_goal_call.m"
                                  {
#line 702 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, (MR_Integer) 0)));
#line 702 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, (MR_Integer) 1)));
#line 702 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 699 "simplify_goal_call.m"
                                      {
#line 702 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_74_74, (MR_Integer) 0)));
#line 702 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_74_74, (MR_Integer) 1)));
#line 702 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 699 "simplify_goal_call.m"
                                          {
#line 702 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_75_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 702 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 702 "simplify_goal_call.m"
                                              {
#line 702 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__YVal_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, (MR_Integer) 1)));
#line 703 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_26 == (MR_Integer) 0);
#line 703 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 699 "simplify_goal_call.m"
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 699 "simplify_goal_call.m"
                                                  {
#line 704 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__Op_99 = (MR_String) "unchecked_quotient";
#line 705 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__V_78_78 = (MR_Integer) 0;
#line 705 "simplify_goal_call.m"
                                                    {
#line 705 "simplify_goal_call.m"
                                                      check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__Op_99, check_hlds__simplify__simplify_goal_call__V_78_78, check_hlds__simplify__simplify_goal_call__V_119_119, check_hlds__simplify__simplify_goal_call__V_121_121, check_hlds__simplify__simplify_goal_call__Z_22, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                    }
#line 699 "simplify_goal_call.m"
                                                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35;
#line 699 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 699 "simplify_goal_call.m"
                                                  }
#line 702 "simplify_goal_call.m"
                                              }
#line 699 "simplify_goal_call.m"
                                          }
#line 699 "simplify_goal_call.m"
                                      }
#line 702 "simplify_goal_call.m"
                                  }
#line 702 "simplify_goal_call.m"
                              }
#line 699 "simplify_goal_call.m"
                          }
#line 700 "simplify_goal_call.m"
                      }
#line 699 "simplify_goal_call.m"
                  }
#line 682 "simplify_goal_call.m"
                else
#line 682 "simplify_goal_call.m"
                if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "rem_bits_per_int") == 0))
#line 689 "simplify_goal_call.m"
                  {
#line 689 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__V_81_81;
#line 689 "simplify_goal_call.m"
                    MR_String check_hlds__simplify__simplify_goal_call__Op_96;

#line 690 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 689 "simplify_goal_call.m"
                      {
#line 693 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__Op_96 = (MR_String) "unchecked_rem";
#line 694 "simplify_goal_call.m"
                        {
#line 694 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_81_81 = mercury__int__bits_per_int_0_f_0();
                        }
#line 694 "simplify_goal_call.m"
                        {
#line 694 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_96, check_hlds__simplify__simplify_goal_call__V_119_119, check_hlds__simplify__simplify_goal_call__V_81_81, check_hlds__simplify__simplify_goal_call__V_121_121, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);
                        }
#line 694 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 689 "simplify_goal_call.m"
                      }
#line 689 "simplify_goal_call.m"
                  }
#line 682 "simplify_goal_call.m"
                else
#line 682 "simplify_goal_call.m"
                if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "quot_bits_per_int") == 0))
#line 675 "simplify_goal_call.m"
                  {
#line 675 "simplify_goal_call.m"
                    MR_String check_hlds__simplify__simplify_goal_call__Op_21;
#line 675 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__V_89_89;

#line 676 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 675 "simplify_goal_call.m"
                      {
#line 679 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__Op_21 = (MR_String) "unchecked_quotient";
#line 680 "simplify_goal_call.m"
                        {
#line 680 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_89_89 = mercury__int__bits_per_int_0_f_0();
                        }
#line 680 "simplify_goal_call.m"
                        {
#line 680 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_21, check_hlds__simplify__simplify_goal_call__V_119_119, check_hlds__simplify__simplify_goal_call__V_89_89, check_hlds__simplify__simplify_goal_call__V_121_121, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);
                        }
#line 680 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 675 "simplify_goal_call.m"
                      }
#line 675 "simplify_goal_call.m"
                  }
#line 682 "simplify_goal_call.m"
                else
#line 682 "simplify_goal_call.m"
                if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "times_bits_per_int") == 0))
#line 683 "simplify_goal_call.m"
                  {
#line 683 "simplify_goal_call.m"
                    MR_Integer check_hlds__simplify__simplify_goal_call__V_85_85;
#line 683 "simplify_goal_call.m"
                    MR_String check_hlds__simplify__simplify_goal_call__Op_93;

#line 684 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_120_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 683 "simplify_goal_call.m"
                      {
#line 685 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__Op_93 = (MR_String) "*";
#line 686 "simplify_goal_call.m"
                        {
#line 686 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_85_85 = mercury__int__bits_per_int_0_f_0();
                        }
#line 686 "simplify_goal_call.m"
                        {
#line 686 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_93, check_hlds__simplify__simplify_goal_call__V_119_119, check_hlds__simplify__simplify_goal_call__V_85_85, check_hlds__simplify__simplify_goal_call__V_121_121, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);
                        }
#line 686 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 683 "simplify_goal_call.m"
                      }
#line 683 "simplify_goal_call.m"
                  }
#line 682 "simplify_goal_call.m"
                else
#line 682 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 670 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 670 "simplify_goal_call.m"
                  {
#line 670 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_34 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_33;
#line 670 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 670 "simplify_goal_call.m"
                  }
#line 700 "simplify_goal_call.m"
              }
#line 700 "simplify_goal_call.m"
          }
#line 670 "simplify_goal_call.m"
      }
#line 670 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 670 "simplify_goal_call.m"
  }
#line 664 "simplify_goal_call.m"
}

#line 614 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
#line 614 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_9,
#line 614 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10,
#line 614 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32,
#line 614 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33,
#line 614 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 614 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35)
#line 614 "simplify_goal_call.m"
{
#line 619 "simplify_goal_call.m"
  {
#line 619 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_86_86;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_13;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_14;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Y_15;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__X_16;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Res_17;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_19;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Type_20;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Context_21;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CondEq_22;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CondLt_23;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Builtin_24;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtor_25;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnEq_26;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnLt_27;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnGt_28;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__NonLocals_29;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__RestExpr_30;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Rest_31;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_38_38;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_39_39;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_40_40;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_41_41;
#line 619 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_42_42;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_44_44;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_45_45;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_47_47;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_49_49;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_50_50;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_51_51;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;
#line 619 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_53_53;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_54_54;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_55_55;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_63_63;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
#line 619 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_65_65;
#line 619 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_66_66;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_67_67;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
#line 619 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_69_69;
#line 619 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_70_70;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_71_71;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
#line 619 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_73_73;
#line 619 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_74_74;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_76_76;
#line 619 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_77_77;
#line 619 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_78_78;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_79_79;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_84_84;
#line 619 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
#line 629 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_18_18;

#line 626 "simplify_goal_call.m"
    {
#line 626 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__ModuleInfo_13);
    }
#line 627 "simplify_goal_call.m"
    {
#line 627 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_13, &check_hlds__simplify__simplify_goal_call__Globals_14);
    }
#line 628 "simplify_goal_call.m"
    {
#line 628 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__simplify__simplify_goal_call__Globals_14, (MR_Integer) 274, (MR_Integer) 1);
    }
#line 619 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 619 "simplify_goal_call.m"
      {
#line 1626 "check_hlds.simplify.simplify_goal_call.c"
        check_hlds__simplify__simplify_goal_call__TypeInfo_86_86 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
#line 629 "simplify_goal_call.m"
        {
#line 629 "simplify_goal_call.m"
          mercury__list__reverse_2_p_0(check_hlds__simplify__simplify_goal_call__TypeInfo_86_86, check_hlds__simplify__simplify_goal_call__Args_9, &check_hlds__simplify__simplify_goal_call__V_38_38);
        }
#line 629 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 629 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 629 "simplify_goal_call.m"
          {
#line 629 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Y_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, (MR_Integer) 0)));
#line 629 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, (MR_Integer) 1)));
#line 629 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 629 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 629 "simplify_goal_call.m"
              {
#line 629 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, (MR_Integer) 0)));
#line 629 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, (MR_Integer) 1)));
#line 629 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 629 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 629 "simplify_goal_call.m"
                  {
#line 629 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Res_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 0)));
#line 629 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 1)));
#line 630 "simplify_goal_call.m"
                    {
#line 630 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__VarTypes_19);
                    }
#line 631 "simplify_goal_call.m"
                    {
#line 631 "simplify_goal_call.m"
                      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_19, check_hlds__simplify__simplify_goal_call__Y_15, &check_hlds__simplify__simplify_goal_call__Type_20);
                    }
#line 632 "simplify_goal_call.m"
                    {
#line 632 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Type_20);
                    }
#line 619 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 619 "simplify_goal_call.m"
                      {
#line 635 "simplify_goal_call.m"
                        {
#line 635 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32);
                        }
#line 636 "simplify_goal_call.m"
                        {
#line 636 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_41_41 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
#line 637 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_42_42 = (MR_String) "builtin_compound_eq";
#line 637 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_43_43 = (MR_Integer) 0;
#line 637 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_45_45 = (MR_Integer) 1;
#line 638 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_46_46 = (MR_Integer) 0;
#line 638 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "simplify_goal_call.m"
                        {
#line 638 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_50_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_15));
#line 638 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_51_51));
#line 638 "simplify_goal_call.m"
                        }
#line 638 "simplify_goal_call.m"
                        {
#line 638 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_47_47, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_16));
#line 638 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_47_47, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_50_50));
#line 638 "simplify_goal_call.m"
                        }
#line 638 "simplify_goal_call.m"
                        {
#line 638 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_49_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
#line 636 "simplify_goal_call.m"
                        {
#line 636 "simplify_goal_call.m"
                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__V_41_41, check_hlds__simplify__simplify_goal_call__V_42_42, check_hlds__simplify__simplify_goal_call__V_43_43, check_hlds__simplify__simplify_goal_call__V_44_44, check_hlds__simplify__simplify_goal_call__V_45_45, check_hlds__simplify__simplify_goal_call__V_46_46, check_hlds__simplify__simplify_goal_call__V_47_47, check_hlds__simplify__simplify_goal_call__V_48_48, check_hlds__simplify__simplify_goal_call__V_49_49, check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Context_21, &check_hlds__simplify__simplify_goal_call__CondEq_22);
                        }
#line 640 "simplify_goal_call.m"
                        {
#line 640 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_52_52 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
#line 641 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_53_53 = (MR_String) "builtin_compound_lt";
#line 641 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_54_54 = (MR_Integer) 0;
#line 641 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 641 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_56_56 = (MR_Integer) 1;
#line 642 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_57_57 = (MR_Integer) 0;
#line 642 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "simplify_goal_call.m"
                        {
#line 642 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_60_60 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
#line 640 "simplify_goal_call.m"
                        {
#line 640 "simplify_goal_call.m"
                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__V_52_52, check_hlds__simplify__simplify_goal_call__V_53_53, check_hlds__simplify__simplify_goal_call__V_54_54, check_hlds__simplify__simplify_goal_call__V_55_55, check_hlds__simplify__simplify_goal_call__V_56_56, check_hlds__simplify__simplify_goal_call__V_57_57, check_hlds__simplify__simplify_goal_call__V_47_47, check_hlds__simplify__simplify_goal_call__V_59_59, check_hlds__simplify__simplify_goal_call__V_60_60, check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Context_21, &check_hlds__simplify__simplify_goal_call__CondLt_23);
                        }
#line 645 "simplify_goal_call.m"
                        {
#line 645 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Builtin_24 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
#line 647 "simplify_goal_call.m"
                        {
#line 647 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_64_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
#line 647 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_65_65 = (MR_String) "comparison_result";
#line 648 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_66_66 = (MR_Integer) 0;
#line 650 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_69_69 = (MR_String) "=";
#line 650 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_70_70 = (MR_Integer) 0;
#line 647 "simplify_goal_call.m"
                        {
#line 647 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_64_64));
#line 647 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_65_65));
#line 647 "simplify_goal_call.m"
                        }
#line 646 "simplify_goal_call.m"
                        {
#line 646 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__TypeCtor_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 646 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_63_63));
#line 646 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_66_66));
#line 646 "simplify_goal_call.m"
                        }
#line 650 "simplify_goal_call.m"
                        {
#line 650 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
#line 650 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_69_69));
#line 650 "simplify_goal_call.m"
                        }
#line 650 "simplify_goal_call.m"
                        {
#line 650 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 650 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 650 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_68_68));
#line 650 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_70_70));
#line 650 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
#line 650 "simplify_goal_call.m"
                        }
#line 649 "simplify_goal_call.m"
                        {
#line 649 "simplify_goal_call.m"
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_67_67, &check_hlds__simplify__simplify_goal_call__ReturnEq_26);
                        }
#line 652 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_73_73 = (MR_String) "<";
#line 652 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_74_74 = (MR_Integer) 0;
#line 652 "simplify_goal_call.m"
                        {
#line 652 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_72_72, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_72_72, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_73_73));
#line 652 "simplify_goal_call.m"
                        }
#line 652 "simplify_goal_call.m"
                        {
#line 652 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_72_72));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_74_74));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
#line 652 "simplify_goal_call.m"
                        }
#line 651 "simplify_goal_call.m"
                        {
#line 651 "simplify_goal_call.m"
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_71_71, &check_hlds__simplify__simplify_goal_call__ReturnLt_27);
                        }
#line 654 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_String) ">";
#line 654 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_78_78 = (MR_Integer) 0;
#line 654 "simplify_goal_call.m"
                        {
#line 654 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
#line 654 "simplify_goal_call.m"
                        }
#line 654 "simplify_goal_call.m"
                        {
#line 654 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_76_76));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_78_78));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
#line 654 "simplify_goal_call.m"
                        }
#line 653 "simplify_goal_call.m"
                        {
#line 653 "simplify_goal_call.m"
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_75_75, &check_hlds__simplify__simplify_goal_call__ReturnGt_28);
                        }
#line 1896 "check_hlds.simplify.simplify_goal_call.c"
                        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 656 "simplify_goal_call.m"
                        {
#line 656 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_79_79, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Res_17));
#line 656 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_79_79, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_47_47));
#line 656 "simplify_goal_call.m"
                        }
#line 656 "simplify_goal_call.m"
                        {
#line 656 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__NonLocals_29 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_call__V_79_79);
                        }
#line 657 "simplify_goal_call.m"
                        {
#line 657 "simplify_goal_call.m"
                          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__NonLocals_29, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33);
                        }
#line 659 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 661 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_85_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 619 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34;
#line 659 "simplify_goal_call.m"
                        {
#line 659 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__RestExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 659 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 659 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_84_84));
#line 659 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CondLt_23));
#line 659 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnLt_27));
#line 659 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnGt_28));
#line 659 "simplify_goal_call.m"
                        }
#line 660 "simplify_goal_call.m"
                        {
#line 660 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Rest_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Rest_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RestExpr_30));
#line 660 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Rest_31, 1) = ((MR_Box) (*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33));
#line 660 "simplify_goal_call.m"
                        }
#line 661 "simplify_goal_call.m"
                        {
#line 661 "simplify_goal_call.m"
                          MR_Word base;
#line 661 "simplify_goal_call.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 661 "simplify_goal_call.m"
                          *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10 = base;
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_85_85));
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CondEq_22));
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnEq_26));
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Rest_31));
#line 661 "simplify_goal_call.m"
                        }
#line 661 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 619 "simplify_goal_call.m"
                      }
#line 629 "simplify_goal_call.m"
                  }
#line 629 "simplify_goal_call.m"
              }
#line 629 "simplify_goal_call.m"
          }
#line 619 "simplify_goal_call.m"
      }
#line 619 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 619 "simplify_goal_call.m"
  }
#line 614 "simplify_goal_call.m"
}

#line 504 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(
#line 504 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_12,
#line 504 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__ModuleName_13,
#line 504 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_14,
#line 504 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_16,
#line 504 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 504 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_18,
#line 504 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19,
#line 504 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_9,
#line 504 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26,
#line 504 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27)
#line 504 "simplify_goal_call.m"
{
#line 510 "simplify_goal_call.m"
  {
#line 510 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 510 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33;

#line 510 "simplify_goal_call.m"
    {
#line 510 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__simplify__simplify_goal_call__InstMap0_9, check_hlds__simplify__simplify_goal_call__InstMap0_12);
    }
#line 510 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 510 "simplify_goal_call.m"
      {
#line 537 "simplify_goal_call.m"
        if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_13, (MR_String) "int") == 0))
#line 539 "simplify_goal_call.m"
          {
#line 539 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__PredName_14, check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
          }
#line 537 "simplify_goal_call.m"
        else
#line 537 "simplify_goal_call.m"
        if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_13, (MR_String) "builtin") == 0))
#line 529 "simplify_goal_call.m"
          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, (MR_String) "\100<") == 0))
#line 518 "simplify_goal_call.m"
            {
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__TI_23;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__X_24;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__Y_25;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_32_32;

#line 519 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                {
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__TI_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                    {
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_30_30, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_30_30, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                      if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                        {
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Y_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_31_31, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_31_31, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "simplify_goal_call.m"
                          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 518 "simplify_goal_call.m"
                            {
#line 526 "simplify_goal_call.m"
                              {
#line 526 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_23, check_hlds__simplify__simplify_goal_call__X_24, check_hlds__simplify__simplify_goal_call__Y_25, (MR_String) "<", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                              }
#line 528 "simplify_goal_call.m"
                              *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 528 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 518 "simplify_goal_call.m"
                            }
#line 519 "simplify_goal_call.m"
                        }
#line 519 "simplify_goal_call.m"
                    }
#line 519 "simplify_goal_call.m"
                }
#line 518 "simplify_goal_call.m"
            }
#line 529 "simplify_goal_call.m"
          else
#line 529 "simplify_goal_call.m"
          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, (MR_String) "\100>") == 0))
#line 518 "simplify_goal_call.m"
            {
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__TI_45;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__X_46;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__Y_47;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_49_49;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_50_50;

#line 519 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                {
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__TI_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                    {
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__X_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_48_48, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_48_48, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                      if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                        {
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Y_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_49_49, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_49_49, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "simplify_goal_call.m"
                          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 518 "simplify_goal_call.m"
                            {
#line 526 "simplify_goal_call.m"
                              {
#line 526 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_45, check_hlds__simplify__simplify_goal_call__X_46, check_hlds__simplify__simplify_goal_call__Y_47, (MR_String) ">", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                              }
#line 528 "simplify_goal_call.m"
                              *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 528 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 518 "simplify_goal_call.m"
                            }
#line 519 "simplify_goal_call.m"
                        }
#line 519 "simplify_goal_call.m"
                    }
#line 519 "simplify_goal_call.m"
                }
#line 518 "simplify_goal_call.m"
            }
#line 529 "simplify_goal_call.m"
          else
#line 529 "simplify_goal_call.m"
          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, (MR_String) "\100=<") == 0))
#line 518 "simplify_goal_call.m"
            {
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__TI_37;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__X_38;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__Y_39;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_40_40;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_41_41;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;

#line 519 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                {
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__TI_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                    {
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__X_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                      if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                        {
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Y_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_41_41, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_41_41, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "simplify_goal_call.m"
                          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 518 "simplify_goal_call.m"
                            {
#line 526 "simplify_goal_call.m"
                              {
#line 526 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_37, check_hlds__simplify__simplify_goal_call__X_38, check_hlds__simplify__simplify_goal_call__Y_39, (MR_String) ">", (MR_Integer) 1, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                              }
#line 528 "simplify_goal_call.m"
                              *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 528 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 518 "simplify_goal_call.m"
                            }
#line 519 "simplify_goal_call.m"
                        }
#line 519 "simplify_goal_call.m"
                    }
#line 519 "simplify_goal_call.m"
                }
#line 518 "simplify_goal_call.m"
            }
#line 529 "simplify_goal_call.m"
          else
#line 529 "simplify_goal_call.m"
          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, (MR_String) "\100>=") == 0))
#line 518 "simplify_goal_call.m"
            {
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__TI_53;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__X_54;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__Y_55;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
#line 518 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;

#line 519 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                {
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__TI_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                    {
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__X_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                      if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                        {
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Y_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_57_57, (MR_Integer) 0)));
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_57_57, (MR_Integer) 1)));
#line 519 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "simplify_goal_call.m"
                          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 518 "simplify_goal_call.m"
                            {
#line 526 "simplify_goal_call.m"
                              {
#line 526 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_53, check_hlds__simplify__simplify_goal_call__X_54, check_hlds__simplify__simplify_goal_call__Y_55, (MR_String) "<", (MR_Integer) 1, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                              }
#line 528 "simplify_goal_call.m"
                              *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 528 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 518 "simplify_goal_call.m"
                            }
#line 519 "simplify_goal_call.m"
                        }
#line 519 "simplify_goal_call.m"
                    }
#line 519 "simplify_goal_call.m"
                }
#line 518 "simplify_goal_call.m"
            }
#line 529 "simplify_goal_call.m"
          else
#line 529 "simplify_goal_call.m"
          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, (MR_String) "compare") == 0))
#line 534 "simplify_goal_call.m"
            {
#line 534 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
            }
#line 529 "simplify_goal_call.m"
          else
#line 529 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 537 "simplify_goal_call.m"
        else
#line 537 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 510 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 510 "simplify_goal_call.m"
          {
#line 542 "simplify_goal_call.m"
            {
#line 542 "simplify_goal_call.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27);
            }
#line 542 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 510 "simplify_goal_call.m"
          }
#line 510 "simplify_goal_call.m"
      }
#line 510 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 510 "simplify_goal_call.m"
  }
#line 504 "simplify_goal_call.m"
}

#line 273 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
#line 273 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 273 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 273 "simplify_goal_call.m"
{
#line 273 "simplify_goal_call.m"
  {
#line 273 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 273 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 273 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2;

#line 273 "simplify_goal_call.m"
    {
#line 273 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 273 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2));
#line 273 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 273 "simplify_goal_call.m"
  }
#line 273 "simplify_goal_call.m"
}

#line 265 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
#line 265 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 265 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 265 "simplify_goal_call.m"
{
#line 265 "simplify_goal_call.m"
  {
#line 265 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 265 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 265 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2;

#line 265 "simplify_goal_call.m"
    {
#line 265 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 265 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2));
#line 265 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 265 "simplify_goal_call.m"
  }
#line 265 "simplify_goal_call.m"
}

#line 264 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
#line 264 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 264 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 264 "simplify_goal_call.m"
{
#line 264 "simplify_goal_call.m"
  {
#line 264 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 264 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 264 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2;

#line 264 "simplify_goal_call.m"
    {
#line 264 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 264 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2));
#line 264 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 264 "simplify_goal_call.m"
  }
#line 264 "simplify_goal_call.m"
}

#line 247 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
#line 247 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 247 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 247 "simplify_goal_call.m"
{
#line 247 "simplify_goal_call.m"
  {
#line 247 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 247 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 247 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2;

#line 247 "simplify_goal_call.m"
    {
#line 247 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 247 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2));
#line 247 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 247 "simplify_goal_call.m"
  }
#line 247 "simplify_goal_call.m"
}

#line 45 "simplify_goal_call.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
#line 45 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42,
#line 45 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43,
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_15,
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
#line 45 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44,
#line 45 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45)
#line 45 "simplify_goal_call.m"
{
#line 230 "simplify_goal_call.m"
  {
#line 230 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 230 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Attributes_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 230 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 230 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 230 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 230 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ExtraArgs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 230 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__MaybeTraceRuntimeCond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 6)));
#line 230 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Impl_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 7)));
#line 255 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33;
#line 255 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47;
#line 255 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49;
#line 239 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58;
#line 239 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_59_59;
#line 239 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_26;
#line 239 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_27;
#line 239 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleSymName_28;
#line 239 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__ModuleName_29;
#line 239 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__PredName_30;
#line 239 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ArgVars_32;
#line 239 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 246 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ModeNum_31;

#line 239 "simplify_goal_call.m"
    {
#line 239 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44);
    }
#line 239 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 239 "simplify_goal_call.m"
      {
#line 240 "simplify_goal_call.m"
        {
#line 240 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
        }
#line 241 "simplify_goal_call.m"
        {
#line 241 "simplify_goal_call.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, &check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
#line 242 "simplify_goal_call.m"
        {
#line 242 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModuleSymName_28 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
#line 243 "simplify_goal_call.m"
        {
#line 243 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleSymName_28, &check_hlds__simplify__simplify_goal_call__ModuleName_29);
        }
#line 239 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 239 "simplify_goal_call.m"
          {
#line 244 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__ExtraArgs0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 239 "simplify_goal_call.m"
              {
#line 245 "simplify_goal_call.m"
                {
#line 245 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__PredName_30 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
                }
#line 246 "simplify_goal_call.m"
                {
#line 246 "simplify_goal_call.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__ModeNum_31);
                }
#line 2619 "check_hlds.simplify.simplify_goal_call.c"
                check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 2621 "check_hlds.simplify.simplify_goal_call.c"
                check_hlds__simplify__simplify_goal_call__TypeInfo_59_59 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
#line 247 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_46_46 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[1];
#line 247 "simplify_goal_call.m"
                {
#line 247 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__ArgVars_32 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58, check_hlds__simplify__simplify_goal_call__TypeInfo_59_59, check_hlds__simplify__simplify_goal_call__V_46_46, check_hlds__simplify__simplify_goal_call__Args0_22);
                }
#line 248 "simplify_goal_call.m"
                {
#line 248 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__ModuleName_29, check_hlds__simplify__simplify_goal_call__PredName_30, check_hlds__simplify__simplify_goal_call__ArgVars_32, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47, check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49);
                }
#line 239 "simplify_goal_call.m"
              }
#line 239 "simplify_goal_call.m"
          }
#line 239 "simplify_goal_call.m"
      }
#line 255 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 251 "simplify_goal_call.m"
      {
#line 251 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49;
#line 251 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47;
#line 251 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33;
#line 252 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 251 "simplify_goal_call.m"
      }
#line 255 "simplify_goal_call.m"
    else
#line 256 "simplify_goal_call.m"
      {
#line 256 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__BoxPolicy_34;
#line 256 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Args_35;
#line 256 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__ExtraArgs_36;
#line 256 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
#line 285 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38;

#line 256 "simplify_goal_call.m"
        {
#line 256 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__BoxPolicy_34 = parse_tree__prog_data__get_box_policy_1_f_0(check_hlds__simplify__simplify_goal_call__Attributes_19);
        }
#line 262 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__BoxPolicy_34 == (MR_Integer) 1))
#line 263 "simplify_goal_call.m"
          {
#line 263 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 264 "simplify_goal_call.m"
            {
#line 264 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__Args_35 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[2], check_hlds__simplify__simplify_goal_call__Args0_22);
            }
#line 265 "simplify_goal_call.m"
            {
#line 265 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__ExtraArgs_36 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[3], check_hlds__simplify__simplify_goal_call__ExtraArgs0_23);
            }
#line 266 "simplify_goal_call.m"
            {
#line 266 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__GoalExpr1_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 266 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 266 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Attributes_19));
#line 266 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__PredId_20));
#line 266 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ProcId_21));
#line 266 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Args_35));
#line 266 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ExtraArgs_36));
#line 266 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 6) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__MaybeTraceRuntimeCond_24));
#line 266 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 7) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Impl_25));
#line 266 "simplify_goal_call.m"
            }
#line 263 "simplify_goal_call.m"
          }
#line 262 "simplify_goal_call.m"
        else
#line 258 "simplify_goal_call.m"
          {
#line 259 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Args_35 = check_hlds__simplify__simplify_goal_call__Args0_22;
#line 260 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__ExtraArgs_36 = check_hlds__simplify__simplify_goal_call__ExtraArgs0_23;
#line 261 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__GoalExpr1_37 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 258 "simplify_goal_call.m"
          }
#line 270 "simplify_goal_call.m"
        {
#line 270 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38);
        }
#line 270 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 271 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__ExtraArgs_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 273 "simplify_goal_call.m"
          {
#line 273 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Purity_39;
#line 273 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40;
#line 273 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__ArgVars_55;
#line 282 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41;

#line 273 "simplify_goal_call.m"
            {
#line 273 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__ArgVars_55 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0], (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[4], check_hlds__simplify__simplify_goal_call__Args_35);
            }
#line 274 "simplify_goal_call.m"
            {
#line 274 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__Purity_39 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42);
            }
#line 275 "simplify_goal_call.m"
            {
#line 275 "simplify_goal_call.m"
              check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__ArgVars_55, check_hlds__simplify__simplify_goal_call__Purity_39, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, check_hlds__simplify__simplify_goal_call__GoalExpr1_37, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45);
            }
#line 279 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38 == (MR_Integer) 1);
#line 278 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 278 "simplify_goal_call.m"
              {
#line 278 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40)) == (MR_mktag((MR_Integer) 1)));
#line 278 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 278 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40, (MR_Integer) 0)));
#line 278 "simplify_goal_call.m"
              }
#line 282 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 281 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41;
#line 282 "simplify_goal_call.m"
            else
#line 283 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
#line 273 "simplify_goal_call.m"
          }
#line 285 "simplify_goal_call.m"
        else
#line 286 "simplify_goal_call.m"
          {
#line 286 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
#line 287 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 286 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44;
#line 286 "simplify_goal_call.m"
          }
#line 256 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42;
#line 256 "simplify_goal_call.m"
      }
#line 230 "simplify_goal_call.m"
  }
#line 45 "simplify_goal_call.m"
}

#line 36 "simplify_goal_call.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(
#line 36 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
#line 36 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 36 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_13,
#line 36 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_4,
#line 36 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
#line 36 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
#line 36 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37,
#line 36 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38)
#line 36 "simplify_goal_call.m"
{
#line 192 "simplify_goal_call.m"
  {
#line 192 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 192 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GenericCall_19;
#line 192 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_20;
#line 192 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Modes_21;
#line 192 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Det_23;
#line 197 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_22_22;

#line 191 "simplify_goal_call.m"
    *check_hlds__simplify__simplify_goal_call__GoalInfo_4 = check_hlds__simplify__simplify_goal_call__GoalInfo_13;
#line 197 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__GenericCall_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 197 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 197 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Modes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 197 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 197 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 216 "simplify_goal_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__GenericCall_19)) == (MR_mktag((MR_Integer) 2))))
#line 217 "simplify_goal_call.m"
      {
#line 218 "simplify_goal_call.m"
        {
#line 218 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
        }
#line 219 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 220 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 217 "simplify_goal_call.m"
      }
#line 216 "simplify_goal_call.m"
    else
#line 216 "simplify_goal_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__GenericCall_19)) == (MR_mktag((MR_Integer) 0))))
#line 199 "simplify_goal_call.m"
      {
#line 199 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Closure_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 0)));
#line 199 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Purity_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 1)));
#line 199 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 2)));
#line 199 "simplify_goal_call.m"
        MR_Integer check_hlds__simplify__simplify_goal_call__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 3)));
#line 212 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28;

#line 200 "simplify_goal_call.m"
        {
#line 200 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28);
        }
#line 212 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 203 "simplify_goal_call.m"
          {
#line 203 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29;
#line 209 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30;

#line 201 "simplify_goal_call.m"
            {
#line 201 "simplify_goal_call.m"
              check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(check_hlds__simplify__simplify_goal_call__Closure_24, check_hlds__simplify__simplify_goal_call__Args_20, check_hlds__simplify__simplify_goal_call__Modes_21, check_hlds__simplify__simplify_goal_call__Det_23, check_hlds__simplify__simplify_goal_call__Purity_25, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
            }
#line 206 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28 == (MR_Integer) 1);
#line 205 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 205 "simplify_goal_call.m"
              {
#line 205 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29)) == (MR_mktag((MR_Integer) 1)));
#line 205 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 205 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29, (MR_Integer) 0)));
#line 205 "simplify_goal_call.m"
              }
#line 209 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 208 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30;
#line 209 "simplify_goal_call.m"
            else
#line 210 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 203 "simplify_goal_call.m"
          }
#line 212 "simplify_goal_call.m"
        else
#line 213 "simplify_goal_call.m"
          {
#line 213 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 214 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 213 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37;
#line 213 "simplify_goal_call.m"
          }
#line 199 "simplify_goal_call.m"
      }
#line 216 "simplify_goal_call.m"
    else
#line 224 "simplify_goal_call.m"
      {
#line 225 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 226 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 224 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37;
#line 224 "simplify_goal_call.m"
      }
#line 192 "simplify_goal_call.m"
  }
#line 36 "simplify_goal_call.m"
}

#line 408 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(
#line 408 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 408 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2)
#line 408 "simplify_goal_call.m"
{
#line 408 "simplify_goal_call.m"
  {
#line 408 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 408 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_14_14;

#line 408 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 408 "simplify_goal_call.m"
      {
#line 408 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
#line 408 "simplify_goal_call.m"
        (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_14_14));
#line 408 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 408 "simplify_goal_call.m"
      }
#line 408 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 408 "simplify_goal_call.m"
  }
#line 408 "simplify_goal_call.m"
}

#line 784 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(
#line 784 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
#line 784 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 784 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
#line 784 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
#line 784 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 784 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
#line 784 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14)
#line 784 "simplify_goal_call.m"
{
#line 789 "simplify_goal_call.m"
  {
#line 789 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 789 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__IntModuleSymName_15;
#line 789 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpSymName_16;
#line 789 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_17;
#line 789 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredTable_18;
#line 789 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIds_19;
#line 789 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredId_21;
#line 789 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__OpProcId_23;
#line 789 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpArgs_24;
#line 789 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_35_35;
#line 789 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_36_36;
#line 798 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
#line 796 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;

#line 790 "simplify_goal_call.m"
    {
#line 790 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__IntModuleSymName_15 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_3[3]);
    }
#line 791 "simplify_goal_call.m"
    {
#line 791 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpSymName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_16, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IntModuleSymName_15));
#line 791 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_16, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Op_9));
#line 791 "simplify_goal_call.m"
    }
#line 792 "simplify_goal_call.m"
    {
#line 792 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__Info_8, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
#line 793 "simplify_goal_call.m"
    {
#line 793 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__PredTable_18);
    }
#line 794 "simplify_goal_call.m"
    {
#line 794 "simplify_goal_call.m"
      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(check_hlds__simplify__simplify_goal_call__PredTable_18, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__OpSymName_16, (MR_Integer) 2, &check_hlds__simplify__simplify_goal_call__OpPredIds_19);
    }
#line 796 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__OpPredIds_19)) == (MR_mktag((MR_Integer) 1)));
#line 796 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 796 "simplify_goal_call.m"
      {
#line 796 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 0)));
#line 796 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 1)));
#line 796 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "simplify_goal_call.m"
      }
#line 798 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 797 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpPredId_21 = check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
#line 798 "simplify_goal_call.m"
    else
#line 799 "simplify_goal_call.m"
      {
#line 799 "simplify_goal_call.m"
        MR_String check_hlds__simplify__simplify_goal_call__V_33_33;

#line 799 "simplify_goal_call.m"
        {
#line 799 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find ", check_hlds__simplify__simplify_goal_call__Op_9);
        }
#line 799 "simplify_goal_call.m"
        {
#line 799 "simplify_goal_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_call", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_make_int_binary_op_goal_expr\'/7", check_hlds__simplify__simplify_goal_call__V_33_33);
#line 799 "simplify_goal_call.m"
          return;
        }
#line 799 "simplify_goal_call.m"
      }
#line 802 "simplify_goal_call.m"
    {
#line 802 "simplify_goal_call.m"
      hlds__hlds_pred__proc_id_to_int_2_p_1(&check_hlds__simplify__simplify_goal_call__OpProcId_23, (MR_Integer) 0);
    }
#line 803 "simplify_goal_call.m"
    {
#line 803 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Z_13));
#line 803 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "simplify_goal_call.m"
    }
#line 803 "simplify_goal_call.m"
    {
#line 803 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_35_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_12));
#line 803 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_35_35, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_36_36));
#line 803 "simplify_goal_call.m"
    }
#line 803 "simplify_goal_call.m"
    {
#line 803 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpArgs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_11));
#line 803 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_35_35));
#line 803 "simplify_goal_call.m"
    }
#line 805 "simplify_goal_call.m"
    {
#line 805 "simplify_goal_call.m"
      MR_Word base;
#line 805 "simplify_goal_call.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 805 "simplify_goal_call.m"
      *check_hlds__simplify__simplify_goal_call__GoalExpr_14 = base;
#line 805 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpPredId_21));
#line 805 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpProcId_23));
#line 805 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpArgs_24));
#line 805 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IsBuiltin_10));
#line 805 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpSymName_16));
#line 805 "simplify_goal_call.m"
    }
#line 789 "simplify_goal_call.m"
  }
#line 784 "simplify_goal_call.m"
}

#line 745 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(
#line 745 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 745 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_10,
#line 745 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__IntConst_11,
#line 745 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 745 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_13,
#line 745 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14,
#line 745 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20,
#line 745 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21)
#line 745 "simplify_goal_call.m"
{
#line 750 "simplify_goal_call.m"
  {
#line 750 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstVar_16;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstGoal_17;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoalExpr_18;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoal_19;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_34;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_35;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_36;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_37;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstConsId_38;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Unification_39;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_40;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Ground_42;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Mode_43;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr_44;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__NonLocals_45;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__InstMapDelta_46;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_47;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 750 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_62_62;

#line 763 "simplify_goal_call.m"
    {
#line 763 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__VarSet0_34);
    }
#line 764 "simplify_goal_call.m"
    {
#line 764 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__VarTypes0_35);
    }
#line 3262 "check_hlds.simplify.simplify_goal_call.c"
    check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 765 "simplify_goal_call.m"
    {
#line 765 "simplify_goal_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66, &check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__VarSet0_34, &check_hlds__simplify__simplify_goal_call__VarSet_36);
    }
#line 766 "simplify_goal_call.m"
    {
#line 766 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_48_48 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 766 "simplify_goal_call.m"
    {
#line 766 "simplify_goal_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__V_48_48, check_hlds__simplify__simplify_goal_call__VarTypes0_35, &check_hlds__simplify__simplify_goal_call__VarTypes_37);
    }
#line 767 "simplify_goal_call.m"
    {
#line 767 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_call__VarSet_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49);
    }
#line 768 "simplify_goal_call.m"
    {
#line 768 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21);
    }
#line 770 "simplify_goal_call.m"
    {
#line 770 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 770 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_38, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IntConst_11));
#line 770 "simplify_goal_call.m"
    }
#line 771 "simplify_goal_call.m"
    {
#line 771 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 771 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_16));
#line 771 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_38));
#line 771 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 771 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 5) = ((MR_Box) ((MR_Integer) 1));
#line 771 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "simplify_goal_call.m"
    }
#line 773 "simplify_goal_call.m"
    {
#line 773 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__RHS_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 773 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_38));
#line 773 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 1) = ((MR_Box) ((MR_Integer) 0));
#line 773 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "simplify_goal_call.m"
    }
#line 776 "simplify_goal_call.m"
    {
#line 776 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Ground_42 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 777 "simplify_goal_call.m"
    {
#line 777 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 777 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 777 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_60_60, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
#line 777 "simplify_goal_call.m"
    }
#line 777 "simplify_goal_call.m"
    {
#line 777 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 777 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_62_62, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
#line 777 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_62_62, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
#line 777 "simplify_goal_call.m"
    }
#line 777 "simplify_goal_call.m"
    {
#line 777 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Mode_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 777 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Mode_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_60_60));
#line 777 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Mode_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_62_62));
#line 777 "simplify_goal_call.m"
    }
#line 778 "simplify_goal_call.m"
    {
#line 778 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__GoalExpr_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_16));
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_40));
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Mode_43));
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unification_39));
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[24]));
#line 778 "simplify_goal_call.m"
    }
#line 779 "simplify_goal_call.m"
    {
#line 779 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__NonLocals_45 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66, check_hlds__simplify__simplify_goal_call__ConstVar_16);
    }
#line 780 "simplify_goal_call.m"
    {
#line 780 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__InstMapDelta_46 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__simplify__simplify_goal_call__ConstVar_16);
    }
#line 781 "simplify_goal_call.m"
    {
#line 781 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__simplify_goal_call__NonLocals_45, check_hlds__simplify__simplify_goal_call__InstMapDelta_46, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__simplify_goal_call__GoalInfo_47);
    }
#line 782 "simplify_goal_call.m"
    {
#line 782 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstGoal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstGoal_17, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalExpr_44));
#line 782 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstGoal_17, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalInfo_47));
#line 782 "simplify_goal_call.m"
    }
#line 752 "simplify_goal_call.m"
    {
#line 752 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21, check_hlds__simplify__simplify_goal_call__Op_9, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__X_10, check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__Y_12, &check_hlds__simplify__simplify_goal_call__OpGoalExpr_18);
    }
#line 756 "simplify_goal_call.m"
    {
#line 756 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpGoal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 756 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__OpGoal_19, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoalExpr_18));
#line 756 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__OpGoal_19, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14));
#line 756 "simplify_goal_call.m"
    }
#line 757 "simplify_goal_call.m"
    {
#line 757 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_26_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoal_19));
#line 757 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 757 "simplify_goal_call.m"
    }
#line 757 "simplify_goal_call.m"
    {
#line 757 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_25_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstGoal_17));
#line 757 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_25_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_26_26));
#line 757 "simplify_goal_call.m"
    }
#line 757 "simplify_goal_call.m"
    {
#line 757 "simplify_goal_call.m"
      MR_Word base;
#line 757 "simplify_goal_call.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "simplify_goal_call.m"
      *check_hlds__simplify__simplify_goal_call__GoalExpr_13 = base;
#line 757 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 757 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 757 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_25_25));
#line 757 "simplify_goal_call.m"
    }
#line 750 "simplify_goal_call.m"
  }
#line 745 "simplify_goal_call.m"
}

#line 544 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__TI_11,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_12,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_13,
#line 544 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Inequality_14,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Invert_15,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_16,
#line 544 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_18,
#line 544 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53,
#line 544 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54)
#line 544 "simplify_goal_call.m"
{
#line 550 "simplify_goal_call.m"
  {
#line 550 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_20;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpRes_21;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_22;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_23;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_24;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Context_25;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_26;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__XInst_27;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__YInst_28;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_29;
#line 550 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ModeNo_30;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Unique_31;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ArgInsts_32;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__BuiltinModule_33;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpGoal0_34;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpExpr_35;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpInfo0_36;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpNonLocals_38;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpInfo_39;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpGoal_40;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtor_41;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConsId_42;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Bound_43;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UMode_44;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_45;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UKind_46;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyExpr_48;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyInfo_51;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyGoal_52;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_73_73;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_74_74;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_81_81;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_82_82;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
#line 550 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_86_86;

#line 552 "simplify_goal_call.m"
    {
#line 552 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, &check_hlds__simplify__simplify_goal_call__VarSet0_20);
    }
#line 3594 "check_hlds.simplify.simplify_goal_call.c"
    check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 553 "simplify_goal_call.m"
    {
#line 553 "simplify_goal_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, &check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__VarSet0_20, &check_hlds__simplify__simplify_goal_call__VarSet_22);
    }
#line 554 "simplify_goal_call.m"
    {
#line 554 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_call__VarSet_22, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55);
    }
#line 557 "simplify_goal_call.m"
    {
#line 557 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_goal_call__VarTypes0_23);
    }
#line 558 "simplify_goal_call.m"
    {
#line 558 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_56_56 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
#line 558 "simplify_goal_call.m"
    {
#line 558 "simplify_goal_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__V_56_56, check_hlds__simplify__simplify_goal_call__VarTypes0_23, &check_hlds__simplify__simplify_goal_call__VarTypes_24);
    }
#line 559 "simplify_goal_call.m"
    {
#line 559 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_24, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);
    }
#line 562 "simplify_goal_call.m"
    {
#line 562 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_16);
    }
#line 563 "simplify_goal_call.m"
    {
#line 563 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_60_60, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_13));
#line 563 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "simplify_goal_call.m"
    }
#line 563 "simplify_goal_call.m"
    {
#line 563 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_12));
#line 563 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_59_59, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_60_60));
#line 563 "simplify_goal_call.m"
    }
#line 563 "simplify_goal_call.m"
    {
#line 563 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_58_58, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 563 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_58_58, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_59_59));
#line 563 "simplify_goal_call.m"
    }
#line 563 "simplify_goal_call.m"
    {
#line 563 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Args_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TI_11));
#line 563 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_58_58));
#line 563 "simplify_goal_call.m"
    }
#line 565 "simplify_goal_call.m"
    {
#line 565 "simplify_goal_call.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_18, check_hlds__simplify__simplify_goal_call__X_12, &check_hlds__simplify__simplify_goal_call__XInst_27);
    }
#line 566 "simplify_goal_call.m"
    {
#line 566 "simplify_goal_call.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_18, check_hlds__simplify__simplify_goal_call__Y_13, &check_hlds__simplify__simplify_goal_call__YInst_28);
    }
#line 567 "simplify_goal_call.m"
    {
#line 567 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54, &check_hlds__simplify__simplify_goal_call__ModuleInfo_29);
    }
#line 569 "simplify_goal_call.m"
    {
#line 569 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__XInst_27);
    }
#line 568 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 570 "simplify_goal_call.m"
      {
#line 570 "simplify_goal_call.m"
        {
#line 570 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__YInst_28);
        }
#line 570 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 570 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 1;
#line 570 "simplify_goal_call.m"
        else
#line 570 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 2;
#line 570 "simplify_goal_call.m"
      }
#line 568 "simplify_goal_call.m"
    else
#line 572 "simplify_goal_call.m"
      {
#line 572 "simplify_goal_call.m"
        {
#line 572 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__YInst_28);
        }
#line 572 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 572 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 3;
#line 572 "simplify_goal_call.m"
        else
#line 572 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 0;
#line 572 "simplify_goal_call.m"
      }
#line 575 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Unique_31 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0]);
#line 576 "simplify_goal_call.m"
    {
#line 576 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 576 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_31));
#line 576 "simplify_goal_call.m"
    }
#line 576 "simplify_goal_call.m"
    {
#line 576 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ArgInsts_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_64_64));
#line 576 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "simplify_goal_call.m"
    }
#line 577 "simplify_goal_call.m"
    {
#line 577 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__BuiltinModule_33 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 579 "simplify_goal_call.m"
    {
#line 579 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 579 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ModeNo_30));
#line 579 "simplify_goal_call.m"
    }
#line 580 "simplify_goal_call.m"
    {
#line 580 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_72_72 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__simplify_goal_call__ArgInsts_32);
    }
#line 578 "simplify_goal_call.m"
    {
#line 578 "simplify_goal_call.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__BuiltinModule_33, (MR_String) "compare", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__V_68_68, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__Args_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_call__V_72_72, check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__Context_25, &check_hlds__simplify__simplify_goal_call__CmpGoal0_34);
    }
#line 582 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__CmpExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal0_34, (MR_Integer) 0)));
#line 582 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__CmpInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal0_34, (MR_Integer) 1)));
#line 583 "simplify_goal_call.m"
    {
#line 583 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__CmpInfo0_36);
    }
#line 584 "simplify_goal_call.m"
    {
#line 584 "simplify_goal_call.m"
      parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37, &check_hlds__simplify__simplify_goal_call__CmpNonLocals_38);
    }
#line 585 "simplify_goal_call.m"
    {
#line 585 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__CmpNonLocals_38, check_hlds__simplify__simplify_goal_call__CmpInfo0_36, &check_hlds__simplify__simplify_goal_call__CmpInfo_39);
    }
#line 586 "simplify_goal_call.m"
    {
#line 586 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__CmpGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal_40, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpExpr_35));
#line 586 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal_40, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpInfo_39));
#line 586 "simplify_goal_call.m"
    }
#line 590 "simplify_goal_call.m"
    {
#line 590 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_74_74 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 590 "simplify_goal_call.m"
    {
#line 590 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_74_74));
#line 590 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 590 "simplify_goal_call.m"
    }
#line 589 "simplify_goal_call.m"
    {
#line 589 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__TypeCtor_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 589 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_41, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_73_73));
#line 589 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 589 "simplify_goal_call.m"
    }
#line 591 "simplify_goal_call.m"
    {
#line 591 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__BuiltinModule_33));
#line 591 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Inequality_14));
#line 591 "simplify_goal_call.m"
    }
#line 591 "simplify_goal_call.m"
    {
#line 591 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 591 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 591 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
#line 591 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 2) = ((MR_Box) ((MR_Integer) 0));
#line 591 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_41));
#line 591 "simplify_goal_call.m"
    }
#line 593 "simplify_goal_call.m"
    {
#line 593 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_82_82, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "simplify_goal_call.m"
    }
#line 593 "simplify_goal_call.m"
    {
#line 593 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_81_81, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_82_82));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "simplify_goal_call.m"
    }
#line 592 "simplify_goal_call.m"
    {
#line 592 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Bound_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 1) = ((MR_Box) ((MR_Integer) 0));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_81_81));
#line 592 "simplify_goal_call.m"
    }
#line 594 "simplify_goal_call.m"
    {
#line 594 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_85_85, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_31));
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_85_85, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
#line 594 "simplify_goal_call.m"
    }
#line 594 "simplify_goal_call.m"
    {
#line 594 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_86_86, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_86_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
#line 594 "simplify_goal_call.m"
    }
#line 594 "simplify_goal_call.m"
    {
#line 594 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UMode_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UMode_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_85_85));
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UMode_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_86_86));
#line 594 "simplify_goal_call.m"
    }
#line 595 "simplify_goal_call.m"
    {
#line 595 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__RHS_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 1) = ((MR_Box) ((MR_Integer) 0));
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "simplify_goal_call.m"
    }
#line 596 "simplify_goal_call.m"
    {
#line 596 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UKind_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 4) = ((MR_Box) ((MR_Integer) 0));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 5) = ((MR_Box) ((MR_Integer) 1));
#line 596 "simplify_goal_call.m"
    }
#line 599 "simplify_goal_call.m"
    {
#line 599 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UnifyExpr_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 599 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 599 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_45));
#line 599 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UMode_44));
#line 599 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UKind_46));
#line 599 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[23]));
#line 599 "simplify_goal_call.m"
    }
#line 600 "simplify_goal_call.m"
    {
#line 600 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_16);
    }
#line 601 "simplify_goal_call.m"
    {
#line 601 "simplify_goal_call.m"
      parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49, &check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50);
    }
#line 602 "simplify_goal_call.m"
    {
#line 602 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50, check_hlds__simplify__simplify_goal_call__GoalInfo_16, &check_hlds__simplify__simplify_goal_call__UnifyInfo_51);
    }
#line 603 "simplify_goal_call.m"
    {
#line 603 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UnifyGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyGoal_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyExpr_48));
#line 603 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyGoal_52, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyInfo_51));
#line 603 "simplify_goal_call.m"
    }
#line 608 "simplify_goal_call.m"
    if ((check_hlds__simplify__simplify_goal_call__Invert_15 == (MR_Integer) 0))
#line 606 "simplify_goal_call.m"
      {
#line 606 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_104_104;
#line 606 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_105_105;

#line 607 "simplify_goal_call.m"
        {
#line 607 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyGoal_52));
#line 607 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 607 "simplify_goal_call.m"
        }
#line 607 "simplify_goal_call.m"
        {
#line 607 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_104_104, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_40));
#line 607 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_104_104, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_105_105));
#line 607 "simplify_goal_call.m"
        }
#line 607 "simplify_goal_call.m"
        {
#line 607 "simplify_goal_call.m"
          MR_Word base;
#line 607 "simplify_goal_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 607 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17 = base;
#line 607 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 607 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 607 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_104_104));
#line 607 "simplify_goal_call.m"
        }
#line 606 "simplify_goal_call.m"
      }
#line 608 "simplify_goal_call.m"
    else
#line 609 "simplify_goal_call.m"
      {
#line 609 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_98_98;
#line 609 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_99_99;
#line 609 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_100_100;
#line 609 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_goal_call__UnifyGoal_52);

#line 611 "simplify_goal_call.m"
        {
#line 611 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 611 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_100_100, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_101_101));
#line 611 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_100_100, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyInfo_51));
#line 611 "simplify_goal_call.m"
        }
#line 611 "simplify_goal_call.m"
        {
#line 611 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_99_99, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_100_100));
#line 611 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "simplify_goal_call.m"
        }
#line 611 "simplify_goal_call.m"
        {
#line 611 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_98_98, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_40));
#line 611 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_98_98, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_99_99));
#line 611 "simplify_goal_call.m"
        }
#line 610 "simplify_goal_call.m"
        {
#line 610 "simplify_goal_call.m"
          MR_Word base;
#line 610 "simplify_goal_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 610 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17 = base;
#line 610 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 610 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 610 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_98_98));
#line 610 "simplify_goal_call.m"
        }
#line 609 "simplify_goal_call.m"
      }
#line 550 "simplify_goal_call.m"
  }
#line 544 "simplify_goal_call.m"
}

#line 448 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
#line 448 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 448 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
#line 448 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
#line 448 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
#line 448 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5)
#line 448 "simplify_goal_call.m"
{
#line 451 "simplify_goal_call.m"
  while (MR_TRUE)
#line 451 "simplify_goal_call.m"
    {
#line 451 "simplify_goal_call.m"
      /* tailcall optimized into a loop */
#line 451 "simplify_goal_call.m"
      {
#line 451 "simplify_goal_call.m"
        MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 451 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "simplify_goal_call.m"
        else
#line 453 "simplify_goal_call.m"
          {
#line 453 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)));
#line 453 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 1)));
#line 453 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__HeadVar_11;
#line 453 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_12;
#line 453 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Mode_13;
#line 453 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Modes_14;

#line 452 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 452 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 452 "simplify_goal_call.m"
              {
#line 452 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__HeadVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
#line 452 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 1)));
#line 452 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 452 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 452 "simplify_goal_call.m"
                  {
#line 452 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__3_3, (MR_Integer) 0)));
#line 452 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__3_3, (MR_Integer) 1)));
#line 454 "simplify_goal_call.m"
                    {
#line 454 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_5, check_hlds__simplify__simplify_goal_call__Mode_13);
                    }
#line 456 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 455 "simplify_goal_call.m"
                      {
#line 455 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(check_hlds__simplify__simplify_goal_call__Arg_9, check_hlds__simplify__simplify_goal_call__HeadVar_11, check_hlds__simplify__simplify_goal_call__CommonInfo_4);
                      }
#line 456 "simplify_goal_call.m"
                    else
#line 457 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 453 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 459 "simplify_goal_call.m"
                      {
#line 459 "simplify_goal_call.m"
                        /* direct tailcall eliminated */
#line 459 "simplify_goal_call.m"
                        {
#line 459 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1__tmp_copy_1 = check_hlds__simplify__simplify_goal_call__Args_10;
#line 459 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_call__HeadVars_12;
#line 459 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3__tmp_copy_3 = check_hlds__simplify__simplify_goal_call__Modes_14;

#line 459 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__3_3 = check_hlds__simplify__simplify_goal_call__HeadVar__3__tmp_copy_3;
#line 459 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__HeadVar__2__tmp_copy_2;
#line 459 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__1_1 = check_hlds__simplify__simplify_goal_call__HeadVar__1__tmp_copy_1;
#line 459 "simplify_goal_call.m"
                        }
#line 459 "simplify_goal_call.m"
                        continue;
#line 459 "simplify_goal_call.m"
                      }
#line 452 "simplify_goal_call.m"
                  }
#line 452 "simplify_goal_call.m"
              }
#line 453 "simplify_goal_call.m"
          }
#line 451 "simplify_goal_call.m"
        return check_hlds__simplify__simplify_goal_call__succeeded;
#line 451 "simplify_goal_call.m"
      }
#line 451 "simplify_goal_call.m"
      break;
#line 451 "simplify_goal_call.m"
    }
#line 448 "simplify_goal_call.m"
}

#line 397 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(
#line 397 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 397 "simplify_goal_call.m"
{
#line 397 "simplify_goal_call.m"
  {
#line 397 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 397 "simplify_goal_call.m"
    MR_builtin_longjmp((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0, 1);
#line 397 "simplify_goal_call.m"
  }
#line 397 "simplify_goal_call.m"
}

#line 399 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3(
#line 399 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 399 "simplify_goal_call.m"
{
#line 399 "simplify_goal_call.m"
  {
#line 399 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 399 "simplify_goal_call.m"
    (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25 = ((MR_Word) (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25);
#line 399 "simplify_goal_call.m"
    {
#line 399 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(check_hlds__simplify__simplify_goal_call__env_ptr);
#line 399 "simplify_goal_call.m"
      return;
    }
#line 399 "simplify_goal_call.m"
  }
#line 399 "simplify_goal_call.m"
}

#line 397 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(
#line 397 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 397 "simplify_goal_call.m"
{
#line 397 "simplify_goal_call.m"
  {
#line 397 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 400 "simplify_goal_call.m"
    {
#line 400 "simplify_goal_call.m"
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25);
    }
#line 397 "simplify_goal_call.m"
    if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 397 "simplify_goal_call.m"
      {
#line 403 "simplify_goal_call.m"
        {
#line 403 "simplify_goal_call.m"
          (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25);
        }
#line 402 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 402 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 402 "simplify_goal_call.m"
          {
#line 402 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(check_hlds__simplify__simplify_goal_call__env_ptr);
#line 402 "simplify_goal_call.m"
            return;
          }
#line 397 "simplify_goal_call.m"
      }
#line 397 "simplify_goal_call.m"
  }
#line 397 "simplify_goal_call.m"
}

#line 397 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(
#line 397 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 397 "simplify_goal_call.m"
{
#line 397 "simplify_goal_call.m"
  {
#line 397 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 397 "simplify_goal_call.m"
    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0) == 0)
#line 397 "simplify_goal_call.m"
      {
#line 397 "simplify_goal_call.m"
        {
#line 399 "simplify_goal_call.m"
          {
#line 399 "simplify_goal_call.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24, check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3, check_hlds__simplify__simplify_goal_call__env_ptr);
          }
#line 397 "simplify_goal_call.m"
        }
#line 397 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = MR_FALSE;
#line 397 "simplify_goal_call.m"
      }
#line 397 "simplify_goal_call.m"
    else
#line 397 "simplify_goal_call.m"
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 397 "simplify_goal_call.m"
  }
#line 397 "simplify_goal_call.m"
}

#line 351 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_12,
#line 351 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_13,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_14,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_15,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_16,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_17,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_18,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_19,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common_20,
#line 351 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 351 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35)
#line 351 "simplify_goal_call.m"
{
#line 351 "simplify_goal_call.m"
  {
#line 351 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s check_hlds__simplify__simplify_goal_call__env;

#line 437 "simplify_goal_call.m"
    {
#line 362 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_23;
#line 362 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__Purity_27;
#line 362 "simplify_goal_call.m"
      MR_Integer check_hlds__simplify__simplify_goal_call__V_36_36;
#line 362 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_83_83;
#line 362 "simplify_goal_call.m"
      MR_Integer check_hlds__simplify__simplify_goal_call__V_84_84;
#line 376 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_80_80;
#line 376 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_81_81;
#line 408 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_37_37;
#line 408 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
#line 408 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;

#line 362 "simplify_goal_call.m"
      {
#line 362 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34);
      }
#line 362 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 362 "simplify_goal_call.m"
        {
#line 366 "simplify_goal_call.m"
          {
#line 366 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__V_83_83, &check_hlds__simplify__simplify_goal_call__V_84_84);
          }
#line 366 "simplify_goal_call.m"
          {
#line 366 "simplify_goal_call.m"
            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_12, check_hlds__simplify__simplify_goal_call__V_83_83);
          }
#line 362 "simplify_goal_call.m"
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 362 "simplify_goal_call.m"
            {
#line 366 "simplify_goal_call.m"
              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__ProcId_13 == check_hlds__simplify__simplify_goal_call__V_84_84);
#line 362 "simplify_goal_call.m"
              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 362 "simplify_goal_call.m"
                {
#line 372 "simplify_goal_call.m"
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__IsBuiltin_15 == (MR_Integer) 0);
#line 372 "simplify_goal_call.m"
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 362 "simplify_goal_call.m"
                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 362 "simplify_goal_call.m"
                    {
#line 376 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 0)));
#line 376 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 1)));
#line 376 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 2)));
#line 376 "simplify_goal_call.m"
                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__V_36_36 == (MR_Integer) 0);
#line 362 "simplify_goal_call.m"
                      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 362 "simplify_goal_call.m"
                        {
#line 379 "simplify_goal_call.m"
                          {
#line 379 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22);
                          }
#line 380 "simplify_goal_call.m"
                          {
#line 380 "simplify_goal_call.m"
                            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &check_hlds__simplify__simplify_goal_call__HeadVars_23);
                          }
#line 381 "simplify_goal_call.m"
                          {
#line 381 "simplify_goal_call.m"
                            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24);
                          }
#line 382 "simplify_goal_call.m"
                          {
#line 382 "simplify_goal_call.m"
                            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(check_hlds__simplify__simplify_goal_call__Args_14, check_hlds__simplify__simplify_goal_call__HeadVars_23, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24, check_hlds__simplify__simplify_goal_call__Common_20, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22);
                          }
#line 362 "simplify_goal_call.m"
                          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 362 "simplify_goal_call.m"
                            {
#line 397 "simplify_goal_call.m"
                              {
#line 397 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(&check_hlds__simplify__simplify_goal_call__env);
                              }
#line 397 "simplify_goal_call.m"
                              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 362 "simplify_goal_call.m"
                              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 362 "simplify_goal_call.m"
                                {
#line 408 "simplify_goal_call.m"
                                  {
#line 408 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 408 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__V_37_37, 0) = NULL;
#line 408 "simplify_goal_call.m"
                                  }
#line 408 "simplify_goal_call.m"
                                  {
#line 408 "simplify_goal_call.m"
                                    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &check_hlds__simplify__simplify_goal_call__V_85_85);
                                  }
#line 408 "simplify_goal_call.m"
                                  {
#line 408 "simplify_goal_call.m"
                                    (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(check_hlds__simplify__simplify_goal_call__V_37_37, check_hlds__simplify__simplify_goal_call__V_85_85);
                                  }
#line 408 "simplify_goal_call.m"
                                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 362 "simplify_goal_call.m"
                                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 362 "simplify_goal_call.m"
                                    {
#line 412 "simplify_goal_call.m"
                                      {
#line 412 "simplify_goal_call.m"
                                        hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_16, &check_hlds__simplify__simplify_goal_call__Purity_27);
                                      }
#line 413 "simplify_goal_call.m"
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__Purity_27 == (MR_Integer) 2);
#line 413 "simplify_goal_call.m"
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 362 "simplify_goal_call.m"
                                    }
#line 362 "simplify_goal_call.m"
                                }
#line 362 "simplify_goal_call.m"
                            }
#line 362 "simplify_goal_call.m"
                        }
#line 362 "simplify_goal_call.m"
                    }
#line 362 "simplify_goal_call.m"
                }
#line 362 "simplify_goal_call.m"
            }
#line 362 "simplify_goal_call.m"
        }
#line 437 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 415 "simplify_goal_call.m"
        {
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_28;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Msg_31;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Spec_33;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;

#line 415 "simplify_goal_call.m"
          {
#line 415 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__GoalContext_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_18);
          }
#line 428 "simplify_goal_call.m"
          {
#line 428 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Msg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 428 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_28));
#line 428 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
#line 428 "simplify_goal_call.m"
          }
#line 435 "simplify_goal_call.m"
          {
#line 435 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_31));
#line 435 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "simplify_goal_call.m"
          }
#line 434 "simplify_goal_call.m"
          {
#line 434 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 434 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
#line 434 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_3[0])));
#line 434 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
#line 434 "simplify_goal_call.m"
          }
#line 436 "simplify_goal_call.m"
          {
#line 436 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_call__Spec_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);
#line 436 "simplify_goal_call.m"
            return;
          }
#line 415 "simplify_goal_call.m"
        }
#line 437 "simplify_goal_call.m"
      else
#line 437 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34;
#line 437 "simplify_goal_call.m"
    }
#line 351 "simplify_goal_call.m"
  }
#line 351 "simplify_goal_call.m"
}

#line 303 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
#line 303 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6,
#line 303 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7,
#line 303 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_8,
#line 303 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22,
#line 303 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23)
#line 303 "simplify_goal_call.m"
{
#line 308 "simplify_goal_call.m"
  {
#line 308 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 308 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_10;
#line 311 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Markers_11;
#line 311 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredId_12;
#line 311 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredInfo_14;
#line 311 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15;
#line 311 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_24_24;
#line 318 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_13_13;
#line 326 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;

#line 309 "simplify_goal_call.m"
    {
#line 309 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, &check_hlds__simplify__simplify_goal_call__ModuleInfo_10);
    }
#line 311 "simplify_goal_call.m"
    {
#line 311 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22);
    }
#line 311 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 311 "simplify_goal_call.m"
      {
#line 312 "simplify_goal_call.m"
        {
#line 312 "simplify_goal_call.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_7, &check_hlds__simplify__simplify_goal_call__Markers_11);
        }
#line 313 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_24_24 = (MR_Integer) 4;
#line 313 "simplify_goal_call.m"
        {
#line 313 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__Markers_11, check_hlds__simplify__simplify_goal_call__V_24_24);
        }
#line 311 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 311 "simplify_goal_call.m"
          {
#line 318 "simplify_goal_call.m"
            {
#line 318 "simplify_goal_call.m"
              check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, &check_hlds__simplify__simplify_goal_call__ThisPredId_12, &check_hlds__simplify__simplify_goal_call__V_13_13);
            }
#line 319 "simplify_goal_call.m"
            {
#line 319 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_6, check_hlds__simplify__simplify_goal_call__ThisPredId_12);
            }
#line 319 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 311 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 311 "simplify_goal_call.m"
              {
#line 324 "simplify_goal_call.m"
                {
#line 324 "simplify_goal_call.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_10, check_hlds__simplify__simplify_goal_call__ThisPredId_12, &check_hlds__simplify__simplify_goal_call__ThisPredInfo_14);
                }
#line 325 "simplify_goal_call.m"
                {
#line 325 "simplify_goal_call.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredInfo_14, &check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15);
                }
#line 326 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_25_25 = (MR_Integer) 4;
#line 326 "simplify_goal_call.m"
                {
#line 326 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15, check_hlds__simplify__simplify_goal_call__V_25_25);
                }
#line 326 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 311 "simplify_goal_call.m"
              }
#line 311 "simplify_goal_call.m"
          }
#line 311 "simplify_goal_call.m"
      }
#line 342 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 330 "simplify_goal_call.m"
      {
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_16;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__PredPieces_17;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Pieces_18;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Msg_19;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Spec_21;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_38_38;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_39_39;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
#line 330 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;

#line 330 "simplify_goal_call.m"
        {
#line 330 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__GoalContext_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_8);
        }
#line 331 "simplify_goal_call.m"
        {
#line 331 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__PredPieces_17 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_10, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__PredId_6);
        }
#line 4758 "check_hlds.simplify.simplify_goal_call.c"
        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 334 "simplify_goal_call.m"
        {
#line 334 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_31_31 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55, check_hlds__simplify__simplify_goal_call__PredPieces_17, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3]));
        }
#line 333 "simplify_goal_call.m"
        {
#line 333 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__Pieces_18 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]), check_hlds__simplify__simplify_goal_call__V_31_31);
        }
#line 336 "simplify_goal_call.m"
        {
#line 336 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 336 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Pieces_18));
#line 336 "simplify_goal_call.m"
        }
#line 336 "simplify_goal_call.m"
        {
#line 336 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_43_43));
#line 336 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "simplify_goal_call.m"
        }
#line 336 "simplify_goal_call.m"
        {
#line 336 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 336 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_42_42));
#line 336 "simplify_goal_call.m"
        }
#line 336 "simplify_goal_call.m"
        {
#line 336 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_39_39));
#line 336 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "simplify_goal_call.m"
        }
#line 335 "simplify_goal_call.m"
        {
#line 335 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_19, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_16));
#line 335 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_19, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_38_38));
#line 335 "simplify_goal_call.m"
        }
#line 340 "simplify_goal_call.m"
        {
#line 340 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_19));
#line 340 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "simplify_goal_call.m"
        }
#line 339 "simplify_goal_call.m"
        {
#line 339 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 339 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
#line 339 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_3[0])));
#line 339 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_52_52));
#line 339 "simplify_goal_call.m"
        }
#line 341 "simplify_goal_call.m"
        {
#line 341 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_call__Spec_21, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23);
#line 341 "simplify_goal_call.m"
          return;
        }
#line 330 "simplify_goal_call.m"
      }
#line 342 "simplify_goal_call.m"
    else
#line 342 "simplify_goal_call.m"
      *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22;
#line 308 "simplify_goal_call.m"
  }
#line 303 "simplify_goal_call.m"
}

#line 291 "simplify_goal_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(
#line 291 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Arg_3)
#line 291 "simplify_goal_call.m"
{
#line 293 "simplify_goal_call.m"
  {
#line 293 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 293 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2;
#line 293 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 0)));
#line 293 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 1)));
#line 293 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 2)));
#line 293 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 3)));

#line 293 "simplify_goal_call.m"
    {
#line 293 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 293 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_5_5));
#line 293 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_6_6));
#line 293 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_7_7));
#line 293 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 1));
#line 293 "simplify_goal_call.m"
    }
#line 293 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__HeadVar__2_2;
#line 293 "simplify_goal_call.m"
  }
#line 291 "simplify_goal_call.m"
}

#line 45 "simplify_goal_call.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
#line 45 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42,
#line 45 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43,
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call___NestedContext0_14,
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_15,
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
#line 45 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
#line 45 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44,
#line 45 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45)
#line 45 "simplify_goal_call.m"
{
#line 230 "simplify_goal_call.m"
  {
#line 230 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 230 "simplify_goal_call.m"
    {
#line 230 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43, check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45);
#line 230 "simplify_goal_call.m"
      return;
    }
#line 230 "simplify_goal_call.m"
  }
#line 45 "simplify_goal_call.m"
}

#line 36 "simplify_goal_call.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(
#line 36 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
#line 36 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 36 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_13,
#line 36 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_4,
#line 36 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call___NestedContext0_14,
#line 36 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call___InstMap0_15,
#line 36 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
#line 36 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
#line 36 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37,
#line 36 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38)
#line 36 "simplify_goal_call.m"
{
#line 192 "simplify_goal_call.m"
  {
#line 192 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 192 "simplify_goal_call.m"
    {
#line 192 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalInfo_4, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
#line 192 "simplify_goal_call.m"
      return;
    }
#line 192 "simplify_goal_call.m"
  }
#line 36 "simplify_goal_call.m"
}

#line 27 "simplify_goal_call.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(
#line 27 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
#line 27 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 27 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_13,
#line 27 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_14,
#line 27 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_15,
#line 27 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_16,
#line 27 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_17,
#line 27 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_18,
#line 27 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_40,
#line 27 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41)
#line 27 "simplify_goal_call.m"
{
#line 93 "simplify_goal_call.m"
  {
#line 93 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 93 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 0)));
#line 93 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 93 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 93 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 93 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_26;
#line 93 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_27;
#line 93 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_28;
#line 93 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleSymName_29;
#line 93 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_30;
#line 93 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42;
#line 93 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 173 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__ModuleName_31;

#line 95 "simplify_goal_call.m"
    {
#line 95 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_40, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
    }
#line 96 "simplify_goal_call.m"
    {
#line 96 "simplify_goal_call.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__PredInfo_27, &check_hlds__simplify__simplify_goal_call__ProcInfo_28);
    }
#line 98 "simplify_goal_call.m"
    {
#line 98 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_40, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42);
    }
#line 100 "simplify_goal_call.m"
    {
#line 100 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__IsBuiltin_23, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__ProcInfo_28, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__NestedContext_15, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43);
    }
#line 105 "simplify_goal_call.m"
    {
#line 105 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ModuleSymName_29 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
    }
#line 106 "simplify_goal_call.m"
    {
#line 106 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, &check_hlds__simplify__simplify_goal_call__Globals_30);
    }
#line 107 "simplify_goal_call.m"
    {
#line 107 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleSymName_29, &check_hlds__simplify__simplify_goal_call__ModuleName_31);
    }
#line 173 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 131 "simplify_goal_call.m"
      {
#line 131 "simplify_goal_call.m"
        MR_String check_hlds__simplify__simplify_goal_call__PredName_32;
#line 131 "simplify_goal_call.m"
        MR_Integer check_hlds__simplify__simplify_goal_call__ModeNum_33;
#line 131 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_34;
#line 145 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35;
#line 145 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36;

#line 131 "simplify_goal_call.m"
        {
#line 131 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__PredName_32 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
#line 132 "simplify_goal_call.m"
        {
#line 132 "simplify_goal_call.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__ModeNum_33);
        }
#line 133 "simplify_goal_call.m"
        {
#line 133 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__VarTypes_34);
        }
#line 136 "simplify_goal_call.m"
        {
#line 136 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43);
        }
#line 136 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 137 "simplify_goal_call.m"
          {
#line 137 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(check_hlds__simplify__simplify_goal_call__Globals_30, check_hlds__simplify__simplify_goal_call__VarTypes_34, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__ModeNum_33, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36);
          }
#line 145 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 141 "simplify_goal_call.m"
          {
#line 141 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35;
#line 142 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36;
#line 143 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
#line 144 "simplify_goal_call.m"
            {
#line 144 "simplify_goal_call.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41);
#line 144 "simplify_goal_call.m"
              return;
            }
#line 141 "simplify_goal_call.m"
          }
#line 145 "simplify_goal_call.m"
        else
#line 5141 "check_hlds.simplify.simplify_goal_call.c"
          {
#line 5143 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_62;

#line 473 "simplify_goal_call.m"
            {
#line 473 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_62);
            }
#line 5151 "check_hlds.simplify.simplify_goal_call.c"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5153 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 5155 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
#line 5157 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call__Purity_63;
#line 5159 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64;
#line 5161 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65;

#line 474 "simplify_goal_call.m"
                {
#line 474 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__Purity_63 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo0_13);
                }
#line 478 "simplify_goal_call.m"
                {
#line 478 "simplify_goal_call.m"
                  check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__Purity_63, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45);
                }
#line 481 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64)) == (MR_mktag((MR_Integer) 1)));
#line 481 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 481 "simplify_goal_call.m"
                  {
#line 481 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64, (MR_Integer) 0)));
#line 482 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_62 == (MR_Integer) 1);
#line 481 "simplify_goal_call.m"
                  }
#line 5186 "check_hlds.simplify.simplify_goal_call.c"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5188 "check_hlds.simplify.simplify_goal_call.c"
                  {
#line 150 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65;
#line 151 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 150 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
#line 5196 "check_hlds.simplify.simplify_goal_call.c"
                  }
#line 5198 "check_hlds.simplify.simplify_goal_call.c"
                else
#line 167 "simplify_goal_call.m"
                  {
#line 167 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38;
#line 167 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39;
#line 167 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47;

#line 159 "simplify_goal_call.m"
                    {
#line 159 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47);
                    }
#line 167 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 165 "simplify_goal_call.m"
                      {
#line 165 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47;
#line 165 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38;
#line 166 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39;
#line 165 "simplify_goal_call.m"
                      }
#line 167 "simplify_goal_call.m"
                    else
#line 168 "simplify_goal_call.m"
                      {
#line 168 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 169 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 168 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
#line 168 "simplify_goal_call.m"
                      }
#line 167 "simplify_goal_call.m"
                  }
#line 5240 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5242 "check_hlds.simplify.simplify_goal_call.c"
            else
#line 5244 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 167 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84;
#line 167 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85;
#line 167 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86;

#line 489 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
#line 159 "simplify_goal_call.m"
                {
#line 159 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86);
                }
#line 167 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 165 "simplify_goal_call.m"
                  {
#line 165 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86;
#line 165 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84;
#line 166 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85;
#line 165 "simplify_goal_call.m"
                  }
#line 167 "simplify_goal_call.m"
                else
#line 168 "simplify_goal_call.m"
                  {
#line 168 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 169 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 168 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
#line 168 "simplify_goal_call.m"
                  }
#line 5284 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5286 "check_hlds.simplify.simplify_goal_call.c"
          }
#line 131 "simplify_goal_call.m"
      }
#line 173 "simplify_goal_call.m"
    else
#line 5292 "check_hlds.simplify.simplify_goal_call.c"
      {
#line 5294 "check_hlds.simplify.simplify_goal_call.c"
        MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_78;

#line 473 "simplify_goal_call.m"
        {
#line 473 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_78);
        }
#line 5302 "check_hlds.simplify.simplify_goal_call.c"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5304 "check_hlds.simplify.simplify_goal_call.c"
          {
#line 5306 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call__Purity_79;
#line 5308 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80;
#line 5310 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81;

#line 474 "simplify_goal_call.m"
            {
#line 474 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__Purity_79 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo0_13);
            }
#line 478 "simplify_goal_call.m"
            {
#line 478 "simplify_goal_call.m"
              check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__Purity_79, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41);
            }
#line 481 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80)) == (MR_mktag((MR_Integer) 1)));
#line 481 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 481 "simplify_goal_call.m"
              {
#line 481 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80, (MR_Integer) 0)));
#line 482 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_78 == (MR_Integer) 1);
#line 481 "simplify_goal_call.m"
              }
#line 5335 "check_hlds.simplify.simplify_goal_call.c"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5337 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 179 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81;
#line 180 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 5343 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5345 "check_hlds.simplify.simplify_goal_call.c"
            else
#line 5347 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 186 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 187 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 5353 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5355 "check_hlds.simplify.simplify_goal_call.c"
          }
#line 5357 "check_hlds.simplify.simplify_goal_call.c"
        else
#line 5359 "check_hlds.simplify.simplify_goal_call.c"
          {
#line 489 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
#line 489 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
#line 186 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 187 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 5369 "check_hlds.simplify.simplify_goal_call.c"
          }
#line 5371 "check_hlds.simplify.simplify_goal_call.c"
      }
#line 93 "simplify_goal_call.m"
  }
#line 27 "simplify_goal_call.m"
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
