/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
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



#line 202 "simplify_goal_call.m"
struct check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0_s {
#line 210 "simplify_goal_call.m"
  MR_bool check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded;
#line 254 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ModuleInfo1_40;
#line 254 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ArgModes_44;
#line 291 "simplify_goal_call.m"
  jmp_buf check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__commit_0;
#line 291 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ArgMode_45;
#line 293 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__conv0_ArgMode_45;
#line 202 "simplify_goal_call.m"
};


#line 162 "check_hlds.simplify.simplify_goal_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 649 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_4(
#line 649 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 649 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 640 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_3(
#line 640 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 640 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 639 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_2(
#line 639 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 639 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 622 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_1(
#line 622 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 622 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1);

#line 302 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(
#line 302 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 302 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2);

#line 658 "simplify_goal_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(
#line 658 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Arg_3);

#line 507 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_library_call_int_arity2_8_p_0(
#line 507 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 507 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_10,
#line 507 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_11,
#line 507 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 507 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_48,
#line 507 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_49,
#line 507 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_50,
#line 507 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_51);

#line 397 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5);

#line 291 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_1(
#line 291 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 293 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_3(
#line 293 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 291 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_2(
#line 291 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 291 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_4(
#line 291 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg);

#line 202 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0(
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_15,
#line 202 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_16,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_17,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_18,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_0_71,
#line 202 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_72,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73,
#line 202 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_74,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext0_21,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_22,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_23,
#line 202 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_24,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_75,
#line 202 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_76);

#line 133 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__inequality_goal_11_p_0(
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__TI_12,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_13,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_14,
#line 133 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Inequality_15,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Invert_16,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_17,
#line 133 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_18,
#line 133 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_8,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_19,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_54,
#line 133 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[25][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[5][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[6][1];

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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: call to obsolete"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[2])),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_4[5]))),
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

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "replacement of inequality with call to compare/3"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[15])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "simplify_library_call"))
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 575 "check_hlds.simplify.simplify_goal_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 649 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_4(
#line 649 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 649 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 649 "simplify_goal_call.m"
{
#line 649 "simplify_goal_call.m"
  {
#line 649 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 649 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 649 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2;

#line 649 "simplify_goal_call.m"
    {
#line 649 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 649 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv3_HeadVar__2_2));
#line 649 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 649 "simplify_goal_call.m"
  }
#line 649 "simplify_goal_call.m"
}

#line 640 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_3(
#line 640 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 640 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 640 "simplify_goal_call.m"
{
#line 640 "simplify_goal_call.m"
  {
#line 640 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 640 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 640 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2;

#line 640 "simplify_goal_call.m"
    {
#line 640 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 640 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv2_HeadVar__2_2));
#line 640 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 640 "simplify_goal_call.m"
  }
#line 640 "simplify_goal_call.m"
}

#line 639 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_2(
#line 639 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 639 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 639 "simplify_goal_call.m"
{
#line 639 "simplify_goal_call.m"
  {
#line 639 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 639 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 639 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2;

#line 639 "simplify_goal_call.m"
    {
#line 639 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 639 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv1_HeadVar__2_2));
#line 639 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 639 "simplify_goal_call.m"
  }
#line 639 "simplify_goal_call.m"
}

#line 622 "simplify_goal_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0_1(
#line 622 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__closure_arg,
#line 622 "simplify_goal_call.m"
  MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_1)
#line 622 "simplify_goal_call.m"
{
#line 622 "simplify_goal_call.m"
  {
#line 622 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 622 "simplify_goal_call.m"
    MR_Box check_hlds__simplify__simplify_goal_call__closure = check_hlds__simplify__simplify_goal_call__closure_arg;
#line 622 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2;

#line 622 "simplify_goal_call.m"
    {
#line 622 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__simplify__simplify_goal_call__wrapper_arg_1));
    }
#line 622 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_call__conv0_HeadVar__2_2));
#line 622 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__wrapper_arg_2;
#line 622 "simplify_goal_call.m"
  }
#line 622 "simplify_goal_call.m"
}

#line 67 "simplify_goal_call.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0(
#line 67 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
#line 67 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 67 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_41,
#line 67 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_42,
#line 67 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
#line 67 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
#line 67 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_43,
#line 67 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44)
#line 67 "simplify_goal_call.m"
{
#line 605 "simplify_goal_call.m"
  {
#line 605 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 605 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Attributes_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 605 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 605 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 605 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 605 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ExtraArgs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 605 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__MaybeTraceRuntimeCond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 6)));
#line 605 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Impl_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 7)));
#line 630 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GoalExprPrime_36;
#line 630 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_48_48;
#line 630 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_60_60;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_61_61;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_26;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CallPredInfo_27;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CallModuleSymName_28;
#line 609 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__CallModuleName_29;
#line 609 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__CallPredName_30;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Globals_32;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CrossCompiling_33;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CanCompareCompoundValues_34;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ArgVars_35;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_45_45;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 609 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_47_47;
#line 617 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__CallModeNum_31;

#line 609 "simplify_goal_call.m"
    {
#line 609 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_43);
    }
#line 609 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 609 "simplify_goal_call.m"
      {
#line 610 "simplify_goal_call.m"
        {
#line 610 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_43, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
        }
#line 611 "simplify_goal_call.m"
        {
#line 611 "simplify_goal_call.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, &check_hlds__simplify__simplify_goal_call__CallPredInfo_27);
        }
#line 612 "simplify_goal_call.m"
        {
#line 612 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__CallModuleSymName_28 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__CallPredInfo_27);
        }
#line 613 "simplify_goal_call.m"
        {
#line 613 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__prim_data__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__CallModuleSymName_28, &check_hlds__simplify__simplify_goal_call__CallModuleName_29);
        }
#line 609 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 609 "simplify_goal_call.m"
          {
#line 614 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__ExtraArgs0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 609 "simplify_goal_call.m"
              {
#line 616 "simplify_goal_call.m"
                {
#line 616 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__CallPredName_30 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__CallPredInfo_27);
                }
#line 617 "simplify_goal_call.m"
                {
#line 617 "simplify_goal_call.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__ProcId_21, &check_hlds__simplify__simplify_goal_call__CallModeNum_31);
                }
#line 618 "simplify_goal_call.m"
                {
#line 618 "simplify_goal_call.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, &check_hlds__simplify__simplify_goal_call__Globals_32);
                }
#line 619 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_45_45 = (MR_Integer) 660;
#line 619 "simplify_goal_call.m"
                {
#line 619 "simplify_goal_call.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_call__Globals_32, check_hlds__simplify__simplify_goal_call__V_45_45, &check_hlds__simplify__simplify_goal_call__CrossCompiling_33);
                }
#line 620 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_46_46 = (MR_Integer) 268;
#line 620 "simplify_goal_call.m"
                {
#line 620 "simplify_goal_call.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_call__Globals_32, check_hlds__simplify__simplify_goal_call__V_46_46, &check_hlds__simplify__simplify_goal_call__CanCompareCompoundValues_34);
                }
#line 855 "check_hlds.simplify.simplify_goal_call.c"
                check_hlds__simplify__simplify_goal_call__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 857 "check_hlds.simplify.simplify_goal_call.c"
                check_hlds__simplify__simplify_goal_call__TypeInfo_61_61 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
#line 622 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_47_47 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_3[1];
#line 622 "simplify_goal_call.m"
                {
#line 622 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__ArgVars_35 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_60_60, check_hlds__simplify__simplify_goal_call__TypeInfo_61_61, check_hlds__simplify__simplify_goal_call__V_47_47, check_hlds__simplify__simplify_goal_call__Args0_22);
                }
#line 623 "simplify_goal_call.m"
                {
#line 623 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__CallModuleName_29, check_hlds__simplify__simplify_goal_call__CallPredName_30, check_hlds__simplify__simplify_goal_call__CrossCompiling_33, check_hlds__simplify__simplify_goal_call__CanCompareCompoundValues_34, check_hlds__simplify__simplify_goal_call__ArgVars_35, &check_hlds__simplify__simplify_goal_call__GoalExprPrime_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_41, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_48_48, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_43, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49);
                }
#line 609 "simplify_goal_call.m"
              }
#line 609 "simplify_goal_call.m"
          }
#line 609 "simplify_goal_call.m"
      }
#line 630 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 627 "simplify_goal_call.m"
      {
#line 627 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_42 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_48_48;
#line 627 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExprPrime_36;
#line 628 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 629 "simplify_goal_call.m"
        {
#line 629 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_49_49, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44);
#line 629 "simplify_goal_call.m"
          return;
        }
#line 627 "simplify_goal_call.m"
      }
#line 630 "simplify_goal_call.m"
    else
#line 631 "simplify_goal_call.m"
      {
#line 631 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__BoxPolicy_37;
#line 631 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__Args_38;
#line 631 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__ExtraArgs_39;
#line 631 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr1_40;
#line 645 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_53_53;

#line 631 "simplify_goal_call.m"
        {
#line 631 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__BoxPolicy_37 = parse_tree__prog_data__get_box_policy_1_f_0(check_hlds__simplify__simplify_goal_call__Attributes_19);
        }
#line 637 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__BoxPolicy_37 == (MR_Integer) 1))
#line 638 "simplify_goal_call.m"
          {
#line 638 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 639 "simplify_goal_call.m"
            {
#line 639 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__Args_38 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_64_64, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_64_64, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_3[2], check_hlds__simplify__simplify_goal_call__Args0_22);
            }
#line 640 "simplify_goal_call.m"
            {
#line 640 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__ExtraArgs_39 = mercury__list__map_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_64_64, check_hlds__simplify__simplify_goal_call__TypeCtorInfo_64_64, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_3[3], check_hlds__simplify__simplify_goal_call__ExtraArgs0_23);
            }
#line 641 "simplify_goal_call.m"
            {
#line 641 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__GoalExpr1_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 641 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 641 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_40, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Attributes_19));
#line 641 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_40, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__PredId_20));
#line 641 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_40, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ProcId_21));
#line 641 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_40, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Args_38));
#line 641 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_40, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ExtraArgs_39));
#line 641 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_40, 6) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__MaybeTraceRuntimeCond_24));
#line 641 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr1_40, 7) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Impl_25));
#line 641 "simplify_goal_call.m"
            }
#line 638 "simplify_goal_call.m"
          }
#line 637 "simplify_goal_call.m"
        else
#line 633 "simplify_goal_call.m"
          {
#line 634 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__Args_38 = check_hlds__simplify__simplify_goal_call__Args0_22;
#line 635 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__ExtraArgs_39 = check_hlds__simplify__simplify_goal_call__ExtraArgs0_23;
#line 636 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__GoalExpr1_40 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 633 "simplify_goal_call.m"
          }
#line 645 "simplify_goal_call.m"
        {
#line 645 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_43);
        }
#line 645 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 645 "simplify_goal_call.m"
          {
#line 646 "simplify_goal_call.m"
            {
#line 646 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__V_53_53 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_41);
            }
#line 646 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_53_53 == (MR_Integer) 0);
#line 645 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 647 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__ExtraArgs_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "simplify_goal_call.m"
          }
#line 652 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 649 "simplify_goal_call.m"
          {
#line 649 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__ArgVars_57;

#line 649 "simplify_goal_call.m"
            {
#line 649 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__ArgVars_57 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0], (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_3[4], check_hlds__simplify__simplify_goal_call__Args_38);
            }
#line 650 "simplify_goal_call.m"
            {
#line 650 "simplify_goal_call.m"
              check_hlds__simplify__common__common_optimise_call_10_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__ArgVars_57, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_41, check_hlds__simplify__simplify_goal_call__GoalExpr1_40, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_43, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44);
            }
#line 649 "simplify_goal_call.m"
          }
#line 652 "simplify_goal_call.m"
        else
#line 653 "simplify_goal_call.m"
          {
#line 653 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr1_40;
#line 654 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 654 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_43;
#line 653 "simplify_goal_call.m"
          }
#line 654 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_42 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_41;
#line 631 "simplify_goal_call.m"
      }
#line 605 "simplify_goal_call.m"
  }
#line 67 "simplify_goal_call.m"
}

#line 58 "simplify_goal_call.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(
#line 58 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
#line 58 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 58 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_13,
#line 58 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_4,
#line 58 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
#line 58 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
#line 58 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35,
#line 58 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36)
#line 58 "simplify_goal_call.m"
{
#line 562 "simplify_goal_call.m"
  {
#line 562 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 562 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__GenericCall_19;
#line 562 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_20;
#line 562 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Modes_21;
#line 562 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Det_23;
#line 563 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_22_22;

#line 561 "simplify_goal_call.m"
    *check_hlds__simplify__simplify_goal_call__GoalInfo_4 = check_hlds__simplify__simplify_goal_call__GoalInfo_13;
#line 563 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__GenericCall_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 563 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 563 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Modes_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 563 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 563 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 589 "simplify_goal_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__GenericCall_19)) == (MR_mktag((MR_Integer) 2))))
#line 590 "simplify_goal_call.m"
      {
#line 591 "simplify_goal_call.m"
        {
#line 591 "simplify_goal_call.m"
          check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);
        }
#line 592 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 593 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 590 "simplify_goal_call.m"
      }
#line 589 "simplify_goal_call.m"
    else
#line 589 "simplify_goal_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__GenericCall_19)) == (MR_mktag((MR_Integer) 0))))
#line 565 "simplify_goal_call.m"
        {
#line 565 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Closure_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 0)));
#line 565 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Purity_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 1)));
#line 565 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 2)));
#line 565 "simplify_goal_call.m"
          MR_Integer check_hlds__simplify__simplify_goal_call__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__GenericCall_19, (MR_Integer) 3)));

