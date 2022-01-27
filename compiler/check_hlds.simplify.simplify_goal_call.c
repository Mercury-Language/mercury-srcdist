/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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



#line 353 "simplify_goal_call.m"
struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s {
#line 439 "simplify_goal_call.m"
  MR_bool check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded;
#line 364 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22;
#line 364 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24;
#line 399 "simplify_goal_call.m"
  jmp_buf check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0;
#line 399 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25;
#line 401 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25;
#line 353 "simplify_goal_call.m"
};


#line 172 "check_hlds.simplify.simplify_goal_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 666 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(
#line 666 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_10,
#line 666 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_11,
#line 666 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_13,
#line 666 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14,
#line 666 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34,
#line 666 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35,
#line 666 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36,
#line 666 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);

#line 616 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
#line 616 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_9,
#line 616 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10,
#line 616 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32,
#line 616 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33,
#line 616 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 616 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);

#line 506 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(
#line 506 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_12,
#line 506 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__ModuleName_13,
#line 506 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_14,
#line 506 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_16,
#line 506 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 506 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_18,
#line 506 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19,
#line 506 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_9,
#line 506 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26,
#line 506 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27);

#line 275 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
#line 275 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 275 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 267 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
#line 267 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 267 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 266 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
#line 266 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 266 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 249 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
#line 249 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 249 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 410 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(
#line 410 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 410 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2);

#line 787 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(
#line 787 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
#line 787 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 787 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
#line 787 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
#line 787 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 787 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
#line 787 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14);

#line 748 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(
#line 748 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 748 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_10,
#line 748 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__IntConst_11,
#line 748 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 748 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_13,
#line 748 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14,
#line 748 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20,
#line 748 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21);

#line 546 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__TI_11,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_12,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_13,
#line 546 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Inequality_14,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Invert_15,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_16,
#line 546 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_18,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53,
#line 546 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);

#line 450 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
#line 450 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 450 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
#line 450 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
#line 450 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
#line 450 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5);

#line 399 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(
#line 399 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 401 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3(
#line 401 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 399 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(
#line 399 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 399 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(
#line 399 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 353 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_12,
#line 353 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_13,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_14,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_15,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_16,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_17,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_18,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_19,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common_20,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 353 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);

#line 305 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
#line 305 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6,
#line 305 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7,
#line 305 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_8,
#line 305 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22,
#line 305 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23);

#line 293 "simplify_goal_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(
#line 293 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[25][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[5][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[2][5];


#line 531 "simplify_goal_call.m"
/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s {
#line 531 "simplify_goal_call.m"
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0;
#line 531 "simplify_goal_call.m"
  const MR_Integer check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
#line 531 "simplify_goal_call.m"
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[5];

#line 685 "simplify_goal_call.m"
/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s {
#line 685 "simplify_goal_call.m"
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
#line 685 "simplify_goal_call.m"
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



#line 736 "check_hlds.simplify.simplify_goal_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 666 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(
#line 666 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_10,
#line 666 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_11,
#line 666 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_13,
#line 666 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14,
#line 666 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34,
#line 666 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35,
#line 666 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36,
#line 666 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37)
#line 666 "simplify_goal_call.m"
{
#line 672 "simplify_goal_call.m"
  {
#line 672 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 672 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_17;
#line 672 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_18;
#line 672 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19;
#line 672 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_40_40;
#line 672 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_115_115;
#line 672 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_116_116;
#line 672 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_117_117;
#line 672 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_118_118;
#line 685 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__slot_0;
#line 685 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__str_1;

#line 673 "simplify_goal_call.m"
    {
#line 673 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
#line 674 "simplify_goal_call.m"
    {
#line 674 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__Globals_18);
    }
#line 675 "simplify_goal_call.m"
    {
#line 675 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__simplify__simplify_goal_call__Globals_18, (MR_Integer) 225, (MR_Integer) 0);
    }
#line 672 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 672 "simplify_goal_call.m"
      {
#line 676 "simplify_goal_call.m"
        {
#line 676 "simplify_goal_call.m"
          libs__int_emu__target_bits_per_int_2_p_0(check_hlds__simplify__simplify_goal_call__Globals_18, &check_hlds__simplify__simplify_goal_call__V_40_40);
        }
#line 676 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19 = (MR_Integer) check_hlds__simplify__simplify_goal_call__V_40_40;
#line 703 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 703 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 703 "simplify_goal_call.m"
          {
#line 703 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 0)));
#line 703 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_13, (MR_Integer) 1)));
#line 703 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_115_115)) == (MR_mktag((MR_Integer) 1)));
#line 703 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 703 "simplify_goal_call.m"
              {
#line 703 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 0)));
#line 703 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_115_115, (MR_Integer) 1)));
#line 685 "simplify_goal_call.m"
                /* hashed string jump switch */
#line 685 "simplify_goal_call.m"
                /* compute the hash value of the input string */
#line 685 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__slot_0 = ((MR_hash_string5(check_hlds__simplify__simplify_goal_call__PredName_11)) & (MR_Integer) 31);
#line 685 "simplify_goal_call.m"
                /* no collisions; no hash chain loop */
#line 685 "simplify_goal_call.m"
                /* lookup the string for this hash slot */
#line 685 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__str_1 = ((&check_hlds__simplify__simplify_goal_call_vector_common_7[0 + check_hlds__simplify__simplify_goal_call__slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
#line 685 "simplify_goal_call.m"
                /* did we find a match? */
#line 685 "simplify_goal_call.m"
                if ((((check_hlds__simplify__simplify_goal_call__str_1 != NULL)) && ((strcmp(check_hlds__simplify__simplify_goal_call__str_1, check_hlds__simplify__simplify_goal_call__PredName_11) == 0))))
#line 685 "simplify_goal_call.m"
                  {
#line 685 "simplify_goal_call.m"
                    /* we found a match; dispatch to the corresponding code */
#line 685 "simplify_goal_call.m"
#line 685 "simplify_goal_call.m"
                    switch (check_hlds__simplify__simplify_goal_call__slot_0) {
#line 685 "simplify_goal_call.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 685 "simplify_goal_call.m"
                      case (MR_Integer) 10:
#line 720 "simplify_goal_call.m"
                        {
#line 720 "simplify_goal_call.m"
                          /* case "<<" */
#line 720 "simplify_goal_call.m"
                          {
#line 720 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_53_53;
#line 720 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_54_54;
#line 720 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_55_55;
#line 720 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 720 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
#line 720 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;
#line 720 "simplify_goal_call.m"
                            MR_Integer check_hlds__simplify__simplify_goal_call__V_59_59;
#line 720 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 720 "simplify_goal_call.m"
                            MR_String check_hlds__simplify__simplify_goal_call__Op_105;
#line 720 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_106;
#line 720 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_107;
#line 720 "simplify_goal_call.m"
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_108;
#line 723 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;
#line 723 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;

#line 721 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_117_117)) == (MR_mktag((MR_Integer) 1)));
#line 721 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 721 "simplify_goal_call.m"
                              {
#line 721 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__Z_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 0)));
#line 721 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 1)));
#line 721 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 720 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 720 "simplify_goal_call.m"
                                  {
#line 722 "simplify_goal_call.m"
                                    {
#line 722 "simplify_goal_call.m"
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_118_118, &check_hlds__simplify__simplify_goal_call__InstY_107);
                                    }
#line 723 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 723 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 723 "simplify_goal_call.m"
                                      {
#line 723 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 1)));
#line 723 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 2)));
#line 723 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_107, (MR_Integer) 3)));
#line 723 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 723 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 723 "simplify_goal_call.m"
                                          {
#line 723 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_54_54, (MR_Integer) 0)));
#line 723 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_54_54, (MR_Integer) 1)));
#line 723 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 720 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 720 "simplify_goal_call.m"
                                              {
#line 723 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_55_55, (MR_Integer) 0)));
#line 723 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_55_55, (MR_Integer) 1)));
#line 723 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 720 "simplify_goal_call.m"
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 720 "simplify_goal_call.m"
                                                  {
#line 723 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_56_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 723 "simplify_goal_call.m"
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 723 "simplify_goal_call.m"
                                                      {
#line 723 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__YVal_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 1)));
#line 724 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Integer) 0;
#line 724 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_108 >= check_hlds__simplify__simplify_goal_call__V_59_59);
#line 720 "simplify_goal_call.m"
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 720 "simplify_goal_call.m"
                                                          {
#line 725 "simplify_goal_call.m"
                                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_108 < check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19);
#line 720 "simplify_goal_call.m"
                                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 720 "simplify_goal_call.m"
                                                              {
#line 726 "simplify_goal_call.m"
                                                                check_hlds__simplify__simplify_goal_call__Op_105 = (MR_String) "unchecked_left_shift";
#line 727 "simplify_goal_call.m"
                                                                check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Integer) 0;
#line 727 "simplify_goal_call.m"
                                                                {
#line 727 "simplify_goal_call.m"
                                                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_105, check_hlds__simplify__simplify_goal_call__V_60_60, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__Z_106, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                                }
#line 720 "simplify_goal_call.m"
                                                                *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
#line 720 "simplify_goal_call.m"
                                                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 720 "simplify_goal_call.m"
                                                              }
#line 720 "simplify_goal_call.m"
                                                          }
#line 723 "simplify_goal_call.m"
                                                      }
#line 720 "simplify_goal_call.m"
                                                  }
#line 720 "simplify_goal_call.m"
                                              }
#line 723 "simplify_goal_call.m"
                                          }
#line 723 "simplify_goal_call.m"
                                      }
#line 720 "simplify_goal_call.m"
                                  }
#line 721 "simplify_goal_call.m"
                              }
#line 720 "simplify_goal_call.m"
                          }
#line 720 "simplify_goal_call.m"
                        }
#line 685 "simplify_goal_call.m"
                        break;
#line 685 "simplify_goal_call.m"
                      case (MR_Integer) 11:
#line 711 "simplify_goal_call.m"
                        {
#line 711 "simplify_goal_call.m"
                          /* case "rem" */
#line 711 "simplify_goal_call.m"
                          {
#line 711 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_63_63;
#line 711 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
#line 711 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_65_65;
#line 711 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_66_66;
#line 711 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_67_67;
#line 711 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
#line 711 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_69_69;
#line 711 "simplify_goal_call.m"
                            MR_String check_hlds__simplify__simplify_goal_call__Op_99;
#line 711 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_100;
#line 711 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_101;
#line 711 "simplify_goal_call.m"
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_102;
#line 714 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_28_28;
#line 714 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_29_29;

#line 712 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_117_117)) == (MR_mktag((MR_Integer) 1)));
#line 712 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 712 "simplify_goal_call.m"
                              {
#line 712 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__Z_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 0)));
#line 712 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 1)));
#line 712 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 711 "simplify_goal_call.m"
                                  {
#line 713 "simplify_goal_call.m"
                                    {
#line 713 "simplify_goal_call.m"
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_118_118, &check_hlds__simplify__simplify_goal_call__InstY_101);
                                    }
#line 714 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_101)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 714 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 714 "simplify_goal_call.m"
                                      {
#line 714 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 1)));
#line 714 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 2)));
#line 714 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_101, (MR_Integer) 3)));
#line 714 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 714 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 714 "simplify_goal_call.m"
                                          {
#line 714 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_64_64, (MR_Integer) 0)));
#line 714 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_64_64, (MR_Integer) 1)));
#line 714 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 711 "simplify_goal_call.m"
                                              {
#line 714 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_65_65, (MR_Integer) 0)));
#line 714 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_65_65, (MR_Integer) 1)));
#line 714 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "simplify_goal_call.m"
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 711 "simplify_goal_call.m"
                                                  {
#line 714 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_66_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_66_66, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 714 "simplify_goal_call.m"
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 714 "simplify_goal_call.m"
                                                      {
#line 714 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__YVal_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_66_66, (MR_Integer) 1)));
#line 715 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_102 == (MR_Integer) 0);
#line 715 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 711 "simplify_goal_call.m"
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 711 "simplify_goal_call.m"
                                                          {
#line 716 "simplify_goal_call.m"
                                                            check_hlds__simplify__simplify_goal_call__Op_99 = (MR_String) "unchecked_rem";
#line 717 "simplify_goal_call.m"
                                                            check_hlds__simplify__simplify_goal_call__V_69_69 = (MR_Integer) 0;
#line 717 "simplify_goal_call.m"
                                                            {
#line 717 "simplify_goal_call.m"
                                                              check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_99, check_hlds__simplify__simplify_goal_call__V_69_69, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__Z_100, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                            }
#line 711 "simplify_goal_call.m"
                                                            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
#line 711 "simplify_goal_call.m"
                                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 711 "simplify_goal_call.m"
                                                          }
#line 714 "simplify_goal_call.m"
                                                      }
#line 711 "simplify_goal_call.m"
                                                  }
#line 711 "simplify_goal_call.m"
                                              }
#line 714 "simplify_goal_call.m"
                                          }
#line 714 "simplify_goal_call.m"
                                      }
#line 711 "simplify_goal_call.m"
                                  }
#line 712 "simplify_goal_call.m"
                              }
#line 711 "simplify_goal_call.m"
                          }
#line 711 "simplify_goal_call.m"
                        }
#line 685 "simplify_goal_call.m"
                        break;
#line 685 "simplify_goal_call.m"
                      case (MR_Integer) 14:
#line 685 "simplify_goal_call.m"
                      case (MR_Integer) 24:
#line 702 "simplify_goal_call.m"
                        {
#line 702 "simplify_goal_call.m"
                          /* case "/", "//" */
#line 702 "simplify_goal_call.m"
                          {
#line 702 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_23;
#line 702 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_24;
#line 702 "simplify_goal_call.m"
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_27;
#line 702 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
#line 702 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_73_73;
#line 702 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_74_74;
#line 702 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
#line 702 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_76_76;
#line 702 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;
#line 702 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_78_78;
#line 702 "simplify_goal_call.m"
                            MR_String check_hlds__simplify__simplify_goal_call__Op_96;
#line 705 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;
#line 705 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;

#line 703 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_117_117)) == (MR_mktag((MR_Integer) 1)));
#line 703 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 703 "simplify_goal_call.m"
                              {
#line 703 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__Z_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 0)));
#line 703 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 1)));
#line 703 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 702 "simplify_goal_call.m"
                                  {
#line 704 "simplify_goal_call.m"
                                    {
#line 704 "simplify_goal_call.m"
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_118_118, &check_hlds__simplify__simplify_goal_call__InstY_24);
                                    }
#line 705 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 705 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 705 "simplify_goal_call.m"
                                      {
#line 705 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 1)));
#line 705 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 2)));
#line 705 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_24, (MR_Integer) 3)));
#line 705 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 705 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 705 "simplify_goal_call.m"
                                          {
#line 705 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, (MR_Integer) 0)));
#line 705 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, (MR_Integer) 1)));
#line 705 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 702 "simplify_goal_call.m"
                                              {
#line 705 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_74_74, (MR_Integer) 0)));
#line 705 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_74_74, (MR_Integer) 1)));
#line 705 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "simplify_goal_call.m"
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 702 "simplify_goal_call.m"
                                                  {
#line 705 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_75_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 705 "simplify_goal_call.m"
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 705 "simplify_goal_call.m"
                                                      {
#line 705 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__YVal_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, (MR_Integer) 1)));
#line 706 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_27 == (MR_Integer) 0);
#line 706 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 702 "simplify_goal_call.m"
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 702 "simplify_goal_call.m"
                                                          {
#line 707 "simplify_goal_call.m"
                                                            check_hlds__simplify__simplify_goal_call__Op_96 = (MR_String) "unchecked_quotient";
#line 708 "simplify_goal_call.m"
                                                            check_hlds__simplify__simplify_goal_call__V_78_78 = (MR_Integer) 0;
#line 708 "simplify_goal_call.m"
                                                            {
#line 708 "simplify_goal_call.m"
                                                              check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_96, check_hlds__simplify__simplify_goal_call__V_78_78, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__Z_23, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                            }
#line 702 "simplify_goal_call.m"
                                                            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
#line 702 "simplify_goal_call.m"
                                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 702 "simplify_goal_call.m"
                                                          }
#line 705 "simplify_goal_call.m"
                                                      }
#line 702 "simplify_goal_call.m"
                                                  }
#line 702 "simplify_goal_call.m"
                                              }
#line 705 "simplify_goal_call.m"
                                          }
#line 705 "simplify_goal_call.m"
                                      }
#line 702 "simplify_goal_call.m"
                                  }
#line 703 "simplify_goal_call.m"
                              }
#line 702 "simplify_goal_call.m"
                          }
#line 702 "simplify_goal_call.m"
                        }
#line 685 "simplify_goal_call.m"
                        break;
#line 685 "simplify_goal_call.m"
                      case (MR_Integer) 21:
#line 692 "simplify_goal_call.m"
                        {
#line 692 "simplify_goal_call.m"
                          /* case "rem_bits_per_int" */
#line 692 "simplify_goal_call.m"
                          {
#line 692 "simplify_goal_call.m"
                            MR_String check_hlds__simplify__simplify_goal_call__Op_93;

#line 693 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 692 "simplify_goal_call.m"
                              {
#line 696 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__Op_93 = (MR_String) "unchecked_rem";
#line 697 "simplify_goal_call.m"
                                {
#line 697 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_93, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
                                }
#line 697 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 692 "simplify_goal_call.m"
                              }
#line 692 "simplify_goal_call.m"
                          }
#line 692 "simplify_goal_call.m"
                        }
#line 685 "simplify_goal_call.m"
                        break;
#line 685 "simplify_goal_call.m"
                      case (MR_Integer) 22:
#line 730 "simplify_goal_call.m"
                        {
#line 730 "simplify_goal_call.m"
                          /* case ">>" */
#line 730 "simplify_goal_call.m"
                          {
#line 730 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
#line 730 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_44_44;
#line 730 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_45_45;
#line 730 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 730 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_47_47;
#line 730 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 730 "simplify_goal_call.m"
                            MR_Integer check_hlds__simplify__simplify_goal_call__V_49_49;
#line 730 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_50_50;
#line 730 "simplify_goal_call.m"
                            MR_String check_hlds__simplify__simplify_goal_call__Op_111;
#line 730 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__Z_112;
#line 730 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__InstY_113;
#line 730 "simplify_goal_call.m"
                            MR_Integer check_hlds__simplify__simplify_goal_call__YVal_114;
#line 733 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_32_32;
#line 733 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_33_33;

#line 731 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_117_117)) == (MR_mktag((MR_Integer) 1)));
#line 731 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 731 "simplify_goal_call.m"
                              {
#line 731 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__Z_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 0)));
#line 731 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_117_117, (MR_Integer) 1)));
#line 731 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 730 "simplify_goal_call.m"
                                  {
#line 732 "simplify_goal_call.m"
                                    {
#line 732 "simplify_goal_call.m"
                                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_10, check_hlds__simplify__simplify_goal_call__V_118_118, &check_hlds__simplify__simplify_goal_call__InstY_113);
                                    }
#line 733 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__InstY_113)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 733 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 733 "simplify_goal_call.m"
                                      {
#line 733 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 1)));
#line 733 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 2)));
#line 733 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__InstY_113, (MR_Integer) 3)));
#line 733 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 733 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 733 "simplify_goal_call.m"
                                          {
#line 733 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_44_44, (MR_Integer) 0)));
#line 733 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_44_44, (MR_Integer) 1)));
#line 733 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "simplify_goal_call.m"
                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 730 "simplify_goal_call.m"
                                              {
#line 733 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_45_45, (MR_Integer) 0)));
#line 733 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_45_45, (MR_Integer) 1)));
#line 733 "simplify_goal_call.m"
                                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "simplify_goal_call.m"
                                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 730 "simplify_goal_call.m"
                                                  {
#line 733 "simplify_goal_call.m"
                                                    check_hlds__simplify__simplify_goal_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 733 "simplify_goal_call.m"
                                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 733 "simplify_goal_call.m"
                                                      {
#line 733 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__YVal_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_46_46, (MR_Integer) 1)));
#line 734 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__V_49_49 = (MR_Integer) 0;
#line 734 "simplify_goal_call.m"
                                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_114 >= check_hlds__simplify__simplify_goal_call__V_49_49);
#line 730 "simplify_goal_call.m"
                                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 730 "simplify_goal_call.m"
                                                          {
#line 735 "simplify_goal_call.m"
                                                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__YVal_114 < check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19);
#line 730 "simplify_goal_call.m"
                                                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 730 "simplify_goal_call.m"
                                                              {
#line 736 "simplify_goal_call.m"
                                                                check_hlds__simplify__simplify_goal_call__Op_111 = (MR_String) "unchecked_right_shift";
#line 737 "simplify_goal_call.m"
                                                                check_hlds__simplify__simplify_goal_call__V_50_50 = (MR_Integer) 0;
#line 737 "simplify_goal_call.m"
                                                                {
#line 737 "simplify_goal_call.m"
                                                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__Op_111, check_hlds__simplify__simplify_goal_call__V_50_50, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__Z_112, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14);
                                                                }
#line 730 "simplify_goal_call.m"
                                                                *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36;
#line 730 "simplify_goal_call.m"
                                                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 730 "simplify_goal_call.m"
                                                              }
#line 730 "simplify_goal_call.m"
                                                          }
#line 733 "simplify_goal_call.m"
                                                      }
#line 730 "simplify_goal_call.m"
                                                  }
#line 730 "simplify_goal_call.m"
                                              }
#line 733 "simplify_goal_call.m"
                                          }
#line 733 "simplify_goal_call.m"
                                      }
#line 730 "simplify_goal_call.m"
                                  }
#line 731 "simplify_goal_call.m"
                              }
#line 730 "simplify_goal_call.m"
                          }
#line 730 "simplify_goal_call.m"
                        }
#line 685 "simplify_goal_call.m"
                        break;
#line 685 "simplify_goal_call.m"
                      case (MR_Integer) 27:
#line 678 "simplify_goal_call.m"
                        {
#line 678 "simplify_goal_call.m"
                          /* case "quot_bits_per_int" */
#line 678 "simplify_goal_call.m"
                          {
#line 678 "simplify_goal_call.m"
                            MR_String check_hlds__simplify__simplify_goal_call__Op_22;

#line 679 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 678 "simplify_goal_call.m"
                              {
#line 682 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__Op_22 = (MR_String) "unchecked_quotient";
#line 683 "simplify_goal_call.m"
                                {
#line 683 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_22, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
                                }
#line 683 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 678 "simplify_goal_call.m"
                              }
#line 678 "simplify_goal_call.m"
                          }
#line 678 "simplify_goal_call.m"
                        }
#line 685 "simplify_goal_call.m"
                        break;
#line 685 "simplify_goal_call.m"
                      case (MR_Integer) 29:
#line 686 "simplify_goal_call.m"
                        {
#line 686 "simplify_goal_call.m"
                          /* case "times_bits_per_int" */
#line 686 "simplify_goal_call.m"
                          {
#line 686 "simplify_goal_call.m"
                            MR_String check_hlds__simplify__simplify_goal_call__Op_90;

#line 687 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 686 "simplify_goal_call.m"
                              {
#line 688 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__Op_90 = (MR_String) "*";
#line 689 "simplify_goal_call.m"
                                {
#line 689 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(check_hlds__simplify__simplify_goal_call__Op_90, check_hlds__simplify__simplify_goal_call__V_116_116, check_hlds__simplify__simplify_goal_call__TargetBitsPerInt_19, check_hlds__simplify__simplify_goal_call__V_118_118, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_14, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_37);
                                }
#line 689 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 686 "simplify_goal_call.m"
                              }
#line 686 "simplify_goal_call.m"
                          }
#line 686 "simplify_goal_call.m"
                        }
#line 685 "simplify_goal_call.m"
                        break;
#line 685 "simplify_goal_call.m"
                    }
