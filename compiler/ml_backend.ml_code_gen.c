/*
** Automatically generated from `ml_code_gen.m'
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




#line 157 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 163 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0;

#line 166 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 618 "ml_code_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__618__1_2_p_0(
#line 618 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 618 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CallCodeModel_36);

#line 1059 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_2(
#line 1059 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 1059 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
#line 1059 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
#line 1059 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
#line 1059 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4);

#line 1058 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_1(
#line 1058 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 1058 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
#line 1058 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
#line 1058 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
#line 1058 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4);

#line 1036 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0(
#line 1036 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Conjuncts_8,
#line 1036 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
#line 1036 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_10,
#line 1036 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_11,
#line 1036 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_12,
#line 1036 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26,
#line 1036 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);

#line 974 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_7_p_0(
#line 974 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Cond_8,
#line 974 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
#line 974 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_10,
#line 974 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_11,
#line 974 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_12,
#line 974 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22,
#line 974 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);

#line 849 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_ite_9_p_0(
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Cond_11,
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Then_12,
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Else_13,
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_14,
#line 849 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_15,
#line 849 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_16,
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45,
#line 849 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);

#line 834 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(
#line 834 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
#line 834 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
#line 834 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3);

#line 825 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(
#line 825 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
#line 825 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
#line 825 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3);

#line 791 "ml_code_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2(
#line 791 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 791 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1);

#line 790 "ml_code_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1(
#line 790 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 790 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1);

#line 738 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(
#line 738 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalExpr_3,
#line 738 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__SubGoalNonLocals_4);

#line 618 "ml_code_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0_1(
#line 618 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg);

#line 588 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0(
#line 588 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalExpr_9,
#line 588 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 588 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_11,
#line 588 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalInfo_12,
#line 588 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_13,
#line 588 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_14,
#line 588 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59,
#line 588 "ml_code_gen.m"
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



#line 448 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 456 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 464 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

#line 472 "ml_backend.ml_code_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 618 "ml_code_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__618__1_2_p_0(
#line 618 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 618 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CallCodeModel_36)
#line 618 "ml_code_gen.m"
{
#line 618 "ml_code_gen.m"
  {
#line 618 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded = (ml_backend__ml_code_gen__CodeModel_10 == ml_backend__ml_code_gen__CallCodeModel_36);

#line 618 "ml_code_gen.m"
    return ml_backend__ml_code_gen__succeeded;
#line 618 "ml_code_gen.m"
  }
#line 618 "ml_code_gen.m"
}

#line 1059 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_2(
#line 1059 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 1059 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
#line 1059 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
#line 1059 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
#line 1059 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4)
#line 1059 "ml_code_gen.m"
{
#line 1059 "ml_code_gen.m"
  {
#line 1059 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
#line 1059 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv5_Decls_11;
#line 1059 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv4_Statements_12;
#line 1059 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv3_STATE_VARIABLE_Info_27;

#line 1059 "ml_code_gen.m"
    {
#line 1059 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_conj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 5))), &ml_backend__ml_code_gen__conv5_Decls_11, &ml_backend__ml_code_gen__conv4_Statements_12, ((MR_Word) ml_backend__ml_code_gen__wrapper_arg_3), &ml_backend__ml_code_gen__conv3_STATE_VARIABLE_Info_27);
    }
#line 1059 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_code_gen__conv5_Decls_11));
#line 1059 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv4_Statements_12));
#line 1059 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_code_gen__conv3_STATE_VARIABLE_Info_27));
#line 1059 "ml_code_gen.m"
  }
#line 1059 "ml_code_gen.m"
}

#line 1058 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_1(
#line 1058 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 1058 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
#line 1058 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
#line 1058 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
#line 1058 "ml_code_gen.m"
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4)
#line 1058 "ml_code_gen.m"
{
#line 1058 "ml_code_gen.m"
  {
#line 1058 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
#line 1058 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv2_Decls_9;
#line 1058 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv1_Statements_10;
#line 1058 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_24;

#line 1058 "ml_code_gen.m"
    {
#line 1058 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))), &ml_backend__ml_code_gen__conv2_Decls_9, &ml_backend__ml_code_gen__conv1_Statements_10, ((MR_Word) ml_backend__ml_code_gen__wrapper_arg_3), &ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_24);
    }
#line 1058 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_code_gen__conv2_Decls_9));
#line 1058 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv1_Statements_10));
#line 1058 "ml_code_gen.m"
    *ml_backend__ml_code_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_24));
#line 1058 "ml_code_gen.m"
  }
#line 1058 "ml_code_gen.m"
}

#line 1036 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0(
#line 1036 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Conjuncts_8,
#line 1036 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
#line 1036 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_10,
#line 1036 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_11,
#line 1036 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_12,
#line 1036 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26,
#line 1036 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_27)
#line 1036 "ml_code_gen.m"
{
#line 1042 "ml_code_gen.m"
  {
#line 1042 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;

#line 1042 "ml_code_gen.m"
    if ((ml_backend__ml_code_gen__Conjuncts_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1042 "ml_code_gen.m"
      {
#line 1043 "ml_code_gen.m"
        {
#line 1043 "ml_code_gen.m"
          ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_code_gen__CodeModel_9, ml_backend__ml_code_gen__Context_10, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
        }
#line 1044 "ml_code_gen.m"
        *ml_backend__ml_code_gen__Decls_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1042 "ml_code_gen.m"
      }
#line 1042 "ml_code_gen.m"
    else
#line 1042 "ml_code_gen.m"
      {
#line 1042 "ml_code_gen.m"
        MR_Word ml_backend__ml_code_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Conjuncts_8, (MR_Integer) 1)));
#line 1042 "ml_code_gen.m"
        MR_Word ml_backend__ml_code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Conjuncts_8, (MR_Integer) 0)));

#line 1042 "ml_code_gen.m"
        if ((ml_backend__ml_code_gen__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1047 "ml_code_gen.m"
          {
#line 1047 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_9, ml_backend__ml_code_gen__V_44_44, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
          }
#line 1042 "ml_code_gen.m"
        else
#line 1049 "ml_code_gen.m"
          {
#line 1049 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__FirstGoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_44_44, (MR_Integer) 1)));
#line 1049 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__FirstDeterminism_21;
#line 1051 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_44_44, (MR_Integer) 0)));
#line 1053 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__V_42_42;
#line 1053 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__V_22_22;

#line 1052 "ml_code_gen.m"
            {
#line 1052 "ml_code_gen.m"
              ml_backend__ml_code_gen__FirstDeterminism_21 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ml_backend__ml_code_gen__FirstGoalInfo_20);
            }
#line 1053 "ml_code_gen.m"
            {
#line 1053 "ml_code_gen.m"
              parse_tree__prog_data__determinism_components_3_p_0(ml_backend__ml_code_gen__FirstDeterminism_21, &ml_backend__ml_code_gen__V_22_22, &ml_backend__ml_code_gen__V_42_42);
            }
#line 1053 "ml_code_gen.m"
            ml_backend__ml_code_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_code_gen__V_42_42);
#line 1056 "ml_code_gen.m"
            if (ml_backend__ml_code_gen__succeeded)
#line 1055 "ml_code_gen.m"
              {
#line 1055 "ml_code_gen.m"
                ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_9, ml_backend__ml_code_gen__V_44_44, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
              }
#line 1056 "ml_code_gen.m"
            else
#line 1057 "ml_code_gen.m"
              {
#line 1057 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__FirstCodeModel_23;
#line 1057 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__DoGenFirst_24;
#line 1057 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__DoGenRest_25;

#line 1057 "ml_code_gen.m"
                {
#line 1057 "ml_code_gen.m"
                  hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_gen__FirstDeterminism_21, &ml_backend__ml_code_gen__FirstCodeModel_23);
                }
#line 1058 "ml_code_gen.m"
                {
#line 1058 "ml_code_gen.m"
                  ml_backend__ml_code_gen__DoGenFirst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_5[0]));
#line 1058 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_7_p_0_1));
#line 1058 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1058 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 3) = ((MR_Box) (ml_backend__ml_code_gen__FirstCodeModel_23));
#line 1058 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 4) = ((MR_Box) (ml_backend__ml_code_gen__V_44_44));
#line 1058 "ml_code_gen.m"
                }
#line 1059 "ml_code_gen.m"
                {
#line 1059 "ml_code_gen.m"
                  ml_backend__ml_code_gen__DoGenRest_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_6[0]));
#line 1059 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_7_p_0_2));
#line 1059 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1059 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 3) = ((MR_Box) (ml_backend__ml_code_gen__V_43_43));
#line 1059 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 4) = ((MR_Box) (ml_backend__ml_code_gen__CodeModel_9));
#line 1059 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 5) = ((MR_Box) (ml_backend__ml_code_gen__Context_10));
#line 1059 "ml_code_gen.m"
                }
#line 1060 "ml_code_gen.m"
                {
#line 1060 "ml_code_gen.m"
                  ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_code_gen__FirstCodeModel_23, ml_backend__ml_code_gen__Context_10, ml_backend__ml_code_gen__DoGenFirst_24, ml_backend__ml_code_gen__DoGenRest_25, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
                }
#line 1057 "ml_code_gen.m"
              }
#line 1049 "ml_code_gen.m"
          }
#line 1042 "ml_code_gen.m"
      }
#line 1042 "ml_code_gen.m"
  }
#line 1036 "ml_code_gen.m"
}

#line 974 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_7_p_0(
#line 974 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Cond_8,
#line 974 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
#line 974 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_10,
#line 974 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_11,
#line 974 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_12,
#line 974 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22,
#line 974 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_23)
#line 974 "ml_code_gen.m"
{
#line 978 "ml_code_gen.m"
  {
#line 978 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 978 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__CondGoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_8, (MR_Integer) 1)));
#line 978 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__CondCodeModel_16;
#line 979 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_8, (MR_Integer) 0)));

#line 980 "ml_code_gen.m"
    {
#line 980 "ml_code_gen.m"
      ml_backend__ml_code_gen__CondCodeModel_16 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__CondGoalInfo_15);
    }
#line 994 "ml_code_gen.m"
#line 994 "ml_code_gen.m"
    switch (ml_backend__ml_code_gen__CodeModel_9) {
#line 994 "ml_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 994 "ml_code_gen.m"
      case (MR_Integer) 0:
#line 992 "ml_code_gen.m"
        {
#line 992 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_56;
#line 992 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_57;

#line 544 "ml_code_gen.m"
          {
#line 544 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__InitConstVarMap_56);
          }
#line 545 "ml_code_gen.m"
          {
#line 545 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_8, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_57);
          }
#line 546 "ml_code_gen.m"
          {
#line 546 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_56, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_57, ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);
          }
#line 992 "ml_code_gen.m"
        }
#line 994 "ml_code_gen.m"
        break;
#line 994 "ml_code_gen.m"
      case (MR_Integer) 2:
#line 1027 "ml_code_gen.m"
        {
#line 1028 "ml_code_gen.m"
          {
#line 1028 "ml_code_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_negation\'/7", (MR_String) "nondet negation");
#line 1028 "ml_code_gen.m"
            return;
          }
#line 1027 "ml_code_gen.m"
        }
#line 994 "ml_code_gen.m"
        break;
#line 994 "ml_code_gen.m"
      case (MR_Integer) 1:
#line 994 "ml_code_gen.m"
#line 994 "ml_code_gen.m"
        switch (ml_backend__ml_code_gen__CondCodeModel_16) {
#line 994 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 994 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 1001 "ml_code_gen.m"
            {
#line 1001 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CondStatements_18;
#line 1001 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SetSuccessFalse_19;
#line 1001 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_41_41;
#line 1001 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__InitConstVarMap_66;
#line 1001 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_67;

#line 544 "ml_code_gen.m"
              {
#line 544 "ml_code_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__InitConstVarMap_66);
              }
#line 545 "ml_code_gen.m"
              {
#line 545 "ml_code_gen.m"
                ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 0, ml_backend__ml_code_gen__Cond_8, ml_backend__ml_code_gen__Decls_11, &ml_backend__ml_code_gen__CondStatements_18, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_67);
              }
#line 546 "ml_code_gen.m"
              {
#line 546 "ml_code_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_66, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_67, ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);
              }
#line 1004 "ml_code_gen.m"
              {
#line 1004 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_code_gen__STATE_VARIABLE_Info_23, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[2]), ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__SetSuccessFalse_19);
              }
#line 1007 "ml_code_gen.m"
              {
#line 1007 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_41_41, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetSuccessFalse_19));
#line 1007 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1007 "ml_code_gen.m"
              }
#line 1007 "ml_code_gen.m"
              {
#line 1007 "ml_code_gen.m"
                *ml_backend__ml_code_gen__Statements_12 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__CondStatements_18, ml_backend__ml_code_gen__V_41_41);
              }
#line 1001 "ml_code_gen.m"
            }
#line 994 "ml_code_gen.m"
            break;
#line 994 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 1024 "ml_code_gen.m"
            {
#line 1025 "ml_code_gen.m"
              {
#line 1025 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_negation\'/7", (MR_String) "nondet cond");
#line 1025 "ml_code_gen.m"
                return;
              }
#line 1024 "ml_code_gen.m"
            }
#line 994 "ml_code_gen.m"
            break;
#line 994 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 1015 "ml_code_gen.m"
            {
#line 1015 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Succeeded_20;
#line 1015 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__InvertSuccess_21;
#line 1015 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_32_32;
#line 1015 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_35_35;
#line 1015 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CondStatements_46;
#line 1015 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__InitConstVarMap_76;
#line 1015 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_77;

#line 544 "ml_code_gen.m"
              {
#line 544 "ml_code_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__InitConstVarMap_76);
              }
#line 545 "ml_code_gen.m"
              {
#line 545 "ml_code_gen.m"
                ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_8, ml_backend__ml_code_gen__Decls_11, &ml_backend__ml_code_gen__CondStatements_46, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_77);
              }
#line 546 "ml_code_gen.m"
              {
#line 546 "ml_code_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_76, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_77, ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);
              }
#line 1018 "ml_code_gen.m"
              {
#line 1018 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_test_success_2_p_0(*ml_backend__ml_code_gen__STATE_VARIABLE_Info_23, &ml_backend__ml_code_gen__Succeeded_20);
              }
#line 1019 "ml_code_gen.m"
              {
#line 1019 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "ml_code_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1019 "ml_code_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_4[0])));
#line 1019 "ml_code_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_32_32, 2) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_20));
#line 1019 "ml_code_gen.m"
              }
#line 1019 "ml_code_gen.m"
              {
#line 1019 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_code_gen__STATE_VARIABLE_Info_23, ml_backend__ml_code_gen__V_32_32, ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__InvertSuccess_21);
              }
#line 1022 "ml_code_gen.m"
              {
#line 1022 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_35_35, 0) = ((MR_Box) (ml_backend__ml_code_gen__InvertSuccess_21));
#line 1022 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "ml_code_gen.m"
              }
#line 1022 "ml_code_gen.m"
              {
#line 1022 "ml_code_gen.m"
                *ml_backend__ml_code_gen__Statements_12 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__CondStatements_46, ml_backend__ml_code_gen__V_35_35);
              }
#line 1015 "ml_code_gen.m"
            }
#line 994 "ml_code_gen.m"
            break;
#line 994 "ml_code_gen.m"
        }
#line 994 "ml_code_gen.m"
        break;
#line 994 "ml_code_gen.m"
    }
#line 978 "ml_code_gen.m"
  }
#line 974 "ml_code_gen.m"
}

#line 849 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_ite_9_p_0(
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Cond_11,
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Then_12,
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Else_13,
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_14,
#line 849 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_15,
#line 849 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_16,
#line 849 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45,
#line 849 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_46)
#line 849 "ml_code_gen.m"
{
#line 853 "ml_code_gen.m"
  {
#line 853 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 853 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__CondGoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_11, (MR_Integer) 1)));
#line 853 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__CondCodeModel_20;
#line 854 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_11, (MR_Integer) 0)));

#line 855 "ml_code_gen.m"
    {
#line 855 "ml_code_gen.m"
      ml_backend__ml_code_gen__CondCodeModel_20 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__CondGoalInfo_19);
    }
#line 868 "ml_code_gen.m"
#line 868 "ml_code_gen.m"
    switch (ml_backend__ml_code_gen__CondCodeModel_20) {
#line 868 "ml_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 868 "ml_code_gen.m"
      case (MR_Integer) 0:
#line 863 "ml_code_gen.m"
        {
#line 863 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondStatement_21;
#line 863 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenStatement_22;
#line 863 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_91_91;
#line 863 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_93_93;

#line 864 "ml_code_gen.m"
          {
#line 864 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, ml_backend__ml_code_gen__Cond_11, &ml_backend__ml_code_gen__CondStatement_21, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_91_91);
          }
#line 865 "ml_code_gen.m"
          {
#line 865 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Then_12, &ml_backend__ml_code_gen__ThenStatement_22, ml_backend__ml_code_gen__STATE_VARIABLE_Info_91_91, ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);
          }
#line 866 "ml_code_gen.m"
          *ml_backend__ml_code_gen__Decls_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "ml_code_gen.m"
          {
#line 867 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_93_93, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenStatement_22));
#line 867 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "ml_code_gen.m"
          }
#line 867 "ml_code_gen.m"
          {
#line 867 "ml_code_gen.m"
            MR_Word base;
#line 867 "ml_code_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "ml_code_gen.m"
            *ml_backend__ml_code_gen__Statements_16 = base;
#line 867 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_gen__CondStatement_21));
#line 867 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_93_93));
#line 867 "ml_code_gen.m"
          }
#line 863 "ml_code_gen.m"
        }
#line 868 "ml_code_gen.m"
        break;
#line 868 "ml_code_gen.m"
      case (MR_Integer) 2:
#line 920 "ml_code_gen.m"
        {
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondVar_30;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__MLDS_Context_31;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondVarDecl_32;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__SetCondFalse_33;
#line 920 "ml_code_gen.m"
          MR_Integer ml_backend__ml_code_gen__ThenFuncLabel_34;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenFuncLabelRval_35;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__EnvPtrRval_36;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__SuccessCont_37;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenGoalInfo_39;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenContext_40;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__SetCondTrue_41;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenFuncBody_42;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenFunc_43;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondSucceeded_44;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_54_54;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_56_56;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_61_61;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_63_63;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_64_64;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_66_66;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_70_70;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_74_74;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_75_75;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_77_77;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_78_78;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenStatement_96;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_97;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondDecls_98;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondStatements_99;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ElseStatement_100;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__IfStmt_101;
#line 920 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__IfStatement_102;
#line 942 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_38_38;

#line 921 "ml_code_gen.m"
          {
#line 921 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__InitConstVarMap_97);
          }
#line 924 "ml_code_gen.m"
          {
#line 924 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_p_0(&ml_backend__ml_code_gen__CondVar_30, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47);
          }
#line 925 "ml_code_gen.m"
          {
#line 925 "ml_code_gen.m"
            ml_backend__ml_code_gen__MLDS_Context_31 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__Context_14);
          }
#line 926 "ml_code_gen.m"
          {
#line 926 "ml_code_gen.m"
            ml_backend__ml_code_gen__CondVarDecl_32 = ml_backend__ml_code_util__ml_gen_cond_var_decl_2_f_0(ml_backend__ml_code_gen__CondVar_30, ml_backend__ml_code_gen__MLDS_Context_31);
          }
#line 927 "ml_code_gen.m"
          {
#line 927 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_set_cond_var_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_code_gen__CondVar_30, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[2]), ml_backend__ml_code_gen__Context_14, &ml_backend__ml_code_gen__SetCondFalse_33);
          }
#line 931 "ml_code_gen.m"
          {
#line 931 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_gen__ThenFuncLabel_34, &ml_backend__ml_code_gen__ThenFuncLabelRval_35, ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51);
          }
#line 934 "ml_code_gen.m"
          {
#line 934 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51, &ml_backend__ml_code_gen__EnvPtrRval_36);
          }
#line 935 "ml_code_gen.m"
          {
#line 935 "ml_code_gen.m"
            ml_backend__ml_code_gen__SuccessCont_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 935 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenFuncLabelRval_35));
#line 935 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 1) = ((MR_Box) (ml_backend__ml_code_gen__EnvPtrRval_36));
#line 935 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "ml_code_gen.m"
          }
#line 936 "ml_code_gen.m"
          {
#line 936 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_code_gen__SuccessCont_37, ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_54_54);
          }
#line 937 "ml_code_gen.m"
          {
#line 937 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 2, ml_backend__ml_code_gen__Cond_11, &ml_backend__ml_code_gen__CondDecls_98, &ml_backend__ml_code_gen__CondStatements_99, ml_backend__ml_code_gen__STATE_VARIABLE_Info_54_54, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_56_56);
          }
#line 938 "ml_code_gen.m"
          {
#line 938 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_56_56, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57);
          }
#line 942 "ml_code_gen.m"
          ml_backend__ml_code_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Then_12, (MR_Integer) 0)));
#line 942 "ml_code_gen.m"
          ml_backend__ml_code_gen__ThenGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Then_12, (MR_Integer) 1)));
#line 943 "ml_code_gen.m"
          {
#line 943 "ml_code_gen.m"
            ml_backend__ml_code_gen__ThenContext_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__ThenGoalInfo_39);
          }
#line 944 "ml_code_gen.m"
          {
#line 944 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_set_cond_var_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57, ml_backend__ml_code_gen__CondVar_30, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[1]), ml_backend__ml_code_gen__ThenContext_40, &ml_backend__ml_code_gen__SetCondTrue_41);
          }
#line 946 "ml_code_gen.m"
          {
#line 946 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Then_12, &ml_backend__ml_code_gen__ThenStatement_96, ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60);
          }
#line 948 "ml_code_gen.m"
          {
#line 948 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenStatement_96));
#line 948 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 948 "ml_code_gen.m"
          }
#line 948 "ml_code_gen.m"
          {
#line 948 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetCondTrue_41));
#line 948 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_64_64));
#line 948 "ml_code_gen.m"
          }
#line 948 "ml_code_gen.m"
          {
#line 948 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 948 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 948 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_63_63));
#line 948 "ml_code_gen.m"
          }
#line 949 "ml_code_gen.m"
          {
#line 949 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_66_66 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__ThenContext_40);
          }
#line 947 "ml_code_gen.m"
          {
#line 947 "ml_code_gen.m"
            ml_backend__ml_code_gen__ThenFuncBody_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 947 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__ThenFuncBody_42, 0) = ((MR_Box) (ml_backend__ml_code_gen__V_61_61));
#line 947 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__ThenFuncBody_42, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_66_66));
#line 947 "ml_code_gen.m"
          }
#line 951 "ml_code_gen.m"
          {
#line 951 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60, ml_backend__ml_code_gen__ThenFuncLabel_34, ml_backend__ml_code_gen__ThenContext_40, ml_backend__ml_code_gen__ThenFuncBody_42, &ml_backend__ml_code_gen__ThenFunc_43);
          }
#line 955 "ml_code_gen.m"
          {
#line 955 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_test_cond_var_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60, ml_backend__ml_code_gen__CondVar_30, &ml_backend__ml_code_gen__CondSucceeded_44);
          }
#line 956 "ml_code_gen.m"
          {
#line 956 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_97, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67);
          }
#line 957 "ml_code_gen.m"
          {
#line 957 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Else_13, &ml_backend__ml_code_gen__ElseStatement_100, ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68);
          }
#line 958 "ml_code_gen.m"
          {
#line 958 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_97, ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68, ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);
          }
#line 960 "ml_code_gen.m"
          {
#line 960 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 960 "ml_code_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 960 "ml_code_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_4[0])));
#line 960 "ml_code_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__V_70_70, 2) = ((MR_Box) (ml_backend__ml_code_gen__CondSucceeded_44));
#line 960 "ml_code_gen.m"
          }
#line 959 "ml_code_gen.m"
          {
#line 959 "ml_code_gen.m"
            ml_backend__ml_code_gen__IfStmt_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 959 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 0) = ((MR_Box) (ml_backend__ml_code_gen__V_70_70));
#line 959 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 1) = ((MR_Box) (ml_backend__ml_code_gen__ElseStatement_100));
#line 959 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "ml_code_gen.m"
          }
#line 962 "ml_code_gen.m"
          {
#line 962 "ml_code_gen.m"
            ml_backend__ml_code_gen__IfStatement_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 962 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_102, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_101));
#line 962 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_102, 1) = ((MR_Box) (ml_backend__ml_code_gen__MLDS_Context_31));
#line 962 "ml_code_gen.m"
          }
#line 965 "ml_code_gen.m"
          {
#line 965 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_74_74, 0) = ((MR_Box) (ml_backend__ml_code_gen__CondVarDecl_32));
#line 965 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_74_74, 1) = ((MR_Box) (ml_backend__ml_code_gen__CondDecls_98));
#line 965 "ml_code_gen.m"
          }
#line 965 "ml_code_gen.m"
          {
#line 965 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_75_75, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenFunc_43));
#line 965 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 965 "ml_code_gen.m"
          }
#line 965 "ml_code_gen.m"
          {
#line 965 "ml_code_gen.m"
            *ml_backend__ml_code_gen__Decls_15 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_gen__V_74_74, ml_backend__ml_code_gen__V_75_75);
          }
#line 966 "ml_code_gen.m"
          {
#line 966 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_77_77, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetCondFalse_33));
#line 966 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_77_77, 1) = ((MR_Box) (ml_backend__ml_code_gen__CondStatements_99));
#line 966 "ml_code_gen.m"
          }
#line 966 "ml_code_gen.m"
          {
#line 966 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_78_78, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStatement_102));
#line 966 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 966 "ml_code_gen.m"
          }
#line 966 "ml_code_gen.m"
          {
#line 966 "ml_code_gen.m"
            *ml_backend__ml_code_gen__Statements_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__V_77_77, ml_backend__ml_code_gen__V_78_78);
          }
#line 920 "ml_code_gen.m"
        }
#line 868 "ml_code_gen.m"
        break;
#line 868 "ml_code_gen.m"
      case (MR_Integer) 1:
#line 881 "ml_code_gen.m"
        {
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_23;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__CondStatements_25;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__Succeeded_26;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ElseStatement_27;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__IfStmt_28;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__IfStatement_29;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_86_86;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_87_87;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_88_88;
#line 881 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ThenStatement_95;

#line 882 "ml_code_gen.m"
          {
#line 882 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__InitConstVarMap_23);
          }
#line 883 "ml_code_gen.m"
          {
#line 883 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_11, ml_backend__ml_code_gen__Decls_15, &ml_backend__ml_code_gen__CondStatements_25, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81);
          }
#line 884 "ml_code_gen.m"
          {
#line 884 "ml_code_gen.m"
            ml_backend__ml_code_util__ml_gen_test_success_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81, &ml_backend__ml_code_gen__Succeeded_26);
          }
#line 885 "ml_code_gen.m"
          {
#line 885 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Then_12, &ml_backend__ml_code_gen__ThenStatement_95, ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82);
          }
#line 886 "ml_code_gen.m"
          {
#line 886 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_23, ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83);
          }
#line 887 "ml_code_gen.m"
          {
#line 887 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Else_13, &ml_backend__ml_code_gen__ElseStatement_27, ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84);
          }
#line 888 "ml_code_gen.m"
          {
#line 888 "ml_code_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_23, ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);
          }
#line 890 "ml_code_gen.m"
          {
#line 890 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 890 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_86_86, 0) = ((MR_Box) (ml_backend__ml_code_gen__ElseStatement_27));
#line 890 "ml_code_gen.m"
          }
#line 889 "ml_code_gen.m"
          {
#line 889 "ml_code_gen.m"
            ml_backend__ml_code_gen__IfStmt_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 889 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_28, 0) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_26));
#line 889 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_28, 1) = ((MR_Box) (ml_backend__ml_code_gen__ThenStatement_95));
#line 889 "ml_code_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_28, 2) = ((MR_Box) (ml_backend__ml_code_gen__V_86_86));
#line 889 "ml_code_gen.m"
          }
#line 891 "ml_code_gen.m"
          {
#line 891 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_87_87 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__Context_14);
          }
#line 891 "ml_code_gen.m"
          {
#line 891 "ml_code_gen.m"
            ml_backend__ml_code_gen__IfStatement_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 891 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_29, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_28));
#line 891 "ml_code_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_29, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_87_87));
#line 891 "ml_code_gen.m"
          }
#line 893 "ml_code_gen.m"
          {
#line 893 "ml_code_gen.m"
            ml_backend__ml_code_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_88_88, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStatement_29));
#line 893 "ml_code_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 893 "ml_code_gen.m"
          }
#line 893 "ml_code_gen.m"
          {
#line 893 "ml_code_gen.m"
            *ml_backend__ml_code_gen__Statements_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__CondStatements_25, ml_backend__ml_code_gen__V_88_88);
          }
#line 881 "ml_code_gen.m"
        }
#line 868 "ml_code_gen.m"
        break;
#line 868 "ml_code_gen.m"
    }
#line 853 "ml_code_gen.m"
  }
#line 849 "ml_code_gen.m"
}

#line 834 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(
#line 834 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
#line 834 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
#line 834 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3)
#line 834 "ml_code_gen.m"
{
#line 837 "ml_code_gen.m"
  while (MR_TRUE)
#line 837 "ml_code_gen.m"
    {
#line 837 "ml_code_gen.m"
      /* tailcall optimized into a loop */