#line 567 "simplify_goal_call.m"
          {
#line 567 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35);
          }
#line 567 "simplify_goal_call.m"
          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 571 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Purity_25 == (MR_Integer) 0);
#line 575 "simplify_goal_call.m"
          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 573 "simplify_goal_call.m"
            {
#line 573 "simplify_goal_call.m"
              check_hlds__simplify__common__common_optimise_higher_order_call_11_p_0(check_hlds__simplify__simplify_goal_call__Closure_24, check_hlds__simplify__simplify_goal_call__Args_20, check_hlds__simplify__simplify_goal_call__Modes_21, check_hlds__simplify__simplify_goal_call__Det_23, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);
#line 573 "simplify_goal_call.m"
              return;
            }
#line 575 "simplify_goal_call.m"
          else
#line 585 "simplify_goal_call.m"
            {
#line 576 "simplify_goal_call.m"
              {
#line 576 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35);
              }
#line 576 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 578 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__Purity_25 == (MR_Integer) 0);
#line 585 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 583 "simplify_goal_call.m"
                {
#line 582 "simplify_goal_call.m"
                  MR_Word check_hlds__simplify__simplify_goal_call___GoalExpr1_28;

#line 582 "simplify_goal_call.m"
                  {
#line 582 "simplify_goal_call.m"
                    check_hlds__simplify__common__common_optimise_higher_order_call_11_p_0(check_hlds__simplify__simplify_goal_call__Closure_24, check_hlds__simplify__simplify_goal_call__Args_20, check_hlds__simplify__simplify_goal_call__Modes_21, check_hlds__simplify__simplify_goal_call__Det_23, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, &check_hlds__simplify__simplify_goal_call___GoalExpr1_28, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);
                  }
#line 584 "simplify_goal_call.m"
                  *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 583 "simplify_goal_call.m"
                }
#line 585 "simplify_goal_call.m"
              else
#line 586 "simplify_goal_call.m"
                {
#line 586 "simplify_goal_call.m"
                  *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 587 "simplify_goal_call.m"
                  *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 587 "simplify_goal_call.m"
                  *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35;
#line 586 "simplify_goal_call.m"
                }
#line 585 "simplify_goal_call.m"
            }
#line 565 "simplify_goal_call.m"
        }
#line 589 "simplify_goal_call.m"
      else
#line 597 "simplify_goal_call.m"
        {
#line 598 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = check_hlds__simplify__simplify_goal_call__GoalExpr0_11;
#line 599 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__Common_17 = check_hlds__simplify__simplify_goal_call__Common0_16;
#line 599 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35;
#line 597 "simplify_goal_call.m"
        }
#line 562 "simplify_goal_call.m"
  }
#line 58 "simplify_goal_call.m"
}

#line 51 "simplify_goal_call.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_p_0(
#line 51 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__ModuleName_12,
#line 51 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_13,
#line 51 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CrossCompiling_15,
#line 51 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CanCompareCompoundValues_16,
#line 51 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_17,
#line 51 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_18,
#line 51 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_51,
#line 51 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_52,
#line 51 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53,
#line 51 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54)
#line 51 "simplify_goal_call.m"
{
#line 415 "simplify_goal_call.m"
  {
#line 415 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 415 "simplify_goal_call.m"
    if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_12, (MR_String) "int") == 0))
#line 461 "simplify_goal_call.m"
      {
#line 461 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_138_138;
#line 461 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_139_139;

#line 462 "simplify_goal_call.m"
        {
#line 462 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53);
        }
#line 461 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 461 "simplify_goal_call.m"
          {
#line 463 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__CrossCompiling_15 == (MR_Integer) 0);
#line 461 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 461 "simplify_goal_call.m"
              {
#line 488 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 488 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 488 "simplify_goal_call.m"
                  {
#line 488 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_17, (MR_Integer) 0)));
#line 488 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_17, (MR_Integer) 1)));
#line 472 "simplify_goal_call.m"
                    if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_13, (MR_String) "bits_per_int") == 0))
#line 487 "simplify_goal_call.m"
                      {
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__ConstConsId_40;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__RHS_41;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__ModeOfX_42;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__ModeOfConstConsId_43;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__UnifyMode_44;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__How_45;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__IsUnique_46;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__Sub_47;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__Unification_48;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__UnifyMainContext_49;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__UnifyContext_50;
#line 487 "simplify_goal_call.m"
                        MR_Integer check_hlds__simplify__simplify_goal_call__V_56_56;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 487 "simplify_goal_call.m"
                        MR_String check_hlds__simplify__simplify_goal_call__V_61_61;
#line 487 "simplify_goal_call.m"
                        MR_Word check_hlds__simplify__simplify_goal_call__V_62_62;

#line 488 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "simplify_goal_call.m"
                        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 487 "simplify_goal_call.m"
                          {
#line 490 "simplify_goal_call.m"
                            {
#line 490 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__V_56_56 = mercury__int__bits_per_int_0_f_0();
                            }
#line 491 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_57_57 = (MR_Integer) 0;
#line 491 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 490 "simplify_goal_call.m"
                            {
#line 490 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__ConstConsId_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 490 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_40, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_56_56));
#line 490 "simplify_goal_call.m"
                            }
#line 491 "simplify_goal_call.m"
                            {
#line 491 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__RHS_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 491 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_41, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_40));
#line 491 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_41, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_57_57));
#line 491 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_41, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_58_58));
#line 491 "simplify_goal_call.m"
                            }
#line 492 "simplify_goal_call.m"
                            {
#line 492 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__ModeOfX_42 = parse_tree__prog_mode__out_mode_0_f_0();
                            }
#line 493 "simplify_goal_call.m"
                            {
#line 493 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__ModeOfConstConsId_43 = parse_tree__prog_mode__in_mode_0_f_0();
                            }
#line 495 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__How_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 496 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__IsUnique_46 = (MR_Integer) 1;
#line 497 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__Sub_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_61_61 = (MR_String) "simplify_library_call";
#line 501 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "simplify_goal_call.m"
                            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_52 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_51;
#line 502 "simplify_goal_call.m"
                            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53;
#line 494 "simplify_goal_call.m"
                            {
#line 494 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__UnifyMode_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyMode_44, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ModeOfX_42));
#line 494 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UnifyMode_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ModeOfConstConsId_43));
#line 494 "simplify_goal_call.m"
                            }
#line 498 "simplify_goal_call.m"
                            {
#line 498 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__Unification_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 498 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_48, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_139_139));
#line 498 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_40));
#line 498 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_48, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_59_59));
#line 498 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_48, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_60_60));
#line 498 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_48, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__How_45));
#line 498 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_48, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IsUnique_46));
#line 498 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Unification_48, 6) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Sub_47));
#line 498 "simplify_goal_call.m"
                            }
#line 500 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__UnifyMainContext_49 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_4[5]);
#line 501 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__UnifyContext_50 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[24];
#line 502 "simplify_goal_call.m"
                            {
#line 502 "simplify_goal_call.m"
                              MR_Word base;
#line 502 "simplify_goal_call.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 502 "simplify_goal_call.m"
                              *check_hlds__simplify__simplify_goal_call__GoalExpr_18 = base;
#line 502 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_139_139));
#line 502 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_41));
#line 502 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyMode_44));
#line 502 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unification_48));
#line 502 "simplify_goal_call.m"
                              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UnifyContext_50));
#line 502 "simplify_goal_call.m"
                            }
#line 502 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 487 "simplify_goal_call.m"
                          }
#line 487 "simplify_goal_call.m"
                      }
#line 472 "simplify_goal_call.m"
                    else
#line 472 "simplify_goal_call.m"
                      if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_13, (MR_String) "rem_bits_per_int") == 0))
#line 479 "simplify_goal_call.m"
                        {
#line 479 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__V_64_64;
#line 479 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__Y_128;
#line 479 "simplify_goal_call.m"
                          MR_String check_hlds__simplify__simplify_goal_call__Op_130;

#line 480 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_138_138)) == (MR_mktag((MR_Integer) 1)));
#line 480 "simplify_goal_call.m"
                          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 480 "simplify_goal_call.m"
                            {
#line 480 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__Y_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_138_138, (MR_Integer) 0)));
#line 480 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_138_138, (MR_Integer) 1)));
#line 480 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "simplify_goal_call.m"
                              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 479 "simplify_goal_call.m"
                                {
#line 483 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__Op_130 = (MR_String) "unchecked_rem";
#line 484 "simplify_goal_call.m"
                                  {
#line 484 "simplify_goal_call.m"
                                    return check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__simplify_library_call_int_arity2_8_p_0(check_hlds__simplify__simplify_goal_call__Op_130, check_hlds__simplify__simplify_goal_call__V_139_139, check_hlds__simplify__simplify_goal_call__Y_128, check_hlds__simplify__simplify_goal_call__GoalExpr_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_51, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_52, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);
                                  }
#line 479 "simplify_goal_call.m"
                                }
#line 480 "simplify_goal_call.m"
                            }
#line 479 "simplify_goal_call.m"
                        }
#line 472 "simplify_goal_call.m"
                      else
#line 472 "simplify_goal_call.m"
                        if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_13, (MR_String) "quot_bits_per_int") == 0))
#line 465 "simplify_goal_call.m"
                          {
#line 465 "simplify_goal_call.m"
                            MR_String check_hlds__simplify__simplify_goal_call__Op_39;
#line 465 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__V_72_72;
#line 465 "simplify_goal_call.m"
                            MR_Word check_hlds__simplify__simplify_goal_call__Y_123;

#line 466 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_138_138)) == (MR_mktag((MR_Integer) 1)));
#line 466 "simplify_goal_call.m"
                            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 466 "simplify_goal_call.m"
                              {
#line 466 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__Y_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_138_138, (MR_Integer) 0)));
#line 466 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_138_138, (MR_Integer) 1)));
#line 466 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "simplify_goal_call.m"
                                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 465 "simplify_goal_call.m"
                                  {
#line 469 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__Op_39 = (MR_String) "unchecked_quotient";
#line 470 "simplify_goal_call.m"
                                    {
#line 470 "simplify_goal_call.m"
                                      return check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__simplify_library_call_int_arity2_8_p_0(check_hlds__simplify__simplify_goal_call__Op_39, check_hlds__simplify__simplify_goal_call__V_139_139, check_hlds__simplify__simplify_goal_call__Y_123, check_hlds__simplify__simplify_goal_call__GoalExpr_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_51, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_52, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);
                                    }
#line 465 "simplify_goal_call.m"
                                  }
#line 466 "simplify_goal_call.m"
                              }
#line 465 "simplify_goal_call.m"
                          }
#line 472 "simplify_goal_call.m"
                        else
#line 472 "simplify_goal_call.m"
                          if ((strcmp(check_hlds__simplify__simplify_goal_call__PredName_13, (MR_String) "times_bits_per_int") == 0))
#line 473 "simplify_goal_call.m"
                            {
#line 473 "simplify_goal_call.m"
                              MR_Word check_hlds__simplify__simplify_goal_call__V_68_68;
#line 473 "simplify_goal_call.m"
                              MR_Word check_hlds__simplify__simplify_goal_call__Y_125;
#line 473 "simplify_goal_call.m"
                              MR_String check_hlds__simplify__simplify_goal_call__Op_127;

#line 474 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_138_138)) == (MR_mktag((MR_Integer) 1)));
#line 474 "simplify_goal_call.m"
                              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 474 "simplify_goal_call.m"
                                {
#line 474 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__Y_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_138_138, (MR_Integer) 0)));
#line 474 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_138_138, (MR_Integer) 1)));
#line 474 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "simplify_goal_call.m"
                                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 473 "simplify_goal_call.m"
                                    {
#line 475 "simplify_goal_call.m"
                                      check_hlds__simplify__simplify_goal_call__Op_127 = (MR_String) "*";
#line 476 "simplify_goal_call.m"
                                      {
#line 476 "simplify_goal_call.m"
                                        return check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__simplify_library_call_int_arity2_8_p_0(check_hlds__simplify__simplify_goal_call__Op_127, check_hlds__simplify__simplify_goal_call__V_139_139, check_hlds__simplify__simplify_goal_call__Y_125, check_hlds__simplify__simplify_goal_call__GoalExpr_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_51, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_52, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);
                                      }
#line 473 "simplify_goal_call.m"
                                    }
#line 474 "simplify_goal_call.m"
                                }
#line 473 "simplify_goal_call.m"
                            }
#line 472 "simplify_goal_call.m"
                          else
#line 472 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 488 "simplify_goal_call.m"
                  }
#line 461 "simplify_goal_call.m"
              }
#line 461 "simplify_goal_call.m"
          }
#line 461 "simplify_goal_call.m"
      }
#line 415 "simplify_goal_call.m"
    else
#line 415 "simplify_goal_call.m"
      if ((strcmp(check_hlds__simplify__simplify_goal_call__ModuleName_12, (MR_String) "builtin") == 0))
