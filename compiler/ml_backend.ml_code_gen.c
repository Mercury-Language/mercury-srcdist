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
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
  MR_Word ml_backend__ml_code_gen__CallCodeModel_36);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_2(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_1(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0(
  MR_Word ml_backend__ml_code_gen__Conjuncts_8,
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
  MR_Word ml_backend__ml_code_gen__Context_10,
  MR_Word * ml_backend__ml_code_gen__Decls_11,
  MR_Word * ml_backend__ml_code_gen__Statements_12,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_7_p_0(
  MR_Word ml_backend__ml_code_gen__Cond_8,
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
  MR_Word ml_backend__ml_code_gen__Context_10,
  MR_Word * ml_backend__ml_code_gen__Decls_11,
  MR_Word * ml_backend__ml_code_gen__Statements_12,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_ite_9_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
  MR_Word ml_backend__ml_code_gen__Cond_11,
  MR_Word ml_backend__ml_code_gen__Then_12,
  MR_Word ml_backend__ml_code_gen__Else_13,
  MR_Word ml_backend__ml_code_gen__Context_14,
  MR_Word * ml_backend__ml_code_gen__Decls_15,
  MR_Word * ml_backend__ml_code_gen__Statements_16,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);

static void MR_CALL 
ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3);

static void MR_CALL 
ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3);

static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(
  MR_Word ml_backend__ml_code_gen__GoalExpr_3,
  MR_Word * ml_backend__ml_code_gen__SubGoalNonLocals_4);

static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0_1(
  MR_Box ml_backend__ml_code_gen__closure_arg);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0(
  MR_Word ml_backend__ml_code_gen__GoalExpr_9,
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
  MR_Word ml_backend__ml_code_gen__Context_11,
  MR_Word ml_backend__ml_code_gen__GoalInfo_12,
  MR_Word * ml_backend__ml_code_gen__Decls_13,
  MR_Word * ml_backend__ml_code_gen__Statements_14,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);


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



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
  MR_Word ml_backend__ml_code_gen__CallCodeModel_36)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded = (ml_backend__ml_code_gen__CodeModel_10 == ml_backend__ml_code_gen__CallCodeModel_36);

    return ml_backend__ml_code_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_2(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
    MR_Word ml_backend__ml_code_gen__conv5_Decls_11;
    MR_Word ml_backend__ml_code_gen__conv4_Statements_12;
    MR_Word ml_backend__ml_code_gen__conv3_STATE_VARIABLE_Info_27;

    {
      ml_backend__ml_code_gen__ml_gen_conj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 5))), &ml_backend__ml_code_gen__conv5_Decls_11, &ml_backend__ml_code_gen__conv4_Statements_12, ((MR_Word) ml_backend__ml_code_gen__wrapper_arg_3), &ml_backend__ml_code_gen__conv3_STATE_VARIABLE_Info_27);
    }
    *ml_backend__ml_code_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_code_gen__conv5_Decls_11));
    *ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv4_Statements_12));
    *ml_backend__ml_code_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_code_gen__conv3_STATE_VARIABLE_Info_27));
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0_1(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
    MR_Word ml_backend__ml_code_gen__conv2_Decls_9;
    MR_Word ml_backend__ml_code_gen__conv1_Statements_10;
    MR_Word ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_24;

    {
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))), &ml_backend__ml_code_gen__conv2_Decls_9, &ml_backend__ml_code_gen__conv1_Statements_10, ((MR_Word) ml_backend__ml_code_gen__wrapper_arg_3), &ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_24);
    }
    *ml_backend__ml_code_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_code_gen__conv2_Decls_9));
    *ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv1_Statements_10));
    *ml_backend__ml_code_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_24));
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_7_p_0(
  MR_Word ml_backend__ml_code_gen__Conjuncts_8,
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
  MR_Word ml_backend__ml_code_gen__Context_10,
  MR_Word * ml_backend__ml_code_gen__Decls_11,
  MR_Word * ml_backend__ml_code_gen__Statements_12,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_27)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;

    if ((ml_backend__ml_code_gen__Conjuncts_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_code_gen__CodeModel_9, ml_backend__ml_code_gen__Context_10, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
        }
        *ml_backend__ml_code_gen__Decls_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ml_backend__ml_code_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Conjuncts_8, (MR_Integer) 1)));
        MR_Word ml_backend__ml_code_gen__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Conjuncts_8, (MR_Integer) 0)));

        if ((ml_backend__ml_code_gen__Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_9, ml_backend__ml_code_gen__Var_44, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
          }
        else
          {
            MR_Word ml_backend__ml_code_gen__FirstGoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_44, (MR_Integer) 1)));
            MR_Word ml_backend__ml_code_gen__FirstDeterminism_21;
            MR_Word ml_backend__ml_code_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_44, (MR_Integer) 0)));
            MR_Word ml_backend__ml_code_gen__Var_42;
            MR_Word ml_backend__ml_code_gen__Var_22;

            {
              ml_backend__ml_code_gen__FirstDeterminism_21 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ml_backend__ml_code_gen__FirstGoalInfo_20);
            }
            {
              parse_tree__prog_data__determinism_components_3_p_0(ml_backend__ml_code_gen__FirstDeterminism_21, &ml_backend__ml_code_gen__Var_22, &ml_backend__ml_code_gen__Var_42);
            }
            ml_backend__ml_code_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_code_gen__Var_42);
            if (ml_backend__ml_code_gen__succeeded)
              {
                ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_9, ml_backend__ml_code_gen__Var_44, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
              }
            else
              {
                MR_Word ml_backend__ml_code_gen__FirstCodeModel_23;
                MR_Word ml_backend__ml_code_gen__DoGenFirst_24;
                MR_Word ml_backend__ml_code_gen__DoGenRest_25;

                {
                  hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_gen__FirstDeterminism_21, &ml_backend__ml_code_gen__FirstCodeModel_23);
                }
                {
                  ml_backend__ml_code_gen__DoGenFirst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_7_p_0_1));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 3) = ((MR_Box) (ml_backend__ml_code_gen__FirstCodeModel_23));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_24, 4) = ((MR_Box) (ml_backend__ml_code_gen__Var_44));
                }
                {
                  ml_backend__ml_code_gen__DoGenRest_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_7_p_0_2));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 3) = ((MR_Box) (ml_backend__ml_code_gen__Var_43));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 4) = ((MR_Box) (ml_backend__ml_code_gen__CodeModel_9));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_25, 5) = ((MR_Box) (ml_backend__ml_code_gen__Context_10));
                }
                {
                  ml_backend__ml_code_util__ml_combine_conj_8_p_0(ml_backend__ml_code_gen__FirstCodeModel_23, ml_backend__ml_code_gen__Context_10, ml_backend__ml_code_gen__DoGenFirst_24, ml_backend__ml_code_gen__DoGenRest_25, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
                }
              }
          }
      }
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_7_p_0(
  MR_Word ml_backend__ml_code_gen__Cond_8,
  MR_Word ml_backend__ml_code_gen__CodeModel_9,
  MR_Word ml_backend__ml_code_gen__Context_10,
  MR_Word * ml_backend__ml_code_gen__Decls_11,
  MR_Word * ml_backend__ml_code_gen__Statements_12,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_23)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;
    MR_Word ml_backend__ml_code_gen__CondGoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_code_gen__CondCodeModel_16;
    MR_Word ml_backend__ml_code_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_8, (MR_Integer) 0)));

    {
      ml_backend__ml_code_gen__CondCodeModel_16 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__CondGoalInfo_15);
    }
    switch (ml_backend__ml_code_gen__CodeModel_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_56;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_57;

          {
            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__InitConstVarMap_56);
          }
          {
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_8, ml_backend__ml_code_gen__Decls_11, ml_backend__ml_code_gen__Statements_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_57);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_56, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_57, ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_negation\'/7", (MR_String) "nondet negation");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        switch (ml_backend__ml_code_gen__CondCodeModel_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_code_gen__CondStatements_18;
              MR_Word ml_backend__ml_code_gen__SetSuccessFalse_19;
              MR_Word ml_backend__ml_code_gen__Var_41;
              MR_Word ml_backend__ml_code_gen__InitConstVarMap_66;
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_67;

              {
                ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__InitConstVarMap_66);
              }
              {
                ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 0, ml_backend__ml_code_gen__Cond_8, ml_backend__ml_code_gen__Decls_11, &ml_backend__ml_code_gen__CondStatements_18, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_67);
              }
              {
                ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_66, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_67, ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);
              }
              {
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_code_gen__STATE_VARIABLE_Info_23, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[2]), ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__SetSuccessFalse_19);
              }
              {
                ml_backend__ml_code_gen__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_41, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetSuccessFalse_19));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                *ml_backend__ml_code_gen__Statements_12 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__CondStatements_18, ml_backend__ml_code_gen__Var_41);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_negation\'/7", (MR_String) "nondet cond");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_code_gen__Succeeded_20;
              MR_Word ml_backend__ml_code_gen__InvertSuccess_21;
              MR_Word ml_backend__ml_code_gen__Var_32;
              MR_Word ml_backend__ml_code_gen__Var_35;
              MR_Word ml_backend__ml_code_gen__CondStatements_46;
              MR_Word ml_backend__ml_code_gen__InitConstVarMap_76;
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_77;

              {
                ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__InitConstVarMap_76);
              }
              {
                ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_8, ml_backend__ml_code_gen__Decls_11, &ml_backend__ml_code_gen__CondStatements_46, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_77);
              }
              {
                ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_76, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_77, ml_backend__ml_code_gen__STATE_VARIABLE_Info_23);
              }
              {
                ml_backend__ml_code_util__ml_gen_test_success_2_p_0(*ml_backend__ml_code_gen__STATE_VARIABLE_Info_23, &ml_backend__ml_code_gen__Succeeded_20);
              }
              {
                ml_backend__ml_code_gen__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_4[0])));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_32, 2) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_20));
              }
              {
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_code_gen__STATE_VARIABLE_Info_23, ml_backend__ml_code_gen__Var_32, ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__InvertSuccess_21);
              }
              {
                ml_backend__ml_code_gen__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_35, 0) = ((MR_Box) (ml_backend__ml_code_gen__InvertSuccess_21));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                *ml_backend__ml_code_gen__Statements_12 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__CondStatements_46, ml_backend__ml_code_gen__Var_35);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_ite_9_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
  MR_Word ml_backend__ml_code_gen__Cond_11,
  MR_Word ml_backend__ml_code_gen__Then_12,
  MR_Word ml_backend__ml_code_gen__Else_13,
  MR_Word ml_backend__ml_code_gen__Context_14,
  MR_Word * ml_backend__ml_code_gen__Decls_15,
  MR_Word * ml_backend__ml_code_gen__Statements_16,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_46)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;
    MR_Word ml_backend__ml_code_gen__CondGoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_code_gen__CondCodeModel_20;
    MR_Word ml_backend__ml_code_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_11, (MR_Integer) 0)));

    {
      ml_backend__ml_code_gen__CondCodeModel_20 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__CondGoalInfo_19);
    }
    switch (ml_backend__ml_code_gen__CondCodeModel_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_gen__CondStatement_21;
          MR_Word ml_backend__ml_code_gen__ThenStatement_22;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_91_91;
          MR_Word ml_backend__ml_code_gen__Var_93;

          {
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, ml_backend__ml_code_gen__Cond_11, &ml_backend__ml_code_gen__CondStatement_21, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_91_91);
          }
          {
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Then_12, &ml_backend__ml_code_gen__ThenStatement_22, ml_backend__ml_code_gen__STATE_VARIABLE_Info_91_91, ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);
          }
          *ml_backend__ml_code_gen__Decls_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ml_backend__ml_code_gen__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_93, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenStatement_22));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_code_gen__Statements_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_gen__CondStatement_21));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_93));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_code_gen__CondVar_30;
          MR_Word ml_backend__ml_code_gen__MLDS_Context_31;
          MR_Word ml_backend__ml_code_gen__CondVarDecl_32;
          MR_Word ml_backend__ml_code_gen__SetCondFalse_33;
          MR_Integer ml_backend__ml_code_gen__ThenFuncLabel_34;
          MR_Word ml_backend__ml_code_gen__ThenFuncLabelRval_35;
          MR_Word ml_backend__ml_code_gen__EnvPtrRval_36;
          MR_Word ml_backend__ml_code_gen__SuccessCont_37;
          MR_Word ml_backend__ml_code_gen__ThenGoalInfo_39;
          MR_Word ml_backend__ml_code_gen__ThenContext_40;
          MR_Word ml_backend__ml_code_gen__SetCondTrue_41;
          MR_Word ml_backend__ml_code_gen__ThenFuncBody_42;
          MR_Word ml_backend__ml_code_gen__ThenFunc_43;
          MR_Word ml_backend__ml_code_gen__CondSucceeded_44;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_54_54;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_56_56;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60;
          MR_Word ml_backend__ml_code_gen__Var_61;
          MR_Word ml_backend__ml_code_gen__Var_63;
          MR_Word ml_backend__ml_code_gen__Var_64;
          MR_Word ml_backend__ml_code_gen__Var_66;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68;
          MR_Word ml_backend__ml_code_gen__Var_70;
          MR_Word ml_backend__ml_code_gen__Var_74;
          MR_Word ml_backend__ml_code_gen__Var_75;
          MR_Word ml_backend__ml_code_gen__Var_77;
          MR_Word ml_backend__ml_code_gen__Var_78;
          MR_Word ml_backend__ml_code_gen__ThenStatement_96;
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_97;
          MR_Word ml_backend__ml_code_gen__CondDecls_98;
          MR_Word ml_backend__ml_code_gen__CondStatements_99;
          MR_Word ml_backend__ml_code_gen__ElseStatement_100;
          MR_Word ml_backend__ml_code_gen__IfStmt_101;
          MR_Word ml_backend__ml_code_gen__IfStatement_102;
          MR_Word ml_backend__ml_code_gen__Var_38;

          {
            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__InitConstVarMap_97);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_p_0(&ml_backend__ml_code_gen__CondVar_30, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47);
          }
          {
            ml_backend__ml_code_gen__MLDS_Context_31 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__Context_14);
          }
          {
            ml_backend__ml_code_gen__CondVarDecl_32 = ml_backend__ml_code_util__ml_gen_cond_var_decl_2_f_0(ml_backend__ml_code_gen__CondVar_30, ml_backend__ml_code_gen__MLDS_Context_31);
          }
          {
            ml_backend__ml_code_util__ml_gen_set_cond_var_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_code_gen__CondVar_30, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[2]), ml_backend__ml_code_gen__Context_14, &ml_backend__ml_code_gen__SetCondFalse_33);
          }
          {
            ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_gen__ThenFuncLabel_34, &ml_backend__ml_code_gen__ThenFuncLabelRval_35, ml_backend__ml_code_gen__STATE_VARIABLE_Info_47_47, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51);
          }
          {
            ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51, &ml_backend__ml_code_gen__EnvPtrRval_36);
          }
          {
            ml_backend__ml_code_gen__SuccessCont_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenFuncLabelRval_35));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 1) = ((MR_Box) (ml_backend__ml_code_gen__EnvPtrRval_36));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_code_gen__SuccessCont_37, ml_backend__ml_code_gen__STATE_VARIABLE_Info_51_51, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_54_54);
          }
          {
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 2, ml_backend__ml_code_gen__Cond_11, &ml_backend__ml_code_gen__CondDecls_98, &ml_backend__ml_code_gen__CondStatements_99, ml_backend__ml_code_gen__STATE_VARIABLE_Info_54_54, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_56_56);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_56_56, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57);
          }
          ml_backend__ml_code_gen__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Then_12, (MR_Integer) 0)));
          ml_backend__ml_code_gen__ThenGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Then_12, (MR_Integer) 1)));
          {
            ml_backend__ml_code_gen__ThenContext_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__ThenGoalInfo_39);
          }
          {
            ml_backend__ml_code_util__ml_gen_set_cond_var_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57, ml_backend__ml_code_gen__CondVar_30, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[1]), ml_backend__ml_code_gen__ThenContext_40, &ml_backend__ml_code_gen__SetCondTrue_41);
          }
          {
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Then_12, &ml_backend__ml_code_gen__ThenStatement_96, ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60);
          }
          {
            ml_backend__ml_code_gen__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_64, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenStatement_96));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_code_gen__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_63, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetCondTrue_41));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_63, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_64));
          }
          {
            ml_backend__ml_code_gen__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_61, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_63));
          }
          {
            ml_backend__ml_code_gen__Var_66 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__ThenContext_40);
          }
          {
            ml_backend__ml_code_gen__ThenFuncBody_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__ThenFuncBody_42, 0) = ((MR_Box) (ml_backend__ml_code_gen__Var_61));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__ThenFuncBody_42, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_66));
          }
          {
            ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60, ml_backend__ml_code_gen__ThenFuncLabel_34, ml_backend__ml_code_gen__ThenContext_40, ml_backend__ml_code_gen__ThenFuncBody_42, &ml_backend__ml_code_gen__ThenFunc_43);
          }
          {
            ml_backend__ml_code_util__ml_gen_test_cond_var_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60, ml_backend__ml_code_gen__CondVar_30, &ml_backend__ml_code_gen__CondSucceeded_44);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_97, ml_backend__ml_code_gen__STATE_VARIABLE_Info_60_60, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67);
          }
          {
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Else_13, &ml_backend__ml_code_gen__ElseStatement_100, ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_97, ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68, ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);
          }
          {
            ml_backend__ml_code_gen__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_4[0])));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_70, 2) = ((MR_Box) (ml_backend__ml_code_gen__CondSucceeded_44));
          }
          {
            ml_backend__ml_code_gen__IfStmt_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 0) = ((MR_Box) (ml_backend__ml_code_gen__Var_70));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 1) = ((MR_Box) (ml_backend__ml_code_gen__ElseStatement_100));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_code_gen__IfStatement_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_102, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_101));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_102, 1) = ((MR_Box) (ml_backend__ml_code_gen__MLDS_Context_31));
          }
          {
            ml_backend__ml_code_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_74, 0) = ((MR_Box) (ml_backend__ml_code_gen__CondVarDecl_32));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_74, 1) = ((MR_Box) (ml_backend__ml_code_gen__CondDecls_98));
          }
          {
            ml_backend__ml_code_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_75, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenFunc_43));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            *ml_backend__ml_code_gen__Decls_15 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_gen__Var_74, ml_backend__ml_code_gen__Var_75);
          }
          {
            ml_backend__ml_code_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_77, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetCondFalse_33));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_77, 1) = ((MR_Box) (ml_backend__ml_code_gen__CondStatements_99));
          }
          {
            ml_backend__ml_code_gen__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_78, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStatement_102));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            *ml_backend__ml_code_gen__Statements_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__Var_77, ml_backend__ml_code_gen__Var_78);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_23;
          MR_Word ml_backend__ml_code_gen__CondStatements_25;
          MR_Word ml_backend__ml_code_gen__Succeeded_26;
          MR_Word ml_backend__ml_code_gen__ElseStatement_27;
          MR_Word ml_backend__ml_code_gen__IfStmt_28;
          MR_Word ml_backend__ml_code_gen__IfStatement_29;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84;
          MR_Word ml_backend__ml_code_gen__Var_86;
          MR_Word ml_backend__ml_code_gen__Var_87;
          MR_Word ml_backend__ml_code_gen__Var_88;
          MR_Word ml_backend__ml_code_gen__ThenStatement_95;

          {
            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__InitConstVarMap_23);
          }
          {
            ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_11, ml_backend__ml_code_gen__Decls_15, &ml_backend__ml_code_gen__CondStatements_25, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_45, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81);
          }
          {
            ml_backend__ml_code_util__ml_gen_test_success_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81, &ml_backend__ml_code_gen__Succeeded_26);
          }
          {
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Then_12, &ml_backend__ml_code_gen__ThenStatement_95, ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_23, ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83);
          }
          {
            ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Else_13, &ml_backend__ml_code_gen__ElseStatement_27, ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_23, ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_46);
          }
          {
            ml_backend__ml_code_gen__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_86, 0) = ((MR_Box) (ml_backend__ml_code_gen__ElseStatement_27));
          }
          {
            ml_backend__ml_code_gen__IfStmt_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_28, 0) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_26));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_28, 1) = ((MR_Box) (ml_backend__ml_code_gen__ThenStatement_95));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_28, 2) = ((MR_Box) (ml_backend__ml_code_gen__Var_86));
          }
          {
            ml_backend__ml_code_gen__Var_87 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__Context_14);
          }
          {
            ml_backend__ml_code_gen__IfStatement_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_29, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_28));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_29, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_87));
          }
          {
            ml_backend__ml_code_gen__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_88, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStatement_29));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            *ml_backend__ml_code_gen__Statements_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__CondStatements_25, ml_backend__ml_code_gen__Var_88);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_code_gen__succeeded;

        if ((ml_backend__ml_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2;
        else
          {
            MR_Word ml_backend__ml_code_gen__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_code_gen__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_code_gen__SubGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Case_7, (MR_Integer) 2)));
            MR_Word ml_backend__ml_code_gen__NonLocals_13;
            MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16;
            MR_Word ml_backend__ml_code_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Case_7, (MR_Integer) 0)));
            MR_Word ml_backend__ml_code_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Case_7, (MR_Integer) 1)));

            {
              ml_backend__ml_code_gen__NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_12);
            }
            {
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_13, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_code_gen__next_value_of_HeadVar__1_1 = ml_backend__ml_code_gen__Cases_8;
              MR_Word ml_backend__ml_code_gen__next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16;

              ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;
              ml_backend__ml_code_gen__HeadVar__1_1 = ml_backend__ml_code_gen__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_code_gen__succeeded;

        if ((ml_backend__ml_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2;
        else
          {
            MR_Word ml_backend__ml_code_gen__SubGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_code_gen__SubGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__ml_code_gen__NonLocals_10;
            MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13;

            {
              ml_backend__ml_code_gen__NonLocals_10 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_7);
            }
            {
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_10, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_code_gen__next_value_of_HeadVar__1_1 = ml_backend__ml_code_gen__SubGoals_8;
              MR_Word ml_backend__ml_code_gen__next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13;

              ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;
              ml_backend__ml_code_gen__HeadVar__1_1 = ml_backend__ml_code_gen__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_code_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
    MR_Word ml_backend__ml_code_gen__conv1_HeadVar__2_2;

    {
      ml_backend__ml_code_gen__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ml_backend__ml_code_gen__wrapper_arg_1));
    }
    ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv1_HeadVar__2_2));
    return ml_backend__ml_code_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_code_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
    MR_Word ml_backend__ml_code_gen__conv0_HeadVar__2_2;

    {
      ml_backend__ml_code_gen__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ml_backend__ml_code_gen__wrapper_arg_1));
    }
    ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv0_HeadVar__2_2));
    return ml_backend__ml_code_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(
  MR_Word ml_backend__ml_code_gen__GoalExpr_3,
  MR_Word * ml_backend__ml_code_gen__SubGoalNonLocals_4)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_gen__SubGoal_48 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_gen__GoalExpr_3), (MR_Integer) 0);

          {
            *ml_backend__ml_code_gen__SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_48);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_gen__Unification_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
          MR_Word ml_backend__ml_code_gen___LHS_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 0)));
          MR_Word ml_backend__ml_code_gen___RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
          MR_Word ml_backend__ml_code_gen___Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
          MR_Word ml_backend__ml_code_gen___UnifyContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) ml_backend__ml_code_gen__Unification_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_code_gen__LHSVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)));
                MR_Word ml_backend__ml_code_gen__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 2)));
                MR_Word ml_backend__ml_code_gen__Var_84;
                MR_Word ml_backend__ml_code_gen___ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
                MR_Word ml_backend__ml_code_gen___ArgModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 3)));
                MR_Word ml_backend__ml_code_gen___HowToConstruct_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 4)));
                MR_Word ml_backend__ml_code_gen___Unique_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 5)));
                MR_Word ml_backend__ml_code_gen___SubInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 6)));

                {
                  ml_backend__ml_code_gen__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_84, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_10));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_84, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_12));
                }
                {
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_84);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_code_gen__Var_83;
                MR_Word ml_backend__ml_code_gen__LHSVar_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)));
                MR_Word ml_backend__ml_code_gen__ArgVars_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 2)));
                MR_Word ml_backend__ml_code_gen___CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 4)));
                MR_Word ml_backend__ml_code_gen___CanCGC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 5)));
                MR_Word ml_backend__ml_code_gen___ConsId_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
                MR_Word ml_backend__ml_code_gen___ArgModes_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 3)));

                {
                  ml_backend__ml_code_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_83, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_87));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_83, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_89));
                }
                {
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_83);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__ml_code_gen__RHSVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
                MR_Word ml_backend__ml_code_gen__Var_80;
                MR_Word ml_backend__ml_code_gen__Var_81;
                MR_Word ml_backend__ml_code_gen__LHSVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)));

                {
                  ml_backend__ml_code_gen__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_81, 0) = ((MR_Box) (ml_backend__ml_code_gen__RHSVar_19));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ml_backend__ml_code_gen__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_80, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_91));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_80, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_81));
                }
                {
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_80);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_code_gen__Var_77;
                    MR_Word ml_backend__ml_code_gen__Var_78;
                    MR_Word ml_backend__ml_code_gen__LHSVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_code_gen__RHSVar_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Unification_8, (MR_Integer) 2)));

                    {
                      ml_backend__ml_code_gen__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_78, 0) = ((MR_Box) (ml_backend__ml_code_gen__RHSVar_93));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ml_backend__ml_code_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_77, 0) = ((MR_Box) (ml_backend__ml_code_gen__LHSVar_92));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_77, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_78));
                    }
                    {
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_77);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.goal_expr_find_subgoal_nonlocals\'/2", (MR_String) "complicated_unify");
                      return;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_code_gen__ArgVars_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
          MR_Word ml_backend__ml_code_gen___PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 0)));
          MR_Integer ml_backend__ml_code_gen___ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
          MR_Word ml_backend__ml_code_gen___Builtin_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
          MR_Word ml_backend__ml_code_gen___Unify_context_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
          MR_Word ml_backend__ml_code_gen___SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 5)));

          {
            *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_94);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_code_gen__GenericCall_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__ArgVars_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen___Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
              MR_Word ml_backend__ml_code_gen___MaybeArgRegs_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
              MR_Word ml_backend__ml_code_gen___Detism_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 5)));

              switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GenericCall_28)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_code_gen__HOVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_code_gen__Var_73;
                    MR_Word ml_backend__ml_code_gen___Purity_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_code_gen___Kind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 2)));
                    MR_Integer ml_backend__ml_code_gen___Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 3)));

                    {
                      ml_backend__ml_code_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_73, 0) = ((MR_Box) (ml_backend__ml_code_gen__HOVar_32));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_73, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_95));
                    }
                    {
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_73);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_code_gen__MethodVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_code_gen__Var_72;
                    MR_Integer ml_backend__ml_code_gen___MethodNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_code_gen___MethodClassId_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_code_gen___Name_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GenericCall_28, (MR_Integer) 3)));

                    {
                      ml_backend__ml_code_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_72, 0) = ((MR_Box) (ml_backend__ml_code_gen__MethodVar_36));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_72, 1) = ((MR_Box) (ml_backend__ml_code_gen__ArgVars_95));
                    }
                    {
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_72);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_95);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_95);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_code_gen__TypeCtorInfo_112_112 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
              MR_Word ml_backend__ml_code_gen__TypeInfo_113_113 = (MR_Word) &ml_backend__ml_code_gen_scalar_common_1[0];
              MR_Word ml_backend__ml_code_gen__Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
              MR_Word ml_backend__ml_code_gen__ExtraArgs_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 5)));
              MR_Word ml_backend__ml_code_gen__ExtraVars_47;
              MR_Word ml_backend__ml_code_gen__Var_71;
              MR_Word ml_backend__ml_code_gen__ArgVars_98;
              MR_Word ml_backend__ml_code_gen___Attr_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen___TraceCond_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 6)));
              MR_Word ml_backend__ml_code_gen___Impl_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 7)));
              MR_Word ml_backend__ml_code_gen___PredId_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
              MR_Integer ml_backend__ml_code_gen___ProcId_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));

              {
                ml_backend__ml_code_gen__ArgVars_98 = mercury__list__map_2_f_0(ml_backend__ml_code_gen__TypeCtorInfo_112_112, ml_backend__ml_code_gen__TypeInfo_113_113, (MR_Word) &ml_backend__ml_code_gen_scalar_common_3[0], ml_backend__ml_code_gen__Args_43);
              }
              {
                ml_backend__ml_code_gen__ExtraVars_47 = mercury__list__map_2_f_0(ml_backend__ml_code_gen__TypeCtorInfo_112_112, ml_backend__ml_code_gen__TypeInfo_113_113, (MR_Word) &ml_backend__ml_code_gen_scalar_common_3[1], ml_backend__ml_code_gen__ExtraArgs_44);
              }
              {
                ml_backend__ml_code_gen__Var_71 = mercury__list__f_43_43_2_f_0(ml_backend__ml_code_gen__TypeInfo_113_113, ml_backend__ml_code_gen__ExtraVars_47, ml_backend__ml_code_gen__ArgVars_98);
              }
              {
                *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_71);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_code_gen__SubGoals_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen__Var_68;
              MR_Word ml_backend__ml_code_gen__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));

              {
                ml_backend__ml_code_gen__Var_68 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
              {
                ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__SubGoals_51, ml_backend__ml_code_gen__Var_68, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_code_gen__SubGoals_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__Var_123;

              {
                ml_backend__ml_code_gen__Var_123 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
              {
                ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__SubGoals_122, ml_backend__ml_code_gen__Var_123, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_code_gen__Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
              MR_Word ml_backend__ml_code_gen__Var_62;
              MR_Word ml_backend__ml_code_gen___Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen___CanFail_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));

              {
                ml_backend__ml_code_gen__Var_62 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
              {
                ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__Cases_57, ml_backend__ml_code_gen__Var_62, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_code_gen__SubGoal_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen___Reason_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));

              {
                *ml_backend__ml_code_gen__SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_125);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_code_gen__Cond_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen__Then_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
              MR_Word ml_backend__ml_code_gen__Else_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 4)));
              MR_Word ml_backend__ml_code_gen__Var_63;
              MR_Word ml_backend__ml_code_gen__Var_64;
              MR_Word ml_backend__ml_code_gen__Var_65;
              MR_Word ml_backend__ml_code_gen__Var_66;
              MR_Word ml_backend__ml_code_gen__SubGoal_129;
              MR_Word ml_backend__ml_code_gen__SubGoals_130;
              MR_Word ml_backend__ml_code_gen__NonLocals_132;
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135;
              MR_Word ml_backend__ml_code_gen__SubGoal_141;
              MR_Word ml_backend__ml_code_gen__SubGoals_142;
              MR_Word ml_backend__ml_code_gen__NonLocals_144;
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147;
              MR_Word ml_backend__ml_code_gen__SubGoal_153;
              MR_Word ml_backend__ml_code_gen__NonLocals_156;
              MR_Word ml_backend__ml_code_gen___Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__SubGoals_154;

              {
                ml_backend__ml_code_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_66, 0) = ((MR_Box) (ml_backend__ml_code_gen__Else_55));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ml_backend__ml_code_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_65, 0) = ((MR_Box) (ml_backend__ml_code_gen__Then_54));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_65, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_66));
              }
              {
                ml_backend__ml_code_gen__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_63, 0) = ((MR_Box) (ml_backend__ml_code_gen__Cond_53));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_63, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_65));
              }
              {
                ml_backend__ml_code_gen__Var_64 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
              ml_backend__ml_code_gen__SubGoal_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_63, (MR_Integer) 0)));
              ml_backend__ml_code_gen__SubGoals_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_63, (MR_Integer) 1)));
              {
                ml_backend__ml_code_gen__NonLocals_132 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_129);
              }
              {
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_132, ml_backend__ml_code_gen__Var_64, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135);
              }
              ml_backend__ml_code_gen__SubGoal_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_130, (MR_Integer) 0)));
              ml_backend__ml_code_gen__SubGoals_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_130, (MR_Integer) 1)));
              {
                ml_backend__ml_code_gen__NonLocals_144 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_141);
              }
              {
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_144, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147);
              }
              ml_backend__ml_code_gen__SubGoal_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_142, (MR_Integer) 0)));
              ml_backend__ml_code_gen__SubGoals_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_142, (MR_Integer) 1)));
              {
                ml_backend__ml_code_gen__NonLocals_156 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_153);
              }
              {
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_156, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147, ml_backend__ml_code_gen__SubGoalNonLocals_4);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.goal_expr_find_subgoal_nonlocals\'/2", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0_1(
  MR_Box ml_backend__ml_code_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;

    {
      ml_backend__ml_code_gen__succeeded = ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_code_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0(
  MR_Word ml_backend__ml_code_gen__GoalExpr_9,
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
  MR_Word ml_backend__ml_code_gen__Context_11,
  MR_Word ml_backend__ml_code_gen__GoalInfo_12,
  MR_Word * ml_backend__ml_code_gen__Decls_13,
  MR_Word * ml_backend__ml_code_gen__Statements_14,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_85)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GoalExpr_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_gen__SubGoal_55 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_gen__GoalExpr_9), (MR_Integer) 0);

          {
            ml_backend__ml_code_gen__ml_gen_negation_7_p_0(ml_backend__ml_code_gen__SubGoal_55, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_gen__Unification_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
          MR_Word ml_backend__ml_code_gen___LHS_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 0)));
          MR_Word ml_backend__ml_code_gen___RHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
          MR_Word ml_backend__ml_code_gen___Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
          MR_Word ml_backend__ml_code_gen___UnifyContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));

          {
            ml_backend__ml_unify_gen__ml_gen_unification_6_p_0(ml_backend__ml_code_gen__Unification_19, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
          }
          *ml_backend__ml_code_gen__Decls_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_code_gen__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 0)));
          MR_Integer ml_backend__ml_code_gen__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
          MR_Word ml_backend__ml_code_gen__ArgVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
          MR_Word ml_backend__ml_code_gen__BuiltinState_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
          MR_Word ml_backend__ml_code_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));
          MR_Word ml_backend__ml_code_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 5)));

          switch (ml_backend__ml_code_gen__BuiltinState_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_call_gen__ml_gen_builtin_9_p_0(ml_backend__ml_code_gen__PredId_21, ml_backend__ml_code_gen__ProcId_22, ml_backend__ml_code_gen__ArgVars_23, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_code_gen__ArgLvals_27;
                MR_Word ml_backend__ml_code_gen__VarSet_28;
                MR_Word ml_backend__ml_code_gen__ArgNames_29;
                MR_Word ml_backend__ml_code_gen__ActualArgTypes_30;

                {
                  ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__ArgVars_23, &ml_backend__ml_code_gen__ArgLvals_27);
                }
                {
                  ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, &ml_backend__ml_code_gen__VarSet_28);
                }
                {
                  ml_backend__ml_code_gen__ArgNames_29 = ml_backend__ml_code_util__ml_gen_var_names_2_f_0(ml_backend__ml_code_gen__VarSet_28, ml_backend__ml_code_gen__ArgVars_23);
                }
                {
                  ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__ArgVars_23, &ml_backend__ml_code_gen__ActualArgTypes_30);
                }
                {
                  ml_backend__ml_call_gen__ml_gen_call_12_p_0(ml_backend__ml_code_gen__PredId_21, ml_backend__ml_code_gen__ProcId_22, ml_backend__ml_code_gen__ArgNames_29, ml_backend__ml_code_gen__ArgLvals_27, ml_backend__ml_code_gen__ActualArgTypes_30, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, (MR_Integer) 0, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_code_gen__GenericCall_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__Vars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen__Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
              MR_Word ml_backend__ml_code_gen__Detism_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 5)));
              MR_Word ml_backend__ml_code_gen__CallCodeModel_36;
              MR_Word ml_backend__ml_code_gen__Var_110;
              MR_Word ml_backend__ml_code_gen__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));

              {
                hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_gen__Detism_35, &ml_backend__ml_code_gen__CallCodeModel_36);
              }
              {
                ml_backend__ml_code_gen__Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_110, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_110, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_110, 3) = ((MR_Box) (ml_backend__ml_code_gen__CodeModel_10));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_110, 4) = ((MR_Box) (ml_backend__ml_code_gen__CallCodeModel_36));
              }
              {
                mercury__require__expect_4_p_0(ml_backend__ml_code_gen__Var_110, (MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/8", (MR_String) "code model mismatch");
              }
              {
                ml_backend__ml_call_gen__ml_gen_generic_call_9_p_0(ml_backend__ml_code_gen__GenericCall_31, ml_backend__ml_code_gen__Vars_32, ml_backend__ml_code_gen__Modes_33, ml_backend__ml_code_gen__Detism_35, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_code_gen__Attributes_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));
              MR_Word ml_backend__ml_code_gen__ExtraArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 5)));
              MR_Word ml_backend__ml_code_gen__MaybeTraceRuntimeCond_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 6)));
              MR_Word ml_backend__ml_code_gen__PragmaImpl_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 7)));
              MR_String ml_backend__ml_code_gen__ForeignCode_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__PragmaImpl_41, (MR_Integer) 0)));
              MR_Word ml_backend__ml_code_gen__MaybeContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__PragmaImpl_41, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__ContextToUse_44;
              MR_Word ml_backend__ml_code_gen__PredId_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
              MR_Integer ml_backend__ml_code_gen__ProcId_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));

              if ((ml_backend__ml_code_gen__MaybeContext_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ml_backend__ml_code_gen__ContextToUse_44 = ml_backend__ml_code_gen__Context_11;
              else
                ml_backend__ml_code_gen__ContextToUse_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__MaybeContext_43, (MR_Integer) 0)));
              if ((ml_backend__ml_code_gen__MaybeTraceRuntimeCond_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Attributes_37, ml_backend__ml_code_gen__PredId_119, ml_backend__ml_code_gen__ProcId_120, ml_backend__ml_code_gen__Args_38, ml_backend__ml_code_gen__ExtraArgs_39, ml_backend__ml_code_gen__ForeignCode_42, ml_backend__ml_code_gen__ContextToUse_44, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                }
              else
                {
                  MR_Word ml_backend__ml_code_gen__TraceRuntimeCond_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__MaybeTraceRuntimeCond_40, (MR_Integer) 0)));

                  {
                    ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_p_0(ml_backend__ml_code_gen__TraceRuntimeCond_45, ml_backend__ml_code_gen__ContextToUse_44, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_code_gen__Goals_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen___ConjType_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));

              {
                ml_backend__ml_code_gen__ml_gen_conj_7_p_0(ml_backend__ml_code_gen__Goals_47, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_code_gen__Goals_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));

              {
                ml_backend__ml_disj_gen__ml_gen_disj_7_p_0(ml_backend__ml_code_gen__Goals_121, ml_backend__ml_code_gen__GoalInfo_12, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
              }
              *ml_backend__ml_code_gen__Decls_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_code_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__CanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen__CasesList_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));

              {
                ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(ml_backend__ml_code_gen__Var_48, ml_backend__ml_code_gen__CanFail_49, ml_backend__ml_code_gen__CasesList_50, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__GoalInfo_12, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_code_gen__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__SubGoal_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) ml_backend__ml_code_gen__Reason_56)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    ml_backend__ml_commit_gen__ml_gen_commit_7_p_0(ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_code_gen__HeadWarning_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_code_gen__TailWarnings_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_code_gen__Warnings0_72;
                    MR_Word ml_backend__ml_code_gen__Warnings_73;
                    MR_Word ml_backend__ml_code_gen__Var_94;
                    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_95_95;
                    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_96_96;

                    {
                      ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, &ml_backend__ml_code_gen__Warnings0_72);
                    }
                    {
                      ml_backend__ml_code_gen__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_94, 0) = ((MR_Box) (ml_backend__ml_code_gen__HeadWarning_70));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_94, 1) = ((MR_Box) (ml_backend__ml_code_gen__TailWarnings_71));
                    }
                    {
                      mercury__set__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, ml_backend__ml_code_gen__Var_94, ml_backend__ml_code_gen__Warnings0_72, &ml_backend__ml_code_gen__Warnings_73);
                    }
                    {
                      ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(ml_backend__ml_code_gen__Warnings_73, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_95_95);
                    }
                    {
                      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_95_95, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_96_96);
                    }
                    {
                      ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(ml_backend__ml_code_gen__Warnings0_72, ml_backend__ml_code_gen__STATE_VARIABLE_Info_96_96, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                      }
                      break;
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      {
                        ml_backend__ml_commit_gen__ml_gen_commit_7_p_0(ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word ml_backend__ml_code_gen__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_code_gen__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_56, (MR_Integer) 1)));

                        switch (ml_backend__ml_code_gen__Var_125) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              {
                                ml_backend__ml_unify_gen__ml_gen_ground_term_5_p_0(ml_backend__ml_code_gen__Var_126, ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                              }
                              *ml_backend__ml_code_gen__Decls_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "unexpected from_ground_term_initial");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__SubGoal_122, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "loop_control NYI");
                          return;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_code_gen__Cond_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen__Then_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 3)));
              MR_Word ml_backend__ml_code_gen__Else_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 4)));
              MR_Word ml_backend__ml_code_gen___Vars_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_9, (MR_Integer) 1)));

              {
                ml_backend__ml_code_gen__ml_gen_ite_9_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Cond_52, ml_backend__ml_code_gen__Then_53, ml_backend__ml_code_gen__Else_54, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Decls_13, ml_backend__ml_code_gen__Statements_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_85);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "unexpected shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_code_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_code_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_code_gen__HeadVar__4_4,
  MR_Word * ml_backend__ml_code_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_code_gen__succeeded;

        if ((ml_backend__ml_code_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_code_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ml_backend__ml_code_gen__STATE_VARIABLE_Info_7 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6;
          }
        else
          {
            MR_Word ml_backend__ml_code_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word ml_backend__ml_code_gen__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word ml_backend__ml_code_gen__Type_21;
            MR_Word ml_backend__ml_code_gen__ModuleInfo_22;
            MR_Word ml_backend__ml_code_gen__IsDummy_23;

            {
              hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_code_gen__HeadVar__2_2, ml_backend__ml_code_gen__Var_17, &ml_backend__ml_code_gen__Type_21);
            }
            {
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_code_gen__ModuleInfo_22);
            }
            {
              ml_backend__ml_code_gen__IsDummy_23 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_gen__ModuleInfo_22, ml_backend__ml_code_gen__Type_21);
            }
            switch (ml_backend__ml_code_gen__IsDummy_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_code_gen__next_value_of_HeadVar__4_4 = ml_backend__ml_code_gen__Vars_18;

                    ml_backend__ml_code_gen__HeadVar__4_4 = ml_backend__ml_code_gen__next_value_of_HeadVar__4_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_code_gen__VarName_24;
                  MR_Word ml_backend__ml_code_gen__Defn_25;
                  MR_Word ml_backend__ml_code_gen__Defns0_26;
                  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29;

                  {
                    ml_backend__ml_code_gen__VarName_24 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_code_gen__HeadVar__1_1, ml_backend__ml_code_gen__Var_17);
                  }
                  {
                    ml_backend__ml_code_util__ml_gen_var_decl_6_p_0(ml_backend__ml_code_gen__VarName_24, ml_backend__ml_code_gen__Type_21, ml_backend__ml_code_gen__HeadVar__3_3, &ml_backend__ml_code_gen__Defn_25, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29);
                  }
                  {
                    ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_code_gen__HeadVar__1_1, ml_backend__ml_code_gen__HeadVar__2_2, ml_backend__ml_code_gen__HeadVar__3_3, ml_backend__ml_code_gen__Vars_18, &ml_backend__ml_code_gen__Defns0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29, ml_backend__ml_code_gen__STATE_VARIABLE_Info_7);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_code_gen__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_gen__Defn_25));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_gen__Defns0_26));
                  }
                }
                break;
            }
          }
      }
      break;
    }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(
  MR_Word ml_backend__ml_code_gen__OuterCodeModel_8,
  MR_Word ml_backend__ml_code_gen__InnerCodeModel_9,
  MR_Word ml_backend__ml_code_gen__Context_10,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_21)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;

    switch (ml_backend__ml_code_gen__OuterCodeModel_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (ml_backend__ml_code_gen__InnerCodeModel_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18;
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "nondet in det");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "semi in det");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (ml_backend__ml_code_gen__InnerCodeModel_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_code_gen__CallCont_14;
              MR_Word ml_backend__ml_code_gen__Var_30;

              {
                ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__CallCont_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, ml_backend__ml_code_gen__STATE_VARIABLE_Info_21);
              }
              {
                ml_backend__ml_code_gen__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_30, 0) = ((MR_Box) (ml_backend__ml_code_gen__CallCont_14));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18, ml_backend__ml_code_gen__Var_30);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18;
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_code_gen__Succeeded_15;
              MR_Word ml_backend__ml_code_gen__IfStmt_16;
              MR_Word ml_backend__ml_code_gen__IfStatement_17;
              MR_Word ml_backend__ml_code_gen__Var_24;
              MR_Word ml_backend__ml_code_gen__Var_26;
              MR_Word ml_backend__ml_code_gen__CallCont_46;

              {
                ml_backend__ml_code_util__ml_gen_test_success_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, &ml_backend__ml_code_gen__Succeeded_15);
              }
              {
                ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__CallCont_46, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, ml_backend__ml_code_gen__STATE_VARIABLE_Info_21);
              }
              {
                ml_backend__ml_code_gen__IfStmt_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 0) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_15));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 1) = ((MR_Box) (ml_backend__ml_code_gen__CallCont_46));
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ml_backend__ml_code_gen__Var_24 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_gen__Context_10);
              }
              {
                ml_backend__ml_code_gen__IfStatement_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_17, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_16));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__IfStatement_17, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_24));
              }
              {
                ml_backend__ml_code_gen__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_26, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStatement_17));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18, ml_backend__ml_code_gen__Var_26);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (ml_backend__ml_code_gen__InnerCodeModel_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_code_gen__SetSuccessTrue_13;
              MR_Word ml_backend__ml_code_gen__Var_35;

              {
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[1]), ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__SetSuccessTrue_13);
              }
              {
                ml_backend__ml_code_gen__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_35, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetSuccessTrue_13));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18, ml_backend__ml_code_gen__Var_35);
              }
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "nondet in semi");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__ml_code_gen__STATE_VARIABLE_Statements_19 = ml_backend__ml_code_gen__STATE_VARIABLE_Statements_0_18;
              *ml_backend__ml_code_gen__STATE_VARIABLE_Info_21 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_20;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_6_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_7,
  MR_Word ml_backend__ml_code_gen__Goal_8,
  MR_Word * ml_backend__ml_code_gen__Decls_9,
  MR_Word * ml_backend__ml_code_gen__Statements_10,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_24)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;
    MR_Word ml_backend__ml_code_gen__TypeCtorInfo_19_43;
    MR_Word ml_backend__ml_code_gen__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_code_gen__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_8, (MR_Integer) 1)));
    MR_Word ml_backend__ml_code_gen__Context_14;
    MR_Word ml_backend__ml_code_gen__VarTypes_15;
    MR_Word ml_backend__ml_code_gen__VarSet_17;
    MR_Word ml_backend__ml_code_gen__VarDecls_18;
    MR_Word ml_backend__ml_code_gen__GoalCodeModel_19;
    MR_Word ml_backend__ml_code_gen__GoalDecls_20;
    MR_Word ml_backend__ml_code_gen__GoalStatements0_21;
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25;
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_26_26;
    MR_Word ml_backend__ml_code_gen__SubGoalNonLocals_33;
    MR_Word ml_backend__ml_code_gen__NonLocals_34;
    MR_Word ml_backend__ml_code_gen__VarsToDeclareSet_35;
    MR_Word ml_backend__ml_code_gen__VarsToDeclare0_36;

    {
      ml_backend__ml_code_gen__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_gen__VarTypes_15);
    }
    {
      ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(ml_backend__ml_code_gen__GoalExpr_12, &ml_backend__ml_code_gen__SubGoalNonLocals_33);
    }
    {
      ml_backend__ml_code_gen__NonLocals_34 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
    ml_backend__ml_code_gen__TypeCtorInfo_19_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__difference_3_p_0(ml_backend__ml_code_gen__TypeCtorInfo_19_43, ml_backend__ml_code_gen__SubGoalNonLocals_33, ml_backend__ml_code_gen__NonLocals_34, &ml_backend__ml_code_gen__VarsToDeclareSet_35);
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_code_gen__TypeCtorInfo_19_43, ml_backend__ml_code_gen__VarsToDeclareSet_35, &ml_backend__ml_code_gen__VarsToDeclare0_36);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_gen__VarSet_17);
    }
    if ((ml_backend__ml_code_gen__VarsToDeclare0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_code_gen__VarDecls_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23;
      }
    else
      {
        MR_Word ml_backend__ml_code_gen__VarsToDeclare_16;
        MR_Word ml_backend__ml_code_gen__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__VarsToDeclare0_36, (MR_Integer) 1)));
        MR_Word ml_backend__ml_code_gen__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__VarsToDeclare0_36, (MR_Integer) 0)));

        if ((ml_backend__ml_code_gen__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_code_gen__VarsToDeclare_16 = ml_backend__ml_code_gen__VarsToDeclare0_36;
        else
          {
            ml_backend__ml_code_gen__VarsToDeclare_16 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(ml_backend__ml_code_gen__VarsToDeclare0_36, ml_backend__ml_code_gen__VarTypes_15);
          }
        {
          ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_code_gen__VarSet_17, ml_backend__ml_code_gen__VarTypes_15, ml_backend__ml_code_gen__Context_14, ml_backend__ml_code_gen__VarsToDeclare_16, &ml_backend__ml_code_gen__VarDecls_18, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25);
        }
      }
    {
      ml_backend__ml_code_gen__GoalCodeModel_19 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
    {
      ml_backend__ml_code_gen__ml_gen_goal_expr_8_p_0(ml_backend__ml_code_gen__GoalExpr_12, ml_backend__ml_code_gen__GoalCodeModel_19, ml_backend__ml_code_gen__Context_14, ml_backend__ml_code_gen__GoalInfo_13, &ml_backend__ml_code_gen__GoalDecls_20, &ml_backend__ml_code_gen__GoalStatements0_21, ml_backend__ml_code_gen__STATE_VARIABLE_Info_25_25, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_26_26);
    }
    {
      ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(ml_backend__ml_code_gen__CodeModel_7, ml_backend__ml_code_gen__GoalCodeModel_19, ml_backend__ml_code_gen__Context_14, ml_backend__ml_code_gen__GoalStatements0_21, ml_backend__ml_code_gen__Statements_10, ml_backend__ml_code_gen__STATE_VARIABLE_Info_26_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_24);
    }
    {
      *ml_backend__ml_code_gen__Decls_9 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_gen__VarDecls_18, ml_backend__ml_code_gen__GoalDecls_20);
    }
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_6,
  MR_Word ml_backend__ml_code_gen__Goal_7,
  MR_Word * ml_backend__ml_code_gen__Statement_8,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_12)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;
    MR_Word ml_backend__ml_code_gen__InitConstVarMap_10;
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13;
    MR_Word ml_backend__ml_code_gen__Decls_21;
    MR_Word ml_backend__ml_code_gen__Statements_22;
    MR_Word ml_backend__ml_code_gen__GoalInfo_24;
    MR_Word ml_backend__ml_code_gen__Context_25;
    MR_Word ml_backend__ml_code_gen__Var_23;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11, &ml_backend__ml_code_gen__InitConstVarMap_10);
    }
    {
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_6, ml_backend__ml_code_gen__Goal_7, &ml_backend__ml_code_gen__Decls_21, &ml_backend__ml_code_gen__Statements_22, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13);
    }
    ml_backend__ml_code_gen__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 0)));
    ml_backend__ml_code_gen__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 1)));
    {
      ml_backend__ml_code_gen__Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_24);
    }
    {
      *ml_backend__ml_code_gen__Statement_8 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_code_gen__Decls_21, ml_backend__ml_code_gen__Statements_22, ml_backend__ml_code_gen__Context_25);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_10, ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13, ml_backend__ml_code_gen__STATE_VARIABLE_Info_12);
    }
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_7,
  MR_Word ml_backend__ml_code_gen__Goal_8,
  MR_Word * ml_backend__ml_code_gen__Decls_9,
  MR_Word * ml_backend__ml_code_gen__Statements_10,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_13,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_14)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;
    MR_Word ml_backend__ml_code_gen__InitConstVarMap_12;
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_15;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_13, &ml_backend__ml_code_gen__InitConstVarMap_12);
    }
    {
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_7, ml_backend__ml_code_gen__Goal_8, ml_backend__ml_code_gen__Decls_9, ml_backend__ml_code_gen__Statements_10, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_13, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_15);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_15_15, ml_backend__ml_code_gen__STATE_VARIABLE_Info_14);
    }
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_6,
  MR_Word ml_backend__ml_code_gen__Goal_7,
  MR_Word * ml_backend__ml_code_gen__Statement_8,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_15,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_16)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;
    MR_Word ml_backend__ml_code_gen__Decls_10;
    MR_Word ml_backend__ml_code_gen__Statements_11;
    MR_Word ml_backend__ml_code_gen__GoalInfo_13;
    MR_Word ml_backend__ml_code_gen__Context_14;
    MR_Word ml_backend__ml_code_gen__Var_12;

    {
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0(ml_backend__ml_code_gen__CodeModel_6, ml_backend__ml_code_gen__Goal_7, &ml_backend__ml_code_gen__Decls_10, &ml_backend__ml_code_gen__Statements_11, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_15, ml_backend__ml_code_gen__STATE_VARIABLE_Info_16);
    }
    ml_backend__ml_code_gen__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 0)));
    ml_backend__ml_code_gen__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 1)));
    {
      ml_backend__ml_code_gen__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_13);
    }
    {
      *ml_backend__ml_code_gen__Statement_8 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_code_gen__Decls_10, ml_backend__ml_code_gen__Statements_11, ml_backend__ml_code_gen__Context_14);
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_code_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_code_gen. */