#line 837 "ml_code_gen.m"
      {
#line 837 "ml_code_gen.m"
        MR_bool ml_backend__ml_code_gen__succeeded;

#line 837 "ml_code_gen.m"
        if ((ml_backend__ml_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 837 "ml_code_gen.m"
          *ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2;
#line 837 "ml_code_gen.m"
        else
#line 838 "ml_code_gen.m"
          {
#line 838 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 838 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 838 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__SubGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Case_7, (MR_Integer) 2)));
#line 838 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__NonLocals_13;
#line 838 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16;
#line 839 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Case_7, (MR_Integer) 0)));
#line 839 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Case_7, (MR_Integer) 1)));

#line 840 "ml_code_gen.m"
            {
#line 840 "ml_code_gen.m"
              ml_backend__ml_code_gen__NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_12);
            }
#line 841 "ml_code_gen.m"
            {
#line 841 "ml_code_gen.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_13, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16);
            }
#line 842 "ml_code_gen.m"
            /* direct tailcall eliminated */
#line 842 "ml_code_gen.m"
            {
#line 842 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__HeadVar__1__tmp_copy_1 = ml_backend__ml_code_gen__Cases_8;
#line 842 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0__tmp_copy_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16;

#line 842 "ml_code_gen.m"
              ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0__tmp_copy_2;
#line 842 "ml_code_gen.m"
              ml_backend__ml_code_gen__HeadVar__1_1 = ml_backend__ml_code_gen__HeadVar__1__tmp_copy_1;
#line 842 "ml_code_gen.m"
            }
#line 842 "ml_code_gen.m"
            continue;
#line 838 "ml_code_gen.m"
          }
#line 837 "ml_code_gen.m"
      }
#line 837 "ml_code_gen.m"
      break;
#line 837 "ml_code_gen.m"
    }