#line 685 "simplify_goal_call.m"
                    /* jump out of search loop */
#line 685 "simplify_goal_call.m"
                    goto label_0;
#line 685 "simplify_goal_call.m"
                  }
#line 685 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 685 "simplify_goal_call.m"
              label_0:;
#line 672 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 672 "simplify_goal_call.m"
                  {
#line 672 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_34;
#line 672 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 672 "simplify_goal_call.m"
                  }
#line 703 "simplify_goal_call.m"
              }
#line 703 "simplify_goal_call.m"
          }
#line 672 "simplify_goal_call.m"
      }
#line 672 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 672 "simplify_goal_call.m"
  }
#line 666 "simplify_goal_call.m"
}

#line 616 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
#line 616 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_9,
#line 616 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10,
#line 616 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32,
#line 616 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33,
#line 616 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 616 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35)
#line 616 "simplify_goal_call.m"
{
#line 621 "simplify_goal_call.m"
  {
#line 621 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_86_86;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_13;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_14;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Y_15;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__X_16;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Res_17;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_19;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Type_20;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Context_21;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CondEq_22;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CondLt_23;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Builtin_24;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtor_25;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnEq_26;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnLt_27;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ReturnGt_28;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__NonLocals_29;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__RestExpr_30;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Rest_31;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_38_38;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_39_39;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_40_40;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_41_41;
#line 621 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_42_42;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_44_44;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_45_45;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_47_47;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_49_49;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_50_50;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_51_51;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;
#line 621 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_53_53;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_54_54;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_55_55;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_63_63;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
#line 621 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_65_65;
#line 621 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_66_66;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_67_67;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
#line 621 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_69_69;
#line 621 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_70_70;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_71_71;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
#line 621 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_73_73;
#line 621 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_74_74;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_76_76;
#line 621 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__V_77_77;
#line 621 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_78_78;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_79_79;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_84_84;
#line 621 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
#line 631 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_18_18;

#line 628 "simplify_goal_call.m"
    {
#line 628 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__ModuleInfo_13);
    }
#line 629 "simplify_goal_call.m"
    {
#line 629 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_13, &check_hlds__simplify__simplify_goal_call__Globals_14);
    }
#line 630 "simplify_goal_call.m"
    {
#line 630 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__simplify__simplify_goal_call__Globals_14, (MR_Integer) 276, (MR_Integer) 1);
    }
#line 621 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 621 "simplify_goal_call.m"
      {
#line 1765 "check_hlds.simplify.simplify_goal_call.c"
        check_hlds__simplify__simplify_goal_call__TypeInfo_86_86 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
#line 631 "simplify_goal_call.m"
        {
#line 631 "simplify_goal_call.m"
          mercury__list__reverse_2_p_0(check_hlds__simplify__simplify_goal_call__TypeInfo_86_86, check_hlds__simplify__simplify_goal_call__Args_9, &check_hlds__simplify__simplify_goal_call__V_38_38);
        }
#line 631 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 631 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 631 "simplify_goal_call.m"
          {
#line 631 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Y_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, (MR_Integer) 0)));
#line 631 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, (MR_Integer) 1)));
#line 631 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 631 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 631 "simplify_goal_call.m"
              {
#line 631 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, (MR_Integer) 0)));
#line 631 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, (MR_Integer) 1)));
#line 631 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 631 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 631 "simplify_goal_call.m"
                  {
#line 631 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Res_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 0)));
#line 631 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 1)));
#line 632 "simplify_goal_call.m"
                    {
#line 632 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__VarTypes_19);
                    }
#line 633 "simplify_goal_call.m"
                    {
#line 633 "simplify_goal_call.m"
                      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_19, check_hlds__simplify__simplify_goal_call__Y_15, &check_hlds__simplify__simplify_goal_call__Type_20);
                    }
#line 634 "simplify_goal_call.m"
                    {
#line 634 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Type_20);
                    }
#line 621 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 621 "simplify_goal_call.m"
                      {
#line 637 "simplify_goal_call.m"
                        {
#line 637 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32);
                        }
#line 638 "simplify_goal_call.m"
                        {
#line 638 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_41_41 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
#line 639 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_42_42 = (MR_String) "builtin_compound_eq";
#line 639 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_43_43 = (MR_Integer) 0;
#line 639 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_45_45 = (MR_Integer) 1;
#line 640 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_46_46 = (MR_Integer) 0;
#line 640 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "simplify_goal_call.m"
                        {
#line 640 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_50_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_15));
#line 640 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_51_51));
#line 640 "simplify_goal_call.m"
                        }
#line 640 "simplify_goal_call.m"
                        {
#line 640 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_47_47, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_16));
#line 640 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_47_47, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_50_50));
#line 640 "simplify_goal_call.m"
                        }
#line 640 "simplify_goal_call.m"
                        {
#line 640 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_49_49 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
#line 638 "simplify_goal_call.m"
                        {
#line 638 "simplify_goal_call.m"
                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__V_41_41, check_hlds__simplify__simplify_goal_call__V_42_42, check_hlds__simplify__simplify_goal_call__V_43_43, check_hlds__simplify__simplify_goal_call__V_44_44, check_hlds__simplify__simplify_goal_call__V_45_45, check_hlds__simplify__simplify_goal_call__V_46_46, check_hlds__simplify__simplify_goal_call__V_47_47, check_hlds__simplify__simplify_goal_call__V_48_48, check_hlds__simplify__simplify_goal_call__V_49_49, check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Context_21, &check_hlds__simplify__simplify_goal_call__CondEq_22);
                        }
#line 642 "simplify_goal_call.m"
                        {
#line 642 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_52_52 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
#line 643 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_53_53 = (MR_String) "builtin_compound_lt";
#line 643 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_54_54 = (MR_Integer) 0;
#line 643 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_56_56 = (MR_Integer) 1;
#line 644 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_57_57 = (MR_Integer) 0;
#line 644 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "simplify_goal_call.m"
                        {
#line 644 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_60_60 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
#line 642 "simplify_goal_call.m"
                        {
#line 642 "simplify_goal_call.m"
                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__V_52_52, check_hlds__simplify__simplify_goal_call__V_53_53, check_hlds__simplify__simplify_goal_call__V_54_54, check_hlds__simplify__simplify_goal_call__V_55_55, check_hlds__simplify__simplify_goal_call__V_56_56, check_hlds__simplify__simplify_goal_call__V_57_57, check_hlds__simplify__simplify_goal_call__V_47_47, check_hlds__simplify__simplify_goal_call__V_59_59, check_hlds__simplify__simplify_goal_call__V_60_60, check_hlds__simplify__simplify_goal_call__ModuleInfo_13, check_hlds__simplify__simplify_goal_call__Context_21, &check_hlds__simplify__simplify_goal_call__CondLt_23);
                        }
#line 647 "simplify_goal_call.m"
                        {
#line 647 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Builtin_24 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
#line 649 "simplify_goal_call.m"
                        {
#line 649 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_64_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        }
#line 649 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_65_65 = (MR_String) "comparison_result";
#line 650 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_66_66 = (MR_Integer) 0;
#line 652 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_69_69 = (MR_String) "=";
#line 652 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_70_70 = (MR_Integer) 0;
#line 649 "simplify_goal_call.m"
                        {
#line 649 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_64_64));
#line 649 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_65_65));
#line 649 "simplify_goal_call.m"
                        }
#line 648 "simplify_goal_call.m"
                        {
#line 648 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__TypeCtor_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 648 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_63_63));
#line 648 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_66_66));
#line 648 "simplify_goal_call.m"
                        }
#line 652 "simplify_goal_call.m"
                        {
#line 652 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_69_69));
#line 652 "simplify_goal_call.m"
                        }
#line 652 "simplify_goal_call.m"
                        {
#line 652 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_68_68));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_70_70));
#line 652 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_67_67, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
#line 652 "simplify_goal_call.m"
                        }
#line 651 "simplify_goal_call.m"
                        {
#line 651 "simplify_goal_call.m"
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_67_67, &check_hlds__simplify__simplify_goal_call__ReturnEq_26);
                        }
#line 654 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_73_73 = (MR_String) "<";
#line 654 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_74_74 = (MR_Integer) 0;
#line 654 "simplify_goal_call.m"
                        {
#line 654 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_72_72, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_72_72, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_73_73));
#line 654 "simplify_goal_call.m"
                        }
#line 654 "simplify_goal_call.m"
                        {
#line 654 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_72_72));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_74_74));
#line 654 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_71_71, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
#line 654 "simplify_goal_call.m"
                        }
#line 653 "simplify_goal_call.m"
                        {
#line 653 "simplify_goal_call.m"
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_71_71, &check_hlds__simplify__simplify_goal_call__ReturnLt_27);
                        }
#line 656 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_String) ">";
#line 656 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_78_78 = (MR_Integer) 0;
#line 656 "simplify_goal_call.m"
                        {
#line 656 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_24));
#line 656 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
#line 656 "simplify_goal_call.m"
                        }
#line 656 "simplify_goal_call.m"
                        {
#line 656 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 656 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 656 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_76_76));
#line 656 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_78_78));
#line 656 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_75_75, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_25));
#line 656 "simplify_goal_call.m"
                        }
#line 655 "simplify_goal_call.m"
                        {
#line 655 "simplify_goal_call.m"
                          hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_17, check_hlds__simplify__simplify_goal_call__V_75_75, &check_hlds__simplify__simplify_goal_call__ReturnGt_28);
                        }
#line 2035 "check_hlds.simplify.simplify_goal_call.c"
                        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 658 "simplify_goal_call.m"
                        {
#line 658 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_79_79, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Res_17));
#line 658 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_79_79, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_47_47));
#line 658 "simplify_goal_call.m"
                        }
#line 658 "simplify_goal_call.m"
                        {
#line 658 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__NonLocals_29 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_87_87, check_hlds__simplify__simplify_goal_call__V_79_79);
                        }
#line 659 "simplify_goal_call.m"
                        {
#line 659 "simplify_goal_call.m"
                          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__NonLocals_29, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_32, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33);
                        }
#line 661 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__V_85_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 621 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34;
#line 661 "simplify_goal_call.m"
                        {
#line 661 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__RestExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_84_84));
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CondLt_23));
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnLt_27));
#line 661 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_30, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnGt_28));
#line 661 "simplify_goal_call.m"
                        }
#line 662 "simplify_goal_call.m"
                        {
#line 662 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__Rest_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 662 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Rest_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RestExpr_30));
#line 662 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Rest_31, 1) = ((MR_Box) (*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_33));
#line 662 "simplify_goal_call.m"
                        }
#line 663 "simplify_goal_call.m"
                        {
#line 663 "simplify_goal_call.m"
                          MR_Word base;
#line 663 "simplify_goal_call.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 663 "simplify_goal_call.m"
                          *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_10 = base;
#line 663 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 663 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_85_85));
#line 663 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CondEq_22));
#line 663 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnEq_26));
#line 663 "simplify_goal_call.m"
                          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Rest_31));
#line 663 "simplify_goal_call.m"
                        }
