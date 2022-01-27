/*
** Automatically generated from `ml_code_gen.m'
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


/* :- module ml_backend.ml_code_gen. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_code_gen__init
ENDINIT
*/

#include "ml_backend.ml_code_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "counter.mih"
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
#include "ml_backend.ml_call_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_commit_gen.mih"
#include "ml_backend.ml_disj_gen.mih"
#include "ml_backend.ml_foreign_proc_gen.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_switch_gen.mih"
#include "ml_backend.ml_unify_gen.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 159 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 162 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 165 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0;

#line 168 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 622 "ml_code_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_p_0(
#line 622 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 622 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CallCodeModel_36);

#line 1063 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_2(
#line 1063 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 1063 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
#line 1063 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
#line 1063 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
#line 1063 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4);

#line 1062 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_1(
#line 1062 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 1062 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
#line 1062 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
#line 1062 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
#line 1062 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4);

#line 1040 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0(
#line 1040 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Conjuncts_8,
#line 1040 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
#line 1040 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_10,
#line 1040 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_11,
#line 1040 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_12,
#line 1040 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26,
#line 1040 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);

#line 978 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_7_p_0(
#line 978 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Cond_8,
#line 978 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
#line 978 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_10,
#line 978 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_11,
#line 978 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_12,
#line 978 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22,
#line 978 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);

#line 853 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_ite_9_p_0(
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Cond_11,
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Then_12,
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Else_13,
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_14,
#line 853 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_15,
#line 853 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_16,
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45,
#line 853 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);

#line 838 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(
#line 838 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
#line 838 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
#line 838 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3);

#line 829 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(
#line 829 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
#line 829 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
#line 829 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3);

#line 795 "ml_code_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2(
#line 795 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 795 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1);

#line 794 "ml_code_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1(
#line 794 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 794 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1);

#line 742 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(
#line 742 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalExpr_3,
#line 742 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__SubGoalNonLocals_4);

#line 622 "ml_code_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0_1(
#line 622 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg);

#line 592 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0(
#line 592 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalExpr_9,
#line 592 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 592 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_11,
#line 592 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalInfo_12,
#line 592 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_13,
#line 592 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_14,
#line 592 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59,
#line 592 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);


static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_3[2][3];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_4[1][1];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_5[1][9];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_6[1][10];




static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 450 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 458 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 466 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

#line 474 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 622 "ml_code_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_p_0(
#line 622 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 622 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CallCodeModel_36)
#line 622 "ml_code_gen.m"
{
#line 622 "ml_code_gen.m"
  {
#line 622 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded = (ml_backend__ml_code_gen__CodeModel_10 == ml_backend__ml_code_gen__CallCodeModel_36);

#line 622 "ml_code_gen.m"
    return ml_backend__ml_code_gen__succeeded;
#line 622 "ml_code_gen.m"
  }
#line 622 "ml_code_gen.m"
}

#line 1063 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_2(
#line 1063 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 1063 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
#line 1063 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
#line 1063 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
#line 1063 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4)
#line 1063 "ml_code_gen.m"
{
#line 1063 "ml_code_gen.m"
  {
#line 1063 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
#line 1063 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv5_Decls_11;
#line 1063 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv4_Statements_12;
#line 1063 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv3_STATE_VARIABLE_Info_27;

#line 1063 "ml_code_gen.m"
    {
#line 1063 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_conj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 5))), &ml_backend__ml_code_gen__conv5_Decls_11, &ml_backend__ml_code_gen__conv4_Statements_12, ((MR_Word) ml_backend__ml_code_gen__wrapper_arg_3), &ml_backend__ml_code_gen__conv3_STATE_VARIABLE_Info_27);
    }
#line 1063 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_code_gen__conv5_Decls_11));
#line 1063 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv4_Statements_12));
#line 1063 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_code_gen__conv3_STATE_VARIABLE_Info_27));
#line 1063 "ml_code_gen.m"
  }
#line 1063 "ml_code_gen.m"
}

#line 1062 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_1(
#line 1062 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 1062 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
#line 1062 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
#line 1062 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
#line 1062 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4)
#line 1062 "ml_code_gen.m"
{
#line 1062 "ml_code_gen.m"
  {
#line 1062 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
#line 1062 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv2_Decls_9;
#line 1062 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv1_Statements_10;
#line 1062 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_24;

#line 1062 "ml_code_gen.m"
    {
#line 1062 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))), &ml_backend__ml_code_gen__conv2_Decls_9, &ml_backend__ml_code_gen__conv1_Statements_10, ((MR_Word) ml_backend__ml_code_gen__wrapper_arg_3), &ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_24);
    }
#line 1062 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_code_gen__conv2_Decls_9));
#line 1062 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv1_Statements_10));
#line 1062 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_24));
#line 1062 "ml_code_gen.m"
  }
#line 1062 "ml_code_gen.m"
}

#line 1040 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0(
#line 1040 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Conjuncts_8,
#line 1040 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
#line 1040 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_10,
#line 1040 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_11,
#line 1040 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_12,
#line 1040 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26,
#line 1040 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_27)
#line 1040 "ml_code_gen.m"
{
#line 1046 "ml_code_gen.m"
  {
#line 1046 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;

#line 1046 "ml_code_gen.m"
    if ((ml_backend__ml_code_gen__Conjuncts_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1046 "ml_code_gen.m"
      {
#line 1047 "ml_code_gen.m"
        {
#line 1047 "ml_code_gen.m"
          ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_code_gen__CodeModel_9, ml_backend__ml_code_gen__Context_10, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
        }
#line 1048 "ml_code_gen.m"
        *ml_backend__ml_code_gen__Decls_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1046 "ml_code_gen.m"
      }
#line 1046 "ml_code_gen.m"
    else
#line 1046 "ml_code_gen.m"
      {
#line 1046 "ml_code_gen.m"
        MR_Word ml_backend__ml_code_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Conjuncts_8, (MR_Integer) 1)));
#line 1046 "ml_code_gen.m"
        MR_Word ml_backend__ml_code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Conjuncts_8, (MR_Integer) 0)));

#line 1046 "ml_code_gen.m"
        if ((ml_backend__ml_code_gen__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1051 "ml_code_gen.m"
          {
#line 1051 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_9, ml_backend__ml_code_gen__V_44_44, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
          }
#line 1046 "ml_code_gen.m"
        else
#line 1053 "ml_code_gen.m"
          {
#line 1053 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__FirstGoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_44_44, (MR_Integer) 1)));
#line 1053 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__FirstDeterminism_21;
#line 1055 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_44_44, (MR_Integer) 0)));
#line 1057 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__V_42_42;
#line 1057 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__V_22_22;

#line 1056 "ml_code_gen.m"
            {
#line 1056 "ml_code_gen.m"
              ml_backend__ml_code_gen__FirstDeterminism_21 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ml_backend__ml_code_gen__FirstGoalInfo_20);
            }
#line 1057 "ml_code_gen.m"
            {
#line 1057 "ml_code_gen.m"
              parse_tree__prog_data__determinism_components_3_p_0(ml_backend__ml_code_gen__FirstDeterminism_21, &ml_backend__ml_code_gen__V_22_22, &ml_backend__ml_code_gen__V_42_42);
            }
#line 1057 "ml_code_gen.m"
            ml_backend__ml_code_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_code_gen__V_42_42);
#line 1057 "ml_code_gen.m"
            if (ml_backend__ml_code_gen__succeeded)
#line 1059 "ml_code_gen.m"
              {
#line 1059 "ml_code_gen.m"
                ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_9, ml_backend__ml_code_gen__V_44_44, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
              }
#line 1057 "ml_code_gen.m"
            else
#line 1061 "ml_code_gen.m"
              {
#line 1061 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__FirstCodeModel_23;
#line 1061 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__DoGenFirst_24;
#line 1061 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__DoGenRest_25;

#line 1061 "ml_code_gen.m"
                {
#line 1061 "ml_code_gen.m"
                  hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_gen__FirstDeterminism_21, &ml_backend__ml_code_gen__FirstCodeModel_23);
                }
#line 1062 "ml_code_gen.m"
                {
#line 1062 "ml_code_gen.m"
                  ml_backend__ml_code_gen__DoGenFirst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_5[0]));
#line 1062 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_7_p_0_1));
#line 1062 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1062 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 3) = ((MR_Box) (ml_backend__ml_code_gen__FirstCodeModel_23));
#line 1062 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 4) = ((MR_Box) (ml_backend__ml_code_gen__V_44_44));
#line 1062 "ml_code_gen.m"
                }
#line 1063 "ml_code_gen.m"
                {
#line 1063 "ml_code_gen.m"
                  ml_backend__ml_code_gen__DoGenRest_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_6[0]));
#line 1063 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_7_p_0_2));
#line 1063 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1063 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 3) = ((MR_Box) (ml_backend__ml_code_gen__V_43_43));
#line 1063 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 4) = ((MR_Box) (ml_backend__ml_code_gen__CodeModel_9));
#line 1063 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 5) = ((MR_Box) (ml_backend__ml_code_gen__Context_10));
#line 1063 "ml_code_gen.m"
                }
#line 1064 "ml_code_gen.m"
                {
#line 1064 "ml_code_gen.m"
                  ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_code_gen__FirstCodeModel_23, ml_backend__ml_code_gen__Context_10, ml_backend__ml_code_gen__DoGenFirst_24, ml_backend__ml_code_gen__DoGenRest_25, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
                }
#line 1061 "ml_code_gen.m"
              }
#line 1053 "ml_code_gen.m"
          }
#line 1046 "ml_code_gen.m"
      }
#line 1046 "ml_code_gen.m"
  }
#line 1040 "ml_code_gen.m"
}

