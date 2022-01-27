/*
** Automatically generated from `simplify_goal_disj.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 151 "check_hlds.simplify.simplify_goal_disj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "check_hlds.simplify.simplify_goal_disj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_disj__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 157 "check_hlds.simplify.simplify_goal_disj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "check_hlds.simplify.simplify_goal_disj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 182 "simplify_goal_disj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__IntroducedFrom__pred__warn_about_any_problem_partial_vars__182__1_3_p_0(
#line 182 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__VarSet_21,
#line 182 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2_117,
#line 182 "simplify_goal_disj.m"
  MR_String * check_hlds__simplify__simplify_goal_disj__HeadVar__3_118);

#line 244 "simplify_goal_disj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_disj_10_p_0(
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__1_1,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2_2,
#line 244 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__Goals_3,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__4_4,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__5_5,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__6_6,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7,
#line 244 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_8,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_9,
#line 244 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_10);

#line 213 "simplify_goal_disj.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_4_p_0(
#line 213 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__ModuleInfo_5,
#line 213 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_6,
#line 213 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__3_3,
#line 213 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__Var_7);

#line 182 "simplify_goal_disj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_2(
#line 182 "simplify_goal_disj.m"
  MR_Box check_hlds__simplify__simplify_goal_disj__closure_arg,
#line 182 "simplify_goal_disj.m"
  MR_Box check_hlds__simplify__simplify_goal_disj__wrapper_arg_1,
#line 182 "simplify_goal_disj.m"
  MR_Box * check_hlds__simplify__simplify_goal_disj__wrapper_arg_2);

#line 153 "simplify_goal_disj.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_1(
#line 153 "simplify_goal_disj.m"
  MR_Box check_hlds__simplify__simplify_goal_disj__closure_arg,
#line 153 "simplify_goal_disj.m"
  MR_Box check_hlds__simplify__simplify_goal_disj__wrapper_arg_1,
#line 153 "simplify_goal_disj.m"
  MR_Box * check_hlds__simplify__simplify_goal_disj__wrapper_arg_2);

#line 145 "simplify_goal_disj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0(
#line 145 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__Innermost_7,
#line 145 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo_8,
#line 145 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_9,
#line 145 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDelta_10,
#line 145 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29,
#line 145 "simplify_goal_disj.m"
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



#line 441 "check_hlds.simplify.simplify_goal_disj.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 449 "check_hlds.simplify.simplify_goal_disj.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_disj__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_disj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 458 "check_hlds.simplify.simplify_goal_disj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 466 "check_hlds.simplify.simplify_goal_disj.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_disj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 41 "simplify_goal_disj.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_disj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_97_116_111_109_105_99_95_103_111_97_108_95_95_91_49_49_44_32_49_50_93_95_48_16_p_0(
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalType_17,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__Outer_18,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__Inner_19,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__MaybeOutputVars_20,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__MainGoal0_21,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__OrElseGoals0_22,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__OrElseInners_23,
#line 41 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__GoalExpr_24,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_0_33,
#line 41 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_34,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__Common0_28,
#line 41 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__Common0_14,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_35,
#line 41 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_36)
#line 41 "simplify_goal_disj.m"
{
#line 425 "simplify_goal_disj.m"
  {
#line 425 "simplify_goal_disj.m"
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
#line 425 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__ShortHand_32;

#line 425 "simplify_goal_disj.m"
    *check_hlds__simplify__simplify_goal_disj__Common0_14 = check_hlds__simplify__simplify_goal_disj__Common0_28;
#line 436 "simplify_goal_disj.m"
    {
#line 436 "simplify_goal_disj.m"
      check_hlds__simplify__simplify_goal_disj__ShortHand_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 436 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__GoalType_17));
#line 436 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Outer_18));
#line 436 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Inner_19));
#line 436 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__MaybeOutputVars_20));
#line 436 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__MainGoal0_21));
#line 436 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__OrElseGoals0_22));
#line 436 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__ShortHand_32, 6) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__OrElseInners_23));
#line 436 "simplify_goal_disj.m"
    }
#line 438 "simplify_goal_disj.m"
    {
#line 438 "simplify_goal_disj.m"
      MR_Word base;
#line 438 "simplify_goal_disj.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "simplify_goal_disj.m"
      *check_hlds__simplify__simplify_goal_disj__GoalExpr_24 = base;
#line 438 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 438 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__ShortHand_32));
#line 438 "simplify_goal_disj.m"
    }
#line 425 "simplify_goal_disj.m"
    *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_35;
#line 425 "simplify_goal_disj.m"
    *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_34 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_0_33;
#line 425 "simplify_goal_disj.m"
  }
#line 41 "simplify_goal_disj.m"
}

#line 182 "simplify_goal_disj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__IntroducedFrom__pred__warn_about_any_problem_partial_vars__182__1_3_p_0(
#line 182 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__VarSet_21,
#line 182 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2_117,
#line 182 "simplify_goal_disj.m"
  MR_String * check_hlds__simplify__simplify_goal_disj__HeadVar__3_118)
#line 182 "simplify_goal_disj.m"
{
#line 182 "simplify_goal_disj.m"
  {
#line 182 "simplify_goal_disj.m"
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;

#line 182 "simplify_goal_disj.m"
    {
#line 182 "simplify_goal_disj.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_disj__VarSet_21, check_hlds__simplify__simplify_goal_disj__HeadVar__2_117, check_hlds__simplify__simplify_goal_disj__HeadVar__3_118);
    }
#line 182 "simplify_goal_disj.m"
  }
#line 182 "simplify_goal_disj.m"
}

#line 244 "simplify_goal_disj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_disj_10_p_0(
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__1_1,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2_2,
#line 244 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__Goals_3,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__4_4,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__5_5,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__6_6,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7,
#line 244 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_8,
#line 244 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_9,
#line 244 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_10)
#line 244 "simplify_goal_disj.m"
{
#line 251 "simplify_goal_disj.m"
  while (MR_TRUE)
#line 251 "simplify_goal_disj.m"
    {
#line 251 "simplify_goal_disj.m"
      /* tailcall optimized into a loop */