#line 663 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 621 "simplify_goal_call.m"
                      }
#line 631 "simplify_goal_call.m"
                  }
#line 631 "simplify_goal_call.m"
              }
#line 631 "simplify_goal_call.m"
          }
#line 621 "simplify_goal_call.m"
      }
#line 621 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 621 "simplify_goal_call.m"
  }
#line 616 "simplify_goal_call.m"
}

#line 506 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(
#line 506 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_12,
#line 506 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__ModuleName_13,
#line 506 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_14,
#line 506 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_16,
#line 506 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 506 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_18,
#line 506 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19,
#line 506 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_9,
#line 506 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26,
#line 506 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27)
#line 506 "simplify_goal_call.m"
{
#line 512 "simplify_goal_call.m"
  {
#line 512 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33;

#line 512 "simplify_goal_call.m"
    {
#line 512 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__simplify__simplify_goal_call__InstMap0_9, check_hlds__simplify__simplify_goal_call__InstMap0_12);
    }
#line 512 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 512 "simplify_goal_call.m"
      {
#line 539 "simplify_goal_call.m"
        if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_13, (MR_String) "int") == 0))
#line 541 "simplify_goal_call.m"
          {
#line 541 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_105_110_116_95_99_97_108_108_95_95_91_51_93_95_48_9_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__PredName_14, check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
          }
#line 539 "simplify_goal_call.m"
        else
#line 539 "simplify_goal_call.m"
        if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_13, (MR_String) "builtin") == 0))
