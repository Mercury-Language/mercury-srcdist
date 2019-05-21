/*
** Automatically generated from `ml_code_gen.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__624__1_2_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_11,
  MR_Word ml_backend__ml_code_gen__CallCodeModel_39);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0_2(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0_1(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0(
  MR_Word ml_backend__ml_code_gen__Conjuncts_9,
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
  MR_Word ml_backend__ml_code_gen__Context_11,
  MR_Word * ml_backend__ml_code_gen__LocalVarDefns_12,
  MR_Word * ml_backend__ml_code_gen__FuncDefns_13,
  MR_Word * ml_backend__ml_code_gen__Stmts_14,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_29);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_8_p_0(
  MR_Word ml_backend__ml_code_gen__Cond_9,
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
  MR_Word ml_backend__ml_code_gen__Context_11,
  MR_Word * ml_backend__ml_code_gen__LocalVarDefns_12,
  MR_Word * ml_backend__ml_code_gen__FuncDefns_13,
  MR_Word * ml_backend__ml_code_gen__Stmts_14,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_25,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_26);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_ite_10_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_11,
  MR_Word ml_backend__ml_code_gen__Cond_12,
  MR_Word ml_backend__ml_code_gen__Then_13,
  MR_Word ml_backend__ml_code_gen__Else_14,
  MR_Word ml_backend__ml_code_gen__Context_15,
  MR_Word * ml_backend__ml_code_gen__LocalVarDefns_16,
  MR_Word * ml_backend__ml_code_gen__FuncDefns_17,
  MR_Word * ml_backend__ml_code_gen__Stmts_18,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_46,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_47);

static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0_1(
  MR_Box ml_backend__ml_code_gen__closure_arg);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0(
  MR_Word ml_backend__ml_code_gen__GoalExpr_10,
  MR_Word ml_backend__ml_code_gen__CodeModel_11,
  MR_Word ml_backend__ml_code_gen__Context_12,
  MR_Word ml_backend__ml_code_gen__GoalInfo_13,
  MR_Word * ml_backend__ml_code_gen__LocalVarDefns_14,
  MR_Word * ml_backend__ml_code_gen__FuncDefns_15,
  MR_Word * ml_backend__ml_code_gen__Stmts_16,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);

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
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__624__1_2_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_11,
  MR_Word ml_backend__ml_code_gen__CallCodeModel_39)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded = (ml_backend__ml_code_gen__CodeModel_11 == ml_backend__ml_code_gen__CallCodeModel_39);

    return ml_backend__ml_code_gen__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_6,
  MR_Word ml_backend__ml_code_gen__Goal_7,
  MR_Word * ml_backend__ml_code_gen__Stmt_8,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_12)
{
  {
    MR_Word ml_backend__ml_code_gen__InitConstVarMap_10;
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13;
    MR_Word ml_backend__ml_code_gen__LocalVarDefns_21;
    MR_Word ml_backend__ml_code_gen__FuncDefns_22;
    MR_Word ml_backend__ml_code_gen__Stmts_23;
    MR_Word ml_backend__ml_code_gen__GoalInfo_25;
    MR_Word ml_backend__ml_code_gen__Context_26;
    MR_Word ml_backend__ml_code_gen__Var_24;

    ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11, &ml_backend__ml_code_gen__InitConstVarMap_10);
    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_6, ml_backend__ml_code_gen__Goal_7, &ml_backend__ml_code_gen__LocalVarDefns_21, &ml_backend__ml_code_gen__FuncDefns_22, &ml_backend__ml_code_gen__Stmts_23, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_11, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13);
    ml_backend__ml_code_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 0)));
    ml_backend__ml_code_gen__GoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 1)));
    ml_backend__ml_code_gen__Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_25);
    *ml_backend__ml_code_gen__Stmt_8 = ml_backend__ml_code_util__ml_gen_block_4_f_0(ml_backend__ml_code_gen__LocalVarDefns_21, ml_backend__ml_code_gen__FuncDefns_22, ml_backend__ml_code_gen__Stmts_23, ml_backend__ml_code_gen__Context_26);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_10, ml_backend__ml_code_gen__STATE_VARIABLE_Info_13_13, ml_backend__ml_code_gen__STATE_VARIABLE_Info_12);
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_7_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_8,
  MR_Word ml_backend__ml_code_gen__Goal_9,
  MR_Word * ml_backend__ml_code_gen__LocalVarDefns_10,
  MR_Word * ml_backend__ml_code_gen__FuncDefns_11,
  MR_Word * ml_backend__ml_code_gen__Stmts_12,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_15,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_16)
{
  {
    MR_Word ml_backend__ml_code_gen__InitConstVarMap_14;
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_17;

    ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_15, &ml_backend__ml_code_gen__InitConstVarMap_14);
    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_8, ml_backend__ml_code_gen__Goal_9, ml_backend__ml_code_gen__LocalVarDefns_10, ml_backend__ml_code_gen__FuncDefns_11, ml_backend__ml_code_gen__Stmts_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_15, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_17);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_17, ml_backend__ml_code_gen__STATE_VARIABLE_Info_16);
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0_2(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
    MR_Word ml_backend__ml_code_gen__conv7_LocalVarDefns_12;
    MR_Word ml_backend__ml_code_gen__conv6_FuncDefns_13;
    MR_Word ml_backend__ml_code_gen__conv5_Stmts_14;
    MR_Word ml_backend__ml_code_gen__conv4_STATE_VARIABLE_Info_29;

    ml_backend__ml_code_gen__ml_gen_conj_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 5))), &ml_backend__ml_code_gen__conv7_LocalVarDefns_12, &ml_backend__ml_code_gen__conv6_FuncDefns_13, &ml_backend__ml_code_gen__conv5_Stmts_14, ((MR_Word) ml_backend__ml_code_gen__wrapper_arg_4), &ml_backend__ml_code_gen__conv4_STATE_VARIABLE_Info_29);
    *ml_backend__ml_code_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_code_gen__conv7_LocalVarDefns_12));
    *ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv6_FuncDefns_13));
    *ml_backend__ml_code_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_code_gen__conv5_Stmts_14));
    *ml_backend__ml_code_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_code_gen__conv4_STATE_VARIABLE_Info_29));
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0_1(
  MR_Box ml_backend__ml_code_gen__closure_arg,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_code_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_code_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;
    MR_Word ml_backend__ml_code_gen__conv3_LocalVarDefns_10;
    MR_Word ml_backend__ml_code_gen__conv2_FuncDefns_11;
    MR_Word ml_backend__ml_code_gen__conv1_Stmts_12;
    MR_Word ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_27;

    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))), &ml_backend__ml_code_gen__conv3_LocalVarDefns_10, &ml_backend__ml_code_gen__conv2_FuncDefns_11, &ml_backend__ml_code_gen__conv1_Stmts_12, ((MR_Word) ml_backend__ml_code_gen__wrapper_arg_4), &ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_27);
    *ml_backend__ml_code_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_code_gen__conv3_LocalVarDefns_10));
    *ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv2_FuncDefns_11));
    *ml_backend__ml_code_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_code_gen__conv1_Stmts_12));
    *ml_backend__ml_code_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_code_gen__conv0_STATE_VARIABLE_Info_27));
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0(
  MR_Word ml_backend__ml_code_gen__Conjuncts_9,
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
  MR_Word ml_backend__ml_code_gen__Context_11,
  MR_Word * ml_backend__ml_code_gen__LocalVarDefns_12,
  MR_Word * ml_backend__ml_code_gen__FuncDefns_13,
  MR_Word * ml_backend__ml_code_gen__Stmts_14,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_28,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_29)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;

    if ((ml_backend__ml_code_gen__Conjuncts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__Stmts_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_code_gen__STATE_VARIABLE_Info_29);
      *ml_backend__ml_code_gen__LocalVarDefns_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_code_gen__FuncDefns_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word ml_backend__ml_code_gen__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Conjuncts_9, (MR_Integer) 1)));
      MR_Word ml_backend__ml_code_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Conjuncts_9, (MR_Integer) 0)));

      if ((ml_backend__ml_code_gen__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Var_48, ml_backend__ml_code_gen__LocalVarDefns_12, ml_backend__ml_code_gen__FuncDefns_13, ml_backend__ml_code_gen__Stmts_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_code_gen__STATE_VARIABLE_Info_29);
      else
      {
        MR_Word ml_backend__ml_code_gen__FirstGoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_48, (MR_Integer) 1)));
        MR_Word ml_backend__ml_code_gen__FirstDeterminism_23;
        MR_Word ml_backend__ml_code_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_48, (MR_Integer) 0)));
        MR_Word ml_backend__ml_code_gen__Var_46;
        MR_Word ml_backend__ml_code_gen__Var_24;

        ml_backend__ml_code_gen__FirstDeterminism_23 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ml_backend__ml_code_gen__FirstGoalInfo_22);
        parse_tree__prog_data__determinism_components_3_p_0(ml_backend__ml_code_gen__FirstDeterminism_23, &ml_backend__ml_code_gen__Var_24, &ml_backend__ml_code_gen__Var_46);
        ml_backend__ml_code_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_code_gen__Var_46);
        if (ml_backend__ml_code_gen__succeeded)
          ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_10, ml_backend__ml_code_gen__Var_48, ml_backend__ml_code_gen__LocalVarDefns_12, ml_backend__ml_code_gen__FuncDefns_13, ml_backend__ml_code_gen__Stmts_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_code_gen__STATE_VARIABLE_Info_29);
        else
        {
          MR_Word ml_backend__ml_code_gen__FirstCodeModel_25;
          MR_Word ml_backend__ml_code_gen__DoGenFirst_26;
          MR_Word ml_backend__ml_code_gen__DoGenRest_27;

          hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_gen__FirstDeterminism_23, &ml_backend__ml_code_gen__FirstCodeModel_25);
          {
            ml_backend__ml_code_gen__DoGenFirst_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_26, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_26, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_8_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_26, 3) = ((MR_Box) (ml_backend__ml_code_gen__FirstCodeModel_25));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenFirst_26, 4) = ((MR_Box) (ml_backend__ml_code_gen__Var_48));
          }
          {
            ml_backend__ml_code_gen__DoGenRest_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_27, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_27, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_8_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_27, 3) = ((MR_Box) (ml_backend__ml_code_gen__Var_47));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_27, 4) = ((MR_Box) (ml_backend__ml_code_gen__CodeModel_10));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__DoGenRest_27, 5) = ((MR_Box) (ml_backend__ml_code_gen__Context_11));
          }
          ml_backend__ml_code_util__ml_combine_conj_9_p_0(ml_backend__ml_code_gen__FirstCodeModel_25, ml_backend__ml_code_gen__Context_11, ml_backend__ml_code_gen__DoGenFirst_26, ml_backend__ml_code_gen__DoGenRest_27, ml_backend__ml_code_gen__LocalVarDefns_12, ml_backend__ml_code_gen__FuncDefns_13, ml_backend__ml_code_gen__Stmts_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_28, ml_backend__ml_code_gen__STATE_VARIABLE_Info_29);
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_8_p_0(
  MR_Word ml_backend__ml_code_gen__Cond_9,
  MR_Word ml_backend__ml_code_gen__CodeModel_10,
  MR_Word ml_backend__ml_code_gen__Context_11,
  MR_Word * ml_backend__ml_code_gen__LocalVarDefns_12,
  MR_Word * ml_backend__ml_code_gen__FuncDefns_13,
  MR_Word * ml_backend__ml_code_gen__Stmts_14,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_25,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_26)
{
  {
    MR_Word ml_backend__ml_code_gen__CondGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_code_gen__CondCodeModel_18;
    MR_Word ml_backend__ml_code_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_9, (MR_Integer) 0)));

    ml_backend__ml_code_gen__CondCodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__CondGoalInfo_17);
    switch (ml_backend__ml_code_gen__CodeModel_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_64;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_65;

          ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_code_gen__InitConstVarMap_64);
          ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_9, ml_backend__ml_code_gen__LocalVarDefns_12, ml_backend__ml_code_gen__FuncDefns_13, ml_backend__ml_code_gen__Stmts_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_65);
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_64, ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_65, ml_backend__ml_code_gen__STATE_VARIABLE_Info_26);
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
        switch (ml_backend__ml_code_gen__CondCodeModel_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_code_gen__CondStmts_21;
              MR_Word ml_backend__ml_code_gen__SetSuccessFalse_22;
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_43_43;
              MR_Word ml_backend__ml_code_gen__Var_47;
              MR_Word ml_backend__ml_code_gen__InitConstVarMap_75;
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_76;

              ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_code_gen__InitConstVarMap_75);
              ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 0, ml_backend__ml_code_gen__Cond_9, ml_backend__ml_code_gen__LocalVarDefns_12, ml_backend__ml_code_gen__FuncDefns_13, &ml_backend__ml_code_gen__CondStmts_21, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_76);
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_75, ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_76, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_43_43);
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[2]), ml_backend__ml_code_gen__Context_11, &ml_backend__ml_code_gen__SetSuccessFalse_22, ml_backend__ml_code_gen__STATE_VARIABLE_Info_43_43, ml_backend__ml_code_gen__STATE_VARIABLE_Info_26);
              {
                ml_backend__ml_code_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_47, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetSuccessFalse_22));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *ml_backend__ml_code_gen__Stmts_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_gen__CondStmts_21, ml_backend__ml_code_gen__Var_47);
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
              MR_Word ml_backend__ml_code_gen__Succeeded_23;
              MR_Word ml_backend__ml_code_gen__InvertSuccess_24;
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_34_34;
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_35_35;
              MR_Word ml_backend__ml_code_gen__Var_36;
              MR_Word ml_backend__ml_code_gen__Var_40;
              MR_Word ml_backend__ml_code_gen__CondStmts_53;
              MR_Word ml_backend__ml_code_gen__InitConstVarMap_86;
              MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_87;

              ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_code_gen__InitConstVarMap_86);
              ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_9, ml_backend__ml_code_gen__LocalVarDefns_12, ml_backend__ml_code_gen__FuncDefns_13, &ml_backend__ml_code_gen__CondStmts_53, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_87);
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_86, ml_backend__ml_code_gen__STATE_VARIABLE_Info_17_87, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_34_34);
              ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&ml_backend__ml_code_gen__Succeeded_23, ml_backend__ml_code_gen__STATE_VARIABLE_Info_34_34, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_35_35);
              {
                ml_backend__ml_code_gen__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_4[0])));
                MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_36, 2) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_23));
              }
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0(ml_backend__ml_code_gen__Var_36, ml_backend__ml_code_gen__Context_11, &ml_backend__ml_code_gen__InvertSuccess_24, ml_backend__ml_code_gen__STATE_VARIABLE_Info_35_35, ml_backend__ml_code_gen__STATE_VARIABLE_Info_26);
              {
                ml_backend__ml_code_gen__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_40, 0) = ((MR_Box) (ml_backend__ml_code_gen__InvertSuccess_24));
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *ml_backend__ml_code_gen__Stmts_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_gen__CondStmts_53, ml_backend__ml_code_gen__Var_40);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_ite_10_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_11,
  MR_Word ml_backend__ml_code_gen__Cond_12,
  MR_Word ml_backend__ml_code_gen__Then_13,
  MR_Word ml_backend__ml_code_gen__Else_14,
  MR_Word ml_backend__ml_code_gen__Context_15,
  MR_Word * ml_backend__ml_code_gen__LocalVarDefns_16,
  MR_Word * ml_backend__ml_code_gen__FuncDefns_17,
  MR_Word * ml_backend__ml_code_gen__Stmts_18,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_46,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_47)
{
  {
    MR_Word ml_backend__ml_code_gen__CondGoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_12, (MR_Integer) 1)));
    MR_Word ml_backend__ml_code_gen__CondCodeModel_22;
    MR_Word ml_backend__ml_code_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Cond_12, (MR_Integer) 0)));

    ml_backend__ml_code_gen__CondCodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__CondGoalInfo_21);
    switch (ml_backend__ml_code_gen__CondCodeModel_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_gen__CondStmt_23;
          MR_Word ml_backend__ml_code_gen__ThenStmt_24;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_90_90;
          MR_Word ml_backend__ml_code_gen__Var_92;

          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, ml_backend__ml_code_gen__Cond_12, &ml_backend__ml_code_gen__CondStmt_23, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_90_90);
          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Then_13, &ml_backend__ml_code_gen__ThenStmt_24, ml_backend__ml_code_gen__STATE_VARIABLE_Info_90_90, ml_backend__ml_code_gen__STATE_VARIABLE_Info_47);
          *ml_backend__ml_code_gen__LocalVarDefns_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_code_gen__FuncDefns_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ml_backend__ml_code_gen__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_92, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenStmt_24));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_code_gen__Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_gen__CondStmt_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_92));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_code_gen__CondVar_32;
          MR_Word ml_backend__ml_code_gen__CondVarDecl_33;
          MR_Word ml_backend__ml_code_gen__SetCondFalse_34;
          MR_Word ml_backend__ml_code_gen__ThenFuncLabel_35;
          MR_Word ml_backend__ml_code_gen__ThenFuncLabelRval_36;
          MR_Word ml_backend__ml_code_gen__EnvPtrRval_37;
          MR_Word ml_backend__ml_code_gen__SuccessCont_38;
          MR_Word ml_backend__ml_code_gen__ThenGoalInfo_40;
          MR_Word ml_backend__ml_code_gen__ThenContext_41;
          MR_Word ml_backend__ml_code_gen__SetCondTrue_42;
          MR_Word ml_backend__ml_code_gen__ThenFuncBody_43;
          MR_Word ml_backend__ml_code_gen__ThenFuncDefn_44;
          MR_Word ml_backend__ml_code_gen__CondSucceeded_45;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_48_48;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_52_52;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_55_55;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_58_58;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_61_61;
          MR_Word ml_backend__ml_code_gen__Var_64;
          MR_Word ml_backend__ml_code_gen__Var_65;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68;
          MR_Word ml_backend__ml_code_gen__Var_70;
          MR_Word ml_backend__ml_code_gen__Var_74;
          MR_Word ml_backend__ml_code_gen__Var_76;
          MR_Word ml_backend__ml_code_gen__Var_77;
          MR_Word ml_backend__ml_code_gen__ThenStmt_95;
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_96;
          MR_Word ml_backend__ml_code_gen__CondLocalVarDefns_97;
          MR_Word ml_backend__ml_code_gen__CondFuncDefns_98;
          MR_Word ml_backend__ml_code_gen__CondStmts_99;
          MR_Word ml_backend__ml_code_gen__ElseStmt_100;
          MR_Word ml_backend__ml_code_gen__IfStmt_101;
          MR_Word ml_backend__ml_code_gen__Var_39;

          ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_code_gen__InitConstVarMap_96);
          ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_p_0(&ml_backend__ml_code_gen__CondVar_32, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_48_48);
          ml_backend__ml_code_gen__CondVarDecl_33 = ml_backend__ml_code_util__ml_gen_cond_var_decl_2_f_0(ml_backend__ml_code_gen__CondVar_32, ml_backend__ml_code_gen__Context_15);
          ml_backend__ml_code_util__ml_gen_set_cond_var_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_48_48, ml_backend__ml_code_gen__CondVar_32, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[2]), ml_backend__ml_code_gen__Context_15, &ml_backend__ml_code_gen__SetCondFalse_34);
          ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_gen__ThenFuncLabel_35, &ml_backend__ml_code_gen__ThenFuncLabelRval_36, ml_backend__ml_code_gen__STATE_VARIABLE_Info_48_48, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_52_52);
          ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_52_52, &ml_backend__ml_code_gen__EnvPtrRval_37);
          {
            ml_backend__ml_code_gen__SuccessCont_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_38, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenFuncLabelRval_36));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_38, 1) = ((MR_Box) (ml_backend__ml_code_gen__EnvPtrRval_37));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__SuccessCont_38, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_code_gen__SuccessCont_38, ml_backend__ml_code_gen__STATE_VARIABLE_Info_52_52, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_55_55);
          ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 2, ml_backend__ml_code_gen__Cond_12, &ml_backend__ml_code_gen__CondLocalVarDefns_97, &ml_backend__ml_code_gen__CondFuncDefns_98, &ml_backend__ml_code_gen__CondStmts_99, ml_backend__ml_code_gen__STATE_VARIABLE_Info_55_55, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57);
          ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_57_57, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_58_58);
          ml_backend__ml_code_gen__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Then_13, (MR_Integer) 0)));
          ml_backend__ml_code_gen__ThenGoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Then_13, (MR_Integer) 1)));
          ml_backend__ml_code_gen__ThenContext_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__ThenGoalInfo_40);
          ml_backend__ml_code_util__ml_gen_set_cond_var_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_58_58, ml_backend__ml_code_gen__CondVar_32, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[1]), ml_backend__ml_code_gen__ThenContext_41, &ml_backend__ml_code_gen__SetCondTrue_42);
          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Then_13, &ml_backend__ml_code_gen__ThenStmt_95, ml_backend__ml_code_gen__STATE_VARIABLE_Info_58_58, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_61_61);
          {
            ml_backend__ml_code_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_65, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenStmt_95));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_code_gen__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_64, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetCondTrue_42));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_64, 1) = ((MR_Box) (ml_backend__ml_code_gen__Var_65));
          }
          {
            ml_backend__ml_code_gen__ThenFuncBody_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__ThenFuncBody_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__ThenFuncBody_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__ThenFuncBody_43, 2) = ((MR_Box) (ml_backend__ml_code_gen__Var_64));
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__ThenFuncBody_43, 3) = ((MR_Box) (ml_backend__ml_code_gen__ThenContext_41));
          }
          ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_61_61, ml_backend__ml_code_gen__ThenFuncLabel_35, ml_backend__ml_code_gen__ThenContext_41, ml_backend__ml_code_gen__ThenFuncBody_43, &ml_backend__ml_code_gen__ThenFuncDefn_44);
          ml_backend__ml_code_util__ml_gen_test_cond_var_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_61_61, ml_backend__ml_code_gen__CondVar_32, &ml_backend__ml_code_gen__CondSucceeded_45);
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_96, ml_backend__ml_code_gen__STATE_VARIABLE_Info_61_61, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67);
          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Else_14, &ml_backend__ml_code_gen__ElseStmt_100, ml_backend__ml_code_gen__STATE_VARIABLE_Info_67_67, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68);
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_96, ml_backend__ml_code_gen__STATE_VARIABLE_Info_68_68, ml_backend__ml_code_gen__STATE_VARIABLE_Info_47);
          {
            ml_backend__ml_code_gen__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_4[0])));
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Var_70, 2) = ((MR_Box) (ml_backend__ml_code_gen__CondSucceeded_45));
          }
          {
            ml_backend__ml_code_gen__IfStmt_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 0) = ((MR_Box) (ml_backend__ml_code_gen__Var_70));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 1) = ((MR_Box) (ml_backend__ml_code_gen__ElseStmt_100));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_101, 3) = ((MR_Box) (ml_backend__ml_code_gen__Context_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_code_gen__LocalVarDefns_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_gen__CondVarDecl_33));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_gen__CondLocalVarDefns_97));
          }
          {
            ml_backend__ml_code_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_74, 0) = ((MR_Box) (ml_backend__ml_code_gen__ThenFuncDefn_44));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *ml_backend__ml_code_gen__FuncDefns_17 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, ml_backend__ml_code_gen__CondFuncDefns_98, ml_backend__ml_code_gen__Var_74);
          {
            ml_backend__ml_code_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_76, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetCondFalse_34));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_76, 1) = ((MR_Box) (ml_backend__ml_code_gen__CondStmts_99));
          }
          {
            ml_backend__ml_code_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_77, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_101));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *ml_backend__ml_code_gen__Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_gen__Var_76, ml_backend__ml_code_gen__Var_77);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_gen__InitConstVarMap_25;
          MR_Word ml_backend__ml_code_gen__CondStmts_28;
          MR_Word ml_backend__ml_code_gen__Succeeded_29;
          MR_Word ml_backend__ml_code_gen__ElseStmt_30;
          MR_Word ml_backend__ml_code_gen__IfStmt_31;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_80_80;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83;
          MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84;
          MR_Word ml_backend__ml_code_gen__Var_86;
          MR_Word ml_backend__ml_code_gen__Var_87;
          MR_Word ml_backend__ml_code_gen__ThenStmt_94;

          ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_code_gen__InitConstVarMap_25);
          ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 1, ml_backend__ml_code_gen__Cond_12, ml_backend__ml_code_gen__LocalVarDefns_16, ml_backend__ml_code_gen__FuncDefns_17, &ml_backend__ml_code_gen__CondStmts_28, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_80_80);
          ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&ml_backend__ml_code_gen__Succeeded_29, ml_backend__ml_code_gen__STATE_VARIABLE_Info_80_80, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81);
          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Then_13, &ml_backend__ml_code_gen__ThenStmt_94, ml_backend__ml_code_gen__STATE_VARIABLE_Info_81_81, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82);
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_25, ml_backend__ml_code_gen__STATE_VARIABLE_Info_82_82, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83);
          ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Else_14, &ml_backend__ml_code_gen__ElseStmt_30, ml_backend__ml_code_gen__STATE_VARIABLE_Info_83_83, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84);
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_gen__InitConstVarMap_25, ml_backend__ml_code_gen__STATE_VARIABLE_Info_84_84, ml_backend__ml_code_gen__STATE_VARIABLE_Info_47);
          {
            ml_backend__ml_code_gen__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_86, 0) = ((MR_Box) (ml_backend__ml_code_gen__ElseStmt_30));
          }
          {
            ml_backend__ml_code_gen__IfStmt_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_31, 0) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_29));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_31, 1) = ((MR_Box) (ml_backend__ml_code_gen__ThenStmt_94));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_31, 2) = ((MR_Box) (ml_backend__ml_code_gen__Var_86));
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_31, 3) = ((MR_Box) (ml_backend__ml_code_gen__Context_15));
          }
          {
            ml_backend__ml_code_gen__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_87, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_31));
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *ml_backend__ml_code_gen__Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_gen__CondStmts_28, ml_backend__ml_code_gen__Var_87);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0_1(
  MR_Box ml_backend__ml_code_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;
    MR_Box ml_backend__ml_code_gen__closure = ml_backend__ml_code_gen__closure_arg;

    ml_backend__ml_code_gen__succeeded = ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__624__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__closure, (MR_Integer) 4))));
    return ml_backend__ml_code_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0(
  MR_Word ml_backend__ml_code_gen__GoalExpr_10,
  MR_Word ml_backend__ml_code_gen__CodeModel_11,
  MR_Word ml_backend__ml_code_gen__Context_12,
  MR_Word ml_backend__ml_code_gen__GoalInfo_13,
  MR_Word * ml_backend__ml_code_gen__LocalVarDefns_14,
  MR_Word * ml_backend__ml_code_gen__FuncDefns_15,
  MR_Word * ml_backend__ml_code_gen__Stmts_16,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_88)
{
  {
    MR_bool ml_backend__ml_code_gen__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_code_gen__SubGoal_58 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_gen__GoalExpr_10), (MR_Integer) 0);

          ml_backend__ml_code_gen__ml_gen_negation_8_p_0(ml_backend__ml_code_gen__SubGoal_58, ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Context_12, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_code_gen__Unification_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 3)));
          MR_Word ml_backend__ml_code_gen___LHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 0)));
          MR_Word ml_backend__ml_code_gen___RHS_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 1)));
          MR_Word ml_backend__ml_code_gen___Mode_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 2)));
          MR_Word ml_backend__ml_code_gen___UnifyContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 4)));

          ml_backend__ml_unify_gen__ml_gen_unification_6_p_0(ml_backend__ml_code_gen__Unification_21, ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Context_12, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
          *ml_backend__ml_code_gen__LocalVarDefns_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_code_gen__FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_code_gen__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 0)));
          MR_Integer ml_backend__ml_code_gen__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 1)));
          MR_Word ml_backend__ml_code_gen__ArgVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 2)));
          MR_Word ml_backend__ml_code_gen__BuiltinState_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 3)));
          MR_Word ml_backend__ml_code_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 4)));
          MR_Word ml_backend__ml_code_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 5)));

          switch (ml_backend__ml_code_gen__BuiltinState_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ml_backend__ml_call_gen__ml_gen_builtin_10_p_0(ml_backend__ml_code_gen__PredId_23, ml_backend__ml_code_gen__ProcId_24, ml_backend__ml_code_gen__ArgVars_25, ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Context_12, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_code_gen__ArgLvals_29;
                MR_Word ml_backend__ml_code_gen__VarSet_30;
                MR_Word ml_backend__ml_code_gen__ArgNames_31;
                MR_Word ml_backend__ml_code_gen__ActualArgTypes_32;

                ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__ArgVars_25, &ml_backend__ml_code_gen__ArgLvals_29);
                ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, &ml_backend__ml_code_gen__VarSet_30);
                ml_backend__ml_code_gen__ArgNames_31 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(ml_backend__ml_code_gen__VarSet_30, ml_backend__ml_code_gen__ArgVars_25);
                ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__ArgVars_25, &ml_backend__ml_code_gen__ActualArgTypes_32);
                ml_backend__ml_call_gen__ml_gen_plain_call_13_p_0(ml_backend__ml_code_gen__PredId_23, ml_backend__ml_code_gen__ProcId_24, ml_backend__ml_code_gen__ArgNames_31, ml_backend__ml_code_gen__ArgLvals_29, ml_backend__ml_code_gen__ActualArgTypes_32, ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Context_12, (MR_Integer) 0, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_code_gen__GenericCall_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__Vars_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen__Modes_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 3)));
              MR_Word ml_backend__ml_code_gen__Detism_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 5)));
              MR_Word ml_backend__ml_code_gen__CallCodeModel_39;
              MR_Word ml_backend__ml_code_gen__Var_113;
              MR_Word ml_backend__ml_code_gen__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 4)));

              hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_gen__Detism_38, &ml_backend__ml_code_gen__CallCodeModel_39);
              {
                ml_backend__ml_code_gen__Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_113, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_113, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_113, 3) = ((MR_Box) (ml_backend__ml_code_gen__CodeModel_11));
                MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Var_113, 4) = ((MR_Box) (ml_backend__ml_code_gen__CallCodeModel_39));
              }
              mercury__require__expect_4_p_0(ml_backend__ml_code_gen__Var_113, (MR_String) "ml_backend.ml_code_gen", (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/9", (MR_String) "code model mismatch");
              ml_backend__ml_call_gen__ml_gen_generic_call_10_p_0(ml_backend__ml_code_gen__GenericCall_34, ml_backend__ml_code_gen__Vars_35, ml_backend__ml_code_gen__Modes_36, ml_backend__ml_code_gen__Detism_38, ml_backend__ml_code_gen__Context_12, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_code_gen__Attributes_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__Args_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 4)));
              MR_Word ml_backend__ml_code_gen__ExtraArgs_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 5)));
              MR_Word ml_backend__ml_code_gen__MaybeTraceRuntimeCond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 6)));
              MR_Word ml_backend__ml_code_gen__PragmaImpl_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 7)));
              MR_String ml_backend__ml_code_gen__ForeignCode_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__PragmaImpl_44, (MR_Integer) 0)));
              MR_Word ml_backend__ml_code_gen__MaybeContext_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__PragmaImpl_44, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__ContextToUse_47;
              MR_Word ml_backend__ml_code_gen__PredId_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Integer ml_backend__ml_code_gen__ProcId_122 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 3)));

              if ((ml_backend__ml_code_gen__MaybeContext_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ml_backend__ml_code_gen__ContextToUse_47 = ml_backend__ml_code_gen__Context_12;
              else
                ml_backend__ml_code_gen__ContextToUse_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__MaybeContext_46, (MR_Integer) 0)));
              if ((ml_backend__ml_code_gen__MaybeTraceRuntimeCond_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Attributes_40, ml_backend__ml_code_gen__PredId_121, ml_backend__ml_code_gen__ProcId_122, ml_backend__ml_code_gen__Args_41, ml_backend__ml_code_gen__ExtraArgs_42, ml_backend__ml_code_gen__ForeignCode_45, ml_backend__ml_code_gen__ContextToUse_47, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                *ml_backend__ml_code_gen__FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word ml_backend__ml_code_gen__TraceRuntimeCond_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__MaybeTraceRuntimeCond_43, (MR_Integer) 0)));

                ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_5_p_0(ml_backend__ml_code_gen__TraceRuntimeCond_48, ml_backend__ml_code_gen__ContextToUse_47, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                *ml_backend__ml_code_gen__LocalVarDefns_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *ml_backend__ml_code_gen__FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_code_gen__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen___ConjType_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 1)));

              ml_backend__ml_code_gen__ml_gen_conj_8_p_0(ml_backend__ml_code_gen__Goals_50, ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Context_12, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_code_gen__Goals_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 1)));

              ml_backend__ml_disj_gen__ml_gen_disj_7_p_0(ml_backend__ml_code_gen__Goals_123, ml_backend__ml_code_gen__GoalInfo_13, ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Context_12, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
              *ml_backend__ml_code_gen__LocalVarDefns_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_code_gen__FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__ml_code_gen__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__CanFail_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen__CasesList_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 3)));

              ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(ml_backend__ml_code_gen__Var_51, ml_backend__ml_code_gen__CanFail_52, ml_backend__ml_code_gen__CasesList_53, ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Context_12, ml_backend__ml_code_gen__GoalInfo_13, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
              *ml_backend__ml_code_gen__FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_code_gen__Reason_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word ml_backend__ml_code_gen__SubGoal_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) ml_backend__ml_code_gen__Reason_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  ml_backend__ml_commit_gen__ml_gen_commit_8_p_0(ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Context_12, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_code_gen__HeadWarning_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Reason_59, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_code_gen__TailWarnings_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Reason_59, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_code_gen__Warnings0_75;
                    MR_Word ml_backend__ml_code_gen__Warnings_76;
                    MR_Word ml_backend__ml_code_gen__Var_97;
                    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_98_98;
                    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_99_99;

                    ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, &ml_backend__ml_code_gen__Warnings0_75);
                    {
                      ml_backend__ml_code_gen__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_97, 0) = ((MR_Box) (ml_backend__ml_code_gen__HeadWarning_73));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_97, 1) = ((MR_Box) (ml_backend__ml_code_gen__TailWarnings_74));
                    }
                    mercury__set__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, ml_backend__ml_code_gen__Var_97, ml_backend__ml_code_gen__Warnings0_75, &ml_backend__ml_code_gen__Warnings_76);
                    ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(ml_backend__ml_code_gen__Warnings_76, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_98_98);
                    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_98_98, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_99_99);
                    ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(ml_backend__ml_code_gen__Warnings0_75, ml_backend__ml_code_gen__STATE_VARIABLE_Info_99_99, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_59, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                      break;
                    case (MR_Integer) 2:
                      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                      break;
                    case (MR_Integer) 3:
                      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                      break;
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      ml_backend__ml_commit_gen__ml_gen_commit_8_p_0(ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Context_12, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word ml_backend__ml_code_gen__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_59, (MR_Integer) 2)));
                        MR_Word ml_backend__ml_code_gen__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__Reason_59, (MR_Integer) 1)));

                        switch (ml_backend__ml_code_gen__Var_127) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              ml_backend__ml_unify_gen__ml_gen_ground_term_5_p_0(ml_backend__ml_code_gen__Var_128, ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                              *ml_backend__ml_code_gen__LocalVarDefns_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              *ml_backend__ml_code_gen__FuncDefns_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            }
                            break;
                          case (MR_Integer) 2:
                            ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
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
                            ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__SubGoal_124, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
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
              MR_Word ml_backend__ml_code_gen__Cond_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Word ml_backend__ml_code_gen__Then_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 3)));
              MR_Word ml_backend__ml_code_gen__Else_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 4)));
              MR_Word ml_backend__ml_code_gen___Vars_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_10, (MR_Integer) 1)));

              ml_backend__ml_code_gen__ml_gen_ite_10_p_0(ml_backend__ml_code_gen__CodeModel_11, ml_backend__ml_code_gen__Cond_55, ml_backend__ml_code_gen__Then_56, ml_backend__ml_code_gen__Else_57, ml_backend__ml_code_gen__Context_12, ml_backend__ml_code_gen__LocalVarDefns_14, ml_backend__ml_code_gen__FuncDefns_15, ml_backend__ml_code_gen__Stmts_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_87, ml_backend__ml_code_gen__STATE_VARIABLE_Info_88);
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
ml_backend__ml_code_gen__ml_gen_goal_7_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_8,
  MR_Word ml_backend__ml_code_gen__Goal_9,
  MR_Word * ml_backend__ml_code_gen__LocalVarDefns_10,
  MR_Word * ml_backend__ml_code_gen__FuncDefns_11,
  MR_Word * ml_backend__ml_code_gen__Stmts_12,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_27)
{
  {
    MR_Word ml_backend__ml_code_gen__TypeCtorInfo_19_46;
    MR_Word ml_backend__ml_code_gen__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_code_gen__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_code_gen__Context_16;
    MR_Word ml_backend__ml_code_gen__VarTypes_17;
    MR_Word ml_backend__ml_code_gen__VarSet_19;
    MR_Word ml_backend__ml_code_gen__VarDefns_20;
    MR_Word ml_backend__ml_code_gen__GoalCodeModel_21;
    MR_Word ml_backend__ml_code_gen__GoalLocalVarDefns_22;
    MR_Word ml_backend__ml_code_gen__GoalStmts0_24;
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_28_28;
    MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29;
    MR_Word ml_backend__ml_code_gen__SubGoalNonLocals_36;
    MR_Word ml_backend__ml_code_gen__NonLocals_37;
    MR_Word ml_backend__ml_code_gen__VarsToDeclareSet_38;
    MR_Word ml_backend__ml_code_gen__VarsToDeclare0_39;

    ml_backend__ml_code_gen__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_15);
    ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_code_gen__VarTypes_17);
    ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(ml_backend__ml_code_gen__GoalExpr_14, &ml_backend__ml_code_gen__SubGoalNonLocals_36);
    ml_backend__ml_code_gen__NonLocals_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_code_gen__GoalInfo_15);
    ml_backend__ml_code_gen__TypeCtorInfo_19_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__difference_3_p_0(ml_backend__ml_code_gen__TypeCtorInfo_19_46, ml_backend__ml_code_gen__SubGoalNonLocals_36, ml_backend__ml_code_gen__NonLocals_37, &ml_backend__ml_code_gen__VarsToDeclareSet_38);
    parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_code_gen__TypeCtorInfo_19_46, ml_backend__ml_code_gen__VarsToDeclareSet_38, &ml_backend__ml_code_gen__VarsToDeclare0_39);
    ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_code_gen__VarSet_19);
    if ((ml_backend__ml_code_gen__VarsToDeclare0_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_code_gen__VarDefns_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ml_backend__ml_code_gen__STATE_VARIABLE_Info_28_28 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26;
    }
    else
    {
      MR_Word ml_backend__ml_code_gen__VarsToDeclare_18;
      MR_Word ml_backend__ml_code_gen__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__VarsToDeclare0_39, (MR_Integer) 1)));
      MR_Word ml_backend__ml_code_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__VarsToDeclare0_39, (MR_Integer) 0)));

      if ((ml_backend__ml_code_gen__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__ml_code_gen__VarsToDeclare_18 = ml_backend__ml_code_gen__VarsToDeclare0_39;
      else
        ml_backend__ml_code_gen__VarsToDeclare_18 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(ml_backend__ml_code_gen__VarsToDeclare0_39, ml_backend__ml_code_gen__VarTypes_17);
      ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_code_gen__VarSet_19, ml_backend__ml_code_gen__VarTypes_17, ml_backend__ml_code_gen__Context_16, ml_backend__ml_code_gen__VarsToDeclare_18, &ml_backend__ml_code_gen__VarDefns_20, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_28_28);
    }
    ml_backend__ml_code_gen__GoalCodeModel_21 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__ml_code_gen__GoalInfo_15);
    ml_backend__ml_code_gen__ml_gen_goal_expr_9_p_0(ml_backend__ml_code_gen__GoalExpr_14, ml_backend__ml_code_gen__GoalCodeModel_21, ml_backend__ml_code_gen__Context_16, ml_backend__ml_code_gen__GoalInfo_15, &ml_backend__ml_code_gen__GoalLocalVarDefns_22, ml_backend__ml_code_gen__FuncDefns_11, &ml_backend__ml_code_gen__GoalStmts0_24, ml_backend__ml_code_gen__STATE_VARIABLE_Info_28_28, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29);
    ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(ml_backend__ml_code_gen__CodeModel_8, ml_backend__ml_code_gen__GoalCodeModel_21, ml_backend__ml_code_gen__Context_16, ml_backend__ml_code_gen__GoalStmts0_24, ml_backend__ml_code_gen__Stmts_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29, ml_backend__ml_code_gen__STATE_VARIABLE_Info_27);
    *ml_backend__ml_code_gen__LocalVarDefns_10 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ml_backend__ml_code_gen__VarDefns_20, ml_backend__ml_code_gen__GoalLocalVarDefns_22);
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(
  MR_Word ml_backend__ml_code_gen__CodeModel_6,
  MR_Word ml_backend__ml_code_gen__Goal_7,
  MR_Word * ml_backend__ml_code_gen__Stmt_8,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_16,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_17)
{
  {
    MR_Word ml_backend__ml_code_gen__LocalVarDefns_10;
    MR_Word ml_backend__ml_code_gen__FuncDefns_11;
    MR_Word ml_backend__ml_code_gen__Stmts_12;
    MR_Word ml_backend__ml_code_gen__GoalInfo_14;
    MR_Word ml_backend__ml_code_gen__Context_15;
    MR_Word ml_backend__ml_code_gen__Var_13;

    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_code_gen__CodeModel_6, ml_backend__ml_code_gen__Goal_7, &ml_backend__ml_code_gen__LocalVarDefns_10, &ml_backend__ml_code_gen__FuncDefns_11, &ml_backend__ml_code_gen__Stmts_12, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_16, ml_backend__ml_code_gen__STATE_VARIABLE_Info_17);
    ml_backend__ml_code_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 0)));
    ml_backend__ml_code_gen__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_gen__Goal_7, (MR_Integer) 1)));
    ml_backend__ml_code_gen__Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_code_gen__GoalInfo_14);
    *ml_backend__ml_code_gen__Stmt_8 = ml_backend__ml_code_util__ml_gen_block_4_f_0(ml_backend__ml_code_gen__LocalVarDefns_10, ml_backend__ml_code_gen__FuncDefns_11, ml_backend__ml_code_gen__Stmts_12, ml_backend__ml_code_gen__Context_15);
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

    ml_backend__ml_code_gen__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ml_backend__ml_code_gen__wrapper_arg_1));
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

    ml_backend__ml_code_gen__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ml_backend__ml_code_gen__wrapper_arg_1));
    ml_backend__ml_code_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_gen__conv0_HeadVar__2_2));
    return ml_backend__ml_code_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(
  MR_Word ml_backend__ml_code_gen__GoalExpr_3,
  MR_Word * ml_backend__ml_code_gen__SubGoalNonLocals_4)
{
  switch (MR_tag((MR_Word) ml_backend__ml_code_gen__GoalExpr_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ml_backend__ml_code_gen__SubGoal_48 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_gen__GoalExpr_3), (MR_Integer) 0);

        *ml_backend__ml_code_gen__SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_48);
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
              *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_84);
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
              *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_83);
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
              *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_80);
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
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_77);
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

        *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_94);
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
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_73);
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
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_72);
                }
                break;
              case (MR_Integer) 2:
                {
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_95);
                }
                break;
              case (MR_Integer) 3:
                {
                  *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__ArgVars_95);
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

            ml_backend__ml_code_gen__ArgVars_98 = mercury__list__map_2_f_0(ml_backend__ml_code_gen__TypeCtorInfo_112_112, ml_backend__ml_code_gen__TypeInfo_113_113, (MR_Word) &ml_backend__ml_code_gen_scalar_common_3[0], ml_backend__ml_code_gen__Args_43);
            ml_backend__ml_code_gen__ExtraVars_47 = mercury__list__map_2_f_0(ml_backend__ml_code_gen__TypeCtorInfo_112_112, ml_backend__ml_code_gen__TypeInfo_113_113, (MR_Word) &ml_backend__ml_code_gen_scalar_common_3[1], ml_backend__ml_code_gen__ExtraArgs_44);
            ml_backend__ml_code_gen__Var_71 = mercury__list__f_43_43_2_f_0(ml_backend__ml_code_gen__TypeInfo_113_113, ml_backend__ml_code_gen__ExtraVars_47, ml_backend__ml_code_gen__ArgVars_98);
            *ml_backend__ml_code_gen__SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__Var_71);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__ml_code_gen__SubGoals_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
            MR_Word ml_backend__ml_code_gen__Var_68;
            MR_Word ml_backend__ml_code_gen__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));

            ml_backend__ml_code_gen__Var_68 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__SubGoals_51, ml_backend__ml_code_gen__Var_68, ml_backend__ml_code_gen__SubGoalNonLocals_4);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ml_backend__ml_code_gen__SubGoals_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
            MR_Word ml_backend__ml_code_gen__Var_123;

            ml_backend__ml_code_gen__Var_123 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__SubGoals_122, ml_backend__ml_code_gen__Var_123, ml_backend__ml_code_gen__SubGoalNonLocals_4);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ml_backend__ml_code_gen__Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 3)));
            MR_Word ml_backend__ml_code_gen__Var_62;
            MR_Word ml_backend__ml_code_gen___Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));
            MR_Word ml_backend__ml_code_gen___CanFail_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));

            ml_backend__ml_code_gen__Var_62 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(ml_backend__ml_code_gen__Cases_57, ml_backend__ml_code_gen__Var_62, ml_backend__ml_code_gen__SubGoalNonLocals_4);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ml_backend__ml_code_gen__SubGoal_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 2)));
            MR_Word ml_backend__ml_code_gen___Reason_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_gen__GoalExpr_3, (MR_Integer) 1)));

            *ml_backend__ml_code_gen__SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_125);
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
            ml_backend__ml_code_gen__Var_64 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            ml_backend__ml_code_gen__SubGoal_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_63, (MR_Integer) 0)));
            ml_backend__ml_code_gen__SubGoals_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_63, (MR_Integer) 1)));
            ml_backend__ml_code_gen__NonLocals_132 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_129);
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_132, ml_backend__ml_code_gen__Var_64, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135);
            ml_backend__ml_code_gen__SubGoal_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_130, (MR_Integer) 0)));
            ml_backend__ml_code_gen__SubGoals_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_130, (MR_Integer) 1)));
            ml_backend__ml_code_gen__NonLocals_144 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_141);
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_144, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_135, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147);
            ml_backend__ml_code_gen__SubGoal_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_142, (MR_Integer) 0)));
            ml_backend__ml_code_gen__SubGoals_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__SubGoals_142, (MR_Integer) 1)));
            ml_backend__ml_code_gen__NonLocals_156 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_153);
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_156, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_147, ml_backend__ml_code_gen__SubGoalNonLocals_4);
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
  MR_Word ml_backend__ml_code_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
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

      ml_backend__ml_code_gen__NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_12);
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_13, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16);
      /* direct tailcall eliminated */
      {
        MR_Word ml_backend__ml_code_gen__next_value_of_HeadVar__1_1 = ml_backend__ml_code_gen__Cases_8;
        MR_Word ml_backend__ml_code_gen__next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_16_16;

        ml_backend__ml_code_gen__HeadVar__1_1 = ml_backend__ml_code_gen__next_value_of_HeadVar__1_1;
        ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;
      }
      continue;
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
    if ((ml_backend__ml_code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_3 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2;
    else
    {
      MR_Word ml_backend__ml_code_gen__SubGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_code_gen__SubGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_code_gen__NonLocals_10;
      MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13;

      ml_backend__ml_code_gen__NonLocals_10 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(ml_backend__ml_code_gen__SubGoal_7);
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_gen__NonLocals_10, ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2, &ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13);
      /* direct tailcall eliminated */
      {
        MR_Word ml_backend__ml_code_gen__next_value_of_HeadVar__1_1 = ml_backend__ml_code_gen__SubGoals_8;
        MR_Word ml_backend__ml_code_gen__next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_13_13;

        ml_backend__ml_code_gen__HeadVar__1_1 = ml_backend__ml_code_gen__next_value_of_HeadVar__1_1;
        ml_backend__ml_code_gen__STATE_VARIABLE_SubGoalNonLocals_0_2 = ml_backend__ml_code_gen__next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;
      }
      continue;
    }
    break;
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

      hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_code_gen__HeadVar__2_2, ml_backend__ml_code_gen__Var_17, &ml_backend__ml_code_gen__Type_21);
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_code_gen__ModuleInfo_22);
      ml_backend__ml_code_gen__IsDummy_23 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_gen__ModuleInfo_22, ml_backend__ml_code_gen__Type_21);
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

            ml_backend__ml_code_gen__VarName_24 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(ml_backend__ml_code_gen__HeadVar__1_1, ml_backend__ml_code_gen__Var_17);
            ml_backend__ml_code_util__ml_gen_local_var_decl_6_p_0(ml_backend__ml_code_gen__VarName_24, ml_backend__ml_code_gen__Type_21, ml_backend__ml_code_gen__HeadVar__3_3, &ml_backend__ml_code_gen__Defn_25, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29);
            ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_code_gen__HeadVar__1_1, ml_backend__ml_code_gen__HeadVar__2_2, ml_backend__ml_code_gen__HeadVar__3_3, ml_backend__ml_code_gen__Vars_18, &ml_backend__ml_code_gen__Defns0_26, ml_backend__ml_code_gen__STATE_VARIABLE_Info_29_29, ml_backend__ml_code_gen__STATE_VARIABLE_Info_7);
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
    break;
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(
  MR_Word ml_backend__ml_code_gen__OuterCodeModel_8,
  MR_Word ml_backend__ml_code_gen__InnerCodeModel_9,
  MR_Word ml_backend__ml_code_gen__Context_10,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_0_17,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_18,
  MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_19,
  MR_Word * ml_backend__ml_code_gen__STATE_VARIABLE_Info_20)
{
  switch (ml_backend__ml_code_gen__OuterCodeModel_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (ml_backend__ml_code_gen__InnerCodeModel_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_18 = ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_0_17;
            *ml_backend__ml_code_gen__STATE_VARIABLE_Info_20 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_19;
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
            MR_Word ml_backend__ml_code_gen__Var_29;

            ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__CallCont_14, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_19, ml_backend__ml_code_gen__STATE_VARIABLE_Info_20);
            {
              ml_backend__ml_code_gen__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_29, 0) = ((MR_Box) (ml_backend__ml_code_gen__CallCont_14));
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_0_17, ml_backend__ml_code_gen__Var_29);
          }
          break;
        case (MR_Integer) 2:
          {
            *ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_18 = ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_0_17;
            *ml_backend__ml_code_gen__STATE_VARIABLE_Info_20 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_code_gen__Succeeded_15;
            MR_Word ml_backend__ml_code_gen__IfStmt_16;
            MR_Word ml_backend__ml_code_gen__STATE_VARIABLE_Info_21_21;
            MR_Word ml_backend__ml_code_gen__Var_25;
            MR_Word ml_backend__ml_code_gen__CallCont_46;

            ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&ml_backend__ml_code_gen__Succeeded_15, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_19, &ml_backend__ml_code_gen__STATE_VARIABLE_Info_21_21);
            ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__CallCont_46, ml_backend__ml_code_gen__STATE_VARIABLE_Info_21_21, ml_backend__ml_code_gen__STATE_VARIABLE_Info_20);
            {
              ml_backend__ml_code_gen__IfStmt_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 0) = ((MR_Box) (ml_backend__ml_code_gen__Succeeded_15));
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 1) = ((MR_Box) (ml_backend__ml_code_gen__CallCont_46));
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_gen__IfStmt_16, 3) = ((MR_Box) (ml_backend__ml_code_gen__Context_10));
            }
            {
              ml_backend__ml_code_gen__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_25, 0) = ((MR_Box) (ml_backend__ml_code_gen__IfStmt_16));
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_0_17, ml_backend__ml_code_gen__Var_25);
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

            ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_gen_scalar_common_1[1]), ml_backend__ml_code_gen__Context_10, &ml_backend__ml_code_gen__SetSuccessTrue_13, ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_19, ml_backend__ml_code_gen__STATE_VARIABLE_Info_20);
            {
              ml_backend__ml_code_gen__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_35, 0) = ((MR_Box) (ml_backend__ml_code_gen__SetSuccessTrue_13));
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_gen__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_0_17, ml_backend__ml_code_gen__Var_35);
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
            *ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_18 = ml_backend__ml_code_gen__STATE_VARIABLE_Stmts_0_17;
            *ml_backend__ml_code_gen__STATE_VARIABLE_Info_20 = ml_backend__ml_code_gen__STATE_VARIABLE_Info_0_19;
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

/* :- end_module ml_backend.ml_code_gen. */
