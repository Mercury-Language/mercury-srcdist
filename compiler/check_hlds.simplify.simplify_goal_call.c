/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "libs.int_emu.mih"
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



#line 352 "simplify_goal_call.m"
struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s {
#line 438 "simplify_goal_call.m"
  MR_bool check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded;
#line 363 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22;
#line 363 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24;
#line 398 "simplify_goal_call.m"
  jmp_buf check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0;
#line 398 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25;
#line 400 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25;
#line 352 "simplify_goal_call.m"
};


#line 168 "check_hlds.simplify.simplify_goal_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 665 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(
#line 665 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_10,
#line 665 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_11,
#line 665 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_13,
#line 665 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14,
#line 665 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34,
#line 665 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35,
#line 665 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36,
#line 665 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);

#line 615 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
#line 615 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_9,
#line 615 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10,
#line 615 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32,
#line 615 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33,
#line 615 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 615 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);

#line 505 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(
#line 505 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_12,
#line 505 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__ModuleName_13,
#line 505 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_14,
#line 505 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_16,
#line 505 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 505 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_18,
#line 505 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19,
#line 505 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_9,
#line 505 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26,
#line 505 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27);

#line 274 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
#line 274 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 274 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 266 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
#line 266 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 266 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 265 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
#line 265 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 265 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 248 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
#line 248 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 248 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 409 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(
#line 409 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 409 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2);

#line 785 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(
#line 785 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
#line 785 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 785 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
#line 785 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
#line 785 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 785 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
#line 785 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14);

#line 746 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(
#line 746 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 746 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_10,
#line 746 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__IntConst_11,
#line 746 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 746 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_13,
#line 746 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14,
#line 746 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20,
#line 746 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21);

#line 545 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__TI_11,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_12,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_13,
#line 545 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Inequality_14,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Invert_15,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_16,
#line 545 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_18,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53,
#line 545 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);

#line 449 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
#line 449 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 449 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
#line 449 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
#line 449 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
#line 449 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5);

#line 398 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(
#line 398 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 400 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3(
#line 400 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 398 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(
#line 398 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 398 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(
#line 398 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 352 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_12,
#line 352 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_13,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_14,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_15,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_16,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_17,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_18,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_19,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common_20,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 352 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);

#line 304 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
#line 304 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6,
#line 304 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7,
#line 304 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_8,
#line 304 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22,
#line 304 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23);

#line 292 "simplify_goal_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(
#line 292 "simplify_goal_call.m"
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



#line 657 "check_hlds.simplify.simplify_goal_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 665 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(
#line 665 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_10,
#line 665 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_11,
#line 665 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_13,
#line 665 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14,
#line 665 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34,
#line 665 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35,
#line 665 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36,
#line 665 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37)
#line 665 "simplify_goal_call.m"
{
#line 671 "simplify_goal_call.m"
  {
#line 671 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 671 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_17;
#line 671 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_18;
#line 671 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19;
#line 671 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_38_38;
#line 671 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_113_113;
#line 671 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_114_114;
#line 671 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_115_115;
#line 671 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_116_116;

#line 672 "simplify_goal_call.m"
    {
#line 672 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
#line 673 "simplify_goal_call.m"
    {
#line 673 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__Globals_18);
    }
#line 674 "simplify_goal_call.m"
    {
#line 674 "simplify_goal_call.m"
      libs__int_emu__target_bits_per_int_2_p_0(check_hlds__simplify__simplify_goal_call__Globals_18, &check_hlds__simplify__simplify_goal_call__V_38_38);
    }
#line 674 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19 = (MR_Integer) check_hlds__simplify__simplify_goal_call__V_38_38;
#line 701 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 701 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 701 "simplify_goal_call.m"
      {
#line 701 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 0)));
#line 701 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 1)));
#line 701 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_113_113)) == (MR_mktag((MR_Integer) 1)));
#line 701 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 701 "simplify_goal_call.m"
          {
#line 701 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_113_113, (MR_Integer) 0)));
#line 701 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_113_113, (MR_Integer) 1)));
#line 683 "simplify_goal_call.m"
            if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "<<") == 0))
#line 718 "simplify_goal_call.m"
              {
#line 718 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_51_51;
#line 718 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;
#line 718 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_53_53;
#line 718 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_54_54;
#line 718 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_55_55;
#line 718 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 718 "simplify_goal_call.m"
                MR_Integer check_hlds__simplify__simplify_goal_call__V_57_57;
#line 718 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;
#line 718 "simplify_goal_call.m"
                MR_String check_hlds__simplify__simplify_goal_call__Op_103;
#line 718 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__Z_104;
#line 718 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__InstY_105;
#line 718 "simplify_goal_call.m"
                MR_Integer check_hlds__simplify__simplify_goal_call__YVal_106;
#line 721 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;
#line 721 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;

#line 719 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_115_115)) == (MR_mktag((MR_Integer) 1)));
#line 719 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 719 "simplify_goal_call.m"
                  {
#line 719 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Z_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 0)));
#line 719 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 1)));
#line 719 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 718 "simplify_goal_call.m"
                      {
#line 720 "simplify_goal_call.m"
                        {
#line 720 "simplify_goal_call.m"
                          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_116_116, &check_hlds__simplify__simplify_goal_call__InstY_105);
                        }
#line 721 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_105)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_105, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 721 "simplify_goal_call.m"
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 721 "simplify_goal_call.m"
                          {
#line 721 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_105, (MR_Integer) 1)));
#line 721 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_105, (MR_Integer) 2)));
#line 721 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_105, (MR_Integer) 3)));
#line 721 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 721 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 721 "simplify_goal_call.m"
                              {
#line 721 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_52_52, (MR_Integer) 0)));
#line 721 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_52_52, (MR_Integer) 1)));
#line 721 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 718 "simplify_goal_call.m"
                                  {
#line 721 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_53_53, (MR_Integer) 0)));
#line 721 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_53_53, (MR_Integer) 1)));
#line 721 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 718 "simplify_goal_call.m"
                                      {
#line 721 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_54_54)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_54_54, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 721 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 721 "simplify_goal_call.m"
                                          {
#line 721 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__YVal_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_54_54, (MR_Integer) 1)));
#line 722 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__V_57_57 = (MR_Integer) 0;
#line 722 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_106 >= check_hlds__simplify__simplify_goal_call__V_57_57);
#line 718 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 718 "simplify_goal_call.m"
                                              {
#line 723 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_106 < check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19);
#line 718 "simplify_goal_call.m"
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 718 "simplify_goal_call.m"
                                                  {
#line 724 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__Op_103 = (MR_String) "unchecked_left_shift";
#line 725 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__V_58_58 = (MR_Integer) 0;
#line 725 "simplify_goal_call.m"
                                                    {
#line 725 "simplify_goal_call.m"
                                                      check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_103, check_hlds__simplify__simplify_goal_call__V_58_58, check_hlds__simplify__simplify_goal_call__V_114_114, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__Z_104, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                    }
#line 718 "simplify_goal_call.m"
                                                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
#line 718 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 718 "simplify_goal_call.m"
                                                  }
#line 718 "simplify_goal_call.m"
                                              }
#line 721 "simplify_goal_call.m"
                                          }
#line 718 "simplify_goal_call.m"
                                      }
#line 718 "simplify_goal_call.m"
                                  }
#line 721 "simplify_goal_call.m"
                              }
#line 721 "simplify_goal_call.m"
                          }
#line 718 "simplify_goal_call.m"
                      }
#line 719 "simplify_goal_call.m"
                  }
#line 718 "simplify_goal_call.m"
              }
#line 683 "simplify_goal_call.m"
            else
#line 683 "simplify_goal_call.m"
            if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) ">>") == 0))
#line 728 "simplify_goal_call.m"
              {
#line 728 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_41_41;
#line 728 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;
#line 728 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
#line 728 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_44_44;
#line 728 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_45_45;
#line 728 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 728 "simplify_goal_call.m"
                MR_Integer check_hlds__simplify__simplify_goal_call__V_47_47;
#line 728 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 728 "simplify_goal_call.m"
                MR_String check_hlds__simplify__simplify_goal_call__Op_109;
#line 728 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__Z_110;
#line 728 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__InstY_111;
#line 728 "simplify_goal_call.m"
                MR_Integer check_hlds__simplify__simplify_goal_call__YVal_112;
#line 731 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_32_32;
#line 731 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_33_33;

#line 729 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_115_115)) == (MR_mktag((MR_Integer) 1)));
#line 729 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 729 "simplify_goal_call.m"
                  {
#line 729 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Z_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 0)));
#line 729 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 1)));
#line 729 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 728 "simplify_goal_call.m"
                      {
#line 730 "simplify_goal_call.m"
                        {
#line 730 "simplify_goal_call.m"
                          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_116_116, &check_hlds__simplify__simplify_goal_call__InstY_111);
                        }
#line 731 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_111)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_111, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 731 "simplify_goal_call.m"
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 731 "simplify_goal_call.m"
                          {
#line 731 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_111, (MR_Integer) 1)));
#line 731 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_111, (MR_Integer) 2)));
#line 731 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_111, (MR_Integer) 3)));
#line 731 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 731 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 731 "simplify_goal_call.m"
                              {
#line 731 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, (MR_Integer) 0)));
#line 731 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, (MR_Integer) 1)));
#line 731 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 728 "simplify_goal_call.m"
                                  {
#line 731 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_43_43, (MR_Integer) 0)));
#line 731 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_43_43, (MR_Integer) 1)));
#line 731 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 728 "simplify_goal_call.m"
                                      {
#line 731 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_44_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_44_44, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 731 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 731 "simplify_goal_call.m"
                                          {
#line 731 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__YVal_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_44_44, (MR_Integer) 1)));
#line 732 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__V_47_47 = (MR_Integer) 0;
#line 732 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_112 >= check_hlds__simplify__simplify_goal_call__V_47_47);
#line 728 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 728 "simplify_goal_call.m"
                                              {
#line 733 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_112 < check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19);
#line 728 "simplify_goal_call.m"
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 728 "simplify_goal_call.m"
                                                  {
#line 734 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__Op_109 = (MR_String) "unchecked_right_shift";
#line 735 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__V_48_48 = (MR_Integer) 0;
#line 735 "simplify_goal_call.m"
                                                    {
#line 735 "simplify_goal_call.m"
                                                      check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_109, check_hlds__simplify__simplify_goal_call__V_48_48, check_hlds__simplify__simplify_goal_call__V_114_114, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__Z_110, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                    }
#line 728 "simplify_goal_call.m"
                                                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
#line 728 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 728 "simplify_goal_call.m"
                                                  }
#line 728 "simplify_goal_call.m"
                                              }
#line 731 "simplify_goal_call.m"
                                          }
#line 728 "simplify_goal_call.m"
                                      }
#line 728 "simplify_goal_call.m"
                                  }
#line 731 "simplify_goal_call.m"
                              }
#line 731 "simplify_goal_call.m"
                          }
#line 728 "simplify_goal_call.m"
                      }
#line 729 "simplify_goal_call.m"
                  }
#line 728 "simplify_goal_call.m"
              }
#line 683 "simplify_goal_call.m"
            else
#line 683 "simplify_goal_call.m"
            if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "rem") == 0))