#line 531 "simplify_goal_call.m"
          {
#line 531 "simplify_goal_call.m"
            MR_Integer check_hlds__simplify__simplify_goal_call__lo_0;
#line 531 "simplify_goal_call.m"
            MR_Integer check_hlds__simplify__simplify_goal_call__hi_1;
#line 531 "simplify_goal_call.m"
            MR_Integer check_hlds__simplify__simplify_goal_call__mid_2;
#line 531 "simplify_goal_call.m"
            MR_Integer check_hlds__simplify__simplify_goal_call__result_3;

#line 531 "simplify_goal_call.m"
            /* binary string jump switch */
#line 531 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__lo_0 = (MR_Integer) 0;
#line 531 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__hi_1 = (MR_Integer) 4;
#line 531 "simplify_goal_call.m"
            do
#line 531 "simplify_goal_call.m"
              {
#line 531 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__mid_2 = (((check_hlds__simplify__simplify_goal_call__lo_0 + check_hlds__simplify__simplify_goal_call__hi_1)) / (MR_Integer) 2);
#line 531 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__result_3 = MR_strcmp(check_hlds__simplify__simplify_goal_call__PredName_14, ((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + check_hlds__simplify__simplify_goal_call__mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0);
#line 531 "simplify_goal_call.m"
                if ((check_hlds__simplify__simplify_goal_call__result_3 == (MR_Integer) 0))
#line 531 "simplify_goal_call.m"
                  {
#line 531 "simplify_goal_call.m"
#line 531 "simplify_goal_call.m"
                    switch (((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + check_hlds__simplify__simplify_goal_call__mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1) {
#line 531 "simplify_goal_call.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 531 "simplify_goal_call.m"
                      case (MR_Integer) 0:
#line 520 "simplify_goal_call.m"
                        {
#line 520 "simplify_goal_call.m"
                          /* case "@<" */
#line 520 "simplify_goal_call.m"
                          {
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_23;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__X_24;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_25;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_32_32;

#line 521 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                              {
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__TI_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                                  {
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__X_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_30_30, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_30_30, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                                      {
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__Y_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_31_31, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_31_31, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                                          {
#line 528 "simplify_goal_call.m"
                                            {
#line 528 "simplify_goal_call.m"
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_23, check_hlds__simplify__simplify_goal_call__X_24, check_hlds__simplify__simplify_goal_call__Y_25, (MR_String) "<", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                                            }
#line 530 "simplify_goal_call.m"
                                            *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 530 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 520 "simplify_goal_call.m"
                                          }
#line 521 "simplify_goal_call.m"
                                      }
#line 521 "simplify_goal_call.m"
                                  }
#line 521 "simplify_goal_call.m"
                              }
#line 520 "simplify_goal_call.m"
                          }
#line 520 "simplify_goal_call.m"
                        }
#line 531 "simplify_goal_call.m"
                        break;
#line 531 "simplify_goal_call.m"
                      case (MR_Integer) 1:
#line 520 "simplify_goal_call.m"
                        {
#line 520 "simplify_goal_call.m"
                          /* case "@=<" */
#line 520 "simplify_goal_call.m"
                          {
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_37;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__X_38;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_39;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_40_40;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_41_41;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;

#line 521 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                              {
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__TI_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                                  {
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__X_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_40_40, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                                      {
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__Y_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_41_41, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_41_41, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                                          {
#line 528 "simplify_goal_call.m"
                                            {
#line 528 "simplify_goal_call.m"
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_37, check_hlds__simplify__simplify_goal_call__X_38, check_hlds__simplify__simplify_goal_call__Y_39, (MR_String) ">", (MR_Integer) 1, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                                            }
#line 530 "simplify_goal_call.m"
                                            *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 530 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 520 "simplify_goal_call.m"
                                          }
#line 521 "simplify_goal_call.m"
                                      }
#line 521 "simplify_goal_call.m"
                                  }
#line 521 "simplify_goal_call.m"
                              }
#line 520 "simplify_goal_call.m"
                          }
#line 520 "simplify_goal_call.m"
                        }
#line 531 "simplify_goal_call.m"
                        break;
#line 531 "simplify_goal_call.m"
                      case (MR_Integer) 2:
#line 520 "simplify_goal_call.m"
                        {
#line 520 "simplify_goal_call.m"
                          /* case "@>" */
#line 520 "simplify_goal_call.m"
                          {
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_45;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__X_46;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_47;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_49_49;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_50_50;

#line 521 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                              {
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__TI_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                                  {
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__X_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_48_48, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_48_48, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                                      {
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__Y_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_49_49, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_49_49, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                                          {
#line 528 "simplify_goal_call.m"
                                            {
#line 528 "simplify_goal_call.m"
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_45, check_hlds__simplify__simplify_goal_call__X_46, check_hlds__simplify__simplify_goal_call__Y_47, (MR_String) ">", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                                            }
#line 530 "simplify_goal_call.m"
                                            *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 530 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 520 "simplify_goal_call.m"
                                          }
#line 521 "simplify_goal_call.m"
                                      }
#line 521 "simplify_goal_call.m"
                                  }
#line 521 "simplify_goal_call.m"
                              }
#line 520 "simplify_goal_call.m"
                          }
#line 520 "simplify_goal_call.m"
                        }
#line 531 "simplify_goal_call.m"
                        break;
#line 531 "simplify_goal_call.m"
                      case (MR_Integer) 3:
#line 520 "simplify_goal_call.m"
                        {
#line 520 "simplify_goal_call.m"
                          /* case "@>=" */
#line 520 "simplify_goal_call.m"
                          {
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__TI_53;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__X_54;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_55;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
#line 520 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;

#line 521 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                              {
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__TI_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_16, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                                  {
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__X_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_56_56, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 521 "simplify_goal_call.m"
                                      {
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__Y_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_57_57, (MR_Integer) 0)));
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_57_57, (MR_Integer) 1)));
#line 521 "simplify_goal_call.m"
                                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "simplify_goal_call.m"
                                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 520 "simplify_goal_call.m"
                                          {
#line 528 "simplify_goal_call.m"
                                            {
#line 528 "simplify_goal_call.m"
                                              check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(check_hlds__simplify__simplify_goal_call__TI_53, check_hlds__simplify__simplify_goal_call__X_54, check_hlds__simplify__simplify_goal_call__Y_55, (MR_String) "<", (MR_Integer) 1, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__InstMap0_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                                            }
#line 530 "simplify_goal_call.m"
                                            *check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19 = check_hlds__simplify__simplify_goal_call__GoalInfo0_18;
#line 530 "simplify_goal_call.m"
                                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 520 "simplify_goal_call.m"
                                          }
#line 521 "simplify_goal_call.m"
                                      }
#line 521 "simplify_goal_call.m"
                                  }
#line 521 "simplify_goal_call.m"
                              }
#line 520 "simplify_goal_call.m"
                          }
#line 520 "simplify_goal_call.m"
                        }
#line 531 "simplify_goal_call.m"
                        break;
#line 531 "simplify_goal_call.m"
                      case (MR_Integer) 4:
#line 536 "simplify_goal_call.m"
                        {
#line 536 "simplify_goal_call.m"
                          /* case "compare" */
#line 536 "simplify_goal_call.m"
                          {
#line 536 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(check_hlds__simplify__simplify_goal_call__Args_16, check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17, check_hlds__simplify__simplify_goal_call__GoalInfo0_18, check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33);
                          }
#line 536 "simplify_goal_call.m"
                        }
#line 531 "simplify_goal_call.m"
                        break;
#line 531 "simplify_goal_call.m"
                    }
#line 531 "simplify_goal_call.m"
                    /* jump out of search loop */
#line 531 "simplify_goal_call.m"
                    goto label_0;
#line 531 "simplify_goal_call.m"
                  }
#line 531 "simplify_goal_call.m"
                else
#line 531 "simplify_goal_call.m"
                if ((check_hlds__simplify__simplify_goal_call__result_3 < (MR_Integer) 0))
#line 531 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__hi_1 = (check_hlds__simplify__simplify_goal_call__mid_2 - (MR_Integer) 1);
#line 531 "simplify_goal_call.m"
                else
#line 531 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__lo_0 = (check_hlds__simplify__simplify_goal_call__mid_2 + (MR_Integer) 1);
#line 531 "simplify_goal_call.m"
              }
#line 531 "simplify_goal_call.m"
            while ((check_hlds__simplify__simplify_goal_call__lo_0 <= check_hlds__simplify__simplify_goal_call__hi_1));
#line 531 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 531 "simplify_goal_call.m"
          label_0:;
#line 531 "simplify_goal_call.m"
          }
#line 539 "simplify_goal_call.m"
        else
#line 539 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 512 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 512 "simplify_goal_call.m"
          {
#line 544 "simplify_goal_call.m"
            {
#line 544 "simplify_goal_call.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_33_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27);
            }
#line 544 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 512 "simplify_goal_call.m"
          }
#line 512 "simplify_goal_call.m"
      }
#line 512 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 512 "simplify_goal_call.m"
  }
#line 506 "simplify_goal_call.m"
}

#line 275 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
#line 275 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 275 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 275 "simplify_goal_call.m"
{
#line 275 "simplify_goal_call.m"
  {
#line 275 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 275 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 275 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2;

#line 275 "simplify_goal_call.m"
    {
#line 275 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 275 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2));
#line 275 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 275 "simplify_goal_call.m"
  }
#line 275 "simplify_goal_call.m"
}

#line 267 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
#line 267 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 267 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 267 "simplify_goal_call.m"
{
#line 267 "simplify_goal_call.m"
  {
#line 267 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 267 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 267 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2;

#line 267 "simplify_goal_call.m"
    {
#line 267 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 267 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2));
#line 267 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 267 "simplify_goal_call.m"
  }
#line 267 "simplify_goal_call.m"
}

#line 266 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
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
    MR_Word check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2;

#line 266 "simplify_goal_call.m"
    {
#line 266 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 266 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2));
#line 266 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 266 "simplify_goal_call.m"
  }
#line 266 "simplify_goal_call.m"
}

#line 249 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
#line 249 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 249 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 249 "simplify_goal_call.m"
{
#line 249 "simplify_goal_call.m"
  {
#line 249 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 249 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 249 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2;

#line 249 "simplify_goal_call.m"
    {
#line 249 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 249 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2));
#line 249 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 249 "simplify_goal_call.m"
  }
#line 249 "simplify_goal_call.m"
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
#line 232 "simplify_goal_call.m"
  {
#line 232 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 232 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Attributes_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 232 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 232 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 232 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 232 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ExtraArgs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 232 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__MaybeTraceRuntimeCond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 6)));
#line 232 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Impl_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 7)));
#line 257 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33;
#line 257 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47;
#line 257 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49;
#line 241 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58;
#line 241 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_59_59;
#line 241 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_26;
#line 241 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_27;
#line 241 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleSymName_28;
#line 241 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__ModuleName_29;
#line 241 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__PredName_30;
#line 241 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ArgVars_32;
#line 241 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 248 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ModeNum_31;

#line 241 "simplify_goal_call.m"
    {
#line 241 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44);
    }
#line 241 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 241 "simplify_goal_call.m"
      {
#line 242 "simplify_goal_call.m"
        {
#line 242 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
        }
#line 243 "simplify_goal_call.m"
        {
#line 243 "simplify_goal_call.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, &check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
#line 244 "simplify_goal_call.m"
        {
#line 244 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModuleSymName_28 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
#line 245 "simplify_goal_call.m"
        {
#line 245 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleSymName_28, &check_hlds__simplify__simplify_goal_call__ModuleName_29);
        }
#line 241 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 241 "simplify_goal_call.m"
          {
#line 246 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__ExtraArgs0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 241 "simplify_goal_call.m"
              {
#line 247 "simplify_goal_call.m"
                {
#line 247 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__PredName_30 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
                }
#line 248 "simplify_goal_call.m"
                {
#line 248 "simplify_goal_call.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__ModeNum_31);
                }
#line 2848 "check_hlds.simplify.simplify_goal_call.c"
                check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 2850 "check_hlds.simplify.simplify_goal_call.c"
                check_hlds__simplify__simplify_goal_call__TypeInfo_59_59 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
#line 249 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_46_46 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[1];
#line 249 "simplify_goal_call.m"
                {
#line 249 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__ArgVars_32 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_58_58, check_hlds__simplify__simplify_goal_call__TypeInfo_59_59, check_hlds__simplify__simplify_goal_call__V_46_46, check_hlds__simplify__simplify_goal_call__Args0_22);
                }
#line 250 "simplify_goal_call.m"
                {
#line 250 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__ModuleName_29, check_hlds__simplify__simplify_goal_call__PredName_30, check_hlds__simplify__simplify_goal_call__ArgVars_32, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47, check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49);
                }
#line 241 "simplify_goal_call.m"
              }
#line 241 "simplify_goal_call.m"
          }
#line 241 "simplify_goal_call.m"
      }
#line 257 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 253 "simplify_goal_call.m"
      {
#line 253 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49;
#line 253 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_47_47;
#line 253 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_33;
#line 254 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 253 "simplify_goal_call.m"
      }
#line 257 "simplify_goal_call.m"
    else
#line 258 "simplify_goal_call.m"
      {
#line 258 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__BoxPolicy_34;
#line 258 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Args_35;
#line 258 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__ExtraArgs_36;
#line 258 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
#line 287 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38;

#line 258 "simplify_goal_call.m"
        {
#line 258 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__BoxPolicy_34 = parse_tree__prog_data__get_box_policy_1_f_0(check_hlds__simplify__simplify_goal_call__Attributes_19);
        }
#line 264 "simplify_goal_call.m"
#line 264 "simplify_goal_call.m"
        switch (check_hlds__simplify__simplify_goal_call__BoxPolicy_34) {
#line 264 "simplify_goal_call.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 264 "simplify_goal_call.m"
          case (MR_Integer) 1:
#line 265 "simplify_goal_call.m"
            {
#line 265 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 266 "simplify_goal_call.m"
              {
#line 266 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__Args_35 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[2], check_hlds__simplify__simplify_goal_call__Args0_22);
              }
#line 267 "simplify_goal_call.m"
              {
#line 267 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__ExtraArgs_36 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_62_62, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[3], check_hlds__simplify__simplify_goal_call__ExtraArgs0_23);
              }
#line 268 "simplify_goal_call.m"
              {
#line 268 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__GoalExpr1_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 268 "simplify_goal_call.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 268 "simplify_goal_call.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Attributes_19));
#line 268 "simplify_goal_call.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__PredId_20));
#line 268 "simplify_goal_call.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ProcId_21));
#line 268 "simplify_goal_call.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Args_35));
#line 268 "simplify_goal_call.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ExtraArgs_36));
#line 268 "simplify_goal_call.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 6) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__MaybeTraceRuntimeCond_24));
#line 268 "simplify_goal_call.m"
                MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_37, 7) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Impl_25));
#line 268 "simplify_goal_call.m"
              }
#line 265 "simplify_goal_call.m"
            }
#line 264 "simplify_goal_call.m"
            break;
#line 264 "simplify_goal_call.m"
          case (MR_Integer) 0:
#line 260 "simplify_goal_call.m"
            {
#line 261 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__Args_35 = check_hlds__simplify__simplify_goal_call__Args0_22;
#line 262 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__ExtraArgs_36 = check_hlds__simplify__simplify_goal_call__ExtraArgs0_23;
#line 263 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__GoalExpr1_37 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 260 "simplify_goal_call.m"
            }
#line 264 "simplify_goal_call.m"
            break;
#line 264 "simplify_goal_call.m"
        }
#line 272 "simplify_goal_call.m"
        {
#line 272 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38);
        }
#line 272 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 273 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__ExtraArgs_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 275 "simplify_goal_call.m"
          {
#line 275 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Purity_39;
#line 275 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40;
#line 275 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__ArgVars_55;
#line 284 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41;

#line 275 "simplify_goal_call.m"
            {
#line 275 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__ArgVars_55 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0], (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[4], check_hlds__simplify__simplify_goal_call__Args_35);
            }
#line 276 "simplify_goal_call.m"
            {
#line 276 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__Purity_39 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42);
            }
#line 277 "simplify_goal_call.m"
            {
#line 277 "simplify_goal_call.m"
              check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__ArgVars_55, check_hlds__simplify__simplify_goal_call__Purity_39, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, check_hlds__simplify__simplify_goal_call__GoalExpr1_37, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45);
            }
#line 281 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_38 == (MR_Integer) 1);
#line 280 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 280 "simplify_goal_call.m"
              {
#line 280 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40)) == (MR_mktag((MR_Integer) 1)));
#line 280 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 280 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_40, (MR_Integer) 0)));
#line 280 "simplify_goal_call.m"
              }
#line 284 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 283 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_41;
#line 284 "simplify_goal_call.m"
            else
#line 285 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
#line 275 "simplify_goal_call.m"
          }
#line 287 "simplify_goal_call.m"
        else
#line 288 "simplify_goal_call.m"
          {
#line 288 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr1_37;
#line 289 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 288 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44;
#line 288 "simplify_goal_call.m"
          }
#line 258 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42;
#line 258 "simplify_goal_call.m"
      }
#line 232 "simplify_goal_call.m"
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
#line 194 "simplify_goal_call.m"
  {
#line 194 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 194 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GenericCall_19;
#line 194 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_20;
#line 194 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Modes_21;
#line 194 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Det_23;
#line 199 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_22_22;

#line 193 "simplify_goal_call.m"
    *check_hlds__simplify__simplify_goal_call__GoalInfo_4 = check_hlds__simplify__simplify_goal_call__GoalInfo_13;
#line 199 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__GenericCall_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 199 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 199 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Modes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 199 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 199 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 218 "simplify_goal_call.m"
#line 218 "simplify_goal_call.m"
    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__GenericCall_19)) {
#line 218 "simplify_goal_call.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 218 "simplify_goal_call.m"
      case (MR_Integer) 0:
#line 201 "simplify_goal_call.m"
        {
#line 201 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Closure_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 0)));
#line 201 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Purity_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 1)));
#line 201 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 2)));
#line 201 "simplify_goal_call.m"
          MR_Integer check_hlds__simplify__simplify_goal_call__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 3)));
