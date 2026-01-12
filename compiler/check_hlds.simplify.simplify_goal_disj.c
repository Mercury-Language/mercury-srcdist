/*
** Automatically generated from `simplify_goal_disj.m'
** by the Mercury compiler,
** version rotd-2026-01-12
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


// :- module check_hlds.simplify.simplify_goal_disj.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_goal_disj__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_disj.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "int.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_refs.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_disj__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_or_else_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__fixup_disj_8_p_0(
  MR_Word Disjuncts_9,
  MR_Word GoalInfo_10,
  MR_Word * Goal_11,
  MR_Word NestedContext0_12,
  MR_Word InstMap0_13,
  MR_Word Common0_14,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__det_disj_to_ite_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Goal_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word InstMap0_8,
  MR_Word HeadVar__4_4,
  MR_Word * Var_9);

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_disj_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Goals_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PostBranchInstMaps_0_7,
  MR_Word * STATE_VARIABLE_PostBranchInstMaps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0(
  MR_Word Innermost_7,
  MR_Word GoalInfo_8,
  MR_Word InstMap0_9,
  MR_Word InstMapDelta_10,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_1[28][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_5[1][6];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_1[28][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: this disjunction"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "further instantiates"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the already partially instantiated"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the different disjuncts will return"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "their potentially different solutions"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the same memory cell,"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which will cause any all-solutions predicate"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to think that the different solutions"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(since they are at the same address)"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are in fact all the same"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "when invoked on"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[8])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: this disjunct"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "will never have any solutions."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This warning applies to the"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of this"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "It may or may not apply to other modes."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[8])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[26])))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_3[4][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 198U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 185U) },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_disj__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_disj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_disj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_disj__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_disj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_or_else_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word STATE_VARIABLE_Info_1_25;
    MR_Word _Common1_22;

    check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Goal0_14, &Goal_16, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, &_Common1_22, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_1_25);
    check_hlds__simplify__simplify_goal_disj__simplify_or_else_goals_7_p_0(Goals0_15, &Goals_17, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_Info_1_25, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__fixup_disj_8_p_0(
  MR_Word Disjuncts_9,
  MR_Word GoalInfo_10,
  MR_Word * Goal_11,
  MR_Word NestedContext0_12,
  MR_Word InstMap0_13,
  MR_Word Common0_14,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word IfThenElse_16;
  MR_Word Simplified_17;
  MR_Word _Common_18;

  check_hlds__simplify__simplify_goal_disj__det_disj_to_ite_3_p_0(Disjuncts_9, GoalInfo_10, &IfThenElse_16);
  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(IfThenElse_16, &Simplified_17, NestedContext0_12, InstMap0_13, Common0_14, &_Common_18, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  *Goal_11 = ((MR_Word) ((MR_hl_field(0, Simplified_17, 0))));
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__det_disj_to_ite_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Goal_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_disj.det_disj_to_ite\'/3", (MR_String) "reached base case");
      return;
    }
  else
  {
    MR_Word Disjunct_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Disjuncts_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

    if ((Disjuncts_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *Goal_3 = Disjunct_8;
    else
    {
      MR_Word CondGoalInfo_16 = ((MR_Word) ((MR_hl_field(0, Disjunct_8, 1))));
      MR_Word Then_17;
      MR_Word Rest_18;
      MR_Word RestGoalInfo_20;
      MR_Word CondNonLocals_21;
      MR_Word RestNonLocals_22;
      MR_Word NonLocals_23;
      MR_Word NewGoalInfo0_24;
      MR_Word InstMapDelta0_25;
      MR_Word InstMapDelta_26;
      MR_Word NewGoalInfo1_27;
      MR_Word CondDetism_28;
      MR_Word RestDetism_29;
      MR_Word CondCanFail_30;
      MR_Word CondMaxSoln_31;
      MR_Word RestCanFail_32;
      MR_Word RestMaxSoln_33;
      MR_Word CanFail_34;
      MR_Word MaxSoln0_35;
      MR_Word MaxSoln_36;
      MR_Word Detism_37;
      MR_Word NewGoalInfo_38;
      MR_Word Var_39;

      Then_17 = hlds__make_goal__true_goal_0_f_0();
      check_hlds__simplify__simplify_goal_disj__det_disj_to_ite_3_p_0(Disjuncts_9, HeadVar__2_2, &Rest_18);
      RestGoalInfo_20 = ((MR_Word) ((MR_hl_field(0, Rest_18, 1))));
      CondNonLocals_21 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CondGoalInfo_16);
      RestNonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(RestGoalInfo_20);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondNonLocals_21, RestNonLocals_22, &NonLocals_23);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_23, HeadVar__2_2, &NewGoalInfo0_24);
      InstMapDelta0_25 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(HeadVar__2_2);
      hlds__instmap__instmap_delta_restrict_3_p_0(NonLocals_23, InstMapDelta0_25, &InstMapDelta_26);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_26, NewGoalInfo0_24, &NewGoalInfo1_27);
      CondDetism_28 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondGoalInfo_16);
      RestDetism_29 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(RestGoalInfo_20);
      parse_tree__prog_data__determinism_components_3_p_0(CondDetism_28, &CondCanFail_30, &CondMaxSoln_31);
      parse_tree__prog_data__determinism_components_3_p_0(RestDetism_29, &RestCanFail_32, &RestMaxSoln_33);
      parse_tree__prog_detism__det_disjunction_canfail_3_p_0(CondCanFail_30, RestCanFail_32, &CanFail_34);
      parse_tree__prog_detism__det_disjunction_maxsoln_3_p_0(CondMaxSoln_31, RestMaxSoln_33, &MaxSoln0_35);
      succeeded = (MaxSoln0_35 == (MR_Integer) 3);
      if (succeeded)
        MaxSoln_36 = (MR_Integer) 1;
      else
        MaxSoln_36 = MaxSoln0_35;
      parse_tree__prog_data__determinism_components_3_p_1(&Detism_37, CanFail_34, MaxSoln_36);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_37, NewGoalInfo1_27, &NewGoalInfo_38);
      {
        Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_39, 2) = ((MR_Box) (Disjunct_8));
        MR_hl_field(3, Var_39, 3) = ((MR_Box) (Then_17));
        MR_hl_field(3, Var_39, 4) = ((MR_Box) (Rest_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_3 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
        MR_hl_field(0, base, 1) = ((MR_Box) (NewGoalInfo_38));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word InstMap0_8,
  MR_Word HeadVar__4_4,
  MR_Word * Var_9)
{
  MR_bool succeeded;
  MR_Word FinalInst_10;
  MR_Word Type_11;
  MR_Word InitInst_12;

  *Var_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  FinalInst_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 1))));
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_7, *Var_9, &Type_11);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_8, *Var_9, &InitInst_12);
  succeeded = hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_6, InitInst_12);
  if (succeeded)
    succeeded = MR_FALSE;
  else
  {
    succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_6, Type_11, InitInst_12);
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      succeeded = check_hlds__inst_match__inst_matches_final_4_p_0(ModuleInfo_6, Type_11, FinalInst_10, InitInst_12);
      if (succeeded)
        succeeded = MR_FALSE;
      else
        succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_goal_atomic_goal_16_p_0(
  MR_Word GoalType_17,
  MR_Word Outer_18,
  MR_Word Inner_19,
  MR_Word MaybeOutputVars_20,
  MR_Word MainGoal0_21,
  MR_Word OrElseGoals0_22,
  MR_Word OrElseInners_23,
  MR_Word * GoalExpr_24,
  MR_Word GoalInfo_25,
  MR_Word * GoalInfo_10,
  MR_Word _NestedContext0_26,
  MR_Word _InstMap0_27,
  MR_Word Common0_28,
  MR_Word * Common0_14,
  MR_Word Info_29,
  MR_Word * Info_16)
{
  check_hlds__simplify__simplify_goal_disj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_97_116_111_109_105_99_95_103_111_97_108_95_95_91_49_49_44_32_49_50_93_95_48_16_p_0(GoalType_17, Outer_18, Inner_19, MaybeOutputVars_20, MainGoal0_21, OrElseGoals0_22, OrElseInners_23, GoalExpr_24, GoalInfo_25, GoalInfo_10, Common0_28, Common0_14, Info_29, Info_16);
}

void MR_CALL 
check_hlds__simplify__simplify_goal_disj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_97_116_111_109_105_99_95_103_111_97_108_95_95_91_49_49_44_32_49_50_93_95_48_16_p_0(
  MR_Word GoalType_17,
  MR_Word Outer_18,
  MR_Word Inner_19,
  MR_Word MaybeOutputVars_20,
  MR_Word MainGoal0_21,
  MR_Word OrElseGoals0_22,
  MR_Word OrElseInners_23,
  MR_Word * GoalExpr_24,
  MR_Word GoalInfo_25,
  MR_Word * GoalInfo_10,
  MR_Word Common0_28,
  MR_Word * Common0_14,
  MR_Word Info_29,
  MR_Word * Info_16)
{
  MR_Word ShortHand_32;

  *GoalInfo_10 = GoalInfo_25;
  *Common0_14 = Common0_28;
  *Info_16 = Info_29;
  {
    ShortHand_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ShortHand_32, 0) = (MR_Box) ((MR_Unsigned) (GoalType_17));
    MR_hl_field(1, ShortHand_32, 1) = ((MR_Box) (Outer_18));
    MR_hl_field(1, ShortHand_32, 2) = ((MR_Box) (Inner_19));
    MR_hl_field(1, ShortHand_32, 3) = ((MR_Box) (MaybeOutputVars_20));
    MR_hl_field(1, ShortHand_32, 4) = ((MR_Box) (MainGoal0_21));
    MR_hl_field(1, ShortHand_32, 5) = ((MR_Box) (OrElseGoals0_22));
    MR_hl_field(1, ShortHand_32, 6) = ((MR_Box) (OrElseInners_23));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_24 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_32));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_goal_disj_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word Common0_17,
  MR_Word * Common_18,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_bool succeeded;
  MR_Word Disjuncts0_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 1))));
  MR_Word Disjuncts_21;
  MR_Word InstMapDeltas_22;
  MR_Integer DisjunctsLength_36;
  MR_Integer Disjuncts0Length_37;
  MR_Word STATE_VARIABLE_Info_1_42;
  MR_Word STATE_VARIABLE_Info_2_45;

  check_hlds__simplify__simplify_goal_disj__simplify_disj_10_p_0(Disjuncts0_20, (MR_Word) ((MR_Unsigned) 0U), &Disjuncts_21, NestedContext0_15, InstMap0_16, Common0_17, (MR_Word) ((MR_Unsigned) 0U), &InstMapDeltas_22, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_1_42);
  if ((Disjuncts_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_23;
    MR_Word Var_43;

    Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
    Var_43 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_23);
    *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_43, 0))));
    *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_43, 1))));
    STATE_VARIABLE_Info_2_45 = STATE_VARIABLE_Info_1_42;
  }
  else
  {
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(1, Disjuncts_21, 1))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(1, Disjuncts_21, 0))));

    if ((Var_56 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal1_25 = ((MR_Word) ((MR_hl_field(0, Var_57, 0))));
      MR_Word GoalInfo1_26 = ((MR_Word) ((MR_hl_field(0, Var_57, 1))));

      check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(GoalInfo0_13, GoalInfo1_26, Goal1_25, GoalExpr_12, GoalInfo_14, STATE_VARIABLE_Info_1_42, &STATE_VARIABLE_Info_2_45);
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_12 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Disjuncts_21));
      }
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_13, (MR_Integer) 18);
      if (succeeded)
      {
        *GoalInfo_14 = GoalInfo0_13;
        STATE_VARIABLE_Info_2_45 = STATE_VARIABLE_Info_1_42;
      }
      else
      {
        MR_Word ModuleInfo1_30;
        MR_Word NonLocals_31;
        MR_Word VarTable_32;
        MR_Word NewDelta_33;
        MR_Word ModuleInfo2_34;
        MR_Word STATE_VARIABLE_Info_3_48;
        MR_Word Innermost_35;
        MR_Word Var_49;

        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_1_42, &ModuleInfo1_30);
        NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_1_42, &VarTable_32);
        hlds__instmap__merge_instmap_deltas_7_p_0(VarTable_32, NonLocals_31, InstMap0_16, InstMapDeltas_22, &NewDelta_33, ModuleInfo1_30, &ModuleInfo2_34);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo2_34, STATE_VARIABLE_Info_1_42, &STATE_VARIABLE_Info_3_48);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(NewDelta_33, GoalInfo0_13, GoalInfo_14);
        succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(STATE_VARIABLE_Info_3_48);
        if (succeeded)
        {
          Var_49 = ((MR_Word) ((MR_hl_field(0, NestedContext0_15, 1))));
          succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            Innermost_35 = ((MR_Word) ((MR_hl_field(1, Var_49, 0))));
        }
        if (succeeded)
          check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0(Innermost_35, GoalInfo0_13, InstMap0_16, NewDelta_33, STATE_VARIABLE_Info_3_48, &STATE_VARIABLE_Info_2_45);
        else
          STATE_VARIABLE_Info_2_45 = STATE_VARIABLE_Info_3_48;
      }
    }
  }
  *Common_18 = Common0_17;
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjuncts_21, &DisjunctsLength_36);
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjuncts0_20, &Disjuncts0Length_37);
  succeeded = (DisjunctsLength_36 == Disjuncts0Length_37);
  if (succeeded)
    *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_2_45;
  else
  {
    MR_Word STATE_VARIABLE_Info_5_51;

    check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_2_45, &STATE_VARIABLE_Info_5_51);
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_5_51, STATE_VARIABLE_Info_39);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_disj_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Goals_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PostBranchInstMaps_0_7,
  MR_Word * STATE_VARIABLE_PostBranchInstMaps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadVar__2_2, Goals_3);
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_PostBranchInstMaps_8 = STATE_VARIABLE_PostBranchInstMaps_0_7;
    }
    else
    {
      MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Goal_31;
      MR_Word GoalInfo_34;
      MR_Word Purity_35;
      MR_Word RevGoals1_61;
      MR_Word STATE_VARIABLE_Info_1_67;
      MR_Word STATE_VARIABLE_Info_3_121;
      MR_Word STATE_VARIABLE_PostBranchInstMaps_1_122;
      MR_Word _Common1_32;
      MR_Word Detism_36;
      MR_Word MaxSolns_38;
      MR_Word _CanFail_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PostBranchInstMaps_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Goal0_22, &Goal_31, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &_Common1_32, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_1_67);
      GoalInfo_34 = ((MR_Word) ((MR_hl_field(0, Goal_31, 1))));
      Purity_35 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_34);
      succeeded = (Purity_35 != (MR_Integer) 2);
      if (succeeded)
      {
        Detism_36 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_34);
        parse_tree__prog_data__determinism_components_3_p_0(Detism_36, &_CanFail_37, &MaxSolns_38);
        succeeded = (MaxSolns_38 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_2_117;
        MR_Word Var_70;
        MR_Word Var_68;
        MR_Word Var_69;

        succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_no_solution_disjunct_1_p_0(STATE_VARIABLE_Info_1_67);
        if (succeeded)
        {
          Var_68 = ((MR_Word) ((MR_hl_field(0, Goal0_22, 0))));
          succeeded = ((((MR_tag((MR_Word) Var_68)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_68, 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Var_69 = ((MR_Word) ((MR_hl_field(3, Var_68, 1))));
            succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_70 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__4_4, 0))) & (MR_Integer) 1);
            succeeded = (Var_70 == (MR_Integer) 0);
          }
        }
        if (succeeded)
        {
          MR_Word Context_40;
          MR_Word MainPieces_41;
          MR_Word ModuleInfo_42;
          MR_Word PredProcId_43;
          MR_Word PredId_44;
          MR_Integer ProcId_45;
          MR_Word PredInfo_46;
          MR_Word ProcTable_47;
          MR_Word Procs_48;
          MR_Word ModePieces_50;
          MR_Word Spec_56;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_116;

          Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_34);
          Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[21])));
          Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[8])));
          MainPieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[19])), Var_75);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_1_67, &ModuleInfo_42);
          check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_1_67, &PredProcId_43);
          PredId_44 = ((MR_Word) ((MR_hl_field(0, PredProcId_43, 0))));
          ProcId_45 = ((MR_Integer) ((MR_hl_field(0, PredProcId_43, 1))));
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_42, PredId_44, &PredInfo_46);
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_46, &ProcTable_47);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_47, &Procs_48);
          if ((Procs_48 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_disj.simplify_disj\'/10", (MR_String) "Procs = []");
              return;
            }
          else
          {
            MR_Word Var_136 = ((MR_Word) ((MR_hl_field(1, Procs_48, 1))));

            if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
              ModePieces_50 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Integer ProcIdInt_54;
              MR_Word PorF_55;
              MR_Integer Var_88;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_97;
              MR_Word Var_100;
              MR_Word Var_101;

              Var_88 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_45);
              ProcIdInt_54 = (MR_Integer) ((MR_Unsigned) Var_88 + (MR_Unsigned) 1);
              PorF_55 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_46);
              {
                Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Var_93, 1) = ((MR_Box) (ProcIdInt_54));
              }
              {
                Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                MR_hl_field(3, Var_101, 1) = (MR_Box) ((MR_Unsigned) (PorF_55));
              }
              {
                Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
                MR_hl_field(1, Var_100, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[27])));
              }
              {
                Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[24])));
                MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
              }
              {
                Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_94, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[23])));
                MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
              }
              {
                Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
                MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_94));
              }
              {
                ModePieces_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ModePieces_50, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[22])));
                MR_hl_field(1, ModePieces_50, 1) = ((MR_Box) (Var_92));
              }
            }
          }
          Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_41, ModePieces_50);
          {
            Spec_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_disj.simplify_disj\'/10"));
            MR_hl_field(0, Spec_56, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_disj_scalar_common_3[3])));
            MR_hl_field(0, Spec_56, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_3[2])));
            MR_hl_field(0, Spec_56, 3) = ((MR_Box) (Context_40));
            MR_hl_field(0, Spec_56, 4) = ((MR_Box) (Var_116));
          }
          check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_56, STATE_VARIABLE_Info_1_67, &STATE_VARIABLE_Info_2_117);
        }
        else
          STATE_VARIABLE_Info_2_117 = STATE_VARIABLE_Info_1_67;
        {
          MR_Word Var_118 = ((MR_Word) ((MR_hl_field(0, Goal0_22, 0))));
          MR_Word Var_119;

          succeeded = ((((MR_tag((MR_Word) Var_118)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_118, 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Var_119 = ((MR_Word) ((MR_hl_field(3, Var_118, 1))));
            succeeded = (Var_119 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (!(succeeded))
        {
          MR_Word Var_135;

          check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(STATE_VARIABLE_Info_2_117, &Var_135);
          succeeded = ((MR_Integer) 0 == Var_135);
        }
        if (succeeded)
        {
          MR_Word DeletedCallCallees0_58;
          MR_Word SubGoalCalledProcs_59;
          MR_Word DeletedCallCallees_60;

          check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_Info_2_117, &DeletedCallCallees0_58);
          SubGoalCalledProcs_59 = hlds__goal_refs__goal_proc_refs_1_f_0(Goal_31);
          mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SubGoalCalledProcs_59, DeletedCallCallees0_58, &DeletedCallCallees_60);
          check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_60, STATE_VARIABLE_Info_2_117, &STATE_VARIABLE_Info_3_121);
          RevGoals1_61 = HeadVar__2_2;
          STATE_VARIABLE_PostBranchInstMaps_1_122 = STATE_VARIABLE_PostBranchInstMaps_0_7;
        }
        else
        {
          MR_Word InstMapDelta_62;

          {
            RevGoals1_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RevGoals1_61, 0) = ((MR_Box) (Goal_31));
            MR_hl_field(1, RevGoals1_61, 1) = ((MR_Box) (HeadVar__2_2));
          }
          InstMapDelta_62 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_34);
          {
            STATE_VARIABLE_PostBranchInstMaps_1_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_PostBranchInstMaps_1_122, 0) = ((MR_Box) (InstMapDelta_62));
            MR_hl_field(1, STATE_VARIABLE_PostBranchInstMaps_1_122, 1) = ((MR_Box) (STATE_VARIABLE_PostBranchInstMaps_0_7));
          }
          STATE_VARIABLE_Info_3_121 = STATE_VARIABLE_Info_2_117;
        }
      }
      else
      {
        MR_Word InstMapDelta_126;

        {
          RevGoals1_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RevGoals1_61, 0) = ((MR_Box) (Goal_31));
          MR_hl_field(1, RevGoals1_61, 1) = ((MR_Box) (HeadVar__2_2));
        }
        InstMapDelta_126 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_34);
        {
          STATE_VARIABLE_PostBranchInstMaps_1_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_PostBranchInstMaps_1_122, 0) = ((MR_Box) (InstMapDelta_126));
          MR_hl_field(1, STATE_VARIABLE_PostBranchInstMaps_1_122, 1) = ((MR_Box) (STATE_VARIABLE_PostBranchInstMaps_0_7));
        }
        STATE_VARIABLE_Info_3_121 = STATE_VARIABLE_Info_1_67;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_23;
      next_value_of_HeadVar__2_2 = RevGoals1_61;
      next_value_of_STATE_VARIABLE_PostBranchInstMaps_0_7 = STATE_VARIABLE_PostBranchInstMaps_1_122;
      next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_3_121;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PostBranchInstMaps_0_7 = next_value_of_STATE_VARIABLE_PostBranchInstMaps_0_7;
      STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = parse_tree__var_table__var_table_entry_name_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Var_9;

  succeeded = check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Var_9);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Var_9));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0(
  MR_Word Innermost_7,
  MR_Word GoalInfo_8,
  MR_Word InstMap0_9,
  MR_Word InstMapDelta_10,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word InstMapDeltaChanges_12;
  MR_Word ModuleInfo_13;
  MR_Word VarTable_14;
  MR_Word ProblemPartialVars_15;
  MR_Word Var_29;

  hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_10, &InstMapDeltaChanges_12);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_27, &ModuleInfo_13);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_27, &VarTable_14);
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_4[0]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (ModuleInfo_13));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (VarTable_14));
    MR_hl_field(0, Var_29, 5) = ((MR_Box) (InstMap0_9));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_2[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0]), Var_29, InstMapDeltaChanges_12, &ProblemPartialVars_15);
  if ((ProblemPartialVars_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
  else
  {
    MR_String ProcStr_18;
    MR_Word ProblemPartialVarNames_22;
    MR_Word ProblemPartialVarsPeriodPieces_23;
    MR_Word Context_24;
    MR_Word Pieces_25;
    MR_Word Spec_26;
    MR_Word Var_40;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_String Var_63;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_String Var_74;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_String Var_85;
    MR_Word Var_88;
    MR_Word Var_91;
    MR_Word Var_94;
    MR_Word Var_97;
    MR_Word Var_100;
    MR_Word Var_103;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Box conv2_Var_63;
    MR_Box conv3_Var_74;
    MR_Box conv4_Var_85;

    if ((Innermost_7 == (MR_Word) ((MR_Unsigned) 0U)))
      ProcStr_18 = (MR_String) "the procedure";
    else
    {
      MR_Word LambdaContext_19 = ((MR_Word) ((MR_hl_field(1, Innermost_7, 0))));
      MR_String LambdaFileName_20;
      MR_Integer LambdaLineNum_21;

      LambdaFileName_20 = mercury__term_context__context_file_1_f_0(LambdaContext_19);
      LambdaLineNum_21 = mercury__term_context__context_line_1_f_0(LambdaContext_19);
      succeeded = (strcmp(LambdaFileName_20, (MR_String) "") == 0);
      if (succeeded)
      {
        MR_String Var_127;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_3[0]), LambdaLineNum_21, &Var_127);
        ProcStr_18 = mercury__string__f_43_43_2_f_0((MR_String) "the lambda expression at line ", Var_127);
      }
      else
      {
        MR_String Var_135;
        MR_String Var_143;
        MR_String Var_144;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_3[0]), LambdaLineNum_21, &Var_135);
        Var_143 = mercury__string__f_43_43_2_f_0((MR_String) " at line ", Var_135);
        Var_144 = mercury__string__f_43_43_2_f_0(LambdaFileName_20, Var_143);
        ProcStr_18 = mercury__string__f_43_43_2_f_0((MR_String) "the lambda expression in ", Var_144);
      }
    }
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_5[0]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_2));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (VarTable_14));
    }
    ProblemPartialVarNames_22 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, ProblemPartialVars_15);
    ProblemPartialVarsPeriodPieces_23 = parse_tree__error_spec__fixed_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[2])), ProblemPartialVarNames_22);
    Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
    Var_52 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[6])));
    conv2_Var_63 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProblemPartialVars_15, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    Var_63 = ((MR_String) (conv2_Var_63));
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[7])));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
    }
    conv3_Var_74 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProblemPartialVars_15, ((MR_Box) ((MR_String) "Since the memory cell of this variable\n                    is allocated *before* the disjunction,")), ((MR_Box) ((MR_String) "Since the memory cells of these variables\n                    are allocated *before* the disjunction,")));
    Var_74 = ((MR_String) (conv3_Var_74));
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
    }
    conv4_Var_85 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProblemPartialVars_15, ((MR_Box) ((MR_String) "for this variable")), ((MR_Box) ((MR_String) "for each of these variables")));
    Var_85 = ((MR_String) (conv4_Var_85));
    {
      Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_84, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_107, 1) = ((MR_Box) (ProcStr_18));
    }
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
      MR_hl_field(1, Var_106, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[17])));
    }
    {
      Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[16])));
      MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[15])));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[14])));
      MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[13])));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_91, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[12])));
      MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[11])));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[10])));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[9])));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_77));
    }
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[8])), Var_72);
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProblemPartialVarsPeriodPieces_23, Var_68);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_67);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_57);
    Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_disj_scalar_common_1[4])), Var_51);
    {
      Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_disj.warn_about_any_problem_partial_vars\'/6"));
      MR_hl_field(0, Spec_26, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_disj_scalar_common_3[1])));
      MR_hl_field(0, Spec_26, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_disj_scalar_common_3[2])));
      MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Context_24));
      MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
    }
    check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_26, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
  }
}

void mercury__check_hlds__simplify__simplify_goal_disj__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_disj__init_type_tables(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_disj__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_disj__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_goal_disj.