#line 978 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_7_p_0(
#line 978 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Cond_8,
#line 978 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
#line 978 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_10,
#line 978 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_11,
#line 978 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_12,
#line 978 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22,
#line 978 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_23)
#line 978 "ml_code_gen.m"
{
#line 982 "ml_code_gen.m"
  {
#line 982 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 982 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__CondGoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_8, (MR_Integer) 1)));
#line 982 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__CondCodeModel_16;
#line 983 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_8, (MR_Integer) 0)));

#line 984 "ml_code_gen.m"
    {
#line 984 "ml_code_gen.m"
      ml_backend__ml_code_gen__CondCodeModel_16 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__CondGoalInfo_15);
    }
#line 998 "ml_code_gen.m"
#line 998 "ml_code_gen.m"
    switch (ml_backend__ml_code_gen__CodeModel_9) {
#line 998 "ml_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 998 "ml_code_gen.m"
      case (MR_Integer) 0:
#line 996 "ml_code_gen.m"
        {
#line 996 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_56;
#line 996 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_57;

#line 548 "ml_code_gen.m"
          {
#line 548 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__InitConstVarMap_56);
          }
#line 549 "ml_code_gen.m"
          {
#line 549 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_8, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_57);
          }
#line 550 "ml_code_gen.m"
          {
#line 550 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_56, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_57, ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);
          }
#line 996 "ml_code_gen.m"
        }
#line 998 "ml_code_gen.m"
        break;
#line 998 "ml_code_gen.m"
      case (MR_Integer) 2:
#line 1031 "ml_code_gen.m"
        {
#line 1032 "ml_code_gen.m"
          {
#line 1032 "ml_code_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_negation\'/7", (MR_String) "nondet negation");
#line 1032 "ml_code_gen.m"
            return;
          }
#line 1031 "ml_code_gen.m"
        }
#line 998 "ml_code_gen.m"
        break;
#line 998 "ml_code_gen.m"
      case (MR_Integer) 1:
#line 998 "ml_code_gen.m"
#line 998 "ml_code_gen.m"
        switch (ml_backend__ml_code_gen__CondCodeModel_16) {
#line 998 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 998 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 1005 "ml_code_gen.m"
            {
#line 1005 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CondStatements_18;
#line 1005 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SetSuccessFalse_19;
#line 1005 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_41_41;
#line 1005 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__InitConstVarMap_66;
#line 1005 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_67;

#line 548 "ml_code_gen.m"
              {
#line 548 "ml_code_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__InitConstVarMap_66);
              }
#line 549 "ml_code_gen.m"
              {
#line 549 "ml_code_gen.m"
                ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 0, ml_backend__ml_code_gen__Cond_8, ml_backend__ml_code_gen__Decls_11, &ml_backend__ml_code_gen__CondStatements_18, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_67);
              }
#line 550 "ml_code_gen.m"
              {
#line 550 "ml_code_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_66, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_67, ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);
              }
#line 1008 "ml_code_gen.m"
              {
#line 1008 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_code_gen__STATE_VARIABLE_Info_23, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[2]), ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__SetSuccessFalse_19);
              }
#line 1011 "ml_code_gen.m"
              {
#line 1011 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_41_41, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetSuccessFalse_19));
#line 1011 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1011 "ml_code_gen.m"
              }
#line 1011 "ml_code_gen.m"
              {
#line 1011 "ml_code_gen.m"
                *ml_backend__ml_code_gen__Statements_12 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__CondStatements_18, ml_backend__ml_code_gen__V_41_41);
              }
#line 1005 "ml_code_gen.m"
            }
#line 998 "ml_code_gen.m"
            break;
#line 998 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 1028 "ml_code_gen.m"
            {
#line 1029 "ml_code_gen.m"
              {
#line 1029 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_negation\'/7", (MR_String) "nondet cond");
#line 1029 "ml_code_gen.m"
                return;
              }
#line 1028 "ml_code_gen.m"
            }
#line 998 "ml_code_gen.m"
            break;
#line 998 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 1019 "ml_code_gen.m"
            {
#line 1019 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Succeeded_20;
#line 1019 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__InvertSuccess_21;
#line 1019 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_32_32;
#line 1019 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_35_35;
#line 1019 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CondStatements_46;
#line 1019 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__InitConstVarMap_76;
#line 1019 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_77;

#line 548 "ml_code_gen.m"
              {
#line 548 "ml_code_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__InitConstVarMap_76);
              }
#line 549 "ml_code_gen.m"
              {
#line 549 "ml_code_gen.m"
                ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_8, ml_backend__ml_code_gen__Decls_11, &ml_backend__ml_code_gen__CondStatements_46, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_77);
              }
#line 550 "ml_code_gen.m"
              {
#line 550 "ml_code_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_76, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_77, ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);
              }
#line 1022 "ml_code_gen.m"
              {
#line 1022 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_test_success_2_p_0(*ml_backend__ml_code_gen__STATE_VARIABLE_Info_23, &ml_backend__ml_code_gen__Succeeded_20);
              }
#line 1023 "ml_code_gen.m"
              {
#line 1023 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "ml_code_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1023 "ml_code_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_4[0])));
#line 1023 "ml_code_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_32_32, 2) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_20));
#line 1023 "ml_code_gen.m"
              }
#line 1023 "ml_code_gen.m"
              {
#line 1023 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_code_gen__STATE_VARIABLE_Info_23, ml_backend__ml_code_gen__V_32_32, ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__InvertSuccess_21);
              }
#line 1026 "ml_code_gen.m"
              {
#line 1026 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_35_35, 0) = ((MR_Box) (ml_backend__ml_code_gen__InvertSuccess_21));
#line 1026 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "ml_code_gen.m"
              }
#line 1026 "ml_code_gen.m"
              {
#line 1026 "ml_code_gen.m"
                *ml_backend__ml_code_gen__Statements_12 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__CondStatements_46, ml_backend__ml_code_gen__V_35_35);
              }
#line 1019 "ml_code_gen.m"
            }
#line 998 "ml_code_gen.m"
            break;
#line 998 "ml_code_gen.m"
        }
#line 998 "ml_code_gen.m"
        break;
#line 998 "ml_code_gen.m"
    }
#line 982 "ml_code_gen.m"
  }
#line 978 "ml_code_gen.m"
}

#line 853 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_ite_9_p_0(
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Cond_11,
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Then_12,
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Else_13,
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_14,
#line 853 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_15,
#line 853 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_16,
#line 853 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45,
#line 853 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_46)
#line 853 "ml_code_gen.m"
{
#line 857 "ml_code_gen.m"
  {
#line 857 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 857 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__CondGoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_11, (MR_Integer) 1)));
#line 857 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__CondCodeModel_20;
#line 858 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_11, (MR_Integer) 0)));

#line 859 "ml_code_gen.m"
    {
#line 859 "ml_code_gen.m"
      ml_backend__ml_code_gen__CondCodeModel_20 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__CondGoalInfo_19);
    }
#line 872 "ml_code_gen.m"
#line 872 "ml_code_gen.m"
    switch (ml_backend__ml_code_gen__CondCodeModel_20) {
#line 872 "ml_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 872 "ml_code_gen.m"
      case (MR_Integer) 0:
#line 867 "ml_code_gen.m"
        {
#line 867 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondStatement_21;
#line 867 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenStatement_22;
#line 867 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_91_91;
#line 867 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_93_93;

#line 868 "ml_code_gen.m"
          {
#line 868 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, ml_backend__ml_code_gen__Cond_11, &ml_backend__ml_code_gen__CondStatement_21, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_91_91);
          }
#line 869 "ml_code_gen.m"
          {
#line 869 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Then_12, &ml_backend__ml_code_gen__ThenStatement_22, ml_backend__ml_code_gen__STATE_VARIABLE_Info_91_91, ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);
          }
#line 870 "ml_code_gen.m"
          *ml_backend__ml_code_gen__Decls_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "ml_code_gen.m"
          {
#line 871 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_93_93, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenStatement_22));
#line 871 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 871 "ml_code_gen.m"
          }
#line 871 "ml_code_gen.m"
          {
#line 871 "ml_code_gen.m"
            MR_Word base;
#line 871 "ml_code_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "ml_code_gen.m"
            *ml_backend__ml_code_gen__Statements_16 = base;
#line 871 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_gen__CondStatement_21));
#line 871 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_93_93));
#line 871 "ml_code_gen.m"
          }
#line 867 "ml_code_gen.m"
        }
#line 872 "ml_code_gen.m"
        break;
#line 872 "ml_code_gen.m"
      case (MR_Integer) 2:
#line 924 "ml_code_gen.m"
        {
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondVar_30;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__MLDS_Context_31;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondVarDecl_32;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__SetCondFalse_33;
#line 924 "ml_code_gen.m"
          MR_Integer ml_backend__ml_code_gen__ThenFuncLabel_34;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenFuncLabelRval_35;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__EnvPtrRval_36;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__SuccessCont_37;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenGoalInfo_39;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenContext_40;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__SetCondTrue_41;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenFuncBody_42;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenFunc_43;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondSucceeded_44;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_54_54;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_56_56;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_61_61;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_63_63;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_64_64;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_66_66;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_70_70;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_74_74;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_75_75;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_77_77;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_78_78;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenStatement_96;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_97;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondDecls_98;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondStatements_99;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ElseStatement_100;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__IfStmt_101;
#line 924 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__IfStatement_102;
#line 946 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_38_38;

#line 925 "ml_code_gen.m"
          {
#line 925 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__InitConstVarMap_97);
          }
#line 928 "ml_code_gen.m"
          {
#line 928 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_p_0(&ml_backend__ml_code_gen__CondVar_30, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47);
          }
#line 929 "ml_code_gen.m"
          {
#line 929 "ml_code_gen.m"
            ml_backend__ml_code_gen__MLDS_Context_31 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__Context_14);
          }
#line 930 "ml_code_gen.m"
          {
#line 930 "ml_code_gen.m"
            ml_backend__ml_code_gen__CondVarDecl_32 = ml_backend__ml_code_util__ml_gen_cond_var_decl_2_f_0(ml_backend__ml_code_gen__CondVar_30, ml_backend__ml_code_gen__MLDS_Context_31);
          }
#line 931 "ml_code_gen.m"
          {
#line 931 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_set_cond_var_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_code_gen__CondVar_30, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[2]), ml_backend__ml_code_gen__Context_14, &ml_backend__ml_code_gen__SetCondFalse_33);
          }
#line 935 "ml_code_gen.m"
          {
#line 935 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_gen__ThenFuncLabel_34, &ml_backend__ml_code_gen__ThenFuncLabelRval_35, ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51);
          }
#line 938 "ml_code_gen.m"
          {
#line 938 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51, &ml_backend__ml_code_gen__EnvPtrRval_36);
          }
#line 939 "ml_code_gen.m"
          {
#line 939 "ml_code_gen.m"
            ml_backend__ml_code_gen__SuccessCont_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 939 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenFuncLabelRval_35));
#line 939 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 1) = ((MR_Box) (ml_backend__ml_code_gen__EnvPtrRval_36));
#line 939 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "ml_code_gen.m"
          }
#line 940 "ml_code_gen.m"
          {
#line 940 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_code_gen__SuccessCont_37, ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_54_54);
          }
#line 941 "ml_code_gen.m"
          {
#line 941 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 2, ml_backend__ml_code_gen__Cond_11, &ml_backend__ml_code_gen__CondDecls_98, &ml_backend__ml_code_gen__CondStatements_99, ml_backend__ml_code_gen__STATE_VARIABLE_Info_54_54, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_56_56);
          }
#line 942 "ml_code_gen.m"
          {
#line 942 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_56_56, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57);
          }
#line 946 "ml_code_gen.m"
          ml_backend__ml_code_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Then_12, (MR_Integer) 0)));
#line 946 "ml_code_gen.m"
          ml_backend__ml_code_gen__ThenGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Then_12, (MR_Integer) 1)));
#line 947 "ml_code_gen.m"
          {
#line 947 "ml_code_gen.m"
            ml_backend__ml_code_gen__ThenContext_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__ThenGoalInfo_39);
          }
#line 948 "ml_code_gen.m"
          {
#line 948 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_set_cond_var_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57, ml_backend__ml_code_gen__CondVar_30, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[1]), ml_backend__ml_code_gen__ThenContext_40, &ml_backend__ml_code_gen__SetCondTrue_41);
          }