#line 214 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28;

#line 202 "simplify_goal_call.m"
          {
#line 202 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28);
          }
#line 214 "simplify_goal_call.m"
          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 205 "simplify_goal_call.m"
            {
#line 205 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29;
#line 211 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30;

#line 203 "simplify_goal_call.m"
              {
#line 203 "simplify_goal_call.m"
                check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(check_hlds__simplify__simplify_goal_call__Closure_24, check_hlds__simplify__simplify_goal_call__Args_20, check_hlds__simplify__simplify_goal_call__Modes_21, check_hlds__simplify__simplify_goal_call__Det_23, check_hlds__simplify__simplify_goal_call__Purity_25, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
              }
#line 208 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_28 == (MR_Integer) 1);
#line 207 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 207 "simplify_goal_call.m"
                {
#line 207 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29)) == (MR_mktag((MR_Integer) 1)));
#line 207 "simplify_goal_call.m"
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 207 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr_29, (MR_Integer) 0)));
#line 207 "simplify_goal_call.m"
                }
#line 211 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 210 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__AssignsGoalExpr_30;
#line 211 "simplify_goal_call.m"
              else
#line 212 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 205 "simplify_goal_call.m"
            }
#line 214 "simplify_goal_call.m"
          else
#line 215 "simplify_goal_call.m"
            {
#line 215 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 216 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 215 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37;
#line 215 "simplify_goal_call.m"
            }
#line 201 "simplify_goal_call.m"
        }
#line 218 "simplify_goal_call.m"
        break;
#line 218 "simplify_goal_call.m"
      case (MR_Integer) 1:
#line 218 "simplify_goal_call.m"
      case (MR_Integer) 3:
#line 226 "simplify_goal_call.m"
        {
#line 227 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 228 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 226 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37;
#line 226 "simplify_goal_call.m"
        }
#line 218 "simplify_goal_call.m"
        break;
#line 218 "simplify_goal_call.m"
      case (MR_Integer) 2:
#line 219 "simplify_goal_call.m"
        {
#line 220 "simplify_goal_call.m"
          {
#line 220 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
          }
#line 221 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 222 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 219 "simplify_goal_call.m"
        }
#line 218 "simplify_goal_call.m"
        break;
#line 218 "simplify_goal_call.m"
    }
#line 194 "simplify_goal_call.m"
  }
#line 36 "simplify_goal_call.m"
}

#line 410 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(
#line 410 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 410 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2)
#line 410 "simplify_goal_call.m"
{
#line 410 "simplify_goal_call.m"
  {
#line 410 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 410 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_14_14;

#line 410 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 410 "simplify_goal_call.m"
      {
#line 410 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
#line 410 "simplify_goal_call.m"
        (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_14_14));
#line 410 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 410 "simplify_goal_call.m"
      }
#line 410 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 410 "simplify_goal_call.m"
  }
#line 410 "simplify_goal_call.m"
}

#line 787 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(
#line 787 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Info_8,
#line 787 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 787 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_10,
#line 787 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_11,
#line 787 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 787 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Z_13,
#line 787 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_14)
#line 787 "simplify_goal_call.m"
{
#line 792 "simplify_goal_call.m"
  {
#line 792 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 792 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__IntModuleSymName_15;
#line 792 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpSymName_16;
#line 792 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_17;
#line 792 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredTable_18;
#line 792 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIds_19;
#line 792 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredId_21;
#line 792 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__OpProcId_23;
#line 792 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpArgs_24;
#line 792 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_35_35;
#line 792 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_36_36;
#line 801 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
#line 799 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_30_30;

#line 793 "simplify_goal_call.m"
    {
#line 793 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__IntModuleSymName_15 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_3[3]);
    }
#line 794 "simplify_goal_call.m"
    {
#line 794 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpSymName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_16, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IntModuleSymName_15));
#line 794 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_16, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Op_9));
#line 794 "simplify_goal_call.m"
    }
#line 795 "simplify_goal_call.m"
    {
#line 795 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__Info_8, &check_hlds__simplify__simplify_goal_call__ModuleInfo_17);
    }
#line 796 "simplify_goal_call.m"
    {
#line 796 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_17, &check_hlds__simplify__simplify_goal_call__PredTable_18);
    }
#line 797 "simplify_goal_call.m"
    {
#line 797 "simplify_goal_call.m"
      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(check_hlds__simplify__simplify_goal_call__PredTable_18, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__OpSymName_16, (MR_Integer) 2, &check_hlds__simplify__simplify_goal_call__OpPredIds_19);
    }
#line 799 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__OpPredIds_19)) == (MR_mktag((MR_Integer) 1)));
#line 799 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 799 "simplify_goal_call.m"
      {
#line 799 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 0)));
#line 799 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_19, (MR_Integer) 1)));
#line 799 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 799 "simplify_goal_call.m"
      }
#line 801 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 800 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpPredId_21 = check_hlds__simplify__simplify_goal_call__OpPredIdPrime_20;
#line 801 "simplify_goal_call.m"
    else
#line 802 "simplify_goal_call.m"
      {
#line 802 "simplify_goal_call.m"
        MR_String check_hlds__simplify__simplify_goal_call__V_33_33;

#line 802 "simplify_goal_call.m"
        {
#line 802 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find ", check_hlds__simplify__simplify_goal_call__Op_9);
        }
#line 802 "simplify_goal_call.m"
        {
#line 802 "simplify_goal_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_call", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_make_int_binary_op_goal_expr\'/7", check_hlds__simplify__simplify_goal_call__V_33_33);
#line 802 "simplify_goal_call.m"
          return;
        }
#line 802 "simplify_goal_call.m"
      }
#line 805 "simplify_goal_call.m"
    {
#line 805 "simplify_goal_call.m"
      hlds__hlds_pred__proc_id_to_int_2_p_1(&check_hlds__simplify__simplify_goal_call__OpProcId_23, (MR_Integer) 0);
    }
#line 806 "simplify_goal_call.m"
    {
#line 806 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Z_13));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 806 "simplify_goal_call.m"
    }
#line 806 "simplify_goal_call.m"
    {
#line 806 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_35_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_12));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_35_35, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_36_36));
#line 806 "simplify_goal_call.m"
    }
#line 806 "simplify_goal_call.m"
    {
#line 806 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpArgs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_11));
#line 806 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_35_35));
#line 806 "simplify_goal_call.m"
    }
#line 808 "simplify_goal_call.m"
    {
#line 808 "simplify_goal_call.m"
      MR_Word base;
#line 808 "simplify_goal_call.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 808 "simplify_goal_call.m"
      *check_hlds__simplify__simplify_goal_call__GoalExpr_14 = base;
#line 808 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpPredId_21));
#line 808 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpProcId_23));
#line 808 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpArgs_24));
#line 808 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IsBuiltin_10));
#line 808 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 808 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpSymName_16));
#line 808 "simplify_goal_call.m"
    }
#line 792 "simplify_goal_call.m"
  }
#line 787 "simplify_goal_call.m"
}