#line 415 "simplify_goal_call.m"
        {
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__TypeInfo_136_136;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_137_137;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Y_21;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__X_22;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Res_23;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_25;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_26;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Type_27;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Context_28;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__CondEq_29;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__CondLt_30;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Builtin_31;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__TypeCtor_32;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__ReturnEq_33;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__ReturnLt_34;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__ReturnGt_35;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__NonLocals_36;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__RestExpr_37;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__Rest_38;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_76_76;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_78_78;
#line 415 "simplify_goal_call.m"
          MR_String check_hlds__simplify__simplify_goal_call__V_79_79;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_80_80;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_81_81;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_82_82;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_83_83;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_84_84;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_85_85;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_86_86;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_87_87;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_88_88;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_89_89;
#line 415 "simplify_goal_call.m"
          MR_String check_hlds__simplify__simplify_goal_call__V_90_90;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_91_91;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_92_92;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_93_93;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_94_94;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_96_96;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_97_97;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_100_100;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_101_101;
#line 415 "simplify_goal_call.m"
          MR_String check_hlds__simplify__simplify_goal_call__V_102_102;
#line 415 "simplify_goal_call.m"
          MR_Integer check_hlds__simplify__simplify_goal_call__V_103_103;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_104_104;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_105_105;
#line 415 "simplify_goal_call.m"
          MR_String check_hlds__simplify__simplify_goal_call__V_106_106;
#line 415 "simplify_goal_call.m"
          MR_Integer check_hlds__simplify__simplify_goal_call__V_107_107;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_108_108;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_109_109;
#line 415 "simplify_goal_call.m"
          MR_String check_hlds__simplify__simplify_goal_call__V_110_110;
#line 415 "simplify_goal_call.m"
          MR_Integer check_hlds__simplify__simplify_goal_call__V_111_111;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_112_112;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_113_113;
#line 415 "simplify_goal_call.m"
          MR_String check_hlds__simplify__simplify_goal_call__V_114_114;
#line 415 "simplify_goal_call.m"
          MR_Integer check_hlds__simplify__simplify_goal_call__V_115_115;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_116_116;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_121_121;
#line 415 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_122_122;
#line 425 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_24_24;

#line 416 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = (strcmp(check_hlds__simplify__simplify_goal_call__PredName_13, (MR_String) "compare") == 0);
#line 415 "simplify_goal_call.m"
          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 415 "simplify_goal_call.m"
            {
#line 424 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__CanCompareCompoundValues_16 == (MR_Integer) 1);
#line 415 "simplify_goal_call.m"
              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 415 "simplify_goal_call.m"
                {
#line 1698 "check_hlds.simplify.simplify_goal_call.c"
                  check_hlds__simplify__simplify_goal_call__TypeInfo_136_136 = (MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_1[0];
#line 425 "simplify_goal_call.m"
                  {
#line 425 "simplify_goal_call.m"
                    mercury__list__reverse_2_p_0(check_hlds__simplify__simplify_goal_call__TypeInfo_136_136, check_hlds__simplify__simplify_goal_call__Args_17, &check_hlds__simplify__simplify_goal_call__V_75_75);
                  }
#line 425 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 425 "simplify_goal_call.m"
                  if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 425 "simplify_goal_call.m"
                    {
#line 425 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__Y_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_75_75, (MR_Integer) 0)));
#line 425 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_75_75, (MR_Integer) 1)));
#line 425 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 425 "simplify_goal_call.m"
                      if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 425 "simplify_goal_call.m"
                        {
#line 425 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__X_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, (MR_Integer) 0)));
#line 425 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, (MR_Integer) 1)));
#line 425 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 425 "simplify_goal_call.m"
                          if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 425 "simplify_goal_call.m"
                            {
#line 425 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__Res_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, (MR_Integer) 0)));
#line 425 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, (MR_Integer) 1)));
#line 426 "simplify_goal_call.m"
                              {
#line 426 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, &check_hlds__simplify__simplify_goal_call__ModuleInfo_25);
                              }
#line 427 "simplify_goal_call.m"
                              {
#line 427 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, &check_hlds__simplify__simplify_goal_call__VarTypes_26);
                              }
#line 428 "simplify_goal_call.m"
                              {
#line 428 "simplify_goal_call.m"
                                parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_26, check_hlds__simplify__simplify_goal_call__Y_21, &check_hlds__simplify__simplify_goal_call__Type_27);
                              }
#line 429 "simplify_goal_call.m"
                              {
#line 429 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_25, check_hlds__simplify__simplify_goal_call__Type_27);
                              }
#line 415 "simplify_goal_call.m"
                              if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 415 "simplify_goal_call.m"
                                {
#line 432 "simplify_goal_call.m"
                                  {
#line 432 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_51);
                                  }
#line 433 "simplify_goal_call.m"
                                  {
#line 433 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_78_78 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                                  }
#line 434 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_79_79 = (MR_String) "builtin_compound_eq";
#line 434 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_80_80 = (MR_Integer) 0;
#line 434 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_81_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 434 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_82_82 = (MR_Integer) 1;
#line 435 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_83_83 = (MR_Integer) 0;
#line 435 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_85_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "simplify_goal_call.m"
                                  {
#line 435 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_87_87, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_21));
#line 435 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_87_87, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_88_88));
#line 435 "simplify_goal_call.m"
                                  }
#line 435 "simplify_goal_call.m"
                                  {
#line 435 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_84_84, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_22));
#line 435 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_84_84, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_87_87));
#line 435 "simplify_goal_call.m"
                                  }
#line 435 "simplify_goal_call.m"
                                  {
#line 435 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_86_86 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                                  }
#line 433 "simplify_goal_call.m"
                                  {
#line 433 "simplify_goal_call.m"
                                    hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__V_78_78, check_hlds__simplify__simplify_goal_call__V_79_79, check_hlds__simplify__simplify_goal_call__V_80_80, check_hlds__simplify__simplify_goal_call__V_81_81, check_hlds__simplify__simplify_goal_call__V_82_82, check_hlds__simplify__simplify_goal_call__V_83_83, check_hlds__simplify__simplify_goal_call__V_84_84, check_hlds__simplify__simplify_goal_call__V_85_85, check_hlds__simplify__simplify_goal_call__V_86_86, check_hlds__simplify__simplify_goal_call__ModuleInfo_25, check_hlds__simplify__simplify_goal_call__Context_28, &check_hlds__simplify__simplify_goal_call__CondEq_29);
                                  }
#line 437 "simplify_goal_call.m"
                                  {
#line 437 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_89_89 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                                  }
#line 438 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_90_90 = (MR_String) "builtin_compound_lt";
#line 438 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_91_91 = (MR_Integer) 0;
#line 438 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 438 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_93_93 = (MR_Integer) 1;
#line 439 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_94_94 = (MR_Integer) 0;
#line 439 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_96_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 439 "simplify_goal_call.m"
                                  {
#line 439 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_97_97 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                                  }
#line 437 "simplify_goal_call.m"
                                  {
#line 437 "simplify_goal_call.m"
                                    hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__V_89_89, check_hlds__simplify__simplify_goal_call__V_90_90, check_hlds__simplify__simplify_goal_call__V_91_91, check_hlds__simplify__simplify_goal_call__V_92_92, check_hlds__simplify__simplify_goal_call__V_93_93, check_hlds__simplify__simplify_goal_call__V_94_94, check_hlds__simplify__simplify_goal_call__V_84_84, check_hlds__simplify__simplify_goal_call__V_96_96, check_hlds__simplify__simplify_goal_call__V_97_97, check_hlds__simplify__simplify_goal_call__ModuleInfo_25, check_hlds__simplify__simplify_goal_call__Context_28, &check_hlds__simplify__simplify_goal_call__CondLt_30);
                                  }
#line 442 "simplify_goal_call.m"
                                  {
#line 442 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__Builtin_31 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                                  }
#line 444 "simplify_goal_call.m"
                                  {
#line 444 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_101_101 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                                  }
#line 444 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_102_102 = (MR_String) "comparison_result";
#line 445 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_103_103 = (MR_Integer) 0;
#line 447 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_106_106 = (MR_String) "=";
#line 447 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_107_107 = (MR_Integer) 0;
#line 444 "simplify_goal_call.m"
                                  {
#line 444 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_100_100, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_101_101));
#line 444 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_100_100, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_102_102));
#line 444 "simplify_goal_call.m"
                                  }
#line 443 "simplify_goal_call.m"
                                  {
#line 443 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 443 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_100_100));
#line 443 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_103_103));
#line 443 "simplify_goal_call.m"
                                  }
#line 447 "simplify_goal_call.m"
                                  {
#line 447 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_31));
#line 447 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_106_106));
#line 447 "simplify_goal_call.m"
                                  }
#line 447 "simplify_goal_call.m"
                                  {
#line 447 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 447 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 447 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_104_104, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_105_105));
#line 447 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_104_104, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_107_107));
#line 447 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_104_104, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_32));
#line 447 "simplify_goal_call.m"
                                  }
#line 446 "simplify_goal_call.m"
                                  {
#line 446 "simplify_goal_call.m"
                                    hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_23, check_hlds__simplify__simplify_goal_call__V_104_104, &check_hlds__simplify__simplify_goal_call__ReturnEq_33);
                                  }
#line 449 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_110_110 = (MR_String) "<";
#line 449 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_111_111 = (MR_Integer) 0;
#line 449 "simplify_goal_call.m"
                                  {
#line 449 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_109_109, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_31));
#line 449 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_109_109, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_110_110));
#line 449 "simplify_goal_call.m"
                                  }
#line 449 "simplify_goal_call.m"
                                  {
#line 449 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 449 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 449 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_108_108, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_109_109));
#line 449 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_108_108, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_111_111));
#line 449 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_108_108, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_32));
#line 449 "simplify_goal_call.m"
                                  }
#line 448 "simplify_goal_call.m"
                                  {
#line 448 "simplify_goal_call.m"
                                    hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_23, check_hlds__simplify__simplify_goal_call__V_108_108, &check_hlds__simplify__simplify_goal_call__ReturnLt_34);
                                  }
#line 451 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_114_114 = (MR_String) ">";
#line 451 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_115_115 = (MR_Integer) 0;
#line 451 "simplify_goal_call.m"
                                  {
#line 451 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_113_113, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Builtin_31));
#line 451 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_113_113, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_114_114));
#line 451 "simplify_goal_call.m"
                                  }
#line 451 "simplify_goal_call.m"
                                  {
#line 451 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 451 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 451 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_112_112, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_113_113));
#line 451 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_112_112, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_115_115));
#line 451 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__V_112_112, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_32));
#line 451 "simplify_goal_call.m"
                                  }
#line 450 "simplify_goal_call.m"
                                  {
#line 450 "simplify_goal_call.m"
                                    hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__simplify_goal_call__Res_23, check_hlds__simplify__simplify_goal_call__V_112_112, &check_hlds__simplify__simplify_goal_call__ReturnGt_35);
                                  }
#line 1973 "check_hlds.simplify.simplify_goal_call.c"
                                  check_hlds__simplify__simplify_goal_call__TypeCtorInfo_137_137 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 453 "simplify_goal_call.m"
                                  {
#line 453 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_116_116, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Res_23));
#line 453 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_116_116, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_84_84));
#line 453 "simplify_goal_call.m"
                                  }
#line 453 "simplify_goal_call.m"
                                  {
#line 453 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__NonLocals_36 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_137_137, check_hlds__simplify__simplify_goal_call__V_116_116);
                                  }
#line 454 "simplify_goal_call.m"
                                  {
#line 454 "simplify_goal_call.m"
                                    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__NonLocals_36, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_51, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_52);
                                  }
#line 456 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_121_121 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 458 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__V_122_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 458 "simplify_goal_call.m"
                                  *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53;
#line 456 "simplify_goal_call.m"
                                  {
#line 456 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__RestExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 456 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 456 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_121_121));
#line 456 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_37, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CondLt_30));
#line 456 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_37, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnLt_34));
#line 456 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__RestExpr_37, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnGt_35));
#line 456 "simplify_goal_call.m"
                                  }
#line 457 "simplify_goal_call.m"
                                  {
#line 457 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__Rest_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 457 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Rest_38, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RestExpr_37));
#line 457 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Rest_38, 1) = ((MR_Box) (*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_52));
#line 457 "simplify_goal_call.m"
                                  }
#line 458 "simplify_goal_call.m"
                                  {
#line 458 "simplify_goal_call.m"
                                    MR_Word base;
#line 458 "simplify_goal_call.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 458 "simplify_goal_call.m"
                                    *check_hlds__simplify__simplify_goal_call__GoalExpr_18 = base;
#line 458 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 458 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_122_122));
#line 458 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CondEq_29));
#line 458 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ReturnEq_33));
#line 458 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Rest_38));
#line 458 "simplify_goal_call.m"
                                  }
#line 458 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 415 "simplify_goal_call.m"
                                }
#line 425 "simplify_goal_call.m"
                            }
#line 425 "simplify_goal_call.m"
                        }
#line 425 "simplify_goal_call.m"
                    }
#line 415 "simplify_goal_call.m"
                }
#line 415 "simplify_goal_call.m"
            }
#line 415 "simplify_goal_call.m"
        }
#line 415 "simplify_goal_call.m"
      else
#line 415 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 415 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 415 "simplify_goal_call.m"
  }
#line 51 "simplify_goal_call.m"
}

#line 302 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(
#line 302 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 302 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2)
#line 302 "simplify_goal_call.m"
{
#line 302 "simplify_goal_call.m"
  {
#line 302 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 302 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_14_14;

#line 302 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 302 "simplify_goal_call.m"
      {
#line 302 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
#line 302 "simplify_goal_call.m"
        (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_14_14));
#line 302 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 302 "simplify_goal_call.m"
      }
#line 302 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 302 "simplify_goal_call.m"
  }
#line 302 "simplify_goal_call.m"
}

#line 658 "simplify_goal_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_1_f_0(
#line 658 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Arg_3)
#line 658 "simplify_goal_call.m"
{
#line 660 "simplify_goal_call.m"
  {
#line 660 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 660 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2;
#line 660 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 0)));
#line 660 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 1)));
#line 660 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 2)));
#line 660 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__Arg_3, (MR_Integer) 3)));

#line 660 "simplify_goal_call.m"
    {
#line 660 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 660 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_5_5));
#line 660 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_6_6));
#line 660 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_7_7));
#line 660 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 1));
#line 660 "simplify_goal_call.m"
    }
#line 660 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__HeadVar__2_2;
#line 660 "simplify_goal_call.m"
  }
#line 658 "simplify_goal_call.m"
}