#line 834 "ml_code_gen.m"
}

#line 825 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(
#line 825 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
#line 825 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
#line 825 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3)
#line 825 "ml_code_gen.m"
{
#line 828 "ml_code_gen.m"
  while (MR_TRUE)
#line 828 "ml_code_gen.m"
    {
#line 828 "ml_code_gen.m"
      /* tailcall optimized into a loop */
#line 828 "ml_code_gen.m"
      {
#line 828 "ml_code_gen.m"
        MR_bool ml_backend__ml_code_gen__succeeded;

#line 828 "ml_code_gen.m"
        if ((ml_backend__ml_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 828 "ml_code_gen.m"
          *ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2;
#line 828 "ml_code_gen.m"
        else
#line 829 "ml_code_gen.m"
          {
#line 829 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__SubGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 829 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__SubGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 829 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__NonLocals_10;
#line 829 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13;

#line 830 "ml_code_gen.m"
            {
#line 830 "ml_code_gen.m"
              ml_backend__ml_code_gen__NonLocals_10 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_7);
            }
#line 831 "ml_code_gen.m"
            {
#line 831 "ml_code_gen.m"
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_10, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13);
            }
#line 832 "ml_code_gen.m"
            /* direct tailcall eliminated */
#line 832 "ml_code_gen.m"
            {
#line 832 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__HeadVar__1__tmp_copy_1 = ml_backend__ml_code_gen__SubGoals_8;
#line 832 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0__tmp_copy_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13;

#line 832 "ml_code_gen.m"
              ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0__tmp_copy_2;
#line 832 "ml_code_gen.m"
              ml_backend__ml_code_gen__HeadVar__1_1 = ml_backend__ml_code_gen__HeadVar__1__tmp_copy_1;
#line 832 "ml_code_gen.m"
            }
#line 832 "ml_code_gen.m"
            continue;
#line 829 "ml_code_gen.m"
          }
#line 828 "ml_code_gen.m"
      }
#line 828 "ml_code_gen.m"
      break;
#line 828 "ml_code_gen.m"
    }
#line 825 "ml_code_gen.m"
}