#line 748 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_8_p_0(
#line 748 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 748 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_10,
#line 748 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__IntConst_11,
#line 748 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_12,
#line 748 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_13,
#line 748 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14,
#line 748 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20,
#line 748 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21)
#line 748 "simplify_goal_call.m"
{
#line 753 "simplify_goal_call.m"
  {
#line 753 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstVar_16;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstGoal_17;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoalExpr_18;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoal_19;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_34;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_35;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_36;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_37;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstConsId_38;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Unification_39;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_40;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Ground_42;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Mode_43;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr_44;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__NonLocals_45;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__InstMapDelta_46;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_47;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_48_48;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 753 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_62_62;

#line 766 "simplify_goal_call.m"
    {
#line 766 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__VarSet0_34);
    }
#line 767 "simplify_goal_call.m"
    {
#line 767 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__VarTypes0_35);
    }
#line 3515 "check_hlds.simplify.simplify_goal_call.c"
    check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 768 "simplify_goal_call.m"
    {
#line 768 "simplify_goal_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66, &check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__VarSet0_34, &check_hlds__simplify__simplify_goal_call__VarSet_36);
    }
#line 769 "simplify_goal_call.m"
    {
#line 769 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_48_48 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 769 "simplify_goal_call.m"
    {
#line 769 "simplify_goal_call.m"
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__V_48_48, check_hlds__simplify__simplify_goal_call__VarTypes0_35, &check_hlds__simplify__simplify_goal_call__VarTypes_37);
    }
#line 770 "simplify_goal_call.m"
    {
#line 770 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_call__VarSet_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_20, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49);
    }
#line 771 "simplify_goal_call.m"
    {
#line 771 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_27_49, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21);
    }
#line 773 "simplify_goal_call.m"
    {
#line 773 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 773 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_38, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IntConst_11));
#line 773 "simplify_goal_call.m"
    }
#line 774 "simplify_goal_call.m"
    {
#line 774 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 774 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_16));
#line 774 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_38));
#line 774 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 774 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 5) = ((MR_Box) ((MR_Integer) 1));
#line 774 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_39, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "simplify_goal_call.m"
    }
#line 776 "simplify_goal_call.m"
    {
#line 776 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__RHS_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 776 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_38));
#line 776 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 1) = ((MR_Box) ((MR_Integer) 0));
#line 776 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "simplify_goal_call.m"
    }
#line 779 "simplify_goal_call.m"
    {
#line 779 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Ground_42 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 780 "simplify_goal_call.m"
    {
#line 780 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_60_60, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
#line 780 "simplify_goal_call.m"
    }
#line 780 "simplify_goal_call.m"
    {
#line 780 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_62_62, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
#line 780 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_62_62, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_42));
#line 780 "simplify_goal_call.m"
    }
#line 780 "simplify_goal_call.m"
    {
#line 780 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Mode_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Mode_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_60_60));
#line 780 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Mode_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_62_62));
#line 780 "simplify_goal_call.m"
    }
#line 781 "simplify_goal_call.m"
    {
#line 781 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__GoalExpr_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 781 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_16));
#line 781 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_40));
#line 781 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Mode_43));
#line 781 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unification_39));
#line 781 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__GoalExpr_44, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[24]));
#line 781 "simplify_goal_call.m"
    }
#line 782 "simplify_goal_call.m"
    {
#line 782 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__NonLocals_45 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_44_66, check_hlds__simplify__simplify_goal_call__ConstVar_16);
    }
#line 783 "simplify_goal_call.m"
    {
#line 783 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__InstMapDelta_46 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__simplify__simplify_goal_call__ConstVar_16);
    }
#line 784 "simplify_goal_call.m"
    {
#line 784 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__simplify_goal_call__NonLocals_45, check_hlds__simplify__simplify_goal_call__InstMapDelta_46, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__simplify_goal_call__GoalInfo_47);
    }
#line 785 "simplify_goal_call.m"
    {
#line 785 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstGoal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstGoal_17, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalExpr_44));
#line 785 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstGoal_17, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalInfo_47));
#line 785 "simplify_goal_call.m"
    }
#line 755 "simplify_goal_call.m"
    {
#line 755 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__simplify_make_int_binary_op_goal_expr_7_p_0(*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_21, check_hlds__simplify__simplify_goal_call__Op_9, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__X_10, check_hlds__simplify__simplify_goal_call__ConstVar_16, check_hlds__simplify__simplify_goal_call__Y_12, &check_hlds__simplify__simplify_goal_call__OpGoalExpr_18);
    }
#line 759 "simplify_goal_call.m"
    {
#line 759 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpGoal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 759 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__OpGoal_19, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoalExpr_18));
#line 759 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__OpGoal_19, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OrigGoalInfo_14));
#line 759 "simplify_goal_call.m"
    }
#line 760 "simplify_goal_call.m"
    {
#line 760 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_26_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoal_19));
#line 760 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "simplify_goal_call.m"
    }
#line 760 "simplify_goal_call.m"
    {
#line 760 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_25_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstGoal_17));
#line 760 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_25_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_26_26));
#line 760 "simplify_goal_call.m"
    }
#line 760 "simplify_goal_call.m"
    {
#line 760 "simplify_goal_call.m"
      MR_Word base;
#line 760 "simplify_goal_call.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 760 "simplify_goal_call.m"
      *check_hlds__simplify__simplify_goal_call__GoalExpr_13 = base;
#line 760 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 760 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 760 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_25_25));
#line 760 "simplify_goal_call.m"
    }
#line 753 "simplify_goal_call.m"
  }
#line 748 "simplify_goal_call.m"
}

#line 546 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__TI_11,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_12,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_13,
#line 546 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Inequality_14,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Invert_15,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_16,
#line 546 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_18,
#line 546 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53,
#line 546 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54)
#line 546 "simplify_goal_call.m"
{
#line 552 "simplify_goal_call.m"
  {
#line 552 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_20;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpRes_21;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_22;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_23;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_24;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Context_25;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_26;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__XInst_27;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__YInst_28;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_29;
#line 552 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ModeNo_30;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Unique_31;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ArgInsts_32;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__BuiltinModule_33;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpGoal0_34;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpExpr_35;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpInfo0_36;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpNonLocals_38;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpInfo_39;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpGoal_40;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtor_41;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConsId_42;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Bound_43;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UMode_44;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_45;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UKind_46;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyExpr_48;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyInfo_51;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UnifyGoal_52;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_56_56;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_73_73;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_74_74;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_81_81;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_82_82;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
#line 552 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_86_86;

#line 554 "simplify_goal_call.m"
    {
#line 554 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, &check_hlds__simplify__simplify_goal_call__VarSet0_20);
    }
#line 3847 "check_hlds.simplify.simplify_goal_call.c"
    check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 555 "simplify_goal_call.m"
    {
#line 555 "simplify_goal_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, &check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__VarSet0_20, &check_hlds__simplify__simplify_goal_call__VarSet_22);
    }
#line 556 "simplify_goal_call.m"
    {
#line 556 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_call__VarSet_22, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55);
    }
#line 559 "simplify_goal_call.m"
    {
#line 559 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_goal_call__VarTypes0_23);
    }
#line 560 "simplify_goal_call.m"
    {
#line 560 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_56_56 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
#line 560 "simplify_goal_call.m"
    {
#line 560 "simplify_goal_call.m"
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__V_56_56, check_hlds__simplify__simplify_goal_call__VarTypes0_23, &check_hlds__simplify__simplify_goal_call__VarTypes_24);
    }
#line 561 "simplify_goal_call.m"
    {
#line 561 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_24, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55_55, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);
    }
#line 564 "simplify_goal_call.m"
    {
#line 564 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_16);
    }
#line 565 "simplify_goal_call.m"
    {
#line 565 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_60_60, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_13));
#line 565 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "simplify_goal_call.m"
    }
#line 565 "simplify_goal_call.m"
    {
#line 565 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_12));
#line 565 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_59_59, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_60_60));
#line 565 "simplify_goal_call.m"
    }
#line 565 "simplify_goal_call.m"
    {
#line 565 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_58_58, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 565 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_58_58, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_59_59));
#line 565 "simplify_goal_call.m"
    }
#line 565 "simplify_goal_call.m"
    {
#line 565 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Args_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TI_11));
#line 565 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_58_58));
#line 565 "simplify_goal_call.m"
    }
#line 567 "simplify_goal_call.m"
    {
#line 567 "simplify_goal_call.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_18, check_hlds__simplify__simplify_goal_call__X_12, &check_hlds__simplify__simplify_goal_call__XInst_27);
    }
#line 568 "simplify_goal_call.m"
    {
#line 568 "simplify_goal_call.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_18, check_hlds__simplify__simplify_goal_call__Y_13, &check_hlds__simplify__simplify_goal_call__YInst_28);
    }
#line 569 "simplify_goal_call.m"
    {
#line 569 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54, &check_hlds__simplify__simplify_goal_call__ModuleInfo_29);
    }
#line 571 "simplify_goal_call.m"
    {
#line 571 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__XInst_27);
    }
#line 570 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
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
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 1;
#line 572 "simplify_goal_call.m"
        else
#line 572 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 2;
#line 572 "simplify_goal_call.m"
      }
#line 570 "simplify_goal_call.m"
    else
#line 574 "simplify_goal_call.m"
      {
#line 574 "simplify_goal_call.m"
        {
#line 574 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__YInst_28);
        }
#line 574 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 574 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 3;
#line 574 "simplify_goal_call.m"
        else
#line 574 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_30 = (MR_Integer) 0;
#line 574 "simplify_goal_call.m"
      }
#line 577 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Unique_31 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0]);
#line 578 "simplify_goal_call.m"
    {
#line 578 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 578 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_31));
#line 578 "simplify_goal_call.m"
    }
#line 578 "simplify_goal_call.m"
    {
#line 578 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ArgInsts_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_64_64));
#line 578 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "simplify_goal_call.m"
    }
#line 579 "simplify_goal_call.m"
    {
#line 579 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__BuiltinModule_33 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 581 "simplify_goal_call.m"
    {
#line 581 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 581 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_68_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ModeNo_30));
#line 581 "simplify_goal_call.m"
    }
#line 582 "simplify_goal_call.m"
    {
#line 582 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_72_72 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__simplify_goal_call__ArgInsts_32);
    }
#line 580 "simplify_goal_call.m"
    {
#line 580 "simplify_goal_call.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__BuiltinModule_33, (MR_String) "compare", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__V_68_68, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__Args_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_call__V_72_72, check_hlds__simplify__simplify_goal_call__ModuleInfo_29, check_hlds__simplify__simplify_goal_call__Context_25, &check_hlds__simplify__simplify_goal_call__CmpGoal0_34);
    }
#line 584 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__CmpExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal0_34, (MR_Integer) 0)));
#line 584 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__CmpInfo0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal0_34, (MR_Integer) 1)));
#line 585 "simplify_goal_call.m"
    {
#line 585 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__CmpInfo0_36);
    }
#line 586 "simplify_goal_call.m"
    {
#line 586 "simplify_goal_call.m"
      parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__CmpNonLocals0_37, &check_hlds__simplify__simplify_goal_call__CmpNonLocals_38);
    }
#line 587 "simplify_goal_call.m"
    {
#line 587 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__CmpNonLocals_38, check_hlds__simplify__simplify_goal_call__CmpInfo0_36, &check_hlds__simplify__simplify_goal_call__CmpInfo_39);
    }
#line 588 "simplify_goal_call.m"
    {
#line 588 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__CmpGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal_40, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpExpr_35));
#line 588 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal_40, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpInfo_39));
#line 588 "simplify_goal_call.m"
    }
#line 592 "simplify_goal_call.m"
    {
#line 592 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_74_74 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 592 "simplify_goal_call.m"
    {
#line 592 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_74_74));
#line 592 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_73_73, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 592 "simplify_goal_call.m"
    }
#line 591 "simplify_goal_call.m"
    {
#line 591 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__TypeCtor_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 591 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_41, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_73_73));
#line 591 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 591 "simplify_goal_call.m"
    }
#line 593 "simplify_goal_call.m"
    {
#line 593 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__BuiltinModule_33));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Inequality_14));
#line 593 "simplify_goal_call.m"
    }
#line 593 "simplify_goal_call.m"
    {
#line 593 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 2) = ((MR_Box) ((MR_Integer) 0));
#line 593 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_41));
#line 593 "simplify_goal_call.m"
    }
#line 595 "simplify_goal_call.m"
    {
#line 595 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_82_82, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "simplify_goal_call.m"
    }
#line 595 "simplify_goal_call.m"
    {
#line 595 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_81_81, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_82_82));
#line 595 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "simplify_goal_call.m"
    }
#line 594 "simplify_goal_call.m"
    {
#line 594 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Bound_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 1) = ((MR_Box) ((MR_Integer) 0));
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 594 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_43, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_81_81));
#line 594 "simplify_goal_call.m"
    }
#line 596 "simplify_goal_call.m"
    {
#line 596 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_85_85, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_31));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_85_85, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
#line 596 "simplify_goal_call.m"
    }
#line 596 "simplify_goal_call.m"
    {
#line 596 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_86_86, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_86_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_43));
#line 596 "simplify_goal_call.m"
    }
#line 596 "simplify_goal_call.m"
    {
#line 596 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UMode_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UMode_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_85_85));
#line 596 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UMode_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_86_86));
#line 596 "simplify_goal_call.m"
    }
#line 597 "simplify_goal_call.m"
    {
#line 597 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__RHS_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 597 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
#line 597 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 1) = ((MR_Box) ((MR_Integer) 0));
#line 597 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "simplify_goal_call.m"
    }
#line 598 "simplify_goal_call.m"
    {
#line 598 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UKind_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 598 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 598 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_42));
#line 598 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 4) = ((MR_Box) ((MR_Integer) 0));
#line 598 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_46, 5) = ((MR_Box) ((MR_Integer) 1));
#line 598 "simplify_goal_call.m"
    }
#line 601 "simplify_goal_call.m"
    {
#line 601 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UnifyExpr_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 601 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpRes_21));
#line 601 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_45));
#line 601 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UMode_44));
#line 601 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UKind_46));
#line 601 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UnifyExpr_48, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[23]));
#line 601 "simplify_goal_call.m"
    }
#line 602 "simplify_goal_call.m"
    {
#line 602 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_16);
    }
#line 603 "simplify_goal_call.m"
    {
#line 603 "simplify_goal_call.m"
      parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_107_107, check_hlds__simplify__simplify_goal_call__CmpRes_21, check_hlds__simplify__simplify_goal_call__UnifyNonLocals0_49, &check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50);
    }
#line 604 "simplify_goal_call.m"
    {
#line 604 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__UnifyNonLocals_50, check_hlds__simplify__simplify_goal_call__GoalInfo_16, &check_hlds__simplify__simplify_goal_call__UnifyInfo_51);
    }
#line 605 "simplify_goal_call.m"
    {
#line 605 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UnifyGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 605 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyGoal_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyExpr_48));
#line 605 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyGoal_52, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyInfo_51));
#line 605 "simplify_goal_call.m"
    }
#line 610 "simplify_goal_call.m"
#line 610 "simplify_goal_call.m"
    switch (check_hlds__simplify__simplify_goal_call__Invert_15) {
#line 610 "simplify_goal_call.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 610 "simplify_goal_call.m"
      case (MR_Integer) 0:
#line 608 "simplify_goal_call.m"
        {
#line 608 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_104_104;
#line 608 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_105_105;

#line 609 "simplify_goal_call.m"
          {
#line 609 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyGoal_52));
#line 609 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "simplify_goal_call.m"
          }
#line 609 "simplify_goal_call.m"
          {
#line 609 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_104_104, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_40));
#line 609 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_104_104, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_105_105));
#line 609 "simplify_goal_call.m"
          }
#line 609 "simplify_goal_call.m"
          {
#line 609 "simplify_goal_call.m"
            MR_Word base;
#line 609 "simplify_goal_call.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 609 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17 = base;
#line 609 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 609 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 609 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_104_104));
#line 609 "simplify_goal_call.m"
          }
#line 608 "simplify_goal_call.m"
        }
#line 610 "simplify_goal_call.m"
        break;
#line 610 "simplify_goal_call.m"
      case (MR_Integer) 1:
#line 611 "simplify_goal_call.m"
        {
#line 611 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_98_98;
#line 611 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_99_99;
#line 611 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_100_100;
#line 611 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_goal_call__UnifyGoal_52);

#line 613 "simplify_goal_call.m"
          {
#line 613 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_100_100, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_101_101));
#line 613 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_100_100, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyInfo_51));
#line 613 "simplify_goal_call.m"
          }
#line 613 "simplify_goal_call.m"
          {
#line 613 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_99_99, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_100_100));
#line 613 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "simplify_goal_call.m"
          }
#line 613 "simplify_goal_call.m"
          {
#line 613 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_98_98, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_40));
#line 613 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_98_98, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_99_99));
#line 613 "simplify_goal_call.m"
          }
#line 612 "simplify_goal_call.m"
          {
#line 612 "simplify_goal_call.m"
            MR_Word base;
#line 612 "simplify_goal_call.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 612 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_17 = base;
#line 612 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 612 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 612 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_98_98));
#line 612 "simplify_goal_call.m"
          }
#line 611 "simplify_goal_call.m"
        }
#line 610 "simplify_goal_call.m"
        break;
#line 610 "simplify_goal_call.m"
    }
#line 552 "simplify_goal_call.m"
  }
#line 546 "simplify_goal_call.m"
}