#line 950 "ml_code_gen.m"
          {
#line 950 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Then_12, &ml_backend__ml_code_gen__ThenStatement_96, ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60);
          }
#line 952 "ml_code_gen.m"
          {
#line 952 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenStatement_96));
#line 952 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 952 "ml_code_gen.m"
          }
#line 952 "ml_code_gen.m"
          {
#line 952 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetCondTrue_41));
#line 952 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_64_64));
#line 952 "ml_code_gen.m"
          }
#line 952 "ml_code_gen.m"
          {
#line 952 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 952 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 952 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_63_63));
#line 952 "ml_code_gen.m"
          }
#line 953 "ml_code_gen.m"
          {
#line 953 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_66_66 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__ThenContext_40);
          }
#line 951 "ml_code_gen.m"
          {
#line 951 "ml_code_gen.m"
            ml_backend__ml_code_gen__ThenFuncBody_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 951 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__ThenFuncBody_42, 0) = ((MR_Box) (ml_backend__ml_code_gen__V_61_61));
#line 951 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__ThenFuncBody_42, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_66_66));
#line 951 "ml_code_gen.m"
          }
#line 955 "ml_code_gen.m"
          {
#line 955 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60, ml_backend__ml_code_gen__ThenFuncLabel_34, ml_backend__ml_code_gen__ThenContext_40, ml_backend__ml_code_gen__ThenFuncBody_42, &ml_backend__ml_code_gen__ThenFunc_43);
          }
#line 959 "ml_code_gen.m"
          {
#line 959 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_test_cond_var_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60, ml_backend__ml_code_gen__CondVar_30, &ml_backend__ml_code_gen__CondSucceeded_44);
          }
#line 960 "ml_code_gen.m"
          {
#line 960 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_97, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67);
          }
#line 961 "ml_code_gen.m"
          {
#line 961 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Else_13, &ml_backend__ml_code_gen__ElseStatement_100, ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68);
          }
#line 962 "ml_code_gen.m"
          {
#line 962 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_97, ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68, ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);
          }
#line 964 "ml_code_gen.m"
          {
#line 964 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 964 "ml_code_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 964 "ml_code_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_4[0])));
#line 964 "ml_code_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_70_70, 2) = ((MR_Box) (ml_backend__ml_code_gen__CondSucceeded_44));
#line 964 "ml_code_gen.m"
          }
#line 963 "ml_code_gen.m"
          {
#line 963 "ml_code_gen.m"
            ml_backend__ml_code_gen__IfStmt_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 963 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 0) = ((MR_Box) (ml_backend__ml_code_gen__V_70_70));
#line 963 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 1) = ((MR_Box) (ml_backend__ml_code_gen__ElseStatement_100));
#line 963 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 963 "ml_code_gen.m"
          }
#line 966 "ml_code_gen.m"
          {
#line 966 "ml_code_gen.m"
            ml_backend__ml_code_gen__IfStatement_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 966 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_102, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_101));
#line 966 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_102, 1) = ((MR_Box) (ml_backend__ml_code_gen__MLDS_Context_31));
#line 966 "ml_code_gen.m"
          }
#line 969 "ml_code_gen.m"
          {
#line 969 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_74_74, 0) = ((MR_Box) (ml_backend__ml_code_gen__CondVarDecl_32));
#line 969 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_74_74, 1) = ((MR_Box) (ml_backend__ml_code_gen__CondDecls_98));
#line 969 "ml_code_gen.m"
          }
#line 969 "ml_code_gen.m"
          {
#line 969 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_75_75, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenFunc_43));
#line 969 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "ml_code_gen.m"
          }
#line 969 "ml_code_gen.m"
          {
#line 969 "ml_code_gen.m"
            *ml_backend__ml_code_gen__Decls_15 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_gen__V_74_74, ml_backend__ml_code_gen__V_75_75);
          }
#line 970 "ml_code_gen.m"
          {
#line 970 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_77_77, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetCondFalse_33));
#line 970 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_77_77, 1) = ((MR_Box) (ml_backend__ml_code_gen__CondStatements_99));
#line 970 "ml_code_gen.m"
          }
#line 970 "ml_code_gen.m"
          {
#line 970 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_78_78, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStatement_102));
#line 970 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 970 "ml_code_gen.m"
          }
#line 970 "ml_code_gen.m"
          {
#line 970 "ml_code_gen.m"
            *ml_backend__ml_code_gen__Statements_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__V_77_77, ml_backend__ml_code_gen__V_78_78);
          }
#line 924 "ml_code_gen.m"
        }
#line 872 "ml_code_gen.m"
        break;
#line 872 "ml_code_gen.m"
      case (MR_Integer) 1:
#line 885 "ml_code_gen.m"
        {
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_23;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondStatements_25;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__Succeeded_26;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ElseStatement_27;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__IfStmt_28;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__IfStatement_29;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_86_86;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_87_87;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_88_88;
#line 885 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenStatement_95;

#line 886 "ml_code_gen.m"
          {
#line 886 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__InitConstVarMap_23);
          }
#line 887 "ml_code_gen.m"
          {
#line 887 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_11, ml_backend__ml_code_gen__Decls_15, &ml_backend__ml_code_gen__CondStatements_25, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81);
          }
#line 888 "ml_code_gen.m"
          {
#line 888 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_test_success_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81, &ml_backend__ml_code_gen__Succeeded_26);
          }
#line 889 "ml_code_gen.m"
          {
#line 889 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Then_12, &ml_backend__ml_code_gen__ThenStatement_95, ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82);
          }
#line 890 "ml_code_gen.m"
          {
#line 890 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_23, ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83);
          }
#line 891 "ml_code_gen.m"
          {
#line 891 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Else_13, &ml_backend__ml_code_gen__ElseStatement_27, ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84);
          }
#line 892 "ml_code_gen.m"
          {
#line 892 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_23, ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);
          }
#line 894 "ml_code_gen.m"
          {
#line 894 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 894 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_86_86, 0) = ((MR_Box) (ml_backend__ml_code_gen__ElseStatement_27));
#line 894 "ml_code_gen.m"
          }
#line 893 "ml_code_gen.m"
          {
#line 893 "ml_code_gen.m"
            ml_backend__ml_code_gen__IfStmt_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 893 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_28, 0) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_26));
#line 893 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_28, 1) = ((MR_Box) (ml_backend__ml_code_gen__ThenStatement_95));
#line 893 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_28, 2) = ((MR_Box) (ml_backend__ml_code_gen__V_86_86));
#line 893 "ml_code_gen.m"
          }
#line 895 "ml_code_gen.m"
          {
#line 895 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_87_87 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__Context_14);
          }
#line 895 "ml_code_gen.m"
          {
#line 895 "ml_code_gen.m"
            ml_backend__ml_code_gen__IfStatement_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 895 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_29, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_28));
#line 895 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_29, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_87_87));
#line 895 "ml_code_gen.m"
          }
#line 897 "ml_code_gen.m"
          {
#line 897 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_88_88, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStatement_29));
#line 897 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "ml_code_gen.m"
          }
#line 897 "ml_code_gen.m"
          {
#line 897 "ml_code_gen.m"
            *ml_backend__ml_code_gen__Statements_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__CondStatements_25, ml_backend__ml_code_gen__V_88_88);
          }
#line 885 "ml_code_gen.m"
        }
#line 872 "ml_code_gen.m"
        break;
#line 872 "ml_code_gen.m"
    }
#line 857 "ml_code_gen.m"
  }
#line 853 "ml_code_gen.m"
}

#line 838 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(
#line 838 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
#line 838 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
#line 838 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3)
#line 838 "ml_code_gen.m"
{
#line 841 "ml_code_gen.m"
  while (MR_TRUE)
#line 841 "ml_code_gen.m"
    {
#line 841 "ml_code_gen.m"
      /* tailcall optimized into a loop */
#line 841 "ml_code_gen.m"
      {
#line 841 "ml_code_gen.m"
        MR_bool ml_backend__ml_code_gen__succeeded;

#line 841 "ml_code_gen.m"
        if ((ml_backend__ml_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 841 "ml_code_gen.m"
          *ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2;
#line 841 "ml_code_gen.m"
        else
#line 842 "ml_code_gen.m"
          {
#line 842 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 842 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 842 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__SubGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Case_7, (MR_Integer) 2)));
#line 842 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__NonLocals_13;
#line 842 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16;
#line 843 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Case_7, (MR_Integer) 0)));
#line 843 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Case_7, (MR_Integer) 1)));

#line 844 "ml_code_gen.m"
            {
#line 844 "ml_code_gen.m"
              ml_backend__ml_code_gen__NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_12);
            }
#line 845 "ml_code_gen.m"
            {
#line 845 "ml_code_gen.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_13, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16);
            }
#line 846 "ml_code_gen.m"
            /* direct tailcall eliminated */
#line 846 "ml_code_gen.m"
            {
#line 846 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__HeadVar__1__tmp_copy_1 = ml_backend__ml_code_gen__Cases_8;
#line 846 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0__tmp_copy_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16;

#line 846 "ml_code_gen.m"
              ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0__tmp_copy_2;
#line 846 "ml_code_gen.m"
              ml_backend__ml_code_gen__HeadVar__1_1 = ml_backend__ml_code_gen__HeadVar__1__tmp_copy_1;
#line 846 "ml_code_gen.m"
            }
#line 846 "ml_code_gen.m"
            continue;
#line 842 "ml_code_gen.m"
          }
#line 841 "ml_code_gen.m"
      }
#line 841 "ml_code_gen.m"
      break;
#line 841 "ml_code_gen.m"
    }
#line 838 "ml_code_gen.m"
}

#line 829 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(
#line 829 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
#line 829 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
#line 829 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3)
#line 829 "ml_code_gen.m"
{
#line 832 "ml_code_gen.m"
  while (MR_TRUE)
#line 832 "ml_code_gen.m"
    {
#line 832 "ml_code_gen.m"
      /* tailcall optimized into a loop */
#line 832 "ml_code_gen.m"
      {
#line 832 "ml_code_gen.m"
        MR_bool ml_backend__ml_code_gen__succeeded;

#line 832 "ml_code_gen.m"
        if ((ml_backend__ml_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 832 "ml_code_gen.m"
          *ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2;
#line 832 "ml_code_gen.m"
        else
#line 833 "ml_code_gen.m"
          {
#line 833 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__SubGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 833 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__SubGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 833 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__NonLocals_10;
#line 833 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13;

#line 834 "ml_code_gen.m"
            {
#line 834 "ml_code_gen.m"
              ml_backend__ml_code_gen__NonLocals_10 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_7);
            }
#line 835 "ml_code_gen.m"
            {
#line 835 "ml_code_gen.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_10, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13);
            }
#line 836 "ml_code_gen.m"
            /* direct tailcall eliminated */
#line 836 "ml_code_gen.m"
            {
#line 836 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__HeadVar__1__tmp_copy_1 = ml_backend__ml_code_gen__SubGoals_8;
#line 836 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0__tmp_copy_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13;

#line 836 "ml_code_gen.m"
              ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0__tmp_copy_2;
#line 836 "ml_code_gen.m"
              ml_backend__ml_code_gen__HeadVar__1_1 = ml_backend__ml_code_gen__HeadVar__1__tmp_copy_1;
#line 836 "ml_code_gen.m"
            }
#line 836 "ml_code_gen.m"
            continue;
#line 833 "ml_code_gen.m"
          }
#line 832 "ml_code_gen.m"
      }
#line 832 "ml_code_gen.m"
      break;
#line 832 "ml_code_gen.m"
    }
#line 829 "ml_code_gen.m"
}

#line 795 "ml_code_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2(
#line 795 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 795 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1)
#line 795 "ml_code_gen.m"
{
#line 795 "ml_code_gen.m"
  {
#line 795 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__wrapper_arg_2;
#line 795 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
#line 795 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv1_HeadVar__2_2;

#line 795 "ml_code_gen.m"
    {
#line 795 "ml_code_gen.m"
      ml_backend__ml_code_gen__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ml_backend__ml_code_gen__wrapper_arg_1));
    }
#line 795 "ml_code_gen.m"
    ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv1_HeadVar__2_2));