#line 791 "ml_code_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2(
#line 791 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 791 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1)
#line 791 "ml_code_gen.m"
{
#line 791 "ml_code_gen.m"
  {
#line 791 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__wrapper_arg_2;
#line 791 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
#line 791 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv1_HeadVar__2_2;

#line 791 "ml_code_gen.m"
    {
#line 791 "ml_code_gen.m"
      ml_backend__ml_code_gen__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ml_backend__ml_code_gen__wrapper_arg_1));
    }
#line 791 "ml_code_gen.m"
    ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv1_HeadVar__2_2));
#line 791 "ml_code_gen.m"
    return ml_backend__ml_code_gen__wrapper_arg_2;
#line 791 "ml_code_gen.m"
  }
#line 791 "ml_code_gen.m"
}

#line 790 "ml_code_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1(
#line 790 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg,
#line 790 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1)
#line 790 "ml_code_gen.m"
{
#line 790 "ml_code_gen.m"
  {
#line 790 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__wrapper_arg_2;
#line 790 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
#line 790 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__conv0_HeadVar__2_2;

#line 790 "ml_code_gen.m"
    {
#line 790 "ml_code_gen.m"
      ml_backend__ml_code_gen__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ml_backend__ml_code_gen__wrapper_arg_1));
    }
#line 790 "ml_code_gen.m"
    ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv0_HeadVar__2_2));
#line 790 "ml_code_gen.m"
    return ml_backend__ml_code_gen__wrapper_arg_2;
#line 790 "ml_code_gen.m"
  }
#line 790 "ml_code_gen.m"
}

#line 738 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(
#line 738 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalExpr_3,
#line 738 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__SubGoalNonLocals_4)
#line 738 "ml_code_gen.m"
{
#line 743 "ml_code_gen.m"
  {
#line 743 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;

#line 743 "ml_code_gen.m"
#line 743 "ml_code_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GoalExpr_3)) {
#line 743 "ml_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 743 "ml_code_gen.m"
      case (MR_Integer) 0:
#line 796 "ml_code_gen.m"
        {
#line 796 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__SubGoal_48 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_gen__GoalExpr_3), (MR_Integer) 0);

#line 802 "ml_code_gen.m"
          {
#line 802 "ml_code_gen.m"
            *ml_backend__ml_code_gen__SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_48);
          }
#line 796 "ml_code_gen.m"
        }
#line 743 "ml_code_gen.m"
        break;
#line 743 "ml_code_gen.m"
      case (MR_Integer) 1:
#line 743 "ml_code_gen.m"
        {
#line 743 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__Unification_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
#line 743 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___LHS_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 0)));
#line 743 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 743 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 743 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___UnifyContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));

#line 752 "ml_code_gen.m"
#line 752 "ml_code_gen.m"
          switch (MR_tag((MR_Word) ml_backend__ml_code_gen__Unification_8)) {
#line 752 "ml_code_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 752 "ml_code_gen.m"
            case (MR_Integer) 0:
#line 746 "ml_code_gen.m"
              {
#line 746 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__LHSVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)));
#line 746 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 2)));
#line 746 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__V_84_84;
#line 745 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
#line 745 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___ArgModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 3)));
#line 745 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___HowToConstruct_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 4)));
#line 745 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___Unique_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 5)));
#line 745 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___SubInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 6)));

#line 751 "ml_code_gen.m"
                {
#line 751 "ml_code_gen.m"
                  ml_backend__ml_code_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_84_84, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_10));
#line 751 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_84_84, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_12));
#line 751 "ml_code_gen.m"
                }
#line 751 "ml_code_gen.m"
                {
#line 751 "ml_code_gen.m"
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_84_84);
                }
#line 746 "ml_code_gen.m"
              }
#line 752 "ml_code_gen.m"
              break;
#line 752 "ml_code_gen.m"
            case (MR_Integer) 1:
#line 754 "ml_code_gen.m"
              {
#line 754 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__V_83_83;
#line 754 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__LHSVar_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)));
#line 754 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__ArgVars_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 2)));
#line 753 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 4)));
#line 753 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___CanCGC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 5)));
#line 753 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___ConsId_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
#line 753 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen___ArgModes_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 3)));

#line 755 "ml_code_gen.m"
                {
#line 755 "ml_code_gen.m"
                  ml_backend__ml_code_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_83_83, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_87));
#line 755 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_89));
#line 755 "ml_code_gen.m"
                }
#line 755 "ml_code_gen.m"
                {
#line 755 "ml_code_gen.m"
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_83_83);
                }
#line 754 "ml_code_gen.m"
              }
#line 752 "ml_code_gen.m"
              break;
#line 752 "ml_code_gen.m"
            case (MR_Integer) 2:
#line 757 "ml_code_gen.m"
              {
#line 757 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__RHSVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
#line 757 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__V_80_80;
#line 757 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__V_81_81;
#line 757 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__LHSVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)));

#line 758 "ml_code_gen.m"
                {
#line 758 "ml_code_gen.m"
                  ml_backend__ml_code_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_81_81, 0) = ((MR_Box) (ml_backend__ml_code_gen__RHSVar_19));
#line 758 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "ml_code_gen.m"
                }
#line 758 "ml_code_gen.m"
                {
#line 758 "ml_code_gen.m"
                  ml_backend__ml_code_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_80_80, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_91));
#line 758 "ml_code_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_80_80, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_81_81));
#line 758 "ml_code_gen.m"
                }
#line 758 "ml_code_gen.m"
                {
#line 758 "ml_code_gen.m"
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_80_80);
                }
#line 757 "ml_code_gen.m"
              }
#line 752 "ml_code_gen.m"
              break;
#line 752 "ml_code_gen.m"
            case (MR_Integer) 3:
#line 752 "ml_code_gen.m"
#line 752 "ml_code_gen.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)))) {
#line 752 "ml_code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 752 "ml_code_gen.m"
                case (MR_Integer) 0:
#line 760 "ml_code_gen.m"
                  {
#line 760 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__V_77_77;
#line 760 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__V_78_78;
#line 760 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__LHSVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
#line 760 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__RHSVar_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 2)));

#line 761 "ml_code_gen.m"
                    {
#line 761 "ml_code_gen.m"
                      ml_backend__ml_code_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_78_78, 0) = ((MR_Box) (ml_backend__ml_code_gen__RHSVar_93));
#line 761 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "ml_code_gen.m"
                    }
#line 761 "ml_code_gen.m"
                    {
#line 761 "ml_code_gen.m"
                      ml_backend__ml_code_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_77_77, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_92));
#line 761 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_77_77, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_78_78));
#line 761 "ml_code_gen.m"
                    }
#line 761 "ml_code_gen.m"
                    {
#line 761 "ml_code_gen.m"
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_77_77);
                    }
#line 760 "ml_code_gen.m"
                  }
#line 752 "ml_code_gen.m"
                  break;
#line 752 "ml_code_gen.m"
                case (MR_Integer) 1:
#line 763 "ml_code_gen.m"
                  {
#line 764 "ml_code_gen.m"
                    {
#line 764 "ml_code_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.goal_expr_find_subgoal_nonlocals\'/2", (MR_String) "complicated_unify");
#line 764 "ml_code_gen.m"
                      return;
                    }
#line 763 "ml_code_gen.m"
                  }
#line 752 "ml_code_gen.m"
                  break;
#line 752 "ml_code_gen.m"
              }
#line 752 "ml_code_gen.m"
              break;
#line 752 "ml_code_gen.m"
          }
#line 743 "ml_code_gen.m"
        }
#line 743 "ml_code_gen.m"
        break;
#line 743 "ml_code_gen.m"
      case (MR_Integer) 2:
#line 768 "ml_code_gen.m"
        {
#line 768 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ArgVars_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 767 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 0)));
#line 767 "ml_code_gen.m"
          MR_Integer ml_backend__ml_code_gen___ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 767 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___Builtin_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
#line 767 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___Unify_context_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
#line 767 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 5)));

#line 769 "ml_code_gen.m"
          {
#line 769 "ml_code_gen.m"
            *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_94);
          }
#line 768 "ml_code_gen.m"
        }
#line 743 "ml_code_gen.m"
        break;
#line 743 "ml_code_gen.m"
      case (MR_Integer) 3:
#line 743 "ml_code_gen.m"
#line 743 "ml_code_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 0)))) {
#line 743 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 743 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 772 "ml_code_gen.m"
            {
#line 772 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__GenericCall_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 772 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ArgVars_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 771 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
#line 771 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___MaybeArgRegs_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
#line 771 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Detism_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 5)));

#line 776 "ml_code_gen.m"
#line 776 "ml_code_gen.m"
              switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GenericCall_28)) {
#line 776 "ml_code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 776 "ml_code_gen.m"
                case (MR_Integer) 0:
#line 774 "ml_code_gen.m"
                  {
#line 774 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__HOVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 0)));
#line 774 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__V_73_73;
#line 774 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen___Purity_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 1)));
#line 774 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen___Kind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 2)));
#line 774 "ml_code_gen.m"
                    MR_Integer ml_backend__ml_code_gen___Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 3)));

#line 775 "ml_code_gen.m"
                    {
#line 775 "ml_code_gen.m"
                      ml_backend__ml_code_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_73_73, 0) = ((MR_Box) (ml_backend__ml_code_gen__HOVar_32));
#line 775 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_73_73, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_95));
#line 775 "ml_code_gen.m"
                    }
#line 775 "ml_code_gen.m"
                    {
#line 775 "ml_code_gen.m"
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_73_73);
                    }
#line 774 "ml_code_gen.m"
                  }
#line 776 "ml_code_gen.m"
                  break;
#line 776 "ml_code_gen.m"
                case (MR_Integer) 1:
#line 778 "ml_code_gen.m"
                  {
#line 778 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__MethodVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 0)));
#line 778 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__V_72_72;
#line 777 "ml_code_gen.m"
                    MR_Integer ml_backend__ml_code_gen___MethodNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 1)));
#line 777 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen___MethodClassId_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 2)));
#line 777 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen___Name_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 3)));

#line 779 "ml_code_gen.m"
                    {
#line 779 "ml_code_gen.m"
                      ml_backend__ml_code_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_code_gen__MethodVar_36));
#line 779 "ml_code_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_72_72, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_95));
#line 779 "ml_code_gen.m"
                    }
#line 779 "ml_code_gen.m"
                    {
#line 779 "ml_code_gen.m"
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_72_72);
                    }
#line 778 "ml_code_gen.m"
                  }
#line 776 "ml_code_gen.m"
                  break;
#line 776 "ml_code_gen.m"
                case (MR_Integer) 2:
#line 781 "ml_code_gen.m"
                  {
#line 782 "ml_code_gen.m"
                    {
#line 782 "ml_code_gen.m"
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_95);
                    }
#line 781 "ml_code_gen.m"
                  }
#line 776 "ml_code_gen.m"
                  break;
#line 776 "ml_code_gen.m"
                case (MR_Integer) 3:
#line 784 "ml_code_gen.m"
                  {
#line 785 "ml_code_gen.m"
                    {
#line 785 "ml_code_gen.m"
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_95);
                    }
#line 784 "ml_code_gen.m"
                  }
#line 776 "ml_code_gen.m"
                  break;
#line 776 "ml_code_gen.m"
              }
#line 772 "ml_code_gen.m"
            }
#line 743 "ml_code_gen.m"
            break;