#line 450 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
#line 450 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 450 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
#line 450 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
#line 450 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
#line 450 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5)
#line 450 "simplify_goal_call.m"
{
#line 453 "simplify_goal_call.m"
  while (MR_TRUE)
#line 453 "simplify_goal_call.m"
    {
#line 453 "simplify_goal_call.m"
      /* tailcall optimized into a loop */
#line 453 "simplify_goal_call.m"
      {
#line 453 "simplify_goal_call.m"
        MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 453 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "simplify_goal_call.m"
        else
#line 455 "simplify_goal_call.m"
          {
#line 455 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)));
#line 455 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 1)));
#line 455 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__HeadVar_11;
#line 455 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_12;
#line 455 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Mode_13;
#line 455 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Modes_14;

#line 454 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 454 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 454 "simplify_goal_call.m"
              {
#line 454 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__HeadVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
#line 454 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 1)));
#line 454 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 454 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 454 "simplify_goal_call.m"
                  {
#line 454 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__3_3, (MR_Integer) 0)));
#line 454 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__3_3, (MR_Integer) 1)));
#line 456 "simplify_goal_call.m"
                    {
#line 456 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_5, check_hlds__simplify__simplify_goal_call__Mode_13);
                    }
#line 458 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 457 "simplify_goal_call.m"
                      {
#line 457 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(check_hlds__simplify__simplify_goal_call__Arg_9, check_hlds__simplify__simplify_goal_call__HeadVar_11, check_hlds__simplify__simplify_goal_call__CommonInfo_4);
                      }
#line 458 "simplify_goal_call.m"
                    else
#line 459 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 455 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 461 "simplify_goal_call.m"
                      {
#line 461 "simplify_goal_call.m"
                        /* direct tailcall eliminated */
#line 461 "simplify_goal_call.m"
                        {
#line 461 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1__tmp_copy_1 = check_hlds__simplify__simplify_goal_call__Args_10;
#line 461 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_call__HeadVars_12;
#line 461 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3__tmp_copy_3 = check_hlds__simplify__simplify_goal_call__Modes_14;

#line 461 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__3_3 = check_hlds__simplify__simplify_goal_call__HeadVar__3__tmp_copy_3;
#line 461 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__HeadVar__2__tmp_copy_2;
#line 461 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__1_1 = check_hlds__simplify__simplify_goal_call__HeadVar__1__tmp_copy_1;
#line 461 "simplify_goal_call.m"
                        }
#line 461 "simplify_goal_call.m"
                        continue;
#line 461 "simplify_goal_call.m"
                      }
#line 454 "simplify_goal_call.m"
                  }
#line 454 "simplify_goal_call.m"
              }
#line 455 "simplify_goal_call.m"
          }
#line 453 "simplify_goal_call.m"
        return check_hlds__simplify__simplify_goal_call__succeeded;
#line 453 "simplify_goal_call.m"
      }
#line 453 "simplify_goal_call.m"
      break;
#line 453 "simplify_goal_call.m"
    }
#line 450 "simplify_goal_call.m"
}

#line 399 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(
#line 399 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 399 "simplify_goal_call.m"
{
#line 399 "simplify_goal_call.m"
  {
#line 399 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 399 "simplify_goal_call.m"
    MR_builtin_longjmp((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0, 1);
#line 399 "simplify_goal_call.m"
  }
#line 399 "simplify_goal_call.m"
}

#line 401 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3(
#line 401 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 401 "simplify_goal_call.m"
{
#line 401 "simplify_goal_call.m"
  {
#line 401 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 401 "simplify_goal_call.m"
    (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25 = ((MR_Word) (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25);
#line 401 "simplify_goal_call.m"
    {
#line 401 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(check_hlds__simplify__simplify_goal_call__env_ptr);
#line 401 "simplify_goal_call.m"
      return;
    }
#line 401 "simplify_goal_call.m"
  }
#line 401 "simplify_goal_call.m"
}

#line 399 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_2(
#line 399 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 399 "simplify_goal_call.m"
{
#line 399 "simplify_goal_call.m"
  {
#line 399 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 402 "simplify_goal_call.m"
    {
#line 402 "simplify_goal_call.m"
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25);
    }
#line 399 "simplify_goal_call.m"
    if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 399 "simplify_goal_call.m"
      {
#line 405 "simplify_goal_call.m"
        {
#line 405 "simplify_goal_call.m"
          (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgMode_25);
        }
#line 404 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 404 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 404 "simplify_goal_call.m"
          {
#line 404 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_1(check_hlds__simplify__simplify_goal_call__env_ptr);
#line 404 "simplify_goal_call.m"
            return;
          }
#line 399 "simplify_goal_call.m"
      }
#line 399 "simplify_goal_call.m"
  }
#line 399 "simplify_goal_call.m"
}

#line 399 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(
#line 399 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 399 "simplify_goal_call.m"
{
#line 399 "simplify_goal_call.m"
  {
#line 399 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 399 "simplify_goal_call.m"
    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__commit_0) == 0)
#line 399 "simplify_goal_call.m"
      {
#line 399 "simplify_goal_call.m"
        {
#line 401 "simplify_goal_call.m"
          {
#line 401 "simplify_goal_call.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__conv0_ArgMode_25, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24, check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_3, check_hlds__simplify__simplify_goal_call__env_ptr);
          }
#line 399 "simplify_goal_call.m"
        }
#line 399 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = MR_FALSE;
#line 399 "simplify_goal_call.m"
      }
#line 399 "simplify_goal_call.m"
    else
#line 399 "simplify_goal_call.m"
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = MR_TRUE;
#line 399 "simplify_goal_call.m"
  }
#line 399 "simplify_goal_call.m"
}

#line 353 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_12,
#line 353 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_13,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_14,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_15,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_16,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_17,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_18,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext_19,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common_20,
#line 353 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34,
#line 353 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35)
#line 353 "simplify_goal_call.m"
{
#line 353 "simplify_goal_call.m"
  {
#line 353 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0_s check_hlds__simplify__simplify_goal_call__env;

#line 439 "simplify_goal_call.m"
    {
#line 364 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_23;
#line 364 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__Purity_27;
#line 364 "simplify_goal_call.m"
      MR_Integer check_hlds__simplify__simplify_goal_call__V_36_36;
#line 364 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_83_83;
#line 364 "simplify_goal_call.m"
      MR_Integer check_hlds__simplify__simplify_goal_call__V_84_84;
#line 378 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_80_80;
#line 378 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_81_81;
#line 410 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_37_37;
#line 410 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
#line 410 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_26_26;

#line 364 "simplify_goal_call.m"
      {
#line 364 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34);
      }
#line 364 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 364 "simplify_goal_call.m"
        {
#line 368 "simplify_goal_call.m"
          {
#line 368 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &check_hlds__simplify__simplify_goal_call__V_83_83, &check_hlds__simplify__simplify_goal_call__V_84_84);
          }
#line 368 "simplify_goal_call.m"
          {
#line 368 "simplify_goal_call.m"
            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_12, check_hlds__simplify__simplify_goal_call__V_83_83);
          }
#line 364 "simplify_goal_call.m"
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 364 "simplify_goal_call.m"
            {
#line 368 "simplify_goal_call.m"
              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__ProcId_13 == check_hlds__simplify__simplify_goal_call__V_84_84);
#line 364 "simplify_goal_call.m"
              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 364 "simplify_goal_call.m"
                {
#line 374 "simplify_goal_call.m"
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__IsBuiltin_15 == (MR_Integer) 0);
#line 374 "simplify_goal_call.m"
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 364 "simplify_goal_call.m"
                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 364 "simplify_goal_call.m"
                    {
#line 378 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 0)));
#line 378 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 1)));
#line 378 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext_19, (MR_Integer) 2)));
#line 378 "simplify_goal_call.m"
                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__V_36_36 == (MR_Integer) 0);
#line 364 "simplify_goal_call.m"
                      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 364 "simplify_goal_call.m"
                        {
#line 381 "simplify_goal_call.m"
                          {
#line 381 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22);
                          }
#line 382 "simplify_goal_call.m"
                          {
#line 382 "simplify_goal_call.m"
                            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &check_hlds__simplify__simplify_goal_call__HeadVars_23);
                          }
#line 383 "simplify_goal_call.m"
                          {
#line 383 "simplify_goal_call.m"
                            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24);
                          }
#line 384 "simplify_goal_call.m"
                          {
#line 384 "simplify_goal_call.m"
                            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(check_hlds__simplify__simplify_goal_call__Args_14, check_hlds__simplify__simplify_goal_call__HeadVars_23, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ArgModes_24, check_hlds__simplify__simplify_goal_call__Common_20, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__ModuleInfo_22);
                          }
#line 364 "simplify_goal_call.m"
                          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 364 "simplify_goal_call.m"
                            {
#line 399 "simplify_goal_call.m"
                              {
#line 399 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_4(&check_hlds__simplify__simplify_goal_call__env);
                              }
#line 399 "simplify_goal_call.m"
                              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 364 "simplify_goal_call.m"
                              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 364 "simplify_goal_call.m"
                                {
#line 410 "simplify_goal_call.m"
                                  {
#line 410 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 410 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__V_37_37, 0) = NULL;
#line 410 "simplify_goal_call.m"
                                  }
#line 410 "simplify_goal_call.m"
                                  {
#line 410 "simplify_goal_call.m"
                                    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_17, &check_hlds__simplify__simplify_goal_call__V_85_85);
                                  }
#line 410 "simplify_goal_call.m"
                                  {
#line 410 "simplify_goal_call.m"
                                    (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(check_hlds__simplify__simplify_goal_call__V_37_37, check_hlds__simplify__simplify_goal_call__V_85_85);
                                  }
#line 410 "simplify_goal_call.m"
                                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 364 "simplify_goal_call.m"
                                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 364 "simplify_goal_call.m"
                                    {
#line 414 "simplify_goal_call.m"
                                      {
#line 414 "simplify_goal_call.m"
                                        hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_16, &check_hlds__simplify__simplify_goal_call__Purity_27);
                                      }
#line 415 "simplify_goal_call.m"
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__Purity_27 == (MR_Integer) 2);
#line 415 "simplify_goal_call.m"
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded);
#line 364 "simplify_goal_call.m"
                                    }
#line 364 "simplify_goal_call.m"
                                }
#line 364 "simplify_goal_call.m"
                            }
#line 364 "simplify_goal_call.m"
                        }
#line 364 "simplify_goal_call.m"
                    }
#line 364 "simplify_goal_call.m"
                }
#line 364 "simplify_goal_call.m"
            }
#line 364 "simplify_goal_call.m"
        }
#line 439 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0_env_0__succeeded)
#line 417 "simplify_goal_call.m"
        {
#line 417 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_28;
#line 417 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Msg_31;
#line 417 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Spec_33;
#line 417 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;

#line 417 "simplify_goal_call.m"
          {
#line 417 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__GoalContext_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_18);
          }
#line 430 "simplify_goal_call.m"
          {
#line 430 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Msg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 430 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_28));
#line 430 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
#line 430 "simplify_goal_call.m"
          }
#line 437 "simplify_goal_call.m"
          {
#line 437 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_31));
#line 437 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "simplify_goal_call.m"
          }
#line 436 "simplify_goal_call.m"
          {
#line 436 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 436 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
#line 436 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_3[0])));
#line 436 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_33, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
#line 436 "simplify_goal_call.m"
          }
#line 438 "simplify_goal_call.m"
          {
#line 438 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_call__Spec_33, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35);
#line 438 "simplify_goal_call.m"
            return;
          }
#line 417 "simplify_goal_call.m"
        }
#line 439 "simplify_goal_call.m"
      else
#line 439 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_35 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_34;
#line 439 "simplify_goal_call.m"
    }
#line 353 "simplify_goal_call.m"
  }
#line 353 "simplify_goal_call.m"
}