#line 709 "simplify_goal_call.m"
              {
#line 709 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_61_61;
#line 709 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_62_62;
#line 709 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_63_63;
#line 709 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
#line 709 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_65_65;
#line 709 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_66_66;
#line 709 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_67_67;
#line 709 "simplify_goal_call.m"
                MR_String check_hlds__simplify__simplify_goal_call__Op_97;
#line 709 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__Z_98;
#line 709 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__InstY_99;
#line 709 "simplify_goal_call.m"
                MR_Integer check_hlds__simplify__simplify_goal_call__YVal_100;
#line 712 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_28_28;
#line 712 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_29_29;

#line 710 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_115_115)) == (MR_mktag((MR_Integer) 1)));
#line 710 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 710 "simplify_goal_call.m"
                  {
#line 710 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Z_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 0)));
#line 710 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 1)));
#line 710 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 709 "simplify_goal_call.m"
                      {
#line 711 "simplify_goal_call.m"
                        {
#line 711 "simplify_goal_call.m"
                          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_116_116, &check_hlds__simplify__simplify_goal_call__InstY_99);
                        }
#line 712 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_99)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_99, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 712 "simplify_goal_call.m"
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 712 "simplify_goal_call.m"
                          {
#line 712 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_99, (MR_Integer) 1)));
#line 712 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_99, (MR_Integer) 2)));
#line 712 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_99, (MR_Integer) 3)));
#line 712 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 712 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 712 "simplify_goal_call.m"
                              {
#line 712 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_62_62, (MR_Integer) 0)));
#line 712 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_62_62, (MR_Integer) 1)));
#line 712 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 709 "simplify_goal_call.m"
                                  {
#line 712 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_63_63, (MR_Integer) 0)));
#line 712 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_63_63, (MR_Integer) 1)));
#line 712 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 709 "simplify_goal_call.m"
                                      {
#line 712 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_64_64)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_64_64, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 712 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 712 "simplify_goal_call.m"
                                          {
#line 712 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__YVal_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_64_64, (MR_Integer) 1)));
#line 713 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_100 == (MR_Integer) 0);
#line 713 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 709 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 709 "simplify_goal_call.m"
                                              {
#line 714 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__Op_97 = (MR_String) "unchecked_rem";
#line 715 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_67_67 = (MR_Integer) 0;
#line 715 "simplify_goal_call.m"
                                                {
#line 715 "simplify_goal_call.m"
                                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_97, check_hlds__simplify__simplify_goal_call__V_67_67, check_hlds__simplify__simplify_goal_call__V_114_114, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__Z_98, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                }
#line 709 "simplify_goal_call.m"
                                                *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
#line 709 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 709 "simplify_goal_call.m"
                                              }
#line 712 "simplify_goal_call.m"
                                          }
#line 709 "simplify_goal_call.m"
                                      }
#line 709 "simplify_goal_call.m"
                                  }
#line 712 "simplify_goal_call.m"
                              }
#line 712 "simplify_goal_call.m"
                          }
#line 709 "simplify_goal_call.m"
                      }
#line 710 "simplify_goal_call.m"
                  }
#line 709 "simplify_goal_call.m"
              }
#line 683 "simplify_goal_call.m"
            else
#line 683 "simplify_goal_call.m"
            if ((((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "/") == 0)) || ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "//") == 0))))
#line 700 "simplify_goal_call.m"
              {
#line 700 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__Z_23;
#line 700 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__InstY_24;
#line 700 "simplify_goal_call.m"
                MR_Integer check_hlds__simplify__simplify_goal_call__YVal_27;
#line 700 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_70_70;
#line 700 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_71_71;
#line 700 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
#line 700 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_73_73;
#line 700 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_74_74;
#line 700 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
#line 700 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_76_76;
#line 700 "simplify_goal_call.m"
                MR_String check_hlds__simplify__simplify_goal_call__Op_94;
#line 703 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;
#line 703 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;

#line 701 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_115_115)) == (MR_mktag((MR_Integer) 1)));
#line 701 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 701 "simplify_goal_call.m"
                  {
#line 701 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Z_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 0)));
#line 701 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 1)));
#line 701 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 700 "simplify_goal_call.m"
                      {
#line 702 "simplify_goal_call.m"
                        {
#line 702 "simplify_goal_call.m"
                          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_116_116, &check_hlds__simplify__simplify_goal_call__InstY_24);
                        }
#line 703 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 703 "simplify_goal_call.m"
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 703 "simplify_goal_call.m"
                          {
#line 703 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 1)));
#line 703 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 2)));
#line 703 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 3)));
#line 703 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 703 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 703 "simplify_goal_call.m"
                              {
#line 703 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_71_71, (MR_Integer) 0)));
#line 703 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_71_71, (MR_Integer) 1)));
#line 703 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 700 "simplify_goal_call.m"
                                  {
#line 703 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_72_72, (MR_Integer) 0)));
#line 703 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_72_72, (MR_Integer) 1)));
#line 703 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 700 "simplify_goal_call.m"
                                      {
#line 703 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_73_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_73_73, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 703 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 703 "simplify_goal_call.m"
                                          {
#line 703 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__YVal_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_73_73, (MR_Integer) 1)));
#line 704 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_27 == (MR_Integer) 0);
#line 704 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 700 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 700 "simplify_goal_call.m"
                                              {
#line 705 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__Op_94 = (MR_String) "unchecked_quotient";
#line 706 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_76_76 = (MR_Integer) 0;
#line 706 "simplify_goal_call.m"
                                                {
#line 706 "simplify_goal_call.m"
                                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_94, check_hlds__simplify__simplify_goal_call__V_76_76, check_hlds__simplify__simplify_goal_call__V_114_114, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__Z_23, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                }
#line 700 "simplify_goal_call.m"
                                                *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
#line 700 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 700 "simplify_goal_call.m"
                                              }
#line 703 "simplify_goal_call.m"
                                          }
#line 700 "simplify_goal_call.m"
                                      }
#line 700 "simplify_goal_call.m"
                                  }
#line 703 "simplify_goal_call.m"
                              }
#line 703 "simplify_goal_call.m"
                          }
#line 700 "simplify_goal_call.m"
                      }
#line 701 "simplify_goal_call.m"
                  }
#line 700 "simplify_goal_call.m"
              }
#line 683 "simplify_goal_call.m"
            else
#line 683 "simplify_goal_call.m"
            if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "rem_bits_per_int") == 0))
#line 690 "simplify_goal_call.m"
              {
#line 690 "simplify_goal_call.m"
                MR_String check_hlds__simplify__simplify_goal_call__Op_91;

#line 691 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 690 "simplify_goal_call.m"
                  {
#line 694 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Op_91 = (MR_String) "unchecked_rem";
#line 695 "simplify_goal_call.m"
                    {
#line 695 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_91, check_hlds__simplify__simplify_goal_call__V_114_114, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
                    }
#line 695 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 690 "simplify_goal_call.m"
                  }
#line 690 "simplify_goal_call.m"
              }
#line 683 "simplify_goal_call.m"
            else
#line 683 "simplify_goal_call.m"
            if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "quot_bits_per_int") == 0))
#line 676 "simplify_goal_call.m"
              {
#line 676 "simplify_goal_call.m"
                MR_String check_hlds__simplify__simplify_goal_call__Op_22;

#line 677 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 676 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 676 "simplify_goal_call.m"
                  {
#line 680 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Op_22 = (MR_String) "unchecked_quotient";
#line 681 "simplify_goal_call.m"
                    {
#line 681 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_22, check_hlds__simplify__simplify_goal_call__V_114_114, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
                    }
#line 681 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 676 "simplify_goal_call.m"
                  }
#line 676 "simplify_goal_call.m"
              }
#line 683 "simplify_goal_call.m"
            else
#line 683 "simplify_goal_call.m"
            if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_11, (MR_String) "times_bits_per_int") == 0))
#line 684 "simplify_goal_call.m"
              {
#line 684 "simplify_goal_call.m"
                MR_String check_hlds__simplify__simplify_goal_call__Op_88;

#line 685 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 684 "simplify_goal_call.m"
                  {
#line 686 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Op_88 = (MR_String) "*";
#line 687 "simplify_goal_call.m"
                    {
#line 687 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_88, check_hlds__simplify__simplify_goal_call__V_114_114, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
                    }
#line 687 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 684 "simplify_goal_call.m"
                  }
#line 684 "simplify_goal_call.m"
              }
#line 683 "simplify_goal_call.m"
            else
#line 683 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 671 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 671 "simplify_goal_call.m"
              {
#line 671 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34;
#line 671 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 671 "simplify_goal_call.m"
              }
#line 701 "simplify_goal_call.m"
          }
#line 701 "simplify_goal_call.m"
      }
#line 671 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 671 "simplify_goal_call.m"
  }
#line 665 "simplify_goal_call.m"
}

