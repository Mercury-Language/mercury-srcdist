/*
** Automatically generated from `det_check_goal.m'
** by the Mercury compiler,
** version rotd-2025-09-19
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


// :- module check_hlds.det_check_goal.
// :- implementation.

/*
INIT mercury__check_hlds__det_check_goal__init
ENDINIT
*/

#include "check_hlds.det_check_goal.mih"


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
#include "edit_seq.mih"
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
#include "check_hlds.det_check_switch.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_sort.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_check_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static MR_Word MR_CALL 
check_hlds__det_check_goal__IntroducedFrom__func__det_diagnose_goal_expr__204__1_2_f_0(
  MR_Word LaterDisjPieces_65,
  MR_Word LambdaHeadVar__1_203);

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_orelse_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7);

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_switch_arms_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_DetInfo_0_8,
  MR_Word * STATE_VARIABLE_DetInfo_9);

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_disj_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_DisjunctsWithSoln_0_7,
  MR_Word * STATE_VARIABLE_DisjunctsWithSoln_8,
  MR_Word STATE_VARIABLE_DetInfo_0_9,
  MR_Word * STATE_VARIABLE_DetInfo_10);

static MR_Box MR_CALL 
check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0(
  MR_Word GoalExpr_10,
  MR_Word GoalInfo_11,
  MR_Word InstMap0_12,
  MR_Word Desired_13,
  MR_Word Actual_14,
  MR_Word SwitchContexts_15,
  MR_Word STATE_VARIABLE_DetInfo_0_131,
  MR_Word * STATE_VARIABLE_DetInfo_132,
  MR_Word * MsgGroups_17);

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_goal_7_p_0(
  MR_Word InstMap0_8,
  MR_Word SwitchContexts_9,
  MR_Word Desired_10,
  MR_Word Goal_11,
  MR_Word * MsgGroups_12,
  MR_Word STATE_VARIABLE_DetInfo_0_18,
  MR_Word * STATE_VARIABLE_DetInfo_19);

static void MR_CALL 
check_hlds__det_check_goal__det_report_call_context_7_p_0(
  MR_Word CallUnifyContext_8,
  MR_Word DetInfo_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word * UnifyPieces_12,
  MR_Word * SurroundingUnifyContextPieces_13,
  MR_Word * GoalPieces_14);

static void MR_CALL 
check_hlds__det_check_goal__det_report_unify_context_8_p_0(
  MR_Word STATE_VARIABLE_First_0_27,
  MR_Word Last_10,
  MR_Word UnifyContext_11,
  MR_Word DetInfo_12,
  MR_Word LHSVar_13,
  MR_Word RHS_14,
  MR_Word * SurroundingContextPieces_15,
  MR_Word * MainPieces_16);

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_primitive_goal_3_p_0(
  MR_Word Desired_4,
  MR_Word Actual_5,
  MR_Word * Pieces_6);


static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_1[58][2];

static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_2[3][1];

static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_4[1][6];


struct check_hlds__det_check_goal__vector_common_type_3_0_s {
  const MR_Word check_hlds__det_check_goal__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct check_hlds__det_check_goal__vector_common_type_3_0_s check_hlds__det_check_goal_vector_common_3[4];



static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_1[58][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Determinism declaration not satisfied."))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Desired determinism is"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with solutions."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Disjunction has more than one disjunct"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This later disjunct"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may have a solution."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Negated goal can succeed."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The switch on"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not cover"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can fail"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can succeed"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can succeed more than once"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "desired determinism is"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has unknown determinism problem;"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "while actual determinism is"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type-specific unify predicate\?)"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(or explicit call to a"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Some weird unification"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This call to"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 10)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_check_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};


static /* final */ const struct check_hlds__det_check_goal__vector_common_type_3_0_s check_hlds__det_check_goal_vector_common_3[4] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[29])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[31])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[29])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[29])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_check_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static MR_Word MR_CALL 
check_hlds__det_check_goal__IntroducedFrom__func__det_diagnose_goal_expr__204__1_2_f_0(
  MR_Word LaterDisjPieces_65,
  MR_Word LambdaHeadVar__1_203)
{
  MR_Word LambdaHeadVar__2_204;

  {
    LambdaHeadVar__2_204 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_204, 0) = ((MR_Box) (LambdaHeadVar__1_203));
    MR_hl_field(0, LambdaHeadVar__2_204, 1) = ((MR_Box) (LaterDisjPieces_65));
  }
  return LambdaHeadVar__2_204;
}