#line 305 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(
#line 305 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_6,
#line 305 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_7,
#line 305 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_8,
#line 305 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22,
#line 305 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23)
#line 305 "simplify_goal_call.m"
{
#line 310 "simplify_goal_call.m"
  {
#line 310 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 310 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_10;
#line 313 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Markers_11;
#line 313 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredId_12;
#line 313 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredInfo_14;
#line 313 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15;
#line 313 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_24_24;
#line 320 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_13_13;
#line 328 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25;

#line 311 "simplify_goal_call.m"
    {
#line 311 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, &check_hlds__simplify__simplify_goal_call__ModuleInfo_10);
    }
#line 313 "simplify_goal_call.m"
    {
#line 313 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22);
    }
#line 313 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 313 "simplify_goal_call.m"
      {
#line 314 "simplify_goal_call.m"
        {
#line 314 "simplify_goal_call.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_7, &check_hlds__simplify__simplify_goal_call__Markers_11);
        }
#line 315 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_24_24 = (MR_Integer) 4;
#line 315 "simplify_goal_call.m"
        {
#line 315 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__Markers_11, check_hlds__simplify__simplify_goal_call__V_24_24);
        }
#line 313 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 313 "simplify_goal_call.m"
          {
#line 320 "simplify_goal_call.m"
            {
#line 320 "simplify_goal_call.m"
              check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, &check_hlds__simplify__simplify_goal_call__ThisPredId_12, &check_hlds__simplify__simplify_goal_call__V_13_13);
            }
#line 321 "simplify_goal_call.m"
            {
#line 321 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_6, check_hlds__simplify__simplify_goal_call__ThisPredId_12);
            }
#line 321 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 313 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 313 "simplify_goal_call.m"
              {
#line 326 "simplify_goal_call.m"
                {
#line 326 "simplify_goal_call.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_10, check_hlds__simplify__simplify_goal_call__ThisPredId_12, &check_hlds__simplify__simplify_goal_call__ThisPredInfo_14);
                }
#line 327 "simplify_goal_call.m"
                {
#line 327 "simplify_goal_call.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredInfo_14, &check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15);
                }
#line 328 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_25_25 = (MR_Integer) 4;
#line 328 "simplify_goal_call.m"
                {
#line 328 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredMarkers_15, check_hlds__simplify__simplify_goal_call__V_25_25);
                }
#line 328 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = !(check_hlds__simplify__simplify_goal_call__succeeded);
#line 313 "simplify_goal_call.m"
              }
#line 313 "simplify_goal_call.m"
          }
#line 313 "simplify_goal_call.m"
      }
#line 344 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 332 "simplify_goal_call.m"
      {
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_16;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__PredPieces_17;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Pieces_18;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Msg_19;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Spec_21;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_31_31;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_38_38;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_39_39;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_43_43;
#line 332 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;

#line 332 "simplify_goal_call.m"
        {
#line 332 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__GoalContext_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_8);
        }
#line 333 "simplify_goal_call.m"
        {
#line 333 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__PredPieces_17 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_10, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__PredId_6);
        }
#line 5022 "check_hlds.simplify.simplify_goal_call.c"
        check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 336 "simplify_goal_call.m"
        {
#line 336 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_31_31 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55, check_hlds__simplify__simplify_goal_call__PredPieces_17, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3]));
        }
#line 335 "simplify_goal_call.m"
        {
#line 335 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__Pieces_18 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_55_55, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]), check_hlds__simplify__simplify_goal_call__V_31_31);
        }
#line 338 "simplify_goal_call.m"
        {
#line 338 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 338 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Pieces_18));
#line 338 "simplify_goal_call.m"
        }
#line 338 "simplify_goal_call.m"
        {
#line 338 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_43_43));
#line 338 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "simplify_goal_call.m"
        }
#line 338 "simplify_goal_call.m"
        {
#line 338 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 338 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_39_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_42_42));
#line 338 "simplify_goal_call.m"
        }
#line 338 "simplify_goal_call.m"
        {
#line 338 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_39_39));
#line 338 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "simplify_goal_call.m"
        }
#line 337 "simplify_goal_call.m"
        {
#line 337 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_19, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_16));
#line 337 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Msg_19, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_38_38));
#line 337 "simplify_goal_call.m"
        }
#line 342 "simplify_goal_call.m"
        {
#line 342 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Msg_19));
#line 342 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "simplify_goal_call.m"
        }
#line 341 "simplify_goal_call.m"
        {
#line 341 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 341 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
#line 341 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_3[0])));
#line 341 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Spec_21, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_52_52));
#line 341 "simplify_goal_call.m"
        }
#line 343 "simplify_goal_call.m"
        {
#line 343 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_call__Spec_21, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23);
#line 343 "simplify_goal_call.m"
          return;
        }
#line 332 "simplify_goal_call.m"
      }
#line 344 "simplify_goal_call.m"
    else
#line 344 "simplify_goal_call.m"
      *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_23 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_22;
#line 310 "simplify_goal_call.m"
  }
#line 305 "simplify_goal_call.m"
}

#line 293 "simplify_goal_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(
#line 293 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Arg_3)
#line 293 "simplify_goal_call.m"
{
#line 295 "simplify_goal_call.m"
  {
#line 295 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 295 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2;
#line 295 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 0)));
#line 295 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 1)));
#line 295 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 2)));
#line 295 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 3)));

#line 295 "simplify_goal_call.m"
    {
#line 295 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 295 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_5_5));
#line 295 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_6_6));
#line 295 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_7_7));
#line 295 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 1));
#line 295 "simplify_goal_call.m"
    }
#line 295 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__HeadVar__2_2;
#line 295 "simplify_goal_call.m"
  }
#line 293 "simplify_goal_call.m"
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
#line 232 "simplify_goal_call.m"
  {
#line 232 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 232 "simplify_goal_call.m"
    {
#line 232 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_42, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_43, check_hlds__simplify__simplify_goal_call__InstMap0_15, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_44, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45);
#line 232 "simplify_goal_call.m"
      return;
    }
#line 232 "simplify_goal_call.m"
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
#line 194 "simplify_goal_call.m"
  {
#line 194 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 194 "simplify_goal_call.m"
    {
#line 194 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalInfo_4, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_37, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_38);
#line 194 "simplify_goal_call.m"
      return;
    }
#line 194 "simplify_goal_call.m"
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
#line 95 "simplify_goal_call.m"
  {
#line 95 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 0)));
#line 95 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_26;
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_27;
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_28;
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleSymName_29;
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_30;
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42;
#line 95 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
#line 96 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 96 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 175 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__ModuleName_31;

#line 97 "simplify_goal_call.m"
    {
#line 97 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_40, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
    }
#line 98 "simplify_goal_call.m"
    {
#line 98 "simplify_goal_call.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__PredInfo_27, &check_hlds__simplify__simplify_goal_call__ProcInfo_28);
    }
#line 100 "simplify_goal_call.m"
    {
#line 100 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_5_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_40, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42);
    }
#line 102 "simplify_goal_call.m"
    {
#line 102 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__IsBuiltin_23, check_hlds__simplify__simplify_goal_call__PredInfo_27, check_hlds__simplify__simplify_goal_call__ProcInfo_28, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__NestedContext_15, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43);
    }
#line 107 "simplify_goal_call.m"
    {
#line 107 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ModuleSymName_29 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
    }
#line 108 "simplify_goal_call.m"
    {
#line 108 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, &check_hlds__simplify__simplify_goal_call__Globals_30);
    }
#line 109 "simplify_goal_call.m"
    {
#line 109 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleSymName_29, &check_hlds__simplify__simplify_goal_call__ModuleName_31);
    }
#line 175 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 133 "simplify_goal_call.m"
      {
#line 133 "simplify_goal_call.m"
        MR_String check_hlds__simplify__simplify_goal_call__PredName_32;
#line 133 "simplify_goal_call.m"
        MR_Integer check_hlds__simplify__simplify_goal_call__ModeNum_33;
#line 133 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_34;
#line 147 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35;
#line 147 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36;

#line 133 "simplify_goal_call.m"
        {
#line 133 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__PredName_32 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
        }
#line 134 "simplify_goal_call.m"
        {
#line 134 "simplify_goal_call.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__ModeNum_33);
        }
#line 135 "simplify_goal_call.m"
        {
#line 135 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__VarTypes_34);
        }
#line 138 "simplify_goal_call.m"
        {
#line 138 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43);
        }
#line 138 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 139 "simplify_goal_call.m"
          {
#line 139 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(check_hlds__simplify__simplify_goal_call__Globals_30, check_hlds__simplify__simplify_goal_call__VarTypes_34, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__ModeNum_33, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36);
          }
#line 147 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 143 "simplify_goal_call.m"
          {
#line 143 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__EvaluatedGoalExpr_35;
#line 144 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__EvaluatedGoalInfo_36;
#line 145 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
#line 146 "simplify_goal_call.m"
            {
#line 146 "simplify_goal_call.m"
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41);
#line 146 "simplify_goal_call.m"
              return;
            }
#line 143 "simplify_goal_call.m"
          }
#line 147 "simplify_goal_call.m"
        else
#line 5405 "check_hlds.simplify.simplify_goal_call.c"
          {
#line 5407 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_62;

#line 475 "simplify_goal_call.m"
            {
#line 475 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_62);
            }
#line 5415 "check_hlds.simplify.simplify_goal_call.c"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5417 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 5419 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
#line 5421 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call__Purity_63;
#line 5423 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64;
#line 5425 "check_hlds.simplify.simplify_goal_call.c"
                MR_Word check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65;

#line 476 "simplify_goal_call.m"
                {
#line 476 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__Purity_63 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo0_13);
                }
#line 480 "simplify_goal_call.m"
                {
#line 480 "simplify_goal_call.m"
                  check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__Purity_63, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45);
                }
#line 483 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64)) == (MR_mktag((MR_Integer) 1)));
#line 483 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 483 "simplify_goal_call.m"
                  {
#line 483 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_64, (MR_Integer) 0)));
#line 484 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_62 == (MR_Integer) 1);
#line 483 "simplify_goal_call.m"
                  }
#line 5450 "check_hlds.simplify.simplify_goal_call.c"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5452 "check_hlds.simplify.simplify_goal_call.c"
                  {
#line 152 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_65;
#line 153 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 152 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
#line 5460 "check_hlds.simplify.simplify_goal_call.c"
                  }
#line 5462 "check_hlds.simplify.simplify_goal_call.c"
                else
#line 169 "simplify_goal_call.m"
                  {
#line 169 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38;
#line 169 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39;
#line 169 "simplify_goal_call.m"
                    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47;

#line 161 "simplify_goal_call.m"
                    {
#line 161 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47);
                    }
#line 169 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 167 "simplify_goal_call.m"
                      {
#line 167 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_47;
#line 167 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_38;
#line 168 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_39;
#line 167 "simplify_goal_call.m"
                      }
#line 169 "simplify_goal_call.m"
                    else
#line 170 "simplify_goal_call.m"
                      {
#line 170 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 171 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 170 "simplify_goal_call.m"
                        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_45_45;
#line 170 "simplify_goal_call.m"
                      }
#line 169 "simplify_goal_call.m"
                  }
#line 5504 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5506 "check_hlds.simplify.simplify_goal_call.c"
            else
#line 5508 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 169 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84;
#line 169 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85;
#line 169 "simplify_goal_call.m"
                MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86;

#line 491 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
#line 161 "simplify_goal_call.m"
                {
#line 161 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_52_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__ModuleName_31, check_hlds__simplify__simplify_goal_call__PredName_32, check_hlds__simplify__simplify_goal_call__Args_22, &check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, &check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86);
                }
#line 169 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 167 "simplify_goal_call.m"
                  {
#line 167 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_47_86;
#line 167 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__ImprovedGoalExpr_84;
#line 168 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__ImprovedGoalInfo_85;
#line 167 "simplify_goal_call.m"
                  }
#line 169 "simplify_goal_call.m"
                else
#line 170 "simplify_goal_call.m"
                  {
#line 170 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 171 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 170 "simplify_goal_call.m"
                    *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
#line 170 "simplify_goal_call.m"
                  }
#line 5548 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5550 "check_hlds.simplify.simplify_goal_call.c"
          }
#line 133 "simplify_goal_call.m"
      }
#line 175 "simplify_goal_call.m"
    else
#line 5556 "check_hlds.simplify.simplify_goal_call.c"
      {
#line 5558 "check_hlds.simplify.simplify_goal_call.c"
        MR_Word check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_78;

#line 475 "simplify_goal_call.m"
        {
#line 475 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_78);
        }
#line 5566 "check_hlds.simplify.simplify_goal_call.c"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5568 "check_hlds.simplify.simplify_goal_call.c"
          {
#line 5570 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call__Purity_79;
#line 5572 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80;
#line 5574 "check_hlds.simplify.simplify_goal_call.c"
            MR_Word check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81;

#line 476 "simplify_goal_call.m"
            {
#line 476 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__Purity_79 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo0_13);
            }
#line 480 "simplify_goal_call.m"
            {
#line 480 "simplify_goal_call.m"
              check_hlds__simplify__common__common_optimise_call_11_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__Purity_79, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41);
            }
#line 483 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80)) == (MR_mktag((MR_Integer) 1)));
#line 483 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 483 "simplify_goal_call.m"
              {
#line 483 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__MaybeAssignsGoalExpr0_80, (MR_Integer) 0)));
#line 484 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__OptDuplicateCalls_78 == (MR_Integer) 1);
#line 483 "simplify_goal_call.m"
              }
#line 5599 "check_hlds.simplify.simplify_goal_call.c"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 5601 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 181 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call___AssignsGoalExpr0_81;
#line 182 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 5607 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5609 "check_hlds.simplify.simplify_goal_call.c"
            else
#line 5611 "check_hlds.simplify.simplify_goal_call.c"
              {
#line 188 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 189 "simplify_goal_call.m"
                *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 5617 "check_hlds.simplify.simplify_goal_call.c"
              }
#line 5619 "check_hlds.simplify.simplify_goal_call.c"
          }
#line 5621 "check_hlds.simplify.simplify_goal_call.c"
        else
#line 5623 "check_hlds.simplify.simplify_goal_call.c"
          {
#line 491 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
#line 491 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_41 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_43_43;
#line 188 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 189 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalInfo_14 = check_hlds__simplify__simplify_goal_call__GoalInfo0_13;
#line 5633 "check_hlds.simplify.simplify_goal_call.c"
          }
#line 5635 "check_hlds.simplify.simplify_goal_call.c"
      }
#line 95 "simplify_goal_call.m"
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