#line 251 "simplify_goal_disj.m"
      {
#line 251 "simplify_goal_disj.m"
        MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;

#line 251 "simplify_goal_disj.m"
        if ((check_hlds__simplify__simplify_goal_disj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 251 "simplify_goal_disj.m"
          {
#line 252 "simplify_goal_disj.m"
            {
#line 252 "simplify_goal_disj.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_disj__HeadVar__2_2, check_hlds__simplify__simplify_goal_disj__Goals_3);
            }
#line 251 "simplify_goal_disj.m"
            *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_10 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_9;
#line 251 "simplify_goal_disj.m"
            *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_8 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7;
#line 251 "simplify_goal_disj.m"
          }
#line 251 "simplify_goal_disj.m"
        else
#line 254 "simplify_goal_disj.m"
          {
#line 254 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__HeadVar__1_1, (MR_Integer) 1)));
#line 254 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__Goal_31;
#line 254 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo_34;
#line 254 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__Purity_35;
#line 254 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__RevGoals1_46;
#line 254 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_52_52;
#line 254 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_78_78;
#line 254 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_82_82;
#line 255 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj___Common1_32;
#line 257 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__V_33_33;
#line 262 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__Detism_36;
#line 262 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__MaxSolns_38;
#line 264 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj___CanFail_37;

#line 255 "simplify_goal_disj.m"
            {
#line 255 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_disj__Goal0_22, &check_hlds__simplify__simplify_goal_disj__Goal_31, check_hlds__simplify__simplify_goal_disj__HeadVar__4_4, check_hlds__simplify__simplify_goal_disj__HeadVar__5_5, check_hlds__simplify__simplify_goal_disj__HeadVar__6_6, &check_hlds__simplify__simplify_goal_disj___Common1_32, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_9, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_52_52);
            }
#line 257 "simplify_goal_disj.m"
            check_hlds__simplify__simplify_goal_disj__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal_31, (MR_Integer) 0)));
#line 257 "simplify_goal_disj.m"
            check_hlds__simplify__simplify_goal_disj__GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal_31, (MR_Integer) 1)));
#line 258 "simplify_goal_disj.m"
            {
#line 258 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal_disj__Purity_35 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_34);
            }
#line 262 "simplify_goal_disj.m"
            check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__Purity_35 == (MR_Integer) 2);
#line 262 "simplify_goal_disj.m"
            check_hlds__simplify__simplify_goal_disj__succeeded = !(check_hlds__simplify__simplify_goal_disj__succeeded);
#line 262 "simplify_goal_disj.m"
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 262 "simplify_goal_disj.m"
              {
#line 263 "simplify_goal_disj.m"
                {
#line 263 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__Detism_36 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_34);
                }
#line 264 "simplify_goal_disj.m"
                {
#line 264 "simplify_goal_disj.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_disj__Detism_36, &check_hlds__simplify__simplify_goal_disj___CanFail_37, &check_hlds__simplify__simplify_goal_disj__MaxSolns_38);
                }
#line 265 "simplify_goal_disj.m"
                check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__MaxSolns_38 == (MR_Integer) 0);
#line 262 "simplify_goal_disj.m"
              }
#line 260 "simplify_goal_disj.m"
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 291 "simplify_goal_disj.m"
              {
#line 268 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__V_55_55;
#line 272 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__V_53_53;
#line 272 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__V_54_54;
#line 272 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__V_39_39;
#line 277 "simplify_goal_disj.m"
                MR_Integer check_hlds__simplify__simplify_goal_disj__V_87_87;
#line 277 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__V_88_88;

#line 268 "simplify_goal_disj.m"
                {
#line 268 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_52_52);
                }
#line 268 "simplify_goal_disj.m"
                if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 268 "simplify_goal_disj.m"
                  {
#line 272 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal0_22, (MR_Integer) 0)));
#line 272 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal0_22, (MR_Integer) 1)));
#line 272 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_disj__V_53_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_53_53, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 272 "simplify_goal_disj.m"
                    if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 272 "simplify_goal_disj.m"
                      {
#line 272 "simplify_goal_disj.m"
                        check_hlds__simplify__simplify_goal_disj__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_53_53, (MR_Integer) 1)));
#line 272 "simplify_goal_disj.m"
                        check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "simplify_goal_disj.m"
                      }
#line 272 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__succeeded = !(check_hlds__simplify__simplify_goal_disj__succeeded);
#line 268 "simplify_goal_disj.m"
                    if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 268 "simplify_goal_disj.m"
                      {
#line 277 "simplify_goal_disj.m"
                        check_hlds__simplify__simplify_goal_disj__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__HeadVar__4_4, (MR_Integer) 0)));
#line 277 "simplify_goal_disj.m"
                        check_hlds__simplify__simplify_goal_disj__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__HeadVar__4_4, (MR_Integer) 1)));
#line 277 "simplify_goal_disj.m"
                        check_hlds__simplify__simplify_goal_disj__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__HeadVar__4_4, (MR_Integer) 2)));
#line 277 "simplify_goal_disj.m"
                        check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__V_55_55 == (MR_Integer) 0);
#line 268 "simplify_goal_disj.m"
                      }
#line 268 "simplify_goal_disj.m"
                  }
#line 267 "simplify_goal_disj.m"
                if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 279 "simplify_goal_disj.m"
                  {
#line 279 "simplify_goal_disj.m"
                    MR_Word check_hlds__simplify__simplify_goal_disj__Context_40;
#line 279 "simplify_goal_disj.m"
                    MR_Word check_hlds__simplify__simplify_goal_disj__Msg_42;
#line 279 "simplify_goal_disj.m"
                    MR_Word check_hlds__simplify__simplify_goal_disj__Spec_44;
#line 279 "simplify_goal_disj.m"
                    MR_Word check_hlds__simplify__simplify_goal_disj__V_76_76;

#line 279 "simplify_goal_disj.m"
                    {
#line 279 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_goal_disj__Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_34);
                    }
#line 282 "simplify_goal_disj.m"
                    {
#line 282 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_goal_disj__Msg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Msg_42, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Context_40));
#line 282 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Msg_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[20])));
#line 282 "simplify_goal_disj.m"
                    }
#line 287 "simplify_goal_disj.m"
                    {
#line 287 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_goal_disj__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Msg_42));
#line 287 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "simplify_goal_disj.m"
                    }
#line 286 "simplify_goal_disj.m"
                    {
#line 286 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_goal_disj__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 286 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_3[0])));
#line 286 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_disj_scalar_common_5[3])));
#line 286 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_44, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_76_76));
#line 286 "simplify_goal_disj.m"
                    }
#line 288 "simplify_goal_disj.m"
                    {
#line 288 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_disj__Spec_44, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_52_52, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_78_78);
                    }
#line 279 "simplify_goal_disj.m"
                  }
#line 267 "simplify_goal_disj.m"
                else
#line 267 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_78_78 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_52_52;
#line 296 "simplify_goal_disj.m"
                {
#line 296 "simplify_goal_disj.m"
                  MR_Word check_hlds__simplify__simplify_goal_disj__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal0_22, (MR_Integer) 0)));
#line 296 "simplify_goal_disj.m"
                  MR_Word check_hlds__simplify__simplify_goal_disj__V_81_81;