#line 743 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 789 "ml_code_gen.m"
            {
#line 789 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__TypeCtorInfo_112_112 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 789 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__TypeInfo_113_113 = (MR_Word) &ml_backend__ml_code_gen_scalar_common_1[0];
#line 789 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
#line 789 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ExtraArgs_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 5)));
#line 789 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ExtraVars_47;
#line 789 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_71_71;
#line 789 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ArgVars_98;
#line 788 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Attr_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 788 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___TraceCond_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 6)));
#line 788 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Impl_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 7)));
#line 788 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___PredId_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 788 "ml_code_gen.m"
              MR_Integer ml_backend__ml_code_gen___ProcId_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));

#line 790 "ml_code_gen.m"
              {
#line 790 "ml_code_gen.m"
                ml_backend__ml_code_gen__ArgVars_98 = mercury__list__map_2_f_0(ml_backend__ml_code_gen__TypeCtorInfo_112_112, ml_backend__ml_code_gen__TypeInfo_113_113, (MR_Word) &ml_backend__ml_code_gen_scalar_common_3[0], ml_backend__ml_code_gen__Args_43);
              }
#line 791 "ml_code_gen.m"
              {
#line 791 "ml_code_gen.m"
                ml_backend__ml_code_gen__ExtraVars_47 = mercury__list__map_2_f_0(ml_backend__ml_code_gen__TypeCtorInfo_112_112, ml_backend__ml_code_gen__TypeInfo_113_113, (MR_Word) &ml_backend__ml_code_gen_scalar_common_3[1], ml_backend__ml_code_gen__ExtraArgs_44);
              }
#line 792 "ml_code_gen.m"
              {
#line 792 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_71_71 = mercury__list__f_43_43_2_f_0(ml_backend__ml_code_gen__TypeInfo_113_113, ml_backend__ml_code_gen__ExtraVars_47, ml_backend__ml_code_gen__ArgVars_98);
              }
#line 792 "ml_code_gen.m"
              {
#line 792 "ml_code_gen.m"
                *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__V_71_71);
              }
#line 789 "ml_code_gen.m"
            }
#line 743 "ml_code_gen.m"
            break;
#line 743 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 806 "ml_code_gen.m"
            {
#line 806 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoals_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 806 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_68_68;
#line 804 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));

#line 808 "ml_code_gen.m"
              {
#line 808 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_68_68 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 807 "ml_code_gen.m"
              {
#line 807 "ml_code_gen.m"
                ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__SubGoals_51, ml_backend__ml_code_gen__V_68_68, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
#line 806 "ml_code_gen.m"
            }
#line 743 "ml_code_gen.m"
            break;
#line 743 "ml_code_gen.m"
          case (MR_Integer) 3:
#line 806 "ml_code_gen.m"
            {
#line 806 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoals_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 806 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_123_123;

#line 808 "ml_code_gen.m"
              {
#line 808 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_123_123 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 807 "ml_code_gen.m"
              {
#line 807 "ml_code_gen.m"
                ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__SubGoals_122, ml_backend__ml_code_gen__V_123_123, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
#line 806 "ml_code_gen.m"
            }
#line 743 "ml_code_gen.m"
            break;
#line 743 "ml_code_gen.m"
          case (MR_Integer) 4:
#line 816 "ml_code_gen.m"
            {
#line 816 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
#line 816 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_62_62;
#line 816 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 816 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___CanFail_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));

#line 819 "ml_code_gen.m"
              {
#line 819 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_62_62 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 819 "ml_code_gen.m"
              {
#line 819 "ml_code_gen.m"
                ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__Cases_57, ml_backend__ml_code_gen__V_62_62, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
#line 816 "ml_code_gen.m"
            }
#line 743 "ml_code_gen.m"
            break;
#line 743 "ml_code_gen.m"
          case (MR_Integer) 5:
#line 796 "ml_code_gen.m"
            {
#line 796 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoal_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 795 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Reason_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));

#line 802 "ml_code_gen.m"
              {
#line 802 "ml_code_gen.m"
                *ml_backend__ml_code_gen__SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_125);
              }
#line 796 "ml_code_gen.m"
            }
#line 743 "ml_code_gen.m"
            break;
#line 743 "ml_code_gen.m"
          case (MR_Integer) 6:
#line 810 "ml_code_gen.m"
            {
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Cond_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Then_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Else_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_63_63;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_64_64;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_65_65;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_66_66;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoal_129;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoals_130;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__NonLocals_132;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoal_141;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoals_142;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__NonLocals_144;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoal_153;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__NonLocals_156;
#line 810 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
#line 829 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoals_154;

#line 813 "ml_code_gen.m"
              {
#line 813 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_66_66, 0) = ((MR_Box) (ml_backend__ml_code_gen__Else_55));
#line 813 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 813 "ml_code_gen.m"
              }
#line 813 "ml_code_gen.m"
              {
#line 813 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_65_65, 0) = ((MR_Box) (ml_backend__ml_code_gen__Then_54));
#line 813 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_65_65, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_66_66));
#line 813 "ml_code_gen.m"
              }
#line 813 "ml_code_gen.m"
              {
#line 813 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_code_gen__Cond_53));
#line 813 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_65_65));
#line 813 "ml_code_gen.m"
              }
#line 814 "ml_code_gen.m"
              {
#line 814 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_64_64 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
#line 829 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoal_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, (MR_Integer) 0)));
#line 829 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoals_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_63_63, (MR_Integer) 1)));
#line 830 "ml_code_gen.m"
              {
#line 830 "ml_code_gen.m"
                ml_backend__ml_code_gen__NonLocals_132 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_129);
              }
#line 831 "ml_code_gen.m"
              {
#line 831 "ml_code_gen.m"
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_132, ml_backend__ml_code_gen__V_64_64, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135);
              }
#line 829 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoal_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_130, (MR_Integer) 0)));
#line 829 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoals_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_130, (MR_Integer) 1)));
#line 830 "ml_code_gen.m"
              {
#line 830 "ml_code_gen.m"
                ml_backend__ml_code_gen__NonLocals_144 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_141);
              }
#line 831 "ml_code_gen.m"
              {
#line 831 "ml_code_gen.m"
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_144, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147);
              }
#line 829 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoal_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_142, (MR_Integer) 0)));
#line 829 "ml_code_gen.m"
              ml_backend__ml_code_gen__SubGoals_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_142, (MR_Integer) 1)));
#line 830 "ml_code_gen.m"
              {
#line 830 "ml_code_gen.m"
                ml_backend__ml_code_gen__NonLocals_156 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_153);
              }
#line 831 "ml_code_gen.m"
              {
#line 831 "ml_code_gen.m"
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_156, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
#line 810 "ml_code_gen.m"
            }
#line 743 "ml_code_gen.m"
            break;
#line 743 "ml_code_gen.m"
          case (MR_Integer) 7:
#line 821 "ml_code_gen.m"
            {
#line 822 "ml_code_gen.m"
              {
#line 822 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.goal_expr_find_subgoal_nonlocals\'/2", (MR_String) "shorthand");
#line 822 "ml_code_gen.m"
                return;
              }
#line 821 "ml_code_gen.m"
            }
#line 743 "ml_code_gen.m"
            break;
#line 743 "ml_code_gen.m"
        }
#line 743 "ml_code_gen.m"
        break;
#line 743 "ml_code_gen.m"
    }
#line 743 "ml_code_gen.m"
  }
#line 738 "ml_code_gen.m"
}

#line 618 "ml_code_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0_1(
#line 618 "ml_code_gen.m"
  MR_Box ml_backend__ml_code_gen__closure_arg)
#line 618 "ml_code_gen.m"
{
#line 618 "ml_code_gen.m"
  {
#line 618 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 618 "ml_code_gen.m"
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;

#line 618 "ml_code_gen.m"
    {
#line 618 "ml_code_gen.m"
      ml_backend__ml_code_gen__succeeded = ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__618__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))));
    }
#line 618 "ml_code_gen.m"
    return ml_backend__ml_code_gen__succeeded;
#line 618 "ml_code_gen.m"
  }
#line 618 "ml_code_gen.m"
}