#line 795 "ml_code_gen.m"
    return ml_backend__ml_code_gen__wrapper_arg_2;
#line 795 "ml_code_gen.m"
  }
#line 795 "ml_code_gen.m"
}

#line 794 "ml_code_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1(
#line 794 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 794 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1)
#line 794 "ml_code_gen.m"
{
#line 794 "ml_code_gen.m"
  {
#line 794 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__wrapper_arg_2;
#line 794 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
#line 794 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv0_HeadVar__2_2;

#line 794 "ml_code_gen.m"
    {
#line 794 "ml_code_gen.m"
      ml_backend__ml_code_gen__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ml_backend__ml_code_gen__wrapper_arg_1));
    }
#line 794 "ml_code_gen.m"
    ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv0_HeadVar__2_2));
#line 794 "ml_code_gen.m"
    return ml_backend__ml_code_gen__wrapper_arg_2;
#line 794 "ml_code_gen.m"
  }
#line 794 "ml_code_gen.m"
}

#line 742 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(
#line 742 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalExpr_3,
#line 742 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__SubGoalNonLocals_4)
#line 742 "ml_code_gen.m"
{
#line 747 "ml_code_gen.m"
  {
#line 747 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;

#line 747 "ml_code_gen.m"
#line 747 "ml_code_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GoalExpr_3)) {
#line 747 "ml_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 747 "ml_code_gen.m"
      case (MR_Integer) 0:
#line 800 "ml_code_gen.m"
        {
#line 800 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__SubGoal_48 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_gen__GoalExpr_3), (MR_Integer) 0);

#line 806 "ml_code_gen.m"
          {
#line 806 "ml_code_gen.m"
            *ml_backend__ml_code_gen__SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_48);
          }
#line 800 "ml_code_gen.m"
        }
#line 747 "ml_code_gen.m"
        break;
#line 747 "ml_code_gen.m"
      case (MR_Integer) 1:
#line 747 "ml_code_gen.m"
        {
#line 747 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__Unification_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
#line 747 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___LHS_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 0)));
#line 747 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 747 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 747 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___UnifyContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));

#line 756 "ml_code_gen.m"
#line 756 "ml_code_gen.m"
          switch (MR_tag((MR_Word) ml_backend__ml_code_gen__Unification_8)) {
#line 756 "ml_code_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 756 "ml_code_gen.m"
            case (MR_Integer) 0:
#line 750 "ml_code_gen.m"
              {
#line 750 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__LHSVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)));
#line 750 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 2)));
#line 750 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__V_84_84;
#line 749 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
#line 749 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___ArgModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 3)));
#line 749 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___HowToConstruct_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 4)));
#line 749 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___Unique_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 5)));
#line 749 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___SubInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 6)));

#line 755 "ml_code_gen.m"
                {
#line 755 "ml_code_gen.m"
                  ml_backend__ml_code_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_84_84, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_10));
#line 755 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_84_84, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_12));
#line 755 "ml_code_gen.m"
                }
#line 755 "ml_code_gen.m"
                {
#line 755 "ml_code_gen.m"
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_84_84);
                }
#line 750 "ml_code_gen.m"
              }
#line 756 "ml_code_gen.m"
              break;
#line 756 "ml_code_gen.m"
            case (MR_Integer) 1:
#line 758 "ml_code_gen.m"
              {
#line 758 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__V_83_83;
#line 758 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__LHSVar_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)));
#line 758 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__ArgVars_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 2)));
#line 757 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 4)));
#line 757 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___CanCGC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 5)));
#line 757 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___ConsId_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
#line 757 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___ArgModes_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 3)));

#line 759 "ml_code_gen.m"
                {
#line 759 "ml_code_gen.m"
                  ml_backend__ml_code_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_83_83, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_87));
#line 759 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_89));
#line 759 "ml_code_gen.m"
                }
#line 759 "ml_code_gen.m"
                {
#line 759 "ml_code_gen.m"
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_83_83);
                }
#line 758 "ml_code_gen.m"
              }
#line 756 "ml_code_gen.m"
              break;
#line 756 "ml_code_gen.m"
            case (MR_Integer) 2:
#line 761 "ml_code_gen.m"
              {
#line 761 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__RHSVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
#line 761 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__V_80_80;
#line 761 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__V_81_81;
#line 761 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__LHSVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)));

#line 762 "ml_code_gen.m"
                {
#line 762 "ml_code_gen.m"
                  ml_backend__ml_code_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_81_81, 0) = ((MR_Box) (ml_backend__ml_code_gen__RHSVar_19));
#line 762 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 762 "ml_code_gen.m"
                }
#line 762 "ml_code_gen.m"
                {
#line 762 "ml_code_gen.m"
                  ml_backend__ml_code_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_80_80, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_91));
#line 762 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_80_80, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_81_81));
#line 762 "ml_code_gen.m"
                }
#line 762 "ml_code_gen.m"
                {
#line 762 "ml_code_gen.m"
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_80_80);
                }
#line 761 "ml_code_gen.m"
              }
#line 756 "ml_code_gen.m"
              break;
#line 756 "ml_code_gen.m"
            case (MR_Integer) 3:
#line 756 "ml_code_gen.m"
#line 756 "ml_code_gen.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)))) {
#line 756 "ml_code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 756 "ml_code_gen.m"
                case (MR_Integer) 0:
#line 764 "ml_code_gen.m"
                  {
#line 764 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__V_77_77;
#line 764 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__V_78_78;
#line 764 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__LHSVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
#line 764 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__RHSVar_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 2)));

#line 765 "ml_code_gen.m"
                    {
#line 765 "ml_code_gen.m"
                      ml_backend__ml_code_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_78_78, 0) = ((MR_Box) (ml_backend__ml_code_gen__RHSVar_93));
#line 765 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "ml_code_gen.m"
                    }
#line 765 "ml_code_gen.m"
                    {
#line 765 "ml_code_gen.m"
                      ml_backend__ml_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_77_77, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_92));
#line 765 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_77_77, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_78_78));
#line 765 "ml_code_gen.m"
                    }
#line 765 "ml_code_gen.m"
                    {
#line 765 "ml_code_gen.m"
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_77_77);
                    }
#line 764 "ml_code_gen.m"
                  }
#line 756 "ml_code_gen.m"
                  break;
#line 756 "ml_code_gen.m"
                case (MR_Integer) 1:
#line 767 "ml_code_gen.m"
                  {
#line 768 "ml_code_gen.m"
                    {
#line 768 "ml_code_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.goal_expr_find_subgoal_nonlocals\'/2", (MR_String) "complicated_unify");
#line 768 "ml_code_gen.m"
                      return;
                    }
#line 767 "ml_code_gen.m"
                  }
#line 756 "ml_code_gen.m"
                  break;
#line 756 "ml_code_gen.m"
              }
#line 756 "ml_code_gen.m"
              break;
#line 756 "ml_code_gen.m"
          }
#line 747 "ml_code_gen.m"
        }
#line 747 "ml_code_gen.m"
        break;
#line 747 "ml_code_gen.m"
      case (MR_Integer) 2:
#line 772 "ml_code_gen.m"
        {
#line 772 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ArgVars_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 771 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 0)));
#line 771 "ml_code_gen.m"
          MR_Integer ml_backend__ml_code_gen___ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 771 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___Builtin_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
#line 771 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___Unify_context_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
#line 771 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 5)));

#line 773 "ml_code_gen.m"
          {
#line 773 "ml_code_gen.m"
            *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_94);
          }
#line 772 "ml_code_gen.m"
        }
#line 747 "ml_code_gen.m"
        break;
#line 747 "ml_code_gen.m"
      case (MR_Integer) 3:
#line 747 "ml_code_gen.m"
#line 747 "ml_code_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 0)))) {
#line 747 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 747 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 776 "ml_code_gen.m"
            {
#line 776 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__GenericCall_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 776 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ArgVars_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 775 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
#line 775 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___MaybeArgRegs_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
#line 775 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Detism_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 5)));

#line 780 "ml_code_gen.m"
#line 780 "ml_code_gen.m"
              switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GenericCall_28)) {
#line 780 "ml_code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 780 "ml_code_gen.m"
                case (MR_Integer) 0:
#line 778 "ml_code_gen.m"
                  {
#line 778 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__HOVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 0)));
#line 778 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__V_73_73;
#line 778 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen___Purity_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 1)));
#line 778 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen___Kind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 2)));
#line 778 "ml_code_gen.m"
                    MR_Integer ml_backend__ml_code_gen___Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 3)));

#line 779 "ml_code_gen.m"
                    {
#line 779 "ml_code_gen.m"
                      ml_backend__ml_code_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_73_73, 0) = ((MR_Box) (ml_backend__ml_code_gen__HOVar_32));
#line 779 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_73_73, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_95));
#line 779 "ml_code_gen.m"
                    }
#line 779 "ml_code_gen.m"
                    {
#line 779 "ml_code_gen.m"
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_73_73);
                    }
#line 778 "ml_code_gen.m"
                  }
#line 780 "ml_code_gen.m"
                  break;
#line 780 "ml_code_gen.m"
                case (MR_Integer) 1:
#line 782 "ml_code_gen.m"
                  {
#line 782 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__MethodVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 0)));
#line 782 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__V_72_72;
#line 781 "ml_code_gen.m"
                    MR_Integer ml_backend__ml_code_gen___MethodNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 1)));
#line 781 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen___MethodClassId_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 2)));
#line 781 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen___Name_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 3)));

#line 783 "ml_code_gen.m"
                    {
#line 783 "ml_code_gen.m"
                      ml_backend__ml_code_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_code_gen__MethodVar_36));
#line 783 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_72_72, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_95));
#line 783 "ml_code_gen.m"
                    }
#line 783 "ml_code_gen.m"
                    {
#line 783 "ml_code_gen.m"
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_72_72);
                    }
#line 782 "ml_code_gen.m"
                  }
#line 780 "ml_code_gen.m"
                  break;
#line 780 "ml_code_gen.m"
                case (MR_Integer) 2:
#line 785 "ml_code_gen.m"
                  {
#line 786 "ml_code_gen.m"
                    {
#line 786 "ml_code_gen.m"
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_95);
                    }
#line 785 "ml_code_gen.m"
                  }
#line 780 "ml_code_gen.m"
                  break;
#line 780 "ml_code_gen.m"
                case (MR_Integer) 3:
#line 788 "ml_code_gen.m"
                  {
#line 789 "ml_code_gen.m"
                    {
#line 789 "ml_code_gen.m"
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_95);
                    }
#line 788 "ml_code_gen.m"
                  }
#line 780 "ml_code_gen.m"
                  break;
#line 780 "ml_code_gen.m"
              }
#line 776 "ml_code_gen.m"
            }
#line 747 "ml_code_gen.m"
            break;
#line 747 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 793 "ml_code_gen.m"
            {
#line 793 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__TypeCtorInfo_112_112 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 793 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__TypeInfo_113_113 = (MR_Word) &ml_backend__ml_code_gen_scalar_common_1[0];
#line 793 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
#line 793 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ExtraArgs_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 5)));
#line 793 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ExtraVars_47;
#line 793 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_71_71;
#line 793 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ArgVars_98;
#line 792 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Attr_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 792 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___TraceCond_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 6)));
#line 792 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Impl_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 7)));
#line 792 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___PredId_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 792 "ml_code_gen.m"
              MR_Integer ml_backend__ml_code_gen___ProcId_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));

#line 794 "ml_code_gen.m"
              {
#line 794 "ml_code_gen.m"
                ml_backend__ml_code_gen__ArgVars_98 = mercury__list__map_2_f_0(ml_backend__ml_code_gen__TypeCtorInfo_112_112, ml_backend__ml_code_gen__TypeInfo_113_113, (MR_Word) &ml_backend__ml_code_gen_scalar_common_3[0], ml_backend__ml_code_gen__Args_43);
              }
#line 795 "ml_code_gen.m"
              {
#line 795 "ml_code_gen.m"
                ml_backend__ml_code_gen__ExtraVars_47 = mercury__list__map_2_f_0(ml_backend__ml_code_gen__TypeCtorInfo_112_112, ml_backend__ml_code_gen__TypeInfo_113_113, (MR_Word) &ml_backend__ml_code_gen_scalar_common_3[1], ml_backend__ml_code_gen__ExtraArgs_44);
              }
#line 796 "ml_code_gen.m"
              {
#line 796 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_71_71 = mercury__list__f_43_43_2_f_0(ml_backend__ml_code_gen__TypeInfo_113_113, ml_backend__ml_code_gen__ExtraVars_47, ml_backend__ml_code_gen__ArgVars_98);
              }
#line 796 "ml_code_gen.m"
              {
#line 796 "ml_code_gen.m"
                *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_71_71);
              }
#line 793 "ml_code_gen.m"
            }
#line 747 "ml_code_gen.m"
            break;
#line 747 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 810 "ml_code_gen.m"
            {
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoals_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_68_68;
#line 808 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));

#line 812 "ml_code_gen.m"
              {
#line 812 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_68_68 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 811 "ml_code_gen.m"
              {
#line 811 "ml_code_gen.m"
                ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__SubGoals_51, ml_backend__ml_code_gen__V_68_68, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
#line 810 "ml_code_gen.m"
            }
#line 747 "ml_code_gen.m"
            break;
#line 747 "ml_code_gen.m"
          case (MR_Integer) 3:
#line 810 "ml_code_gen.m"
            {
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoals_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_123_123;

#line 812 "ml_code_gen.m"
              {
#line 812 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_123_123 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 811 "ml_code_gen.m"
              {
#line 811 "ml_code_gen.m"
                ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__SubGoals_122, ml_backend__ml_code_gen__V_123_123, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
#line 810 "ml_code_gen.m"
            }
#line 747 "ml_code_gen.m"
            break;
#line 747 "ml_code_gen.m"
          case (MR_Integer) 4:
#line 820 "ml_code_gen.m"
            {
#line 820 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
#line 820 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_62_62;
#line 820 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 820 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___CanFail_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));

#line 823 "ml_code_gen.m"
              {
#line 823 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_62_62 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 823 "ml_code_gen.m"
              {
#line 823 "ml_code_gen.m"
                ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__Cases_57, ml_backend__ml_code_gen__V_62_62, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
#line 820 "ml_code_gen.m"
            }
#line 747 "ml_code_gen.m"
            break;
#line 747 "ml_code_gen.m"
          case (MR_Integer) 5:
#line 800 "ml_code_gen.m"
            {
#line 800 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoal_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 799 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Reason_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));

#line 806 "ml_code_gen.m"
              {
#line 806 "ml_code_gen.m"
                *ml_backend__ml_code_gen__SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_125);
              }
#line 800 "ml_code_gen.m"
            }
#line 747 "ml_code_gen.m"
            break;
#line 747 "ml_code_gen.m"
          case (MR_Integer) 6:
#line 814 "ml_code_gen.m"
            {
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Cond_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Then_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Else_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_63_63;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_64_64;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_65_65;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_66_66;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoal_129;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoals_130;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__NonLocals_132;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoal_141;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoals_142;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__NonLocals_144;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoal_153;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__NonLocals_156;
#line 814 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 833 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoals_154;

#line 817 "ml_code_gen.m"
              {
#line 817 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_66_66, 0) = ((MR_Box) (ml_backend__ml_code_gen__Else_55));
#line 817 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "ml_code_gen.m"
              }
#line 817 "ml_code_gen.m"
              {
#line 817 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_65_65, 0) = ((MR_Box) (ml_backend__ml_code_gen__Then_54));
#line 817 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_65_65, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_66_66));
#line 817 "ml_code_gen.m"
              }
#line 817 "ml_code_gen.m"
              {
#line 817 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_code_gen__Cond_53));
#line 817 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_65_65));
#line 817 "ml_code_gen.m"
              }
#line 818 "ml_code_gen.m"
              {
#line 818 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_64_64 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 833 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoal_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, (MR_Integer) 0)));
#line 833 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoals_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, (MR_Integer) 1)));
#line 834 "ml_code_gen.m"
              {
#line 834 "ml_code_gen.m"
                ml_backend__ml_code_gen__NonLocals_132 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_129);
              }
#line 835 "ml_code_gen.m"
              {
#line 835 "ml_code_gen.m"
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_132, ml_backend__ml_code_gen__V_64_64, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135);
              }
#line 833 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoal_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_130, (MR_Integer) 0)));
#line 833 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoals_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_130, (MR_Integer) 1)));
#line 834 "ml_code_gen.m"
              {
#line 834 "ml_code_gen.m"
                ml_backend__ml_code_gen__NonLocals_144 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_141);
              }
#line 835 "ml_code_gen.m"
              {
#line 835 "ml_code_gen.m"
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_144, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147);
              }
#line 833 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoal_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_142, (MR_Integer) 0)));
#line 833 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoals_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_142, (MR_Integer) 1)));
#line 834 "ml_code_gen.m"
              {
#line 834 "ml_code_gen.m"
                ml_backend__ml_code_gen__NonLocals_156 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_153);
              }
#line 835 "ml_code_gen.m"
              {
#line 835 "ml_code_gen.m"
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_156, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
#line 814 "ml_code_gen.m"
            }
#line 747 "ml_code_gen.m"
            break;
#line 747 "ml_code_gen.m"
          case (MR_Integer) 7:
#line 825 "ml_code_gen.m"
            {
#line 826 "ml_code_gen.m"
              {
#line 826 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.goal_expr_find_subgoal_nonlocals\'/2", (MR_String) "shorthand");
#line 826 "ml_code_gen.m"
                return;
              }
#line 825 "ml_code_gen.m"
            }
#line 747 "ml_code_gen.m"
            break;
#line 747 "ml_code_gen.m"
        }
#line 747 "ml_code_gen.m"
        break;
#line 747 "ml_code_gen.m"
    }
#line 747 "ml_code_gen.m"
  }
#line 742 "ml_code_gen.m"
}

#line 622 "ml_code_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0_1(
#line 622 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg)
#line 622 "ml_code_gen.m"
{
#line 622 "ml_code_gen.m"
  {
#line 622 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 622 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;

#line 622 "ml_code_gen.m"
    {
#line 622 "ml_code_gen.m"
      ml_backend__ml_code_gen__succeeded = ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))));
    }
#line 622 "ml_code_gen.m"
    return ml_backend__ml_code_gen__succeeded;
#line 622 "ml_code_gen.m"
  }
#line 622 "ml_code_gen.m"
}