#line 615 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
#line 615 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_9,
#line 615 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10,
#line 615 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32,
#line 615 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33,
#line 615 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 615 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35)
#line 615 "simplify_goal_call.m"
{
#line 620 "simplify_goal_call.m"
  {
#line 620 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_86_86;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_13;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_14;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Y_15;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__X_16;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Res_17;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_19;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Type_20;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Context_21;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CondEq_22;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CondLt_23;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Builtin_24;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtor_25;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnEq_26;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnLt_27;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnGt_28;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__NonLocals_29;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__RestExpr_30;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Rest_31;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_38_38;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_39_39;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_40_40;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_41_41;
#line 620 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_42_42;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_44_44;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_45_45;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_47_47;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_49_49;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_50_50;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_51_51;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;
#line 620 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_53_53;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_54_54;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_55_55;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_63_63;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
#line 620 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_65_65;
#line 620 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_66_66;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_67_67;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
#line 620 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_69_69;
#line 620 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_70_70;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_71_71;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
#line 620 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_73_73;
#line 620 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_74_74;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_76_76;
#line 620 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_77_77;
#line 620 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_78_78;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_79_79;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_84_84;
#line 620 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
#line 630 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_18_18;

#line 627 "simplify_goal_call.m"
    {
#line 627 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__ModuleInfo_13);
    }
#line 628 "simplify_goal_call.m"
    {
#line 628 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_13, &check_hlds__simplify__simplify_goal_call__Globals_14);
    }
#line 629 "simplify_goal_call.m"
    {
#line 629 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__simplify__simplify_goal_call__Globals_14, (MR_Integer) 274, (MR_Integer) 1);
    }
#line 620 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 620 "simplify_goal_call.m"
      {
#line 1592 "check_hlds.simplify.simplify_goal_call.c"
        check_hlds__simplify__simplify_goal_call__TypeInfo_86_86 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
#line 630 "simplify_goal_call.m"
        {
#line 630 "simplify_goal_call.m"
          mercury__list__reverse_2_p_0(check_hlds__simplify__simplify_goal_call__TypeInfo_86_86, check_hlds__simplify__simplify_goal_call__Args_9, &check_hlds__simplify__simplify_goal_call__V_38_38);
        }
#line 630 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 630 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 630 "simplify_goal_call.m"
          {
#line 630 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Y_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, (MR_Integer) 0)));
#line 630 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, (MR_Integer) 1)));
#line 630 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 630 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 630 "simplify_goal_call.m"
              {
#line 630 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, (MR_Integer) 0)));
#line 630 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, (MR_Integer) 1)));
#line 630 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 630 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 630 "simplify_goal_call.m"
                  {
#line 630 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Res_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 0)));
#line 630 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 1)));
#line 631 "simplify_goal_call.m"
                    {
#line 631 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__VarTypes_19);
                    }
#line 632 "simplify_goal_call.m"
                    {
#line 632 "simplify_goal_call.m"
                      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_19, check_hlds__simplify__simplify_goal_call__Y_15, &check_hlds__simplify__simplify_goal_call__Type_20);
                    }
#line 633 "simplify_goal_call.m"
                    {
#line 633 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Type_20);
                    }
#line 620 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 620 "simplify_goal_call.m"
                      {
#line 636 "simplify_goal_call.m"
                        {
#line 636 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32);
                        }
#line 637 "simplify_goal_call.m"
                        {
#line 637 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_41_41 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
#line 638 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_42_42 = (MR_String) "builtin_compound_eq";
#line 638 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_43_43 = (MR_Integer) 0;
#line 638 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_45_45 = (MR_Integer) 1;
#line 639 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_46_46 = (MR_Integer) 0;
#line 639 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "simplify_goal_call.m"
                        {
#line 639 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_50_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_15));
#line 639 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_51_51));
#line 639 "simplify_goal_call.m"
                        }
#line 639 "simplify_goal_call.m"
                        {
#line 639 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_47_47, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_16));
#line 639 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_47_47, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_50_50));
#line 639 "simplify_goal_call.m"
                        }
#line 639 "simplify_goal_call.m"
                        {
#line 639 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_49_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
#line 637 "simplify_goal_call.m"
                        {
#line 637 "simplify_goal_call.m"
                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__V_41_41, check_hlds__simplify__simplify_goal_call__V_42_42, check_hlds__simplify__simplify_goal_call__V_43_43, check_hlds__simplify__simplify_goal_call__V_44_44, check_hlds__simplify__simplify_goal_call__V_45_45, check_hlds__simplify__simplify_goal_call__V_46_46, check_hlds__simplify__simplify_goal_call__V_47_47, check_hlds__simplify__simplify_goal_call__V_48_48, check_hlds__simplify__simplify_goal_call__V_49_49, check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Context_21, &check_hlds__simplify__simplify_goal_call__CondEq_22);
                        }
#line 641 "simplify_goal_call.m"
                        {
#line 641 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_52_52 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
#line 642 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_53_53 = (MR_String) "builtin_compound_lt";
#line 642 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_54_54 = (MR_Integer) 0;
#line 642 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_56_56 = (MR_Integer) 1;
#line 643 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_57_57 = (MR_Integer) 0;
#line 643 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "simplify_goal_call.m"
                        {
#line 643 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_60_60 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
#line 641 "simplify_goal_call.m"
                        {
#line 641 "simplify_goal_call.m"
                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__V_52_52, check_hlds__simplify__simplify_goal_call__V_53_53, check_hlds__simplify__simplify_goal_call__V_54_54, check_hlds__simplify__simplify_goal_call__V_55_55, check_hlds__simplify__simplify_goal_call__V_56_56, check_hlds__simplify__simplify_goal_call__V_57_57, check_hlds__simplify__simplify_goal_call__V_47_47, check_hlds__simplify__simplify_goal_call__V_59_59, check_hlds__simplify__simplify_goal_call__V_60_60, check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Context_21, &check_hlds__simplify__simplify_goal_call__CondLt_23);
                        }
#line 646 "simplify_goal_call.m"
                        {
#line 646 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Builtin_24 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
#line 648 "simplify_goal_call.m"
                        {
#line 648 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_64_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
#line 648 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_65_65 = (MR_String) "comparison_result";
#line 649 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_66_66 = (MR_Integer) 0;
#line 651 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_69_69 = (MR_String) "=";
#line 651 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_70_70 = (MR_Integer) 0;
#line 648 "simplify_goal_call.m"
                        {
#line 648 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_64_64));
#line 648 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_65_65));
#line 648 "simplify_goal_call.m"
                        }
#line 647 "simplify_goal_call.m"
                        {
#line 647 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__TypeCtor_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_63_63));
#line 647 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_66_66));
#line 647 "simplify_goal_call.m"
                        }
#line 651 "simplify_goal_call.m"
                        {
#line 651 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
#line 651 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_69_69));
#line 651 "simplify_goal_call.m"
                        }
#line 651 "simplify_goal_call.m"
                        {
#line 651 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 651 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 651 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_68_68));
#line 651 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_70_70));
#line 651 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
#line 651 "simplify_goal_call.m"
                        }
#line 650 "simplify_goal_call.m"
                        {
#line 650 "simplify_goal_call.m"
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_67_67, &check_hlds__simplify__simplify_goal_call__ReturnEq_26);
                        }
#line 653 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_73_73 = (MR_String) "<";
#line 653 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_74_74 = (MR_Integer) 0;
#line 653 "simplify_goal_call.m"
                        {
#line 653 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_72_72, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
#line 653 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_72_72, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_73_73));
#line 653 "simplify_goal_call.m"
                        }
#line 653 "simplify_goal_call.m"
                        {
#line 653 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 653 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 653 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_72_72));
#line 653 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_74_74));
#line 653 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
#line 653 "simplify_goal_call.m"
                        }
#line 652 "simplify_goal_call.m"
                        {
#line 652 "simplify_goal_call.m"
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_71_71, &check_hlds__simplify__simplify_goal_call__ReturnLt_27);
                        }
#line 655 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_String) ">";
#line 655 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_78_78 = (MR_Integer) 0;
#line 655 "simplify_goal_call.m"
                        {
#line 655 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
#line 655 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
#line 655 "simplify_goal_call.m"
                        }
#line 655 "simplify_goal_call.m"
                        {
#line 655 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 655 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 655 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_76_76));
#line 655 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_78_78));
#line 655 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
#line 655 "simplify_goal_call.m"
                        }
#line 654 "simplify_goal_call.m"
                        {
#line 654 "simplify_goal_call.m"
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_75_75, &check_hlds__simplify__simplify_goal_call__ReturnGt_28);
                        }
#line 1862 "check_hlds.simplify.simplify_goal_call.c"
                        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 657 "simplify_goal_call.m"
                        {
#line 657 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_79_79, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Res_17));
#line 657 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_79_79, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_47_47));
#line 657 "simplify_goal_call.m"
                        }
#line 657 "simplify_goal_call.m"
                        {
#line 657 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__NonLocals_29 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_call__V_79_79);
                        }
#line 658 "simplify_goal_call.m"
                        {
#line 658 "simplify_goal_call.m"
                          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__NonLocals_29, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33);
                        }
#line 660 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 662 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_85_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34;
#line 660 "simplify_goal_call.m"
                        {
#line 660 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__RestExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 660 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 660 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_84_84));
#line 660 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CondLt_23));
#line 660 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnLt_27));
#line 660 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnGt_28));
#line 660 "simplify_goal_call.m"
                        }
#line 661 "simplify_goal_call.m"
                        {
#line 661 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Rest_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Rest_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RestExpr_30));
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Rest_31, 1) = ((MR_Box) (*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33));
#line 661 "simplify_goal_call.m"
                        }
#line 662 "simplify_goal_call.m"
                        {
#line 662 "simplify_goal_call.m"
                          MR_Word base;
#line 662 "simplify_goal_call.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 662 "simplify_goal_call.m"
                          *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10 = base;
#line 662 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 662 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_85_85));
#line 662 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CondEq_22));
#line 662 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnEq_26));
#line 662 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Rest_31));
#line 662 "simplify_goal_call.m"
                        }
#line 662 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 620 "simplify_goal_call.m"
                      }
#line 630 "simplify_goal_call.m"
                  }
#line 630 "simplify_goal_call.m"
              }
#line 630 "simplify_goal_call.m"
          }
#line 620 "simplify_goal_call.m"
      }
#line 620 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 620 "simplify_goal_call.m"
  }
#line 615 "simplify_goal_call.m"
}

#line 505 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(
#line 505 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_12,
#line 505 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__ModuleName_13,
#line 505 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_14,
#line 505 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_16,
#line 505 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 505 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_18,
#line 505 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19,
#line 505 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_9,
#line 505 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26,
#line 505 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27)
#line 505 "simplify_goal_call.m"
{
#line 511 "simplify_goal_call.m"
  {
#line 511 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 511 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33;

#line 511 "simplify_goal_call.m"
    {
#line 511 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__simplify__simplify_goal_call__InstMap0_9, check_hlds__simplify__simplify_goal_call__InstMap0_12);
    }
#line 511 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 511 "simplify_goal_call.m"
      {
#line 538 "simplify_goal_call.m"
        if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_13, (MR_String) "int") == 0))
#line 540 "simplify_goal_call.m"
          {
#line 540 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__PredName_14, check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
          }
#line 538 "simplify_goal_call.m"
        else
#line 538 "simplify_goal_call.m"
        if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_13, (MR_String) "builtin") == 0))
#line 530 "simplify_goal_call.m"
          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, (MR_String) "\100<") == 0))
#line 519 "simplify_goal_call.m"
            {
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__TI_23;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__X_24;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__Y_25;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_32_32;

#line 520 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                {
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__TI_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                    {
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_30_30, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_30_30, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                      if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                        {
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Y_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_31_31, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_31_31, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "simplify_goal_call.m"
                          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                            {
#line 527 "simplify_goal_call.m"
                              {
#line 527 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_23, check_hlds__simplify__simplify_goal_call__X_24, check_hlds__simplify__simplify_goal_call__Y_25, (MR_String) "<", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                              }
#line 529 "simplify_goal_call.m"
                              *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 529 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 519 "simplify_goal_call.m"
                            }
#line 520 "simplify_goal_call.m"
                        }
#line 520 "simplify_goal_call.m"
                    }
#line 520 "simplify_goal_call.m"
                }
#line 519 "simplify_goal_call.m"
            }
#line 530 "simplify_goal_call.m"
          else
#line 530 "simplify_goal_call.m"
          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, (MR_String) "\100>") == 0))
#line 519 "simplify_goal_call.m"
            {
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__TI_45;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__X_46;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__Y_47;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_49_49;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_50_50;

#line 520 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                {
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__TI_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                    {
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__X_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_48_48, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_48_48, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                      if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                        {
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Y_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_49_49, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_49_49, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "simplify_goal_call.m"
                          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                            {
#line 527 "simplify_goal_call.m"
                              {
#line 527 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_45, check_hlds__simplify__simplify_goal_call__X_46, check_hlds__simplify__simplify_goal_call__Y_47, (MR_String) ">", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                              }
#line 529 "simplify_goal_call.m"
                              *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 529 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 519 "simplify_goal_call.m"
                            }
#line 520 "simplify_goal_call.m"
                        }
#line 520 "simplify_goal_call.m"
                    }
#line 520 "simplify_goal_call.m"
                }
#line 519 "simplify_goal_call.m"
            }
#line 530 "simplify_goal_call.m"
          else
#line 530 "simplify_goal_call.m"
          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, (MR_String) "\100=<") == 0))
#line 519 "simplify_goal_call.m"
            {
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__TI_37;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__X_38;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__Y_39;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_40_40;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_41_41;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;

#line 520 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                {
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__TI_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                    {
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__X_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                      if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                        {
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Y_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_41_41, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_41_41, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "simplify_goal_call.m"
                          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                            {
#line 527 "simplify_goal_call.m"
                              {
#line 527 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_37, check_hlds__simplify__simplify_goal_call__X_38, check_hlds__simplify__simplify_goal_call__Y_39, (MR_String) ">", (MR_Integer) 1, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                              }
#line 529 "simplify_goal_call.m"
                              *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 529 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 519 "simplify_goal_call.m"
                            }
#line 520 "simplify_goal_call.m"
                        }
#line 520 "simplify_goal_call.m"
                    }
#line 520 "simplify_goal_call.m"
                }
#line 519 "simplify_goal_call.m"
            }
#line 530 "simplify_goal_call.m"
          else