void MR_CALL 
check_hlds__det_check_goal__det_diagnose_goal_get_msgs_6_p_0(
  MR_Word InstMap0_7,
  MR_Word Desired_8,
  MR_Word Goal_9,
  MR_Word * Msgs_10,
  MR_Word STATE_VARIABLE_DetInfo_0_15,
  MR_Word * STATE_VARIABLE_DetInfo_16)
{
  MR_Word MsgGroups_13;
  MR_Word SortedMsgGroups_14;
  MR_Word GoalExpr_17 = ((MR_Word) ((MR_hl_field(0, Goal_9, 0))));
  MR_Word GoalInfo_18 = ((MR_Word) ((MR_hl_field(0, Goal_9, 1))));
  MR_Word Actual_19;
  MR_Word CompareResult_20;

  Actual_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_18);
  parse_tree__prog_detism__compare_determinisms_3_p_0(Desired_8, Actual_19, &CompareResult_20);
  switch (CompareResult_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 0:
      check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0(GoalExpr_17, GoalInfo_18, InstMap0_7, Desired_8, Actual_19, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_DetInfo_0_15, STATE_VARIABLE_DetInfo_16, &MsgGroups_13);
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MsgGroups_13 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_DetInfo_16 = STATE_VARIABLE_DetInfo_0_15;
      }
      break;
  }
  parse_tree__error_sort__sort_error_msg_groups_2_p_0(MsgGroups_13, &SortedMsgGroups_14);
  *Msgs_10 = parse_tree__error_sort__flatten_error_msg_groups_1_f_0(SortedMsgGroups_14);
}

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_orelse_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_7 = STATE_VARIABLE_DetInfo_0_6;
  }
  else
  {
    MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word HeadMsgGroups_21;
    MR_Word TailMsgGroups_22;
    MR_Word STATE_VARIABLE_DetInfo_1_25;
    MR_Word GoalExpr_27 = ((MR_Word) ((MR_hl_field(0, Goal_17, 0))));
    MR_Word GoalInfo_28 = ((MR_Word) ((MR_hl_field(0, Goal_17, 1))));
    MR_Word Actual_29;
    MR_Word CompareResult_30;

    Actual_29 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_28);
    parse_tree__prog_detism__compare_determinisms_3_p_0(HeadVar__3_3, Actual_29, &CompareResult_30);
    switch (CompareResult_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0(GoalExpr_27, GoalInfo_28, HeadVar__1_1, HeadVar__3_3, Actual_29, HeadVar__2_2, STATE_VARIABLE_DetInfo_0_6, &STATE_VARIABLE_DetInfo_1_25, &HeadMsgGroups_21);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          HeadMsgGroups_21 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_1_25 = STATE_VARIABLE_DetInfo_0_6;
        }
        break;
    }
    check_hlds__det_check_goal__det_diagnose_orelse_goals_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goals_18, &TailMsgGroups_22, STATE_VARIABLE_DetInfo_1_25, STATE_VARIABLE_DetInfo_7);
    *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), HeadMsgGroups_21, TailMsgGroups_22);
  }
}

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_switch_arms_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_DetInfo_0_8,
  MR_Word * STATE_VARIABLE_DetInfo_9)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_9 = STATE_VARIABLE_DetInfo_0_8;
  }
  else
  {
    MR_Word Case_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
    MR_Word Cases_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
    MR_Word MainConsId_27 = ((MR_Word) ((MR_hl_field(0, Case_23, 0))));
    MR_Word OtherConsIds_28 = ((MR_Word) ((MR_hl_field(0, Case_23, 1))));
    MR_Word Goal_29 = ((MR_Word) ((MR_hl_field(0, Case_23, 2))));
    MR_Word GoalSeq_30;
    MR_Word MainMatch_31;
    MR_Word OtherMatches_32;
    MR_Word NewSwitchContext_33;
    MR_Word SwitchContexts1_34;
    MR_Word ModuleInfo0_35;
    MR_Word InstMap1_36;
    MR_Word ModuleInfo_37;
    MR_Word HeadMsgGroups_38;
    MR_Word TailMsgGroups_39;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_DetInfo_1_44;
    MR_Word STATE_VARIABLE_DetInfo_2_45;
    MR_Word GoalExpr_47;
    MR_Word GoalInfo_48;
    MR_Word Actual_49;
    MR_Word CompareResult_50;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_29, &GoalSeq_30);
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (HeadVar__4_4));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    check_hlds__det_check_switch__find_switch_var_matches_6_p_0(GoalSeq_30, Var_42, MainConsId_27, OtherConsIds_28, &MainMatch_31, &OtherMatches_32);
    {
      NewSwitchContext_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewSwitchContext_33, 0) = ((MR_Box) (HeadVar__4_4));
      MR_hl_field(0, NewSwitchContext_33, 1) = ((MR_Box) (MainMatch_31));
      MR_hl_field(0, NewSwitchContext_33, 2) = ((MR_Box) (OtherMatches_32));
    }
    {
      SwitchContexts1_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SwitchContexts1_34, 0) = ((MR_Box) (NewSwitchContext_33));
      MR_hl_field(1, SwitchContexts1_34, 1) = ((MR_Box) (HeadVar__2_2));
    }
    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_8, &ModuleInfo0_35);
    hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__4_4, HeadVar__5_5, MainConsId_27, OtherConsIds_28, HeadVar__1_1, &InstMap1_36, ModuleInfo0_35, &ModuleInfo_37);
    check_hlds__det_util__det_info_set_module_info_3_p_0(ModuleInfo_37, STATE_VARIABLE_DetInfo_0_8, &STATE_VARIABLE_DetInfo_1_44);
    GoalExpr_47 = ((MR_Word) ((MR_hl_field(0, Goal_29, 0))));
    GoalInfo_48 = ((MR_Word) ((MR_hl_field(0, Goal_29, 1))));
    Actual_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_48);
    parse_tree__prog_detism__compare_determinisms_3_p_0(HeadVar__3_3, Actual_49, &CompareResult_50);
    switch (CompareResult_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0(GoalExpr_47, GoalInfo_48, InstMap1_36, HeadVar__3_3, Actual_49, SwitchContexts1_34, STATE_VARIABLE_DetInfo_1_44, &STATE_VARIABLE_DetInfo_2_45, &HeadMsgGroups_38);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          HeadMsgGroups_38 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_2_45 = STATE_VARIABLE_DetInfo_1_44;
        }
        break;
    }
    check_hlds__det_check_goal__det_diagnose_switch_arms_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, Cases_24, &TailMsgGroups_39, STATE_VARIABLE_DetInfo_2_45, STATE_VARIABLE_DetInfo_9);
    *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), HeadMsgGroups_38, TailMsgGroups_39);
  }
}

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_disj_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_DisjunctsWithSoln_0_7,
  MR_Word * STATE_VARIABLE_DisjunctsWithSoln_8,
  MR_Word STATE_VARIABLE_DetInfo_0_9,
  MR_Word * STATE_VARIABLE_DetInfo_10)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_10 = STATE_VARIABLE_DetInfo_0_9;
    *STATE_VARIABLE_DisjunctsWithSoln_8 = STATE_VARIABLE_DisjunctsWithSoln_0_7;
  }
  else
  {
    MR_Word Goal_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word Goals_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word ActualCanFail_30;
    MR_Word DesiredCanFail_32;
    MR_Word DesiredSolns_33;
    MR_Word ClauseCanFail_34;
    MR_Word ClauseDesired_35;
    MR_Word HeadMsgGroups_36;
    MR_Word GoalInfo_38;
    MR_Word TailMsgGroups_42;
    MR_Word STATE_VARIABLE_DetInfo_1_47;
    MR_Word STATE_VARIABLE_DisjunctsWithSoln_1_49;
    MR_Word GoalExpr_53;
    MR_Word GoalInfo_54;
    MR_Word Actual_55;
    MR_Word CompareResult_56;
    MR_Word Var_31;
    MR_Word GoalDetism_39;
    MR_Word Var_52;
    MR_Word Var_40;

    parse_tree__prog_data__determinism_components_3_p_0(HeadVar__4_4, &ActualCanFail_30, &Var_31);
    parse_tree__prog_data__determinism_components_3_p_0(HeadVar__3_3, &DesiredCanFail_32, &DesiredSolns_33);
    succeeded = (DesiredCanFail_32 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (ActualCanFail_30 == (MR_Integer) 0);
    if (succeeded)
      ClauseCanFail_34 = (MR_Integer) 1;
    else
      ClauseCanFail_34 = (MR_Integer) 0;
    parse_tree__prog_data__determinism_components_3_p_1(&ClauseDesired_35, ClauseCanFail_34, DesiredSolns_33);
    GoalExpr_53 = ((MR_Word) ((MR_hl_field(0, Goal_25, 0))));
    GoalInfo_54 = ((MR_Word) ((MR_hl_field(0, Goal_25, 1))));
    Actual_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_54);
    parse_tree__prog_detism__compare_determinisms_3_p_0(ClauseDesired_35, Actual_55, &CompareResult_56);
    switch (CompareResult_56) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0(GoalExpr_53, GoalInfo_54, HeadVar__1_1, ClauseDesired_35, Actual_55, HeadVar__2_2, STATE_VARIABLE_DetInfo_0_9, &STATE_VARIABLE_DetInfo_1_47, &HeadMsgGroups_36);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          HeadMsgGroups_36 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_1_47 = STATE_VARIABLE_DetInfo_0_9;
        }
        break;
    }
    GoalInfo_38 = ((MR_Word) ((MR_hl_field(0, Goal_25, 1))));
    GoalDetism_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_38);
    parse_tree__prog_data__determinism_components_3_p_0(GoalDetism_39, &Var_40, &Var_52);
    succeeded = ((MR_Integer) 0 == Var_52);
    if (succeeded)
      STATE_VARIABLE_DisjunctsWithSoln_1_49 = STATE_VARIABLE_DisjunctsWithSoln_0_7;
    else
    {
      MR_Word GoalContext_41;

      GoalContext_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_38);
      mercury__bag__insert_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (GoalContext_41)), STATE_VARIABLE_DisjunctsWithSoln_0_7, &STATE_VARIABLE_DisjunctsWithSoln_1_49);
    }
    check_hlds__det_check_goal__det_diagnose_disj_10_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Goals_26, &TailMsgGroups_42, STATE_VARIABLE_DisjunctsWithSoln_1_49, STATE_VARIABLE_DisjunctsWithSoln_8, STATE_VARIABLE_DetInfo_1_47, STATE_VARIABLE_DetInfo_10);
    *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), HeadMsgGroups_36, TailMsgGroups_42);
  }
}

