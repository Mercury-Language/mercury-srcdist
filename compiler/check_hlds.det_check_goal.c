/*
** Automatically generated from `det_check_goal.m'
** by the Mercury compiler,
** version rotd-2025-11-01
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




static const MR_PseudoTypeInfo check_hlds__det_check_goal__check_hlds__det_check_goal__field_types_soln_disjunct_0_0[2];

static const MR_DuArgLocn check_hlds__det_check_goal__check_hlds__det_check_goal__field_locns_soln_disjunct_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_check_goal__check_hlds__det_check_goal__du_functor_desc_soln_disjunct_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_check_goal__check_hlds__det_check_goal__du_stag_ordered_soln_disjunct_0_0[1];

static const MR_DuPtagLayout check_hlds__det_check_goal__check_hlds__det_check_goal__du_ptag_ordered_soln_disjunct_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_check_goal__check_hlds__det_check_goal__du_name_ordered_soln_disjunct_0[1];

static const MR_Integer check_hlds__det_check_goal__check_hlds__det_check_goal__functor_number_map_soln_disjunct_0[1];

static const MR_EnumFunctorDesc check_hlds__det_check_goal__check_hlds__det_check_goal__enum_functor_desc_was_disjunct_a_clause_0_0;

static const MR_EnumFunctorDesc check_hlds__det_check_goal__check_hlds__det_check_goal__enum_functor_desc_was_disjunct_a_clause_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_check_goal__check_hlds__det_check_goal__enum_ordinal_ordered_was_disjunct_a_clause_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_check_goal__check_hlds__det_check_goal__enum_name_ordered_was_disjunct_a_clause_0[2];

static const MR_Integer check_hlds__det_check_goal__check_hlds__det_check_goal__functor_number_map_was_disjunct_a_clause_0[2];

static MR_Word MR_CALL 
check_hlds__det_check_goal__IntroducedFrom__func__det_diagnose_goal_expr__209__1_1_f_0(
  MR_Word LambdaHeadVar__1_208);

static void MR_CALL 
check_hlds__det_check_goal____Compare____was_disjunct_a_clause_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_check_goal____Unify____was_disjunct_a_clause_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_check_goal____Compare____soln_disjunct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_check_goal____Unify____soln_disjunct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
  MR_Word STATE_VARIABLE_DetInfo_0_136,
  MR_Word * STATE_VARIABLE_DetInfo_137,
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

static MR_bool MR_CALL 
check_hlds__det_check_goal____Unify____soln_disjunct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_goal____Compare____soln_disjunct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_check_goal____Unify____was_disjunct_a_clause_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_goal____Compare____was_disjunct_a_clause_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_1[67][2];

static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_2[3][1];

static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_5[1][3];


struct check_hlds__det_check_goal__vector_common_type_3_0_s {
  const MR_Word check_hlds__det_check_goal__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct check_hlds__det_check_goal__vector_common_type_3_0_s check_hlds__det_check_goal_vector_common_3[4];



static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_1[67][2] = {
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
    ((MR_Box) ((MR_String) "has more than one disjunct"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Disjunction consisting of several clauses"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Disjunction has more than one disjunct"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[6])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is a whole clause,"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This later disjunct,"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This later disjunct"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may have a solution."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Negated goal can succeed."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The switch on"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not cover"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can fail"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can succeed"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "can succeed more than once"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "desired determinism is"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has unknown determinism problem;"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "while actual determinism is"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type-specific unify predicate\?)"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(or explicit call to a"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Some weird unification"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This call to"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[65]))),
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

static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_soln_disjunct_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box check_hlds__det_check_goal_scalar_common_5[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__det_check_goal_scalar_common_4[0])),
    ((MR_Box) (check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct check_hlds__det_check_goal__vector_common_type_3_0_s check_hlds__det_check_goal_vector_common_3[4] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[38])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[40])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[38])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[38])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo check_hlds__det_check_goal__check_hlds__det_check_goal__field_types_soln_disjunct_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_was_disjunct_a_clause_0)
};

static const MR_DuArgLocn check_hlds__det_check_goal__check_hlds__det_check_goal__field_locns_soln_disjunct_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__det_check_goal__check_hlds__det_check_goal__du_functor_desc_soln_disjunct_0_0 = {
  (MR_String) "soln_disjunct",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_check_goal__check_hlds__det_check_goal__field_types_soln_disjunct_0_0,
  NULL,
  check_hlds__det_check_goal__check_hlds__det_check_goal__field_locns_soln_disjunct_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_check_goal__check_hlds__det_check_goal__du_stag_ordered_soln_disjunct_0_0[1] = { &check_hlds__det_check_goal__check_hlds__det_check_goal__du_functor_desc_soln_disjunct_0_0 };

static const MR_DuPtagLayout check_hlds__det_check_goal__check_hlds__det_check_goal__du_ptag_ordered_soln_disjunct_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_check_goal__check_hlds__det_check_goal__du_stag_ordered_soln_disjunct_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_check_goal__check_hlds__det_check_goal__du_name_ordered_soln_disjunct_0[1] = { &check_hlds__det_check_goal__check_hlds__det_check_goal__du_functor_desc_soln_disjunct_0_0 };

static const MR_Integer check_hlds__det_check_goal__check_hlds__det_check_goal__functor_number_map_soln_disjunct_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_soln_disjunct_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_check_goal____Unify____soln_disjunct_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_goal____Compare____soln_disjunct_0_0_10001)),
  (MR_String) "check_hlds.det_check_goal",
  (MR_String) "soln_disjunct",
  { check_hlds__det_check_goal__check_hlds__det_check_goal__du_name_ordered_soln_disjunct_0 },
  { check_hlds__det_check_goal__check_hlds__det_check_goal__du_ptag_ordered_soln_disjunct_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_check_goal__check_hlds__det_check_goal__functor_number_map_soln_disjunct_0,

};

static const MR_EnumFunctorDesc check_hlds__det_check_goal__check_hlds__det_check_goal__enum_functor_desc_was_disjunct_a_clause_0_0 = {
  (MR_String) "disjunct_was_not_clause",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_check_goal__check_hlds__det_check_goal__enum_functor_desc_was_disjunct_a_clause_0_1 = {
  (MR_String) "disjunct_was_clause",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_check_goal__check_hlds__det_check_goal__enum_ordinal_ordered_was_disjunct_a_clause_0[2] = {
  &check_hlds__det_check_goal__check_hlds__det_check_goal__enum_functor_desc_was_disjunct_a_clause_0_0,
  &check_hlds__det_check_goal__check_hlds__det_check_goal__enum_functor_desc_was_disjunct_a_clause_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_check_goal__check_hlds__det_check_goal__enum_name_ordered_was_disjunct_a_clause_0[2] = {
  &check_hlds__det_check_goal__check_hlds__det_check_goal__enum_functor_desc_was_disjunct_a_clause_0_1,
  &check_hlds__det_check_goal__check_hlds__det_check_goal__enum_functor_desc_was_disjunct_a_clause_0_0
};

static const MR_Integer check_hlds__det_check_goal__check_hlds__det_check_goal__functor_number_map_was_disjunct_a_clause_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_was_disjunct_a_clause_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_check_goal____Unify____was_disjunct_a_clause_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_goal____Compare____was_disjunct_a_clause_0_0_10001)),
  (MR_String) "check_hlds.det_check_goal",
  (MR_String) "was_disjunct_a_clause",
  { check_hlds__det_check_goal__check_hlds__det_check_goal__enum_name_ordered_was_disjunct_a_clause_0 },
  { check_hlds__det_check_goal__check_hlds__det_check_goal__enum_ordinal_ordered_was_disjunct_a_clause_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_check_goal__check_hlds__det_check_goal__functor_number_map_was_disjunct_a_clause_0,

};

static MR_Word MR_CALL 
check_hlds__det_check_goal__IntroducedFrom__func__det_diagnose_goal_expr__209__1_1_f_0(
  MR_Word LambdaHeadVar__1_208)
{
  MR_Word LambdaHeadVar__2_209;
  MR_Word LaterContext_70 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_208, 0))));
  MR_Word LaterWasClause_71 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_208, 1))) & (MR_Integer) 1);
  MR_Word LaterDisjPieces_72;
  MR_Word LaterPieces_73;
  MR_Word Var_219;
  MR_Word Var_220;

  switch (LaterWasClause_71) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      LaterDisjPieces_72 = (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[18]));
      break;
    case (MR_Integer) 0:
      LaterDisjPieces_72 = (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[20]));
      break;
  }
  Var_220 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[22])));
  Var_219 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_220, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])));
  LaterPieces_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LaterDisjPieces_72, Var_219);
  {
    LambdaHeadVar__2_209 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_209, 0) = ((MR_Box) (LaterContext_70));
    MR_hl_field(0, LambdaHeadVar__2_209, 1) = ((MR_Box) (LaterPieces_73));
  }
  return LambdaHeadVar__2_209;
}

static void MR_CALL 
check_hlds__det_check_goal____Compare____was_disjunct_a_clause_0_0(
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
check_hlds__det_check_goal____Unify____was_disjunct_a_clause_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_goal____Compare____soln_disjunct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_check_goal____Unify____soln_disjunct_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
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
    MR_Word TailMsgGroups_44;
    MR_Word STATE_VARIABLE_DetInfo_1_49;
    MR_Word STATE_VARIABLE_DisjunctsWithSoln_1_52;
    MR_Word GoalExpr_56;
    MR_Word GoalInfo_57;
    MR_Word Actual_58;
    MR_Word CompareResult_59;
    MR_Word Var_31;
    MR_Word GoalDetism_39;
    MR_Word Var_55;
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
    GoalExpr_56 = ((MR_Word) ((MR_hl_field(0, Goal_25, 0))));
    GoalInfo_57 = ((MR_Word) ((MR_hl_field(0, Goal_25, 1))));
    Actual_58 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_57);
    parse_tree__prog_detism__compare_determinisms_3_p_0(ClauseDesired_35, Actual_58, &CompareResult_59);
    switch (CompareResult_59) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0(GoalExpr_56, GoalInfo_57, HeadVar__1_1, ClauseDesired_35, Actual_58, HeadVar__2_2, STATE_VARIABLE_DetInfo_0_9, &STATE_VARIABLE_DetInfo_1_49, &HeadMsgGroups_36);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          HeadMsgGroups_36 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_1_49 = STATE_VARIABLE_DetInfo_0_9;
        }
        break;
    }
    GoalInfo_38 = ((MR_Word) ((MR_hl_field(0, Goal_25, 1))));
    GoalDetism_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_38);
    parse_tree__prog_data__determinism_components_3_p_0(GoalDetism_39, &Var_40, &Var_55);
    succeeded = ((MR_Integer) 0 == Var_55);
    if (succeeded)
      STATE_VARIABLE_DisjunctsWithSoln_1_52 = STATE_VARIABLE_DisjunctsWithSoln_0_7;
    else
    {
      MR_Word GoalContext_41;
      MR_Word WasClause_42;
      MR_Word SolnDisjunct_43;

      GoalContext_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_38);
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_38, (MR_Integer) 0);
      if (succeeded)
        WasClause_42 = (MR_Integer) 1;
      else
        WasClause_42 = (MR_Integer) 0;
      {
        SolnDisjunct_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SolnDisjunct_43, 0) = ((MR_Box) (GoalContext_41));
        MR_hl_field(0, SolnDisjunct_43, 1) = (MR_Box) ((MR_Unsigned) (WasClause_42));
      }
      mercury__bag__insert_3_p_0((MR_Word) (&check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_soln_disjunct_0), ((MR_Box) (SolnDisjunct_43)), STATE_VARIABLE_DisjunctsWithSoln_0_7, &STATE_VARIABLE_DisjunctsWithSoln_1_52);
    }
    check_hlds__det_check_goal__det_diagnose_disj_10_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Goals_26, &TailMsgGroups_44, STATE_VARIABLE_DisjunctsWithSoln_1_52, STATE_VARIABLE_DisjunctsWithSoln_8, STATE_VARIABLE_DetInfo_1_49, STATE_VARIABLE_DetInfo_10);
    *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), HeadMsgGroups_36, TailMsgGroups_44);
  }
}

static MR_Box MR_CALL 
check_hlds__det_check_goal__det_diagnose_goal_expr_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_209;

  conv0_LambdaHeadVar__2_209 = check_hlds__det_check_goal__IntroducedFrom__func__det_diagnose_goal_expr__209__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_209));
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
  MR_Word STATE_VARIABLE_DetInfo_0_136,
  MR_Word * STATE_VARIABLE_DetInfo_137,
  MR_Word * MsgGroups_17)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DesiredCanFail_111;
        MR_Word ActualCanFail_112;
        MR_Word ActualSolns_113;
        MR_Word DesiredSolns_333;

        parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &DesiredCanFail_111, &DesiredSolns_333);
        parse_tree__prog_data__determinism_components_3_p_0(Actual_14, &ActualCanFail_112, &ActualSolns_113);
        succeeded = (DesiredCanFail_111 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (ActualCanFail_112 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Var_281;
          MR_Word Var_282;
          MR_Word Context_323;

          Context_323 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          {
            Var_282 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_282, 0) = ((MR_Box) (Context_323));
            MR_hl_field(0, Var_282, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[24])));
          }
          {
            Var_281 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_281, 0) = ((MR_Box) (Var_282));
            MR_hl_field(0, Var_281, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MsgGroups_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_281));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          succeeded = (DesiredSolns_333 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (ActualSolns_113 != (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_290;
            MR_Word Var_291;
            MR_Word Context_325;

            Context_325 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            {
              Var_291 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_291, 0) = ((MR_Box) (Context_325));
              MR_hl_field(0, Var_291, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[26])));
            }
            {
              Var_290 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_290, 0) = ((MR_Box) (Var_291));
              MR_hl_field(0, Var_290, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MsgGroups_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_290));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
            *MsgGroups_17 = (MR_Word) ((MR_Unsigned) 0U);
        }
        *STATE_VARIABLE_DetInfo_137 = STATE_VARIABLE_DetInfo_0_136;
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
        MR_Word Var_140;
        MR_Word Var_144;
        MR_Word Var_145;
        MR_Word Var_146;

        Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
        check_hlds__det_check_goal__det_report_unify_context_8_p_0((MR_Integer) 0, (MR_Integer) 0, UnifyContext_22, STATE_VARIABLE_DetInfo_0_136, LHS_18, RHS_19, &SurroundingContextPieces_24, &GoalPieces_25);
        check_hlds__det_check_goal__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_26);
        Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_25, ProblemPieces_26);
        Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[27])), Var_144);
        Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SurroundingContextPieces_24, Var_140);
        {
          Var_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_146, 0) = ((MR_Box) (Context_23));
          MR_hl_field(0, Var_146, 1) = ((MR_Box) (Pieces_27));
        }
        {
          Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_145, 0) = ((MR_Box) (Var_146));
          MR_hl_field(0, Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MsgGroups_17 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_145));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_DetInfo_137 = STATE_VARIABLE_DetInfo_0_136;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 0))));
        MR_Integer ProcId_29 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_10, 1))));
        MR_Word CallContext_32 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 4))));
        MR_Word AnyUnifyPieces_34;
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Var_156;
        MR_Word Context_301;
        MR_Word SurroundingContextPieces_302;
        MR_Word GoalPieces_303;
        MR_Word ProblemPieces_304;
        MR_Word Pieces_305;

        Context_301 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
        check_hlds__det_check_goal__det_report_call_context_7_p_0(CallContext_32, STATE_VARIABLE_DetInfo_0_136, PredId_28, ProcId_29, &AnyUnifyPieces_34, &SurroundingContextPieces_302, &GoalPieces_303);
        check_hlds__det_check_goal__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_304);
        Var_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_303, ProblemPieces_304);
        Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[27])), Var_154);
        Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SurroundingContextPieces_302, Var_150);
        Pieces_305 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AnyUnifyPieces_34, Var_149);
        {
          Var_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_156, 0) = ((MR_Box) (Context_301));
          MR_hl_field(0, Var_156, 1) = ((MR_Box) (Pieces_305));
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
        *STATE_VARIABLE_DetInfo_137 = STATE_VARIABLE_DetInfo_0_136;
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
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Word Context_306;
            MR_Word GoalPieces_307;
            MR_Word ProblemPieces_308;
            MR_Word Pieces_309;

            Context_306 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_136, &VarTable_40);
            {
              VarNameSrc_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, VarNameSrc_41, 0) = ((MR_Box) (VarTable_40));
            }
            GenericCallPieces_42 = hlds__hlds_error_util__generic_call_to_pieces_3_f_0((MR_Integer) 1, VarNameSrc_41, GenericCall_35);
            GoalPieces_307 = parse_tree__error_spec__color_as_subject_1_f_0(GenericCallPieces_42);
            check_hlds__det_check_goal__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_308);
            Pieces_309 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_307, ProblemPieces_308);
            {
              Var_161 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_161, 0) = ((MR_Box) (Context_306));
              MR_hl_field(0, Var_161, 1) = ((MR_Box) (Pieces_309));
            }
            {
              Var_160 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_160, 0) = ((MR_Box) (Var_161));
              MR_hl_field(0, Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MsgGroups_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_160));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_DetInfo_137 = STATE_VARIABLE_DetInfo_0_136;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String DesiredStr_50;
            MR_Word Var_166;
            MR_Word Var_169;
            MR_Word Var_170;
            MR_Word Var_177;
            MR_Word Var_178;
            MR_Word Context_310;
            MR_Word Pieces_311;

            Context_310 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            DesiredStr_50 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Desired_13);
            {
              Var_170 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_170, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_170, 1) = ((MR_Box) (DesiredStr_50));
            }
            {
              Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_169, 0) = ((MR_Box) (Var_170));
              MR_hl_field(1, Var_169, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[4])));
            }
            {
              Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_166, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[1])));
              MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_169));
            }
            {
              Pieces_311 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_311, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[0])));
              MR_hl_field(1, Pieces_311, 1) = ((MR_Box) (Var_166));
            }
            {
              Var_178 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_178, 0) = ((MR_Box) (Context_310));
              MR_hl_field(0, Var_178, 1) = ((MR_Box) (Pieces_311));
            }
            {
              Var_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_177, 0) = ((MR_Box) (Var_178));
              MR_hl_field(0, Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MsgGroups_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_177));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_DetInfo_137 = STATE_VARIABLE_DetInfo_0_136;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goals_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));

            check_hlds__det_check_goal__det_diagnose_conj_7_p_0(InstMap0_12, SwitchContexts_15, Desired_13, Goals_52, MsgGroups_17, STATE_VARIABLE_DetInfo_0_136, STATE_VARIABLE_DetInfo_137);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubMsgGroups_53;
            MR_Word DisjunctsWithSolnBag_54;
            MR_Word DesSolns_56;
            MR_Word DisjunctsWithSoln_57;
            MR_Word Var_182;
            MR_Word Goals_313 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
            MR_Word Var_55;
            MR_Word FirstSolnDisjunct_58;
            MR_Word LaterSolnDisjuncts_59;

            Var_182 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_soln_disjunct_0));
            check_hlds__det_check_goal__det_diagnose_disj_10_p_0(InstMap0_12, SwitchContexts_15, Desired_13, Actual_14, Goals_313, &SubMsgGroups_53, Var_182, &DisjunctsWithSolnBag_54, STATE_VARIABLE_DetInfo_0_136, STATE_VARIABLE_DetInfo_137);
            parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_55, &DesSolns_56);
            mercury__bag__to_list_2_p_0((MR_Word) (&check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_soln_disjunct_0), DisjunctsWithSolnBag_54, &DisjunctsWithSoln_57);
            succeeded = (DesSolns_56 != (MR_Integer) 3);
            if (succeeded)
            {
              succeeded = (DesSolns_56 != (MR_Integer) 2);
              if (succeeded)
              {
                succeeded = (DisjunctsWithSoln_57 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  FirstSolnDisjunct_58 = ((MR_Word) ((MR_hl_field(1, DisjunctsWithSoln_57, 0))));
                  LaterSolnDisjuncts_59 = ((MR_Word) ((MR_hl_field(1, DisjunctsWithSoln_57, 1))));
                  succeeded = (LaterSolnDisjuncts_59 != (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            if (succeeded)
            {
              MR_Word NestingPieces_62;
              MR_Word FirstContext_63;
              MR_Word FirstWasClause_64;
              MR_Word FirstDisjPieces_65;
              MR_Word FirstMsg_66;
              MR_Word SortedLaterSolnDisjuncts_74;
              MR_Word LaterMsgs_75;
              MR_Word DisjMsgGroup_76;
              MR_Word Var_207;

              check_hlds__det_check_switch__det_diagnose_switch_context_3_p_0(*STATE_VARIABLE_DetInfo_137, SwitchContexts_15, &NestingPieces_62);
              FirstContext_63 = ((MR_Word) ((MR_hl_field(0, FirstSolnDisjunct_58, 0))));
              FirstWasClause_64 = ((MR_Unsigned) ((MR_hl_field(0, FirstSolnDisjunct_58, 1))) & (MR_Integer) 1);
              switch (FirstWasClause_64) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  FirstDisjPieces_65 = (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[11]));
                  break;
                case (MR_Integer) 0:
                  FirstDisjPieces_65 = (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[14]));
                  break;
              }
              Var_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_62, FirstDisjPieces_65);
              {
                FirstMsg_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, FirstMsg_66, 0) = ((MR_Box) (FirstContext_63));
                MR_hl_field(0, FirstMsg_66, 1) = ((MR_Box) (Var_207));
              }
              mercury__list__sort_2_p_0((MR_Word) (&check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_soln_disjunct_0), LaterSolnDisjuncts_59, &SortedLaterSolnDisjuncts_74);
              LaterMsgs_75 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_soln_disjunct_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&check_hlds__det_check_goal_scalar_common_5[0]), SortedLaterSolnDisjuncts_74);
              {
                DisjMsgGroup_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, DisjMsgGroup_76, 0) = ((MR_Box) (FirstMsg_66));
                MR_hl_field(0, DisjMsgGroup_76, 1) = ((MR_Box) (LaterMsgs_75));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *MsgGroups_17 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (DisjMsgGroup_76));
                MR_hl_field(1, base, 1) = ((MR_Box) (SubMsgGroups_53));
              }
            }
            else
              *MsgGroups_17 = SubMsgGroups_53;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
            MR_Word SwitchCanFail_78 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, 2))) & (MR_Integer) 1);
            MR_Word Cases_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
            MR_Word SwitchMsgGroups_92;
            MR_Word VarType_93;
            MR_Word VarTable_320;
            MR_Word SubMsgGroups_321;
            MR_Word Var_228;
            MR_Word Var_347;
            MR_Word Var_80;

            succeeded = (SwitchCanFail_78 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_228 = (MR_Integer) 1;
              parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_347, &Var_80);
              succeeded = (Var_228 == Var_347);
            }
            if (succeeded)
            {
              MR_String VarStr_81;
              MR_Word MaybeMissingInfo_82;
              MR_Word Component_90;
              MR_Word SwitchMsg_91;
              MR_Word Var_265;
              MR_Word Var_267;
              MR_Word Context_315;
              MR_Word NestingPieces_316;

              Context_315 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              check_hlds__det_check_switch__find_missing_cons_ids_9_p_0(STATE_VARIABLE_DetInfo_0_136, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_2[0])), InstMap0_12, SwitchContexts_15, Var_77, Cases_79, &NestingPieces_316, &VarStr_81, &MaybeMissingInfo_82);
              if ((MaybeMissingInfo_82 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_247;
                MR_Word Var_249;
                MR_Word Var_252;
                MR_Word Var_253;
                MR_Word Var_255;
                MR_Word Var_256;
                MR_Word Var_264;
                MR_Word NoCoverPieces_314;

                {
                  Var_253 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_253, 0) = ((MR_Box) (VarStr_81));
                }
                {
                  Var_252 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_252, 0) = ((MR_Box) (Var_253));
                  MR_hl_field(1, Var_252, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_249, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_goal_scalar_common_1[28])));
                  MR_hl_field(1, Var_249, 1) = ((MR_Box) (Var_252));
                }
                {
                  Var_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_247, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, Var_247, 1) = ((MR_Box) (Var_249));
                }
                Var_256 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[30])));
                Var_255 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_256, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])));
                NoCoverPieces_314 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_247, Var_255);
                Var_264 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_316, NoCoverPieces_314);
                {
                  Component_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Component_90, 0) = ((MR_Box) (Var_264));
                }
              }
              else
              {
                MR_Word MissingInfo_83 = ((MR_Word) ((MR_hl_field(1, MaybeMissingInfo_82, 0))));
                MR_Word MainPieces_86 = ((MR_Word) ((MR_hl_field(0, MissingInfo_83, 2))));
                MR_Word VerbosePieces_87 = ((MR_Word) ((MR_hl_field(0, MissingInfo_83, 3))));
                MR_Word SwitchOnPieces_88;
                MR_Word Var_237;
                MR_Word Var_238;
                MR_Word Var_239;
                MR_Word Var_245;

                {
                  Var_239 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_239, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_239, 1) = ((MR_Box) (VarStr_81));
                }
                {
                  Var_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_238, 0) = ((MR_Box) (Var_239));
                  MR_hl_field(1, Var_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_237 = parse_tree__error_spec__color_as_subject_1_f_0(Var_238);
                SwitchOnPieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[32])), Var_237);
                Var_245 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_316, SwitchOnPieces_88);
                parse_tree__error_spec__append_prefix_and_maybe_verbose_6_p_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_2[1])), Var_245, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[34])), MainPieces_86, VerbosePieces_87, &Component_90);
              }
              {
                Var_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_265, 0) = ((MR_Box) (Component_90));
                MR_hl_field(1, Var_265, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                SwitchMsg_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, SwitchMsg_91, 0) = ((MR_Box) (Context_315));
                MR_hl_field(2, SwitchMsg_91, 1) = ((MR_Box) (Var_265));
              }
              {
                Var_267 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_267, 0) = ((MR_Box) (SwitchMsg_91));
                MR_hl_field(0, Var_267, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                SwitchMsgGroups_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SwitchMsgGroups_92, 0) = ((MR_Box) (Var_267));
                MR_hl_field(1, SwitchMsgGroups_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
              SwitchMsgGroups_92 = (MR_Word) ((MR_Unsigned) 0U);
            check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_136, &VarTable_320);
            parse_tree__var_table__lookup_var_type_3_p_0(VarTable_320, Var_77, &VarType_93);
            check_hlds__det_check_goal__det_diagnose_switch_arms_9_p_0(InstMap0_12, SwitchContexts_15, Desired_13, Var_77, VarType_93, Cases_79, &SubMsgGroups_321, STATE_VARIABLE_DetInfo_0_136, STATE_VARIABLE_DetInfo_137);
            *MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), SwitchMsgGroups_92, SubMsgGroups_321);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SubGoal_115 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
            MR_Word SubGoalInfo_117 = ((MR_Word) ((MR_hl_field(0, SubGoal_115, 1))));
            MR_Word Internal_118;
            MR_Word InternalDesired_119;

            Internal_118 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_117);
            succeeded = (Actual_14 == Internal_118);
            if (succeeded)
              InternalDesired_119 = Desired_13;
            else
            {
              MR_Word CanFail_120;
              MR_Word Var_121;

              parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &CanFail_120, &Var_121);
              parse_tree__prog_data__determinism_components_3_p_1(&InternalDesired_119, CanFail_120, (MR_Integer) 3);
            }
            check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap0_12, SwitchContexts_15, InternalDesired_119, SubGoal_115, MsgGroups_17, STATE_VARIABLE_DetInfo_0_136, STATE_VARIABLE_DetInfo_137);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
            MR_Word Then_96 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
            MR_Word Else_97 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 4))));
            MR_Word DesiredSolns_99;
            MR_Word CondInfo_101;
            MR_Word CondDetism_102;
            MR_Word CondSolns_104;
            MR_Word MsgGroupsCond_106;
            MR_Word InstMap1_107;
            MR_Word MsgGroupsThen_108;
            MR_Word MsgGroupsElse_109;
            MR_Word STATE_VARIABLE_DetInfo_4_272;
            MR_Word STATE_VARIABLE_DetInfo_5_273;
            MR_Word Var_275;
            MR_Word _DesiredCanFail_98;
            MR_Word _CondCanFail_103;

            parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &_DesiredCanFail_98, &DesiredSolns_99);
            CondInfo_101 = ((MR_Word) ((MR_hl_field(0, Cond_95, 1))));
            CondDetism_102 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondInfo_101);
            parse_tree__prog_data__determinism_components_3_p_0(CondDetism_102, &_CondCanFail_103, &CondSolns_104);
            succeeded = (CondSolns_104 == (MR_Integer) 3);
            if (succeeded)
              succeeded = (DesiredSolns_99 != (MR_Integer) 3);
            if (succeeded)
            {
              MR_Word DesiredCond_105;

              parse_tree__prog_data__determinism_components_3_p_1(&DesiredCond_105, (MR_Integer) 0, DesiredSolns_99);
              check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap0_12, SwitchContexts_15, DesiredCond_105, Cond_95, &MsgGroupsCond_106, STATE_VARIABLE_DetInfo_0_136, &STATE_VARIABLE_DetInfo_4_272);
            }
            else
            {
              MsgGroupsCond_106 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_DetInfo_4_272 = STATE_VARIABLE_DetInfo_0_136;
            }
            hlds__goal_util__apply_goal_instmap_delta_3_p_0(Cond_95, InstMap0_12, &InstMap1_107);
            check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap1_107, SwitchContexts_15, Desired_13, Then_96, &MsgGroupsThen_108, STATE_VARIABLE_DetInfo_4_272, &STATE_VARIABLE_DetInfo_5_273);
            check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap0_12, SwitchContexts_15, Desired_13, Else_97, &MsgGroupsElse_109, STATE_VARIABLE_DetInfo_5_273, STATE_VARIABLE_DetInfo_137);
            Var_275 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MsgGroupsThen_108, MsgGroupsElse_109);
            *MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MsgGroupsCond_106, Var_275);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand_122 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));

            switch (MR_tag((MR_Word) ShortHand_122)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_check_goal.det_diagnose_goal_expr\'/9", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MainGoal_127 = ((MR_Word) ((MR_hl_field(1, ShortHand_122, 4))));
                  MR_Word OrElseGoals_128 = ((MR_Word) ((MR_hl_field(1, ShortHand_122, 5))));
                  MR_Word MainMsgGroups_130;
                  MR_Word OrElseMsgGroups_131;
                  MR_Word STATE_VARIABLE_DetInfo_8_296;

                  check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap0_12, SwitchContexts_15, Desired_13, MainGoal_127, &MainMsgGroups_130, STATE_VARIABLE_DetInfo_0_136, &STATE_VARIABLE_DetInfo_8_296);
                  check_hlds__det_check_goal__det_diagnose_orelse_goals_7_p_0(InstMap0_12, SwitchContexts_15, Desired_13, OrElseGoals_128, &OrElseMsgGroups_131, STATE_VARIABLE_DetInfo_8_296, STATE_VARIABLE_DetInfo_137);
                  *MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MainMsgGroups_130, OrElseMsgGroups_131);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word SubGoal_334 = ((MR_Word) ((MR_hl_field(2, ShortHand_122, 2))));

                  check_hlds__det_check_goal__det_diagnose_goal_7_p_0(InstMap0_12, SwitchContexts_15, Desired_13, SubGoal_334, MsgGroups_17, STATE_VARIABLE_DetInfo_0_136, STATE_VARIABLE_DetInfo_137);
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
      *GoalPieces_14 = (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[58]));
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
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainUnifyPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[60])));
      *UnifyPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CallContextPieces_22, Var_43);
    }
    {
      PredProcId_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredProcId_24, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(0, PredProcId_24, 1) = ((MR_Box) (ProcId_11));
    }
    PredPieces_25 = hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(ModuleInfo_15, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_2[2])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredProcId_24);
    *SurroundingUnifyContextPieces_13 = (MR_Word) ((MR_Unsigned) 0U);
    *GoalPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[62])), PredPieces_25);
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

  hlds__hlds_error_util__unify_context_first_to_pieces_6_p_0(STATE_VARIABLE_First_0_27, &STATE_VARIABLE_First_1_28, UnifyContext_11, &_LastContextWord_17, (MR_Word) ((MR_Unsigned) 0U), SurroundingContextPieces_15);
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
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[64])));
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
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[64])));
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
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[66])));
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
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[43])), Var_73);
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

        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SolnsPieces_14, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[41])));
        ProblemPieces_15 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_39);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word CanFailPieces_100 = (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[36]));

        if ((SolnsPieces_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_44;

          Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CanFailPieces_100, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[41])));
          ProblemPieces_15 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_44);
        }
        else
        {
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_55;
          MR_Word Var_56;

          Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0(CanFailPieces_100);
          Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SolnsPieces_14, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[41])));
          Var_55 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_56);
          Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[43])), Var_55);
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
      MR_hl_field(1, DesiredPieces0_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[45])));
    }
    Var_68 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Actual_5);
    {
      Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_67, 0) = ((MR_Box) (Var_68));
    }
    {
      ActualPieces0_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ActualPieces0_27, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, ActualPieces0_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[41])));
    }
    DesiredPieces_28 = parse_tree__error_spec__color_as_correct_1_f_0(DesiredPieces0_26);
    ActualPieces_29 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualPieces0_27);
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPieces_29, (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])));
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[52])), Var_92);
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[2])), Var_87);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DesiredPieces_28, Var_83);
    *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_goal_scalar_common_1[50])), Var_82);
  }
  else
    *Pieces_6 = ProblemPieces_15;
}

static MR_bool MR_CALL 
check_hlds__det_check_goal____Unify____soln_disjunct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_goal____Unify____soln_disjunct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_goal____Compare____soln_disjunct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_goal____Compare____soln_disjunct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_check_goal____Unify____was_disjunct_a_clause_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_goal____Unify____was_disjunct_a_clause_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_goal____Compare____was_disjunct_a_clause_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_goal____Compare____was_disjunct_a_clause_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__det_check_goal__init(void)
{
}

void mercury__check_hlds__det_check_goal__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_soln_disjunct_0);
  MR_register_type_ctor_info(&check_hlds__det_check_goal__check_hlds__det_check_goal__type_ctor_info_was_disjunct_a_clause_0);
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