#line 592 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0(
#line 592 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalExpr_9,
#line 592 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 592 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_11,
#line 592 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalInfo_12,
#line 592 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_13,
#line 592 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_14,
#line 592 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59,
#line 592 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_60)
#line 592 "ml_code_gen.m"
{
#line 599 "ml_code_gen.m"
  {
#line 599 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;

#line 599 "ml_code_gen.m"
#line 599 "ml_code_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GoalExpr_9)) {
#line 599 "ml_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 599 "ml_code_gen.m"
      case (MR_Integer) 0:
#line 664 "ml_code_gen.m"
        {
#line 664 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__SubGoal_55 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_gen__GoalExpr_9), (MR_Integer) 0);

#line 665 "ml_code_gen.m"
          {
#line 665 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_negation_7_p_0(ml_backend__ml_code_gen__SubGoal_55, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
          }
#line 664 "ml_code_gen.m"
        }
#line 599 "ml_code_gen.m"
        break;
#line 599 "ml_code_gen.m"
      case (MR_Integer) 1:
#line 599 "ml_code_gen.m"
        {
#line 599 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__Unification_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
#line 599 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___LHS_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 0)));
#line 599 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___RHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 599 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 599 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___UnifyContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));

#line 600 "ml_code_gen.m"
          {
#line 600 "ml_code_gen.m"
            ml_backend__ml_unify_gen__ml_gen_unification_6_p_0(ml_backend__ml_code_gen__Unification_19, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
          }
#line 601 "ml_code_gen.m"
          *ml_backend__ml_code_gen__Decls_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "ml_code_gen.m"
        }
#line 599 "ml_code_gen.m"
        break;
#line 599 "ml_code_gen.m"
      case (MR_Integer) 2:
#line 603 "ml_code_gen.m"
        {
#line 603 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 0)));
#line 603 "ml_code_gen.m"
          MR_Integer ml_backend__ml_code_gen__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 603 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 603 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__BuiltinState_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
#line 603 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));
#line 603 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 5)));

#line 612 "ml_code_gen.m"
#line 612 "ml_code_gen.m"
          switch (ml_backend__ml_code_gen__BuiltinState_24) {
#line 612 "ml_code_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 612 "ml_code_gen.m"
            case (MR_Integer) 0:
#line 612 "ml_code_gen.m"
            case (MR_Integer) 1:
#line 616 "ml_code_gen.m"
              {
#line 616 "ml_code_gen.m"
                ml_backend__ml_call_gen__ml_gen_builtin_9_p_0(ml_backend__ml_code_gen__PredId_21, ml_backend__ml_code_gen__ProcId_22, ml_backend__ml_code_gen__ArgVars_23, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 612 "ml_code_gen.m"
              break;
#line 612 "ml_code_gen.m"
            case (MR_Integer) 2:
#line 605 "ml_code_gen.m"
              {
#line 605 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__ArgLvals_27;
#line 605 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__VarSet_28;
#line 605 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__ArgNames_29;
#line 605 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__ActualArgTypes_30;

#line 606 "ml_code_gen.m"
                {
#line 606 "ml_code_gen.m"
                  ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__ArgVars_23, &ml_backend__ml_code_gen__ArgLvals_27);
                }
#line 607 "ml_code_gen.m"
                {
#line 607 "ml_code_gen.m"
                  ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, &ml_backend__ml_code_gen__VarSet_28);
                }
#line 608 "ml_code_gen.m"
                {
#line 608 "ml_code_gen.m"
                  ml_backend__ml_code_gen__ArgNames_29 = ml_backend__ml_code_util__ml_gen_var_names_2_f_0(ml_backend__ml_code_gen__VarSet_28, ml_backend__ml_code_gen__ArgVars_23);
                }
#line 609 "ml_code_gen.m"
                {
#line 609 "ml_code_gen.m"
                  ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__ArgVars_23, &ml_backend__ml_code_gen__ActualArgTypes_30);
                }
#line 610 "ml_code_gen.m"
                {
#line 610 "ml_code_gen.m"
                  ml_backend__ml_call_gen__ml_gen_call_12_p_0(ml_backend__ml_code_gen__PredId_21, ml_backend__ml_code_gen__ProcId_22, ml_backend__ml_code_gen__ArgNames_29, ml_backend__ml_code_gen__ArgLvals_27, ml_backend__ml_code_gen__ActualArgTypes_30, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, (MR_Integer) 0, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
                }
#line 605 "ml_code_gen.m"
              }
#line 612 "ml_code_gen.m"
              break;
#line 612 "ml_code_gen.m"
          }
#line 603 "ml_code_gen.m"
        }
#line 599 "ml_code_gen.m"
        break;
#line 599 "ml_code_gen.m"
      case (MR_Integer) 3:
#line 599 "ml_code_gen.m"
#line 599 "ml_code_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 0)))) {
#line 599 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 599 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 620 "ml_code_gen.m"
            {
#line 620 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__GenericCall_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 620 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Vars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 620 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
#line 620 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Detism_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 5)));
#line 620 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CallCodeModel_36;
#line 620 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_74_74;
#line 620 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));

#line 621 "ml_code_gen.m"
              {
#line 621 "ml_code_gen.m"
                hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_gen__Detism_35, &ml_backend__ml_code_gen__CallCodeModel_36);
              }
#line 622 "ml_code_gen.m"
              {
#line 622 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 622 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_74_74, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[0]));
#line 622 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_74_74, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0_1));
#line 622 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 622 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_74_74, 3) = ((MR_Box) (ml_backend__ml_code_gen__CodeModel_10));
#line 622 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_74_74, 4) = ((MR_Box) (ml_backend__ml_code_gen__CallCodeModel_36));
#line 622 "ml_code_gen.m"
              }
#line 622 "ml_code_gen.m"
              {
#line 622 "ml_code_gen.m"
                mercury__require__expect_4_p_0(ml_backend__ml_code_gen__V_74_74, (MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/8", (MR_String) "code model mismatch");
              }
#line 624 "ml_code_gen.m"
              {
#line 624 "ml_code_gen.m"
                ml_backend__ml_call_gen__ml_gen_generic_call_9_p_0(ml_backend__ml_code_gen__GenericCall_31, ml_backend__ml_code_gen__Vars_32, ml_backend__ml_code_gen__Modes_33, ml_backend__ml_code_gen__Detism_35, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 620 "ml_code_gen.m"
            }
#line 599 "ml_code_gen.m"
            break;
#line 599 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 628 "ml_code_gen.m"
            {
#line 628 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Attributes_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 628 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));
#line 628 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ExtraArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 5)));
#line 628 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__MaybeTraceRuntimeCond_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 6)));
#line 628 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__PragmaImpl_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 7)));
#line 628 "ml_code_gen.m"
              MR_String ml_backend__ml_code_gen__ForeignCode_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__PragmaImpl_41, (MR_Integer) 0)));
#line 628 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__MaybeContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__PragmaImpl_41, (MR_Integer) 1)));
#line 628 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ContextToUse_44;
#line 628 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__PredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 628 "ml_code_gen.m"
              MR_Integer ml_backend__ml_code_gen__ProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));

#line 632 "ml_code_gen.m"
              if ((ml_backend__ml_code_gen__MaybeContext_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "ml_code_gen.m"
                ml_backend__ml_code_gen__ContextToUse_44 = ml_backend__ml_code_gen__Context_11;
#line 632 "ml_code_gen.m"
              else
#line 631 "ml_code_gen.m"
                ml_backend__ml_code_gen__ContextToUse_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__MaybeContext_43, (MR_Integer) 0)));
#line 641 "ml_code_gen.m"
              if ((ml_backend__ml_code_gen__MaybeTraceRuntimeCond_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "ml_code_gen.m"
                {
#line 638 "ml_code_gen.m"
                  ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Attributes_37, ml_backend__ml_code_gen__PredId_83, ml_backend__ml_code_gen__ProcId_84, ml_backend__ml_code_gen__Args_38, ml_backend__ml_code_gen__ExtraArgs_39, ml_backend__ml_code_gen__ForeignCode_42, ml_backend__ml_code_gen__ContextToUse_44, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
                }
#line 641 "ml_code_gen.m"
              else
#line 642 "ml_code_gen.m"
                {
#line 642 "ml_code_gen.m"
                  MR_Word ml_backend__ml_code_gen__TraceRuntimeCond_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__MaybeTraceRuntimeCond_40, (MR_Integer) 0)));

#line 643 "ml_code_gen.m"
                  {
#line 643 "ml_code_gen.m"
                    ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_p_0(ml_backend__ml_code_gen__TraceRuntimeCond_45, ml_backend__ml_code_gen__ContextToUse_44, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
                  }
#line 642 "ml_code_gen.m"
                }
#line 628 "ml_code_gen.m"
            }
#line 599 "ml_code_gen.m"
            break;
#line 599 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 647 "ml_code_gen.m"
            {
#line 647 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Goals_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 647 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___ConjType_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));

#line 650 "ml_code_gen.m"
              {
#line 650 "ml_code_gen.m"
                ml_backend__ml_code_gen__ml_gen_conj_7_p_0(ml_backend__ml_code_gen__Goals_47, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 647 "ml_code_gen.m"
            }
#line 599 "ml_code_gen.m"
            break;
#line 599 "ml_code_gen.m"
          case (MR_Integer) 3:
#line 652 "ml_code_gen.m"
            {
#line 652 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Goals_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));

#line 653 "ml_code_gen.m"
              {
#line 653 "ml_code_gen.m"
                ml_backend__ml_disj_gen__ml_gen_disj_7_p_0(ml_backend__ml_code_gen__Goals_85, ml_backend__ml_code_gen__GoalInfo_12, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 654 "ml_code_gen.m"
              *ml_backend__ml_code_gen__Decls_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "ml_code_gen.m"
            }
#line 599 "ml_code_gen.m"
            break;
#line 599 "ml_code_gen.m"
          case (MR_Integer) 4:
#line 656 "ml_code_gen.m"
            {
#line 656 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 656 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 656 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CasesList_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));

#line 657 "ml_code_gen.m"
              {
#line 657 "ml_code_gen.m"
                ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(ml_backend__ml_code_gen__Var_48, ml_backend__ml_code_gen__CanFail_49, ml_backend__ml_code_gen__CasesList_50, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__GoalInfo_12, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 656 "ml_code_gen.m"
            }
#line 599 "ml_code_gen.m"
            break;
#line 599 "ml_code_gen.m"
          case (MR_Integer) 5:
#line 667 "ml_code_gen.m"
            {
#line 667 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 667 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoal_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 668 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__TermVar_57;
#line 669 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_64_64;

#line 669 "ml_code_gen.m"
              ml_backend__ml_code_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_code_gen__Reason_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 669 "ml_code_gen.m"
              if (ml_backend__ml_code_gen__succeeded)
#line 669 "ml_code_gen.m"
                {
#line 669 "ml_code_gen.m"
                  ml_backend__ml_code_gen__TermVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 1)));
#line 669 "ml_code_gen.m"
                  ml_backend__ml_code_gen__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 2)));
#line 669 "ml_code_gen.m"
                  ml_backend__ml_code_gen__succeeded = (ml_backend__ml_code_gen__V_64_64 == (MR_Integer) 1);
#line 669 "ml_code_gen.m"
                }
#line 668 "ml_code_gen.m"
              if (ml_backend__ml_code_gen__succeeded)
#line 671 "ml_code_gen.m"
                {
#line 671 "ml_code_gen.m"
                  {
#line 671 "ml_code_gen.m"
                    ml_backend__ml_unify_gen__ml_gen_ground_term_5_p_0(ml_backend__ml_code_gen__TermVar_57, ml_backend__ml_code_gen__SubGoal_86, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
                  }
#line 672 "ml_code_gen.m"
                  *ml_backend__ml_code_gen__Decls_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "ml_code_gen.m"
                }
#line 668 "ml_code_gen.m"
              else
#line 674 "ml_code_gen.m"
                {
#line 674 "ml_code_gen.m"
                  ml_backend__ml_commit_gen__ml_gen_commit_7_p_0(ml_backend__ml_code_gen__SubGoal_86, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
                }
#line 667 "ml_code_gen.m"
            }
#line 599 "ml_code_gen.m"
            break;
#line 599 "ml_code_gen.m"
          case (MR_Integer) 6:
#line 660 "ml_code_gen.m"
            {
#line 660 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Cond_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 660 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Then_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
#line 660 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Else_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));
#line 660 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Vars_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));

#line 661 "ml_code_gen.m"
              {
#line 661 "ml_code_gen.m"
                ml_backend__ml_code_gen__ml_gen_ite_9_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Cond_52, ml_backend__ml_code_gen__Then_53, ml_backend__ml_code_gen__Else_54, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 660 "ml_code_gen.m"
            }
#line 599 "ml_code_gen.m"
            break;
#line 599 "ml_code_gen.m"
          case (MR_Integer) 7:
#line 678 "ml_code_gen.m"
            {
#line 680 "ml_code_gen.m"
              {
#line 680 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/8", (MR_String) "unexpected shorthand");
#line 680 "ml_code_gen.m"
                return;
              }
#line 678 "ml_code_gen.m"
            }
#line 599 "ml_code_gen.m"
            break;
#line 599 "ml_code_gen.m"
        }
#line 599 "ml_code_gen.m"
        break;
#line 599 "ml_code_gen.m"
    }
#line 599 "ml_code_gen.m"
  }
#line 592 "ml_code_gen.m"
}