static MR_Box MR_CALL 
check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_204;

  conv0_LambdaHeadVar__2_204 = check_hlds__det_check_goal__IntroducedFrom__func__det_diagnose_goal_expr__204__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_204));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0(
  MR_Word GoalExpr_10,
  MR_Word GoalInfo_11,
  MR_Word InstMap0_12,
  MR_Word Desired_13,
  MR_Word Actual_14,
  MR_Word SwitchContexts_15,
  MR_Word STATE_VARIABLE_DetInfo_0_131,
  MR_Word * STATE_VARIABLE_DetInfo_132,
  MR_Word * MsgGroups_17)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DesiredCanFail_106;
        MR_Word ActualCanFail_107;
        MR_Word ActualSolns_108;
        MR_Word DesiredSolns_310;

        parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &DesiredCanFail_106, &DesiredSolns_310);
        parse_tree__prog_data__determinism_components_3_p_0(Actual_14, &ActualCanFail_107, &ActualSolns_108);
        succeeded = (DesiredCanFail_106 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (ActualCanFail_107 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Var_258;
          MR_Word Var_259;
          MR_Word Context_300;

          Context_300 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          {
            Var_259 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_259, 0) = ((MR_Box) (Context_300));
            MR_hl_field(0, Var_259, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[15])));
          }
          {
            Var_258 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_258, 0) = ((MR_Box) (Var_259));
            MR_hl_field(0, Var_258, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MsgGroups_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_258));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          succeeded = (DesiredSolns_310 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (ActualSolns_108 != (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_267;
            MR_Word Var_268;
            MR_Word Context_302;

            Context_302 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            {
              Var_268 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_268, 0) = ((MR_Box) (Context_302));
              MR_hl_field(0, Var_268, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[17])));
            }
            {
              Var_267 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_267, 0) = ((MR_Box) (Var_268));
              MR_hl_field(0, Var_267, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MsgGroups_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_267));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
            *MsgGroups_17 = (MR_Word) ((MR_Unsigned) 0U);
        }
        *STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 0))));
        MR_Word RHS_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 1))));
        MR_Word UnifyContext_22 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 4))));
        MR_Word Context_23;
        MR_Word SurroundingContextPieces_24;
        MR_Word GoalPieces_25;
        MR_Word ProblemPieces_26;
        MR_Word Pieces_27;
        MR_Word Var_135;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_141;

        Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
        check_hlds__det_check_goal__det_report_unify_context_8_p_0((MR_Integer) 0, (MR_Integer) 0, UnifyContext_22, STATE_VARIABLE_DetInfo_0_131, LHS_18, RHS_19, &SurroundingContextPieces_24, &GoalPieces_25);
        check_hlds__det_check_goal__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_26);
        Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_25, ProblemPieces_26);
        Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[18])), Var_139);
        Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SurroundingContextPieces_24, Var_135);
        {
          Var_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_141, 0) = ((MR_Box) (Context_23));
          MR_hl_field(0, Var_141, 1) = ((MR_Box) (Pieces_27));
        }
        {
          Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_140, 0) = ((MR_Box) (Var_141));
          MR_hl_field(0, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MsgGroups_17 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_140));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 0))));
        MR_Integer ProcId_29 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_10, 1))));
        MR_Word CallContext_32 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 4))));
        MR_Word AnyUnifyPieces_34;
        MR_Word Var_144;
        MR_Word Var_145;
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_151;
        MR_Word Context_278;
        MR_Word SurroundingContextPieces_279;
        MR_Word GoalPieces_280;
        MR_Word ProblemPieces_281;
        MR_Word Pieces_282;

        Context_278 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
        check_hlds__det_check_goal__det_report_call_context_7_p_0(CallContext_32, STATE_VARIABLE_DetInfo_0_131, PredId_28, ProcId_29, &AnyUnifyPieces_34, &SurroundingContextPieces_279, &GoalPieces_280);
        check_hlds__det_check_goal__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_281);
        Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_280, ProblemPieces_281);
        Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[18])), Var_149);
        Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SurroundingContextPieces_279, Var_145);
        Pieces_282 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AnyUnifyPieces_34, Var_144);
        {
          Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_151, 0) = ((MR_Box) (Context_278));
          MR_hl_field(0, Var_151, 1) = ((MR_Box) (Pieces_282));
        }
        {
          Var_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_150, 0) = ((MR_Box) (Var_151));
          MR_hl_field(0, Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MsgGroups_17 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_150));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
            MR_Word VarTable_40;
            MR_Word VarNameSrc_41;
            MR_Word GenericCallPieces_42;
            MR_Word Var_155;
            MR_Word Var_156;
            MR_Word Context_283;
            MR_Word GoalPieces_284;
            MR_Word ProblemPieces_285;
            MR_Word Pieces_286;

            Context_283 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_131, &VarTable_40);
            {
              VarNameSrc_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, VarNameSrc_41, 0) = ((MR_Box) (VarTable_40));
            }
            GenericCallPieces_42 = hlds__hlds_out__hlds_out_util__generic_call_to_pieces_3_f_0((MR_Integer) 1, VarNameSrc_41, GenericCall_35);
            GoalPieces_284 = parse_tree__error_spec__color_as_subject_1_f_0(GenericCallPieces_42);
            check_hlds__det_check_goal__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_285);
            Pieces_286 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_284, ProblemPieces_285);
            {
              Var_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_156, 0) = ((MR_Box) (Context_283));
              MR_hl_field(0, Var_156, 1) = ((MR_Box) (Pieces_286));
            }
            {
              Var_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_155, 0) = ((MR_Box) (Var_156));
              MR_hl_field(0, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MsgGroups_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_155));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String DesiredStr_50;
            MR_Word Var_161;
            MR_Word Var_164;
            MR_Word Var_165;
            MR_Word Var_172;
            MR_Word Var_173;
            MR_Word Context_287;
            MR_Word Pieces_288;

            Context_287 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            DesiredStr_50 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Desired_13);
            {
              Var_165 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_165, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_165, 1) = ((MR_Box) (DesiredStr_50));
            }
            {
              Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
              MR_hl_field(1, Var_164, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[4])));
            }
            {
              Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_161, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[1])));
              MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_164));
            }
            {
              Pieces_288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_288, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[0])));
              MR_hl_field(1, Pieces_288, 1) = ((MR_Box) (Var_161));
            }
            {
              Var_173 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_173, 0) = ((MR_Box) (Context_287));
              MR_hl_field(0, Var_173, 1) = ((MR_Box) (Pieces_288));
            }
            {
              Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_172, 0) = ((MR_Box) (Var_173));
              MR_hl_field(0, Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MsgGroups_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_172));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goals_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));

            check_hlds__det_check_goal__det_diagnose_conj_7_p_0(InstMap0_12, SwitchContexts_15, Desired_13, Goals_52, MsgGroups_17, STATE_VARIABLE_DetInfo_0_131, STATE_VARIABLE_DetInfo_132);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubMsgGroups_53;
            MR_Word DisjunctsWithSolnSet_54;
            MR_Word DesSolns_56;
            MR_Word DisjunctsWithSoln_57;
            MR_Word Var_177;
            MR_Word Goals_290 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
            MR_Word Var_55;
            MR_Word FirstContext_58;
            MR_Word LaterContexts_59;

            Var_177 = mercury__bag__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
            check_hlds__det_check_goal__det_diagnose_disj_10_p_0(InstMap0_12, SwitchContexts_15, Desired_13, Actual_14, Goals_290, &SubMsgGroups_53, Var_177, &DisjunctsWithSolnSet_54, STATE_VARIABLE_DetInfo_0_131, STATE_VARIABLE_DetInfo_132);
            parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_55, &DesSolns_56);
            mercury__bag__to_list_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), DisjunctsWithSolnSet_54, &DisjunctsWithSoln_57);
            succeeded = (DesSolns_56 != (MR_Integer) 3);
            if (succeeded)
            {
              succeeded = (DesSolns_56 != (MR_Integer) 2);
              if (succeeded)
              {
                succeeded = (DisjunctsWithSoln_57 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FirstContext_58 = ((MR_Word) ((MR_hl_field(1, DisjunctsWithSoln_57, 0))));
                  LaterContexts_59 = ((MR_Word) ((MR_hl_field(1, DisjunctsWithSoln_57, 1))));
                  succeeded = (LaterContexts_59 != (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            if (succeeded)
            {
              MR_Word NestingPieces_62;
              MR_Word FirstMsg_64;
              MR_Word LaterDisjPieces_65;
              MR_Word MakeLaterMsgs_66;
              MR_Word SortedLaterContexts_69;
              MR_Word LaterMsgs_70;
              MR_Word DisjMsgGroup_71;
              MR_Word Var_189;
              MR_Word Var_194;
              MR_Word Var_195;

              check_hlds__det_check_switch__det_diagnose_switch_context_3_p_0(*STATE_VARIABLE_DetInfo_132, SwitchContexts_15, &NestingPieces_62);
              Var_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_62, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[9])));
              {
                FirstMsg_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, FirstMsg_64, 0) = ((MR_Box) (FirstContext_58));
                MR_hl_field(0, FirstMsg_64, 1) = ((MR_Box) (Var_189));
              }
              Var_195 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[13])));
              Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_195, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])));
              LaterDisjPieces_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[11])), Var_194);
              {
                MakeLaterMsgs_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MakeLaterMsgs_66, 0) = ((MR_Box) (&check_hlds__det_check_goal_scalar_common_4[0]));
                MR_hl_field(0, MakeLaterMsgs_66, 1) = ((MR_Box) (check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0_1));
                MR_hl_field(0, MakeLaterMsgs_66, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, MakeLaterMsgs_66, 3) = ((MR_Box) (LaterDisjPieces_65));
              }
              mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), LaterContexts_59, &SortedLaterContexts_69);
              LaterMsgs_70 = mercury__list__map_2_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), MakeLaterMsgs_66, SortedLaterContexts_69);
              {
                DisjMsgGroup_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, DisjMsgGroup_71, 0) = ((MR_Box) (FirstMsg_64));
                MR_hl_field(0, DisjMsgGroup_71, 1) = ((MR_Box) (LaterMsgs_70));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *MsgGroups_17 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (DisjMsgGroup_71));
                MR_hl_field(1, base, 1) = ((MR_Box) (SubMsgGroups_53));
              }
            }
            else
              *MsgGroups_17 = SubMsgGroups_53;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
            MR_Word SwitchCanFail_73 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, 2))) & (MR_Integer) 1);
            MR_Word Cases_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
            MR_Word SwitchMsgGroups_87;
            MR_Word VarType_88;
            MR_Word VarTable_297;
            MR_Word SubMsgGroups_298;
            MR_Word Var_205;
            MR_Word Var_323;
            MR_Word Var_75;

            succeeded = (SwitchCanFail_73 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_205 = (MR_Integer) 1;
              parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_323, &Var_75);
              succeeded = (Var_205 == Var_323);
            }
            if (succeeded)
            {
              MR_String VarStr_76;
              MR_Word MaybeMissingInfo_77;
              MR_Word Component_85;
              MR_Word SwitchMsg_86;
              MR_Word Var_242;
              MR_Word Var_244;
              MR_Word Context_292;
              MR_Word NestingPieces_293;

              Context_292 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              check_hlds__det_check_switch__find_missing_cons_ids_9_p_0(STATE_VARIABLE_DetInfo_0_131, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_2[0])), InstMap0_12, SwitchContexts_15, Var_72, Cases_74, &NestingPieces_293, &VarStr_76, &MaybeMissingInfo_77);
              if ((MaybeMissingInfo_77 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_224;
                MR_Word Var_226;
                MR_Word Var_229;
                MR_Word Var_230;
                MR_Word Var_232;
                MR_Word Var_233;
                MR_Word Var_241;
                MR_Word NoCoverPieces_291;

                {
                  Var_230 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_230, 0) = ((MR_Box) (VarStr_76));
                }
                {
                  Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_229, 0) = ((MR_Box) (Var_230));
                  MR_hl_field(1, Var_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_226, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[19])));
                  MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_229));
                }
                {
                  Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_224, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_226));
                }
                Var_233 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[21])));
                Var_232 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_233, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])));
                NoCoverPieces_291 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_224, Var_232);
                Var_241 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_293, NoCoverPieces_291);
                {
                  Component_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Component_85, 0) = ((MR_Box) (Var_241));
                }
              }
              else
              {
                MR_Word MissingInfo_78 = ((MR_Word) ((MR_hl_field(1, MaybeMissingInfo_77, 0))));
                MR_Word MainPieces_81 = ((MR_Word) ((MR_hl_field(0, MissingInfo_78, 2))));
                MR_Word VerbosePieces_82 = ((MR_Word) ((MR_hl_field(0, MissingInfo_78, 3))));
                MR_Word SwitchOnPieces_83;
                MR_Word Var_214;
                MR_Word Var_215;
                MR_Word Var_216;
                MR_Word Var_222;

                {
                  Var_216 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_216, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_216, 1) = ((MR_Box) (VarStr_76));
                }
                {
                  Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_215, 0) = ((MR_Box) (Var_216));
                  MR_hl_field(1, Var_215, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_214 = parse_tree__error_spec__color_as_subject_1_f_0(Var_215);
                SwitchOnPieces_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[23])), Var_214);
                Var_222 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_293, SwitchOnPieces_83);
                parse_tree__error_spec__append_prefix_and_maybe_verbose_6_p_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_2[1])), Var_222, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[25])), MainPieces_81, VerbosePieces_82, &Component_85);
              }
              {
                Var_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_242, 0) = ((MR_Box) (Component_85));
                MR_hl_field(1, Var_242, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                SwitchMsg_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, SwitchMsg_86, 0) = ((MR_Box) (Context_292));
                MR_hl_field(2, SwitchMsg_86, 1) = ((MR_Box) (Var_242));
              }
              {
                Var_244 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_244, 0) = ((MR_Box) (SwitchMsg_86));
                MR_hl_field(0, Var_244, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                SwitchMsgGroups_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SwitchMsgGroups_87, 0) = ((MR_Box) (Var_244));
                MR_hl_field(1, SwitchMsgGroups_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
              SwitchMsgGroups_87 = (MR_Word) ((MR_Unsigned) 0U);
            check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_131, &VarTable_297);
            parse_tree__var_table__lookup_var_type_3_p_0(VarTable_297, Var_72, &VarType_88);
            check_hlds__det_check_goal__det_diagnose_switch_arms_9_p_0(InstMap0_12, SwitchContexts_15, Desired_13, Var_72, VarType_88, Cases_74, &SubMsgGroups_298, STATE_VARIABLE_DetInfo_0_131, STATE_VARIABLE_DetInfo_132);
            *MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), SwitchMsgGroups_87, SubMsgGroups_298);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SubGoal_110 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
            MR_Word SubGoalInfo_112 = ((MR_Word) ((MR_hl_field(0, SubGoal_110, 1))));
            MR_Word Internal_113;
            MR_Word InternalDesired_114;

            Internal_113 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_112);
            succeeded = (Actual_14 == Internal_113);
            if (succeeded)
              InternalDesired_114 = Desired_13;
            else
            {
              MR_Word CanFail_115;
              MR_Word Var_116;

              parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &CanFail_115, &Var_116);
              parse_tree__prog_data__determinism_components_3_p_1(&InternalDesired_114, CanFail_115, (MR_Integer) 3);
            }
            check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap0_12, SwitchContexts_15, InternalDesired_114, SubGoal_110, MsgGroups_17, STATE_VARIABLE_DetInfo_0_131, STATE_VARIABLE_DetInfo_132);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
            MR_Word Then_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
            MR_Word Else_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 4))));
            MR_Word DesiredSolns_94;
            MR_Word CondInfo_96;
            MR_Word CondDetism_97;
            MR_Word CondSolns_99;
            MR_Word MsgGroupsCond_101;
            MR_Word InstMap1_102;
            MR_Word MsgGroupsThen_103;
            MR_Word MsgGroupsElse_104;
            MR_Word STATE_VARIABLE_DetInfo_4_249;
            MR_Word STATE_VARIABLE_DetInfo_5_250;
            MR_Word Var_252;
            MR_Word _DesiredCanFail_93;
            MR_Word _CondCanFail_98;

            parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &_DesiredCanFail_93, &DesiredSolns_94);
            CondInfo_96 = ((MR_Word) ((MR_hl_field(0, Cond_90, 1))));
            CondDetism_97 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondInfo_96);
            parse_tree__prog_data__determinism_components_3_p_0(CondDetism_97, &_CondCanFail_98, &CondSolns_99);
            succeeded = (CondSolns_99 == (MR_Integer) 3);
            if (succeeded)
              succeeded = (DesiredSolns_94 != (MR_Integer) 3);
            if (succeeded)
            {
              MR_Word DesiredCond_100;

              parse_tree__prog_data__determinism_components_3_p_1(&DesiredCond_100, (MR_Integer) 0, DesiredSolns_94);
              check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap0_12, SwitchContexts_15, DesiredCond_100, Cond_90, &MsgGroupsCond_101, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_4_249);
            }
            else
            {
              MsgGroupsCond_101 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_DetInfo_4_249 = STATE_VARIABLE_DetInfo_0_131;
            }
            hlds__goal_util__apply_goal_instmap_delta_3_p_0(Cond_90, InstMap0_12, &InstMap1_102);
            check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap1_102, SwitchContexts_15, Desired_13, Then_91, &MsgGroupsThen_103, STATE_VARIABLE_DetInfo_4_249, &STATE_VARIABLE_DetInfo_5_250);
            check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap0_12, SwitchContexts_15, Desired_13, Else_92, &MsgGroupsElse_104, STATE_VARIABLE_DetInfo_5_250, STATE_VARIABLE_DetInfo_132);
            Var_252 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MsgGroupsThen_103, MsgGroupsElse_104);
            *MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MsgGroupsCond_101, Var_252);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand_117 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));

            switch (MR_tag((MR_Word) ShortHand_117)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_check_goal.det_diagnose_goal_expr\'/9", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MainGoal_122 = ((MR_Word) ((MR_hl_field(1, ShortHand_117, 4))));
                  MR_Word OrElseGoals_123 = ((MR_Word) ((MR_hl_field(1, ShortHand_117, 5))));
                  MR_Word MainMsgGroups_125;
                  MR_Word OrElseMsgGroups_126;
                  MR_Word STATE_VARIABLE_DetInfo_8_273;

                  check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap0_12, SwitchContexts_15, Desired_13, MainGoal_122, &MainMsgGroups_125, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_8_273);
                  check_hlds__det_check_goal__det_diagnose_orelse_goals_7_p_0(InstMap0_12, SwitchContexts_15, Desired_13, OrElseGoals_123, &OrElseMsgGroups_126, STATE_VARIABLE_DetInfo_8_273, STATE_VARIABLE_DetInfo_132);
                  *MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MainMsgGroups_125, OrElseMsgGroups_126);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_311 = ((MR_Word) ((MR_hl_field(2, ShortHand_117, 2))));

                  check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap0_12, SwitchContexts_15, Desired_13, SubGoal_311, MsgGroups_17, STATE_VARIABLE_DetInfo_0_131, STATE_VARIABLE_DetInfo_132);
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_goal_7_p_0(
  MR_Word InstMap0_8,
  MR_Word SwitchContexts_9,
  MR_Word Desired_10,
  MR_Word Goal_11,
  MR_Word * MsgGroups_12,
  MR_Word STATE_VARIABLE_DetInfo_0_18,
  MR_Word * STATE_VARIABLE_DetInfo_19)
{
  MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal_11, 0))));
  MR_Word GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_11, 1))));
  MR_Word Actual_16;
  MR_Word CompareResult_17;

  Actual_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_15);
  parse_tree__prog_detism__compare_determinisms_3_p_0(Desired_10, Actual_16, &CompareResult_17);
  switch (CompareResult_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 0:
      check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0(GoalExpr_14, GoalInfo_15, InstMap0_8, Desired_10, Actual_16, SwitchContexts_9, STATE_VARIABLE_DetInfo_0_18, STATE_VARIABLE_DetInfo_19, MsgGroups_12);
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        *MsgGroups_12 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_0_18;
      }
      break;
  }
}