#line 296 "simplify_goal_disj.m"
                  MR_Word check_hlds__simplify__simplify_goal_disj__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Goal0_22, (MR_Integer) 1)));

#line 296 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_disj__V_80_80)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_80_80, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 296 "simplify_goal_disj.m"
                  if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 296 "simplify_goal_disj.m"
                    {
#line 296 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_goal_disj__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_80_80, (MR_Integer) 1)));
#line 296 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "simplify_goal_disj.m"
                    }
#line 296 "simplify_goal_disj.m"
                }
#line 297 "simplify_goal_disj.m"
                if (!(check_hlds__simplify__simplify_goal_disj__succeeded))
#line 300 "simplify_goal_disj.m"
                  {
#line 300 "simplify_goal_disj.m"
                    MR_Word check_hlds__simplify__simplify_goal_disj__V_90_90;

#line 300 "simplify_goal_disj.m"
                    {
#line 300 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_78_78, &check_hlds__simplify__simplify_goal_disj__V_90_90);
                    }
#line 300 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal_disj__V_90_90);
#line 300 "simplify_goal_disj.m"
                  }
#line 294 "simplify_goal_disj.m"
                if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 303 "simplify_goal_disj.m"
                  {
#line 303 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__RevGoals1_46 = check_hlds__simplify__simplify_goal_disj__HeadVar__2_2;
#line 303 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_82_82 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7;
#line 303 "simplify_goal_disj.m"
                  }
#line 294 "simplify_goal_disj.m"
                else
#line 305 "simplify_goal_disj.m"
                  {
#line 305 "simplify_goal_disj.m"
                    MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDelta_47;

#line 305 "simplify_goal_disj.m"
                    {
#line 305 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_goal_disj__RevGoals1_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__RevGoals1_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Goal_31));
#line 305 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__RevGoals1_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__HeadVar__2_2));
#line 305 "simplify_goal_disj.m"
                    }
#line 306 "simplify_goal_disj.m"
                    {
#line 306 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_goal_disj__InstMapDelta_47 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_34);
                    }
#line 307 "simplify_goal_disj.m"
                    {
#line 307 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_82_82, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__InstMapDelta_47));
#line 307 "simplify_goal_disj.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_82_82, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7));
#line 307 "simplify_goal_disj.m"
                    }
#line 305 "simplify_goal_disj.m"
                  }
#line 291 "simplify_goal_disj.m"
              }
#line 260 "simplify_goal_disj.m"
            else
#line 310 "simplify_goal_disj.m"
              {
#line 310 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDelta_86;

#line 310 "simplify_goal_disj.m"
                {
#line 310 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__RevGoals1_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "simplify_goal_disj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__RevGoals1_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Goal_31));
#line 310 "simplify_goal_disj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__RevGoals1_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__HeadVar__2_2));
#line 310 "simplify_goal_disj.m"
                }
#line 311 "simplify_goal_disj.m"
                {
#line 311 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__InstMapDelta_86 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_34);
                }
#line 312 "simplify_goal_disj.m"
                {
#line 312 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "simplify_goal_disj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_82_82, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__InstMapDelta_86));
#line 312 "simplify_goal_disj.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_82_82, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7));
#line 312 "simplify_goal_disj.m"
                }
#line 310 "simplify_goal_disj.m"
                check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_78_78 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_52_52;
#line 310 "simplify_goal_disj.m"
              }
#line 314 "simplify_goal_disj.m"
            /* direct tailcall eliminated */
#line 314 "simplify_goal_disj.m"
            {
#line 314 "simplify_goal_disj.m"
              MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__1__tmp_copy_1 = check_hlds__simplify__simplify_goal_disj__Goals0_23;
#line 314 "simplify_goal_disj.m"
              MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_disj__RevGoals1_46;
#line 314 "simplify_goal_disj.m"
              MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0__tmp_copy_7 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_82_82;
#line 314 "simplify_goal_disj.m"
              MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0__tmp_copy_9 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_78_78;

#line 314 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0__tmp_copy_9;
#line 314 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0_7 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_PostBranchInstMaps_0__tmp_copy_7;
#line 314 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal_disj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_disj__HeadVar__2__tmp_copy_2;
#line 314 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal_disj__HeadVar__1_1 = check_hlds__simplify__simplify_goal_disj__HeadVar__1__tmp_copy_1;
#line 314 "simplify_goal_disj.m"
            }
#line 314 "simplify_goal_disj.m"
            continue;
#line 254 "simplify_goal_disj.m"
          }
#line 251 "simplify_goal_disj.m"
      }
#line 251 "simplify_goal_disj.m"
      break;
#line 251 "simplify_goal_disj.m"
    }
#line 244 "simplify_goal_disj.m"
}

#line 213 "simplify_goal_disj.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_4_p_0(
#line 213 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__ModuleInfo_5,
#line 213 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_6,
#line 213 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__HeadVar__3_3,
#line 213 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__Var_7)
#line 213 "simplify_goal_disj.m"
{
#line 216 "simplify_goal_disj.m"
  {
#line 216 "simplify_goal_disj.m"
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
#line 216 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__FinalInst_8;
#line 216 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__InitInst_9;

#line 216 "simplify_goal_disj.m"
    *check_hlds__simplify__simplify_goal_disj__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__HeadVar__3_3, (MR_Integer) 0)));
#line 216 "simplify_goal_disj.m"
    check_hlds__simplify__simplify_goal_disj__FinalInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__HeadVar__3_3, (MR_Integer) 1)));
#line 217 "simplify_goal_disj.m"
    {
#line 217 "simplify_goal_disj.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_disj__InstMap0_6, *check_hlds__simplify__simplify_goal_disj__Var_7, &check_hlds__simplify__simplify_goal_disj__InitInst_9);
    }
#line 218 "simplify_goal_disj.m"
    {
#line 218 "simplify_goal_disj.m"
      check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__simplify__simplify_goal_disj__ModuleInfo_5, check_hlds__simplify__simplify_goal_disj__InitInst_9);
    }
#line 218 "simplify_goal_disj.m"
    if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 222 "simplify_goal_disj.m"
      check_hlds__simplify__simplify_goal_disj__succeeded = MR_FALSE;
#line 218 "simplify_goal_disj.m"
    else