#line 530 "simplify_goal_call.m"
          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, (MR_String) "\100>=") == 0))
#line 519 "simplify_goal_call.m"
            {
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__TI_53;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__X_54;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__Y_55;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
#line 519 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;

#line 520 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                {
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__TI_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                    {
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__X_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                      if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                        {
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Y_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_57_57, (MR_Integer) 0)));
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_57_57, (MR_Integer) 1)));
#line 520 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "simplify_goal_call.m"
                          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 519 "simplify_goal_call.m"
                            {
#line 527 "simplify_goal_call.m"
                              {
#line 527 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_53, check_hlds__simplify__simplify_goal_call__X_54, check_hlds__simplify__simplify_goal_call__Y_55, (MR_String) "<", (MR_Integer) 1, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                              }
#line 529 "simplify_goal_call.m"
                              *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 529 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 519 "simplify_goal_call.m"
                            }
#line 520 "simplify_goal_call.m"
                        }
#line 520 "simplify_goal_call.m"
                    }
#line 520 "simplify_goal_call.m"
                }
#line 519 "simplify_goal_call.m"
            }
#line 530 "simplify_goal_call.m"
          else
#line 530 "simplify_goal_call.m"
          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, (MR_String) "compare") == 0))
#line 535 "simplify_goal_call.m"
            {
#line 535 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
            }
#line 530 "simplify_goal_call.m"
          else
#line 530 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 538 "simplify_goal_call.m"
        else
#line 538 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 511 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 511 "simplify_goal_call.m"
          {
#line 543 "simplify_goal_call.m"
            {
#line 543 "simplify_goal_call.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27);
            }
#line 543 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 511 "simplify_goal_call.m"
          }
#line 511 "simplify_goal_call.m"
      }
#line 511 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 511 "simplify_goal_call.m"
  }
#line 505 "simplify_goal_call.m"
}

#line 274 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
#line 274 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 274 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 274 "simplify_goal_call.m"
{
#line 274 "simplify_goal_call.m"
  {
#line 274 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 274 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 274 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2;

#line 274 "simplify_goal_call.m"
    {
#line 274 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 274 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2));
#line 274 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 274 "simplify_goal_call.m"
  }
#line 274 "simplify_goal_call.m"
}

#line 266 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
#line 266 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 266 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 266 "simplify_goal_call.m"
{
#line 266 "simplify_goal_call.m"
  {
#line 266 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 266 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 266 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2;

#line 266 "simplify_goal_call.m"
    {
#line 266 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 266 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2));
#line 266 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 266 "simplify_goal_call.m"
  }
#line 266 "simplify_goal_call.m"
}

#line 265 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
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
    MR_Word check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2;

#line 265 "simplify_goal_call.m"
    {
#line 265 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 265 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2));
#line 265 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 265 "simplify_goal_call.m"
  }
#line 265 "simplify_goal_call.m"
}

#line 248 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
#line 248 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 248 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 248 "simplify_goal_call.m"
{
#line 248 "simplify_goal_call.m"
  {
#line 248 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 248 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 248 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2;

#line 248 "simplify_goal_call.m"
    {
#line 248 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 248 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2));
#line 248 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 248 "simplify_goal_call.m"
  }
#line 248 "simplify_goal_call.m"
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
#line 231 "simplify_goal_call.m"
  {
#line 231 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 231 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Attributes_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 231 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 231 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 231 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 231 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ExtraArgs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 231 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__MaybeTraceRuntimeCond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 6)));
#line 231 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Impl_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 7)));
#line 256 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33;
#line 256 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47;
#line 256 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49;
#line 240 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58;
#line 240 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_59_59;
#line 240 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_26;
#line 240 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_27;
#line 240 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleSymName_28;
#line 240 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__ModuleName_29;
#line 240 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__PredName_30;
#line 240 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ArgVars_32;
#line 240 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 247 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ModeNum_31;

#line 240 "simplify_goal_call.m"
    {
#line 240 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44);
    }
#line 240 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 240 "simplify_goal_call.m"
      {
#line 241 "simplify_goal_call.m"
        {
#line 241 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
        }
#line 242 "simplify_goal_call.m"
        {
#line 242 "simplify_goal_call.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, &check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
#line 243 "simplify_goal_call.m"
        {
#line 243 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModuleSymName_28 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
#line 244 "simplify_goal_call.m"
        {
#line 244 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleSymName_28, &check_hlds__simplify__simplify_goal_call__ModuleName_29);
        }
#line 240 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 240 "simplify_goal_call.m"
          {
#line 245 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__ExtraArgs0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 240 "simplify_goal_call.m"
              {
#line 246 "simplify_goal_call.m"
                {
#line 246 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__PredName_30 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
                }
#line 247 "simplify_goal_call.m"
                {
#line 247 "simplify_goal_call.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__ModeNum_31);
                }
#line 2585 "check_hlds.simplify.simplify_goal_call.c"
                check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 2587 "check_hlds.simplify.simplify_goal_call.c"
                check_hlds__simplify__simplify_goal_call__TypeInfo_59_59 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
#line 248 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_46_46 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[1];
#line 248 "simplify_goal_call.m"
                {
#line 248 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__ArgVars_32 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58, check_hlds__simplify__simplify_goal_call__TypeInfo_59_59, check_hlds__simplify__simplify_goal_call__V_46_46, check_hlds__simplify__simplify_goal_call__Args0_22);
                }
#line 249 "simplify_goal_call.m"
                {
#line 249 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__ModuleName_29, check_hlds__simplify__simplify_goal_call__PredName_30, check_hlds__simplify__simplify_goal_call__ArgVars_32, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47, check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49);
                }
#line 240 "simplify_goal_call.m"
              }
#line 240 "simplify_goal_call.m"
          }
#line 240 "simplify_goal_call.m"
      }
#line 256 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 252 "simplify_goal_call.m"
      {
#line 252 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49;
#line 252 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47;
#line 252 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33;
#line 253 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 252 "simplify_goal_call.m"
      }
#line 256 "simplify_goal_call.m"
    else
#line 257 "simplify_goal_call.m"
      {
#line 257 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__BoxPolicy_34;
#line 257 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Args_35;
#line 257 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__ExtraArgs_36;
#line 257 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
#line 286 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38;

#line 257 "simplify_goal_call.m"
        {
#line 257 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__BoxPolicy_34 = parse_tree__prog_data__get_box_policy_1_f_0(check_hlds__simplify__simplify_goal_call__Attributes_19);
        }
#line 263 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__BoxPolicy_34 == (MR_Integer) 1))
#line 264 "simplify_goal_call.m"
          {
#line 264 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 265 "simplify_goal_call.m"
            {
#line 265 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__Args_35 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[2], check_hlds__simplify__simplify_goal_call__Args0_22);
            }
#line 266 "simplify_goal_call.m"
            {
#line 266 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__ExtraArgs_36 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[3], check_hlds__simplify__simplify_goal_call__ExtraArgs0_23);
            }
#line 267 "simplify_goal_call.m"
            {
#line 267 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__GoalExpr1_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 267 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 267 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Attributes_19));
#line 267 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__PredId_20));
#line 267 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ProcId_21));
#line 267 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Args_35));
#line 267 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ExtraArgs_36));
#line 267 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 6) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__MaybeTraceRuntimeCond_24));
#line 267 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 7) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Impl_25));
#line 267 "simplify_goal_call.m"
            }
#line 264 "simplify_goal_call.m"
          }
#line 263 "simplify_goal_call.m"
        else
#line 259 "simplify_goal_call.m"
          {
#line 260 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Args_35 = check_hlds__simplify__simplify_goal_call__Args0_22;
#line 261 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__ExtraArgs_36 = check_hlds__simplify__simplify_goal_call__ExtraArgs0_23;
#line 262 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__GoalExpr1_37 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 259 "simplify_goal_call.m"
          }
#line 271 "simplify_goal_call.m"
        {
#line 271 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38);
        }
#line 271 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 272 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__ExtraArgs_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 274 "simplify_goal_call.m"
          {
#line 274 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Purity_39;
#line 274 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40;
#line 274 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__ArgVars_55;
#line 283 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41;

#line 274 "simplify_goal_call.m"
            {
#line 274 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__ArgVars_55 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0], (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[4], check_hlds__simplify__simplify_goal_call__Args_35);
            }
#line 275 "simplify_goal_call.m"
            {
#line 275 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__Purity_39 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42);
            }
#line 276 "simplify_goal_call.m"
            {
#line 276 "simplify_goal_call.m"
              check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__ArgVars_55, check_hlds__simplify__simplify_goal_call__Purity_39, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, check_hlds__simplify__simplify_goal_call__GoalExpr1_37, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45);
            }
#line 280 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38 == (MR_Integer) 1);
#line 279 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 279 "simplify_goal_call.m"
              {
#line 279 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40)) == (MR_mktag((MR_Integer) 1)));
#line 279 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 279 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40, (MR_Integer) 0)));
#line 279 "simplify_goal_call.m"
              }
#line 283 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 282 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41;
#line 283 "simplify_goal_call.m"
            else
#line 284 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
#line 274 "simplify_goal_call.m"
          }
#line 286 "simplify_goal_call.m"
        else
#line 287 "simplify_goal_call.m"
          {
#line 287 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
#line 288 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 287 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44;
#line 287 "simplify_goal_call.m"
          }
#line 257 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42;
#line 257 "simplify_goal_call.m"
      }
#line 231 "simplify_goal_call.m"
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
#line 193 "simplify_goal_call.m"
  {
#line 193 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 193 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GenericCall_19;
#line 193 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_20;
#line 193 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Modes_21;
#line 193 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Det_23;
#line 198 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_22_22;

#line 192 "simplify_goal_call.m"
    *check_hlds__simplify__simplify_goal_call__GoalInfo_4 = check_hlds__simplify__simplify_goal_call__GoalInfo_13;
#line 198 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__GenericCall_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 198 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 198 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Modes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 198 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 198 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 217 "simplify_goal_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__GenericCall_19)) == (MR_mktag((MR_Integer) 2))))
#line 218 "simplify_goal_call.m"
      {
#line 219 "simplify_goal_call.m"
        {
#line 219 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
        }
#line 220 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 221 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 218 "simplify_goal_call.m"
      }
#line 217 "simplify_goal_call.m"
    else
#line 217 "simplify_goal_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__GenericCall_19)) == (MR_mktag((MR_Integer) 0))))
#line 200 "simplify_goal_call.m"
      {
#line 200 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Closure_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 0)));
#line 200 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Purity_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 1)));
#line 200 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 2)));
#line 200 "simplify_goal_call.m"
        MR_Integer check_hlds__simplify__simplify_goal_call__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 3)));
#line 213 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28;

#line 201 "simplify_goal_call.m"
        {
#line 201 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28);
        }
#line 213 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 204 "simplify_goal_call.m"
          {
#line 204 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29;
#line 210 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30;

#line 202 "simplify_goal_call.m"
            {
#line 202 "simplify_goal_call.m"
              check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(check_hlds__simplify__simplify_goal_call__Closure_24, check_hlds__simplify__simplify_goal_call__Args_20, check_hlds__simplify__simplify_goal_call__Modes_21, check_hlds__simplify__simplify_goal_call__Det_23, check_hlds__simplify__simplify_goal_call__Purity_25, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
            }
#line 207 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28 == (MR_Integer) 1);
#line 206 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 206 "simplify_goal_call.m"
              {
#line 206 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29)) == (MR_mktag((MR_Integer) 1)));
#line 206 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 206 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29, (MR_Integer) 0)));
#line 206 "simplify_goal_call.m"
              }
#line 210 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 209 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30;
#line 210 "simplify_goal_call.m"
            else
#line 211 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 204 "simplify_goal_call.m"
          }
#line 213 "simplify_goal_call.m"
        else
#line 214 "simplify_goal_call.m"
          {
#line 214 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 215 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 214 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37;
#line 214 "simplify_goal_call.m"
          }
#line 200 "simplify_goal_call.m"
      }
#line 217 "simplify_goal_call.m"
    else
#line 225 "simplify_goal_call.m"
      {
#line 226 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 227 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 225 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37;
#line 225 "simplify_goal_call.m"
      }
#line 193 "simplify_goal_call.m"
  }
#line 36 "simplify_goal_call.m"
}

#line 409 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(
#line 409 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 409 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2)
#line 409 "simplify_goal_call.m"
{
#line 409 "simplify_goal_call.m"
  {
#line 409 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 409 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_14_14;

#line 409 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 409 "simplify_goal_call.m"
      {
#line 409 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
#line 409 "simplify_goal_call.m"
        (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_14_14));
#line 409 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 409 "simplify_goal_call.m"
      }
#line 409 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 409 "simplify_goal_call.m"
  }
#line 409 "simplify_goal_call.m"
}

#line 785 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(
#line 785 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
#line 785 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 785 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
#line 785 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
#line 785 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 785 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
#line 785 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14)
#line 785 "simplify_goal_call.m"
{
#line 790 "simplify_goal_call.m"
  {
#line 790 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 790 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__IntModuleSymName_15;
#line 790 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpSymName_16;
#line 790 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_17;
#line 790 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredTable_18;
#line 790 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIds_19;
#line 790 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredId_21;
#line 790 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__OpProcId_23;
#line 790 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpArgs_24;
#line 790 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_35_35;
#line 790 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_36_36;
#line 799 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
#line 797 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;

#line 791 "simplify_goal_call.m"
    {
#line 791 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__IntModuleSymName_15 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_3[3]);
    }
#line 792 "simplify_goal_call.m"
    {
#line 792 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpSymName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_16, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IntModuleSymName_15));
#line 792 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_16, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Op_9));
#line 792 "simplify_goal_call.m"
    }
#line 793 "simplify_goal_call.m"
    {
#line 793 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__Info_8, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
#line 794 "simplify_goal_call.m"
    {
#line 794 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__PredTable_18);
    }
#line 795 "simplify_goal_call.m"
    {
#line 795 "simplify_goal_call.m"
      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(check_hlds__simplify__simplify_goal_call__PredTable_18, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__OpSymName_16, (MR_Integer) 2, &check_hlds__simplify__simplify_goal_call__OpPredIds_19);
    }
#line 797 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__OpPredIds_19)) == (MR_mktag((MR_Integer) 1)));
#line 797 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 797 "simplify_goal_call.m"
      {
#line 797 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 0)));
#line 797 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 1)));
#line 797 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 797 "simplify_goal_call.m"
      }
#line 799 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 798 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpPredId_21 = check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
#line 799 "simplify_goal_call.m"
    else
#line 800 "simplify_goal_call.m"
      {
#line 800 "simplify_goal_call.m"
        MR_String check_hlds__simplify__simplify_goal_call__V_33_33;

#line 800 "simplify_goal_call.m"
        {
#line 800 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find ", check_hlds__simplify__simplify_goal_call__Op_9);
        }
#line 800 "simplify_goal_call.m"
        {
#line 800 "simplify_goal_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_call", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_make_int_binary_op_goal_expr\'/7", check_hlds__simplify__simplify_goal_call__V_33_33);
#line 800 "simplify_goal_call.m"
          return;
        }
#line 800 "simplify_goal_call.m"
      }
#line 803 "simplify_goal_call.m"
    {
#line 803 "simplify_goal_call.m"
      hlds__hlds_pred__proc_id_to_int_2_p_1(&check_hlds__simplify__simplify_goal_call__OpProcId_23, (MR_Integer) 0);
    }
#line 804 "simplify_goal_call.m"
    {
#line 804 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Z_13));
#line 804 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "simplify_goal_call.m"
    }
#line 804 "simplify_goal_call.m"
    {
#line 804 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_35_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_12));
#line 804 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_35_35, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_36_36));
#line 804 "simplify_goal_call.m"
    }
#line 804 "simplify_goal_call.m"
    {
#line 804 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpArgs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_11));
#line 804 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_35_35));
#line 804 "simplify_goal_call.m"
    }
#line 806 "simplify_goal_call.m"
    {
#line 806 "simplify_goal_call.m"
      MR_Word base;
#line 806 "simplify_goal_call.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 806 "simplify_goal_call.m"
      *check_hlds__simplify__simplify_goal_call__GoalExpr_14 = base;
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpPredId_21));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpProcId_23));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpArgs_24));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IsBuiltin_10));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpSymName_16));
#line 806 "simplify_goal_call.m"
    }