void MR_CALL 
check_hlds__det_check_goal__det_diagnose_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_7 = STATE_VARIABLE_DetInfo_0_6;
  }
  else
  {
    MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word HeadMsgGroups_21;
    MR_Word InstMap1_22;
    MR_Word TailMsgGroups_23;
    MR_Word STATE_VARIABLE_DetInfo_1_26;
    MR_Word GoalExpr_28 = ((MR_Word) ((MR_hl_field(0, Goal_17, 0))));
    MR_Word GoalInfo_29 = ((MR_Word) ((MR_hl_field(0, Goal_17, 1))));
    MR_Word Actual_30;
    MR_Word CompareResult_31;

    Actual_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_29);
    parse_tree__prog_detism__compare_determinisms_3_p_0(HeadVar__3_3, Actual_30, &CompareResult_31);
    switch (CompareResult_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0(GoalExpr_28, GoalInfo_29, HeadVar__1_1, HeadVar__3_3, Actual_30, HeadVar__2_2, STATE_VARIABLE_DetInfo_0_6, &STATE_VARIABLE_DetInfo_1_26, &HeadMsgGroups_21);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          HeadMsgGroups_21 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_1_26 = STATE_VARIABLE_DetInfo_0_6;
        }
        break;
    }
    hlds__goal_util__apply_goal_instmap_delta_3_p_0(Goal_17, HeadVar__1_1, &InstMap1_22);
    check_hlds__det_check_goal__det_diagnose_conj_7_p_0(InstMap1_22, HeadVar__2_2, HeadVar__3_3, Goals_18, &TailMsgGroups_23, STATE_VARIABLE_DetInfo_1_26, STATE_VARIABLE_DetInfo_7);
    *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), HeadMsgGroups_21, TailMsgGroups_23);
  }
}

