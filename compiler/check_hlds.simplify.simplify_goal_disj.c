/*
** Automatically generated from `simplify_goal_disj.m'
** by the Mercury compiler,
** version DEV
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


/* :- module check_hlds.simplify.simplify_goal_disj. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_goal_disj__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_disj.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_disj__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__IntroducedFrom__pred__warn_about_any_problem_partial_vars__184__1_3_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__VarSet_21,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2_117,
  MR_String * check_hlds__simplify__simplify_goal_disj__HeadVar__3_118);

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_or_else_goals_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__1_1,
  MR_Word * check_hlds__simplify__simplify_goal_disj__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__4_4,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__det_disj_to_ite_3_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2_2,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Goal_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__fixup_disj_8_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__Disjuncts_9,
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo_10,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Goal_11,
  MR_Word check_hlds__simplify__simplify_goal_disj__NestedContext0_12,
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_13,
  MR_Word check_hlds__simplify__simplify_goal_disj__Common0_14,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_disj_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2_2,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Goals_3,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__4_4,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__6_6,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_8,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_9,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_10);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_4_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__ModuleInfo_5,
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_6,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__3_3,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Var_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_2(
  MR_Box check_hlds__simplify__simplify_goal_disj__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_disj__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_disj__wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_disj__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_disj__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_disj__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__Innermost_7,
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo_8,
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_9,
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDelta_10,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_30);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_1[21][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_5[4][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_1[21][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "will never have any solutions."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: this disjunct"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: this disjunction further instantiates"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the already partially instantiated"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the different disjuncts will return"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "their potentially different solutions"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the same memory cell,"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which will cause any all-solutions predicate"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to think that the different solutions"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(since they are at the same address)"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are in fact all the same"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "when invoked on"))
  },
  /* row 18 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_5[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_disj__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_disj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_5[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[7])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_disj_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_disj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_disj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_disj__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_disj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

void MR_CALL 
check_hlds__simplify__simplify_goal_disj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_97_116_111_109_105_99_95_103_111_97_108_95_95_91_49_49_44_32_49_50_93_95_48_16_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalType_17,
  MR_Word check_hlds__simplify__simplify_goal_disj__Outer_18,
  MR_Word check_hlds__simplify__simplify_goal_disj__Inner_19,
  MR_Word check_hlds__simplify__simplify_goal_disj__MaybeOutputVars_20,
  MR_Word check_hlds__simplify__simplify_goal_disj__MainGoal0_21,
  MR_Word check_hlds__simplify__simplify_goal_disj__OrElseGoals0_22,
  MR_Word check_hlds__simplify__simplify_goal_disj__OrElseInners_23,
  MR_Word * check_hlds__simplify__simplify_goal_disj__GoalExpr_24,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_34,
  MR_Word check_hlds__simplify__simplify_goal_disj__Common0_28,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Common0_14,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_35,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_36)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_disj__ShortHand_32;

    *check_hlds__simplify__simplify_goal_disj__Common0_14 = check_hlds__simplify__simplify_goal_disj__Common0_28;
    {
      check_hlds__simplify__simplify_goal_disj__ShortHand_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__GoalType_17));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Outer_18));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Inner_19));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__MaybeOutputVars_20));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__MainGoal0_21));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__OrElseGoals0_22));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 6) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__OrElseInners_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__simplify__simplify_goal_disj__GoalExpr_24 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__ShortHand_32));
    }
    *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_35;
    *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_34 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_0_33;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__IntroducedFrom__pred__warn_about_any_problem_partial_vars__184__1_3_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__VarSet_21,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2_117,
  MR_String * check_hlds__simplify__simplify_goal_disj__HeadVar__3_118)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;

    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_disj__VarSet_21, check_hlds__simplify__simplify_goal_disj__HeadVar__2_117, check_hlds__simplify__simplify_goal_disj__HeadVar__3_118);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_or_else_goals_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__1_1,
  MR_Word * check_hlds__simplify__simplify_goal_disj__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__4_4,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;

    if ((check_hlds__simplify__simplify_goal_disj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__simplify__simplify_goal_disj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_7 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_6;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_disj__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_goal_disj__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_disj__Goal_16;
        MR_Word check_hlds__simplify__simplify_goal_disj__Goals_17;
        MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_25_25;
        MR_Word check_hlds__simplify__simplify_goal_disj___Common1_22;

        {
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_disj__Goal0_14, &check_hlds__simplify__simplify_goal_disj__Goal_16, check_hlds__simplify__simplify_goal_disj__HeadVar__3_3, check_hlds__simplify__simplify_goal_disj__HeadVar__4_4, check_hlds__simplify__simplify_goal_disj__HeadVar__5_5, &check_hlds__simplify__simplify_goal_disj___Common1_22, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_6, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_25_25);
        }
        {
          check_hlds__simplify__simplify_goal_disj__simplify_or_else_goals_7_p_0(check_hlds__simplify__simplify_goal_disj__Goals0_15, &check_hlds__simplify__simplify_goal_disj__Goals_17, check_hlds__simplify__simplify_goal_disj__HeadVar__3_3, check_hlds__simplify__simplify_goal_disj__HeadVar__4_4, check_hlds__simplify__simplify_goal_disj__HeadVar__5_5, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_25_25, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__simplify_goal_disj__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Goal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Goals_17));
        }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__det_disj_to_ite_3_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2_2,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Goal_3)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;

    if ((check_hlds__simplify__simplify_goal_disj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_disj", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_disj.det_disj_to_ite\'/3", (MR_String) "reached base case");
          return;
        }
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_disj__Disjunct_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_goal_disj__Disjuncts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__HeadVar__1_1, (MR_Integer) 1)));

        if ((check_hlds__simplify__simplify_goal_disj__Disjuncts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__simplify__simplify_goal_disj__Goal_3 = check_hlds__simplify__simplify_goal_disj__Disjunct_9;
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_disj__CondGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Disjunct_9, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_disj__Then_18;
            MR_Word check_hlds__simplify__simplify_goal_disj__Rest_19;
            MR_Word check_hlds__simplify__simplify_goal_disj__RestGoalInfo_21;
            MR_Word check_hlds__simplify__simplify_goal_disj__CondNonLocals_22;
            MR_Word check_hlds__simplify__simplify_goal_disj__RestNonLocals_23;
            MR_Word check_hlds__simplify__simplify_goal_disj__NonLocals_24;
            MR_Word check_hlds__simplify__simplify_goal_disj__NewGoalInfo0_25;
            MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDelta0_26;
            MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDelta_27;
            MR_Word check_hlds__simplify__simplify_goal_disj__NewGoalInfo1_28;
            MR_Word check_hlds__simplify__simplify_goal_disj__CondDetism_29;
            MR_Word check_hlds__simplify__simplify_goal_disj__RestDetism_30;
            MR_Word check_hlds__simplify__simplify_goal_disj__CondCanFail_31;
            MR_Word check_hlds__simplify__simplify_goal_disj__CondMaxSoln_32;
            MR_Word check_hlds__simplify__simplify_goal_disj__RestCanFail_33;
            MR_Word check_hlds__simplify__simplify_goal_disj__RestMaxSoln_34;
            MR_Word check_hlds__simplify__simplify_goal_disj__CanFail_35;
            MR_Word check_hlds__simplify__simplify_goal_disj__MaxSoln0_36;
            MR_Word check_hlds__simplify__simplify_goal_disj__MaxSoln_37;
            MR_Word check_hlds__simplify__simplify_goal_disj__Detism_38;
            MR_Word check_hlds__simplify__simplify_goal_disj__NewGoalInfo_39;
            MR_Word check_hlds__simplify__simplify_goal_disj__V_40_40;
            MR_Word check_hlds__simplify__simplify_goal_disj___CondGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Disjunct_9, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_disj___RestGoal_20;

            {
              check_hlds__simplify__simplify_goal_disj__Then_18 = hlds__make_goal__true_goal_0_f_0();
            }
            {
              check_hlds__simplify__simplify_goal_disj__det_disj_to_ite_3_p_0(check_hlds__simplify__simplify_goal_disj__Disjuncts_10, check_hlds__simplify__simplify_goal_disj__HeadVar__2_2, &check_hlds__simplify__simplify_goal_disj__Rest_19);
            }
            check_hlds__simplify__simplify_goal_disj___RestGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Rest_19, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_disj__RestGoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Rest_19, (MR_Integer) 1)));
            {
              check_hlds__simplify__simplify_goal_disj__CondNonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_disj__CondGoalInfo_17);
            }
            {
              check_hlds__simplify__simplify_goal_disj__RestNonLocals_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_disj__RestGoalInfo_21);
            }
            {
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_disj__CondNonLocals_22, check_hlds__simplify__simplify_goal_disj__RestNonLocals_23, &check_hlds__simplify__simplify_goal_disj__NonLocals_24);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_disj__NonLocals_24, check_hlds__simplify__simplify_goal_disj__HeadVar__2_2, &check_hlds__simplify__simplify_goal_disj__NewGoalInfo0_25);
            }
            {
              check_hlds__simplify__simplify_goal_disj__InstMapDelta0_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_disj__HeadVar__2_2);
            }
            {
              hlds__instmap__instmap_delta_restrict_3_p_0(check_hlds__simplify__simplify_goal_disj__NonLocals_24, check_hlds__simplify__simplify_goal_disj__InstMapDelta0_26, &check_hlds__simplify__simplify_goal_disj__InstMapDelta_27);
            }
            {
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_disj__InstMapDelta_27, check_hlds__simplify__simplify_goal_disj__NewGoalInfo0_25, &check_hlds__simplify__simplify_goal_disj__NewGoalInfo1_28);
            }
            {
              check_hlds__simplify__simplify_goal_disj__CondDetism_29 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_disj__CondGoalInfo_17);
            }
            {
              check_hlds__simplify__simplify_goal_disj__RestDetism_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_disj__RestGoalInfo_21);
            }
            {
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_disj__CondDetism_29, &check_hlds__simplify__simplify_goal_disj__CondCanFail_31, &check_hlds__simplify__simplify_goal_disj__CondMaxSoln_32);
            }
            {
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_disj__RestDetism_30, &check_hlds__simplify__simplify_goal_disj__RestCanFail_33, &check_hlds__simplify__simplify_goal_disj__RestMaxSoln_34);
            }
            {
              parse_tree__prog_detism__det_disjunction_canfail_3_p_0(check_hlds__simplify__simplify_goal_disj__CondCanFail_31, check_hlds__simplify__simplify_goal_disj__RestCanFail_33, &check_hlds__simplify__simplify_goal_disj__CanFail_35);
            }
            {
              parse_tree__prog_detism__det_disjunction_maxsoln_3_p_0(check_hlds__simplify__simplify_goal_disj__CondMaxSoln_32, check_hlds__simplify__simplify_goal_disj__RestMaxSoln_34, &check_hlds__simplify__simplify_goal_disj__MaxSoln0_36);
            }
            check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__MaxSoln0_36 == (MR_Integer) 3);
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
              check_hlds__simplify__simplify_goal_disj__MaxSoln_37 = (MR_Integer) 1;
            else
              check_hlds__simplify__simplify_goal_disj__MaxSoln_37 = check_hlds__simplify__simplify_goal_disj__MaxSoln0_36;
            {
              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal_disj__Detism_38, check_hlds__simplify__simplify_goal_disj__CanFail_35, check_hlds__simplify__simplify_goal_disj__MaxSoln_37);
            }
            {
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal_disj__Detism_38, check_hlds__simplify__simplify_goal_disj__NewGoalInfo1_28, &check_hlds__simplify__simplify_goal_disj__NewGoalInfo_39);
            }
            {
              check_hlds__simplify__simplify_goal_disj__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_40_40, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Disjunct_9));
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_40_40, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Then_18));
              MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_40_40, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Rest_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__simplify__simplify_goal_disj__Goal_3 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_40_40));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__NewGoalInfo_39));
            }
          }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__fixup_disj_8_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__Disjuncts_9,
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo_10,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Goal_11,
  MR_Word check_hlds__simplify__simplify_goal_disj__NestedContext0_12,
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_13,
  MR_Word check_hlds__simplify__simplify_goal_disj__Common0_14,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_20,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_21)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_disj__IfThenElse_16;
    MR_Word check_hlds__simplify__simplify_goal_disj__Simplified_17;
    MR_Word check_hlds__simplify__simplify_goal_disj___Common_18;
    MR_Word check_hlds__simplify__simplify_goal_disj__V_19_19;

    {
      check_hlds__simplify__simplify_goal_disj__det_disj_to_ite_3_p_0(check_hlds__simplify__simplify_goal_disj__Disjuncts_9, check_hlds__simplify__simplify_goal_disj__GoalInfo_10, &check_hlds__simplify__simplify_goal_disj__IfThenElse_16);
    }
    {
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_disj__IfThenElse_16, &check_hlds__simplify__simplify_goal_disj__Simplified_17, check_hlds__simplify__simplify_goal_disj__NestedContext0_12, check_hlds__simplify__simplify_goal_disj__InstMap0_13, check_hlds__simplify__simplify_goal_disj__Common0_14, &check_hlds__simplify__simplify_goal_disj___Common_18, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_20, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_21);
    }
    *check_hlds__simplify__simplify_goal_disj__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Simplified_17, (MR_Integer) 0)));
    check_hlds__simplify__simplify_goal_disj__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Simplified_17, (MR_Integer) 1)));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_disj_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2_2,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Goals_3,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__4_4,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__6_6,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_8,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_9,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;

        if ((check_hlds__simplify__simplify_goal_disj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_disj__HeadVar__2_2, check_hlds__simplify__simplify_goal_disj__Goals_3);
            }
            *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_10 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_9;
            *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_8 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_disj__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_disj__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_disj__Goal_31;
            MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo_34;
            MR_Word check_hlds__simplify__simplify_goal_disj__Purity_35;
            MR_Word check_hlds__simplify__simplify_goal_disj__RevGoals1_49;
            MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_55_55;
            MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_85_85;
            MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_86_86;
            MR_Word check_hlds__simplify__simplify_goal_disj___Common1_32;
            MR_Word check_hlds__simplify__simplify_goal_disj__V_33_33;
            MR_Word check_hlds__simplify__simplify_goal_disj__Detism_36;
            MR_Word check_hlds__simplify__simplify_goal_disj__MaxSolns_38;
            MR_Word check_hlds__simplify__simplify_goal_disj___CanFail_37;

            {
              check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_disj__Goal0_22, &check_hlds__simplify__simplify_goal_disj__Goal_31, check_hlds__simplify__simplify_goal_disj__HeadVar__4_4, check_hlds__simplify__simplify_goal_disj__HeadVar__5_5, check_hlds__simplify__simplify_goal_disj__HeadVar__6_6, &check_hlds__simplify__simplify_goal_disj___Common1_32, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_9, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_55_55);
            }
            check_hlds__simplify__simplify_goal_disj__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal_31, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_disj__GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal_31, (MR_Integer) 1)));
            {
              check_hlds__simplify__simplify_goal_disj__Purity_35 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_34);
            }
            check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__Purity_35 == (MR_Integer) 2);
            check_hlds__simplify__simplify_goal_disj__succeeded = !(check_hlds__simplify__simplify_goal_disj__succeeded);
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
              {
                {
                  check_hlds__simplify__simplify_goal_disj__Detism_36 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_34);
                }
                {
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_disj__Detism_36, &check_hlds__simplify__simplify_goal_disj___CanFail_37, &check_hlds__simplify__simplify_goal_disj__MaxSolns_38);
                }
                check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__MaxSolns_38 == (MR_Integer) 0);
              }
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
              {
                MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_81_81;
                MR_Word check_hlds__simplify__simplify_goal_disj__V_58_58;
                MR_Word check_hlds__simplify__simplify_goal_disj__V_56_56;
                MR_Word check_hlds__simplify__simplify_goal_disj__V_57_57;
                MR_Word check_hlds__simplify__simplify_goal_disj__V_39_39;
                MR_Integer check_hlds__simplify__simplify_goal_disj__V_91_91;
                MR_Word check_hlds__simplify__simplify_goal_disj__V_92_92;

                {
                  check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_55_55);
                }
                if (check_hlds__simplify__simplify_goal_disj__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_disj__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal0_22, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_disj__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal0_22, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal_disj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_disj__V_56_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_56_56, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (check_hlds__simplify__simplify_goal_disj__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_disj__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_56_56, (MR_Integer) 1)));
                        check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    check_hlds__simplify__simplify_goal_disj__succeeded = !(check_hlds__simplify__simplify_goal_disj__succeeded);
                    if (check_hlds__simplify__simplify_goal_disj__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_disj__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__HeadVar__4_4, (MR_Integer) 0)));
                        check_hlds__simplify__simplify_goal_disj__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__HeadVar__4_4, (MR_Integer) 1)));
                        check_hlds__simplify__simplify_goal_disj__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__HeadVar__4_4, (MR_Integer) 2)));
                        check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__V_58_58 == (MR_Integer) 0);
                      }
                  }
                if (check_hlds__simplify__simplify_goal_disj__succeeded)
                  {
                    MR_Word check_hlds__simplify__simplify_goal_disj__Context_40;
                    MR_Word check_hlds__simplify__simplify_goal_disj__Msg_42;
                    MR_Word check_hlds__simplify__simplify_goal_disj__Spec_44;
                    MR_Word check_hlds__simplify__simplify_goal_disj__V_79_79;

                    {
                      check_hlds__simplify__simplify_goal_disj__Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_34);
                    }
                    {
                      check_hlds__simplify__simplify_goal_disj__Msg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Msg_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Context_40));
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Msg_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[20])));
                    }
                    {
                      check_hlds__simplify__simplify_goal_disj__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_79_79, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Msg_42));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__simplify__simplify_goal_disj__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_3[0])));
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_disj_scalar_common_5[3])));
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_44, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_79_79));
                    }
                    {
                      check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_disj__Spec_44, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_55_55, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_81_81);
                    }
                  }
                else
                  check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_81_81 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_55_55;
                {
                  MR_Word check_hlds__simplify__simplify_goal_disj__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal0_22, (MR_Integer) 0)));
                  MR_Word check_hlds__simplify__simplify_goal_disj__V_84_84;
                  MR_Word check_hlds__simplify__simplify_goal_disj__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal0_22, (MR_Integer) 1)));

                  check_hlds__simplify__simplify_goal_disj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_disj__V_83_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_83_83, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (check_hlds__simplify__simplify_goal_disj__succeeded)
                    {
                      check_hlds__simplify__simplify_goal_disj__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_83_83, (MR_Integer) 1)));
                      check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
                if (!(check_hlds__simplify__simplify_goal_disj__succeeded))
                  {
                    MR_Word check_hlds__simplify__simplify_goal_disj__V_95_95;

                    {
                      check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_81_81, &check_hlds__simplify__simplify_goal_disj__V_95_95);
                    }
                    check_hlds__simplify__simplify_goal_disj__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal_disj__V_95_95);
                  }
                if (check_hlds__simplify__simplify_goal_disj__succeeded)
                  {
                    MR_Word check_hlds__simplify__simplify_goal_disj__DeletedCallCallees0_46;
                    MR_Word check_hlds__simplify__simplify_goal_disj__SubGoalCalledProcs_47;
                    MR_Word check_hlds__simplify__simplify_goal_disj__DeletedCallCallees_48;

                    {
                      check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_81_81, &check_hlds__simplify__simplify_goal_disj__DeletedCallCallees0_46);
                    }
                    {
                      check_hlds__simplify__simplify_goal_disj__SubGoalCalledProcs_47 = hlds__goal_util__goal_proc_refs_1_f_0(check_hlds__simplify__simplify_goal_disj__Goal_31);
                    }
                    {
                      mercury__set__union_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__simplify__simplify_goal_disj__SubGoalCalledProcs_47, check_hlds__simplify__simplify_goal_disj__DeletedCallCallees0_46, &check_hlds__simplify__simplify_goal_disj__DeletedCallCallees_48);
                    }
                    {
                      check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(check_hlds__simplify__simplify_goal_disj__DeletedCallCallees_48, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_81_81, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_85_85);
                    }
                    check_hlds__simplify__simplify_goal_disj__RevGoals1_49 = check_hlds__simplify__simplify_goal_disj__HeadVar__2_2;
                    check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_86_86 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7;
                  }
                else
                  {
                    MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDelta_50;

                    {
                      check_hlds__simplify__simplify_goal_disj__RevGoals1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__RevGoals1_49, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Goal_31));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__RevGoals1_49, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__HeadVar__2_2));
                    }
                    {
                      check_hlds__simplify__simplify_goal_disj__InstMapDelta_50 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_34);
                    }
                    {
                      check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_86_86, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__InstMapDelta_50));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_86_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7));
                    }
                    check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_85_85 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_81_81;
                  }
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDelta_90;

                {
                  check_hlds__simplify__simplify_goal_disj__RevGoals1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__RevGoals1_49, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Goal_31));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__RevGoals1_49, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__HeadVar__2_2));
                }
                {
                  check_hlds__simplify__simplify_goal_disj__InstMapDelta_90 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_34);
                }
                {
                  check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_86_86, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__InstMapDelta_90));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_86_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7));
                }
                check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_85_85 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_55_55;
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__1__tmp_copy_1 = check_hlds__simplify__simplify_goal_disj__Goals0_23;
              MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_disj__RevGoals1_49;
              MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0__tmp_copy_7 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_86_86;
              MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0__tmp_copy_9 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_85_85;

              check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0__tmp_copy_9;
              check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0__tmp_copy_7;
              check_hlds__simplify__simplify_goal_disj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_disj__HeadVar__2__tmp_copy_2;
              check_hlds__simplify__simplify_goal_disj__HeadVar__1_1 = check_hlds__simplify__simplify_goal_disj__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_4_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__ModuleInfo_5,
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_6,
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__3_3,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Var_7)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_disj__FinalInst_8;
    MR_Word check_hlds__simplify__simplify_goal_disj__InitInst_9;

    *check_hlds__simplify__simplify_goal_disj__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__HeadVar__3_3, (MR_Integer) 0)));
    check_hlds__simplify__simplify_goal_disj__FinalInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__HeadVar__3_3, (MR_Integer) 1)));
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_disj__InstMap0_6, *check_hlds__simplify__simplify_goal_disj__Var_7, &check_hlds__simplify__simplify_goal_disj__InitInst_9);
    }
    {
      check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__simplify__simplify_goal_disj__ModuleInfo_5, check_hlds__simplify__simplify_goal_disj__InitInst_9);
    }
    if (check_hlds__simplify__simplify_goal_disj__succeeded)
      check_hlds__simplify__simplify_goal_disj__succeeded = MR_FALSE;
    else
      {
        {
          check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__simplify__simplify_goal_disj__ModuleInfo_5, check_hlds__simplify__simplify_goal_disj__InitInst_9);
        }
        if (check_hlds__simplify__simplify_goal_disj__succeeded)
          check_hlds__simplify__simplify_goal_disj__succeeded = MR_FALSE;
        else
          {
            {
              check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__simplify__simplify_goal_disj__FinalInst_8, check_hlds__simplify__simplify_goal_disj__InitInst_9, check_hlds__simplify__simplify_goal_disj__ModuleInfo_5);
            }
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
              check_hlds__simplify__simplify_goal_disj__succeeded = MR_FALSE;
            else
              check_hlds__simplify__simplify_goal_disj__succeeded = MR_TRUE;
          }
      }
    return check_hlds__simplify__simplify_goal_disj__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_2(
  MR_Box check_hlds__simplify__simplify_goal_disj__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_disj__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_disj__wrapper_arg_2)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_disj__closure = check_hlds__simplify__simplify_goal_disj__closure_arg;
    MR_String check_hlds__simplify__simplify_goal_disj__conv1_HeadVar__3_118;

    {
      check_hlds__simplify__simplify_goal_disj__IntroducedFrom__pred__warn_about_any_problem_partial_vars__184__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__simplify_goal_disj__wrapper_arg_1), &check_hlds__simplify__simplify_goal_disj__conv1_HeadVar__3_118);
    }
    *check_hlds__simplify__simplify_goal_disj__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__conv1_HeadVar__3_118));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_disj__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_disj__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_disj__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
    MR_Box check_hlds__simplify__simplify_goal_disj__closure = check_hlds__simplify__simplify_goal_disj__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_disj__conv0_Var_7;

    {
      check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__simplify__simplify_goal_disj__wrapper_arg_1), &check_hlds__simplify__simplify_goal_disj__conv0_Var_7);
    }
    if (check_hlds__simplify__simplify_goal_disj__succeeded)
      {
        *check_hlds__simplify__simplify_goal_disj__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__conv0_Var_7));
        check_hlds__simplify__simplify_goal_disj__succeeded = MR_TRUE;
      }
    return check_hlds__simplify__simplify_goal_disj__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__Innermost_7,
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo_8,
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_9,
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDelta_10,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_30)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116;
    MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDeltaChanges_12;
    MR_Word check_hlds__simplify__simplify_goal_disj__ModuleInfo_13;
    MR_Word check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14;
    MR_Word check_hlds__simplify__simplify_goal_disj__V_31_31;

    {
      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(check_hlds__simplify__simplify_goal_disj__InstMapDelta_10, &check_hlds__simplify__simplify_goal_disj__InstMapDeltaChanges_12);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_disj__ModuleInfo_13);
    }
    {
      check_hlds__simplify__simplify_goal_disj__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_31_31, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_31_31, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_31_31, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__ModuleInfo_13));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_31_31, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__InstMap0_9));
    }
    check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116 = (MR_Word) &check_hlds__simplify__simplify_goal_disj_scalar_common_1[0];
    {
      mercury__list__filter_map_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_disj_scalar_common_2[0], check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116, check_hlds__simplify__simplify_goal_disj__V_31_31, check_hlds__simplify__simplify_goal_disj__InstMapDeltaChanges_12, &check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14);
    }
    if ((check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_30 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29;
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120;
        MR_Word check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_121_121;
        MR_String check_hlds__simplify__simplify_goal_disj__ProcStr_17;
        MR_Word check_hlds__simplify__simplify_goal_disj__VarSet_21;
        MR_Word check_hlds__simplify__simplify_goal_disj__ProblemPartialVarNames_22;
        MR_Word check_hlds__simplify__simplify_goal_disj__ProblemPartialVarPieces_23;
        MR_Word check_hlds__simplify__simplify_goal_disj__Context_24;
        MR_Word check_hlds__simplify__simplify_goal_disj__Pieces_25;
        MR_Word check_hlds__simplify__simplify_goal_disj__Msg_26;
        MR_Word check_hlds__simplify__simplify_goal_disj__Spec_28;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_42_42;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_43_43;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_46_46;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_49_49;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_50_50;
        MR_String check_hlds__simplify__simplify_goal_disj__V_51_51;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_55_55;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_56_56;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_63_63;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_64_64;
        MR_String check_hlds__simplify__simplify_goal_disj__V_65_65;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_68_68;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_71_71;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_74_74;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_75_75;
        MR_String check_hlds__simplify__simplify_goal_disj__V_76_76;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_79_79;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_82_82;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_85_85;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_88_88;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_91_91;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_94_94;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_97_97;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_98_98;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_105_105;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_106_106;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_110_110;
        MR_Box check_hlds__simplify__simplify_goal_disj__conv2_V_51_51;
        MR_Box check_hlds__simplify__simplify_goal_disj__conv3_V_65_65;
        MR_Box check_hlds__simplify__simplify_goal_disj__conv4_V_76_76;

        if ((check_hlds__simplify__simplify_goal_disj__Innermost_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__simplify__simplify_goal_disj__ProcStr_17 = (MR_String) "the procedure";
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_disj__LambdaContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__Innermost_7, (MR_Integer) 0)));
            MR_String check_hlds__simplify__simplify_goal_disj__LambdaFileName_19;
            MR_Integer check_hlds__simplify__simplify_goal_disj__LambdaLineNum_20;

            {
              mercury__term__context_file_2_p_0(check_hlds__simplify__simplify_goal_disj__LambdaContext_18, &check_hlds__simplify__simplify_goal_disj__LambdaFileName_19);
            }
            {
              mercury__term__context_line_2_p_0(check_hlds__simplify__simplify_goal_disj__LambdaContext_18, &check_hlds__simplify__simplify_goal_disj__LambdaLineNum_20);
            }
            check_hlds__simplify__simplify_goal_disj__succeeded = (strcmp(check_hlds__simplify__simplify_goal_disj__LambdaFileName_19, (MR_String) "") == 0);
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
              {
                MR_String check_hlds__simplify__simplify_goal_disj__V_122_122;

                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_disj_scalar_common_5[0], check_hlds__simplify__simplify_goal_disj__LambdaLineNum_20, &check_hlds__simplify__simplify_goal_disj__V_122_122);
                }
                {
                  check_hlds__simplify__simplify_goal_disj__ProcStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "the lambda expression at line ", check_hlds__simplify__simplify_goal_disj__V_122_122);
                }
              }
            else
              {
                MR_String check_hlds__simplify__simplify_goal_disj__V_130_130;
                MR_String check_hlds__simplify__simplify_goal_disj__V_138_138;
                MR_String check_hlds__simplify__simplify_goal_disj__V_139_139;

                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_disj_scalar_common_5[0], check_hlds__simplify__simplify_goal_disj__LambdaLineNum_20, &check_hlds__simplify__simplify_goal_disj__V_130_130);
                }
                {
                  check_hlds__simplify__simplify_goal_disj__V_138_138 = mercury__string__f_43_43_2_f_0((MR_String) " at line ", check_hlds__simplify__simplify_goal_disj__V_130_130);
                }
                {
                  check_hlds__simplify__simplify_goal_disj__V_139_139 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_disj__LambdaFileName_19, check_hlds__simplify__simplify_goal_disj__V_138_138);
                }
                {
                  check_hlds__simplify__simplify_goal_disj__ProcStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "the lambda expression in ", check_hlds__simplify__simplify_goal_disj__V_139_139);
                }
              }
          }
        {
          check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_disj__VarSet_21);
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_42_42, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_42_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_42_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__VarSet_21));
        }
        check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          mercury__list__map_3_p_0(check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116, check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120, check_hlds__simplify__simplify_goal_disj__V_42_42, check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14, &check_hlds__simplify__simplify_goal_disj__ProblemPartialVarNames_22);
        }
        {
          check_hlds__simplify__simplify_goal_disj__ProblemPartialVarPieces_23 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__simplify__simplify_goal_disj__ProblemPartialVarNames_22);
        }
        {
          check_hlds__simplify__simplify_goal_disj__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_8);
        }
        check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          check_hlds__simplify__simplify_goal_disj__conv2_V_51_51 = parse_tree__error_util__choose_number_3_f_0(check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116, check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120, check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
        }
        check_hlds__simplify__simplify_goal_disj__V_51_51 = ((MR_String) check_hlds__simplify__simplify_goal_disj__conv2_V_51_51);
        {
          check_hlds__simplify__simplify_goal_disj__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_51_51));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_50_50));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[9])));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_46_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_49_49));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[8])));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_43_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_46_46));
        }
        {
          check_hlds__simplify__simplify_goal_disj__conv3_V_65_65 = parse_tree__error_util__choose_number_3_f_0(check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116, check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120, check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14, ((MR_Box) ((MR_String) "Since the memory cell of this variable\n                    is allocated *before* the disjunction,")), ((MR_Box) ((MR_String) "Since the memory cells of these variables\n                    are allocated *before* the disjunction,")));
        }
        check_hlds__simplify__simplify_goal_disj__V_65_65 = ((MR_String) check_hlds__simplify__simplify_goal_disj__conv3_V_65_65);
        {
          check_hlds__simplify__simplify_goal_disj__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_65_65));
        }
        {
          check_hlds__simplify__simplify_goal_disj__conv4_V_76_76 = parse_tree__error_util__choose_number_3_f_0(check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116, check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120, check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14, ((MR_Box) ((MR_String) "for this variable")), ((MR_Box) ((MR_String) "for each of these variables")));
        }
        check_hlds__simplify__simplify_goal_disj__V_76_76 = ((MR_String) check_hlds__simplify__simplify_goal_disj__conv4_V_76_76);
        {
          check_hlds__simplify__simplify_goal_disj__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_75_75, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_76_76));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_98_98, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__ProcStr_17));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_97_97, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_98_98));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[3])));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[17])));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_94_94, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_97_97));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[16])));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_91_91, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_94_94));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[15])));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_88_88, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_91_91));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[14])));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_85_85, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_88_88));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[13])));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_82_82, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_85_85));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[12])));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_79_79, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_82_82));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_74_74, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_75_75));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_74_74, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_79_79));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[11])));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_71_71, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_74_74));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[10])));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_68_68, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_71_71));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_64_64));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_68_68));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_56_56 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_121_121, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[3]), check_hlds__simplify__simplify_goal_disj__V_63_63);
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_55_55 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_121_121, check_hlds__simplify__simplify_goal_disj__ProblemPartialVarPieces_23, check_hlds__simplify__simplify_goal_disj__V_56_56);
        }
        {
          check_hlds__simplify__simplify_goal_disj__Pieces_25 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_121_121, check_hlds__simplify__simplify_goal_disj__V_43_43, check_hlds__simplify__simplify_goal_disj__V_55_55);
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_106_106, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Pieces_25));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_105_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_106_106));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__simplify_goal_disj__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Msg_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Context_24));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Msg_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_105_105));
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_110_110, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Msg_26));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__simplify_goal_disj__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_disj_scalar_common_5[1])));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_28, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_110_110));
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_disj__Spec_28, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_30);
        }
      }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_goal_atomic_goal_16_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalType_17,
  MR_Word check_hlds__simplify__simplify_goal_disj__Outer_18,
  MR_Word check_hlds__simplify__simplify_goal_disj__Inner_19,
  MR_Word check_hlds__simplify__simplify_goal_disj__MaybeOutputVars_20,
  MR_Word check_hlds__simplify__simplify_goal_disj__MainGoal0_21,
  MR_Word check_hlds__simplify__simplify_goal_disj__OrElseGoals0_22,
  MR_Word check_hlds__simplify__simplify_goal_disj__OrElseInners_23,
  MR_Word * check_hlds__simplify__simplify_goal_disj__GoalExpr_24,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_0_33,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_34,
  MR_Word check_hlds__simplify__simplify_goal_disj___NestedContext0_26,
  MR_Word check_hlds__simplify__simplify_goal_disj___InstMap0_27,
  MR_Word check_hlds__simplify__simplify_goal_disj__Common0_28,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Common0_14,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_35,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_36)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;

    {
      check_hlds__simplify__simplify_goal_disj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_97_116_111_109_105_99_95_103_111_97_108_95_95_91_49_49_44_32_49_50_93_95_48_16_p_0(check_hlds__simplify__simplify_goal_disj__GoalType_17, check_hlds__simplify__simplify_goal_disj__Outer_18, check_hlds__simplify__simplify_goal_disj__Inner_19, check_hlds__simplify__simplify_goal_disj__MaybeOutputVars_20, check_hlds__simplify__simplify_goal_disj__MainGoal0_21, check_hlds__simplify__simplify_goal_disj__OrElseGoals0_22, check_hlds__simplify__simplify_goal_disj__OrElseInners_23, check_hlds__simplify__simplify_goal_disj__GoalExpr_24, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_0_33, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_34, check_hlds__simplify__simplify_goal_disj__Common0_28, check_hlds__simplify__simplify_goal_disj__Common0_14, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_36);
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_goal_disj_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_disj__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_disj__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_disj__NestedContext0_15,
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_disj__Common0_17,
  MR_Word * check_hlds__simplify__simplify_goal_disj__Common_18,
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_38,
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_39)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_55_55;
    MR_Word check_hlds__simplify__simplify_goal_disj__Disjuncts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__GoalExpr0_11, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_disj__Disjuncts_21;
    MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDeltas_22;
    MR_Integer check_hlds__simplify__simplify_goal_disj__DisjunctsLength_36;
    MR_Integer check_hlds__simplify__simplify_goal_disj__Disjuncts0Length_37;
    MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42;
    MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49;

    {
      check_hlds__simplify__simplify_goal_disj__simplify_disj_10_p_0(check_hlds__simplify__simplify_goal_disj__Disjuncts0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_disj__Disjuncts_21, check_hlds__simplify__simplify_goal_disj__NestedContext0_15, check_hlds__simplify__simplify_goal_disj__InstMap0_16, check_hlds__simplify__simplify_goal_disj__Common0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_disj__InstMapDeltas_22, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_38, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42);
    }
    if ((check_hlds__simplify__simplify_goal_disj__Disjuncts_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__simplify__simplify_goal_disj__Context_23;
        MR_Word check_hlds__simplify__simplify_goal_disj__V_50_50;

        {
          check_hlds__simplify__simplify_goal_disj__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo0_13);
        }
        {
          check_hlds__simplify__simplify_goal_disj__V_50_50 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_disj__Context_23);
        }
        *check_hlds__simplify__simplify_goal_disj__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_50_50, (MR_Integer) 0)));
        *check_hlds__simplify__simplify_goal_disj__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_50_50, (MR_Integer) 1)));
        check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_disj__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__Disjuncts_21, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_disj__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__Disjuncts_21, (MR_Integer) 0)));

        if ((check_hlds__simplify__simplify_goal_disj__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__simplify__simplify_goal_disj__Goal1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_57_57, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_57_57, (MR_Integer) 1)));

            {
              check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_disj__GoalInfo0_13, check_hlds__simplify__simplify_goal_disj__GoalInfo1_26, check_hlds__simplify__simplify_goal_disj__Goal1_25, check_hlds__simplify__simplify_goal_disj__GoalExpr_12, check_hlds__simplify__simplify_goal_disj__GoalInfo_14, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49);
            }
          }
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__simplify__simplify_goal_disj__GoalExpr_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Disjuncts_21));
            }
            {
              check_hlds__simplify__simplify_goal_disj__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal_disj__GoalInfo0_13, (MR_Integer) 14);
            }
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
              {
                *check_hlds__simplify__simplify_goal_disj__GoalInfo_14 = check_hlds__simplify__simplify_goal_disj__GoalInfo0_13;
                check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42;
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_disj__ModuleInfo1_30;
                MR_Word check_hlds__simplify__simplify_goal_disj__NonLocals_31;
                MR_Word check_hlds__simplify__simplify_goal_disj__VarTypes_32;
                MR_Word check_hlds__simplify__simplify_goal_disj__NewDelta_33;
                MR_Word check_hlds__simplify__simplify_goal_disj__ModuleInfo2_34;
                MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_45_45;
                MR_Word check_hlds__simplify__simplify_goal_disj__Innermost_35;
                MR_Word check_hlds__simplify__simplify_goal_disj__V_46_46;
                MR_Word check_hlds__simplify__simplify_goal_disj__V_53_53;
                MR_Integer check_hlds__simplify__simplify_goal_disj__V_54_54;

                {
                  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_disj__ModuleInfo1_30);
                }
                {
                  check_hlds__simplify__simplify_goal_disj__NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo0_13);
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_disj__VarTypes_32);
                }
                {
                  hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__simplify__simplify_goal_disj__InstMap0_16, check_hlds__simplify__simplify_goal_disj__NonLocals_31, check_hlds__simplify__simplify_goal_disj__VarTypes_32, check_hlds__simplify__simplify_goal_disj__InstMapDeltas_22, &check_hlds__simplify__simplify_goal_disj__NewDelta_33, check_hlds__simplify__simplify_goal_disj__ModuleInfo1_30, &check_hlds__simplify__simplify_goal_disj__ModuleInfo2_34);
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_disj__ModuleInfo2_34, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_45_45);
                }
                {
                  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_disj__NewDelta_33, check_hlds__simplify__simplify_goal_disj__GoalInfo0_13, check_hlds__simplify__simplify_goal_disj__GoalInfo_14);
                }
                {
                  check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_45_45);
                }
                if (check_hlds__simplify__simplify_goal_disj__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_disj__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__NestedContext0_15, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_disj__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__NestedContext0_15, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal_disj__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__NestedContext0_15, (MR_Integer) 2)));
                    check_hlds__simplify__simplify_goal_disj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_disj__V_46_46)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__simplify_goal_disj__succeeded)
                      check_hlds__simplify__simplify_goal_disj__Innermost_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_46_46, (MR_Integer) 0)));
                  }
                if (check_hlds__simplify__simplify_goal_disj__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0(check_hlds__simplify__simplify_goal_disj__Innermost_35, check_hlds__simplify__simplify_goal_disj__GoalInfo0_13, check_hlds__simplify__simplify_goal_disj__InstMap0_16, check_hlds__simplify__simplify_goal_disj__NewDelta_33, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_45_45, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49);
                  }
                else
                  check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_45_45;
              }
          }
      }
    *check_hlds__simplify__simplify_goal_disj__Common_18 = check_hlds__simplify__simplify_goal_disj__Common0_17;
    check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      mercury__list__length_2_p_0(check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_55_55, check_hlds__simplify__simplify_goal_disj__Disjuncts_21, &check_hlds__simplify__simplify_goal_disj__DisjunctsLength_36);
    }
    {
      mercury__list__length_2_p_0(check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_55_55, check_hlds__simplify__simplify_goal_disj__Disjuncts0_20, &check_hlds__simplify__simplify_goal_disj__Disjuncts0Length_37);
    }
    check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__DisjunctsLength_36 == check_hlds__simplify__simplify_goal_disj__Disjuncts0Length_37);
    if (check_hlds__simplify__simplify_goal_disj__succeeded)
      *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_39 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49;
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_51_51;

        {
          check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_51_51);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_51_51, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_39);
        }
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_goal_disj. */