#line 223 "simplify_goal_disj.m"
      {
#line 223 "simplify_goal_disj.m"
        {
#line 223 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__simplify__simplify_goal_disj__ModuleInfo_5, check_hlds__simplify__simplify_goal_disj__InitInst_9);
        }
#line 223 "simplify_goal_disj.m"
        if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 226 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__succeeded = MR_FALSE;
#line 223 "simplify_goal_disj.m"
        else
#line 227 "simplify_goal_disj.m"
          {
#line 227 "simplify_goal_disj.m"
            {
#line 227 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(check_hlds__simplify__simplify_goal_disj__FinalInst_8, check_hlds__simplify__simplify_goal_disj__InitInst_9, check_hlds__simplify__simplify_goal_disj__ModuleInfo_5);
            }
#line 227 "simplify_goal_disj.m"
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 235 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal_disj__succeeded = MR_FALSE;
#line 227 "simplify_goal_disj.m"
            else
#line 239 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal_disj__succeeded = MR_TRUE;
#line 227 "simplify_goal_disj.m"
          }
#line 223 "simplify_goal_disj.m"
      }
#line 216 "simplify_goal_disj.m"
    return check_hlds__simplify__simplify_goal_disj__succeeded;
#line 216 "simplify_goal_disj.m"
  }
#line 213 "simplify_goal_disj.m"
}

#line 182 "simplify_goal_disj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_2(
#line 182 "simplify_goal_disj.m"
  MR_Box check_hlds__simplify__simplify_goal_disj__closure_arg,
#line 182 "simplify_goal_disj.m"
  MR_Box check_hlds__simplify__simplify_goal_disj__wrapper_arg_1,
#line 182 "simplify_goal_disj.m"
  MR_Box * check_hlds__simplify__simplify_goal_disj__wrapper_arg_2)
#line 182 "simplify_goal_disj.m"
{
#line 182 "simplify_goal_disj.m"
  {
#line 182 "simplify_goal_disj.m"
    MR_Box check_hlds__simplify__simplify_goal_disj__closure = check_hlds__simplify__simplify_goal_disj__closure_arg;
#line 182 "simplify_goal_disj.m"
    MR_String check_hlds__simplify__simplify_goal_disj__conv1_HeadVar__3_118;

#line 182 "simplify_goal_disj.m"
    {
#line 182 "simplify_goal_disj.m"
      check_hlds__simplify__simplify_goal_disj__IntroducedFrom__pred__warn_about_any_problem_partial_vars__182__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__simplify_goal_disj__wrapper_arg_1), &check_hlds__simplify__simplify_goal_disj__conv1_HeadVar__3_118);
    }
#line 182 "simplify_goal_disj.m"
    *check_hlds__simplify__simplify_goal_disj__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__conv1_HeadVar__3_118));
#line 182 "simplify_goal_disj.m"
  }
#line 182 "simplify_goal_disj.m"
}

#line 153 "simplify_goal_disj.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_1(
#line 153 "simplify_goal_disj.m"
  MR_Box check_hlds__simplify__simplify_goal_disj__closure_arg,
#line 153 "simplify_goal_disj.m"
  MR_Box check_hlds__simplify__simplify_goal_disj__wrapper_arg_1,
#line 153 "simplify_goal_disj.m"
  MR_Box * check_hlds__simplify__simplify_goal_disj__wrapper_arg_2)
#line 153 "simplify_goal_disj.m"
{
#line 153 "simplify_goal_disj.m"
  {
#line 153 "simplify_goal_disj.m"
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
#line 153 "simplify_goal_disj.m"
    MR_Box check_hlds__simplify__simplify_goal_disj__closure = check_hlds__simplify__simplify_goal_disj__closure_arg;
#line 153 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__conv0_Var_7;

#line 153 "simplify_goal_disj.m"
    {
#line 153 "simplify_goal_disj.m"
      check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__simplify__simplify_goal_disj__is_var_a_problem_partial_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__simplify__simplify_goal_disj__wrapper_arg_1), &check_hlds__simplify__simplify_goal_disj__conv0_Var_7);
    }
#line 153 "simplify_goal_disj.m"
    if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 153 "simplify_goal_disj.m"
      {
#line 153 "simplify_goal_disj.m"
        *check_hlds__simplify__simplify_goal_disj__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__conv0_Var_7));
#line 153 "simplify_goal_disj.m"
        check_hlds__simplify__simplify_goal_disj__succeeded = MR_TRUE;
#line 153 "simplify_goal_disj.m"
      }
#line 153 "simplify_goal_disj.m"
    return check_hlds__simplify__simplify_goal_disj__succeeded;
#line 153 "simplify_goal_disj.m"
  }
#line 153 "simplify_goal_disj.m"
}

#line 145 "simplify_goal_disj.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0(
#line 145 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__Innermost_7,
#line 145 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo_8,
#line 145 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_9,
#line 145 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDelta_10,
#line 145 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29,
#line 145 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_30)
#line 145 "simplify_goal_disj.m"
{
#line 150 "simplify_goal_disj.m"
  {
#line 150 "simplify_goal_disj.m"
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
#line 150 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116;
#line 150 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDeltaChanges_12;
#line 150 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__ModuleInfo_13;
#line 150 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14;
#line 150 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__V_31_31;

#line 151 "simplify_goal_disj.m"
    {
#line 151 "simplify_goal_disj.m"
      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(check_hlds__simplify__simplify_goal_disj__InstMapDelta_10, &check_hlds__simplify__simplify_goal_disj__InstMapDeltaChanges_12);
    }
#line 152 "simplify_goal_disj.m"
    {
#line 152 "simplify_goal_disj.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_disj__ModuleInfo_13);
    }
#line 153 "simplify_goal_disj.m"
    {
#line 153 "simplify_goal_disj.m"
      check_hlds__simplify__simplify_goal_disj__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 153 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_31_31, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_4[0]));
#line 153 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_31_31, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_1));
#line 153 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 153 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_31_31, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__ModuleInfo_13));
#line 153 "simplify_goal_disj.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_31_31, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__InstMap0_9));
#line 153 "simplify_goal_disj.m"
    }
#line 1194 "check_hlds.simplify.simplify_goal_disj.c"
    check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116 = (MR_Word) &check_hlds__simplify__simplify_goal_disj_scalar_common_1[0];
#line 153 "simplify_goal_disj.m"
    {
#line 153 "simplify_goal_disj.m"
      mercury__list__filter_map_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_disj_scalar_common_2[0], check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116, check_hlds__simplify__simplify_goal_disj__V_31_31, check_hlds__simplify__simplify_goal_disj__InstMapDeltaChanges_12, &check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14);
    }