static void MR_CALL 
check_hlds__det_check_goal__det_report_call_context_7_p_0(
  MR_Word CallUnifyContext_8,
  MR_Word DetInfo_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word * UnifyPieces_12,
  MR_Word * SurroundingUnifyContextPieces_13,
  MR_Word * GoalPieces_14)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_15;
  MR_Word PredInfo_16;
  MR_Word Origin_17;
  MR_Word Var_26;
  MR_Word Var_27;

  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_9, &ModuleInfo_15);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_15, PredId_10, &PredInfo_16);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_16, &Origin_17);
  succeeded = ((MR_tag((MR_Word) Origin_17)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_26 = ((MR_Word) ((MR_hl_field(1, Origin_17, 0))));
    succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_27 = ((MR_Unsigned) ((MR_hl_field(0, Var_26, 0))) & (MR_Integer) 3);
      succeeded = (Var_27 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    *UnifyPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
    if ((CallUnifyContext_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *SurroundingUnifyContextPieces_13 = (MR_Word) ((MR_Unsigned) 0U);
      *GoalPieces_14 = (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[49]));
    }
    else
    {
      MR_Word LHS_19;
      MR_Word RHS_20;
      MR_Word UC_21;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, CallUnifyContext_8, 0))));

      LHS_19 = ((MR_Word) ((MR_hl_field(0, Var_28, 0))));
      RHS_20 = ((MR_Word) ((MR_hl_field(0, Var_28, 1))));
      UC_21 = ((MR_Word) ((MR_hl_field(0, Var_28, 2))));
      check_hlds__det_check_goal__det_report_unify_context_8_p_0((MR_Integer) 0, (MR_Integer) 0, UC_21, DetInfo_9, LHS_19, RHS_20, SurroundingUnifyContextPieces_13, GoalPieces_14);
    }
  }
  else
  {
    MR_Word PredProcId_24;
    MR_Word PredPieces_25;

    if ((CallUnifyContext_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *UnifyPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word CallContextPieces_22;
      MR_Word MainUnifyPieces_23;
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, CallUnifyContext_8, 0))));
      MR_Word Var_43;
      MR_Word LHS_59 = ((MR_Word) ((MR_hl_field(0, Var_40, 0))));
      MR_Word RHS_60 = ((MR_Word) ((MR_hl_field(0, Var_40, 1))));
      MR_Word UC_61 = ((MR_Word) ((MR_hl_field(0, Var_40, 2))));

      check_hlds__det_check_goal__det_report_unify_context_8_p_0((MR_Integer) 0, (MR_Integer) 1, UC_61, DetInfo_9, LHS_59, RHS_60, &CallContextPieces_22, &MainUnifyPieces_23);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainUnifyPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[51])));
      *UnifyPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CallContextPieces_22, Var_43);
    }
    {
      PredProcId_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredProcId_24, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(0, PredProcId_24, 1) = ((MR_Box) (ProcId_11));
    }
    PredPieces_25 = hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(ModuleInfo_15, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_2[2])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredProcId_24);
    *SurroundingUnifyContextPieces_13 = (MR_Word) ((MR_Unsigned) 0U);
    *GoalPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[53])), PredPieces_25);
  }
}