#line 507 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_library_call_int_arity2_8_p_0(
#line 507 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Op_9,
#line 507 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_10,
#line 507 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_11,
#line 507 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 507 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_48,
#line 507 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_49,
#line 507 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_50,
#line 507 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_51)
#line 507 "simplify_goal_call.m"
{
#line 512 "simplify_goal_call.m"
  {
#line 512 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_83_83;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_15;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_16;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstVar_17;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_18;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_19;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstConsId_20;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstUnification_21;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstRHS_22;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Ground_24;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstMode_25;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstGoalExpr_26;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstNonLocals_27;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__InstMapDelta_28;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstGoalInfo_29;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConstGoal_30;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__IntModuleSymName_31;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpSymName_32;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_33;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredTable_34;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredIds_35;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpPredId_36;
#line 512 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__OpProcIdInt_37;
#line 512 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__OpProcId_38;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpArgs_39;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__MaybeUnifyContext_40;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_41;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoalExpr_42;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpNonLocals0_44;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpNonLocals_45;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoalInfo_46;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__OpGoal_47;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_52_52;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_53_53;
#line 512 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__V_55_55;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_65_65;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_67_67;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_76_76;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_78_78;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_79_79;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_80_80;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_81_81;
#line 512 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_82_82;

#line 513 "simplify_goal_call.m"
    {
#line 513 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_50, &check_hlds__simplify__simplify_goal_call__VarSet0_15);
    }
#line 514 "simplify_goal_call.m"
    {
#line 514 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_50, &check_hlds__simplify__simplify_goal_call__VarTypes0_16);
    }
#line 2278 "check_hlds.simplify.simplify_goal_call.c"
    check_hlds__simplify__simplify_goal_call__TypeCtorInfo_83_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 515 "simplify_goal_call.m"
    {
#line 515 "simplify_goal_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_83_83, &check_hlds__simplify__simplify_goal_call__ConstVar_17, check_hlds__simplify__simplify_goal_call__VarSet0_15, &check_hlds__simplify__simplify_goal_call__VarSet_18);
    }
#line 516 "simplify_goal_call.m"
    {
#line 516 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_52_52 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 516 "simplify_goal_call.m"
    {
#line 516 "simplify_goal_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__ConstVar_17, check_hlds__simplify__simplify_goal_call__V_52_52, check_hlds__simplify__simplify_goal_call__VarTypes0_16, &check_hlds__simplify__simplify_goal_call__VarTypes_19);
    }
#line 517 "simplify_goal_call.m"
    {
#line 517 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_call__VarSet_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_50, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_53_53);
    }
#line 518 "simplify_goal_call.m"
    {
#line 518 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_19, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_53_53, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_51);
    }
#line 520 "simplify_goal_call.m"
    {
#line 520 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_55_55 = mercury__int__bits_per_int_0_f_0();
    }
#line 520 "simplify_goal_call.m"
    {
#line 520 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstConsId_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 520 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConstConsId_20, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_55_55));
#line 520 "simplify_goal_call.m"
    }
#line 521 "simplify_goal_call.m"
    {
#line 521 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstUnification_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 521 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstUnification_21, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_17));
#line 521 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstUnification_21, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_20));
#line 521 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstUnification_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 521 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstUnification_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 521 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstUnification_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 521 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstUnification_21, 5) = ((MR_Box) ((MR_Integer) 1));
#line 521 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstUnification_21, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 521 "simplify_goal_call.m"
    }
#line 523 "simplify_goal_call.m"
    {
#line 523 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstRHS_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 523 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ConstRHS_22, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstConsId_20));
#line 523 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ConstRHS_22, 1) = ((MR_Box) ((MR_Integer) 0));
#line 523 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ConstRHS_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "simplify_goal_call.m"
    }
#line 526 "simplify_goal_call.m"
    {
#line 526 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Ground_24 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 527 "simplify_goal_call.m"
    {
#line 527 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_65_65, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_24));
#line 527 "simplify_goal_call.m"
    }
#line 527 "simplify_goal_call.m"
    {
#line 527 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_67_67, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_24));
#line 527 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_67_67, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Ground_24));
#line 527 "simplify_goal_call.m"
    }
#line 527 "simplify_goal_call.m"
    {
#line 527 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstMode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstMode_25, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_65_65));
#line 527 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstMode_25, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_67_67));
#line 527 "simplify_goal_call.m"
    }
#line 528 "simplify_goal_call.m"
    {
#line 528 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 528 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ConstGoalExpr_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_17));
#line 528 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ConstGoalExpr_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstRHS_22));
#line 528 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ConstGoalExpr_26, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstMode_25));
#line 528 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ConstGoalExpr_26, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstUnification_21));
#line 528 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ConstGoalExpr_26, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[23]));
#line 528 "simplify_goal_call.m"
    }
#line 530 "simplify_goal_call.m"
    {
#line 530 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstNonLocals_27 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_83_83, check_hlds__simplify__simplify_goal_call__ConstVar_17);
    }
#line 531 "simplify_goal_call.m"
    {
#line 531 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__InstMapDelta_28 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__simplify__simplify_goal_call__ConstVar_17);
    }
#line 532 "simplify_goal_call.m"
    {
#line 532 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__simplify_goal_call__ConstNonLocals_27, check_hlds__simplify__simplify_goal_call__InstMapDelta_28, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__simplify_goal_call__ConstGoalInfo_29);
    }
#line 534 "simplify_goal_call.m"
    {
#line 534 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConstGoal_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstGoal_30, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstGoalExpr_26));
#line 534 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ConstGoal_30, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstGoalInfo_29));
#line 534 "simplify_goal_call.m"
    }
#line 536 "simplify_goal_call.m"
    {
#line 536 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__IntModuleSymName_31 = mdbcomp__prim_data__mercury_std_lib_module_name_1_f_0((MR_Word) &check_hlds__simplify__simplify_goal_call_scalar_common_4[4]);
    }
#line 537 "simplify_goal_call.m"
    {
#line 537 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__OpSymName_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IntModuleSymName_31));
#line 537 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpSymName_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Op_9));
#line 537 "simplify_goal_call.m"
    }
#line 538 "simplify_goal_call.m"
    {
#line 538 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_51, &check_hlds__simplify__simplify_goal_call__ModuleInfo_33);
    }
#line 539 "simplify_goal_call.m"
    {
#line 539 "simplify_goal_call.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_33, &check_hlds__simplify__simplify_goal_call__PredTable_34);
    }
#line 540 "simplify_goal_call.m"
    {
#line 540 "simplify_goal_call.m"
      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(check_hlds__simplify__simplify_goal_call__PredTable_34, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__OpSymName_32, (MR_Integer) 2, &check_hlds__simplify__simplify_goal_call__OpPredIds_35);
    }
#line 542 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__OpPredIds_35)) == (MR_mktag((MR_Integer) 1)));
#line 542 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 542 "simplify_goal_call.m"
      {
#line 542 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__OpPredId_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_35, (MR_Integer) 0)));
#line 542 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpPredIds_35, (MR_Integer) 1)));
#line 542 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 512 "simplify_goal_call.m"
          {
#line 543 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__OpProcIdInt_37 = (MR_Integer) 0;
#line 544 "simplify_goal_call.m"
            {
#line 544 "simplify_goal_call.m"
              hlds__hlds_pred__proc_id_to_int_2_p_1(&check_hlds__simplify__simplify_goal_call__OpProcId_38, check_hlds__simplify__simplify_goal_call__OpProcIdInt_37);
            }
#line 545 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__MaybeUnifyContext_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__IsBuiltin_41 = (MR_Integer) 0;
#line 545 "simplify_goal_call.m"
            {
#line 545 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_11));
#line 545 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_77_77, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_78_78));
#line 545 "simplify_goal_call.m"
            }
#line 545 "simplify_goal_call.m"
            {
#line 545 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstVar_17));
#line 545 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_76_76, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_77_77));
#line 545 "simplify_goal_call.m"
            }
#line 545 "simplify_goal_call.m"
            {
#line 545 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__OpArgs_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_39, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_10));
#line 545 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__OpArgs_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_76_76));
#line 545 "simplify_goal_call.m"
            }
#line 548 "simplify_goal_call.m"
            {
#line 548 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__OpGoalExpr_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 548 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__OpGoalExpr_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpPredId_36));
#line 548 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__OpGoalExpr_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpProcId_38));
#line 548 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__OpGoalExpr_42, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpArgs_39));
#line 548 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__OpGoalExpr_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__IsBuiltin_41));
#line 548 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__OpGoalExpr_42, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__MaybeUnifyContext_40));
#line 548 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__OpGoalExpr_42, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpSymName_32));
#line 548 "simplify_goal_call.m"
            }
#line 552 "simplify_goal_call.m"
            {
#line 552 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__OpNonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_48);
            }
#line 553 "simplify_goal_call.m"
            {
#line 553 "simplify_goal_call.m"
              parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_83_83, check_hlds__simplify__simplify_goal_call__ConstVar_17, check_hlds__simplify__simplify_goal_call__OpNonLocals0_44, &check_hlds__simplify__simplify_goal_call__OpNonLocals_45);
            }
#line 554 "simplify_goal_call.m"
            {
#line 554 "simplify_goal_call.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__OpNonLocals_45, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_48, &check_hlds__simplify__simplify_goal_call__OpGoalInfo_46);
            }
#line 557 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_79_79 = (MR_Integer) 0;
#line 557 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_82_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "simplify_goal_call.m"
            *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_49 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_48;
#line 555 "simplify_goal_call.m"
            {
#line 555 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__OpGoal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 555 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__OpGoal_47, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoalExpr_42));
#line 555 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__OpGoal_47, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoalInfo_46));
#line 555 "simplify_goal_call.m"
            }
#line 557 "simplify_goal_call.m"
            {
#line 557 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_81_81, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__OpGoal_47));
#line 557 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_81_81, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_82_82));
#line 557 "simplify_goal_call.m"
            }
#line 557 "simplify_goal_call.m"
            {
#line 557 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_80_80, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConstGoal_30));
#line 557 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_80_80, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_81_81));
#line 557 "simplify_goal_call.m"
            }
#line 557 "simplify_goal_call.m"
            {
#line 557 "simplify_goal_call.m"
              MR_Word base;
#line 557 "simplify_goal_call.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 557 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__GoalExpr_12 = base;
#line 557 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 557 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_79_79));
#line 557 "simplify_goal_call.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_80_80));
#line 557 "simplify_goal_call.m"
            }
#line 557 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 512 "simplify_goal_call.m"
          }
#line 542 "simplify_goal_call.m"
      }
#line 512 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 512 "simplify_goal_call.m"
  }
#line 507 "simplify_goal_call.m"
}

#line 397 "simplify_goal_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1_1,
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2_2,
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3_3,
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CommonInfo_4,
#line 397 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_5)
#line 397 "simplify_goal_call.m"
{
#line 400 "simplify_goal_call.m"
  while (MR_TRUE)
#line 400 "simplify_goal_call.m"
    {
#line 400 "simplify_goal_call.m"
      /* tailcall optimized into a loop */
#line 400 "simplify_goal_call.m"
      {
#line 400 "simplify_goal_call.m"
        MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 400 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "simplify_goal_call.m"
        else
#line 402 "simplify_goal_call.m"
          {
#line 402 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 0)));
#line 402 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__1_1, (MR_Integer) 1)));
#line 402 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__HeadVar_11;
#line 402 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_12;
#line 402 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Mode_13;
#line 402 "simplify_goal_call.m"
            MR_Word check_hlds__simplify__simplify_goal_call__Modes_14;

#line 401 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 401 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 401 "simplify_goal_call.m"
              {
#line 401 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__HeadVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 0)));
#line 401 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__2_2, (MR_Integer) 1)));
#line 401 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 401 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 401 "simplify_goal_call.m"
                  {
#line 401 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__3_3, (MR_Integer) 0)));
#line 401 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_goal_call__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__HeadVar__3_3, (MR_Integer) 1)));
#line 403 "simplify_goal_call.m"
                    {
#line 403 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_5, check_hlds__simplify__simplify_goal_call__Mode_13);
                    }
#line 405 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 404 "simplify_goal_call.m"
                      {
#line 404 "simplify_goal_call.m"
                        check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(check_hlds__simplify__simplify_goal_call__Arg_9, check_hlds__simplify__simplify_goal_call__HeadVar_11, check_hlds__simplify__simplify_goal_call__CommonInfo_4);
                      }
#line 405 "simplify_goal_call.m"
                    else
#line 406 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 402 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 408 "simplify_goal_call.m"
                      {
#line 408 "simplify_goal_call.m"
                        /* direct tailcall eliminated */
#line 408 "simplify_goal_call.m"
                        {
#line 408 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__1__tmp_copy_1 = check_hlds__simplify__simplify_goal_call__Args_10;
#line 408 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_call__HeadVars_12;
#line 408 "simplify_goal_call.m"
                          MR_Word check_hlds__simplify__simplify_goal_call__HeadVar__3__tmp_copy_3 = check_hlds__simplify__simplify_goal_call__Modes_14;

#line 408 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__3_3 = check_hlds__simplify__simplify_goal_call__HeadVar__3__tmp_copy_3;
#line 408 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__HeadVar__2__tmp_copy_2;
#line 408 "simplify_goal_call.m"
                          check_hlds__simplify__simplify_goal_call__HeadVar__1_1 = check_hlds__simplify__simplify_goal_call__HeadVar__1__tmp_copy_1;
#line 408 "simplify_goal_call.m"
                        }
#line 408 "simplify_goal_call.m"
                        continue;
#line 408 "simplify_goal_call.m"
                      }
#line 401 "simplify_goal_call.m"
                  }
#line 401 "simplify_goal_call.m"
              }
#line 402 "simplify_goal_call.m"
          }
#line 400 "simplify_goal_call.m"
        return check_hlds__simplify__simplify_goal_call__succeeded;
#line 400 "simplify_goal_call.m"
      }
#line 400 "simplify_goal_call.m"
      break;
#line 400 "simplify_goal_call.m"
    }
#line 397 "simplify_goal_call.m"
}

#line 291 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_1(
#line 291 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 291 "simplify_goal_call.m"
{
#line 291 "simplify_goal_call.m"
  {
#line 291 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 291 "simplify_goal_call.m"
    MR_builtin_longjmp((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__commit_0, 1);
#line 291 "simplify_goal_call.m"
  }
#line 291 "simplify_goal_call.m"
}

#line 293 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_3(
#line 293 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 293 "simplify_goal_call.m"
{
#line 293 "simplify_goal_call.m"
  {
#line 293 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 293 "simplify_goal_call.m"
    (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ArgMode_45 = ((MR_Word) (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__conv0_ArgMode_45);
#line 293 "simplify_goal_call.m"
    {
#line 293 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_2(check_hlds__simplify__simplify_goal_call__env_ptr);
#line 293 "simplify_goal_call.m"
      return;
    }
#line 293 "simplify_goal_call.m"
  }
#line 293 "simplify_goal_call.m"
}

#line 291 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_2(
#line 291 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 291 "simplify_goal_call.m"
{
#line 291 "simplify_goal_call.m"
  {
#line 291 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 294 "simplify_goal_call.m"
    {
#line 294 "simplify_goal_call.m"
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ModuleInfo1_40, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ArgMode_45);
    }
#line 291 "simplify_goal_call.m"
    if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 291 "simplify_goal_call.m"
      {
#line 297 "simplify_goal_call.m"
        {
#line 297 "simplify_goal_call.m"
          (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ModuleInfo1_40, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ArgMode_45);
        }
#line 296 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded);
#line 296 "simplify_goal_call.m"
        if ((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 296 "simplify_goal_call.m"
          {
#line 296 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_1(check_hlds__simplify__simplify_goal_call__env_ptr);
#line 296 "simplify_goal_call.m"
            return;
          }
#line 291 "simplify_goal_call.m"
      }
#line 291 "simplify_goal_call.m"
  }
#line 291 "simplify_goal_call.m"
}

#line 291 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_4(
#line 291 "simplify_goal_call.m"
  void * check_hlds__simplify__simplify_goal_call__env_ptr_arg)
#line 291 "simplify_goal_call.m"
{
#line 291 "simplify_goal_call.m"
  {
#line 291 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0_s * check_hlds__simplify__simplify_goal_call__env_ptr = (struct check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0_s *) check_hlds__simplify__simplify_goal_call__env_ptr_arg;

#line 291 "simplify_goal_call.m"
    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__commit_0) == 0)
#line 291 "simplify_goal_call.m"
      {
#line 291 "simplify_goal_call.m"
        {
#line 293 "simplify_goal_call.m"
          {
#line 293 "simplify_goal_call.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, &(check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__conv0_ArgMode_45, (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ArgModes_44, check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_3, check_hlds__simplify__simplify_goal_call__env_ptr);
          }
#line 291 "simplify_goal_call.m"
        }
#line 291 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = MR_FALSE;
#line 291 "simplify_goal_call.m"
      }
#line 291 "simplify_goal_call.m"
    else
#line 291 "simplify_goal_call.m"
      (check_hlds__simplify__simplify_goal_call__env_ptr)->check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = MR_TRUE;
#line 291 "simplify_goal_call.m"
  }
#line 291 "simplify_goal_call.m"
}

#line 202 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0(
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__PredId_15,
#line 202 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_16,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_17,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_18,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_0_71,
#line 202 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_72,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73,
#line 202 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_74,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext0_21,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_22,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_23,
#line 202 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_24,
#line 202 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_75,
#line 202 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_76)
#line 202 "simplify_goal_call.m"
{
#line 202 "simplify_goal_call.m"
  {
#line 202 "simplify_goal_call.m"
    struct check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0_s check_hlds__simplify__simplify_goal_call__env;

#line 210 "simplify_goal_call.m"
    {
#line 210 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo0_26;
#line 210 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_27;
#line 210 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo_28;
#line 210 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__GoalContext_29;
#line 210 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_107_107;
#line 210 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_146_146;
#line 210 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148;
#line 210 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149;
#line 217 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__Markers_30;
#line 217 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__ThisPredId_31;
#line 217 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__ThisPredInfo_33;
#line 217 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__ThisPredMarkers_34;
#line 217 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_77_77;
#line 224 "simplify_goal_call.m"
      MR_Integer check_hlds__simplify__simplify_goal_call__V_32_32;
#line 232 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_78_78;
#line 254 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__PredInfo1_41;
#line 254 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__ProcInfo1_42;
#line 254 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__HeadVars_43;
#line 254 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__Purity_47;
#line 254 "simplify_goal_call.m"
      MR_Integer check_hlds__simplify__simplify_goal_call__V_108_108;
#line 254 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_167_167;
#line 254 "simplify_goal_call.m"
      MR_Integer check_hlds__simplify__simplify_goal_call__V_168_168;
#line 268 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_163_163;
#line 268 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_164_164;
#line 302 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_109_109;
#line 302 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_169_169;
#line 302 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_46_46;
#line 335 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_147_147;
#line 386 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo2_54;
#line 386 "simplify_goal_call.m"
      MR_Integer check_hlds__simplify__simplify_goal_call__CallProcId_56;
#line 386 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__CallArgs_57;
#line 386 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__CallPredInfo_61;
#line 386 "simplify_goal_call.m"
      MR_String check_hlds__simplify__simplify_goal_call__CallModuleName_63;
#line 354 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__CallPredId_55;
#line 354 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__CallModuleSymName_62;
#line 355 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_58_58;
#line 355 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
#line 355 "simplify_goal_call.m"
      MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;

#line 211 "simplify_goal_call.m"
      {
#line 211 "simplify_goal_call.m"
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_75, &check_hlds__simplify__simplify_goal_call__ModuleInfo0_26);
      }
#line 212 "simplify_goal_call.m"
      {
#line 212 "simplify_goal_call.m"
        hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo0_26, check_hlds__simplify__simplify_goal_call__PredId_15, check_hlds__simplify__simplify_goal_call__ProcId_16, &check_hlds__simplify__simplify_goal_call__PredInfo_27, &check_hlds__simplify__simplify_goal_call__ProcInfo_28);
      }
#line 214 "simplify_goal_call.m"
      {
#line 214 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__GoalContext_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73);
      }
#line 217 "simplify_goal_call.m"
      {
#line 217 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_75);
      }
#line 217 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 217 "simplify_goal_call.m"
        {
#line 218 "simplify_goal_call.m"
          {
#line 218 "simplify_goal_call.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo_27, &check_hlds__simplify__simplify_goal_call__Markers_30);
          }
#line 219 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_77_77 = (MR_Integer) 4;
#line 219 "simplify_goal_call.m"
          {
#line 219 "simplify_goal_call.m"
            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__Markers_30, check_hlds__simplify__simplify_goal_call__V_77_77);
          }
#line 217 "simplify_goal_call.m"
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 217 "simplify_goal_call.m"
            {
#line 224 "simplify_goal_call.m"
              {
#line 224 "simplify_goal_call.m"
                check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_75, &check_hlds__simplify__simplify_goal_call__ThisPredId_31, &check_hlds__simplify__simplify_goal_call__V_32_32);
              }
#line 225 "simplify_goal_call.m"
              {
#line 225 "simplify_goal_call.m"
                (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_15, check_hlds__simplify__simplify_goal_call__ThisPredId_31);
              }
#line 225 "simplify_goal_call.m"
              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded);
#line 217 "simplify_goal_call.m"
              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 217 "simplify_goal_call.m"
                {
#line 230 "simplify_goal_call.m"
                  {
#line 230 "simplify_goal_call.m"
                    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo0_26, check_hlds__simplify__simplify_goal_call__ThisPredId_31, &check_hlds__simplify__simplify_goal_call__ThisPredInfo_33);
                  }
#line 231 "simplify_goal_call.m"
                  {
#line 231 "simplify_goal_call.m"
                    hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredInfo_33, &check_hlds__simplify__simplify_goal_call__ThisPredMarkers_34);
                  }
#line 232 "simplify_goal_call.m"
                  check_hlds__simplify__simplify_goal_call__V_78_78 = (MR_Integer) 4;
#line 232 "simplify_goal_call.m"
                  {
#line 232 "simplify_goal_call.m"
                    (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__simplify__simplify_goal_call__ThisPredMarkers_34, check_hlds__simplify__simplify_goal_call__V_78_78);
                  }
#line 232 "simplify_goal_call.m"
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded);
#line 217 "simplify_goal_call.m"
                }