#line 157 "simplify_goal_disj.m"
    if ((check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "simplify_goal_disj.m"
      *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_30 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29;
#line 157 "simplify_goal_disj.m"
    else
#line 158 "simplify_goal_disj.m"
      {
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_121_121;
#line 158 "simplify_goal_disj.m"
        MR_String check_hlds__simplify__simplify_goal_disj__ProcStr_17;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__VarSet_21;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__ProblemPartialVarNames_22;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__ProblemPartialVarPieces_23;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__Context_24;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__Pieces_25;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__Msg_26;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__Spec_28;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_42_42;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_43_43;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_46_46;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_49_49;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_50_50;
#line 158 "simplify_goal_disj.m"
        MR_String check_hlds__simplify__simplify_goal_disj__V_51_51;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_55_55;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_56_56;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_63_63;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_64_64;
#line 158 "simplify_goal_disj.m"
        MR_String check_hlds__simplify__simplify_goal_disj__V_65_65;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_68_68;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_71_71;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_74_74;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_75_75;
#line 158 "simplify_goal_disj.m"
        MR_String check_hlds__simplify__simplify_goal_disj__V_76_76;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_79_79;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_82_82;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_85_85;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_88_88;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_91_91;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_94_94;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_97_97;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_98_98;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_105_105;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_106_106;
#line 158 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_110_110;
#line 188 "simplify_goal_disj.m"
        MR_Box check_hlds__simplify__simplify_goal_disj__conv2_V_51_51;
#line 190 "simplify_goal_disj.m"
        MR_Box check_hlds__simplify__simplify_goal_disj__conv3_V_65_65;
#line 197 "simplify_goal_disj.m"
        MR_Box check_hlds__simplify__simplify_goal_disj__conv4_V_76_76;

#line 162 "simplify_goal_disj.m"
        if ((check_hlds__simplify__simplify_goal_disj__Innermost_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__ProcStr_17 = (MR_String) "the procedure";
#line 162 "simplify_goal_disj.m"
        else
#line 163 "simplify_goal_disj.m"
          {
#line 163 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__LambdaContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__Innermost_7, (MR_Integer) 0)));
#line 163 "simplify_goal_disj.m"
            MR_String check_hlds__simplify__simplify_goal_disj__LambdaFileName_19;
#line 163 "simplify_goal_disj.m"
            MR_Integer check_hlds__simplify__simplify_goal_disj__LambdaLineNum_20;

#line 171 "simplify_goal_disj.m"
            {
#line 171 "simplify_goal_disj.m"
              mercury__term__context_file_2_p_0(check_hlds__simplify__simplify_goal_disj__LambdaContext_18, &check_hlds__simplify__simplify_goal_disj__LambdaFileName_19);
            }
#line 172 "simplify_goal_disj.m"
            {
#line 172 "simplify_goal_disj.m"
              mercury__term__context_line_2_p_0(check_hlds__simplify__simplify_goal_disj__LambdaContext_18, &check_hlds__simplify__simplify_goal_disj__LambdaLineNum_20);
            }
#line 173 "simplify_goal_disj.m"
            check_hlds__simplify__simplify_goal_disj__succeeded = (strcmp(check_hlds__simplify__simplify_goal_disj__LambdaFileName_19, (MR_String) "") == 0);
#line 173 "simplify_goal_disj.m"
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 174 "simplify_goal_disj.m"
              {
#line 174 "simplify_goal_disj.m"
                MR_String check_hlds__simplify__simplify_goal_disj__V_122_122;

#line 175 "simplify_goal_disj.m"
                {
#line 175 "simplify_goal_disj.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_disj_scalar_common_5[0], check_hlds__simplify__simplify_goal_disj__LambdaLineNum_20, &check_hlds__simplify__simplify_goal_disj__V_122_122);
                }
#line 174 "simplify_goal_disj.m"
                {
#line 174 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__ProcStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "the lambda expression at line ", check_hlds__simplify__simplify_goal_disj__V_122_122);
                }
#line 174 "simplify_goal_disj.m"
              }
#line 173 "simplify_goal_disj.m"
            else
#line 177 "simplify_goal_disj.m"
              {
#line 177 "simplify_goal_disj.m"
                MR_String check_hlds__simplify__simplify_goal_disj__V_130_130;
#line 177 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__V_136_136 = (MR_Word) &check_hlds__simplify__simplify_goal_disj_scalar_common_5[0];
#line 177 "simplify_goal_disj.m"
                MR_String check_hlds__simplify__simplify_goal_disj__V_138_138;
#line 177 "simplify_goal_disj.m"
                MR_String check_hlds__simplify__simplify_goal_disj__V_139_139;
#line 177 "simplify_goal_disj.m"
                MR_String check_hlds__simplify__simplify_goal_disj__V_146_146;

#line 178 "simplify_goal_disj.m"
                {
#line 178 "simplify_goal_disj.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__simplify__simplify_goal_disj__V_136_136, check_hlds__simplify__simplify_goal_disj__LambdaLineNum_20, &check_hlds__simplify__simplify_goal_disj__V_130_130);
                }
#line 177 "simplify_goal_disj.m"
                {
#line 177 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__V_138_138 = mercury__string__f_43_43_2_f_0((MR_String) " at line ", check_hlds__simplify__simplify_goal_disj__V_130_130);
                }
#line 178 "simplify_goal_disj.m"
                {
#line 178 "simplify_goal_disj.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__simplify__simplify_goal_disj__V_136_136, check_hlds__simplify__simplify_goal_disj__LambdaFileName_19, &check_hlds__simplify__simplify_goal_disj__V_139_139);
                }
#line 177 "simplify_goal_disj.m"
                {
#line 177 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__V_146_146 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_disj__V_139_139, check_hlds__simplify__simplify_goal_disj__V_138_138);
                }
#line 177 "simplify_goal_disj.m"
                {
#line 177 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__ProcStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "the lambda expression in ", check_hlds__simplify__simplify_goal_disj__V_146_146);
                }
#line 177 "simplify_goal_disj.m"
              }
#line 163 "simplify_goal_disj.m"
          }
#line 181 "simplify_goal_disj.m"
        {
#line 181 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_disj__VarSet_21);
        }
#line 182 "simplify_goal_disj.m"
        {
#line 182 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 182 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_42_42, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_disj_scalar_common_6[0]));
#line 182 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_42_42, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0_2));
#line 182 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 182 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_42_42, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__VarSet_21));
#line 182 "simplify_goal_disj.m"
        }
#line 1399 "check_hlds.simplify.simplify_goal_disj.c"
        check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 182 "simplify_goal_disj.m"
        {
#line 182 "simplify_goal_disj.m"
          mercury__list__map_3_p_0(check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116, check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120, check_hlds__simplify__simplify_goal_disj__V_42_42, check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14, &check_hlds__simplify__simplify_goal_disj__ProblemPartialVarNames_22);
        }
#line 184 "simplify_goal_disj.m"
        {
#line 184 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__ProblemPartialVarPieces_23 = parse_tree__error_util__list_to_pieces_1_f_0(check_hlds__simplify__simplify_goal_disj__ProblemPartialVarNames_22);
        }
#line 185 "simplify_goal_disj.m"
        {
#line 185 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo_8);
        }
#line 1416 "check_hlds.simplify.simplify_goal_disj.c"
        check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 188 "simplify_goal_disj.m"
        {
#line 188 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__conv2_V_51_51 = parse_tree__error_util__choose_number_3_f_0(check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116, check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120, check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
        }
#line 188 "simplify_goal_disj.m"
        check_hlds__simplify__simplify_goal_disj__V_51_51 = ((MR_String) check_hlds__simplify__simplify_goal_disj__conv2_V_51_51);
#line 188 "simplify_goal_disj.m"
        {
#line 188 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 188 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_50_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_51_51));
#line 188 "simplify_goal_disj.m"
        }
#line 188 "simplify_goal_disj.m"
        {
#line 188 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_50_50));
#line 188 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 188 "simplify_goal_disj.m"
        }
#line 187 "simplify_goal_disj.m"
        {
#line 187 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[9])));
#line 187 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_46_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_49_49));
#line 187 "simplify_goal_disj.m"
        }
#line 186 "simplify_goal_disj.m"
        {
#line 186 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[8])));
#line 186 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_43_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_46_46));
#line 186 "simplify_goal_disj.m"
        }
#line 190 "simplify_goal_disj.m"
        {
#line 190 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__conv3_V_65_65 = parse_tree__error_util__choose_number_3_f_0(check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116, check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120, check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14, ((MR_Box) ((MR_String) "Since the memory cell of this variable\n                    is allocated *before* the disjunction,")), ((MR_Box) ((MR_String) "Since the memory cells of these variables\n                    are allocated *before* the disjunction,")));
        }
#line 190 "simplify_goal_disj.m"
        check_hlds__simplify__simplify_goal_disj__V_65_65 = ((MR_String) check_hlds__simplify__simplify_goal_disj__conv3_V_65_65);
#line 190 "simplify_goal_disj.m"
        {
#line 190 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 190 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_65_65));
#line 190 "simplify_goal_disj.m"
        }
#line 197 "simplify_goal_disj.m"
        {
#line 197 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__conv4_V_76_76 = parse_tree__error_util__choose_number_3_f_0(check_hlds__simplify__simplify_goal_disj__TypeInfo_116_116, check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_120_120, check_hlds__simplify__simplify_goal_disj__ProblemPartialVars_14, ((MR_Box) ((MR_String) "for this variable")), ((MR_Box) ((MR_String) "for each of these variables")));
        }
#line 197 "simplify_goal_disj.m"
        check_hlds__simplify__simplify_goal_disj__V_76_76 = ((MR_String) check_hlds__simplify__simplify_goal_disj__conv4_V_76_76);
#line 197 "simplify_goal_disj.m"
        {
#line 197 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 197 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_75_75, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_76_76));
#line 197 "simplify_goal_disj.m"
        }
#line 204 "simplify_goal_disj.m"
        {
#line 204 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 204 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__V_98_98, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__ProcStr_17));
#line 204 "simplify_goal_disj.m"
        }
#line 204 "simplify_goal_disj.m"
        {
#line 204 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_97_97, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_98_98));
#line 204 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[3])));
#line 204 "simplify_goal_disj.m"
        }
#line 204 "simplify_goal_disj.m"
        {
#line 204 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_94_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[17])));
#line 204 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_94_94, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_97_97));
#line 204 "simplify_goal_disj.m"
        }
#line 203 "simplify_goal_disj.m"
        {
#line 203 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[16])));
#line 203 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_91_91, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_94_94));
#line 203 "simplify_goal_disj.m"
        }
#line 202 "simplify_goal_disj.m"
        {
#line 202 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[15])));
#line 202 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_88_88, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_91_91));
#line 202 "simplify_goal_disj.m"
        }
#line 201 "simplify_goal_disj.m"
        {
#line 201 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_85_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[14])));
#line 201 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_85_85, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_88_88));
#line 201 "simplify_goal_disj.m"
        }
#line 200 "simplify_goal_disj.m"
        {
#line 200 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[13])));
#line 200 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_82_82, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_85_85));
#line 200 "simplify_goal_disj.m"
        }
#line 199 "simplify_goal_disj.m"
        {
#line 199 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[12])));
#line 199 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_79_79, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_82_82));
#line 199 "simplify_goal_disj.m"
        }
#line 198 "simplify_goal_disj.m"
        {
#line 198 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_74_74, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_75_75));
#line 198 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_74_74, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_79_79));
#line 198 "simplify_goal_disj.m"
        }
#line 196 "simplify_goal_disj.m"
        {
#line 196 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[11])));
#line 196 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_71_71, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_74_74));
#line 196 "simplify_goal_disj.m"
        }
#line 195 "simplify_goal_disj.m"
        {
#line 195 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[10])));
#line 195 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_68_68, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_71_71));
#line 195 "simplify_goal_disj.m"
        }
#line 194 "simplify_goal_disj.m"
        {
#line 194 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_64_64));
#line 194 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_68_68));
#line 194 "simplify_goal_disj.m"
        }
#line 189 "simplify_goal_disj.m"
        {
#line 189 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_56_56 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_121_121, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_disj_scalar_common_1[3]), check_hlds__simplify__simplify_goal_disj__V_63_63);
        }
#line 189 "simplify_goal_disj.m"
        {
#line 189 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_55_55 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_121_121, check_hlds__simplify__simplify_goal_disj__ProblemPartialVarPieces_23, check_hlds__simplify__simplify_goal_disj__V_56_56);
        }
#line 189 "simplify_goal_disj.m"
        {
#line 189 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__Pieces_25 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_121_121, check_hlds__simplify__simplify_goal_disj__V_43_43, check_hlds__simplify__simplify_goal_disj__V_55_55);
        }
#line 205 "simplify_goal_disj.m"
        {
#line 205 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 205 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_106_106, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Pieces_25));
#line 205 "simplify_goal_disj.m"
        }
#line 205 "simplify_goal_disj.m"
        {
#line 205 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_105_105, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_106_106));
#line 205 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "simplify_goal_disj.m"
        }
#line 205 "simplify_goal_disj.m"
        {
#line 205 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Msg_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Context_24));
#line 205 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Msg_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_105_105));
#line 205 "simplify_goal_disj.m"
        }
#line 207 "simplify_goal_disj.m"
        {
#line 207 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_110_110, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Msg_26));
#line 207 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "simplify_goal_disj.m"
        }
#line 207 "simplify_goal_disj.m"
        {
#line 207 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 207 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 207 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_disj_scalar_common_5[1])));
#line 207 "simplify_goal_disj.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__Spec_28, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__V_110_110));
#line 207 "simplify_goal_disj.m"
        }
#line 208 "simplify_goal_disj.m"
        {
#line 208 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(check_hlds__simplify__simplify_goal_disj__Spec_28, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_29, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_30);
        }
#line 158 "simplify_goal_disj.m"
      }
#line 150 "simplify_goal_disj.m"
  }
#line 145 "simplify_goal_disj.m"
}

#line 41 "simplify_goal_disj.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_goal_atomic_goal_16_p_0(
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalType_17,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__Outer_18,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__Inner_19,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__MaybeOutputVars_20,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__MainGoal0_21,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__OrElseGoals0_22,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__OrElseInners_23,
#line 41 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__GoalExpr_24,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_0_33,
#line 41 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_34,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj___NestedContext0_26,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj___InstMap0_27,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__Common0_28,
#line 41 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__Common0_14,
#line 41 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_35,
#line 41 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_36)
#line 41 "simplify_goal_disj.m"
{
#line 425 "simplify_goal_disj.m"
  {
#line 425 "simplify_goal_disj.m"
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;

#line 425 "simplify_goal_disj.m"
    {
#line 425 "simplify_goal_disj.m"
      check_hlds__simplify__simplify_goal_disj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_97_116_111_109_105_99_95_103_111_97_108_95_95_91_49_49_44_32_49_50_93_95_48_16_p_0(check_hlds__simplify__simplify_goal_disj__GoalType_17, check_hlds__simplify__simplify_goal_disj__Outer_18, check_hlds__simplify__simplify_goal_disj__Inner_19, check_hlds__simplify__simplify_goal_disj__MaybeOutputVars_20, check_hlds__simplify__simplify_goal_disj__MainGoal0_21, check_hlds__simplify__simplify_goal_disj__OrElseGoals0_22, check_hlds__simplify__simplify_goal_disj__OrElseInners_23, check_hlds__simplify__simplify_goal_disj__GoalExpr_24, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_0_33, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_GoalInfo_34, check_hlds__simplify__simplify_goal_disj__Common0_28, check_hlds__simplify__simplify_goal_disj__Common0_14, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_35, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_36);
    }
#line 425 "simplify_goal_disj.m"
  }
#line 41 "simplify_goal_disj.m"
}

#line 32 "simplify_goal_disj.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_disj__simplify_goal_disj_10_p_0(
#line 32 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalExpr0_11,
#line 32 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__GoalExpr_12,
#line 32 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo0_13,
#line 32 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__GoalInfo_14,
#line 32 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__NestedContext0_15,
#line 32 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__InstMap0_16,
#line 32 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__Common0_17,
#line 32 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__Common_18,
#line 32 "simplify_goal_disj.m"
  MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_38,
#line 32 "simplify_goal_disj.m"
  MR_Word * check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_39)
#line 32 "simplify_goal_disj.m"
{
#line 71 "simplify_goal_disj.m"
  {
#line 71 "simplify_goal_disj.m"
    MR_bool check_hlds__simplify__simplify_goal_disj__succeeded;
#line 71 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_55_55;
#line 71 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__Disjuncts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_disj__GoalExpr0_11, (MR_Integer) 1)));
#line 71 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__Disjuncts_21;
#line 71 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__InstMapDeltas_22;
#line 71 "simplify_goal_disj.m"
    MR_Integer check_hlds__simplify__simplify_goal_disj__DisjunctsLength_36;
#line 71 "simplify_goal_disj.m"
    MR_Integer check_hlds__simplify__simplify_goal_disj__Disjuncts0Length_37;
#line 71 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42;
#line 71 "simplify_goal_disj.m"
    MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49;

#line 73 "simplify_goal_disj.m"
    {
#line 73 "simplify_goal_disj.m"
      check_hlds__simplify__simplify_goal_disj__simplify_disj_10_p_0(check_hlds__simplify__simplify_goal_disj__Disjuncts0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_disj__Disjuncts_21, check_hlds__simplify__simplify_goal_disj__NestedContext0_15, check_hlds__simplify__simplify_goal_disj__InstMap0_16, check_hlds__simplify__simplify_goal_disj__Common0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_disj__InstMapDeltas_22, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_0_38, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42);
    }
#line 79 "simplify_goal_disj.m"
    if ((check_hlds__simplify__simplify_goal_disj__Disjuncts_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 76 "simplify_goal_disj.m"
      {
#line 76 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__Context_23;
#line 76 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_50_50;

#line 77 "simplify_goal_disj.m"
        {
#line 77 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo0_13);
        }
#line 78 "simplify_goal_disj.m"
        {
#line 78 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_goal_disj__V_50_50 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_disj__Context_23);
        }
#line 78 "simplify_goal_disj.m"
        *check_hlds__simplify__simplify_goal_disj__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_50_50, (MR_Integer) 0)));
#line 78 "simplify_goal_disj.m"
        *check_hlds__simplify__simplify_goal_disj__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_50_50, (MR_Integer) 1)));