static void MR_CALL 
check_hlds__det_check_goal__det_report_unify_context_8_p_0(
  MR_Word STATE_VARIABLE_First_0_27,
  MR_Word Last_10,
  MR_Word UnifyContext_11,
  MR_Word DetInfo_12,
  MR_Word LHSVar_13,
  MR_Word RHS_14,
  MR_Word * SurroundingContextPieces_15,
  MR_Word * MainPieces_16)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_18;
  MR_Word VarTable_19;
  MR_String StartWords_20;
  MR_Word LHSVarEntry_21;
  MR_String LHSVarRawName_22;
  MR_Word STATE_VARIABLE_First_1_28;
  MR_Word _LastContextWord_17;

  hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_6_p_0(STATE_VARIABLE_First_0_27, &STATE_VARIABLE_First_1_28, UnifyContext_11, &_LastContextWord_17, (MR_Word) ((MR_Unsigned) 0U), SurroundingContextPieces_15);
  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_12, &ModuleInfo_18);
  check_hlds__det_util__det_info_get_var_table_2_p_0(DetInfo_12, &VarTable_19);
  switch (Last_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (STATE_VARIABLE_First_1_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          StartWords_20 = (MR_String) "Unification";
          break;
        case (MR_Integer) 1:
          StartWords_20 = (MR_String) "unification";
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (STATE_VARIABLE_First_1_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          StartWords_20 = (MR_String) "In unification";
          break;
        case (MR_Integer) 1:
          StartWords_20 = (MR_String) "in unification";
          break;
      }
      break;
  }
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_19, LHSVar_13, &LHSVarEntry_21);
  LHSVarRawName_22 = ((MR_String) ((MR_hl_field(0, LHSVarEntry_21, 0))));
  succeeded = (strcmp(LHSVarRawName_22, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_String RHSStr_23;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_String Var_40;

    RHSStr_23 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(ModuleInfo_18, VarTable_19, (MR_Integer) 0, RHS_14);
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (StartWords_20));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[55])));
    }
    Var_40 = parse_tree__error_spec__add_quotes_1_f_0(RHSStr_23);
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    *MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_37);
  }
  else
  {
    MR_String LHSVarName_24;
    MR_Word RHSVar_25;
    MR_Word RHSVarEntry_26;
    MR_String Var_43;

    LHSVarName_24 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_19, (MR_Integer) 0, LHSVar_13);
    succeeded = ((MR_tag((MR_Word) RHS_14)) == (MR_Integer) 0);
    if (succeeded)
    {
      RHSVar_25 = ((MR_Word) ((MR_hl_field(0, RHS_14, 0))));
      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_19, RHSVar_25, &RHSVarEntry_26);
      Var_43 = ((MR_String) ((MR_hl_field(0, RHSVarEntry_26, 0))));
      succeeded = (strcmp(Var_43, (MR_String) "") == 0);
    }
    if (succeeded)
    {
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_String Var_53;

      {
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_45, 1) = ((MR_Box) (StartWords_20));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[55])));
      }
      Var_53 = parse_tree__error_spec__add_quotes_1_f_0(LHSVarName_24);
      {
        Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_50 = parse_tree__error_spec__color_as_subject_1_f_0(Var_51);
      *MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_50);
    }
    else
    {
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_String Var_66;
      MR_Word Var_68;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_String Var_76;
      MR_String RHSStr_78;

      RHSStr_78 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(ModuleInfo_18, VarTable_19, (MR_Integer) 0, RHS_14);
      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (StartWords_20));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[57])));
      }
      Var_66 = parse_tree__error_spec__add_quotes_1_f_0(LHSVarName_24);
      {
        Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_65, 1) = ((MR_Box) (Var_66));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_63 = parse_tree__error_spec__color_as_subject_1_f_0(Var_64);
      Var_76 = parse_tree__error_spec__add_quotes_1_f_0(RHSStr_78);
      {
        Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_73 = parse_tree__error_spec__color_as_subject_1_f_0(Var_74);
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[34])), Var_73);
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_68);
      *MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_62);
    }
  }
}

