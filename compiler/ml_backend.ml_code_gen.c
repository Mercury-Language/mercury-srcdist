/*
** Automatically generated from `ml_code_gen.m'
** by the Mercury compiler,
** version rotd-2018-05-09
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


// :- module ml_backend.ml_code_gen.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.mark_tail_calls.mih"
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
#include "ml_backend.ml_args_util.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__582__1_2_p_0(
  MR_Word CodeModel_11,
  MR_Word CallCodeModel_34);

static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0(
  MR_Word GoalExpr_10,
  MR_Word CodeModel_11,
  MR_Word Context_12,
  MR_Word GoalInfo_13,
  MR_Word * LocalVarDefns_14,
  MR_Word * FuncDefns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_82,
  MR_Word * STATE_VARIABLE_Info_83);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0(
  MR_Word Conjuncts_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word * LocalVarDefns_12,
  MR_Word * FuncDefns_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_8_p_0(
  MR_Word Cond_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word * LocalVarDefns_12,
  MR_Word * FuncDefns_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_ite_10_p_0(
  MR_Word CodeModel_11,
  MR_Word Cond_12,
  MR_Word Then_13,
  MR_Word Else_14,
  MR_Word Context_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(
  MR_Word GoalExpr_3,
  MR_Word * SubGoalNonLocals_4);

static void MR_CALL 
ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SubGoalNonLocals_0_2,
  MR_Word * STATE_VARIABLE_SubGoalNonLocals_3);

static void MR_CALL 
ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SubGoalNonLocals_0_2,
  MR_Word * STATE_VARIABLE_SubGoalNonLocals_3);


static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_3[2][3];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_4[1][1];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_5[1][10];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_6[1][11];




static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__582__1_2_p_0(
  MR_Word CodeModel_11,
  MR_Word CallCodeModel_34)
{
  {
    MR_bool succeeded = (CodeModel_11 == CallCodeModel_34);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(
  MR_Word CodeModel_6,
  MR_Word Goal_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word InitConstVarMap_10;
    MR_Word STATE_VARIABLE_Info_13_13;
    MR_Word LocalVarDefns_21;
    MR_Word FuncDefns_22;
    MR_Word Stmts_23;
    MR_Word GoalInfo_25;
    MR_Word Context_26;
    MR_Word Var_24;

    ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_11, &InitConstVarMap_10);
    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_6, Goal_7, &LocalVarDefns_21, &FuncDefns_22, &Stmts_23, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_13_13);
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0)));
    GoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1)));
    Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_25);
    *Stmt_8 = ml_backend__ml_code_util__ml_gen_block_4_f_0(LocalVarDefns_21, FuncDefns_22, Stmts_23, Context_26);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_10, STATE_VARIABLE_Info_13_13, STATE_VARIABLE_Info_12);
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_7_p_0(
  MR_Word CodeModel_8,
  MR_Word Goal_9,
  MR_Word * LocalVarDefns_10,
  MR_Word * FuncDefns_11,
  MR_Word * Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word InitConstVarMap_14;
    MR_Word STATE_VARIABLE_Info_17_17;

    ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_15, &InitConstVarMap_14);
    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_8, Goal_9, LocalVarDefns_10, FuncDefns_11, Stmts_12, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_17_17);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_14, STATE_VARIABLE_Info_17_17, STATE_VARIABLE_Info_16);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__582__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0(
  MR_Word GoalExpr_10,
  MR_Word CodeModel_11,
  MR_Word Context_12,
  MR_Word GoalInfo_13,
  MR_Word * LocalVarDefns_14,
  MR_Word * FuncDefns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_82,
  MR_Word * STATE_VARIABLE_Info_83)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_53 = (MR_Word) MR_body(((MR_Word) GoalExpr_10), (MR_Integer) 0);

          ml_backend__ml_code_gen__ml_gen_negation_8_p_0(SubGoal_53, CodeModel_11, Context_12, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 3)));
          MR_Word _LHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0)));
          MR_Word _RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1)));
          MR_Word _Mode_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 2)));
          MR_Word _UnifyContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 4)));

          ml_backend__ml_unify_gen__ml_gen_unification_6_p_0(Unification_21, CodeModel_11, Context_12, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
          *LocalVarDefns_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0)));
          MR_Integer ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1)));
          MR_Word ArgVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2)));
          MR_Word BuiltinState_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3)));
          MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4)));
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5)));

          switch (BuiltinState_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ml_backend__ml_call_gen__ml_gen_builtin_10_p_0(PredId_23, ProcId_24, ArgVars_25, CodeModel_11, Context_12, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
              break;
            case (MR_Integer) 1:
              ml_backend__ml_call_gen__ml_gen_plain_call_10_p_0(PredId_23, ProcId_24, CodeModel_11, GoalInfo_13, ArgVars_25, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
              MR_Word Vars_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
              MR_Word Modes_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
              MR_Word Detism_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));
              MR_Word CallCodeModel_34;
              MR_Word Var_108;
              MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));

              hlds__code_model__determinism_to_code_model_2_p_0(Detism_33, &CallCodeModel_34);
              {
                Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0_1));
                MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (CodeModel_11));
                MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) (CallCodeModel_34));
              }
              mercury__require__expect_4_p_0(Var_108, (MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/9", (MR_String) "code model mismatch");
              ml_backend__ml_call_gen__ml_gen_generic_call_10_p_0(GenericCall_29, Vars_30, Modes_31, Detism_33, Context_12, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
              MR_Word Args_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
              MR_Word ExtraArgs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));
              MR_Word MaybeTraceRuntimeCond_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 6)));
              MR_Word PragmaImpl_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 7)));
              MR_String ForeignCode_40 = ((MR_String) (MR_hl_field(MR_mktag(0), PragmaImpl_39, (MR_Integer) 0)));
              MR_Word MaybeContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaImpl_39, (MR_Integer) 1)));
              MR_Word ContextToUse_42;
              MR_Word PredId_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
              MR_Integer ProcId_117 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));

              if ((MaybeContext_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ContextToUse_42 = Context_12;
              else
                ContextToUse_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeContext_41, (MR_Integer) 0)));
              if ((MaybeTraceRuntimeCond_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_p_0(CodeModel_11, Attributes_35, PredId_116, ProcId_117, Args_36, ExtraArgs_37, ForeignCode_40, ContextToUse_42, LocalVarDefns_14, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                *FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word TraceRuntimeCond_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTraceRuntimeCond_38, (MR_Integer) 0)));

                ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_5_p_0(TraceRuntimeCond_43, ContextToUse_42, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                *LocalVarDefns_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
              MR_Word _ConjType_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

              ml_backend__ml_code_gen__ml_gen_conj_8_p_0(Goals_45, CodeModel_11, Context_12, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

              ml_backend__ml_disj_gen__ml_gen_disj_7_p_0(Goals_118, GoalInfo_13, CodeModel_11, Context_12, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
              *LocalVarDefns_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
              MR_Word CanFail_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
              MR_Word CasesList_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));

              ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(Var_46, CanFail_47, CasesList_48, CodeModel_11, Context_12, GoalInfo_13, LocalVarDefns_14, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
              *FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
              MR_Word SubGoal_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) Reason_54)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  ml_backend__ml_commit_gen__ml_gen_commit_8_p_0(SubGoal_119, CodeModel_11, Context_12, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word HeadWarning_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), Reason_54, (MR_Integer) 0)));
                    MR_Word TailWarnings_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Reason_54, (MR_Integer) 1)));
                    MR_Word Warnings0_70;
                    MR_Word Warnings_71;
                    MR_Word Var_92;
                    MR_Word STATE_VARIABLE_Info_93_93;
                    MR_Word STATE_VARIABLE_Info_94_94;

                    ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(STATE_VARIABLE_Info_0_82, &Warnings0_70);
                    {
                      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (HeadWarning_68));
                      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (TailWarnings_69));
                    }
                    mercury__set__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, Var_92, Warnings0_70, &Warnings_71);
                    ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(Warnings_71, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_93_93);
                    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_11, SubGoal_119, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_93_93, &STATE_VARIABLE_Info_94_94);
                    ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(Warnings0_70, STATE_VARIABLE_Info_94_94, STATE_VARIABLE_Info_83);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_54, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_11, SubGoal_119, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_11, SubGoal_119, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                      break;
                    case (MR_Integer) 2:
                      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_11, SubGoal_119, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                      break;
                    case (MR_Integer) 3:
                      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_11, SubGoal_119, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                      break;
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      ml_backend__ml_commit_gen__ml_gen_commit_8_p_0(SubGoal_119, CodeModel_11, Context_12, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_54, (MR_Integer) 2)));
                        MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_54, (MR_Integer) 1)));

                        switch (Var_122) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              ml_backend__ml_unify_gen__ml_gen_ground_term_5_p_0(Var_123, SubGoal_119, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                              *LocalVarDefns_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              *FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            }
                            break;
                          case (MR_Integer) 2:
                            ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_11, SubGoal_119, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
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
                            ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_11, SubGoal_119, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_11, SubGoal_119, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
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
              MR_Word Cond_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
              MR_Word Then_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
              MR_Word Else_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
              MR_Word _Vars_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

              ml_backend__ml_code_gen__ml_gen_ite_10_p_0(CodeModel_11, Cond_50, Then_51, Else_52, Context_12, LocalVarDefns_14, FuncDefns_15, Stmts_16, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
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

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LocalVarDefns_12;
    MR_Word conv6_FuncDefns_13;
    MR_Word conv5_Stmts_14;
    MR_Word conv4_STATE_VARIABLE_Info_29;

    ml_backend__ml_code_gen__ml_gen_conj_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), &conv7_LocalVarDefns_12, &conv6_FuncDefns_13, &conv5_Stmts_14, ((MR_Word) wrapper_arg_4), &conv4_STATE_VARIABLE_Info_29);
    *wrapper_arg_1 = ((MR_Box) (conv7_LocalVarDefns_12));
    *wrapper_arg_2 = ((MR_Box) (conv6_FuncDefns_13));
    *wrapper_arg_3 = ((MR_Box) (conv5_Stmts_14));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Info_29));
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LocalVarDefns_10;
    MR_Word conv2_FuncDefns_11;
    MR_Word conv1_Stmts_12;
    MR_Word conv0_STATE_VARIABLE_Info_27;

    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &conv3_LocalVarDefns_10, &conv2_FuncDefns_11, &conv1_Stmts_12, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Info_27);
    *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_10));
    *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_11));
    *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_27));
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0(
  MR_Word Conjuncts_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word * LocalVarDefns_12,
  MR_Word * FuncDefns_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;

    if ((Conjuncts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_10, Context_11, Stmts_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      *LocalVarDefns_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *FuncDefns_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Conjuncts_9, (MR_Integer) 1)));
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Conjuncts_9, (MR_Integer) 0)));

      if ((Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_10, Var_48, LocalVarDefns_12, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      else
      {
        MR_Word FirstGoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1)));
        MR_Word FirstDeterminism_23;
        MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0)));
        MR_Word Var_46;
        MR_Word Var_24;

        FirstDeterminism_23 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(FirstGoalInfo_22);
        parse_tree__prog_data__determinism_components_3_p_0(FirstDeterminism_23, &Var_24, &Var_46);
        succeeded = ((MR_Integer) 0 == Var_46);
        if (succeeded)
          ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_10, Var_48, LocalVarDefns_12, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
        else
        {
          MR_Word FirstCodeModel_25;
          MR_Word DoGenFirst_26;
          MR_Word DoGenRest_27;

          hlds__code_model__determinism_to_code_model_2_p_0(FirstDeterminism_23, &FirstCodeModel_25);
          {
            DoGenFirst_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DoGenFirst_26, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), DoGenFirst_26, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_8_p_0_1));
            MR_hl_field(MR_mktag(0), DoGenFirst_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), DoGenFirst_26, 3) = ((MR_Box) (FirstCodeModel_25));
            MR_hl_field(MR_mktag(0), DoGenFirst_26, 4) = ((MR_Box) (Var_48));
          }
          {
            DoGenRest_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DoGenRest_27, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), DoGenRest_27, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_8_p_0_2));
            MR_hl_field(MR_mktag(0), DoGenRest_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), DoGenRest_27, 3) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), DoGenRest_27, 4) = ((MR_Box) (CodeModel_10));
            MR_hl_field(MR_mktag(0), DoGenRest_27, 5) = ((MR_Box) (Context_11));
          }
          ml_backend__ml_code_util__ml_combine_conj_9_p_0(FirstCodeModel_25, Context_11, DoGenFirst_26, DoGenRest_27, LocalVarDefns_12, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_8_p_0(
  MR_Word Cond_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word * LocalVarDefns_12,
  MR_Word * FuncDefns_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_Word CondGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_9, (MR_Integer) 1)));
    MR_Word CondCodeModel_18;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_9, (MR_Integer) 0)));

    CondCodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_17);
    switch (CodeModel_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InitConstVarMap_64;
          MR_Word STATE_VARIABLE_Info_17_65;

          ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_25, &InitConstVarMap_64);
          ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 1, Cond_9, LocalVarDefns_12, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_17_65);
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_64, STATE_VARIABLE_Info_17_65, STATE_VARIABLE_Info_26);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_negation\'/8", (MR_String) "nondet negation");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        switch (CondCodeModel_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CondStmts_21;
              MR_Word SetSuccessFalse_22;
              MR_Word STATE_VARIABLE_Info_43_43;
              MR_Word Var_47;
              MR_Word InitConstVarMap_75;
              MR_Word STATE_VARIABLE_Info_17_76;

              ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_25, &InitConstVarMap_75);
              ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 0, Cond_9, LocalVarDefns_12, FuncDefns_13, &CondStmts_21, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_17_76);
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_75, STATE_VARIABLE_Info_17_76, &STATE_VARIABLE_Info_43_43);
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[2]), Context_11, &SetSuccessFalse_22, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_26);
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (SetSuccessFalse_22));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *Stmts_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, CondStmts_21, Var_47);
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_negation\'/8", (MR_String) "nondet cond");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Succeeded_23;
              MR_Word InvertSuccess_24;
              MR_Word STATE_VARIABLE_Info_34_34;
              MR_Word STATE_VARIABLE_Info_35_35;
              MR_Word Var_36;
              MR_Word Var_40;
              MR_Word CondStmts_53;
              MR_Word InitConstVarMap_86;
              MR_Word STATE_VARIABLE_Info_17_87;

              ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_25, &InitConstVarMap_86);
              ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 1, Cond_9, LocalVarDefns_12, FuncDefns_13, &CondStmts_53, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_17_87);
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_86, STATE_VARIABLE_Info_17_87, &STATE_VARIABLE_Info_34_34);
              ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&Succeeded_23, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_35_35);
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_4[0])));
                MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (Succeeded_23));
              }
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0(Var_36, Context_11, &InvertSuccess_24, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_26);
              {
                Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (InvertSuccess_24));
                MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *Stmts_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, CondStmts_53, Var_40);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_ite_10_p_0(
  MR_Word CodeModel_11,
  MR_Word Cond_12,
  MR_Word Then_13,
  MR_Word Else_14,
  MR_Word Context_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  {
    MR_Word CondGoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_12, (MR_Integer) 1)));
    MR_Word CondCodeModel_22;
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_12, (MR_Integer) 0)));

    CondCodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_21);
    switch (CondCodeModel_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CondStmt_23;
          MR_Word ThenStmt_24;
          MR_Word STATE_VARIABLE_Info_91_91;
          MR_Word Var_93;

          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, Cond_12, &CondStmt_23, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_91_91);
          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(CodeModel_11, Then_13, &ThenStmt_24, STATE_VARIABLE_Info_91_91, STATE_VARIABLE_Info_47);
          *LocalVarDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *FuncDefns_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (ThenStmt_24));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CondStmt_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_93));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CondVar_32;
          MR_Word CondVarDecl_33;
          MR_Word SetCondFalse_34;
          MR_Word ThenFuncLabel_35;
          MR_Word ThenFuncLabelRval_36;
          MR_Word EnvPtrRval_37;
          MR_Word SuccessCont_38;
          MR_Word ThenGoalInfo_40;
          MR_Word ThenContext_41;
          MR_Word SetCondTrue_42;
          MR_Word ThenFuncBody_43;
          MR_Word ThenFuncDefn_44;
          MR_Word CondSucceeded_45;
          MR_Word STATE_VARIABLE_Info_48_48;
          MR_Word STATE_VARIABLE_Info_52_52;
          MR_Word STATE_VARIABLE_Info_54_54;
          MR_Word STATE_VARIABLE_Info_56_56;
          MR_Word STATE_VARIABLE_Info_57_57;
          MR_Word STATE_VARIABLE_Info_60_60;
          MR_Word STATE_VARIABLE_Info_61_61;
          MR_Word STATE_VARIABLE_Info_62_62;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word STATE_VARIABLE_Info_68_68;
          MR_Word STATE_VARIABLE_Info_69_69;
          MR_Word Var_71;
          MR_Word Var_75;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word ThenStmt_96;
          MR_Word InitConstVarMap_97;
          MR_Word CondLocalVarDefns_98;
          MR_Word CondFuncDefns_99;
          MR_Word CondStmts_100;
          MR_Word ElseStmt_101;
          MR_Word IfStmt_102;
          MR_Word Var_39;

          ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_46, &InitConstVarMap_97);
          ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_p_0(&CondVar_32, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_48_48);
          CondVarDecl_33 = ml_backend__ml_code_util__ml_gen_cond_var_decl_2_f_0(CondVar_32, Context_15);
          ml_backend__ml_code_util__ml_gen_set_cond_var_4_p_0(CondVar_32, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[2]), Context_15, &SetCondFalse_34);
          ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ThenFuncLabel_35, &ThenFuncLabelRval_36, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_52_52);
          ml_backend__ml_code_util__ml_get_env_ptr_1_p_0(&EnvPtrRval_37);
          {
            SuccessCont_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SuccessCont_38, 0) = ((MR_Box) (ThenFuncLabelRval_36));
            MR_hl_field(MR_mktag(0), SuccessCont_38, 1) = ((MR_Box) (EnvPtrRval_37));
            MR_hl_field(MR_mktag(0), SuccessCont_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(SuccessCont_38, STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_54_54);
          ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 2, Cond_12, &CondLocalVarDefns_98, &CondFuncDefns_99, &CondStmts_100, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_56_56);
          ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_57_57);
          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Then_13, (MR_Integer) 0)));
          ThenGoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Then_13, (MR_Integer) 1)));
          ThenContext_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(ThenGoalInfo_40);
          ml_backend__ml_code_util__ml_gen_set_cond_var_4_p_0(CondVar_32, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[1]), ThenContext_41, &SetCondTrue_42);
          ml_backend__ml_gen_info__ml_gen_info_increment_func_nest_depth_2_p_0(STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_60_60);
          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(CodeModel_11, Then_13, &ThenStmt_96, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_61_61);
          ml_backend__ml_gen_info__ml_gen_info_decrement_func_nest_depth_2_p_0(STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_62_62);
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ThenStmt_96));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (SetCondTrue_42));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
          }
          {
            ThenFuncBody_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ThenFuncBody_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ThenFuncBody_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ThenFuncBody_43, 2) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(0), ThenFuncBody_43, 3) = ((MR_Box) (ThenContext_41));
          }
          ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(STATE_VARIABLE_Info_62_62, ThenFuncLabel_35, ThenContext_41, ThenFuncBody_43, &ThenFuncDefn_44);
          ml_backend__ml_code_util__ml_gen_test_cond_var_2_p_0(CondVar_32, &CondSucceeded_45);
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_97, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_68_68);
          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(CodeModel_11, Else_14, &ElseStmt_101, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_69_69);
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_97, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_47);
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_4[0])));
            MR_hl_field(MR_mktag(3), Var_71, 2) = ((MR_Box) (CondSucceeded_45));
          }
          {
            IfStmt_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), IfStmt_102, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(2), IfStmt_102, 1) = ((MR_Box) (ElseStmt_101));
            MR_hl_field(MR_mktag(2), IfStmt_102, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(2), IfStmt_102, 3) = ((MR_Box) (Context_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *LocalVarDefns_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CondVarDecl_33));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CondLocalVarDefns_98));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (ThenFuncDefn_44));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *FuncDefns_17 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, CondFuncDefns_99, Var_75);
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (SetCondFalse_34));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (CondStmts_100));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (IfStmt_102));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, Var_77, Var_78);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InitConstVarMap_25;
          MR_Word CondStmts_28;
          MR_Word Succeeded_29;
          MR_Word ElseStmt_30;
          MR_Word IfStmt_31;
          MR_Word STATE_VARIABLE_Info_81_81;
          MR_Word STATE_VARIABLE_Info_82_82;
          MR_Word STATE_VARIABLE_Info_83_83;
          MR_Word STATE_VARIABLE_Info_84_84;
          MR_Word STATE_VARIABLE_Info_85_85;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word ThenStmt_95;

          ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_46, &InitConstVarMap_25);
          ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 1, Cond_12, LocalVarDefns_16, FuncDefns_17, &CondStmts_28, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_81_81);
          ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&Succeeded_29, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_82_82);
          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(CodeModel_11, Then_13, &ThenStmt_95, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_83_83);
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_25, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_84_84);
          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(CodeModel_11, Else_14, &ElseStmt_30, STATE_VARIABLE_Info_84_84, &STATE_VARIABLE_Info_85_85);
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_25, STATE_VARIABLE_Info_85_85, STATE_VARIABLE_Info_47);
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (ElseStmt_30));
          }
          {
            IfStmt_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), IfStmt_31, 0) = ((MR_Box) (Succeeded_29));
            MR_hl_field(MR_mktag(2), IfStmt_31, 1) = ((MR_Box) (ThenStmt_95));
            MR_hl_field(MR_mktag(2), IfStmt_31, 2) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(2), IfStmt_31, 3) = ((MR_Box) (Context_15));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (IfStmt_31));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, CondStmts_28, Var_88);
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_7_p_0(
  MR_Word CodeModel_8,
  MR_Word Goal_9,
  MR_Word * LocalVarDefns_10,
  MR_Word * FuncDefns_11,
  MR_Word * Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_Word TypeCtorInfo_19_46;
    MR_Word GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 0)));
    MR_Word GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 1)));
    MR_Word VarTypes_16;
    MR_Word VarSet_18;
    MR_Word Context_19;
    MR_Word VarDefns_20;
    MR_Word GoalCodeModel_21;
    MR_Word GoalLocalVarDefns_22;
    MR_Word GoalStmts0_24;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word SubGoalNonLocals_36;
    MR_Word NonLocals_37;
    MR_Word VarsToDeclareSet_38;
    MR_Word VarsToDeclare0_39;

    ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_26, &VarTypes_16);
    ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(GoalExpr_14, &SubGoalNonLocals_36);
    NonLocals_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_15);
    TypeCtorInfo_19_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__difference_3_p_0(TypeCtorInfo_19_46, SubGoalNonLocals_36, NonLocals_37, &VarsToDeclareSet_38);
    parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_19_46, VarsToDeclareSet_38, &VarsToDeclare0_39);
    ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_26, &VarSet_18);
    Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
    if ((VarsToDeclare0_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      VarDefns_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_0_26;
    }
    else
    {
      MR_Word VarsToDeclare_17;
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarsToDeclare0_39, (MR_Integer) 1)));
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarsToDeclare0_39, (MR_Integer) 0)));

      if ((Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        VarsToDeclare_17 = VarsToDeclare0_39;
      else
        VarsToDeclare_17 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(VarsToDeclare0_39, VarTypes_16);
      ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(VarSet_18, VarTypes_16, Context_19, VarsToDeclare_17, &VarDefns_20, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_28_28);
    }
    GoalCodeModel_21 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_15);
    ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0(GoalExpr_14, GoalCodeModel_21, Context_19, GoalInfo_15, &GoalLocalVarDefns_22, FuncDefns_11, &GoalStmts0_24, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_29_29);
    ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(CodeModel_8, GoalCodeModel_21, Context_19, GoalStmts0_24, Stmts_12, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_27);
    *LocalVarDefns_10 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, VarDefns_20, GoalLocalVarDefns_22);
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(
  MR_Word CodeModel_6,
  MR_Word Goal_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word LocalVarDefns_10;
    MR_Word FuncDefns_11;
    MR_Word Stmts_12;
    MR_Word GoalInfo_14;
    MR_Word Context_15;
    MR_Word Var_13;

    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_6, Goal_7, &LocalVarDefns_10, &FuncDefns_11, &Stmts_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0)));
    GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1)));
    Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
    *Stmt_8 = ml_backend__ml_code_util__ml_gen_block_4_f_0(LocalVarDefns_10, FuncDefns_11, Stmts_12, Context_15);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(
  MR_Word GoalExpr_3,
  MR_Word * SubGoalNonLocals_4)
{
  switch (MR_tag((MR_Word) GoalExpr_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_48 = (MR_Word) MR_body(((MR_Word) GoalExpr_3), (MR_Integer) 0);

        *SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_48);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 3)));
        MR_Word _LHS_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 0)));
        MR_Word _RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 1)));
        MR_Word _Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 2)));
        MR_Word _UnifyContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 4)));

        switch (MR_tag((MR_Word) Unification_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LHSVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 0)));
              MR_Word ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 2)));
              MR_Word Var_84;
              MR_Word _ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 1)));
              MR_Word _ArgModes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 3)));
              MR_Word _HowToConstruct_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 4)));
              MR_Word _Unique_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 5)));
              MR_Word _SubInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_8, (MR_Integer) 6)));

              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (LHSVar_10));
                MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (ArgVars_12));
              }
              *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_84);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_83;
              MR_Word LHSVar_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 0)));
              MR_Word ArgVars_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 2)));
              MR_Word _CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 4)));
              MR_Word _CanCGC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 5)));
              MR_Word _ConsId_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 1)));
              MR_Word _ArgModes_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_8, (MR_Integer) 3)));

              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (LHSVar_87));
                MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (ArgVars_89));
              }
              *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_83);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word RHSVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unification_8, (MR_Integer) 1)));
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word LHSVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unification_8, (MR_Integer) 0)));

              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (RHSVar_19));
                MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (LHSVar_91));
                MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
              }
              *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_80);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_77;
                  MR_Word Var_78;
                  MR_Word LHSVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 1)));
                  MR_Word RHSVar_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unification_8, (MR_Integer) 2)));

                  {
                    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (RHSVar_93));
                    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (LHSVar_92));
                    MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
                  }
                  *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_77);
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
        MR_Word ArgVars_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 2)));
        MR_Word _PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 0)));
        MR_Integer _ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 1)));
        MR_Word _Builtin_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 3)));
        MR_Word _Unify_context_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 4)));
        MR_Word _SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 5)));

        *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ArgVars_94);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
            MR_Word ArgVars_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));
            MR_Word _Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3)));
            MR_Word _MaybeArgRegs_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4)));
            MR_Word _Detism_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 5)));

            switch (MR_tag((MR_Word) GenericCall_28)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word HOVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_28, (MR_Integer) 0)));
                  MR_Word Var_73;
                  MR_Word _Purity_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_28, (MR_Integer) 1)));
                  MR_Word _Kind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), GenericCall_28, (MR_Integer) 2)));
                  MR_Integer _Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GenericCall_28, (MR_Integer) 3)));

                  {
                    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (HOVar_32));
                    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (ArgVars_95));
                  }
                  *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_73);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MethodVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_28, (MR_Integer) 0)));
                  MR_Word Var_72;
                  MR_Integer _MethodNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), GenericCall_28, (MR_Integer) 1)));
                  MR_Word _MethodClassId_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_28, (MR_Integer) 2)));
                  MR_Word _Name_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), GenericCall_28, (MR_Integer) 3)));

                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MethodVar_36));
                    MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (ArgVars_95));
                  }
                  *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_72);
                }
                break;
              case (MR_Integer) 2:
                {
                  *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ArgVars_95);
                }
                break;
              case (MR_Integer) 3:
                {
                  *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ArgVars_95);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_112_112 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
            MR_Word TypeInfo_113_113 = (MR_Word) &ml_backend__ml_code_gen_scalar_common_1[0];
            MR_Word Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4)));
            MR_Word ExtraArgs_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 5)));
            MR_Word ExtraVars_47;
            MR_Word Var_71;
            MR_Word ArgVars_98;
            MR_Word _Attr_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
            MR_Word _TraceCond_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 6)));
            MR_Word _Impl_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 7)));
            MR_Word _PredId_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));
            MR_Integer _ProcId_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3)));

            ArgVars_98 = mercury__list__map_2_f_0(TypeCtorInfo_112_112, TypeInfo_113_113, (MR_Word) &ml_backend__ml_code_gen_scalar_common_3[0], Args_43);
            ExtraVars_47 = mercury__list__map_2_f_0(TypeCtorInfo_112_112, TypeInfo_113_113, (MR_Word) &ml_backend__ml_code_gen_scalar_common_3[1], ExtraArgs_44);
            Var_71 = mercury__list__f_43_43_2_f_0(TypeInfo_113_113, ExtraVars_47, ArgVars_98);
            *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_71);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubGoals_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));
            MR_Word Var_68;
            MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));

            Var_68 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(SubGoals_51, Var_68, SubGoalNonLocals_4);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
            MR_Word Var_123;

            Var_123 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(SubGoals_122, Var_123, SubGoalNonLocals_4);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3)));
            MR_Word Var_62;
            MR_Word _Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
            MR_Word _CanFail_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));

            Var_62 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(Cases_57, Var_62, SubGoalNonLocals_4);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SubGoal_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));
            MR_Word _Reason_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));

            *SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_125);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));
            MR_Word Then_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3)));
            MR_Word Else_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4)));
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word SubGoal_129;
            MR_Word SubGoals_130;
            MR_Word NonLocals_132;
            MR_Word STATE_VARIABLE_SubGoalNonLocals_13_135;
            MR_Word SubGoal_141;
            MR_Word SubGoals_142;
            MR_Word NonLocals_144;
            MR_Word STATE_VARIABLE_SubGoalNonLocals_13_147;
            MR_Word SubGoal_153;
            MR_Word NonLocals_156;
            MR_Word _Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
            MR_Word SubGoals_154;

            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Else_55));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Then_54));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Cond_53));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
            }
            Var_64 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            SubGoal_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0)));
            SubGoals_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 1)));
            NonLocals_132 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_129);
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_132, Var_64, &STATE_VARIABLE_SubGoalNonLocals_13_135);
            SubGoal_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubGoals_130, (MR_Integer) 0)));
            SubGoals_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubGoals_130, (MR_Integer) 1)));
            NonLocals_144 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_141);
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_144, STATE_VARIABLE_SubGoalNonLocals_13_135, &STATE_VARIABLE_SubGoalNonLocals_13_147);
            SubGoal_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubGoals_142, (MR_Integer) 0)));
            SubGoals_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubGoals_142, (MR_Integer) 1)));
            NonLocals_156 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_153);
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_156, STATE_VARIABLE_SubGoalNonLocals_13_147, SubGoalNonLocals_4);
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

static void MR_CALL 
ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SubGoalNonLocals_0_2,
  MR_Word * STATE_VARIABLE_SubGoalNonLocals_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_SubGoalNonLocals_3 = STATE_VARIABLE_SubGoalNonLocals_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word SubGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 2)));
      MR_Word NonLocals_13;
      MR_Word STATE_VARIABLE_SubGoalNonLocals_16_16;
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 0)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;

      NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_12);
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_13, STATE_VARIABLE_SubGoalNonLocals_0_2, &STATE_VARIABLE_SubGoalNonLocals_16_16);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2 = STATE_VARIABLE_SubGoalNonLocals_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SubGoalNonLocals_0_2 = next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SubGoalNonLocals_0_2,
  MR_Word * STATE_VARIABLE_SubGoalNonLocals_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_SubGoalNonLocals_3 = STATE_VARIABLE_SubGoalNonLocals_0_2;
    else
    {
      MR_Word SubGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word SubGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word NonLocals_10;
      MR_Word STATE_VARIABLE_SubGoalNonLocals_13_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;

      NonLocals_10 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_7);
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_10, STATE_VARIABLE_SubGoalNonLocals_0_2, &STATE_VARIABLE_SubGoalNonLocals_13_13);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = SubGoals_8;
      next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2 = STATE_VARIABLE_SubGoalNonLocals_13_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SubGoalNonLocals_0_2 = next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word Type_21;
      MR_Word ModuleInfo_22;
      MR_Word IsDummy_23;

      hlds__vartypes__lookup_var_type_3_p_0(HeadVar__2_2, Var_17, &Type_21);
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_6, &ModuleInfo_22);
      IsDummy_23 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_22, Type_21);
      switch (IsDummy_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__4_4 = Vars_18;

            // direct tailcall eliminated
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word VarName_24;
            MR_Word Defn_25;
            MR_Word Defns0_26;
            MR_Word STATE_VARIABLE_Info_29_29;

            VarName_24 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(HeadVar__1_1, Var_17);
            ml_backend__ml_code_util__ml_gen_local_var_decl_6_p_0(VarName_24, Type_21, HeadVar__3_3, &Defn_25, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_29_29);
            ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Vars_18, &Defns0_26, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_7);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Defn_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Defns0_26));
            }
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(
  MR_Word OuterCodeModel_8,
  MR_Word InnerCodeModel_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Stmts_0_17,
  MR_Word * STATE_VARIABLE_Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  switch (OuterCodeModel_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (InnerCodeModel_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Stmts_18 = STATE_VARIABLE_Stmts_0_17;
            *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
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
      switch (InnerCodeModel_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CallCont_14;
            MR_Word Var_29;

            ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(Context_10, &CallCont_14, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (CallCont_14));
              MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, STATE_VARIABLE_Stmts_0_17, Var_29);
          }
          break;
        case (MR_Integer) 2:
          {
            *STATE_VARIABLE_Stmts_18 = STATE_VARIABLE_Stmts_0_17;
            *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Succeeded_15;
            MR_Word IfStmt_16;
            MR_Word STATE_VARIABLE_Info_21_21;
            MR_Word Var_25;
            MR_Word CallCont_46;

            ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&Succeeded_15, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_21_21);
            ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(Context_10, &CallCont_46, STATE_VARIABLE_Info_21_21, STATE_VARIABLE_Info_20);
            {
              IfStmt_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), IfStmt_16, 0) = ((MR_Box) (Succeeded_15));
              MR_hl_field(MR_mktag(2), IfStmt_16, 1) = ((MR_Box) (CallCont_46));
              MR_hl_field(MR_mktag(2), IfStmt_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(2), IfStmt_16, 3) = ((MR_Box) (Context_10));
            }
            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (IfStmt_16));
              MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, STATE_VARIABLE_Stmts_0_17, Var_25);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (InnerCodeModel_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SetSuccessTrue_13;
            MR_Word Var_35;

            ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[1]), Context_10, &SetSuccessTrue_13, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (SetSuccessTrue_13));
              MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, STATE_VARIABLE_Stmts_0_17, Var_35);
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
            *STATE_VARIABLE_Stmts_18 = STATE_VARIABLE_Stmts_0_17;
            *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
          }
          break;
      }
      break;
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

// :- end_module ml_backend.ml_code_gen.