#line 76 "simplify_goal_disj.m"
        check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42;
#line 76 "simplify_goal_disj.m"
      }
#line 79 "simplify_goal_disj.m"
    else
#line 79 "simplify_goal_disj.m"
      {
#line 79 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__Disjuncts_21, (MR_Integer) 1)));
#line 79 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__Disjuncts_21, (MR_Integer) 0)));

#line 79 "simplify_goal_disj.m"
        if ((check_hlds__simplify__simplify_goal_disj__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 80 "simplify_goal_disj.m"
          {
#line 80 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__Goal1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_57_57, (MR_Integer) 0)));
#line 80 "simplify_goal_disj.m"
            MR_Word check_hlds__simplify__simplify_goal_disj__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__V_57_57, (MR_Integer) 1)));

#line 83 "simplify_goal_disj.m"
            {
#line 83 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_disj__GoalInfo0_13, check_hlds__simplify__simplify_goal_disj__GoalInfo1_26, check_hlds__simplify__simplify_goal_disj__Goal1_25, check_hlds__simplify__simplify_goal_disj__GoalExpr_12, check_hlds__simplify__simplify_goal_disj__GoalInfo_14, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49);
            }
#line 80 "simplify_goal_disj.m"
          }
#line 79 "simplify_goal_disj.m"
        else
