/*
** Automatically generated from `simplify_goal_disj.m'
** by the Mercury compiler,
** version rotd-2022-07-26
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
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
check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstMap0_6,
  MR_Word HeadVar__3_3,
  MR_Word * Var_7);

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


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_1[24][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_5[1][6];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_1[24][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: this disjunction further instantiates"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the already partially instantiated"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the different disjuncts will return"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "their potentially different solutions"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the same memory cell,"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which will cause any all-solutions predicate"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to think that the different solutions"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(since they are at the same address)"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are in fact all the same"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "when invoked on"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "will never have any solutions."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: this disjunct"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This warning applies to the"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of this"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It may or may not apply to other modes."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[3])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[22])))
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

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_3[2][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
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



static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word STATE_VARIABLE_Info_25_25;
    MR_Word _Common1_22;

    check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Goal0_14, &Goal_16, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, &_Common1_22, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_25_25);
    check_hlds__simplify__simplify_goal_disj__simplify_or_else_goals_7_p_0(Goals0_15, &Goals_17, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_17));
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
  *Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Simplified_17, (MR_Integer) 0))));
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
    MR_Word Disjunct_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Disjuncts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

    if ((Disjuncts_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *Goal_3 = Disjunct_8;
    else
    {
      MR_Word CondGoalInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_8, (MR_Integer) 1))));
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
      RestGoalInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rest_18, (MR_Integer) 1))));
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
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_39, 2) = ((MR_Box) (Disjunct_8));
        MR_hl_field(MR_mktag(3), Var_39, 3) = ((MR_Box) (Then_17));
        MR_hl_field(MR_mktag(3), Var_39, 4) = ((MR_Box) (Rest_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_3 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NewGoalInfo_38));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstMap0_6,
  MR_Word HeadVar__3_3,
  MR_Word * Var_7)
{
  MR_bool succeeded;
  MR_Word FinalInst_8;
  MR_Word InitInst_9;

  *Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
  FinalInst_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_6, *Var_7, &InitInst_9);
  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, InitInst_9);
  if (succeeded)
    succeeded = MR_FALSE;
  else
  {
    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_5, InitInst_9);
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(ModuleInfo_5, FinalInst_8, InitInst_9);
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
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word _NestedContext0_26,
  MR_Word _InstMap0_27,
  MR_Word Common0_28,
  MR_Word * Common0_14,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  check_hlds__simplify__simplify_goal_disj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_97_116_111_109_105_99_95_103_111_97_108_95_95_91_49_49_44_32_49_50_93_95_48_16_p_0(GoalType_17, Outer_18, Inner_19, MaybeOutputVars_20, MainGoal0_21, OrElseGoals0_22, OrElseInners_23, GoalExpr_24, STATE_VARIABLE_GoalInfo_0_33, STATE_VARIABLE_GoalInfo_34, Common0_28, Common0_14, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
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
  MR_Word STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * STATE_VARIABLE_GoalInfo_34,
  MR_Word Common0_28,
  MR_Word * Common0_14,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_Word ShortHand_32;

  *Common0_14 = Common0_28;
  {
    ShortHand_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ShortHand_32, 0) = (MR_Box) ((MR_Unsigned) (GoalType_17));
    MR_hl_field(MR_mktag(1), ShortHand_32, 1) = ((MR_Box) (Outer_18));
    MR_hl_field(MR_mktag(1), ShortHand_32, 2) = ((MR_Box) (Inner_19));
    MR_hl_field(MR_mktag(1), ShortHand_32, 3) = ((MR_Box) (MaybeOutputVars_20));
    MR_hl_field(MR_mktag(1), ShortHand_32, 4) = ((MR_Box) (MainGoal0_21));
    MR_hl_field(MR_mktag(1), ShortHand_32, 5) = ((MR_Box) (OrElseGoals0_22));
    MR_hl_field(MR_mktag(1), ShortHand_32, 6) = ((MR_Box) (OrElseInners_23));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_24 = base;
    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_32));
  }
  *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
  *STATE_VARIABLE_GoalInfo_34 = STATE_VARIABLE_GoalInfo_0_33;
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
  MR_Word Disjuncts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
  MR_Word Disjuncts_21;
  MR_Word InstMapDeltas_22;
  MR_Integer DisjunctsLength_36;
  MR_Integer Disjuncts0Length_37;
  MR_Word STATE_VARIABLE_Info_42_42;
  MR_Word STATE_VARIABLE_Info_45_45;

  check_hlds__simplify__simplify_goal_disj__simplify_disj_10_p_0(Disjuncts0_20, (MR_Word) ((MR_Unsigned) 0U), &Disjuncts_21, NestedContext0_15, InstMap0_16, Common0_17, (MR_Word) ((MR_Unsigned) 0U), &InstMapDeltas_22, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_42_42);
  if ((Disjuncts_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_23;
    MR_Word Var_43;

    Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
    Var_43 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_23);
    *GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
    *GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 1))));
    STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_42_42;
  }
  else
  {
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts_21, (MR_Integer) 1))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts_21, (MR_Integer) 0))));

    if ((Var_56 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
      MR_Word GoalInfo1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1))));

      check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(GoalInfo0_13, GoalInfo1_26, Goal1_25, GoalExpr_12, GoalInfo_14, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_45_45);
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_12 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Disjuncts_21));
      }
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_13, (MR_Integer) 17);
      if (succeeded)
      {
        *GoalInfo_14 = GoalInfo0_13;
        STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_42_42;
      }
      else
      {
        MR_Word ModuleInfo1_30;
        MR_Word NonLocals_31;
        MR_Word VarTable_32;
        MR_Word NewDelta_33;
        MR_Word ModuleInfo2_34;
        MR_Word Var_48;
        MR_Word STATE_VARIABLE_Info_49_49;
        MR_Word Innermost_35;
        MR_Word Var_50;

        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_42_42, &ModuleInfo1_30);
        NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
        check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_42_42, &VarTable_32);
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (VarTable_32));
        }
        hlds__instmap__merge_instmap_deltas_7_p_0(Var_48, NonLocals_31, InstMap0_16, InstMapDeltas_22, &NewDelta_33, ModuleInfo1_30, &ModuleInfo2_34);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo2_34, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_49_49);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(NewDelta_33, GoalInfo0_13, GoalInfo_14);
        succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(STATE_VARIABLE_Info_49_49);
        if (succeeded)
        {
          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NestedContext0_15, (MR_Integer) 1))));
          succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            Innermost_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0))));
        }
        if (succeeded)
          check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0(Innermost_35, GoalInfo0_13, InstMap0_16, NewDelta_33, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_45_45);
        else
          STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_49_49;
      }
    }
  }
  *Common_18 = Common0_17;
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjuncts_21, &DisjunctsLength_36);
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjuncts0_20, &Disjuncts0Length_37);
  succeeded = (DisjunctsLength_36 == Disjuncts0Length_37);
  if (succeeded)
    *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_45_45;
  else
  {
    MR_Word STATE_VARIABLE_Info_52_52;

    check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_52_52);
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_39);
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
      MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_31;
      MR_Word GoalInfo_34;
      MR_Word Purity_35;
      MR_Word RevGoals1_61;
      MR_Word STATE_VARIABLE_Info_67_67;
      MR_Word STATE_VARIABLE_Info_118_118;
      MR_Word STATE_VARIABLE_PostBranchInstMaps_119_119;
      MR_Word _Common1_32;
      MR_Word Detism_36;
      MR_Word MaxSolns_38;
      MR_Word _CanFail_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PostBranchInstMaps_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Goal0_22, &Goal_31, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &_Common1_32, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_67_67);
      GoalInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_31, (MR_Integer) 1))));
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
        MR_Word STATE_VARIABLE_Info_114_114;
        MR_Word Var_70;
        MR_Word Var_68;
        MR_Word Var_69;

        succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_no_solution_disjunct_1_p_0(STATE_VARIABLE_Info_67_67);
        if (succeeded)
        {
          Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_22, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_68)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_68, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_68, (MR_Integer) 1))));
            succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (Var_70 == (MR_Integer) 0);
          }
        }
        if (succeeded)
        {
          MR_Word Context_40;
          MR_Word ModuleInfo_42;
          MR_Word PredProcId_43;
          MR_Word PredId_44;
          MR_Integer ProcId_45;
          MR_Word PredInfo_46;
          MR_Word ProcTable_47;
          MR_Word Procs_48;
          MR_Word ModePieces_50;
          MR_Word Spec_56;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word Var_112;

          Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_34);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_67_67, &ModuleInfo_42);
          check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_67_67, &PredProcId_43);
          PredId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_43, (MR_Integer) 0))));
          ProcId_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_43, (MR_Integer) 1))));
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
            MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Procs_48, (MR_Integer) 1))));

            if ((Var_132 == (MR_Word) ((MR_Unsigned) 0U)))
              ModePieces_50 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Integer ProcIdInt_54;
              MR_Word PorF_55;
              MR_Integer Var_81;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_90;
              MR_Word Var_93;
              MR_Word Var_94;

              Var_81 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_45);
              ProcIdInt_54 = (MR_Integer) ((MR_Unsigned) Var_81 + (MR_Unsigned) 1);
              PorF_55 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_46);
              {
                Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (ProcIdInt_54));
              }
              {
                Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 27U));
                MR_hl_field(MR_mktag(3), Var_94, 1) = (MR_Box) ((MR_Unsigned) (PorF_55));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[23])));
              }
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[20])));
                MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_93));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[19])));
                MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
              }
              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
                MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_87));
              }
              {
                ModePieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ModePieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[18])));
                MR_hl_field(MR_mktag(1), ModePieces_50, 1) = ((MR_Box) (Var_85));
              }
            }
          }
          Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[17])), ModePieces_50);
          {
            Var_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (Context_40));
            MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (Var_112));
          }
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
            MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_disj.simplify_disj\'/10"));
            MR_hl_field(MR_mktag(3), Spec_56, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Spec_56, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_disj_scalar_common_3[1])));
            MR_hl_field(MR_mktag(3), Spec_56, 4) = ((MR_Box) (Var_110));
          }
          check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_56, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_114_114);
        }
        else
          STATE_VARIABLE_Info_114_114 = STATE_VARIABLE_Info_67_67;
        {
          MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_22, (MR_Integer) 0))));
          MR_Word Var_116;

          succeeded = ((((MR_tag((MR_Word) Var_115)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_115, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_115, (MR_Integer) 1))));
            succeeded = (Var_116 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (!(succeeded))
        {
          MR_Word Var_131;

          check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(STATE_VARIABLE_Info_114_114, &Var_131);
          succeeded = ((MR_Integer) 0 == Var_131);
        }
        if (succeeded)
        {
          MR_Word DeletedCallCallees0_58;
          MR_Word SubGoalCalledProcs_59;
          MR_Word DeletedCallCallees_60;

          check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_Info_114_114, &DeletedCallCallees0_58);
          SubGoalCalledProcs_59 = hlds__goal_util__goal_proc_refs_1_f_0(Goal_31);
          mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SubGoalCalledProcs_59, DeletedCallCallees0_58, &DeletedCallCallees_60);
          check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_60, STATE_VARIABLE_Info_114_114, &STATE_VARIABLE_Info_118_118);
          RevGoals1_61 = HeadVar__2_2;
          STATE_VARIABLE_PostBranchInstMaps_119_119 = STATE_VARIABLE_PostBranchInstMaps_0_7;
        }
        else
        {
          MR_Word InstMapDelta_62;

          {
            RevGoals1_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RevGoals1_61, 0) = ((MR_Box) (Goal_31));
            MR_hl_field(MR_mktag(1), RevGoals1_61, 1) = ((MR_Box) (HeadVar__2_2));
          }
          InstMapDelta_62 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_34);
          {
            STATE_VARIABLE_PostBranchInstMaps_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PostBranchInstMaps_119_119, 0) = ((MR_Box) (InstMapDelta_62));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_PostBranchInstMaps_119_119, 1) = ((MR_Box) (STATE_VARIABLE_PostBranchInstMaps_0_7));
          }
          STATE_VARIABLE_Info_118_118 = STATE_VARIABLE_Info_114_114;
        }
      }
      else
      {
        MR_Word InstMapDelta_123;

        {
          RevGoals1_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RevGoals1_61, 0) = ((MR_Box) (Goal_31));
          MR_hl_field(MR_mktag(1), RevGoals1_61, 1) = ((MR_Box) (HeadVar__2_2));
        }
        InstMapDelta_123 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_34);
        {
          STATE_VARIABLE_PostBranchInstMaps_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_PostBranchInstMaps_119_119, 0) = ((MR_Box) (InstMapDelta_123));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_PostBranchInstMaps_119_119, 1) = ((MR_Box) (STATE_VARIABLE_PostBranchInstMaps_0_7));
        }
        STATE_VARIABLE_Info_118_118 = STATE_VARIABLE_Info_67_67;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_23;
      next_value_of_HeadVar__2_2 = RevGoals1_61;
      next_value_of_STATE_VARIABLE_PostBranchInstMaps_0_7 = STATE_VARIABLE_PostBranchInstMaps_119_119;
      next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_118_118;
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

  conv1_HeadVar__3_3 = parse_tree__var_table__var_table_entry_name_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word conv0_Var_7;

  succeeded = check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Var_7);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Var_7));
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
  MR_Word ProblemPartialVars_14;
  MR_Word Var_29;

  hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_10, &InstMapDeltaChanges_12);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_27, &ModuleInfo_13);
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ModuleInfo_13));
    MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (InstMap0_9));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_2[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0]), Var_29, InstMapDeltaChanges_12, &ProblemPartialVars_14);
  if ((ProblemPartialVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
  else
  {
    MR_String ProcStr_17;
    MR_Word VarTable_21;
    MR_Word ProblemPartialVarNames_22;
    MR_Word ProblemPartialVarPieces_23;
    MR_Word Context_24;
    MR_Word Pieces_25;
    MR_Word Spec_26;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_String Var_49;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_String Var_63;
    MR_Word Var_66;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_String Var_74;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_83;
    MR_Word Var_86;
    MR_Word Var_89;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Box conv2_Var_49;
    MR_Box conv3_Var_63;
    MR_Box conv4_Var_74;

    if ((Innermost_7 == (MR_Word) ((MR_Unsigned) 0U)))
      ProcStr_17 = (MR_String) "the procedure";
    else
    {
      MR_Word LambdaContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Innermost_7, (MR_Integer) 0))));
      MR_String LambdaFileName_19;
      MR_Integer LambdaLineNum_20;

      mercury__term__context_file_2_p_0(LambdaContext_18, &LambdaFileName_19);
      mercury__term__context_line_2_p_0(LambdaContext_18, &LambdaLineNum_20);
      succeeded = (strcmp(LambdaFileName_19, (MR_String) "") == 0);
      if (succeeded)
      {
        MR_String Var_115;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_3[0]), LambdaLineNum_20, &Var_115);
        ProcStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "the lambda expression at line ", Var_115);
      }
      else
      {
        MR_String Var_123;
        MR_String Var_131;
        MR_String Var_132;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_3[0]), LambdaLineNum_20, &Var_123);
        Var_131 = mercury__string__f_43_43_2_f_0((MR_String) " at line ", Var_123);
        Var_132 = mercury__string__f_43_43_2_f_0(LambdaFileName_19, Var_131);
        ProcStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "the lambda expression in ", Var_132);
      }
    }
    check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_27, &VarTable_21);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (VarTable_21));
    }
    ProblemPartialVarNames_22 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, ProblemPartialVars_14);
    ProblemPartialVarPieces_23 = parse_tree__error_util__list_to_pieces_1_f_0(ProblemPartialVarNames_22);
    Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
    conv2_Var_49 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProblemPartialVars_14, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    Var_49 = ((MR_String) (conv2_Var_49));
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[2])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[1])));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    conv3_Var_63 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProblemPartialVars_14, ((MR_Box) ((MR_String) "Since the memory cell of this variable\n                    is allocated *before* the disjunction,")), ((MR_Box) ((MR_String) "Since the memory cells of these variables\n                    are allocated *before* the disjunction,")));
    Var_63 = ((MR_String) (conv3_Var_63));
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
    }
    conv4_Var_74 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProblemPartialVars_14, ((MR_Box) ((MR_String) "for this variable")), ((MR_Box) ((MR_String) "for each of these variables")));
    Var_74 = ((MR_String) (conv4_Var_74));
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (ProcStr_17));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[5])));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[13])));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[12])));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[11])));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[10])));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[9])));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[8])));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[7])));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[6])));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_66));
    }
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[5])), Var_61);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProblemPartialVarPieces_23, Var_54);
    Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_41, Var_53);
    {
      Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_disj.warn_about_any_problem_partial_vars\'/6"));
      MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_disj_scalar_common_3[1])));
      MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (Context_24));
      MR_hl_field(MR_mktag(1), Spec_26, 4) = ((MR_Box) (Pieces_25));
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