static void MR_CALL 
check_hlds__det_check_goal__det_diagnose_primitive_goal_3_p_0(
  MR_Word Desired_4,
  MR_Word Actual_5,
  MR_Word * Pieces_6)
{
  MR_Word DesiredCanFail_7;
  MR_Word DesiredSolns_8;
  MR_Word ActualCanFail_9;
  MR_Word ActualSolns_10;
  MR_Word CmpCanFail_11;
  MR_Word CmpSolns_13;
  MR_Word SolnsPieces_14;
  MR_Word ProblemPieces_15;

  parse_tree__prog_data__determinism_components_3_p_0(Desired_4, &DesiredCanFail_7, &DesiredSolns_8);
  parse_tree__prog_data__determinism_components_3_p_0(Actual_5, &ActualCanFail_9, &ActualSolns_10);
  parse_tree__prog_detism__compare_canfails_3_p_0(DesiredCanFail_7, ActualCanFail_9, &CmpCanFail_11);
  parse_tree__prog_detism__compare_solncounts_3_p_0(DesiredSolns_8, ActualSolns_10, &CmpSolns_13);
  switch (CmpSolns_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      SolnsPieces_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      SolnsPieces_14 = ((&check_hlds__det_check_goal_vector_common_3[0 + DesiredSolns_8]))->check_hlds__det_check_goal__vector_common_type_3_0__vct_3_f_0;
      break;
  }
  switch (CmpCanFail_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      if ((SolnsPieces_14 == (MR_Word) ((MR_Unsigned) 0U)))
        ProblemPieces_15 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_39;

        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SolnsPieces_14, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[32])));
        ProblemPieces_15 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_39);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word CanFailPieces_100 = (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[27]));

        if ((SolnsPieces_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_44;

          Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CanFailPieces_100, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[32])));
          ProblemPieces_15 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_44);
        }
        else
        {
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_55;
          MR_Word Var_56;

          Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0(CanFailPieces_100);
          Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SolnsPieces_14, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[32])));
          Var_55 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_56);
          Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[34])), Var_55);
          ProblemPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_50);
        }
      }
      break;
  }
  if ((ProblemPieces_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word DesiredPieces0_26;
    MR_Word ActualPieces0_27;
    MR_Word DesiredPieces_28;
    MR_Word ActualPieces_29;
    MR_Word Var_61;
    MR_String Var_62;
    MR_Word Var_67;
    MR_String Var_68;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_87;
    MR_Word Var_92;

    Var_62 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Desired_4);
    {
      Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_61, 0) = ((MR_Box) (Var_62));
    }
    {
      DesiredPieces0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DesiredPieces0_26, 0) = ((MR_Box) (Var_61));
      MR_hl_field(1, DesiredPieces0_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[36])));
    }
    Var_68 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Actual_5);
    {
      Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_67, 0) = ((MR_Box) (Var_68));
    }
    {
      ActualPieces0_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ActualPieces0_27, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, ActualPieces0_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[32])));
    }
    DesiredPieces_28 = parse_tree__error_spec__color_as_correct_1_f_0(DesiredPieces0_26);
    ActualPieces_29 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualPieces0_27);
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPieces_29, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])));
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[43])), Var_92);
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])), Var_87);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DesiredPieces_28, Var_83);
    *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[41])), Var_82);
  }
  else
    *Pieces_6 = ProblemPieces_15;
}

void mercury__check_hlds__det_check_goal__init(void)
{
}

void mercury__check_hlds__det_check_goal__init_type_tables(void)
{
}

void mercury__check_hlds__det_check_goal__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__det_check_goal__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.det_check_goal.