#line 217 "simplify_goal_call.m"
            }
#line 217 "simplify_goal_call.m"
        }
#line 247 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 237 "simplify_goal_call.m"
        {
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_165_165;
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__ObsoletePredPieces_35;
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__ObsoletePieces_36;
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__ObsoleteMsg_37;
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__ObsoleteSpec_39;
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_84_84;
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_91_91;
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_92_92;
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_95_95;
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_96_96;
#line 237 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_105_105;

#line 236 "simplify_goal_call.m"
          {
#line 236 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__ObsoletePredPieces_35 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__simplify__simplify_goal_call__ModuleInfo0_26, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__PredId_15);
          }
#line 3099 "check_hlds.simplify.simplify_goal_call.c"
          check_hlds__simplify__simplify_goal_call__TypeCtorInfo_165_165 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 239 "simplify_goal_call.m"
          {
#line 239 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_84_84 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_165_165, check_hlds__simplify__simplify_goal_call__ObsoletePredPieces_35, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3]));
          }
#line 238 "simplify_goal_call.m"
          {
#line 238 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__ObsoletePieces_36 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_165_165, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18]), check_hlds__simplify__simplify_goal_call__V_84_84);
          }
#line 241 "simplify_goal_call.m"
          {
#line 241 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 241 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_96_96, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ObsoletePieces_36));
#line 241 "simplify_goal_call.m"
          }
#line 241 "simplify_goal_call.m"
          {
#line 241 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_95_95, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_96_96));
#line 241 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "simplify_goal_call.m"
          }
#line 241 "simplify_goal_call.m"
          {
#line 241 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_92_92, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 241 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_92_92, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_95_95));
#line 241 "simplify_goal_call.m"
          }
#line 241 "simplify_goal_call.m"
          {
#line 241 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_91_91, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_92_92));
#line 241 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "simplify_goal_call.m"
          }
#line 240 "simplify_goal_call.m"
          {
#line 240 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__ObsoleteMsg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ObsoleteMsg_37, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_29));
#line 240 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ObsoleteMsg_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_91_91));
#line 240 "simplify_goal_call.m"
          }
#line 245 "simplify_goal_call.m"
          {
#line 245 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ObsoleteMsg_37));
#line 245 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "simplify_goal_call.m"
          }
#line 244 "simplify_goal_call.m"
          {
#line 244 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__ObsoleteSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 244 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ObsoleteSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
#line 244 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ObsoleteSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[1])));
#line 244 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__ObsoleteSpec_39, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_105_105));
#line 244 "simplify_goal_call.m"
          }
#line 246 "simplify_goal_call.m"
          {
#line 246 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_call__ObsoleteSpec_39, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_75, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_107_107);
          }
#line 237 "simplify_goal_call.m"
        }
#line 247 "simplify_goal_call.m"
      else
#line 246 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_107_107 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_75;
#line 254 "simplify_goal_call.m"
      {
#line 254 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_107_107);
      }
#line 254 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 254 "simplify_goal_call.m"
        {
#line 258 "simplify_goal_call.m"
          {
#line 258 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_107_107, &check_hlds__simplify__simplify_goal_call__V_167_167, &check_hlds__simplify__simplify_goal_call__V_168_168);
          }
#line 258 "simplify_goal_call.m"
          {
#line 258 "simplify_goal_call.m"
            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_goal_call__PredId_15, check_hlds__simplify__simplify_goal_call__V_167_167);
          }
#line 254 "simplify_goal_call.m"
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 254 "simplify_goal_call.m"
            {
#line 258 "simplify_goal_call.m"
              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__ProcId_16 == check_hlds__simplify__simplify_goal_call__V_168_168);
#line 254 "simplify_goal_call.m"
              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 254 "simplify_goal_call.m"
                {
#line 264 "simplify_goal_call.m"
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__IsBuiltin_18 == (MR_Integer) 0);
#line 264 "simplify_goal_call.m"
                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded);
#line 254 "simplify_goal_call.m"
                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 254 "simplify_goal_call.m"
                    {
#line 268 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext0_21, (MR_Integer) 0)));
#line 268 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext0_21, (MR_Integer) 1)));
#line 268 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__NestedContext0_21, (MR_Integer) 2)));
#line 268 "simplify_goal_call.m"
                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__V_108_108 == (MR_Integer) 0);