#line 86 "simplify_goal_disj.m"
          {
#line 87 "simplify_goal_disj.m"
            {
#line 87 "simplify_goal_disj.m"
              MR_Word base;
#line 87 "simplify_goal_disj.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 87 "simplify_goal_disj.m"
              *check_hlds__simplify__simplify_goal_disj__GoalExpr_12 = base;
#line 87 "simplify_goal_disj.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 87 "simplify_goal_disj.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_disj__Disjuncts_21));
#line 87 "simplify_goal_disj.m"
            }
#line 89 "simplify_goal_disj.m"
            {
#line 89 "simplify_goal_disj.m"
              check_hlds__simplify__simplify_goal_disj__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal_disj__GoalInfo0_13, (MR_Integer) 14);
            }
#line 88 "simplify_goal_disj.m"
            if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 93 "simplify_goal_disj.m"
              {
#line 93 "simplify_goal_disj.m"
                *check_hlds__simplify__simplify_goal_disj__GoalInfo_14 = check_hlds__simplify__simplify_goal_disj__GoalInfo0_13;
#line 93 "simplify_goal_disj.m"
                check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42;
#line 93 "simplify_goal_disj.m"
              }
#line 88 "simplify_goal_disj.m"
            else
#line 95 "simplify_goal_disj.m"
              {
#line 95 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__ModuleInfo1_30;
#line 95 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__NonLocals_31;
#line 95 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__VarTypes_32;
#line 95 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__NewDelta_33;
#line 95 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__ModuleInfo2_34;
#line 95 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_45_45;
#line 103 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__Innermost_35;
#line 104 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__V_46_46;
#line 108 "simplify_goal_disj.m"
                MR_Word check_hlds__simplify__simplify_goal_disj__V_53_53;
#line 108 "simplify_goal_disj.m"
                MR_Integer check_hlds__simplify__simplify_goal_disj__V_54_54;

#line 95 "simplify_goal_disj.m"
                {
#line 95 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_disj__ModuleInfo1_30);
                }
#line 96 "simplify_goal_disj.m"
                {
#line 96 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_disj__GoalInfo0_13);
                }
#line 97 "simplify_goal_disj.m"
                {
#line 97 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_disj__VarTypes_32);
                }
#line 98 "simplify_goal_disj.m"
                {
#line 98 "simplify_goal_disj.m"
                  hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__simplify__simplify_goal_disj__InstMap0_16, check_hlds__simplify__simplify_goal_disj__NonLocals_31, check_hlds__simplify__simplify_goal_disj__VarTypes_32, check_hlds__simplify__simplify_goal_disj__InstMapDeltas_22, &check_hlds__simplify__simplify_goal_disj__NewDelta_33, check_hlds__simplify__simplify_goal_disj__ModuleInfo1_30, &check_hlds__simplify__simplify_goal_disj__ModuleInfo2_34);
                }