#line 790 "simplify_goal_call.m"
  }
#line 785 "simplify_goal_call.m"
}

#line 746 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(
#line 746 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 746 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_10,
#line 746 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__IntConst_11,
#line 746 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 746 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_13,
#line 746 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14,
#line 746 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20,
#line 746 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21)
#line 746 "simplify_goal_call.m"
{
#line 751 "simplify_goal_call.m"
  {
#line 751 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstVar_16;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstGoal_17;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoalExpr_18;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoal_19;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_34;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_35;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_36;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_37;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstConsId_38;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Unification_39;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_40;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Ground_42;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Mode_43;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr_44;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__NonLocals_45;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__InstMapDelta_46;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_47;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 751 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_62_62;

#line 764 "simplify_goal_call.m"
    {
#line 764 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__VarSet0_34);
    }
#line 765 "simplify_goal_call.m"
    {
#line 765 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__VarTypes0_35);
    }
#line 3228 "check_hlds.simplify.simplify_goal_call.c"
    check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 766 "simplify_goal_call.m"
    {
#line 766 "simplify_goal_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66, &check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__VarSet0_34, &check_hlds__simplify__simplify_goal_call__VarSet_36);
    }
#line 767 "simplify_goal_call.m"
    {
#line 767 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_48_48 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 767 "simplify_goal_call.m"
    {
#line 767 "simplify_goal_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__V_48_48, check_hlds__simplify__simplify_goal_call__VarTypes0_35, &check_hlds__simplify__simplify_goal_call__VarTypes_37);
    }
#line 768 "simplify_goal_call.m"
    {
#line 768 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_call__VarSet_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49);
    }
#line 769 "simplify_goal_call.m"
    {
#line 769 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21);
    }
#line 771 "simplify_goal_call.m"
    {
#line 771 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 771 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_38, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IntConst_11));
#line 771 "simplify_goal_call.m"
    }
#line 772 "simplify_goal_call.m"
    {
#line 772 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 772 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_16));
#line 772 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_38));
#line 772 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 772 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 5) = ((MR_Box) ((MR_Integer) 1));
#line 772 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "simplify_goal_call.m"
    }
#line 774 "simplify_goal_call.m"
    {
#line 774 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__RHS_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 774 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_38));
#line 774 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 1) = ((MR_Box) ((MR_Integer) 0));
#line 774 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "simplify_goal_call.m"
    }
#line 777 "simplify_goal_call.m"
    {
#line 777 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Ground_42 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 778 "simplify_goal_call.m"
    {
#line 778 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_60_60, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
#line 778 "simplify_goal_call.m"
    }
#line 778 "simplify_goal_call.m"
    {
#line 778 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_62_62, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_62_62, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
#line 778 "simplify_goal_call.m"
    }
#line 778 "simplify_goal_call.m"
    {
#line 778 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Mode_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Mode_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_60_60));
#line 778 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Mode_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_62_62));
#line 778 "simplify_goal_call.m"
    }
#line 779 "simplify_goal_call.m"
    {
#line 779 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__GoalExpr_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 779 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_16));
#line 779 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_40));
#line 779 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Mode_43));
#line 779 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unification_39));
#line 779 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[24]));
#line 779 "simplify_goal_call.m"
    }
#line 780 "simplify_goal_call.m"
    {
#line 780 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__NonLocals_45 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66, check_hlds__simplify__simplify_goal_call__ConstVar_16);
    }
#line 781 "simplify_goal_call.m"
    {
#line 781 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__InstMapDelta_46 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__simplify__simplify_goal_call__ConstVar_16);
    }
#line 782 "simplify_goal_call.m"
    {
#line 782 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__simplify_goal_call__NonLocals_45, check_hlds__simplify__simplify_goal_call__InstMapDelta_46, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__simplify_goal_call__GoalInfo_47);
    }
#line 783 "simplify_goal_call.m"
    {
#line 783 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstGoal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 783 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstGoal_17, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalExpr_44));
#line 783 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstGoal_17, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalInfo_47));
#line 783 "simplify_goal_call.m"
    }
#line 753 "simplify_goal_call.m"
    {
#line 753 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21, check_hlds__simplify__simplify_goal_call__Op_9, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__X_10, check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__Y_12, &check_hlds__simplify__simplify_goal_call__OpGoalExpr_18);
    }
#line 757 "simplify_goal_call.m"
    {
#line 757 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpGoal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 757 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__OpGoal_19, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoalExpr_18));
#line 757 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__OpGoal_19, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14));
#line 757 "simplify_goal_call.m"
    }
#line 758 "simplify_goal_call.m"
    {
#line 758 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_26_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoal_19));
#line 758 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "simplify_goal_call.m"
    }
#line 758 "simplify_goal_call.m"
    {
#line 758 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_25_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstGoal_17));
#line 758 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_25_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_26_26));
#line 758 "simplify_goal_call.m"
    }
#line 758 "simplify_goal_call.m"
    {
#line 758 "simplify_goal_call.m"
      MR_Word base;
#line 758 "simplify_goal_call.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 758 "simplify_goal_call.m"
      *check_hlds__simplify__simplify_goal_call__GoalExpr_13 = base;
#line 758 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 758 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 758 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_25_25));
#line 758 "simplify_goal_call.m"
    }
#line 751 "simplify_goal_call.m"
  }
#line 746 "simplify_goal_call.m"
}

#line 545 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__TI_11,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_12,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_13,
#line 545 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Inequality_14,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Invert_15,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_16,
#line 545 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_18,
#line 545 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53,
#line 545 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54)
#line 545 "simplify_goal_call.m"
{
#line 551 "simplify_goal_call.m"
  {
#line 551 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_20;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpRes_21;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_22;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_23;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_24;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Context_25;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_26;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__XInst_27;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__YInst_28;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_29;
#line 551 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ModeNo_30;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Unique_31;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ArgInsts_32;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__BuiltinModule_33;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpGoal0_34;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpExpr_35;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpInfo0_36;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpNonLocals_38;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpInfo_39;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpGoal_40;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtor_41;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConsId_42;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Bound_43;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UMode_44;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_45;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UKind_46;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyExpr_48;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyInfo_51;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyGoal_52;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_73_73;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_74_74;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_81_81;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_82_82;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
#line 551 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_86_86;

#line 553 "simplify_goal_call.m"
    {
#line 553 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, &check_hlds__simplify__simplify_goal_call__VarSet0_20);
    }
#line 3560 "check_hlds.simplify.simplify_goal_call.c"
    check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 554 "simplify_goal_call.m"
    {
#line 554 "simplify_goal_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, &check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__VarSet0_20, &check_hlds__simplify__simplify_goal_call__VarSet_22);
    }
#line 555 "simplify_goal_call.m"
    {
#line 555 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_call__VarSet_22, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55);
    }
#line 558 "simplify_goal_call.m"
    {
#line 558 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_goal_call__VarTypes0_23);
    }
#line 559 "simplify_goal_call.m"
    {
#line 559 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_56_56 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
#line 559 "simplify_goal_call.m"
    {
#line 559 "simplify_goal_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__V_56_56, check_hlds__simplify__simplify_goal_call__VarTypes0_23, &check_hlds__simplify__simplify_goal_call__VarTypes_24);
    }
#line 560 "simplify_goal_call.m"
    {
#line 560 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_24, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);
    }
#line 563 "simplify_goal_call.m"
    {
#line 563 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_16);
    }
#line 564 "simplify_goal_call.m"
    {
#line 564 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_60_60, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_13));
#line 564 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "simplify_goal_call.m"
    }
#line 564 "simplify_goal_call.m"
    {
#line 564 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_12));
#line 564 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_59_59, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_60_60));
#line 564 "simplify_goal_call.m"
    }
#line 564 "simplify_goal_call.m"
    {
#line 564 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_58_58, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 564 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_58_58, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_59_59));
#line 564 "simplify_goal_call.m"
    }
#line 564 "simplify_goal_call.m"
    {
#line 564 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Args_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TI_11));
#line 564 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_58_58));
#line 564 "simplify_goal_call.m"
    }
#line 566 "simplify_goal_call.m"
    {
#line 566 "simplify_goal_call.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_18, check_hlds__simplify__simplify_goal_call__X_12, &check_hlds__simplify__simplify_goal_call__XInst_27);
    }
#line 567 "simplify_goal_call.m"
    {
#line 567 "simplify_goal_call.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_18, check_hlds__simplify__simplify_goal_call__Y_13, &check_hlds__simplify__simplify_goal_call__YInst_28);
    }
#line 568 "simplify_goal_call.m"
    {
#line 568 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54, &check_hlds__simplify__simplify_goal_call__ModuleInfo_29);
    }
#line 570 "simplify_goal_call.m"
    {
#line 570 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__XInst_27);
    }
#line 569 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 571 "simplify_goal_call.m"
      {
#line 571 "simplify_goal_call.m"
        {
#line 571 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__YInst_28);
        }
#line 571 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 571 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 1;
#line 571 "simplify_goal_call.m"
        else
#line 571 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 2;
#line 571 "simplify_goal_call.m"
      }
#line 569 "simplify_goal_call.m"
    else
#line 573 "simplify_goal_call.m"
      {
#line 573 "simplify_goal_call.m"
        {
#line 573 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__YInst_28);
        }
#line 573 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 573 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 3;
#line 573 "simplify_goal_call.m"
        else
#line 573 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 0;
#line 573 "simplify_goal_call.m"
      }
#line 576 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Unique_31 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0]);
#line 577 "simplify_goal_call.m"
    {
#line 577 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 577 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_31));
#line 577 "simplify_goal_call.m"
    }
#line 577 "simplify_goal_call.m"
    {
#line 577 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ArgInsts_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_64_64));
#line 577 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 577 "simplify_goal_call.m"
    }
#line 578 "simplify_goal_call.m"
    {
#line 578 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__BuiltinModule_33 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 580 "simplify_goal_call.m"
    {
#line 580 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 580 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ModeNo_30));
#line 580 "simplify_goal_call.m"
    }
#line 581 "simplify_goal_call.m"
    {
#line 581 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_72_72 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__simplify_goal_call__ArgInsts_32);
    }
#line 579 "simplify_goal_call.m"
    {
#line 579 "simplify_goal_call.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__BuiltinModule_33, (MR_String) "compare", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__V_68_68, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__Args_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_call__V_72_72, check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__Context_25, &check_hlds__simplify__simplify_goal_call__CmpGoal0_34);
    }
#line 583 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__CmpExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal0_34, (MR_Integer) 0)));
#line 583 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__CmpInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal0_34, (MR_Integer) 1)));
#line 584 "simplify_goal_call.m"
    {
#line 584 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__CmpInfo0_36);
    }
#line 585 "simplify_goal_call.m"
    {
#line 585 "simplify_goal_call.m"
      parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37, &check_hlds__simplify__simplify_goal_call__CmpNonLocals_38);
    }
#line 586 "simplify_goal_call.m"
    {
#line 586 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__CmpNonLocals_38, check_hlds__simplify__simplify_goal_call__CmpInfo0_36, &check_hlds__simplify__simplify_goal_call__CmpInfo_39);
    }
#line 587 "simplify_goal_call.m"
    {
#line 587 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__CmpGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal_40, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpExpr_35));
#line 587 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal_40, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpInfo_39));
#line 587 "simplify_goal_call.m"
    }
#line 591 "simplify_goal_call.m"
    {
#line 591 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_74_74 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 591 "simplify_goal_call.m"
    {
#line 591 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_74_74));
#line 591 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 591 "simplify_goal_call.m"
    }
#line 590 "simplify_goal_call.m"
    {
#line 590 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__TypeCtor_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_41, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_73_73));
#line 590 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 590 "simplify_goal_call.m"
    }
#line 592 "simplify_goal_call.m"
    {
#line 592 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__BuiltinModule_33));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Inequality_14));
#line 592 "simplify_goal_call.m"
    }
#line 592 "simplify_goal_call.m"
    {
#line 592 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 2) = ((MR_Box) ((MR_Integer) 0));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_41));
#line 592 "simplify_goal_call.m"
    }
#line 594 "simplify_goal_call.m"
    {
#line 594 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_82_82, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "simplify_goal_call.m"
    }
#line 594 "simplify_goal_call.m"
    {
#line 594 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_81_81, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_82_82));
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "simplify_goal_call.m"
    }
#line 593 "simplify_goal_call.m"
    {
#line 593 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Bound_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 1) = ((MR_Box) ((MR_Integer) 0));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_81_81));
#line 593 "simplify_goal_call.m"
    }
#line 595 "simplify_goal_call.m"
    {
#line 595 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_85_85, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_31));
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_85_85, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
#line 595 "simplify_goal_call.m"
    }
#line 595 "simplify_goal_call.m"
    {
#line 595 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_86_86, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_86_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
#line 595 "simplify_goal_call.m"
    }
#line 595 "simplify_goal_call.m"
    {
#line 595 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UMode_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UMode_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_85_85));
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UMode_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_86_86));
#line 595 "simplify_goal_call.m"
    }
#line 596 "simplify_goal_call.m"
    {
#line 596 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__RHS_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 1) = ((MR_Box) ((MR_Integer) 0));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "simplify_goal_call.m"
    }
#line 597 "simplify_goal_call.m"
    {
#line 597 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UKind_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 597 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 597 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
#line 597 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 4) = ((MR_Box) ((MR_Integer) 0));
#line 597 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 5) = ((MR_Box) ((MR_Integer) 1));
#line 597 "simplify_goal_call.m"
    }
#line 600 "simplify_goal_call.m"
    {
#line 600 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UnifyExpr_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 600 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 600 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_45));
#line 600 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UMode_44));
#line 600 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UKind_46));
#line 600 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[23]));
#line 600 "simplify_goal_call.m"
    }
#line 601 "simplify_goal_call.m"
    {
#line 601 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_16);
    }
#line 602 "simplify_goal_call.m"
    {
#line 602 "simplify_goal_call.m"
      parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49, &check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50);
    }
#line 603 "simplify_goal_call.m"
    {
#line 603 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50, check_hlds__simplify__simplify_goal_call__GoalInfo_16, &check_hlds__simplify__simplify_goal_call__UnifyInfo_51);
    }
#line 604 "simplify_goal_call.m"
    {
#line 604 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UnifyGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 604 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyGoal_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyExpr_48));
#line 604 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyGoal_52, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyInfo_51));
#line 604 "simplify_goal_call.m"
    }
#line 609 "simplify_goal_call.m"
    if ((check_hlds__simplify__simplify_goal_call__Invert_15 == (MR_Integer) 0))
#line 607 "simplify_goal_call.m"
      {
#line 607 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_104_104;
#line 607 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_105_105;

#line 608 "simplify_goal_call.m"
        {
#line 608 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyGoal_52));
#line 608 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "simplify_goal_call.m"
        }
#line 608 "simplify_goal_call.m"
        {
#line 608 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_104_104, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_40));
#line 608 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_104_104, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_105_105));
#line 608 "simplify_goal_call.m"
        }
#line 608 "simplify_goal_call.m"
        {
#line 608 "simplify_goal_call.m"
          MR_Word base;
#line 608 "simplify_goal_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 608 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17 = base;
#line 608 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 608 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 608 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_104_104));
#line 608 "simplify_goal_call.m"
        }
#line 607 "simplify_goal_call.m"
      }
#line 609 "simplify_goal_call.m"
    else
#line 610 "simplify_goal_call.m"
      {
#line 610 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_98_98;
#line 610 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_99_99;
#line 610 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_100_100;
#line 610 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_goal_call__UnifyGoal_52);

#line 612 "simplify_goal_call.m"
        {
#line 612 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_100_100, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_101_101));
#line 612 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_100_100, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyInfo_51));
#line 612 "simplify_goal_call.m"
        }
#line 612 "simplify_goal_call.m"
        {
#line 612 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_99_99, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_100_100));
#line 612 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "simplify_goal_call.m"
        }
#line 612 "simplify_goal_call.m"
        {
#line 612 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_98_98, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_40));
#line 612 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_98_98, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_99_99));
#line 612 "simplify_goal_call.m"
        }
#line 611 "simplify_goal_call.m"
        {
#line 611 "simplify_goal_call.m"
          MR_Word base;
#line 611 "simplify_goal_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 611 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17 = base;
#line 611 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 611 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 611 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_98_98));
#line 611 "simplify_goal_call.m"
        }
#line 610 "simplify_goal_call.m"
      }
#line 551 "simplify_goal_call.m"
  }
#line 545 "simplify_goal_call.m"
}

#line 449 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
#line 449 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 449 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
#line 449 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
#line 449 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
#line 449 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5)
#line 449 "simplify_goal_call.m"
{
#line 452 "simplify_goal_call.m"
  while (MR_TRUE)
#line 452 "simplify_goal_call.m"
    {
#line 452 "simplify_goal_call.m"
      /* tailcall optimized into a loop */
#line 452 "simplify_goal_call.m"
      {
#line 452 "simplify_goal_call.m"
        MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 452 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "simplify_goal_call.m"
        else
#line 454 "simplify_goal_call.m"
          {
#line 454 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)));
#line 454 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 1)));
#line 454 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__HeadVar_11;
#line 454 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_12;
#line 454 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Mode_13;
#line 454 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Modes_14;

#line 453 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 453 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 453 "simplify_goal_call.m"
              {
#line 453 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__HeadVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
#line 453 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 1)));
#line 453 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 453 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 453 "simplify_goal_call.m"
                  {
#line 453 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__3_3, (MR_Integer) 0)));
#line 453 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__3_3, (MR_Integer) 1)));
#line 455 "simplify_goal_call.m"
                    {
#line 455 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_5, check_hlds__simplify__simplify_goal_call__Mode_13);
                    }
#line 457 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 456 "simplify_goal_call.m"
                      {
#line 456 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(check_hlds__simplify__simplify_goal_call__Arg_9, check_hlds__simplify__simplify_goal_call__HeadVar_11, check_hlds__simplify__simplify_goal_call__CommonInfo_4);
                      }
#line 457 "simplify_goal_call.m"
                    else
#line 458 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 454 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 460 "simplify_goal_call.m"
                      {
#line 460 "simplify_goal_call.m"
                        /* direct tailcall eliminated */
#line 460 "simplify_goal_call.m"
                        {
#line 460 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1__tmp_copy_1 = check_hlds__simplify__simplify_goal_call__Args_10;
#line 460 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_call__HeadVars_12;
#line 460 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3__tmp_copy_3 = check_hlds__simplify__simplify_goal_call__Modes_14;

#line 460 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__3_3 = check_hlds__simplify__simplify_goal_call__HeadVar__3__tmp_copy_3;
#line 460 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__HeadVar__2__tmp_copy_2;
#line 460 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__1_1 = check_hlds__simplify__simplify_goal_call__HeadVar__1__tmp_copy_1;
#line 460 "simplify_goal_call.m"
                        }
#line 460 "simplify_goal_call.m"
                        continue;
#line 460 "simplify_goal_call.m"
                      }
#line 453 "simplify_goal_call.m"
                  }
#line 453 "simplify_goal_call.m"
              }
#line 454 "simplify_goal_call.m"
          }
#line 452 "simplify_goal_call.m"
        return check_hlds__simplify__simplify_goal_call__succeeded;
#line 452 "simplify_goal_call.m"
      }
#line 452 "simplify_goal_call.m"
      break;
#line 452 "simplify_goal_call.m"
    }
#line 449 "simplify_goal_call.m"
}

#line 398 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(
#line 398 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 398 "simplify_goal_call.m"
{
#line 398 "simplify_goal_call.m"
  {
#line 398 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 398 "simplify_goal_call.m"
    MR_builtin_longjmp((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0, 1);
#line 398 "simplify_goal_call.m"
  }
#line 398 "simplify_goal_call.m"
}

#line 400 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3(
#line 400 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 400 "simplify_goal_call.m"
{
#line 400 "simplify_goal_call.m"
  {
#line 400 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 400 "simplify_goal_call.m"
    (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25 = ((MR_Word) (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25);
#line 400 "simplify_goal_call.m"
    {
#line 400 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(check_hlds__simplify__simplify_goal_call__env_ptr);
#line 400 "simplify_goal_call.m"
      return;
    }
#line 400 "simplify_goal_call.m"
  }
#line 400 "simplify_goal_call.m"
}

#line 398 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(
#line 398 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 398 "simplify_goal_call.m"
{
#line 398 "simplify_goal_call.m"
  {
#line 398 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 401 "simplify_goal_call.m"
    {
#line 401 "simplify_goal_call.m"
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25);
    }
#line 398 "simplify_goal_call.m"
    if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 398 "simplify_goal_call.m"
      {
#line 404 "simplify_goal_call.m"
        {
#line 404 "simplify_goal_call.m"
          (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25);
        }
#line 403 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 403 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 403 "simplify_goal_call.m"
          {
#line 403 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(check_hlds__simplify__simplify_goal_call__env_ptr);
#line 403 "simplify_goal_call.m"
            return;
          }
#line 398 "simplify_goal_call.m"
      }
#line 398 "simplify_goal_call.m"
  }
#line 398 "simplify_goal_call.m"
}

#line 398 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(
#line 398 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 398 "simplify_goal_call.m"
{
#line 398 "simplify_goal_call.m"
  {
#line 398 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 398 "simplify_goal_call.m"
    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0) == 0)
#line 398 "simplify_goal_call.m"
      {
#line 398 "simplify_goal_call.m"
        {
#line 400 "simplify_goal_call.m"
          {
#line 400 "simplify_goal_call.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24, check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3, check_hlds__simplify__simplify_goal_call__env_ptr);
          }
#line 398 "simplify_goal_call.m"
        }
#line 398 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = MR_FALSE;
#line 398 "simplify_goal_call.m"
      }
#line 398 "simplify_goal_call.m"
    else
#line 398 "simplify_goal_call.m"
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 398 "simplify_goal_call.m"
  }
#line 398 "simplify_goal_call.m"
}

#line 352 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_12,
#line 352 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_13,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_14,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_15,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_16,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_17,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_18,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_19,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common_20,
#line 352 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 352 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35)
#line 352 "simplify_goal_call.m"
{
#line 352 "simplify_goal_call.m"
  {
#line 352 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s check_hlds__simplify__simplify_goal_call__env;

#line 438 "simplify_goal_call.m"
    {
#line 363 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_23;
#line 363 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__Purity_27;
#line 363 "simplify_goal_call.m"
      MR_Integer check_hlds__simplify__simplify_goal_call__V_36_36;
#line 363 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_83_83;
#line 363 "simplify_goal_call.m"
      MR_Integer check_hlds__simplify__simplify_goal_call__V_84_84;
#line 377 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_80_80;
#line 377 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_81_81;
#line 409 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_37_37;
#line 409 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
#line 409 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;

#line 363 "simplify_goal_call.m"
      {
#line 363 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34);
      }
#line 363 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 363 "simplify_goal_call.m"
        {
#line 367 "simplify_goal_call.m"
          {
#line 367 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__V_83_83, &check_hlds__simplify__simplify_goal_call__V_84_84);
          }
#line 367 "simplify_goal_call.m"
          {
#line 367 "simplify_goal_call.m"
            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_12, check_hlds__simplify__simplify_goal_call__V_83_83);
          }
#line 363 "simplify_goal_call.m"
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 363 "simplify_goal_call.m"
            {
#line 367 "simplify_goal_call.m"
              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__ProcId_13 == check_hlds__simplify__simplify_goal_call__V_84_84);
#line 363 "simplify_goal_call.m"
              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 363 "simplify_goal_call.m"
                {
#line 373 "simplify_goal_call.m"
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__IsBuiltin_15 == (MR_Integer) 0);
#line 373 "simplify_goal_call.m"
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 363 "simplify_goal_call.m"
                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 363 "simplify_goal_call.m"
                    {
#line 377 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 0)));
#line 377 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 1)));
#line 377 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 2)));
#line 377 "simplify_goal_call.m"
                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__V_36_36 == (MR_Integer) 0);
#line 363 "simplify_goal_call.m"
                      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 363 "simplify_goal_call.m"
                        {
#line 380 "simplify_goal_call.m"
                          {
#line 380 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22);
                          }
#line 381 "simplify_goal_call.m"
                          {
#line 381 "simplify_goal_call.m"
                            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &check_hlds__simplify__simplify_goal_call__HeadVars_23);
                          }
#line 382 "simplify_goal_call.m"
                          {
#line 382 "simplify_goal_call.m"
                            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24);
                          }
#line 383 "simplify_goal_call.m"
                          {
#line 383 "simplify_goal_call.m"
                            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(check_hlds__simplify__simplify_goal_call__Args_14, check_hlds__simplify__simplify_goal_call__HeadVars_23, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24, check_hlds__simplify__simplify_goal_call__Common_20, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22);
                          }
#line 363 "simplify_goal_call.m"
                          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 363 "simplify_goal_call.m"
                            {
#line 398 "simplify_goal_call.m"
                              {
#line 398 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(&check_hlds__simplify__simplify_goal_call__env);
                              }
#line 398 "simplify_goal_call.m"
                              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 363 "simplify_goal_call.m"
                              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 363 "simplify_goal_call.m"
                                {
#line 409 "simplify_goal_call.m"
                                  {
#line 409 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__V_37_37, 0) = NULL;
#line 409 "simplify_goal_call.m"
                                  }
#line 409 "simplify_goal_call.m"
                                  {
#line 409 "simplify_goal_call.m"
                                    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &check_hlds__simplify__simplify_goal_call__V_85_85);
                                  }
#line 409 "simplify_goal_call.m"
                                  {
#line 409 "simplify_goal_call.m"
                                    (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(check_hlds__simplify__simplify_goal_call__V_37_37, check_hlds__simplify__simplify_goal_call__V_85_85);
                                  }
#line 409 "simplify_goal_call.m"
                                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 363 "simplify_goal_call.m"
                                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 363 "simplify_goal_call.m"
                                    {
#line 413 "simplify_goal_call.m"
                                      {
#line 413 "simplify_goal_call.m"
                                        hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_16, &check_hlds__simplify__simplify_goal_call__Purity_27);
                                      }
#line 414 "simplify_goal_call.m"
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__Purity_27 == (MR_Integer) 2);
#line 414 "simplify_goal_call.m"
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 363 "simplify_goal_call.m"
                                    }
#line 363 "simplify_goal_call.m"
                                }
#line 363 "simplify_goal_call.m"
                            }
#line 363 "simplify_goal_call.m"
                        }