#line 254 "simplify_goal_call.m"
                      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 254 "simplify_goal_call.m"
                        {
#line 271 "simplify_goal_call.m"
                          {
#line 271 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_107_107, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ModuleInfo1_40);
                          }
#line 272 "simplify_goal_call.m"
                          {
#line 272 "simplify_goal_call.m"
                            hlds__hlds_module__module_info_pred_proc_info_5_p_0((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ModuleInfo1_40, check_hlds__simplify__simplify_goal_call__PredId_15, check_hlds__simplify__simplify_goal_call__ProcId_16, &check_hlds__simplify__simplify_goal_call__PredInfo1_41, &check_hlds__simplify__simplify_goal_call__ProcInfo1_42);
                          }
#line 274 "simplify_goal_call.m"
                          {
#line 274 "simplify_goal_call.m"
                            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo1_42, &check_hlds__simplify__simplify_goal_call__HeadVars_43);
                          }
#line 275 "simplify_goal_call.m"
                          {
#line 275 "simplify_goal_call.m"
                            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo1_42, &(check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ArgModes_44);
                          }
#line 276 "simplify_goal_call.m"
                          {
#line 276 "simplify_goal_call.m"
                            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_equiv_5_p_0(check_hlds__simplify__simplify_goal_call__Args_17, check_hlds__simplify__simplify_goal_call__HeadVars_43, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ArgModes_44, check_hlds__simplify__simplify_goal_call__Common0_23, (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__ModuleInfo1_40);
                          }
#line 254 "simplify_goal_call.m"
                          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 254 "simplify_goal_call.m"
                            {
#line 291 "simplify_goal_call.m"
                              {
#line 291 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_4(&check_hlds__simplify__simplify_goal_call__env);
                              }
#line 291 "simplify_goal_call.m"
                              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded);
#line 254 "simplify_goal_call.m"
                              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 254 "simplify_goal_call.m"
                                {
#line 302 "simplify_goal_call.m"
                                  {
#line 302 "simplify_goal_call.m"
                                    check_hlds__simplify__simplify_goal_call__V_109_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "simplify_goal_call.m"
                                    MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__V_109_109, 0) = NULL;
#line 302 "simplify_goal_call.m"
                                  }
#line 302 "simplify_goal_call.m"
                                  {
#line 302 "simplify_goal_call.m"
                                    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(check_hlds__simplify__simplify_goal_call__ProcInfo_28, &check_hlds__simplify__simplify_goal_call__V_169_169);
                                  }
#line 302 "simplify_goal_call.m"
                                  {
#line 302 "simplify_goal_call.m"
                                    (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data__eval_method_0_1(check_hlds__simplify__simplify_goal_call__V_109_109, check_hlds__simplify__simplify_goal_call__V_169_169);
                                  }
#line 302 "simplify_goal_call.m"
                                  (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded);
#line 254 "simplify_goal_call.m"
                                  if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 254 "simplify_goal_call.m"
                                    {
#line 306 "simplify_goal_call.m"
                                      {
#line 306 "simplify_goal_call.m"
                                        hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__simplify__simplify_goal_call__PredInfo1_41, &check_hlds__simplify__simplify_goal_call__Purity_47);
                                      }
#line 307 "simplify_goal_call.m"
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__Purity_47 == (MR_Integer) 2);
#line 307 "simplify_goal_call.m"
                                      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = !((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded);
#line 254 "simplify_goal_call.m"
                                    }
#line 254 "simplify_goal_call.m"
                                }
#line 254 "simplify_goal_call.m"
                            }
#line 254 "simplify_goal_call.m"
                        }
#line 254 "simplify_goal_call.m"
                    }
#line 254 "simplify_goal_call.m"
                }
#line 254 "simplify_goal_call.m"
            }
#line 254 "simplify_goal_call.m"
        }
#line 329 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 314 "simplify_goal_call.m"
        {
#line 314 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__InfiniteRecMsg_50;
#line 314 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__InfiniteRecSpec_52;
#line 314 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_144_144;

#line 320 "simplify_goal_call.m"
          {
#line 320 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__InfiniteRecMsg_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__InfiniteRecMsg_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__GoalContext_29));
#line 320 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__InfiniteRecMsg_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
#line 320 "simplify_goal_call.m"
          }
#line 327 "simplify_goal_call.m"
          {
#line 327 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_144_144, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__InfiniteRecMsg_50));
#line 327 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "simplify_goal_call.m"
          }
#line 326 "simplify_goal_call.m"
          {
#line 326 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__InfiniteRecSpec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__InfiniteRecSpec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
#line 326 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__InfiniteRecSpec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[1])));
#line 326 "simplify_goal_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__InfiniteRecSpec_52, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_144_144));
#line 326 "simplify_goal_call.m"
          }
#line 328 "simplify_goal_call.m"
          {
#line 328 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_call__InfiniteRecSpec_52, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_107_107, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_146_146);
          }
#line 314 "simplify_goal_call.m"
        }
#line 329 "simplify_goal_call.m"
      else
#line 328 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_146_146 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_107_107;
#line 335 "simplify_goal_call.m"
      {
#line 335 "simplify_goal_call.m"
        (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_146_146);
      }
#line 335 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 335 "simplify_goal_call.m"
        {
#line 336 "simplify_goal_call.m"
          {
#line 336 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_147_147 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73);
          }
#line 336 "simplify_goal_call.m"
          (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__V_147_147 == (MR_Integer) 0);
#line 335 "simplify_goal_call.m"
        }
#line 340 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 338 "simplify_goal_call.m"
        {
#line 338 "simplify_goal_call.m"
          check_hlds__simplify__common__common_optimise_call_10_p_0(check_hlds__simplify__simplify_goal_call__PredId_15, check_hlds__simplify__simplify_goal_call__ProcId_16, check_hlds__simplify__simplify_goal_call__Args_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_0_71, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148, check_hlds__simplify__simplify_goal_call__Common0_23, check_hlds__simplify__simplify_goal_call__Common_24, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_146_146, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149);
        }
#line 340 "simplify_goal_call.m"
      else
#line 348 "simplify_goal_call.m"
        {
#line 341 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__V_150_150;

#line 341 "simplify_goal_call.m"
          {
#line 341 "simplify_goal_call.m"
            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_146_146);
          }
#line 341 "simplify_goal_call.m"
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 341 "simplify_goal_call.m"
            {
#line 342 "simplify_goal_call.m"
              {
#line 342 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_150_150 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73);
              }
#line 342 "simplify_goal_call.m"
              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_call__V_150_150 == (MR_Integer) 0);
#line 341 "simplify_goal_call.m"
            }
#line 348 "simplify_goal_call.m"
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 346 "simplify_goal_call.m"
            {
#line 346 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call___NewGoalExpr_53;

#line 346 "simplify_goal_call.m"
              {
#line 346 "simplify_goal_call.m"
                check_hlds__simplify__common__common_optimise_call_10_p_0(check_hlds__simplify__simplify_goal_call__PredId_15, check_hlds__simplify__simplify_goal_call__ProcId_16, check_hlds__simplify__simplify_goal_call__Args_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_0_71, &check_hlds__simplify__simplify_goal_call___NewGoalExpr_53, check_hlds__simplify__simplify_goal_call__Common0_23, check_hlds__simplify__simplify_goal_call__Common_24, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_146_146, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149);
              }
#line 346 "simplify_goal_call.m"
            }
#line 348 "simplify_goal_call.m"
          else
#line 349 "simplify_goal_call.m"
            {
#line 349 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__Common_24 = check_hlds__simplify__simplify_goal_call__Common0_23;
#line 349 "simplify_goal_call.m"
              check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_146_146;
#line 349 "simplify_goal_call.m"
            }
#line 349 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_0_71;
#line 348 "simplify_goal_call.m"
        }
#line 354 "simplify_goal_call.m"
      {
#line 354 "simplify_goal_call.m"
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149, &check_hlds__simplify__simplify_goal_call__ModuleInfo2_54);
      }
#line 355 "simplify_goal_call.m"
      (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148)) == (MR_mktag((MR_Integer) 2)));
#line 355 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 355 "simplify_goal_call.m"
        {
#line 355 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__CallPredId_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148, (MR_Integer) 0)));
#line 355 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__CallProcId_56 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148, (MR_Integer) 1)));
#line 355 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__CallArgs_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148, (MR_Integer) 2)));
#line 355 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148, (MR_Integer) 3)));
#line 355 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148, (MR_Integer) 4)));
#line 355 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148, (MR_Integer) 5)));
#line 356 "simplify_goal_call.m"
          {
#line 356 "simplify_goal_call.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo2_54, check_hlds__simplify__simplify_goal_call__CallPredId_55, &check_hlds__simplify__simplify_goal_call__CallPredInfo_61);
          }
#line 357 "simplify_goal_call.m"
          {
#line 357 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__CallModuleSymName_62 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__CallPredInfo_61);
          }
#line 358 "simplify_goal_call.m"
          {
#line 358 "simplify_goal_call.m"
            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = mdbcomp__prim_data__is_std_lib_module_name_2_p_0(check_hlds__simplify__simplify_goal_call__CallModuleSymName_62, &check_hlds__simplify__simplify_goal_call__CallModuleName_63);
          }
#line 355 "simplify_goal_call.m"
        }
#line 386 "simplify_goal_call.m"
      if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 360 "simplify_goal_call.m"
        {
#line 360 "simplify_goal_call.m"
          MR_String check_hlds__simplify__simplify_goal_call__CallPredName_64;
#line 360 "simplify_goal_call.m"
          MR_Integer check_hlds__simplify__simplify_goal_call__CallModeNum_65;
#line 360 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_66;
#line 371 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__GoalExprPrime_67;
#line 371 "simplify_goal_call.m"
          MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_152_152;

#line 360 "simplify_goal_call.m"
          {
#line 360 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__CallPredName_64 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__CallPredInfo_61);
          }
#line 361 "simplify_goal_call.m"
          {
#line 361 "simplify_goal_call.m"
            hlds__hlds_pred__proc_id_to_int_2_p_0(check_hlds__simplify__simplify_goal_call__CallProcId_56, &check_hlds__simplify__simplify_goal_call__CallModeNum_65);
          }
#line 362 "simplify_goal_call.m"
          {
#line 362 "simplify_goal_call.m"
            check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149, &check_hlds__simplify__simplify_goal_call__VarTypes_66);
          }
#line 364 "simplify_goal_call.m"
          {
#line 364 "simplify_goal_call.m"
            (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149);
          }
#line 364 "simplify_goal_call.m"
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 365 "simplify_goal_call.m"
            {
#line 365 "simplify_goal_call.m"
              (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(check_hlds__simplify__simplify_goal_call__CallModuleName_63, check_hlds__simplify__simplify_goal_call__CallPredName_64, check_hlds__simplify__simplify_goal_call__CallModeNum_65, check_hlds__simplify__simplify_goal_call__CallArgs_57, check_hlds__simplify__simplify_goal_call__VarTypes_66, check_hlds__simplify__simplify_goal_call__InstMap0_22, check_hlds__simplify__simplify_goal_call__ModuleInfo2_54, &check_hlds__simplify__simplify_goal_call__GoalExprPrime_67, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_152_152);
            }
#line 371 "simplify_goal_call.m"
          if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 369 "simplify_goal_call.m"
            {
#line 369 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_74 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_152_152;
#line 369 "simplify_goal_call.m"
              *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_72 = check_hlds__simplify__simplify_goal_call__GoalExprPrime_67;
#line 370 "simplify_goal_call.m"
              {
#line 370 "simplify_goal_call.m"
                check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_76);
#line 370 "simplify_goal_call.m"
                return;
              }
#line 369 "simplify_goal_call.m"
            }
#line 371 "simplify_goal_call.m"
          else
#line 383 "simplify_goal_call.m"
            {
#line 383 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_157_157;
#line 383 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_158_158;
#line 383 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__GoalExprPrime_162;
#line 372 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__Globals_68;
#line 372 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__CrossCompiling_69;
#line 372 "simplify_goal_call.m"
              MR_Word check_hlds__simplify__simplify_goal_call__CanCompareCompoundValues_70;

#line 372 "simplify_goal_call.m"
              {
#line 372 "simplify_goal_call.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo2_54, &check_hlds__simplify__simplify_goal_call__Globals_68);
              }
#line 373 "simplify_goal_call.m"
              {
#line 373 "simplify_goal_call.m"
                libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_call__Globals_68, (MR_Integer) 660, &check_hlds__simplify__simplify_goal_call__CrossCompiling_69);
              }
#line 375 "simplify_goal_call.m"
              {
#line 375 "simplify_goal_call.m"
                libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_call__Globals_68, (MR_Integer) 268, &check_hlds__simplify__simplify_goal_call__CanCompareCompoundValues_70);
              }
#line 377 "simplify_goal_call.m"
              {
#line 377 "simplify_goal_call.m"
                (check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__CallModuleName_63, check_hlds__simplify__simplify_goal_call__CallPredName_64, check_hlds__simplify__simplify_goal_call__CrossCompiling_69, check_hlds__simplify__simplify_goal_call__CanCompareCompoundValues_70, check_hlds__simplify__simplify_goal_call__CallArgs_57, &check_hlds__simplify__simplify_goal_call__GoalExprPrime_162, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_157_157, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_158_158);
              }
#line 383 "simplify_goal_call.m"
              if ((check_hlds__simplify__simplify_goal_call__env).check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0_env_0__succeeded)
#line 381 "simplify_goal_call.m"
                {
#line 381 "simplify_goal_call.m"
                  *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_74 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_157_157;
#line 381 "simplify_goal_call.m"
                  *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_72 = check_hlds__simplify__simplify_goal_call__GoalExprPrime_162;
#line 382 "simplify_goal_call.m"
                  {
#line 382 "simplify_goal_call.m"
                    check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_158_158, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_76);
#line 382 "simplify_goal_call.m"
                    return;
                  }