#line 100 "simplify_goal_disj.m"
                {
#line 100 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_disj__ModuleInfo2_34, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_45_45);
                }
#line 101 "simplify_goal_disj.m"
                {
#line 101 "simplify_goal_disj.m"
                  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_disj__NewDelta_33, check_hlds__simplify__simplify_goal_disj__GoalInfo0_13, check_hlds__simplify__simplify_goal_disj__GoalInfo_14);
                }
#line 104 "simplify_goal_disj.m"
                {
#line 104 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_45_45);
                }
#line 104 "simplify_goal_disj.m"
                if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 104 "simplify_goal_disj.m"
                  {
#line 108 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__NestedContext0_15, (MR_Integer) 0)));
#line 108 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__NestedContext0_15, (MR_Integer) 1)));
#line 108 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_disj__NestedContext0_15, (MR_Integer) 2)));
#line 108 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_disj__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 108 "simplify_goal_disj.m"
                    if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 108 "simplify_goal_disj.m"
                      check_hlds__simplify__simplify_goal_disj__Innermost_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_disj__V_46_46, (MR_Integer) 0)));
#line 104 "simplify_goal_disj.m"
                  }
#line 103 "simplify_goal_disj.m"
                if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 110 "simplify_goal_disj.m"
                  {
#line 110 "simplify_goal_disj.m"
                    check_hlds__simplify__simplify_goal_disj__warn_about_any_problem_partial_vars_6_p_0(check_hlds__simplify__simplify_goal_disj__Innermost_35, check_hlds__simplify__simplify_goal_disj__GoalInfo0_13, check_hlds__simplify__simplify_goal_disj__InstMap0_16, check_hlds__simplify__simplify_goal_disj__NewDelta_33, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_45_45, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49);
                  }
#line 103 "simplify_goal_disj.m"
                else
#line 103 "simplify_goal_disj.m"
                  check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_45_45;
#line 95 "simplify_goal_disj.m"
              }
#line 86 "simplify_goal_disj.m"
          }
#line 79 "simplify_goal_disj.m"
      }
#line 123 "simplify_goal_disj.m"
    *check_hlds__simplify__simplify_goal_disj__Common_18 = check_hlds__simplify__simplify_goal_disj__Common0_17;
#line 1981 "check_hlds.simplify.simplify_goal_disj.c"
    check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 125 "simplify_goal_disj.m"
    {
#line 125 "simplify_goal_disj.m"
      mercury__list__length_2_p_0(check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_55_55, check_hlds__simplify__simplify_goal_disj__Disjuncts_21, &check_hlds__simplify__simplify_goal_disj__DisjunctsLength_36);
    }
#line 126 "simplify_goal_disj.m"
    {
#line 126 "simplify_goal_disj.m"
      mercury__list__length_2_p_0(check_hlds__simplify__simplify_goal_disj__TypeCtorInfo_55_55, check_hlds__simplify__simplify_goal_disj__Disjuncts0_20, &check_hlds__simplify__simplify_goal_disj__Disjuncts0Length_37);
    }
#line 127 "simplify_goal_disj.m"
    check_hlds__simplify__simplify_goal_disj__succeeded = (check_hlds__simplify__simplify_goal_disj__DisjunctsLength_36 == check_hlds__simplify__simplify_goal_disj__Disjuncts0Length_37);
#line 127 "simplify_goal_disj.m"
    if (check_hlds__simplify__simplify_goal_disj__succeeded)
#line 127 "simplify_goal_disj.m"
      *check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_39 = check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49;
#line 127 "simplify_goal_disj.m"
    else
#line 138 "simplify_goal_disj.m"
      {
#line 138 "simplify_goal_disj.m"
        MR_Word check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_51_51;

#line 138 "simplify_goal_disj.m"
        {
#line 138 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_49_49, &check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_51_51);
        }
#line 139 "simplify_goal_disj.m"
        {
#line 139 "simplify_goal_disj.m"
          check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_51_51, check_hlds__simplify__simplify_goal_disj__STATE_VARIABLE_Info_39);
        }
#line 138 "simplify_goal_disj.m"
      }
#line 71 "simplify_goal_disj.m"
  }
#line 32 "simplify_goal_disj.m"
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