#line 588 "ml_code_gen.m"
static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0(
#line 588 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalExpr_9,
#line 588 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
#line 588 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_11,
#line 588 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__GoalInfo_12,
#line 588 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_13,
#line 588 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_14,
#line 588 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59,
#line 588 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_60)
#line 588 "ml_code_gen.m"
{
#line 595 "ml_code_gen.m"
  {
#line 595 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;

#line 595 "ml_code_gen.m"
#line 595 "ml_code_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GoalExpr_9)) {
#line 595 "ml_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 595 "ml_code_gen.m"
      case (MR_Integer) 0:
#line 660 "ml_code_gen.m"
        {
#line 660 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__SubGoal_55 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_gen__GoalExpr_9), (MR_Integer) 0);

#line 661 "ml_code_gen.m"
          {
#line 661 "ml_code_gen.m"
            ml_backend__ml_code_gen__ml_gen_negation_7_p_0(ml_backend__ml_code_gen__SubGoal_55, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
          }
#line 660 "ml_code_gen.m"
        }
#line 595 "ml_code_gen.m"
        break;
#line 595 "ml_code_gen.m"
      case (MR_Integer) 1:
#line 595 "ml_code_gen.m"
        {
#line 595 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__Unification_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
#line 595 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___LHS_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 0)));
#line 595 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___RHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 595 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 595 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen___UnifyContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));

#line 596 "ml_code_gen.m"
          {
#line 596 "ml_code_gen.m"
            ml_backend__ml_unify_gen__ml_gen_unification_6_p_0(ml_backend__ml_code_gen__Unification_19, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
          }
#line 597 "ml_code_gen.m"
          *ml_backend__ml_code_gen__Decls_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "ml_code_gen.m"
        }
#line 595 "ml_code_gen.m"
        break;
#line 595 "ml_code_gen.m"
      case (MR_Integer) 2:
#line 599 "ml_code_gen.m"
        {
#line 599 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 0)));
#line 599 "ml_code_gen.m"
          MR_Integer ml_backend__ml_code_gen__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 599 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 599 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__BuiltinState_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
#line 599 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));
#line 599 "ml_code_gen.m"
          MR_Word ml_backend__ml_code_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 5)));

#line 608 "ml_code_gen.m"
#line 608 "ml_code_gen.m"
          switch (ml_backend__ml_code_gen__BuiltinState_24) {
#line 608 "ml_code_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 608 "ml_code_gen.m"
            case (MR_Integer) 0:
#line 608 "ml_code_gen.m"
            case (MR_Integer) 1:
#line 612 "ml_code_gen.m"
              {
#line 612 "ml_code_gen.m"
                ml_backend__ml_call_gen__ml_gen_builtin_9_p_0(ml_backend__ml_code_gen__PredId_21, ml_backend__ml_code_gen__ProcId_22, ml_backend__ml_code_gen__ArgVars_23, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 608 "ml_code_gen.m"
              break;
#line 608 "ml_code_gen.m"
            case (MR_Integer) 2:
#line 601 "ml_code_gen.m"
              {
#line 601 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__ArgLvals_27;
#line 601 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__VarSet_28;
#line 601 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__ArgNames_29;
#line 601 "ml_code_gen.m"
                MR_Word ml_backend__ml_code_gen__ActualArgTypes_30;

#line 602 "ml_code_gen.m"
                {
#line 602 "ml_code_gen.m"
                  ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__ArgVars_23, &ml_backend__ml_code_gen__ArgLvals_27);
                }
#line 603 "ml_code_gen.m"
                {
#line 603 "ml_code_gen.m"
                  ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, &ml_backend__ml_code_gen__VarSet_28);
                }
#line 604 "ml_code_gen.m"
                {
#line 604 "ml_code_gen.m"
                  ml_backend__ml_code_gen__ArgNames_29 = ml_backend__ml_code_util__ml_gen_var_names_2_f_0(ml_backend__ml_code_gen__VarSet_28, ml_backend__ml_code_gen__ArgVars_23);
                }
#line 605 "ml_code_gen.m"
                {
#line 605 "ml_code_gen.m"
                  ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__ArgVars_23, &ml_backend__ml_code_gen__ActualArgTypes_30);
                }
#line 606 "ml_code_gen.m"
                {
#line 606 "ml_code_gen.m"
                  ml_backend__ml_call_gen__ml_gen_call_12_p_0(ml_backend__ml_code_gen__PredId_21, ml_backend__ml_code_gen__ProcId_22, ml_backend__ml_code_gen__ArgNames_29, ml_backend__ml_code_gen__ArgLvals_27, ml_backend__ml_code_gen__ActualArgTypes_30, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, (MR_Integer) 0, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
                }
#line 601 "ml_code_gen.m"
              }
#line 608 "ml_code_gen.m"
              break;
#line 608 "ml_code_gen.m"
          }
#line 599 "ml_code_gen.m"
        }
#line 595 "ml_code_gen.m"
        break;
#line 595 "ml_code_gen.m"
      case (MR_Integer) 3:
#line 595 "ml_code_gen.m"
#line 595 "ml_code_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 0)))) {
#line 595 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 595 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 616 "ml_code_gen.m"
            {
#line 616 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__GenericCall_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 616 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Vars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 616 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
#line 616 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Detism_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 5)));
#line 616 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CallCodeModel_36;
#line 616 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_74_74;
#line 616 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));

#line 617 "ml_code_gen.m"
              {
#line 617 "ml_code_gen.m"
                hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_gen__Detism_35, &ml_backend__ml_code_gen__CallCodeModel_36);
              }
#line 618 "ml_code_gen.m"
              {
#line 618 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 618 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_74_74, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[0]));
#line 618 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_74_74, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0_1));
#line 618 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 618 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_74_74, 3) = ((MR_Box) (ml_backend__ml_code_gen__CodeModel_10));
#line 618 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__V_74_74, 4) = ((MR_Box) (ml_backend__ml_code_gen__CallCodeModel_36));
#line 618 "ml_code_gen.m"
              }
#line 618 "ml_code_gen.m"
              {
#line 618 "ml_code_gen.m"
                mercury__require__expect_4_p_0(ml_backend__ml_code_gen__V_74_74, (MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/8", (MR_String) "code model mismatch");
              }
#line 620 "ml_code_gen.m"
              {
#line 620 "ml_code_gen.m"
                ml_backend__ml_call_gen__ml_gen_generic_call_9_p_0(ml_backend__ml_code_gen__GenericCall_31, ml_backend__ml_code_gen__Vars_32, ml_backend__ml_code_gen__Modes_33, ml_backend__ml_code_gen__Detism_35, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 616 "ml_code_gen.m"
            }
#line 595 "ml_code_gen.m"
            break;
#line 595 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 624 "ml_code_gen.m"
            {
#line 624 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Attributes_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 624 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));
#line 624 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ExtraArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 5)));
#line 624 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__MaybeTraceRuntimeCond_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 6)));
#line 624 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__PragmaImpl_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 7)));
#line 624 "ml_code_gen.m"
              MR_String ml_backend__ml_code_gen__ForeignCode_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__PragmaImpl_41, (MR_Integer) 0)));
#line 624 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__MaybeContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__PragmaImpl_41, (MR_Integer) 1)));
#line 624 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__ContextToUse_44;
#line 624 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__PredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 624 "ml_code_gen.m"
              MR_Integer ml_backend__ml_code_gen__ProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));

#line 628 "ml_code_gen.m"
              if ((ml_backend__ml_code_gen__MaybeContext_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "ml_code_gen.m"
                ml_backend__ml_code_gen__ContextToUse_44 = ml_backend__ml_code_gen__Context_11;
#line 628 "ml_code_gen.m"
              else
#line 627 "ml_code_gen.m"
                ml_backend__ml_code_gen__ContextToUse_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__MaybeContext_43, (MR_Integer) 0)));
#line 637 "ml_code_gen.m"
              if ((ml_backend__ml_code_gen__MaybeTraceRuntimeCond_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "ml_code_gen.m"
                {
#line 634 "ml_code_gen.m"
                  ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Attributes_37, ml_backend__ml_code_gen__PredId_83, ml_backend__ml_code_gen__ProcId_84, ml_backend__ml_code_gen__Args_38, ml_backend__ml_code_gen__ExtraArgs_39, ml_backend__ml_code_gen__ForeignCode_42, ml_backend__ml_code_gen__ContextToUse_44, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
                }
#line 637 "ml_code_gen.m"
              else
#line 638 "ml_code_gen.m"
                {
#line 638 "ml_code_gen.m"
                  MR_Word ml_backend__ml_code_gen__TraceRuntimeCond_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__MaybeTraceRuntimeCond_40, (MR_Integer) 0)));

#line 639 "ml_code_gen.m"
                  {
#line 639 "ml_code_gen.m"
                    ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_p_0(ml_backend__ml_code_gen__TraceRuntimeCond_45, ml_backend__ml_code_gen__ContextToUse_44, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
                  }
#line 638 "ml_code_gen.m"
                }
#line 624 "ml_code_gen.m"
            }
#line 595 "ml_code_gen.m"
            break;
#line 595 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 643 "ml_code_gen.m"
            {
#line 643 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Goals_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 643 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___ConjType_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));

#line 646 "ml_code_gen.m"
              {
#line 646 "ml_code_gen.m"
                ml_backend__ml_code_gen__ml_gen_conj_7_p_0(ml_backend__ml_code_gen__Goals_47, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 643 "ml_code_gen.m"
            }
#line 595 "ml_code_gen.m"
            break;
#line 595 "ml_code_gen.m"
          case (MR_Integer) 3:
#line 648 "ml_code_gen.m"
            {
#line 648 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Goals_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));

#line 649 "ml_code_gen.m"
              {
#line 649 "ml_code_gen.m"
                ml_backend__ml_disj_gen__ml_gen_disj_7_p_0(ml_backend__ml_code_gen__Goals_85, ml_backend__ml_code_gen__GoalInfo_12, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 650 "ml_code_gen.m"
              *ml_backend__ml_code_gen__Decls_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "ml_code_gen.m"
            }
#line 595 "ml_code_gen.m"
            break;
#line 595 "ml_code_gen.m"
          case (MR_Integer) 4:
#line 652 "ml_code_gen.m"
            {
#line 652 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 652 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 652 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CasesList_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));

#line 653 "ml_code_gen.m"
              {
#line 653 "ml_code_gen.m"
                ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(ml_backend__ml_code_gen__Var_48, ml_backend__ml_code_gen__CanFail_49, ml_backend__ml_code_gen__CasesList_50, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__GoalInfo_12, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 652 "ml_code_gen.m"
            }
#line 595 "ml_code_gen.m"
            break;
#line 595 "ml_code_gen.m"
          case (MR_Integer) 5:
#line 663 "ml_code_gen.m"
            {
#line 663 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
#line 663 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SubGoal_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 669 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__TermVar_57;
#line 665 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_64_64;

#line 665 "ml_code_gen.m"
              ml_backend__ml_code_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_code_gen__Reason_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 665 "ml_code_gen.m"
              if (ml_backend__ml_code_gen__succeeded)
#line 665 "ml_code_gen.m"
                {
#line 665 "ml_code_gen.m"
                  ml_backend__ml_code_gen__TermVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 1)));
#line 665 "ml_code_gen.m"
                  ml_backend__ml_code_gen__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 2)));
#line 665 "ml_code_gen.m"
                  ml_backend__ml_code_gen__succeeded = (ml_backend__ml_code_gen__V_64_64 == (MR_Integer) 1);
#line 665 "ml_code_gen.m"
                }
#line 669 "ml_code_gen.m"
              if (ml_backend__ml_code_gen__succeeded)
#line 667 "ml_code_gen.m"
                {
#line 667 "ml_code_gen.m"
                  {
#line 667 "ml_code_gen.m"
                    ml_backend__ml_unify_gen__ml_gen_ground_term_5_p_0(ml_backend__ml_code_gen__TermVar_57, ml_backend__ml_code_gen__SubGoal_86, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
                  }
#line 668 "ml_code_gen.m"
                  *ml_backend__ml_code_gen__Decls_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "ml_code_gen.m"
                }
#line 669 "ml_code_gen.m"
              else
#line 670 "ml_code_gen.m"
                {
#line 670 "ml_code_gen.m"
                  ml_backend__ml_commit_gen__ml_gen_commit_7_p_0(ml_backend__ml_code_gen__SubGoal_86, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
                }
#line 663 "ml_code_gen.m"
            }
#line 595 "ml_code_gen.m"
            break;
#line 595 "ml_code_gen.m"
          case (MR_Integer) 6:
#line 656 "ml_code_gen.m"
            {
#line 656 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Cond_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
#line 656 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Then_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
#line 656 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Else_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));
#line 656 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen___Vars_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));

#line 657 "ml_code_gen.m"
              {
#line 657 "ml_code_gen.m"
                ml_backend__ml_code_gen__ml_gen_ite_9_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Cond_52, ml_backend__ml_code_gen__Then_53, ml_backend__ml_code_gen__Else_54, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_59, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60);
              }
#line 656 "ml_code_gen.m"
            }
#line 595 "ml_code_gen.m"
            break;
#line 595 "ml_code_gen.m"
          case (MR_Integer) 7:
#line 674 "ml_code_gen.m"
            {
#line 676 "ml_code_gen.m"
              {
#line 676 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/8", (MR_String) "unexpected shorthand");
#line 676 "ml_code_gen.m"
                return;
              }
#line 674 "ml_code_gen.m"
            }
#line 595 "ml_code_gen.m"
            break;
#line 595 "ml_code_gen.m"
        }
#line 595 "ml_code_gen.m"
        break;
#line 595 "ml_code_gen.m"
    }
#line 595 "ml_code_gen.m"
  }
#line 588 "ml_code_gen.m"
}