#line 381 "simplify_goal_call.m"
                }
#line 383 "simplify_goal_call.m"
              else
#line 384 "simplify_goal_call.m"
                {
#line 384 "simplify_goal_call.m"
                  *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_76 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149;
#line 384 "simplify_goal_call.m"
                  *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_74 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73;
#line 384 "simplify_goal_call.m"
                  *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_72 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148;
#line 384 "simplify_goal_call.m"
                }
#line 383 "simplify_goal_call.m"
            }
#line 360 "simplify_goal_call.m"
        }
#line 386 "simplify_goal_call.m"
      else
#line 387 "simplify_goal_call.m"
        {
#line 387 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_76 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_149_149;
#line 387 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_74 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_73;
#line 387 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_72 = check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalExpr_148_148;
#line 387 "simplify_goal_call.m"
        }
#line 210 "simplify_goal_call.m"
    }
#line 202 "simplify_goal_call.m"
  }
#line 202 "simplify_goal_call.m"
}

#line 133 "simplify_goal_call.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_call__inequality_goal_11_p_0(
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__TI_12,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__X_13,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Y_14,
#line 133 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__Inequality_15,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Invert_16,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_17,
#line 133 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_18,
#line 133 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_8,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_19,
#line 133 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_54,
#line 133 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55)
#line 133 "simplify_goal_call.m"
{
#line 138 "simplify_goal_call.m"
  {
#line 138 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtorInfo_108_108;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet0_21;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__R_22;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarSet_23;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes0_24;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__VarTypes_25;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Context_26;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_27;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__XInst_28;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__YInst_29;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_30;
#line 138 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ModeNo_31;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Unique_32;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ArgInsts_33;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__BuiltinModule_34;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpGoal0_35;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpExpr_36;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpInfo0_37;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpNonLocals0_38;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpNonLocals_39;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpInfo_40;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__CmpGoal_41;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TypeCtor_42;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ConsId_43;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Bound_44;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UMode_45;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__RHS_46;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UKind_47;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UfyExpr_49;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UfyNonLocals0_50;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UfyNonLocals_51;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UfyInfo_52;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__UfyGoal_53;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_56_56;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_57_57;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_59_59;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_60_60;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_61_61;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_65_65;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_69_69;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_73_73;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_74_74;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_75_75;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_78_78;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_82_82;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_83_83;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_86_86;
#line 138 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_87_87;

#line 137 "simplify_goal_call.m"
    *check_hlds__simplify__simplify_goal_call__GoalInfo_8 = check_hlds__simplify__simplify_goal_call__GoalInfo_17;
#line 140 "simplify_goal_call.m"
    {
#line 140 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_54, &check_hlds__simplify__simplify_goal_call__VarSet0_21);
    }
#line 3785 "check_hlds.simplify.simplify_goal_call.c"
    check_hlds__simplify__simplify_goal_call__TypeCtorInfo_108_108 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 141 "simplify_goal_call.m"
    {
#line 141 "simplify_goal_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_108_108, &check_hlds__simplify__simplify_goal_call__R_22, check_hlds__simplify__simplify_goal_call__VarSet0_21, &check_hlds__simplify__simplify_goal_call__VarSet_23);
    }
#line 142 "simplify_goal_call.m"
    {
#line 142 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_call__VarSet_23, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_54, &check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_56_56);
    }
#line 145 "simplify_goal_call.m"
    {
#line 145 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_56_56, &check_hlds__simplify__simplify_goal_call__VarTypes0_24);
    }
#line 146 "simplify_goal_call.m"
    {
#line 146 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_57_57 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
#line 146 "simplify_goal_call.m"
    {
#line 146 "simplify_goal_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__simplify_goal_call__R_22, check_hlds__simplify__simplify_goal_call__V_57_57, check_hlds__simplify__simplify_goal_call__VarTypes0_24, &check_hlds__simplify__simplify_goal_call__VarTypes_25);
    }
#line 147 "simplify_goal_call.m"
    {
#line 147 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_call__VarTypes_25, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_56_56, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55);
    }
#line 150 "simplify_goal_call.m"
    {
#line 150 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_17);
    }
#line 151 "simplify_goal_call.m"
    {
#line 151 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_61_61, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Y_14));
#line 151 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "simplify_goal_call.m"
    }
#line 151 "simplify_goal_call.m"
    {
#line 151 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_60_60, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__X_13));
#line 151 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_60_60, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_61_61));
#line 151 "simplify_goal_call.m"
    }
#line 151 "simplify_goal_call.m"
    {
#line 151 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__R_22));
#line 151 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_59_59, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_60_60));
#line 151 "simplify_goal_call.m"
    }
#line 151 "simplify_goal_call.m"
    {
#line 151 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Args_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_27, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TI_12));
#line 151 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_27, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_59_59));
#line 151 "simplify_goal_call.m"
    }
#line 153 "simplify_goal_call.m"
    {
#line 153 "simplify_goal_call.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_19, check_hlds__simplify__simplify_goal_call__X_13, &check_hlds__simplify__simplify_goal_call__XInst_28);
    }
#line 154 "simplify_goal_call.m"
    {
#line 154 "simplify_goal_call.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_call__InstMap0_19, check_hlds__simplify__simplify_goal_call__Y_14, &check_hlds__simplify__simplify_goal_call__YInst_29);
    }
#line 155 "simplify_goal_call.m"
    {
#line 155 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(*check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_55, &check_hlds__simplify__simplify_goal_call__ModuleInfo_30);
    }
#line 157 "simplify_goal_call.m"
    {
#line 157 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_30, check_hlds__simplify__simplify_goal_call__XInst_28);
    }
#line 156 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 156 "simplify_goal_call.m"
      {
#line 158 "simplify_goal_call.m"
        {
#line 158 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_30, check_hlds__simplify__simplify_goal_call__YInst_29);
        }
#line 156 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 158 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_31 = (MR_Integer) 1;
#line 156 "simplify_goal_call.m"
        else
#line 158 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_31 = (MR_Integer) 2;
#line 156 "simplify_goal_call.m"
      }
#line 156 "simplify_goal_call.m"
    else
#line 156 "simplify_goal_call.m"
      {
#line 160 "simplify_goal_call.m"
        {
#line 160 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__inst_match__inst_is_unique_2_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_30, check_hlds__simplify__simplify_goal_call__YInst_29);
        }
#line 156 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 160 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_31 = (MR_Integer) 3;
#line 156 "simplify_goal_call.m"
        else
#line 160 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__ModeNo_31 = (MR_Integer) 0;
#line 156 "simplify_goal_call.m"
      }
#line 163 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__Unique_32 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_3[0]);
#line 164 "simplify_goal_call.m"
    {
#line 164 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 164 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_65_65, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__R_22));
#line 164 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_65_65, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_32));
#line 164 "simplify_goal_call.m"
    }
#line 164 "simplify_goal_call.m"
    {
#line 164 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ArgInsts_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_33, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_65_65));
#line 164 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__ArgInsts_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "simplify_goal_call.m"
    }
#line 165 "simplify_goal_call.m"
    {
#line 165 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__BuiltinModule_34 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 167 "simplify_goal_call.m"
    {
#line 167 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 167 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_69_69, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ModeNo_31));
#line 167 "simplify_goal_call.m"
    }
#line 168 "simplify_goal_call.m"
    {
#line 168 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_73_73 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__simplify_goal_call__ArgInsts_33);
    }
#line 166 "simplify_goal_call.m"
    {
#line 166 "simplify_goal_call.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_call__BuiltinModule_34, (MR_String) "compare", (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__V_69_69, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__simplify_goal_call__Args_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_call__V_73_73, check_hlds__simplify__simplify_goal_call__ModuleInfo_30, check_hlds__simplify__simplify_goal_call__Context_26, &check_hlds__simplify__simplify_goal_call__CmpGoal0_35);
    }
#line 170 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__CmpExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal0_35, (MR_Integer) 0)));
#line 170 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__CmpInfo0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal0_35, (MR_Integer) 1)));
#line 171 "simplify_goal_call.m"
    {
#line 171 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__CmpNonLocals0_38 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__CmpInfo0_37);
    }
#line 172 "simplify_goal_call.m"
    {
#line 172 "simplify_goal_call.m"
      parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_108_108, check_hlds__simplify__simplify_goal_call__R_22, check_hlds__simplify__simplify_goal_call__CmpNonLocals0_38, &check_hlds__simplify__simplify_goal_call__CmpNonLocals_39);
    }
#line 173 "simplify_goal_call.m"
    {
#line 173 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__CmpNonLocals_39, check_hlds__simplify__simplify_goal_call__CmpInfo0_37, &check_hlds__simplify__simplify_goal_call__CmpInfo_40);
    }
#line 174 "simplify_goal_call.m"
    {
#line 174 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__CmpGoal_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal_41, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpExpr_36));
#line 174 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__CmpGoal_41, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpInfo_40));
#line 174 "simplify_goal_call.m"
    }
#line 178 "simplify_goal_call.m"
    {
#line 178 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_75_75 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 178 "simplify_goal_call.m"
    {
#line 178 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_74_74, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_75_75));
#line 178 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_74_74, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 178 "simplify_goal_call.m"
    }
#line 177 "simplify_goal_call.m"
    {
#line 177 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__TypeCtor_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 177 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_74_74));
#line 177 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__TypeCtor_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 177 "simplify_goal_call.m"
    }
#line 179 "simplify_goal_call.m"
    {
#line 179 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_78_78, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__BuiltinModule_34));
#line 179 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_78_78, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Inequality_15));
#line 179 "simplify_goal_call.m"
    }
#line 179 "simplify_goal_call.m"
    {
#line 179 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 179 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 179 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_78_78));
#line 179 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_43, 2) = ((MR_Box) ((MR_Integer) 0));
#line 179 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__ConsId_43, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__TypeCtor_42));
#line 179 "simplify_goal_call.m"
    }
#line 181 "simplify_goal_call.m"
    {
#line 181 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 181 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_83_83, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_43));
#line 181 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "simplify_goal_call.m"
    }
#line 181 "simplify_goal_call.m"
    {
#line 181 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_82_82, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_83_83));
#line 181 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "simplify_goal_call.m"
    }
#line 180 "simplify_goal_call.m"
    {
#line 180 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Bound_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 180 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 180 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 180 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 180 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_call__Bound_44, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_82_82));
#line 180 "simplify_goal_call.m"
    }
#line 182 "simplify_goal_call.m"
    {
#line 182 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 182 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_86_86, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Unique_32));
#line 182 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_86_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_44));
#line 182 "simplify_goal_call.m"
    }
#line 182 "simplify_goal_call.m"
    {
#line 182 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 182 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_87_87, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_44));
#line 182 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_87_87, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__Bound_44));
#line 182 "simplify_goal_call.m"
    }
#line 182 "simplify_goal_call.m"
    {
#line 182 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UMode_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 182 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UMode_45, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_86_86));
#line 182 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UMode_45, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_87_87));
#line 182 "simplify_goal_call.m"
    }
#line 183 "simplify_goal_call.m"
    {
#line 183 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__RHS_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 183 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_43));
#line 183 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_46, 1) = ((MR_Box) ((MR_Integer) 0));
#line 183 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__RHS_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "simplify_goal_call.m"
    }
#line 184 "simplify_goal_call.m"
    {
#line 184 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UKind_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 184 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_47, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__R_22));
#line 184 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_47, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__ConsId_43));
#line 184 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_47, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_47, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_47, 4) = ((MR_Box) ((MR_Integer) 0));
#line 184 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UKind_47, 5) = ((MR_Box) ((MR_Integer) 1));
#line 184 "simplify_goal_call.m"
    }
#line 187 "simplify_goal_call.m"
    {
#line 187 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UfyExpr_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 187 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UfyExpr_49, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__R_22));
#line 187 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UfyExpr_49, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__RHS_46));
#line 187 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UfyExpr_49, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UMode_45));
#line 187 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UfyExpr_49, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UKind_47));
#line 187 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__UfyExpr_49, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[16]));
#line 187 "simplify_goal_call.m"
    }
#line 188 "simplify_goal_call.m"
    {
#line 188 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UfyNonLocals0_50 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_call__GoalInfo_17);
    }
#line 189 "simplify_goal_call.m"
    {
#line 189 "simplify_goal_call.m"
      parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__simplify_goal_call__TypeCtorInfo_108_108, check_hlds__simplify__simplify_goal_call__R_22, check_hlds__simplify__simplify_goal_call__UfyNonLocals0_50, &check_hlds__simplify__simplify_goal_call__UfyNonLocals_51);
    }
#line 190 "simplify_goal_call.m"
    {
#line 190 "simplify_goal_call.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_call__UfyNonLocals_51, check_hlds__simplify__simplify_goal_call__GoalInfo_17, &check_hlds__simplify__simplify_goal_call__UfyInfo_52);
    }
#line 191 "simplify_goal_call.m"
    {
#line 191 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__UfyGoal_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 191 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UfyGoal_53, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UfyExpr_49));
#line 191 "simplify_goal_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__UfyGoal_53, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UfyInfo_52));
#line 191 "simplify_goal_call.m"
    }
#line 196 "simplify_goal_call.m"
    if ((check_hlds__simplify__simplify_goal_call__Invert_16 == (MR_Integer) 0))
#line 194 "simplify_goal_call.m"
      {
#line 194 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_105_105;
#line 194 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_106_106;

#line 195 "simplify_goal_call.m"
        {
#line 195 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_106_106, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UfyGoal_53));
#line 195 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 195 "simplify_goal_call.m"
        }
#line 195 "simplify_goal_call.m"
        {
#line 195 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_41));
#line 195 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_105_105, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_106_106));
#line 195 "simplify_goal_call.m"
        }
#line 195 "simplify_goal_call.m"
        {
#line 195 "simplify_goal_call.m"
          MR_Word base;
#line 195 "simplify_goal_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 195 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__GoalExpr_18 = base;
#line 195 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 195 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 195 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_105_105));
#line 195 "simplify_goal_call.m"
        }
#line 194 "simplify_goal_call.m"
      }
#line 196 "simplify_goal_call.m"
    else
#line 197 "simplify_goal_call.m"
      {
#line 197 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_99_99;
#line 197 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_100_100;
#line 197 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_101_101;
#line 197 "simplify_goal_call.m"
        MR_Word check_hlds__simplify__simplify_goal_call__V_102_102 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__simplify_goal_call__UfyGoal_53);

#line 199 "simplify_goal_call.m"
        {
#line 199 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_101_101, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_102_102));
#line 199 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_call__V_101_101, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__UfyInfo_52));
#line 199 "simplify_goal_call.m"
        }
#line 199 "simplify_goal_call.m"
        {
#line 199 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_100_100, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_101_101));
#line 199 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "simplify_goal_call.m"
        }
#line 199 "simplify_goal_call.m"
        {
#line 199 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_99_99, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__CmpGoal_41));
#line 199 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_99_99, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_100_100));
#line 199 "simplify_goal_call.m"
        }
#line 198 "simplify_goal_call.m"
        {
#line 198 "simplify_goal_call.m"
          MR_Word base;
#line 198 "simplify_goal_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 198 "simplify_goal_call.m"
          *check_hlds__simplify__simplify_goal_call__GoalExpr_18 = base;
#line 198 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 198 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 198 "simplify_goal_call.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__V_99_99));
#line 198 "simplify_goal_call.m"
        }
#line 197 "simplify_goal_call.m"
      }
#line 138 "simplify_goal_call.m"
  }
#line 133 "simplify_goal_call.m"
}