#line 363 "simplify_goal_call.m"
                    }
#line 363 "simplify_goal_call.m"
                }
#line 363 "simplify_goal_call.m"
            }
#line 363 "simplify_goal_call.m"
        }
#line 438 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 416 "simplify_goal_call.m"
        {
#line 416 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_28;
#line 416 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Msg_31;
#line 416 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Spec_33;
#line 416 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;

#line 416 "simplify_goal_call.m"
          {
#line 416 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__GoalContext_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_18);
          }
#line 429 "simplify_goal_call.m"
          {
#line 429 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Msg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_28));
#line 429 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
#line 429 "simplify_goal_call.m"
          }
#line 436 "simplify_goal_call.m"
          {
#line 436 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_31));
#line 436 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "simplify_goal_call.m"
          }
#line 435 "simplify_goal_call.m"
          {
#line 435 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
#line 435 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_3[0])));
#line 435 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
#line 435 "simplify_goal_call.m"
          }
#line 437 "simplify_goal_call.m"
          {
#line 437 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_call__Spec_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);
#line 437 "simplify_goal_call.m"
            return;
          }
#line 416 "simplify_goal_call.m"
        }
#line 438 "simplify_goal_call.m"
      else
#line 438 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34;
#line 438 "simplify_goal_call.m"
    }