#line 507 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(
#line 507 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
#line 507 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__2_2,
#line 507 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__3_3,
#line 507 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__HeadVar__4_4,
#line 507 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__HeadVar__5_5,
#line 507 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6,
#line 507 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_7)
#line 507 "ml_code_gen.m"
{
#line 1151 "ml_code_gen.m"
  while (MR_TRUE)
#line 1151 "ml_code_gen.m"
    {
#line 1151 "ml_code_gen.m"
      /* tailcall optimized into a loop */
#line 1151 "ml_code_gen.m"
      {
#line 1151 "ml_code_gen.m"
        MR_bool ml_backend__ml_code_gen__succeeded;

#line 1151 "ml_code_gen.m"
        if ((ml_backend__ml_code_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1151 "ml_code_gen.m"
          {
#line 1151 "ml_code_gen.m"
            *ml_backend__ml_code_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1151 "ml_code_gen.m"
            *ml_backend__ml_code_gen__STATE_VARIABLE_Info_7 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6;
#line 1151 "ml_code_gen.m"
          }
#line 1151 "ml_code_gen.m"
        else
#line 1153 "ml_code_gen.m"
          {
#line 1153 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 1153 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 1153 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__Type_21;
#line 1153 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__ModuleInfo_22;
#line 1153 "ml_code_gen.m"
            MR_Word ml_backend__ml_code_gen__IsDummy_23;

#line 1154 "ml_code_gen.m"
            {
#line 1154 "ml_code_gen.m"
              hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_code_gen__HeadVar__2_2, ml_backend__ml_code_gen__Var_17, &ml_backend__ml_code_gen__Type_21);
            }
#line 1155 "ml_code_gen.m"
            {
#line 1155 "ml_code_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_code_gen__ModuleInfo_22);
            }
#line 1156 "ml_code_gen.m"
            {
#line 1156 "ml_code_gen.m"
              ml_backend__ml_code_gen__IsDummy_23 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_gen__ModuleInfo_22, ml_backend__ml_code_gen__Type_21);
            }
#line 1161 "ml_code_gen.m"
#line 1161 "ml_code_gen.m"
            switch (ml_backend__ml_code_gen__IsDummy_23) {
#line 1161 "ml_code_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1161 "ml_code_gen.m"
              case (MR_Integer) 0:
#line 1160 "ml_code_gen.m"
                {
#line 1160 "ml_code_gen.m"
                  /* direct tailcall eliminated */
#line 1160 "ml_code_gen.m"
                  {
#line 1160 "ml_code_gen.m"
                    MR_Word ml_backend__ml_code_gen__HeadVar__4__tmp_copy_4 = ml_backend__ml_code_gen__Vars_18;

#line 1160 "ml_code_gen.m"
                    ml_backend__ml_code_gen__HeadVar__4_4 = ml_backend__ml_code_gen__HeadVar__4__tmp_copy_4;
#line 1160 "ml_code_gen.m"
                  }
#line 1160 "ml_code_gen.m"
                  continue;
#line 1160 "ml_code_gen.m"
                }
#line 1161 "ml_code_gen.m"
                break;
#line 1161 "ml_code_gen.m"
              case (MR_Integer) 1:
#line 1162 "ml_code_gen.m"
                {
#line 1162 "ml_code_gen.m"
                  MR_Word ml_backend__ml_code_gen__VarName_24;
#line 1162 "ml_code_gen.m"
                  MR_Word ml_backend__ml_code_gen__Defn_25;
#line 1162 "ml_code_gen.m"
                  MR_Word ml_backend__ml_code_gen__Defns0_26;
#line 1162 "ml_code_gen.m"
                  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29;

#line 1163 "ml_code_gen.m"
                  {
#line 1163 "ml_code_gen.m"
                    ml_backend__ml_code_gen__VarName_24 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_code_gen__HeadVar__1_1, ml_backend__ml_code_gen__Var_17);
                  }
#line 1164 "ml_code_gen.m"
                  {
#line 1164 "ml_code_gen.m"
                    ml_backend__ml_code_util__ml_gen_var_decl_6_p_0(ml_backend__ml_code_gen__VarName_24, ml_backend__ml_code_gen__Type_21, ml_backend__ml_code_gen__HeadVar__3_3, &ml_backend__ml_code_gen__Defn_25, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29);
                  }
#line 1165 "ml_code_gen.m"
                  {
#line 1165 "ml_code_gen.m"
                    ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_code_gen__HeadVar__1_1, ml_backend__ml_code_gen__HeadVar__2_2, ml_backend__ml_code_gen__HeadVar__3_3, ml_backend__ml_code_gen__Vars_18, &ml_backend__ml_code_gen__Defns0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29, ml_backend__ml_code_gen__STATE_VARIABLE_Info_7);
                  }
#line 1166 "ml_code_gen.m"
                  {
#line 1166 "ml_code_gen.m"
                    MR_Word base;
#line 1166 "ml_code_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "ml_code_gen.m"
                    *ml_backend__ml_code_gen__HeadVar__5_5 = base;
#line 1166 "ml_code_gen.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_gen__Defn_25));
#line 1166 "ml_code_gen.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_gen__Defns0_26));
#line 1166 "ml_code_gen.m"
                  }
#line 1162 "ml_code_gen.m"
                }
#line 1161 "ml_code_gen.m"
                break;
#line 1161 "ml_code_gen.m"
            }
#line 1153 "ml_code_gen.m"
          }
#line 1151 "ml_code_gen.m"
      }
#line 1151 "ml_code_gen.m"
      break;
#line 1151 "ml_code_gen.m"
    }
#line 507 "ml_code_gen.m"
}

#line 501 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(
#line 501 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__OuterCodeModel_8,
#line 501 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__InnerCodeModel_9,
#line 501 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Context_10,
#line 501 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18,
#line 501 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19,
#line 501 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20,
#line 501 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_21)
#line 501 "ml_code_gen.m"
{
#line 1073 "ml_code_gen.m"
  {
#line 1073 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;

#line 1073 "ml_code_gen.m"
#line 1073 "ml_code_gen.m"
    switch (ml_backend__ml_code_gen__OuterCodeModel_8) {
#line 1073 "ml_code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1073 "ml_code_gen.m"
      case (MR_Integer) 0:
#line 1073 "ml_code_gen.m"
#line 1073 "ml_code_gen.m"
        switch (ml_backend__ml_code_gen__InnerCodeModel_9) {
#line 1073 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1073 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 1073 "ml_code_gen.m"
            {
#line 1073 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18;
#line 1073 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
#line 1073 "ml_code_gen.m"
            }
#line 1073 "ml_code_gen.m"
            break;
#line 1073 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 1092 "ml_code_gen.m"
            {
#line 1094 "ml_code_gen.m"
              {
#line 1094 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "nondet in det");
#line 1094 "ml_code_gen.m"
                return;
              }
#line 1092 "ml_code_gen.m"
            }
#line 1073 "ml_code_gen.m"
            break;
#line 1073 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 1088 "ml_code_gen.m"
            {
#line 1090 "ml_code_gen.m"
              {
#line 1090 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "semi in det");
#line 1090 "ml_code_gen.m"
                return;
              }
#line 1088 "ml_code_gen.m"
            }
#line 1073 "ml_code_gen.m"
            break;
#line 1073 "ml_code_gen.m"
        }
#line 1073 "ml_code_gen.m"
        break;
#line 1073 "ml_code_gen.m"
      case (MR_Integer) 2:
#line 1073 "ml_code_gen.m"
#line 1073 "ml_code_gen.m"
        switch (ml_backend__ml_code_gen__InnerCodeModel_9) {
#line 1073 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1073 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 1118 "ml_code_gen.m"
            {
#line 1118 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CallCont_14;
#line 1118 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_30_30;

#line 1127 "ml_code_gen.m"
              {
#line 1127 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__CallCont_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, ml_backend__ml_code_gen__STATE_VARIABLE_Info_21);
              }
#line 1128 "ml_code_gen.m"
              {
#line 1128 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_30_30, 0) = ((MR_Box) (ml_backend__ml_code_gen__CallCont_14));
#line 1128 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "ml_code_gen.m"
              }
#line 1128 "ml_code_gen.m"
              {
#line 1128 "ml_code_gen.m"
                *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18, ml_backend__ml_code_gen__V_30_30);
              }
#line 1118 "ml_code_gen.m"
            }
#line 1073 "ml_code_gen.m"
            break;
#line 1073 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 1079 "ml_code_gen.m"
            {
#line 1079 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18;
#line 1079 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
#line 1079 "ml_code_gen.m"
            }
#line 1073 "ml_code_gen.m"
            break;
#line 1073 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 1130 "ml_code_gen.m"
            {
#line 1130 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__Succeeded_15;
#line 1130 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__IfStmt_16;
#line 1130 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__IfStatement_17;
#line 1130 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_24_24;
#line 1130 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_26_26;
#line 1130 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__CallCont_46;

#line 1141 "ml_code_gen.m"
              {
#line 1141 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_test_success_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, &ml_backend__ml_code_gen__Succeeded_15);
              }
#line 1142 "ml_code_gen.m"
              {
#line 1142 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__CallCont_46, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, ml_backend__ml_code_gen__STATE_VARIABLE_Info_21);
              }
#line 1143 "ml_code_gen.m"
              {
#line 1143 "ml_code_gen.m"
                ml_backend__ml_code_gen__IfStmt_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "ml_code_gen.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 0) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_15));
#line 1143 "ml_code_gen.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 1) = ((MR_Box) (ml_backend__ml_code_gen__CallCont_46));
#line 1143 "ml_code_gen.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "ml_code_gen.m"
              }
#line 1144 "ml_code_gen.m"
              {
#line 1144 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_24_24 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__Context_10);
              }
#line 1144 "ml_code_gen.m"
              {
#line 1144 "ml_code_gen.m"
                ml_backend__ml_code_gen__IfStatement_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_17, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_16));
#line 1144 "ml_code_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_17, 1) = ((MR_Box) (ml_backend__ml_code_gen__V_24_24));
#line 1144 "ml_code_gen.m"
              }
#line 1145 "ml_code_gen.m"
              {
#line 1145 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_26_26, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStatement_17));
#line 1145 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "ml_code_gen.m"
              }
#line 1145 "ml_code_gen.m"
              {
#line 1145 "ml_code_gen.m"
                *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18, ml_backend__ml_code_gen__V_26_26);
              }
#line 1130 "ml_code_gen.m"
            }
#line 1073 "ml_code_gen.m"
            break;
#line 1073 "ml_code_gen.m"
        }
#line 1073 "ml_code_gen.m"
        break;
#line 1073 "ml_code_gen.m"
      case (MR_Integer) 1:
#line 1073 "ml_code_gen.m"
#line 1073 "ml_code_gen.m"
        switch (ml_backend__ml_code_gen__InnerCodeModel_9) {
#line 1073 "ml_code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1073 "ml_code_gen.m"
          case (MR_Integer) 0:
#line 1105 "ml_code_gen.m"
            {
#line 1105 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__SetSuccessTrue_13;
#line 1105 "ml_code_gen.m"
              MR_Word ml_backend__ml_code_gen__V_35_35;

#line 1114 "ml_code_gen.m"
              {
#line 1114 "ml_code_gen.m"
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[1]), ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__SetSuccessTrue_13);
              }
#line 1116 "ml_code_gen.m"
              {
#line 1116 "ml_code_gen.m"
                ml_backend__ml_code_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_35_35, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetSuccessTrue_13));
#line 1116 "ml_code_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1116 "ml_code_gen.m"
              }
#line 1116 "ml_code_gen.m"
              {
#line 1116 "ml_code_gen.m"
                *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18, ml_backend__ml_code_gen__V_35_35);
              }
#line 1105 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
#line 1105 "ml_code_gen.m"
            }