#line 67 "simplify_goal_call.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(
#line 67 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
#line 67 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 67 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_41,
#line 67 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_42,
#line 67 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call___NestedContext0_14,
#line 67 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call___InstMap0_15,
#line 67 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
#line 67 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
#line 67 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_43,
#line 67 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44)
#line 67 "simplify_goal_call.m"
{
#line 605 "simplify_goal_call.m"
  {
#line 605 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 605 "simplify_goal_call.m"
    {
#line 605 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_44_32_54_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_41, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_42, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_43, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_44);
#line 605 "simplify_goal_call.m"
      return;
    }
#line 605 "simplify_goal_call.m"
  }
#line 67 "simplify_goal_call.m"
}

#line 58 "simplify_goal_call.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(
#line 58 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
#line 58 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 58 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo_13,
#line 58 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_4,
#line 58 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call___NestedContext0_14,
#line 58 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call___InstMap0_15,
#line 58 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_16,
#line 58 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_17,
#line 58 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35,
#line 58 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36)
#line 58 "simplify_goal_call.m"
{
#line 562 "simplify_goal_call.m"
  {
#line 562 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 562 "simplify_goal_call.m"
    {
#line 562 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__GoalInfo_13, check_hlds__simplify__simplify_goal_call__GoalInfo_4, check_hlds__simplify__simplify_goal_call__Common0_16, check_hlds__simplify__simplify_goal_call__Common_17, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);
#line 562 "simplify_goal_call.m"
      return;
    }
#line 562 "simplify_goal_call.m"
  }
#line 58 "simplify_goal_call.m"
}

#line 51 "simplify_goal_call.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_library_call_11_p_0(
#line 51 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__ModuleName_12,
#line 51 "simplify_goal_call.m"
  MR_String check_hlds__simplify__simplify_goal_call__PredName_13,
#line 51 "simplify_goal_call.m"
  MR_Integer check_hlds__simplify__simplify_goal_call___ModeNum_14,
#line 51 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CrossCompiling_15,
#line 51 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__CanCompareCompoundValues_16,
#line 51 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Args_17,
#line 51 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_18,
#line 51 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_51,
#line 51 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_52,
#line 51 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53,
#line 51 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54)
#line 51 "simplify_goal_call.m"
{
#line 415 "simplify_goal_call.m"
  {
#line 415 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;

#line 415 "simplify_goal_call.m"
    {
#line 415 "simplify_goal_call.m"
      return check_hlds__simplify__simplify_goal_call__succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_p_0(check_hlds__simplify__simplify_goal_call__ModuleName_12, check_hlds__simplify__simplify_goal_call__PredName_13, check_hlds__simplify__simplify_goal_call__CrossCompiling_15, check_hlds__simplify__simplify_goal_call__CanCompareCompoundValues_16, check_hlds__simplify__simplify_goal_call__Args_17, check_hlds__simplify__simplify_goal_call__GoalExpr_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_0_51, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_GoalInfo_52, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_53, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_54);
    }
#line 415 "simplify_goal_call.m"
    return check_hlds__simplify__simplify_goal_call__succeeded;
#line 415 "simplify_goal_call.m"
  }
#line 51 "simplify_goal_call.m"
}

#line 32 "simplify_goal_call.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(
#line 32 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalExpr0_11,
#line 32 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalExpr_12,
#line 32 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__GoalInfo0_13,
#line 32 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__GoalInfo_14,
#line 32 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__NestedContext0_15,
#line 32 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__InstMap0_16,
#line 32 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__Common0_17,
#line 32 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__Common_18,
#line 32 "simplify_goal_call.m"
  MR_Word check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35,
#line 32 "simplify_goal_call.m"
  MR_Word * check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36)
#line 32 "simplify_goal_call.m"
{
#line 105 "simplify_goal_call.m"
  {
#line 105 "simplify_goal_call.m"
    MR_bool check_hlds__simplify__simplify_goal_call__succeeded;
#line 105 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 0)));
#line 105 "simplify_goal_call.m"
    MR_Integer check_hlds__simplify__simplify_goal_call__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 1)));
#line 105 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 2)));
#line 105 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__IsBuiltin_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 3)));
#line 105 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleInfo_26;
#line 105 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__PredInfo_27;
#line 105 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__ModuleName_28;
#line 105 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__Name_29;
#line 106 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 4)));
#line 106 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_call__GoalExpr0_11, (MR_Integer) 5)));
#line 127 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__TI_30;
#line 127 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__X_31;
#line 127 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Y_32;
#line 127 "simplify_goal_call.m"
    MR_String check_hlds__simplify__simplify_goal_call__Inequality_33;
#line 127 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__Invert_34;
#line 116 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_37_37;
#line 116 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_38_38;
#line 116 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_39_39;
#line 116 "simplify_goal_call.m"
    MR_Word check_hlds__simplify__simplify_goal_call__V_42_42;

#line 107 "simplify_goal_call.m"
    {
#line 107 "simplify_goal_call.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_goal_call__ModuleInfo_26);
    }
#line 108 "simplify_goal_call.m"
    {
#line 108 "simplify_goal_call.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_call__ModuleInfo_26, check_hlds__simplify__simplify_goal_call__PredId_20, &check_hlds__simplify__simplify_goal_call__PredInfo_27);
    }
#line 109 "simplify_goal_call.m"
    {
#line 109 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__ModuleName_28 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
    }
#line 110 "simplify_goal_call.m"
    {
#line 110 "simplify_goal_call.m"
      check_hlds__simplify__simplify_goal_call__Name_29 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_call__PredInfo_27);
    }
#line 116 "simplify_goal_call.m"
    check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__Args_22)) == (MR_mktag((MR_Integer) 1)));
#line 116 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 116 "simplify_goal_call.m"
      {
#line 116 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__TI_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_22, (MR_Integer) 0)));
#line 116 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__Args_22, (MR_Integer) 1)));
#line 116 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 116 "simplify_goal_call.m"
        if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 116 "simplify_goal_call.m"
          {
#line 116 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_37_37, (MR_Integer) 0)));
#line 116 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_37_37, (MR_Integer) 1)));
#line 116 "simplify_goal_call.m"
            check_hlds__simplify__simplify_goal_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_call__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 116 "simplify_goal_call.m"
            if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 116 "simplify_goal_call.m"
              {
#line 116 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, (MR_Integer) 0)));
#line 116 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_call__V_38_38, (MR_Integer) 1)));
#line 116 "simplify_goal_call.m"
                check_hlds__simplify__simplify_goal_call__succeeded = (check_hlds__simplify__simplify_goal_call__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 116 "simplify_goal_call.m"
                if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 116 "simplify_goal_call.m"
                  {
#line 117 "simplify_goal_call.m"
                    {
#line 117 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__V_42_42 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                    }
#line 117 "simplify_goal_call.m"
                    {
#line 117 "simplify_goal_call.m"
                      check_hlds__simplify__simplify_goal_call__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__simplify__simplify_goal_call__ModuleName_28, check_hlds__simplify__simplify_goal_call__V_42_42);
                    }
#line 116 "simplify_goal_call.m"
                    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 119 "simplify_goal_call.m"
                      {
#line 119 "simplify_goal_call.m"
                        if ((strcmp(check_hlds__simplify__simplify_goal_call__Name_29, (MR_String) "\100<") == 0))
#line 118 "simplify_goal_call.m"
                          {
#line 118 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__Inequality_33 = (MR_String) "<";
#line 118 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__Invert_34 = (MR_Integer) 0;
#line 118 "simplify_goal_call.m"
                            check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 118 "simplify_goal_call.m"
                          }
#line 119 "simplify_goal_call.m"
                        else
#line 119 "simplify_goal_call.m"
                          if ((strcmp(check_hlds__simplify__simplify_goal_call__Name_29, (MR_String) "\100>") == 0))
#line 121 "simplify_goal_call.m"
                            {
#line 121 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__Inequality_33 = (MR_String) ">";
#line 121 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__Invert_34 = (MR_Integer) 0;
#line 121 "simplify_goal_call.m"
                              check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 121 "simplify_goal_call.m"
                            }
#line 119 "simplify_goal_call.m"
                          else
#line 119 "simplify_goal_call.m"
                            if ((strcmp(check_hlds__simplify__simplify_goal_call__Name_29, (MR_String) "\100=<") == 0))
#line 119 "simplify_goal_call.m"
                              {
#line 119 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__Inequality_33 = (MR_String) ">";
#line 119 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__Invert_34 = (MR_Integer) 1;
#line 119 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 119 "simplify_goal_call.m"
                              }
#line 119 "simplify_goal_call.m"
                            else
#line 119 "simplify_goal_call.m"
                              if ((strcmp(check_hlds__simplify__simplify_goal_call__Name_29, (MR_String) "\100>=") == 0))
#line 120 "simplify_goal_call.m"
                                {
#line 120 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__Inequality_33 = (MR_String) "<";
#line 120 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__Invert_34 = (MR_Integer) 1;
#line 120 "simplify_goal_call.m"
                                  check_hlds__simplify__simplify_goal_call__succeeded = MR_TRUE;
#line 120 "simplify_goal_call.m"
                                }
#line 119 "simplify_goal_call.m"
                              else
#line 119 "simplify_goal_call.m"
                                check_hlds__simplify__simplify_goal_call__succeeded = MR_FALSE;
#line 119 "simplify_goal_call.m"
                      }
#line 116 "simplify_goal_call.m"
                  }
#line 116 "simplify_goal_call.m"
              }
#line 116 "simplify_goal_call.m"
          }
#line 116 "simplify_goal_call.m"
      }
#line 127 "simplify_goal_call.m"
    if (check_hlds__simplify__simplify_goal_call__succeeded)
#line 125 "simplify_goal_call.m"
      {
#line 124 "simplify_goal_call.m"
        {
#line 124 "simplify_goal_call.m"
          check_hlds__simplify__simplify_goal_call__inequality_goal_11_p_0(check_hlds__simplify__simplify_goal_call__TI_30, check_hlds__simplify__simplify_goal_call__X_31, check_hlds__simplify__simplify_goal_call__Y_32, check_hlds__simplify__simplify_goal_call__Inequality_33, check_hlds__simplify__simplify_goal_call__Invert_34, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__GoalInfo_14, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);
        }
#line 126 "simplify_goal_call.m"
        *check_hlds__simplify__simplify_goal_call__Common_18 = check_hlds__simplify__simplify_goal_call__Common0_17;
#line 125 "simplify_goal_call.m"
      }
#line 127 "simplify_goal_call.m"
    else
#line 128 "simplify_goal_call.m"
      {
#line 128 "simplify_goal_call.m"
        check_hlds__simplify__simplify_goal_call__simplify_call_goal_14_p_0(check_hlds__simplify__simplify_goal_call__PredId_20, check_hlds__simplify__simplify_goal_call__ProcId_21, check_hlds__simplify__simplify_goal_call__Args_22, check_hlds__simplify__simplify_goal_call__IsBuiltin_23, check_hlds__simplify__simplify_goal_call__GoalExpr0_11, check_hlds__simplify__simplify_goal_call__GoalExpr_12, check_hlds__simplify__simplify_goal_call__GoalInfo0_13, check_hlds__simplify__simplify_goal_call__GoalInfo_14, check_hlds__simplify__simplify_goal_call__NestedContext0_15, check_hlds__simplify__simplify_goal_call__InstMap0_16, check_hlds__simplify__simplify_goal_call__Common0_17, check_hlds__simplify__simplify_goal_call__Common_18, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_call__STATE_VARIABLE_Info_36);
#line 128 "simplify_goal_call.m"
        return;
      }
#line 105 "simplify_goal_call.m"
  }
#line 32 "simplify_goal_call.m"
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