#line 352 "simplify_goal_call.m"
  }
#line 352 "simplify_goal_call.m"
}

#line 304 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
#line 304 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6,
#line 304 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7,
#line 304 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_8,
#line 304 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22,
#line 304 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23)
#line 304 "simplify_goal_call.m"
{
#line 309 "simplify_goal_call.m"
  {
#line 309 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 309 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_10;
#line 312 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Markers_11;
#line 312 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredId_12;
#line 312 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredInfo_14;
#line 312 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15;
#line 312 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_24_24;
#line 319 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_13_13;
#line 327 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;

#line 310 "simplify_goal_call.m"
    {
#line 310 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, &check_hlds__simplify__simplify_goal_call__ModuleInfo_10);
    }
#line 312 "simplify_goal_call.m"
    {
#line 312 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22);
    }
#line 312 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 312 "simplify_goal_call.m"
      {
#line 313 "simplify_goal_call.m"
        {
#line 313 "simplify_goal_call.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_7, &check_hlds__simplify__simplify_goal_call__Markers_11);
        }
#line 314 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_24_24 = (MR_Integer) 4;
#line 314 "simplify_goal_call.m"
        {
#line 314 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__Markers_11, check_hlds__simplify__simplify_goal_call__V_24_24);
        }
#line 312 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 312 "simplify_goal_call.m"
          {
#line 319 "simplify_goal_call.m"
            {
#line 319 "simplify_goal_call.m"
              check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, &check_hlds__simplify__simplify_goal_call__ThisPredId_12, &check_hlds__simplify__simplify_goal_call__V_13_13);
            }
#line 320 "simplify_goal_call.m"
            {
#line 320 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_6, check_hlds__simplify__simplify_goal_call__ThisPredId_12);
            }
#line 320 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 312 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 312 "simplify_goal_call.m"
              {
#line 325 "simplify_goal_call.m"
                {
#line 325 "simplify_goal_call.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_10, check_hlds__simplify__simplify_goal_call__ThisPredId_12, &check_hlds__simplify__simplify_goal_call__ThisPredInfo_14);
                }
#line 326 "simplify_goal_call.m"
                {
#line 326 "simplify_goal_call.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredInfo_14, &check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15);
                }
#line 327 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_25_25 = (MR_Integer) 4;
#line 327 "simplify_goal_call.m"
                {
#line 327 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15, check_hlds__simplify__simplify_goal_call__V_25_25);
                }
#line 327 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 312 "simplify_goal_call.m"
              }
#line 312 "simplify_goal_call.m"
          }
#line 312 "simplify_goal_call.m"
      }
#line 343 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 331 "simplify_goal_call.m"
      {
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_16;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__PredPieces_17;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Pieces_18;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Msg_19;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Spec_21;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_38_38;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_39_39;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
#line 331 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;

#line 331 "simplify_goal_call.m"
        {
#line 331 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__GoalContext_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_8);
        }
#line 332 "simplify_goal_call.m"
        {
#line 332 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__PredPieces_17 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_10, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__PredId_6);
        }
#line 4724 "check_hlds.simplify.simplify_goal_call.c"
        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 335 "simplify_goal_call.m"
        {
#line 335 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_31_31 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55, check_hlds__simplify__simplify_goal_call__PredPieces_17, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3]));
        }
#line 334 "simplify_goal_call.m"
        {
#line 334 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__Pieces_18 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]), check_hlds__simplify__simplify_goal_call__V_31_31);
        }
#line 337 "simplify_goal_call.m"
        {
#line 337 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 337 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Pieces_18));
#line 337 "simplify_goal_call.m"
        }
#line 337 "simplify_goal_call.m"
        {
#line 337 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_43_43));
#line 337 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "simplify_goal_call.m"
        }
#line 337 "simplify_goal_call.m"
        {
#line 337 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 337 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_42_42));
#line 337 "simplify_goal_call.m"
        }
#line 337 "simplify_goal_call.m"
        {
#line 337 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_39_39));
#line 337 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "simplify_goal_call.m"
        }
#line 336 "simplify_goal_call.m"
        {
#line 336 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_19, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_16));
#line 336 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_19, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_38_38));
#line 336 "simplify_goal_call.m"
        }
#line 341 "simplify_goal_call.m"
        {
#line 341 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_19));
#line 341 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 341 "simplify_goal_call.m"
        }
#line 340 "simplify_goal_call.m"
        {
#line 340 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 340 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
#line 340 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_3[0])));
#line 340 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_52_52));
#line 340 "simplify_goal_call.m"
        }
#line 342 "simplify_goal_call.m"
        {
#line 342 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_call__Spec_21, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23);
#line 342 "simplify_goal_call.m"
          return;
        }
#line 331 "simplify_goal_call.m"
      }
#line 343 "simplify_goal_call.m"
    else
#line 343 "simplify_goal_call.m"
      *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22;
#line 309 "simplify_goal_call.m"
  }