#line 509 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(
#line 509 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
#line 509 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__2_2,
#line 509 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__3_3,
#line 509 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__4_4,
#line 509 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__HeadVar__5_5,
#line 509 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6,
#line 509 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_7)
#line 509 "ml_code_gen.m"
{
#line 1155 "ml_code_gen.m"
  while (MR_TRUE)
#line 1155 "ml_code_gen.m"
    {
#line 1155 "ml_code_gen.m"
      /* tailcall optimized into a loop */
#line 1155 "ml_code_gen.m"
      {
#line 1155 "ml_code_gen.m"
        MR_bool ml_backend__ml_code_gen__succeeded;

#line 1155 "ml_code_gen.m"
        if ((ml_backend__ml_code_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1155 "ml_code_gen.m"
          {
#line 1155 "ml_code_gen.m"
            *ml_backend__ml_code_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1155 "ml_code_gen.m"
            *ml_backend__ml_code_gen__STATE_VARIABLE_Info_7 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6;
#line 1155 "ml_code_gen.m"
          }
#line 1155 "ml_code_gen.m"
        else
#line 1157 "ml_code_gen.m"
          {
#line 1157 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 1157 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 1157 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__Type_21;
#line 1157 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__ModuleInfo_22;
#line 1157 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__IsDummy_23;

#line 1158 "ml_code_gen.m"
            {
#line 1158 "ml_code_gen.m"
              hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_code_gen__HeadVar__2_2, ml_backend__ml_code_gen__Var_17, &ml_backend__ml_code_gen__Type_21);
            }
#line 1159 "ml_code_gen.m"
            {
#line 1159 "ml_code_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_code_gen__ModuleInfo_22);
            }
#line 1160 "ml_code_gen.m"
            {
#line 1160 "ml_code_gen.m"
              ml_backend__ml_code_gen__IsDummy_23 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_gen__ModuleInfo_22, ml_backend__ml_code_gen__Type_21);
            }
#line 1165 "ml_code_gen.m"
#line 1165 "ml_code_gen.m"
            switch (ml_backend__ml_code_gen__IsDummy_23) {
#line 1165 "ml_code_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1165 "ml_code_gen.m"
              case (MR_Integer) 0:
#line 1164 "ml_code_gen.m"
                {
#line 1164 "ml_code_gen.m"
                  /* direct tailcall eliminated */
#line 1164 "ml_code_gen.m"
                  {
#line 1164 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__HeadVar__4__tmp_copy_4 = ml_backend__ml_code_gen__Vars_18;

#line 1164 "ml_code_gen.m"
                    ml_backend__ml_code_gen__HeadVar__4_4 = ml_backend__ml_code_gen__HeadVar__4__tmp_copy_4;
#line 1164 "ml_code_gen.m"
                  }
#line 1164 "ml_code_gen.m"
                  continue;
#line 1164 "ml_code_gen.m"
                }
#line 1165 "ml_code_gen.m"
                break;
#line 1165 "ml_code_gen.m"
              case (MR_Integer) 1:
#line 1166 "ml_code_gen.m"
                {
#line 1166 "ml_code_gen.m"
                  MR_Word ml_backend__ml_code_gen__VarName_24;
#line 1166 "ml_code_gen.m"
                  MR_Word ml_backend__ml_code_gen__Defn_25;
#line 1166 "ml_code_gen.m"
                  MR_Word ml_backend__ml_code_gen__Defns0_26;
#line 1166 "ml_code_gen.m"
                  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29;

#line 1167 "ml_code_gen.m"
                  {
#line 1167 "ml_code_gen.m"
                    ml_backend__ml_code_gen__VarName_24 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_code_gen__HeadVar__1_1, ml_backend__ml_code_gen__Var_17);
                  }
#line 1168 "ml_code_gen.m"
                  {
#line 1168 "ml_code_gen.m"
                    ml_backend__ml_code_util__ml_gen_var_decl_6_p_0(ml_backend__ml_code_gen__VarName_24, ml_backend__ml_code_gen__Type_21, ml_backend__ml_code_gen__HeadVar__3_3, &ml_backend__ml_code_gen__Defn_25, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29);
                  }
#line 1169 "ml_code_gen.m"
                  {
#line 1169 "ml_code_gen.m"
                    ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_code_gen__HeadVar__1_1, ml_backend__ml_code_gen__HeadVar__2_2, ml_backend__ml_code_gen__HeadVar__3_3, ml_backend__ml_code_gen__Vars_18, &ml_backend__ml_code_gen__Defns0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29, ml_backend__ml_code_gen__STATE_VARIABLE_Info_7);
                  }
#line 1170 "ml_code_gen.m"
                  {
#line 1170 "ml_code_gen.m"
                    MR_Word base;
#line 1170 "ml_code_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "ml_code_gen.m"
                    *ml_backend__ml_code_gen__HeadVar__5_5 = base;
#line 1170 "ml_code_gen.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_gen__Defn_25));
#line 1170 "ml_code_gen.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_gen__Defns0_26));
#line 1170 "ml_code_gen.m"
                  }
#line 1166 "ml_code_gen.m"
                }
#line 1165 "ml_code_gen.m"
                break;
#line 1165 "ml_code_gen.m"
            }
#line 1157 "ml_code_gen.m"
          }
#line 1155 "ml_code_gen.m"
      }
#line 1155 "ml_code_gen.m"
      break;
#line 1155 "ml_code_gen.m"
    }
#line 509 "ml_code_gen.m"
}

#line 503 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(
#line 503 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__OuterCodeModel_8,
#line 503 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__InnerCodeModel_9,
#line 503 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_10,
#line 503 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18,
#line 503 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19,
#line 503 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20,
#line 503 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_21)
#line 503 "ml_code_gen.m"
{
#line 1077 "ml_code_gen.m"
  {
#line 1077 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;

#line 1077 "ml_code_gen.m"
#line 1077 "ml_code_gen.m"
    switch (ml_backend__ml_code_gen__OuterCodeModel_8) {
#line 1077 "ml_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "ml_code_gen.m"
      case (MR_Integer) 0:
#line 1077 "ml_code_gen.m"
#line 1077 "ml_code_gen.m"
        switch (ml_backend__ml_code_gen__InnerCodeModel_9) {
#line 1077 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 1077 "ml_code_gen.m"
            {
#line 1077 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18;
#line 1077 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
#line 1077 "ml_code_gen.m"
            }
#line 1077 "ml_code_gen.m"
            break;
#line 1077 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 1096 "ml_code_gen.m"
            {
#line 1098 "ml_code_gen.m"
              {
#line 1098 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "nondet in det");
#line 1098 "ml_code_gen.m"
                return;
              }
#line 1096 "ml_code_gen.m"
            }
#line 1077 "ml_code_gen.m"
            break;
#line 1077 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 1092 "ml_code_gen.m"
            {
#line 1094 "ml_code_gen.m"
              {
#line 1094 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "semi in det");
#line 1094 "ml_code_gen.m"
                return;
              }
#line 1092 "ml_code_gen.m"
            }
#line 1077 "ml_code_gen.m"
            break;
#line 1077 "ml_code_gen.m"
        }
#line 1077 "ml_code_gen.m"
        break;
#line 1077 "ml_code_gen.m"
      case (MR_Integer) 2:
#line 1077 "ml_code_gen.m"
#line 1077 "ml_code_gen.m"
        switch (ml_backend__ml_code_gen__InnerCodeModel_9) {
#line 1077 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 1122 "ml_code_gen.m"
            {
#line 1122 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CallCont_14;
#line 1122 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_30_30;

#line 1131 "ml_code_gen.m"
              {
#line 1131 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__CallCont_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, ml_backend__ml_code_gen__STATE_VARIABLE_Info_21);
              }
#line 1132 "ml_code_gen.m"
              {
#line 1132 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_30_30, 0) = ((MR_Box) (ml_backend__ml_code_gen__CallCont_14));
#line 1132 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "ml_code_gen.m"
              }
#line 1132 "ml_code_gen.m"
              {
#line 1132 "ml_code_gen.m"
                *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18, ml_backend__ml_code_gen__V_30_30);
              }
#line 1122 "ml_code_gen.m"
            }
#line 1077 "ml_code_gen.m"
            break;
#line 1077 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 1083 "ml_code_gen.m"
            {
#line 1083 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18;
#line 1083 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
#line 1083 "ml_code_gen.m"
            }
#line 1077 "ml_code_gen.m"
            break;
#line 1077 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 1134 "ml_code_gen.m"
            {
#line 1134 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Succeeded_15;
#line 1134 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__IfStmt_16;
#line 1134 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__IfStatement_17;
#line 1134 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_24_24;
#line 1134 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_26_26;
#line 1134 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CallCont_46;

#line 1145 "ml_code_gen.m"
              {
#line 1145 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_test_success_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, &ml_backend__ml_code_gen__Succeeded_15);
              }
#line 1146 "ml_code_gen.m"
              {
#line 1146 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__CallCont_46, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, ml_backend__ml_code_gen__STATE_VARIABLE_Info_21);
              }
#line 1147 "ml_code_gen.m"
              {
#line 1147 "ml_code_gen.m"
                ml_backend__ml_code_gen__IfStmt_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "ml_code_gen.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 0) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_15));
#line 1147 "ml_code_gen.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 1) = ((MR_Box) (ml_backend__ml_code_gen__CallCont_46));
#line 1147 "ml_code_gen.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "ml_code_gen.m"
              }
#line 1148 "ml_code_gen.m"
              {
#line 1148 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_24_24 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__Context_10);
              }
#line 1148 "ml_code_gen.m"
              {
#line 1148 "ml_code_gen.m"
                ml_backend__ml_code_gen__IfStatement_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_17, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_16));
#line 1148 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_17, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_24_24));
#line 1148 "ml_code_gen.m"
              }
#line 1149 "ml_code_gen.m"
              {
#line 1149 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_26_26, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStatement_17));
#line 1149 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1149 "ml_code_gen.m"
              }
#line 1149 "ml_code_gen.m"
              {
#line 1149 "ml_code_gen.m"
                *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18, ml_backend__ml_code_gen__V_26_26);
              }
#line 1134 "ml_code_gen.m"
            }
#line 1077 "ml_code_gen.m"
            break;
#line 1077 "ml_code_gen.m"
        }
#line 1077 "ml_code_gen.m"
        break;
#line 1077 "ml_code_gen.m"
      case (MR_Integer) 1:
#line 1077 "ml_code_gen.m"
#line 1077 "ml_code_gen.m"
        switch (ml_backend__ml_code_gen__InnerCodeModel_9) {
#line 1077 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 1109 "ml_code_gen.m"
            {
#line 1109 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SetSuccessTrue_13;
#line 1109 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_35_35;

#line 1118 "ml_code_gen.m"
              {
#line 1118 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[1]), ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__SetSuccessTrue_13);
              }
#line 1120 "ml_code_gen.m"
              {
#line 1120 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_35_35, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetSuccessTrue_13));
#line 1120 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1120 "ml_code_gen.m"
              }
#line 1120 "ml_code_gen.m"
              {
#line 1120 "ml_code_gen.m"
                *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18, ml_backend__ml_code_gen__V_35_35);
              }
#line 1109 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
#line 1109 "ml_code_gen.m"
            }