#line 1073 "ml_code_gen.m"
            break;
#line 1073 "ml_code_gen.m"
          case (MR_Integer) 2:
#line 1096 "ml_code_gen.m"
            {
#line 1098 "ml_code_gen.m"
              {
#line 1098 "ml_code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "nondet in semi");
#line 1098 "ml_code_gen.m"
                return;
              }
#line 1096 "ml_code_gen.m"
            }
#line 1073 "ml_code_gen.m"
            break;
#line 1073 "ml_code_gen.m"
          case (MR_Integer) 1:
#line 1076 "ml_code_gen.m"
            {
#line 1076 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18;
#line 1076 "ml_code_gen.m"
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
#line 1076 "ml_code_gen.m"
            }
#line 1073 "ml_code_gen.m"
            break;
#line 1073 "ml_code_gen.m"
        }
#line 1073 "ml_code_gen.m"
        break;
#line 1073 "ml_code_gen.m"
    }
#line 1073 "ml_code_gen.m"
  }
#line 501 "ml_code_gen.m"
}

#line 488 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_6_p_0(
#line 488 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_7,
#line 488 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Goal_8,
#line 488 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_9,
#line 488 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_10,
#line 488 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23,
#line 488 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_24)
#line 488 "ml_code_gen.m"
{
#line 559 "ml_code_gen.m"
  {
#line 559 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__TypeCtorInfo_19_43;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_8, (MR_Integer) 0)));
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_8, (MR_Integer) 1)));
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Context_14;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__VarTypes_15;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__VarSet_17;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__VarDecls_18;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalCodeModel_19;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalDecls_20;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalStatements0_21;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_26_26;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__SubGoalNonLocals_33;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__NonLocals_34;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__VarsToDeclareSet_35;
#line 559 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__VarsToDeclare0_36;

#line 561 "ml_code_gen.m"
    {
#line 561 "ml_code_gen.m"
      ml_backend__ml_code_gen__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
#line 564 "ml_code_gen.m"
    {
#line 564 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_gen__VarTypes_15);
    }
#line 699 "ml_code_gen.m"
    {
#line 699 "ml_code_gen.m"
      ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(ml_backend__ml_code_gen__GoalExpr_12, &ml_backend__ml_code_gen__SubGoalNonLocals_33);
    }
#line 700 "ml_code_gen.m"
    {
#line 700 "ml_code_gen.m"
      ml_backend__ml_code_gen__NonLocals_34 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
#line 3429 "ml_backend.ml_code_gen.c"
    ml_backend__ml_code_gen__TypeCtorInfo_19_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 701 "ml_code_gen.m"
    {
#line 701 "ml_code_gen.m"
      parse_tree__set_of_var__difference_3_p_0(ml_backend__ml_code_gen__TypeCtorInfo_19_43, ml_backend__ml_code_gen__SubGoalNonLocals_33, ml_backend__ml_code_gen__NonLocals_34, &ml_backend__ml_code_gen__VarsToDeclareSet_35);
    }
#line 702 "ml_code_gen.m"
    {
#line 702 "ml_code_gen.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_code_gen__TypeCtorInfo_19_43, ml_backend__ml_code_gen__VarsToDeclareSet_35, &ml_backend__ml_code_gen__VarsToDeclare0_36);
    }
#line 567 "ml_code_gen.m"
    {
#line 567 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_gen__VarSet_17);
    }
#line 3446 "ml_backend.ml_code_gen.c"
    if ((ml_backend__ml_code_gen__VarsToDeclare0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3448 "ml_backend.ml_code_gen.c"
      {
#line 1151 "ml_code_gen.m"
        ml_backend__ml_code_gen__VarDecls_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1151 "ml_code_gen.m"
        ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23;
#line 3454 "ml_backend.ml_code_gen.c"
      }
#line 3456 "ml_backend.ml_code_gen.c"
    else
#line 3458 "ml_backend.ml_code_gen.c"
      {
#line 3460 "ml_backend.ml_code_gen.c"
        MR_Word ml_backend__ml_code_gen__VarsToDeclare_16;
#line 3462 "ml_backend.ml_code_gen.c"
        MR_Word ml_backend__ml_code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__VarsToDeclare0_36, (MR_Integer) 1)));
#line 709 "ml_code_gen.m"
        MR_Word ml_backend__ml_code_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__VarsToDeclare0_36, (MR_Integer) 0)));

#line 708 "ml_code_gen.m"
        if ((ml_backend__ml_code_gen__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "ml_code_gen.m"
          ml_backend__ml_code_gen__VarsToDeclare_16 = ml_backend__ml_code_gen__VarsToDeclare0_36;
#line 708 "ml_code_gen.m"
        else
#line 710 "ml_code_gen.m"
          {
#line 710 "ml_code_gen.m"
            ml_backend__ml_code_gen__VarsToDeclare_16 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(ml_backend__ml_code_gen__VarsToDeclare0_36, ml_backend__ml_code_gen__VarTypes_15);
          }
#line 568 "ml_code_gen.m"
        {
#line 568 "ml_code_gen.m"
          ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_code_gen__VarSet_17, ml_backend__ml_code_gen__VarTypes_15, ml_backend__ml_code_gen__Context_14, ml_backend__ml_code_gen__VarsToDeclare_16, &ml_backend__ml_code_gen__VarDecls_18, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25);
        }
#line 3483 "ml_backend.ml_code_gen.c"
      }
#line 572 "ml_code_gen.m"
    {
#line 572 "ml_code_gen.m"
      ml_backend__ml_code_gen__GoalCodeModel_19 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
#line 573 "ml_code_gen.m"
    {
#line 573 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0(ml_backend__ml_code_gen__GoalExpr_12, ml_backend__ml_code_gen__GoalCodeModel_19, ml_backend__ml_code_gen__Context_14, ml_backend__ml_code_gen__GoalInfo_13, &ml_backend__ml_code_gen__GoalDecls_20, &ml_backend__ml_code_gen__GoalStatements0_21, ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_26_26);
    }
#line 578 "ml_code_gen.m"
    {
#line 578 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(ml_backend__ml_code_gen__CodeModel_7, ml_backend__ml_code_gen__GoalCodeModel_19, ml_backend__ml_code_gen__Context_14, ml_backend__ml_code_gen__GoalStatements0_21, ml_backend__ml_code_gen__Statements_10, ml_backend__ml_code_gen__STATE_VARIABLE_Info_26_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_24);
    }
#line 581 "ml_code_gen.m"
    {
#line 581 "ml_code_gen.m"
      *ml_backend__ml_code_gen__Decls_9 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_gen__VarDecls_18, ml_backend__ml_code_gen__GoalDecls_20);
    }
#line 559 "ml_code_gen.m"
  }
#line 488 "ml_code_gen.m"
}

#line 481 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(
#line 481 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_6,
#line 481 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Goal_7,
#line 481 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statement_8,
#line 481 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11,
#line 481 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_12)
#line 481 "ml_code_gen.m"
{
#line 548 "ml_code_gen.m"
  {
#line 548 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 548 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__InitConstVarMap_10;
#line 548 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13;
#line 548 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Decls_21;
#line 548 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Statements_22;
#line 548 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalInfo_24;
#line 548 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Context_25;
#line 539 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__V_23_23;

#line 549 "ml_code_gen.m"
    {
#line 549 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11, &ml_backend__ml_code_gen__InitConstVarMap_10);
    }
#line 538 "ml_code_gen.m"
    {
#line 538 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_6, ml_backend__ml_code_gen__Goal_7, &ml_backend__ml_code_gen__Decls_21, &ml_backend__ml_code_gen__Statements_22, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13);
    }
#line 539 "ml_code_gen.m"
    ml_backend__ml_code_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 0)));
#line 539 "ml_code_gen.m"
    ml_backend__ml_code_gen__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 1)));
#line 540 "ml_code_gen.m"
    {
#line 540 "ml_code_gen.m"
      ml_backend__ml_code_gen__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_24);
    }
#line 541 "ml_code_gen.m"
    {
#line 541 "ml_code_gen.m"
      *ml_backend__ml_code_gen__Statement_8 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_code_gen__Decls_21, ml_backend__ml_code_gen__Statements_22, ml_backend__ml_code_gen__Context_25);
    }
#line 551 "ml_code_gen.m"
    {
#line 551 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_10, ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13, ml_backend__ml_code_gen__STATE_VARIABLE_Info_12);
    }
#line 548 "ml_code_gen.m"
  }
#line 481 "ml_code_gen.m"
}

#line 478 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_p_0(
#line 478 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_7,
#line 478 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Goal_8,
#line 478 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Decls_9,
#line 478 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statements_10,
#line 478 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_13,
#line 478 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_14)
#line 478 "ml_code_gen.m"
{
#line 543 "ml_code_gen.m"
  {
#line 543 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 543 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__InitConstVarMap_12;
#line 543 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_15;

#line 544 "ml_code_gen.m"
    {
#line 544 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_13, &ml_backend__ml_code_gen__InitConstVarMap_12);
    }
#line 545 "ml_code_gen.m"
    {
#line 545 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_7, ml_backend__ml_code_gen__Goal_8, ml_backend__ml_code_gen__Decls_9, ml_backend__ml_code_gen__Statements_10, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_13, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_15);
    }
#line 546 "ml_code_gen.m"
    {
#line 546 "ml_code_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_15, ml_backend__ml_code_gen__STATE_VARIABLE_Info_14);
    }
#line 543 "ml_code_gen.m"
  }
#line 478 "ml_code_gen.m"
}

#line 468 "ml_code_gen.m"
void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(
#line 468 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__CodeModel_6,
#line 468 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__Goal_7,
#line 468 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__Statement_8,
#line 468 "ml_code_gen.m"
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_15,
#line 468 "ml_code_gen.m"
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_16)
#line 468 "ml_code_gen.m"
{
#line 537 "ml_code_gen.m"
  {
#line 537 "ml_code_gen.m"
    MR_bool ml_backend__ml_code_gen__succeeded;
#line 537 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Decls_10;
#line 537 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Statements_11;
#line 537 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__GoalInfo_13;
#line 537 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__Context_14;
#line 539 "ml_code_gen.m"
    MR_Word ml_backend__ml_code_gen__V_12_12;

#line 538 "ml_code_gen.m"
    {
#line 538 "ml_code_gen.m"
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_6, ml_backend__ml_code_gen__Goal_7, &ml_backend__ml_code_gen__Decls_10, &ml_backend__ml_code_gen__Statements_11, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_15, ml_backend__ml_code_gen__STATE_VARIABLE_Info_16);
    }
#line 539 "ml_code_gen.m"
    ml_backend__ml_code_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 0)));
#line 539 "ml_code_gen.m"
    ml_backend__ml_code_gen__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 1)));
#line 540 "ml_code_gen.m"
    {
#line 540 "ml_code_gen.m"
      ml_backend__ml_code_gen__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
#line 541 "ml_code_gen.m"
    {
#line 541 "ml_code_gen.m"
      *ml_backend__ml_code_gen__Statement_8 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_code_gen__Decls_10, ml_backend__ml_code_gen__Statements_11, ml_backend__ml_code_gen__Context_14);
    }
#line 537 "ml_code_gen.m"
  }
#line 468 "ml_code_gen.m"
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