#line 304 "simplify_goal_call.m"
}

#line 292 "simplify_goal_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(
#line 292 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Arg_3)
#line 292 "simplify_goal_call.m"
{
#line 294 "simplify_goal_call.m"
  {
#line 294 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 294 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2;
#line 294 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 0)));
#line 294 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 1)));
#line 294 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 2)));
#line 294 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 3)));

#line 294 "simplify_goal_call.m"
    {
#line 294 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 294 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_5_5));
#line 294 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_6_6));
#line 294 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_7_7));
#line 294 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 1));
#line 294 "simplify_goal_call.m"
    }
#line 294 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__HeadVar__2_2;
#line 294 "simplify_goal_call.m"
  }
#line 292 "simplify_goal_call.m"
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
#line 231 "simplify_goal_call.m"
  {
#line 231 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 231 "simplify_goal_call.m"
    {
#line 231 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43, check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45);
#line 231 "simplify_goal_call.m"
      return;
    }
#line 231 "simplify_goal_call.m"
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
#line 193 "simplify_goal_call.m"
  {
#line 193 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 193 "simplify_goal_call.m"
    {
#line 193 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalInfo_4, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
#line 193 "simplify_goal_call.m"
      return;
    }
#line 193 "simplify_goal_call.m"
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
#line 94 "simplify_goal_call.m"
  {
#line 94 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 0)));
#line 94 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_26;
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_27;
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_28;
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleSymName_29;
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_30;
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42;
#line 94 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 174 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__ModuleName_31;

#line 96 "simplify_goal_call.m"
    {
#line 96 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_40, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
    }
#line 97 "simplify_goal_call.m"
    {
#line 97 "simplify_goal_call.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__PredInfo_27, &check_hlds__simplify__simplify_goal_call__ProcInfo_28);
    }
#line 99 "simplify_goal_call.m"
    {
#line 99 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_40, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42);
    }
#line 101 "simplify_goal_call.m"
    {
#line 101 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__IsBuiltin_23, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__ProcInfo_28, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__NestedContext_15, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43);
    }
#line 106 "simplify_goal_call.m"
    {
#line 106 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ModuleSymName_29 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
    }
#line 107 "simplify_goal_call.m"
    {
#line 107 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, &check_hlds__simplify__simplify_goal_call__Globals_30);
    }
#line 108 "simplify_goal_call.m"
    {
#line 108 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleSymName_29, &check_hlds__simplify__simplify_goal_call__ModuleName_31);
    }
#line 174 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 132 "simplify_goal_call.m"
      {
#line 132 "simplify_goal_call.m"
        MR_String check_hlds__simplify__simplify_goal_call__PredName_32;
#line 132 "simplify_goal_call.m"
        MR_Integer check_hlds__simplify__simplify_goal_call__ModeNum_33;
#line 132 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_34;
#line 146 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35;
#line 146 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36;

#line 132 "simplify_goal_call.m"
        {
#line 132 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__PredName_32 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
#line 133 "simplify_goal_call.m"
        {
#line 133 "simplify_goal_call.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__ModeNum_33);
        }
#line 134 "simplify_goal_call.m"
        {
#line 134 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__VarTypes_34);
        }
#line 137 "simplify_goal_call.m"
        {
#line 137 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43);
        }
#line 137 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 138 "simplify_goal_call.m"
          {
#line 138 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(check_hlds__simplify__simplify_goal_call__Globals_30, check_hlds__simplify__simplify_goal_call__VarTypes_34, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__ModeNum_33, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36);
          }
#line 146 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 142 "simplify_goal_call.m"
          {
#line 142 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35;
#line 143 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36;
#line 144 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
#line 145 "simplify_goal_call.m"
            {
#line 145 "simplify_goal_call.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41);
#line 145 "simplify_goal_call.m"
              return;
            }
#line 142 "simplify_goal_call.m"
          }
#line 146 "simplify_goal_call.m"
        else
#line 5107 "check_hlds.simplify.simplify_goal_call.c"
          {
#line 5109 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_62;

#line 474 "simplify_goal_call.m"
            {
#line 474 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_62);
            }
#line 5117 "check_hlds.simplify.simplify_goal_call.c"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5119 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 5121 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
#line 5123 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call__Purity_63;
#line 5125 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64;
#line 5127 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65;

#line 475 "simplify_goal_call.m"
                {
#line 475 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__Purity_63 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo0_13);
                }
#line 479 "simplify_goal_call.m"
                {
#line 479 "simplify_goal_call.m"
                  check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__Purity_63, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45);
                }
#line 482 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64)) == (MR_mktag((MR_Integer) 1)));
#line 482 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 482 "simplify_goal_call.m"
                  {
#line 482 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64, (MR_Integer) 0)));
#line 483 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_62 == (MR_Integer) 1);
#line 482 "simplify_goal_call.m"
                  }
#line 5152 "check_hlds.simplify.simplify_goal_call.c"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5154 "check_hlds.simplify.simplify_goal_call.c"
                  {
#line 151 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65;
#line 152 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 151 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
#line 5162 "check_hlds.simplify.simplify_goal_call.c"
                  }
#line 5164 "check_hlds.simplify.simplify_goal_call.c"
                else
#line 168 "simplify_goal_call.m"
                  {
#line 168 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38;
#line 168 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39;
#line 168 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47;

#line 160 "simplify_goal_call.m"
                    {
#line 160 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47);
                    }
#line 168 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 166 "simplify_goal_call.m"
                      {
#line 166 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47;
#line 166 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38;
#line 167 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39;
#line 166 "simplify_goal_call.m"
                      }
#line 168 "simplify_goal_call.m"
                    else
#line 169 "simplify_goal_call.m"
                      {
#line 169 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 170 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 169 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
#line 169 "simplify_goal_call.m"
                      }
#line 168 "simplify_goal_call.m"
                  }
#line 5206 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5208 "check_hlds.simplify.simplify_goal_call.c"
            else
#line 5210 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 168 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84;
#line 168 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85;
#line 168 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86;

#line 490 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
#line 160 "simplify_goal_call.m"
                {
#line 160 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86);
                }
#line 168 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 166 "simplify_goal_call.m"
                  {
#line 166 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86;
#line 166 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84;
#line 167 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85;
#line 166 "simplify_goal_call.m"
                  }
#line 168 "simplify_goal_call.m"
                else
#line 169 "simplify_goal_call.m"
                  {
#line 169 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 170 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 169 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
#line 169 "simplify_goal_call.m"
                  }
#line 5250 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5252 "check_hlds.simplify.simplify_goal_call.c"
          }
#line 132 "simplify_goal_call.m"
      }
#line 174 "simplify_goal_call.m"
    else
#line 5258 "check_hlds.simplify.simplify_goal_call.c"
      {
#line 5260 "check_hlds.simplify.simplify_goal_call.c"
        MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_78;

#line 474 "simplify_goal_call.m"
        {
#line 474 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_78);
        }
#line 5268 "check_hlds.simplify.simplify_goal_call.c"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5270 "check_hlds.simplify.simplify_goal_call.c"
          {
#line 5272 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call__Purity_79;
#line 5274 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80;
#line 5276 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81;

#line 475 "simplify_goal_call.m"
            {
#line 475 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__Purity_79 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo0_13);
            }
#line 479 "simplify_goal_call.m"
            {
#line 479 "simplify_goal_call.m"
              check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__Purity_79, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41);
            }
#line 482 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80)) == (MR_mktag((MR_Integer) 1)));
#line 482 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 482 "simplify_goal_call.m"
              {
#line 482 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80, (MR_Integer) 0)));
#line 483 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_78 == (MR_Integer) 1);
#line 482 "simplify_goal_call.m"
              }
#line 5301 "check_hlds.simplify.simplify_goal_call.c"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5303 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 180 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81;
#line 181 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 5309 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5311 "check_hlds.simplify.simplify_goal_call.c"
            else
#line 5313 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 187 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 188 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 5319 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5321 "check_hlds.simplify.simplify_goal_call.c"
          }
#line 5323 "check_hlds.simplify.simplify_goal_call.c"
        else
#line 5325 "check_hlds.simplify.simplify_goal_call.c"
          {
#line 490 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
#line 490 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
#line 187 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 188 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 5335 "check_hlds.simplify.simplify_goal_call.c"
          }
#line 5337 "check_hlds.simplify.simplify_goal_call.c"
      }
#line 94 "simplify_goal_call.m"
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