#line 1077 "ml_code_gen.m"
            break;
#line 1077 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 1100 "ml_code_gen.m"
            {
#line 1102 "ml_code_gen.m"
              {
#line 1102 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "nondet in semi");
#line 1102 "ml_code_gen.m"
                return;
              }
#line 1100 "ml_code_gen.m"
            }
#line 1077 "ml_code_gen.m"
            break;
#line 1077 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 1080 "ml_code_gen.m"
            {
#line 1080 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18;
#line 1080 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
#line 1080 "ml_code_gen.m"
            }
#line 1077 "ml_code_gen.m"
            break;
#line 1077 "ml_code_gen.m"
        }
#line 1077 "ml_code_gen.m"
        break;
#line 1077 "ml_code_gen.m"
    }
#line 1077 "ml_code_gen.m"
  }
#line 503 "ml_code_gen.m"
}

#line 490 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_6_p_0(
#line 490 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_7,
#line 490 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Goal_8,
#line 490 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_9,
#line 490 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_10,
#line 490 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23,
#line 490 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_24)
#line 490 "ml_code_gen.m"
{
#line 563 "ml_code_gen.m"
  {
#line 563 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__TypeCtorInfo_19_43;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_8, (MR_Integer) 0)));
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_8, (MR_Integer) 1)));
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Context_14;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__VarTypes_15;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__VarSet_17;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__VarDecls_18;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalCodeModel_19;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalDecls_20;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalStatements0_21;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_26_26;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__SubGoalNonLocals_33;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__NonLocals_34;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__VarsToDeclareSet_35;
#line 563 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__VarsToDeclare0_36;

#line 565 "ml_code_gen.m"
    {
#line 565 "ml_code_gen.m"
      ml_backend__ml_code_gen__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
#line 568 "ml_code_gen.m"
    {
#line 568 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_gen__VarTypes_15);
    }
#line 703 "ml_code_gen.m"
    {
#line 703 "ml_code_gen.m"
      ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(ml_backend__ml_code_gen__GoalExpr_12, &ml_backend__ml_code_gen__SubGoalNonLocals_33);
    }
#line 704 "ml_code_gen.m"
    {
#line 704 "ml_code_gen.m"
      ml_backend__ml_code_gen__NonLocals_34 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
#line 3431 "ml_backend.ml_code_gen.c"
    ml_backend__ml_code_gen__TypeCtorInfo_19_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 705 "ml_code_gen.m"
    {
#line 705 "ml_code_gen.m"
      parse_tree__set_of_var__difference_3_p_0(ml_backend__ml_code_gen__TypeCtorInfo_19_43, ml_backend__ml_code_gen__SubGoalNonLocals_33, ml_backend__ml_code_gen__NonLocals_34, &ml_backend__ml_code_gen__VarsToDeclareSet_35);
    }
#line 706 "ml_code_gen.m"
    {
#line 706 "ml_code_gen.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_code_gen__TypeCtorInfo_19_43, ml_backend__ml_code_gen__VarsToDeclareSet_35, &ml_backend__ml_code_gen__VarsToDeclare0_36);
    }
#line 571 "ml_code_gen.m"
    {
#line 571 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_gen__VarSet_17);
    }
#line 3448 "ml_backend.ml_code_gen.c"
    if ((ml_backend__ml_code_gen__VarsToDeclare0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3450 "ml_backend.ml_code_gen.c"
      {
#line 1155 "ml_code_gen.m"
        ml_backend__ml_code_gen__VarDecls_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1155 "ml_code_gen.m"
        ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23;
#line 3456 "ml_backend.ml_code_gen.c"
      }
#line 3458 "ml_backend.ml_code_gen.c"
    else
#line 3460 "ml_backend.ml_code_gen.c"
      {
#line 3462 "ml_backend.ml_code_gen.c"
        MR_Word ml_backend__ml_code_gen__VarsToDeclare_16;
#line 3464 "ml_backend.ml_code_gen.c"
        MR_Word ml_backend__ml_code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__VarsToDeclare0_36, (MR_Integer) 1)));
#line 713 "ml_code_gen.m"
        MR_Word ml_backend__ml_code_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__VarsToDeclare0_36, (MR_Integer) 0)));

#line 712 "ml_code_gen.m"
        if ((ml_backend__ml_code_gen__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "ml_code_gen.m"
          ml_backend__ml_code_gen__VarsToDeclare_16 = ml_backend__ml_code_gen__VarsToDeclare0_36;
#line 712 "ml_code_gen.m"
        else
#line 714 "ml_code_gen.m"
          {
#line 714 "ml_code_gen.m"
            ml_backend__ml_code_gen__VarsToDeclare_16 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(ml_backend__ml_code_gen__VarsToDeclare0_36, ml_backend__ml_code_gen__VarTypes_15);
          }
#line 572 "ml_code_gen.m"
        {
#line 572 "ml_code_gen.m"
          ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_code_gen__VarSet_17, ml_backend__ml_code_gen__VarTypes_15, ml_backend__ml_code_gen__Context_14, ml_backend__ml_code_gen__VarsToDeclare_16, &ml_backend__ml_code_gen__VarDecls_18, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25);
        }
#line 3485 "ml_backend.ml_code_gen.c"
      }
#line 576 "ml_code_gen.m"
    {
#line 576 "ml_code_gen.m"
      ml_backend__ml_code_gen__GoalCodeModel_19 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
#line 577 "ml_code_gen.m"
    {
#line 577 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0(ml_backend__ml_code_gen__GoalExpr_12, ml_backend__ml_code_gen__GoalCodeModel_19, ml_backend__ml_code_gen__Context_14, ml_backend__ml_code_gen__GoalInfo_13, &ml_backend__ml_code_gen__GoalDecls_20, &ml_backend__ml_code_gen__GoalStatements0_21, ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_26_26);
    }
#line 582 "ml_code_gen.m"
    {
#line 582 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(ml_backend__ml_code_gen__CodeModel_7, ml_backend__ml_code_gen__GoalCodeModel_19, ml_backend__ml_code_gen__Context_14, ml_backend__ml_code_gen__GoalStatements0_21, ml_backend__ml_code_gen__Statements_10, ml_backend__ml_code_gen__STATE_VARIABLE_Info_26_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_24);
    }
#line 585 "ml_code_gen.m"
    {
#line 585 "ml_code_gen.m"
      *ml_backend__ml_code_gen__Decls_9 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_gen__VarDecls_18, ml_backend__ml_code_gen__GoalDecls_20);
    }
#line 563 "ml_code_gen.m"
  }
#line 490 "ml_code_gen.m"
}

#line 483 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(
#line 483 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_6,
#line 483 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Goal_7,
#line 483 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statement_8,
#line 483 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11,
#line 483 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_12)
#line 483 "ml_code_gen.m"
{
#line 552 "ml_code_gen.m"
  {
#line 552 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 552 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__InitConstVarMap_10;
#line 552 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13;
#line 552 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Decls_21;
#line 552 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Statements_22;
#line 552 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalInfo_24;
#line 552 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Context_25;
#line 543 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__V_23_23;

#line 553 "ml_code_gen.m"
    {
#line 553 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11, &ml_backend__ml_code_gen__InitConstVarMap_10);
    }
#line 542 "ml_code_gen.m"
    {
#line 542 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_6, ml_backend__ml_code_gen__Goal_7, &ml_backend__ml_code_gen__Decls_21, &ml_backend__ml_code_gen__Statements_22, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13);
    }
#line 543 "ml_code_gen.m"
    ml_backend__ml_code_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 0)));
#line 543 "ml_code_gen.m"
    ml_backend__ml_code_gen__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 1)));
#line 544 "ml_code_gen.m"
    {
#line 544 "ml_code_gen.m"
      ml_backend__ml_code_gen__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_24);
    }
#line 545 "ml_code_gen.m"
    {
#line 545 "ml_code_gen.m"
      *ml_backend__ml_code_gen__Statement_8 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_code_gen__Decls_21, ml_backend__ml_code_gen__Statements_22, ml_backend__ml_code_gen__Context_25);
    }
#line 555 "ml_code_gen.m"
    {
#line 555 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_10, ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13, ml_backend__ml_code_gen__STATE_VARIABLE_Info_12);
    }
#line 552 "ml_code_gen.m"
  }
#line 483 "ml_code_gen.m"
}

#line 480 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_p_0(
#line 480 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_7,
#line 480 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Goal_8,
#line 480 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_9,
#line 480 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_10,
#line 480 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_13,
#line 480 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_14)
#line 480 "ml_code_gen.m"
{
#line 547 "ml_code_gen.m"
  {
#line 547 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 547 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__InitConstVarMap_12;
#line 547 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_15;

#line 548 "ml_code_gen.m"
    {
#line 548 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_13, &ml_backend__ml_code_gen__InitConstVarMap_12);
    }
#line 549 "ml_code_gen.m"
    {
#line 549 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_7, ml_backend__ml_code_gen__Goal_8, ml_backend__ml_code_gen__Decls_9, ml_backend__ml_code_gen__Statements_10, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_13, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_15);
    }
#line 550 "ml_code_gen.m"
    {
#line 550 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_15, ml_backend__ml_code_gen__STATE_VARIABLE_Info_14);
    }
#line 547 "ml_code_gen.m"
  }
#line 480 "ml_code_gen.m"
}

#line 470 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(
#line 470 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_6,
#line 470 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Goal_7,
#line 470 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statement_8,
#line 470 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_15,
#line 470 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_16)
#line 470 "ml_code_gen.m"
{
#line 541 "ml_code_gen.m"
  {
#line 541 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 541 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Decls_10;
#line 541 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Statements_11;
#line 541 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalInfo_13;
#line 541 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Context_14;
#line 543 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__V_12_12;

#line 542 "ml_code_gen.m"
    {
#line 542 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_6, ml_backend__ml_code_gen__Goal_7, &ml_backend__ml_code_gen__Decls_10, &ml_backend__ml_code_gen__Statements_11, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_15, ml_backend__ml_code_gen__STATE_VARIABLE_Info_16);
    }
#line 543 "ml_code_gen.m"
    ml_backend__ml_code_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 0)));
#line 543 "ml_code_gen.m"
    ml_backend__ml_code_gen__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 1)));
#line 544 "ml_code_gen.m"
    {
#line 544 "ml_code_gen.m"
      ml_backend__ml_code_gen__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
#line 545 "ml_code_gen.m"
    {
#line 545 "ml_code_gen.m"
      *ml_backend__ml_code_gen__Statement_8 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_code_gen__Decls_10, ml_backend__ml_code_gen__Statements_11, ml_backend__ml_code_gen__Context_14);
    }
#line 541 "ml_code_gen.m"
  }
#line 470 "ml_code_gen.m"
}

void mercury__ml_backend__ml_code_gen__init(void)
{
}

void mercury__ml_backend__ml_code_gen__init_type_tables(void)
{
}

void mercury__ml_backend__ml_code_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_code_gen. */
