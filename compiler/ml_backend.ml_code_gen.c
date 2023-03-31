/*
** Automatically generated from `ml_code_gen.m'
** by the Mercury compiler,
** version rotd-2023-03-31
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


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "ml_backend.ml_unify_gen_construct.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__656__1_2_p_0(
  MR_Word CodeModel_12,
  MR_Word CallCodeModel_36);

static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_10_p_0(
  MR_Word Determinism_11,
  MR_Word CodeModel_12,
  MR_Word Context_13,
  MR_Word GoalExpr_14,
  MR_Word GoalInfo_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_88,
  MR_Word * STATE_VARIABLE_Info_89);

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
  MR_Word CodeModel_9,
  MR_Word Context_10,
  MR_Word Conjuncts_11,
  MR_Word * LocalVarDefns_12,
  MR_Word * FuncDefns_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_det_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarsCord_0_2,
  MR_Word * STATE_VARIABLE_VarsCord_3,
  MR_Word STATE_VARIABLE_FuncsCord_0_4,
  MR_Word * STATE_VARIABLE_FuncsCord_5,
  MR_Word STATE_VARIABLE_StmtsCord_0_6,
  MR_Word * STATE_VARIABLE_StmtsCord_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_negation_8_p_0(
  MR_Word Cond_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word * LocalVarDefns_12,
  MR_Word * FuncDefns_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

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
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50);

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

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_else_reachable_const_var_maps_4_p_0(
  MR_Word Else_5,
  MR_Word Info_6,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_12,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_13);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_cond_then_reachable_const_var_maps_4_p_0(
  MR_Word Cond_5,
  MR_Word Then_6,
  MR_Word Info_7,
  MR_Word * ReachableConstVarMaps0_8);

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_consensus_const_var_map_loop_3_p_0(
  MR_Word ConstVarMaps_4,
  MR_Word ConsensusSoFar0_5,
  MR_Word * Consensus_6);


static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_1[5][2];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_3[2][3];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_4[1][10];

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_5[1][11];




static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_2[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_3[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_gen_scalar_common_5[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static MR_bool MR_CALL 
ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__656__1_2_p_0(
  MR_Word CodeModel_12,
  MR_Word CallCodeModel_36)
{
  MR_bool succeeded = (CodeModel_12 == CallCodeModel_36);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(
  MR_Word CodeModel_8,
  MR_Word Goal_9,
  MR_Word * Stmt_10,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_14,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word InitConstVarMap_13;
  MR_Word STATE_VARIABLE_Info_18_18;
  MR_Word LocalVarDefns_19;
  MR_Word FuncDefns_20;
  MR_Word Stmts_21;
  MR_Word GoalInfo_23;
  MR_Word Context_24;
  MR_Word GoalInfo_26;
  MR_Word InstMapDelta_27;

  ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_16, &InitConstVarMap_13);
  ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_8, Goal_9, &LocalVarDefns_19, &FuncDefns_20, &Stmts_21, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_18_18);
  GoalInfo_23 = ((MR_Word) ((MR_hl_field(0, Goal_9, (MR_Integer) 1))));
  Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
  *Stmt_10 = ml_backend__ml_code_util__ml_gen_block_4_f_0(LocalVarDefns_19, FuncDefns_20, Stmts_21, Context_24);
  GoalInfo_26 = ((MR_Word) ((MR_hl_field(0, Goal_9, (MR_Integer) 1))));
  InstMapDelta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_26);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_27);
  if (succeeded)
  {
    MR_Word ConstVarMap_28;

    ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_18_18, &ConstVarMap_28);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ReachableConstVarMaps_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConstVarMap_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ReachableConstVarMaps_0_14));
    }
  }
  else
    *STATE_VARIABLE_ReachableConstVarMaps_15 = STATE_VARIABLE_ReachableConstVarMaps_0_14;
  ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_13, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_17);
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_branch_9_p_0(
  MR_Word CodeModel_10,
  MR_Word Goal_11,
  MR_Word * LocalVarDefns_12,
  MR_Word * FuncDefns_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_18,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word InitConstVarMap_17;
  MR_Word STATE_VARIABLE_Info_22_22;
  MR_Word GoalInfo_24;
  MR_Word InstMapDelta_25;

  ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_20, &InitConstVarMap_17);
  ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_10, Goal_11, LocalVarDefns_12, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_22_22);
  GoalInfo_24 = ((MR_Word) ((MR_hl_field(0, Goal_11, (MR_Integer) 1))));
  InstMapDelta_25 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_24);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_25);
  if (succeeded)
  {
    MR_Word ConstVarMap_26;

    ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_22_22, &ConstVarMap_26);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ReachableConstVarMaps_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConstVarMap_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ReachableConstVarMaps_0_18));
    }
  }
  else
    *STATE_VARIABLE_ReachableConstVarMaps_19 = STATE_VARIABLE_ReachableConstVarMaps_0_18;
  ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_17, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_21);
}

static MR_bool MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__656__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_expr_10_p_0(
  MR_Word Determinism_11,
  MR_Word CodeModel_12,
  MR_Word Context_13,
  MR_Word GoalExpr_14,
  MR_Word GoalInfo_15,
  MR_Word * LocalVarDefns_16,
  MR_Word * FuncDefns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_88,
  MR_Word * STATE_VARIABLE_Info_89)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_59 = (MR_Word) ((MR_Word) (GoalExpr_14));

        ml_backend__ml_code_gen__ml_gen_negation_8_p_0(SubGoal_59, CodeModel_12, Context_13, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_23 = ((MR_Word) ((MR_hl_field(1, GoalExpr_14, (MR_Integer) 3))));

        ml_backend__ml_unify_gen__ml_generate_unification_7_p_0(CodeModel_12, Unification_23, Context_13, LocalVarDefns_16, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
        *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_25 = ((MR_Word) ((MR_hl_field(2, GoalExpr_14, (MR_Integer) 0))));
        MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_14, (MR_Integer) 1))));
        MR_Word ArgVars_27 = ((MR_Word) ((MR_hl_field(2, GoalExpr_14, (MR_Integer) 2))));
        MR_Word BuiltinState_28 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_14, (MR_Integer) 3))) & (MR_Integer) 1);

        switch (BuiltinState_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__ml_call_gen__ml_gen_builtin_10_p_0(PredId_25, ProcId_26, ArgVars_27, CodeModel_12, Context_13, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
            break;
          case (MR_Integer) 1:
            ml_backend__ml_call_gen__ml_gen_plain_call_10_p_0(PredId_25, ProcId_26, CodeModel_12, GoalInfo_15, ArgVars_27, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));
            MR_Word Vars_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));
            MR_Word Modes_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 3))));
            MR_Word Detism_35 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 5))) & (MR_Integer) 7);
            MR_Word CallCodeModel_36;
            MR_Word Var_93;

            hlds__code_model__determinism_to_code_model_2_p_0(Detism_35, &CallCodeModel_36);
            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_93, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_2[1]));
              MR_hl_field(0, Var_93, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_goal_expr_10_p_0_1));
              MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_93, 3) = ((MR_Box) (CodeModel_12));
              MR_hl_field(0, Var_93, 4) = ((MR_Box) (CallCodeModel_36));
            }
            mercury__require__expect_3_p_0(Var_93, (MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/10", (MR_String) "code model mismatch");
            ml_backend__ml_call_gen__ml_gen_generic_call_10_p_0(GenericCall_31, Vars_32, Modes_33, Detism_35, Context_13, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));
            MR_Word Args_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 4))));
            MR_Word ExtraArgs_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 5))));
            MR_Word MaybeTraceRuntimeCond_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 6))));
            MR_Word PragmaImpl_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 7))));
            MR_String ForeignCode_42 = ((MR_String) ((MR_hl_field(0, PragmaImpl_41, (MR_Integer) 0))));
            MR_Word MaybeContext_43 = ((MR_Word) ((MR_hl_field(0, PragmaImpl_41, (MR_Integer) 1))));
            MR_Word ContextToUse_44;
            MR_Word PredId_125 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));
            MR_Integer ProcId_126 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 3))));

            if ((MaybeContext_43 == (MR_Word) ((MR_Unsigned) 0U)))
              ContextToUse_44 = Context_13;
            else
              ContextToUse_44 = ((MR_Word) ((MR_hl_field(1, MaybeContext_43, (MR_Integer) 0))));
            if ((MaybeTraceRuntimeCond_40 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_12_p_0(CodeModel_12, Attributes_37, PredId_125, ProcId_126, Args_38, ExtraArgs_39, ForeignCode_42, ContextToUse_44, LocalVarDefns_16, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
              *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word TraceRuntimeCond_45 = ((MR_Word) ((MR_hl_field(1, MaybeTraceRuntimeCond_40, (MR_Integer) 0))));

              ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_5_p_0(TraceRuntimeCond_45, ContextToUse_44, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
              *LocalVarDefns_16 = (MR_Word) ((MR_Unsigned) 0U);
              *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Conjuncts_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));

            succeeded = (Determinism_11 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word LocalVarDefnsCord_48;
              MR_Word FuncDefnsCord_49;
              MR_Word StmtsCord_50;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_101;

              Var_99 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0));
              Var_100 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0));
              Var_101 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0));
              ml_backend__ml_code_gen__ml_gen_det_conj_9_p_0(Conjuncts_47, Var_99, &LocalVarDefnsCord_48, Var_100, &FuncDefnsCord_49, Var_101, &StmtsCord_50, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
              *LocalVarDefns_16 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), LocalVarDefnsCord_48);
              *FuncDefns_17 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), FuncDefnsCord_49);
              *Stmts_18 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), StmtsCord_50);
            }
            else
              ml_backend__ml_code_gen__ml_gen_conj_8_p_0(CodeModel_12, Context_13, Conjuncts_47, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));

            ml_backend__ml_disj_gen__ml_gen_disj_7_p_0(Disjuncts_51, GoalInfo_15, CodeModel_12, Context_13, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
            *LocalVarDefns_16 = (MR_Word) ((MR_Unsigned) 0U);
            *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));
            MR_Word CanFail_53 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word CasesList_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 3))));

            ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(Var_52, CanFail_53, CodeModel_12, GoalInfo_15, Context_13, CasesList_54, LocalVarDefns_16, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
            *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));
            MR_Word SubGoal_127 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) Reason_60)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                ml_backend__ml_commit_gen__ml_gen_commit_8_p_0(SubGoal_127, CodeModel_12, Context_13, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadWarning_74 = ((MR_Unsigned) ((MR_hl_field(1, Reason_60, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word TailWarnings_75 = ((MR_Word) ((MR_hl_field(1, Reason_60, (MR_Integer) 1))));
                  MR_Word Warnings0_76;
                  MR_Word Warnings_77;
                  MR_Word Var_113;
                  MR_Word STATE_VARIABLE_Info_114_114;
                  MR_Word STATE_VARIABLE_Info_115_115;

                  ml_backend__ml_gen_info__ml_gen_info_get_disabled_warnings_2_p_0(STATE_VARIABLE_Info_0_88, &Warnings0_76);
                  {
                    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_113, 0) = ((MR_Box) (HeadWarning_74));
                    MR_hl_field(1, Var_113, 1) = ((MR_Box) (TailWarnings_75));
                  }
                  mercury__set__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), Var_113, Warnings0_76, &Warnings_77);
                  ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(Warnings_77, STATE_VARIABLE_Info_0_88, &STATE_VARIABLE_Info_114_114);
                  ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_12, SubGoal_127, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_114_114, &STATE_VARIABLE_Info_115_115);
                  ml_backend__ml_gen_info__ml_gen_info_set_disabled_warnings_3_p_0(Warnings0_76, STATE_VARIABLE_Info_115_115, STATE_VARIABLE_Info_89);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_60, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_12, SubGoal_127, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
                    break;
                  case (MR_Integer) 1:
                    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_12, SubGoal_127, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
                    break;
                  case (MR_Integer) 2:
                    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_12, SubGoal_127, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
                    break;
                  case (MR_Integer) 3:
                    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_12, SubGoal_127, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    ml_backend__ml_commit_gen__ml_gen_commit_8_p_0(SubGoal_127, CodeModel_12, Context_13, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_133 = ((MR_Unsigned) ((MR_hl_field(3, Reason_60, (MR_Integer) 2))) & (MR_Integer) 3);
                      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(3, Reason_60, (MR_Integer) 1))));

                      switch (Var_133) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            ml_backend__ml_unify_gen_construct__ml_generate_ground_term_5_p_0(Var_134, SubGoal_127, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
                            *LocalVarDefns_16 = (MR_Word) ((MR_Unsigned) 0U);
                            *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
                          }
                          break;
                        case (MR_Integer) 2:
                          ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_12, SubGoal_127, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
                          break;
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/10", (MR_String) "unexpected from_ground_term_initial");
                            return;
                          }
                          break;
                        case (MR_Integer) 3:
                          ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_12, SubGoal_127, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_12, SubGoal_127, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
                    break;
                  case (MR_Integer) 8:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/10", (MR_String) "loop_control NYI");
                      return;
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));
            MR_Word Then_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 3))));
            MR_Word Else_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 4))));

            ml_backend__ml_code_gen__ml_gen_ite_10_p_0(CodeModel_12, Cond_56, Then_57, Else_58, Context_13, LocalVarDefns_16, FuncDefns_17, Stmts_18, STATE_VARIABLE_Info_0_88, STATE_VARIABLE_Info_89);
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_goal_expr\'/10", (MR_String) "unexpected shorthand");
            return;
          }
          break;
      }
      break;
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
  MR_Box closure = closure_arg;
  MR_Word conv7_LocalVarDefns_12;
  MR_Word conv6_FuncDefns_13;
  MR_Word conv5_Stmts_14;
  MR_Word conv4_STATE_VARIABLE_Info_29;

  ml_backend__ml_code_gen__ml_gen_conj_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), &conv7_LocalVarDefns_12, &conv6_FuncDefns_13, &conv5_Stmts_14, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Info_29);
  *wrapper_arg_1 = ((MR_Box) (conv7_LocalVarDefns_12));
  *wrapper_arg_2 = ((MR_Box) (conv6_FuncDefns_13));
  *wrapper_arg_3 = ((MR_Box) (conv5_Stmts_14));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Info_29));
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
  MR_Box closure = closure_arg;
  MR_Word conv3_LocalVarDefns_10;
  MR_Word conv2_FuncDefns_11;
  MR_Word conv1_Stmts_12;
  MR_Word conv0_STATE_VARIABLE_Info_25;

  ml_backend__ml_code_gen__ml_gen_goal_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv3_LocalVarDefns_10, &conv2_FuncDefns_11, &conv1_Stmts_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_25);
  *wrapper_arg_1 = ((MR_Box) (conv3_LocalVarDefns_10));
  *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefns_11));
  *wrapper_arg_3 = ((MR_Box) (conv1_Stmts_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_conj_8_p_0(
  MR_Word CodeModel_9,
  MR_Word Context_10,
  MR_Word Conjuncts_11,
  MR_Word * LocalVarDefns_12,
  MR_Word * FuncDefns_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;

  if ((Conjuncts_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ml_backend__ml_code_util__ml_gen_success_5_p_0(CodeModel_9, Context_10, Stmts_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
    *LocalVarDefns_12 = (MR_Word) ((MR_Unsigned) 0U);
    *FuncDefns_13 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, Conjuncts_11, (MR_Integer) 1))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, Conjuncts_11, (MR_Integer) 0))));

    if ((Var_45 == (MR_Word) ((MR_Unsigned) 0U)))
      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_9, Var_46, LocalVarDefns_12, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
    else
    {
      MR_Word HeadGoalInfo_22 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 1))));
      MR_Word HeadDeterminism_23;
      MR_Word Var_44;
      MR_Word Var_24;

      HeadDeterminism_23 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(HeadGoalInfo_22);
      parse_tree__prog_data__determinism_components_3_p_0(HeadDeterminism_23, &Var_24, &Var_44);
      succeeded = ((MR_Integer) 0 == Var_44);
      if (succeeded)
        ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_9, Var_46, LocalVarDefns_12, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      else
      {
        MR_Word HeadCodeModel_25;
        MR_Word DoGenHead_26;
        MR_Word DoGenTail_27;

        hlds__code_model__determinism_to_code_model_2_p_0(HeadDeterminism_23, &HeadCodeModel_25);
        {
          DoGenHead_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DoGenHead_26, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_4[0]));
          MR_hl_field(0, DoGenHead_26, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_8_p_0_1));
          MR_hl_field(0, DoGenHead_26, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, DoGenHead_26, 3) = ((MR_Box) (HeadCodeModel_25));
          MR_hl_field(0, DoGenHead_26, 4) = ((MR_Box) (Var_46));
        }
        {
          DoGenTail_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DoGenTail_27, 0) = ((MR_Box) (&ml_backend__ml_code_gen_scalar_common_5[0]));
          MR_hl_field(0, DoGenTail_27, 1) = ((MR_Box) (ml_backend__ml_code_gen__ml_gen_conj_8_p_0_2));
          MR_hl_field(0, DoGenTail_27, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, DoGenTail_27, 3) = ((MR_Box) (CodeModel_9));
          MR_hl_field(0, DoGenTail_27, 4) = ((MR_Box) (Context_10));
          MR_hl_field(0, DoGenTail_27, 5) = ((MR_Box) (Var_45));
        }
        ml_backend__ml_code_util__ml_combine_conj_9_p_0(HeadCodeModel_25, Context_10, DoGenHead_26, DoGenTail_27, LocalVarDefns_12, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_det_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarsCord_0_2,
  MR_Word * STATE_VARIABLE_VarsCord_3,
  MR_Word STATE_VARIABLE_FuncsCord_0_4,
  MR_Word * STATE_VARIABLE_FuncsCord_5,
  MR_Word STATE_VARIABLE_StmtsCord_0_6,
  MR_Word * STATE_VARIABLE_StmtsCord_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_StmtsCord_7 = STATE_VARIABLE_StmtsCord_0_6;
      *STATE_VARIABLE_FuncsCord_5 = STATE_VARIABLE_FuncsCord_0_4;
      *STATE_VARIABLE_VarsCord_3 = STATE_VARIABLE_VarsCord_0_2;
    }
    else
    {
      MR_Word HeadGoal_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailGoals_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadVars_28;
      MR_Word HeadFuncs_29;
      MR_Word HeadStmts_30;
      MR_Word STATE_VARIABLE_Info_44_44;
      MR_Word STATE_VARIABLE_VarsCord_45_45;
      MR_Word STATE_VARIABLE_FuncsCord_47_47;
      MR_Word STATE_VARIABLE_StmtsCord_49_49;
      MR_Word Var_50;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarsCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FuncsCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_StmtsCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_8;

      ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 0, HeadGoal_22, &HeadVars_28, &HeadFuncs_29, &HeadStmts_30, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_44_44);
      if ((HeadVars_28 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_VarsCord_45_45 = STATE_VARIABLE_VarsCord_0_2;
      else
      {
        MR_Word Var_46;

        Var_46 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadVars_28);
        STATE_VARIABLE_VarsCord_45_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), STATE_VARIABLE_VarsCord_0_2, Var_46);
      }
      if ((HeadFuncs_29 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_FuncsCord_47_47 = STATE_VARIABLE_FuncsCord_0_4;
      else
      {
        MR_Word Var_48;

        Var_48 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), HeadFuncs_29);
        STATE_VARIABLE_FuncsCord_47_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), STATE_VARIABLE_FuncsCord_0_4, Var_48);
      }
      Var_50 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_30);
      STATE_VARIABLE_StmtsCord_49_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), STATE_VARIABLE_StmtsCord_0_6, Var_50);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TailGoals_23;
      next_value_of_STATE_VARIABLE_VarsCord_0_2 = STATE_VARIABLE_VarsCord_45_45;
      next_value_of_STATE_VARIABLE_FuncsCord_0_4 = STATE_VARIABLE_FuncsCord_47_47;
      next_value_of_STATE_VARIABLE_StmtsCord_0_6 = STATE_VARIABLE_StmtsCord_49_49;
      next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_44_44;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarsCord_0_2 = next_value_of_STATE_VARIABLE_VarsCord_0_2;
      STATE_VARIABLE_FuncsCord_0_4 = next_value_of_STATE_VARIABLE_FuncsCord_0_4;
      STATE_VARIABLE_StmtsCord_0_6 = next_value_of_STATE_VARIABLE_StmtsCord_0_6;
      STATE_VARIABLE_Info_0_8 = next_value_of_STATE_VARIABLE_Info_0_8;
      continue;
    }
    break;
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
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word CondGoalInfo_17 = ((MR_Word) ((MR_hl_field(0, Cond_9, (MR_Integer) 1))));
  MR_Word CondCodeModel_18;
  MR_Word ConstVarMap0_19;
  MR_Word InitPackedWordMap_20;

  CondCodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_17);
  ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_28, &ConstVarMap0_19);
  ml_backend__ml_gen_info__ml_gen_info_get_packed_word_map_2_p_0(STATE_VARIABLE_Info_0_28, &InitPackedWordMap_20);
  switch (CodeModel_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_Info_32_32;
        MR_Word STATE_VARIABLE_Info_33_33;
        MR_Word InitConstVarMap_69;
        MR_Word STATE_VARIABLE_Info_22_70;
        MR_Word GoalInfo_72;
        MR_Word InstMapDelta_73;

        ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_28, &InitConstVarMap_69);
        ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 1, Cond_9, LocalVarDefns_12, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_22_70);
        GoalInfo_72 = ((MR_Word) ((MR_hl_field(0, Cond_9, (MR_Integer) 1))));
        InstMapDelta_73 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_72);
        succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_73);
        if (succeeded)
        {
          MR_Word ConstVarMap_74;

          ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_22_70, &ConstVarMap_74);
        }
        ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_69, STATE_VARIABLE_Info_22_70, &STATE_VARIABLE_Info_32_32);
        ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ConstVarMap0_19, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_33_33);
        ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(InitPackedWordMap_20, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_29);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_negation\'/8", (MR_String) "nondet negation");
        return;
      }
      break;
    case (MR_Integer) 1:
      switch (CondCodeModel_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CondStmts_24;
            MR_Word SetSuccessFalseStmt_25;
            MR_Word STATE_VARIABLE_Info_37_37;
            MR_Word STATE_VARIABLE_Info_38_38;
            MR_Word STATE_VARIABLE_Info_39_39;
            MR_Word Var_43;
            MR_Word InitConstVarMap_75;
            MR_Word STATE_VARIABLE_Info_22_76;
            MR_Word GoalInfo_78;
            MR_Word InstMapDelta_79;

            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_28, &InitConstVarMap_75);
            ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 0, Cond_9, LocalVarDefns_12, FuncDefns_13, &CondStmts_24, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_22_76);
            GoalInfo_78 = ((MR_Word) ((MR_hl_field(0, Cond_9, (MR_Integer) 1))));
            InstMapDelta_79 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_78);
            succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_79);
            if (succeeded)
            {
              MR_Word ConstVarMap_80;

              ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_22_76, &ConstVarMap_80);
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_75, STATE_VARIABLE_Info_22_76, &STATE_VARIABLE_Info_37_37);
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ConstVarMap0_19, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_38_38);
            ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(InitPackedWordMap_20, STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_Info_39_39);
            ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(3, &ml_backend__ml_code_gen_scalar_common_1[4])), Context_11, &SetSuccessFalseStmt_25, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_29);
            {
              Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_43, 0) = ((MR_Box) (SetSuccessFalseStmt_25));
              MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Stmts_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CondStmts_24, Var_43);
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_negation\'/8", (MR_String) "nondet cond");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Succeeded_26;
            MR_Word InvertSuccessStmt_27;
            MR_Word STATE_VARIABLE_Info_47_47;
            MR_Word STATE_VARIABLE_Info_48_48;
            MR_Word STATE_VARIABLE_Info_49_49;
            MR_Word STATE_VARIABLE_Info_50_50;
            MR_Word Var_51;
            MR_Word Var_54;
            MR_Word CondStmts_66;
            MR_Word InitConstVarMap_81;
            MR_Word STATE_VARIABLE_Info_22_82;
            MR_Word GoalInfo_84;
            MR_Word InstMapDelta_85;

            ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_28, &InitConstVarMap_81);
            ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 1, Cond_9, LocalVarDefns_12, FuncDefns_13, &CondStmts_66, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_22_82);
            GoalInfo_84 = ((MR_Word) ((MR_hl_field(0, Cond_9, (MR_Integer) 1))));
            InstMapDelta_85 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_84);
            succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_85);
            if (succeeded)
            {
              MR_Word ConstVarMap_86;

              ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_22_82, &ConstVarMap_86);
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_81, STATE_VARIABLE_Info_22_82, &STATE_VARIABLE_Info_47_47);
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ConstVarMap0_19, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
            ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(InitPackedWordMap_20, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_49_49);
            ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&Succeeded_26, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_50_50);
            {
              Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(3, Var_51, 2) = ((MR_Box) (Succeeded_26));
            }
            ml_backend__ml_code_util__ml_gen_set_success_5_p_0(Var_51, Context_11, &InvertSuccessStmt_27, STATE_VARIABLE_Info_50_50, STATE_VARIABLE_Info_29);
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (InvertSuccessStmt_27));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Stmts_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CondStmts_66, Var_54);
          }
          break;
      }
      break;
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
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  MR_Word CondGoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Cond_12, (MR_Integer) 1))));
  MR_Word CondCodeModel_22;
  MR_Word InitPackedWordMap_23;

  CondCodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_21);
  ml_backend__ml_gen_info__ml_gen_info_get_packed_word_map_2_p_0(STATE_VARIABLE_Info_0_49, &InitPackedWordMap_23);
  switch (CondCodeModel_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CondStmt_24;
        MR_Word ThenStmt_25;
        MR_Word STATE_VARIABLE_Info_52_52;
        MR_Word Var_54;

        ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, Cond_12, &CondStmt_24, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_52_52);
        ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(CodeModel_11, Then_13, &ThenStmt_25, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_50);
        *LocalVarDefns_16 = (MR_Word) ((MR_Unsigned) 0U);
        *FuncDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (ThenStmt_25));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (*LocalVarDefns_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CondStmt_24));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_54));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CondVar_35;
        MR_Word CondVarDecl_36;
        MR_Word SetCondFalse_37;
        MR_Word ThenFuncLabel_38;
        MR_Word ThenFuncLabelRval_39;
        MR_Word EnvPtrRval_40;
        MR_Word SuccessCont_41;
        MR_Word ThenGoalInfo_43;
        MR_Word ThenContext_44;
        MR_Word SetCondTrue_45;
        MR_Word ThenFuncBody_46;
        MR_Word ThenFuncDefn_47;
        MR_Word CondSucceeded_48;
        MR_Word STATE_VARIABLE_Info_68_68;
        MR_Word STATE_VARIABLE_Info_72_72;
        MR_Word STATE_VARIABLE_Info_74_74;
        MR_Word STATE_VARIABLE_Info_76_76;
        MR_Word STATE_VARIABLE_Info_77_77;
        MR_Word Var_80;
        MR_Word STATE_VARIABLE_Info_81_81;
        MR_Word STATE_VARIABLE_Info_82_82;
        MR_Word STATE_VARIABLE_Info_83_83;
        MR_Word STATE_VARIABLE_Info_84_84;
        MR_Word Var_85;
        MR_Word STATE_VARIABLE_Info_86_86;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word STATE_VARIABLE_Info_92_92;
        MR_Word STATE_VARIABLE_Info_93_93;
        MR_Word STATE_VARIABLE_Info_94_94;
        MR_Word STATE_VARIABLE_Info_95_95;
        MR_Word Var_97;
        MR_Word Var_100;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word ThenStmt_106;
        MR_Word InitConstVarMap_107;
        MR_Word CondLocalVarDefns_108;
        MR_Word CondFuncDefns_109;
        MR_Word CondStmts_110;
        MR_Word ReachableConstVarMaps0_111;
        MR_Word ElseStmt_112;
        MR_Word ReachableConstVarMaps_113;
        MR_Word IfStmt_114;

        ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_49, &InitConstVarMap_107);
        ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_p_0(&CondVar_35, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_68_68);
        CondVarDecl_36 = ml_backend__ml_code_util__ml_gen_cond_var_decl_2_f_0(CondVar_35, Context_15);
        ml_backend__ml_code_util__ml_gen_set_cond_var_4_p_0(CondVar_35, (MR_Word) (MR_mkword(3, &ml_backend__ml_code_gen_scalar_common_1[4])), Context_15, &SetCondFalse_37);
        ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) ((MR_Unsigned) 0U), &ThenFuncLabel_38, &ThenFuncLabelRval_39, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_72_72);
        ml_backend__ml_code_util__ml_get_env_ptr_1_p_0(&EnvPtrRval_40);
        {
          SuccessCont_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SuccessCont_41, 0) = ((MR_Box) (ThenFuncLabelRval_39));
          MR_hl_field(0, SuccessCont_41, 1) = ((MR_Box) (EnvPtrRval_40));
          MR_hl_field(0, SuccessCont_41, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(SuccessCont_41, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_74_74);
        ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 2, Cond_12, &CondLocalVarDefns_108, &CondFuncDefns_109, &CondStmts_110, STATE_VARIABLE_Info_74_74, &STATE_VARIABLE_Info_76_76);
        ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(STATE_VARIABLE_Info_76_76, &STATE_VARIABLE_Info_77_77);
        ThenGoalInfo_43 = ((MR_Word) ((MR_hl_field(0, Then_13, (MR_Integer) 1))));
        ThenContext_44 = hlds__hlds_goal__goal_info_get_context_1_f_0(ThenGoalInfo_43);
        ml_backend__ml_code_util__ml_gen_set_cond_var_4_p_0(CondVar_35, (MR_Word) (MR_mkword(3, &ml_backend__ml_code_gen_scalar_common_1[3])), ThenContext_44, &SetCondTrue_45);
        Var_80 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[1]), (MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[2]));
        ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(Var_80, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_81_81);
        ml_backend__ml_gen_info__ml_gen_info_increment_func_nest_depth_2_p_0(STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_82_82);
        ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(CodeModel_11, Then_13, &ThenStmt_106, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_83_83);
        ml_backend__ml_code_gen__ml_gen_cond_then_reachable_const_var_maps_4_p_0(Cond_12, Then_13, STATE_VARIABLE_Info_83_83, &ReachableConstVarMaps0_111);
        ml_backend__ml_gen_info__ml_gen_info_decrement_func_nest_depth_2_p_0(STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_84_84);
        Var_85 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[1]), (MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[2]));
        ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(Var_85, STATE_VARIABLE_Info_84_84, &STATE_VARIABLE_Info_86_86);
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (ThenStmt_106));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (SetCondTrue_45));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_90));
        }
        {
          ThenFuncBody_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ThenFuncBody_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ThenFuncBody_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ThenFuncBody_46, 2) = ((MR_Box) (Var_89));
          MR_hl_field(0, ThenFuncBody_46, 3) = ((MR_Box) (ThenContext_44));
        }
        ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(STATE_VARIABLE_Info_86_86, ThenFuncLabel_38, ThenContext_44, ThenFuncBody_46, &ThenFuncDefn_47);
        ml_backend__ml_code_util__ml_gen_test_cond_var_2_p_0(CondVar_35, &CondSucceeded_48);
        ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_107, STATE_VARIABLE_Info_86_86, &STATE_VARIABLE_Info_92_92);
        ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(InitPackedWordMap_23, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_93_93);
        ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(CodeModel_11, Else_14, &ElseStmt_112, STATE_VARIABLE_Info_93_93, &STATE_VARIABLE_Info_94_94);
        ml_backend__ml_code_gen__ml_gen_else_reachable_const_var_maps_4_p_0(Else_14, STATE_VARIABLE_Info_94_94, ReachableConstVarMaps0_111, &ReachableConstVarMaps_113);
        ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(InitPackedWordMap_23, STATE_VARIABLE_Info_94_94, &STATE_VARIABLE_Info_95_95);
        ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_113, STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Info_50);
        {
          Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(3, Var_97, 2) = ((MR_Box) (CondSucceeded_48));
        }
        {
          IfStmt_114 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, IfStmt_114, 0) = ((MR_Box) (Var_97));
          MR_hl_field(2, IfStmt_114, 1) = ((MR_Box) (ElseStmt_112));
          MR_hl_field(2, IfStmt_114, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, IfStmt_114, 3) = ((MR_Box) (Context_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *LocalVarDefns_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CondVarDecl_36));
          MR_hl_field(1, base, 1) = ((MR_Box) (CondLocalVarDefns_108));
        }
        {
          Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_100, 0) = ((MR_Box) (ThenFuncDefn_47));
          MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *FuncDefns_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), CondFuncDefns_109, Var_100);
        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (SetCondFalse_37));
          MR_hl_field(1, Var_102, 1) = ((MR_Box) (CondStmts_110));
        }
        {
          Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_103, 0) = ((MR_Box) (IfStmt_114));
          MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_102, Var_103);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InitConstVarMap_26;
        MR_Word CondStmts_29;
        MR_Word Succeeded_30;
        MR_Word ReachableConstVarMaps0_31;
        MR_Word ElseStmt_32;
        MR_Word ReachableConstVarMaps_33;
        MR_Word IfStmt_34;
        MR_Word STATE_VARIABLE_Info_57_57;
        MR_Word STATE_VARIABLE_Info_58_58;
        MR_Word STATE_VARIABLE_Info_59_59;
        MR_Word STATE_VARIABLE_Info_60_60;
        MR_Word STATE_VARIABLE_Info_61_61;
        MR_Word STATE_VARIABLE_Info_62_62;
        MR_Word STATE_VARIABLE_Info_63_63;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word ThenStmt_105;

        ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_49, &InitConstVarMap_26);
        ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 1, Cond_12, LocalVarDefns_16, FuncDefns_17, &CondStmts_29, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_57_57);
        ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&Succeeded_30, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_58_58);
        ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(CodeModel_11, Then_13, &ThenStmt_105, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_59_59);
        ml_backend__ml_code_gen__ml_gen_cond_then_reachable_const_var_maps_4_p_0(Cond_12, Then_13, STATE_VARIABLE_Info_59_59, &ReachableConstVarMaps0_31);
        ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_26, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_60_60);
        ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(InitPackedWordMap_23, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_61_61);
        ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(CodeModel_11, Else_14, &ElseStmt_32, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_62_62);
        ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(InitPackedWordMap_23, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_63_63);
        ml_backend__ml_code_gen__ml_gen_else_reachable_const_var_maps_4_p_0(Else_14, STATE_VARIABLE_Info_63_63, ReachableConstVarMaps0_31, &ReachableConstVarMaps_33);
        ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_33, STATE_VARIABLE_Info_63_63, STATE_VARIABLE_Info_50);
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (ElseStmt_32));
        }
        {
          IfStmt_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, IfStmt_34, 0) = ((MR_Box) (Succeeded_30));
          MR_hl_field(2, IfStmt_34, 1) = ((MR_Box) (ThenStmt_105));
          MR_hl_field(2, IfStmt_34, 2) = ((MR_Box) (Var_65));
          MR_hl_field(2, IfStmt_34, 3) = ((MR_Box) (Context_15));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (IfStmt_34));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CondStmts_29, Var_66);
      }
      break;
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_7_p_0(
  MR_Word CodeModel_8,
  MR_Word Goal_9,
  MR_Word * LocalVarDefns_10,
  MR_Word * FuncDefns_11,
  MR_Word * Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal_9, (MR_Integer) 0))));
  MR_Word GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_9, (MR_Integer) 1))));
  MR_Word VarTable_16;
  MR_Word Context_18;
  MR_Word ScopeVarDefns_19;
  MR_Word GoalDeterminism_20;
  MR_Word GoalCodeModel_21;
  MR_Word GoalVarDefns_22;
  MR_Word Stmts0_23;
  MR_Word STATE_VARIABLE_Info_26_26;
  MR_Word STATE_VARIABLE_Info_27_27;
  MR_Word SubGoalNonLocals_29;
  MR_Word NonLocals_30;
  MR_Word VarsToDeclareSet_31;
  MR_Word VarsToDeclare0_32;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_24, &VarTable_16);
  ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0(GoalExpr_14, &SubGoalNonLocals_29);
  NonLocals_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_15);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SubGoalNonLocals_29, NonLocals_30, &VarsToDeclareSet_31);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsToDeclareSet_31, &VarsToDeclare0_32);
  Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
  if ((VarsToDeclare0_32 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ScopeVarDefns_19 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_26_26 = STATE_VARIABLE_Info_0_24;
  }
  else
  {
    MR_Word VarsToDeclare_17;
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, VarsToDeclare0_32, (MR_Integer) 1))));

    if ((Var_40 == (MR_Word) ((MR_Unsigned) 0U)))
      VarsToDeclare_17 = VarsToDeclare0_32;
    else
      VarsToDeclare_17 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(VarTable_16, VarsToDeclare0_32);
    ml_backend__ml_code_gen__ml_gen_local_var_decls_6_p_0(VarTable_16, Context_18, VarsToDeclare_17, &ScopeVarDefns_19, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_26_26);
  }
  GoalDeterminism_20 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_15);
  hlds__code_model__determinism_to_code_model_2_p_0(GoalDeterminism_20, &GoalCodeModel_21);
  ml_backend__ml_code_gen__ml_gen_goal_expr_10_p_0(GoalDeterminism_20, GoalCodeModel_21, Context_18, GoalExpr_14, GoalInfo_15, &GoalVarDefns_22, FuncDefns_11, &Stmts0_23, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_27_27);
  *LocalVarDefns_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ScopeVarDefns_19, GoalVarDefns_22);
  ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(CodeModel_8, GoalCodeModel_21, Context_18, Stmts0_23, Stmts_12, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_25);
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0(
  MR_Word CodeModel_6,
  MR_Word Goal_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word LocalVarDefns_10;
  MR_Word FuncDefns_11;
  MR_Word Stmts_12;
  MR_Word GoalInfo_14;
  MR_Word Context_15;

  ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_6, Goal_7, &LocalVarDefns_10, &FuncDefns_11, &Stmts_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 1))));
  Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
  *Stmt_8 = ml_backend__ml_code_util__ml_gen_block_4_f_0(LocalVarDefns_10, FuncDefns_11, Stmts_12, Context_15);
}

static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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
        MR_Word SubGoal_48 = (MR_Word) ((MR_Word) (GoalExpr_3));

        *SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_48);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_3, (MR_Integer) 3))));

        switch (MR_tag((MR_Word) Unification_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LHSVar_10 = ((MR_Word) ((MR_hl_field(0, Unification_8, (MR_Integer) 0))));
              MR_Word ArgVars_12 = ((MR_Word) ((MR_hl_field(0, Unification_8, (MR_Integer) 2))));
              MR_Word Var_59;

              {
                Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_59, 0) = ((MR_Box) (LHSVar_10));
                MR_hl_field(1, Var_59, 1) = ((MR_Box) (ArgVars_12));
              }
              *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_59);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_60;
              MR_Word LHSVar_85 = ((MR_Word) ((MR_hl_field(1, Unification_8, (MR_Integer) 0))));
              MR_Word ArgVars_87 = ((MR_Word) ((MR_hl_field(1, Unification_8, (MR_Integer) 2))));

              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (LHSVar_85));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) (ArgVars_87));
              }
              *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_60);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word RHSVar_19 = ((MR_Word) ((MR_hl_field(2, Unification_8, (MR_Integer) 1))));
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word LHSVar_89 = ((MR_Word) ((MR_hl_field(2, Unification_8, (MR_Integer) 0))));

              {
                Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_62, 0) = ((MR_Box) (RHSVar_19));
                MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_61, 0) = ((MR_Box) (LHSVar_89));
                MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
              }
              *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_61);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unification_8, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_64;
                  MR_Word Var_65;
                  MR_Word LHSVar_90 = ((MR_Word) ((MR_hl_field(3, Unification_8, (MR_Integer) 1))));
                  MR_Word RHSVar_91 = ((MR_Word) ((MR_hl_field(3, Unification_8, (MR_Integer) 2))));

                  {
                    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_65, 0) = ((MR_Box) (RHSVar_91));
                    MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_64, 0) = ((MR_Box) (LHSVar_90));
                    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
                  }
                  *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_64);
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_gen.goal_expr_find_subgoal_nonlocals\'/2", (MR_String) "complicated_unify");
                  return;
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgVars_92 = ((MR_Word) ((MR_hl_field(2, GoalExpr_3, (MR_Integer) 2))));

        *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_92);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));
            MR_Word ArgVars_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) GenericCall_28)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word HOVar_32 = ((MR_Word) ((MR_hl_field(0, GenericCall_28, (MR_Integer) 0))));
                  MR_Word Var_69;

                  {
                    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_69, 0) = ((MR_Box) (HOVar_32));
                    MR_hl_field(1, Var_69, 1) = ((MR_Box) (ArgVars_93));
                  }
                  *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_69);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MethodVar_36 = ((MR_Word) ((MR_hl_field(1, GenericCall_28, (MR_Integer) 0))));
                  MR_Word Var_70;

                  {
                    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_70, 0) = ((MR_Box) (MethodVar_36));
                    MR_hl_field(1, Var_70, 1) = ((MR_Box) (ArgVars_93));
                  }
                  *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_70);
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_93);
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 4))));
            MR_Word ExtraArgs_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 5))));
            MR_Word ExtraVars_47;
            MR_Word Var_73;
            MR_Word ArgVars_96;

            ArgVars_96 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_code_gen_scalar_common_3[0]), Args_43);
            ExtraVars_47 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_code_gen_scalar_common_3[1]), ExtraArgs_44);
            Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[0]), ExtraVars_47, ArgVars_96);
            *SubGoalNonLocals_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_73);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubGoals_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
            MR_Word Var_74;

            Var_74 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(SubGoals_51, Var_74, SubGoalNonLocals_4);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals_118 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));
            MR_Word Var_119;

            Var_119 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_p_0(SubGoals_118, Var_119, SubGoalNonLocals_4);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Cases_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));
            MR_Word Var_80;

            Var_80 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_p_0(Cases_57, Var_80, SubGoalNonLocals_4);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SubGoal_121 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));

            *SubGoalNonLocals_4 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_121);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
            MR_Word Then_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));
            MR_Word Else_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 4))));
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word SubGoal_124;
            MR_Word SubGoals_125;
            MR_Word NonLocals_126;
            MR_Word STATE_VARIABLE_SubGoalNonLocals_13_129;
            MR_Word SubGoal_133;
            MR_Word SubGoals_134;
            MR_Word NonLocals_135;
            MR_Word STATE_VARIABLE_SubGoalNonLocals_13_138;
            MR_Word SubGoal_142;
            MR_Word NonLocals_144;

            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (Else_55));
              MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) (Then_54));
              MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
            }
            {
              Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_75, 0) = ((MR_Box) (Cond_53));
              MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_77));
            }
            Var_76 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            SubGoal_124 = ((MR_Word) ((MR_hl_field(1, Var_75, (MR_Integer) 0))));
            SubGoals_125 = ((MR_Word) ((MR_hl_field(1, Var_75, (MR_Integer) 1))));
            NonLocals_126 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_124);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_126, Var_76, &STATE_VARIABLE_SubGoalNonLocals_13_129);
            SubGoal_133 = ((MR_Word) ((MR_hl_field(1, SubGoals_125, (MR_Integer) 0))));
            SubGoals_134 = ((MR_Word) ((MR_hl_field(1, SubGoals_125, (MR_Integer) 1))));
            NonLocals_135 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_133);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_135, STATE_VARIABLE_SubGoalNonLocals_13_129, &STATE_VARIABLE_SubGoalNonLocals_13_138);
            SubGoal_142 = ((MR_Word) ((MR_hl_field(1, SubGoals_134, (MR_Integer) 0))));
            NonLocals_144 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_142);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_144, STATE_VARIABLE_SubGoalNonLocals_13_138, SubGoalNonLocals_4);
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_gen.goal_expr_find_subgoal_nonlocals\'/2", (MR_String) "shorthand");
            return;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SubGoalNonLocals_3 = STATE_VARIABLE_SubGoalNonLocals_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SubGoal_12 = ((MR_Word) ((MR_hl_field(0, Case_7, (MR_Integer) 2))));
      MR_Word NonLocals_13;
      MR_Word STATE_VARIABLE_SubGoalNonLocals_16_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;

      NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_12);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_13, STATE_VARIABLE_SubGoalNonLocals_0_2, &STATE_VARIABLE_SubGoalNonLocals_16_16);
      // direct tailcall eliminated
      ;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SubGoalNonLocals_3 = STATE_VARIABLE_SubGoalNonLocals_0_2;
    else
    {
      MR_Word SubGoal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SubGoals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word NonLocals_10;
      MR_Word STATE_VARIABLE_SubGoalNonLocals_13_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;

      NonLocals_10 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(SubGoal_7);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_10, STATE_VARIABLE_SubGoalNonLocals_0_2, &STATE_VARIABLE_SubGoalNonLocals_13_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SubGoals_8;
      next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2 = STATE_VARIABLE_SubGoalNonLocals_13_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SubGoalNonLocals_0_2 = next_value_of_STATE_VARIABLE_SubGoalNonLocals_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_else_reachable_const_var_maps_4_p_0(
  MR_Word Else_5,
  MR_Word Info_6,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_12,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_13)
{
  MR_bool succeeded;
  MR_Word ElseGoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Else_5, (MR_Integer) 1))));
  MR_Word ElseInstMapDelta_10;

  ElseInstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ElseGoalInfo_9);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ElseInstMapDelta_10);
  if (succeeded)
  {
    MR_Word ElseConstVarMap_11;

    ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(Info_6, &ElseConstVarMap_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ReachableConstVarMaps_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ElseConstVarMap_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ReachableConstVarMaps_0_12));
    }
  }
  else
    *STATE_VARIABLE_ReachableConstVarMaps_13 = STATE_VARIABLE_ReachableConstVarMaps_0_12;
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_cond_then_reachable_const_var_maps_4_p_0(
  MR_Word Cond_5,
  MR_Word Then_6,
  MR_Word Info_7,
  MR_Word * ReachableConstVarMaps0_8)
{
  MR_bool succeeded;
  MR_Word CondGoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Cond_5, (MR_Integer) 1))));
  MR_Word ThenGoalInfo_12 = ((MR_Word) ((MR_hl_field(0, Then_6, (MR_Integer) 1))));
  MR_Word CondInstMapDelta_13;
  MR_Word ThenInstMapDelta_14;

  CondInstMapDelta_13 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondGoalInfo_10);
  ThenInstMapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ThenGoalInfo_12);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(CondInstMapDelta_13);
  if (succeeded)
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ThenInstMapDelta_14);
  if (succeeded)
  {
    MR_Word ThenConstVarMap_15;

    ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(Info_7, &ThenConstVarMap_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ReachableConstVarMaps0_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ThenConstVarMap_15));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    *ReachableConstVarMaps0_8 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(
  MR_Word ReachableConstVarMaps_4,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word ConsensusConstVarMap_6;

  if ((ReachableConstVarMaps_4 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__map__init_1_p_0((MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), &ConsensusConstVarMap_6);
  else
  {
    MR_Word HeadConstVarMap_7 = ((MR_Word) ((MR_hl_field(1, ReachableConstVarMaps_4, (MR_Integer) 0))));
    MR_Word TailConstVarMap_8 = ((MR_Word) ((MR_hl_field(1, ReachableConstVarMaps_4, (MR_Integer) 1))));
    MR_Word HeadConstVarAL_9;
    MR_Word ConsensusConstVarAL_10;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), HeadConstVarMap_7, &HeadConstVarAL_9);
    ml_backend__ml_code_gen__ml_gen_consensus_const_var_map_loop_3_p_0(TailConstVarMap_8, HeadConstVarAL_9, &ConsensusConstVarAL_10);
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConsensusConstVarAL_10, &ConsensusConstVarMap_6);
  }
  ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ConsensusConstVarMap_6, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
}

static void MR_CALL 
ml_backend__ml_code_gen__ml_gen_consensus_const_var_map_loop_3_p_0(
  MR_Word ConstVarMaps_4,
  MR_Word ConsensusSoFar0_5,
  MR_Word * Consensus_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((ConstVarMaps_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *Consensus_6 = ConsensusSoFar0_5;
    else
    {
      MR_Word HeadConstVarMap_7 = ((MR_Word) ((MR_hl_field(1, ConstVarMaps_4, (MR_Integer) 0))));
      MR_Word TailConstVarMaps_8 = ((MR_Word) ((MR_hl_field(1, ConstVarMaps_4, (MR_Integer) 1))));
      MR_Word HeadConstVarAL_9;
      MR_Word ConsensusSoFar1_10;
      MR_Word next_value_of_ConstVarMaps_4;
      MR_Word next_value_of_ConsensusSoFar0_5;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), HeadConstVarMap_7, &HeadConstVarAL_9);
      ConsensusSoFar1_10 = mercury__assoc_list__common_subset_2_f_0((MR_Word) (&ml_backend__ml_code_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConsensusSoFar0_5, HeadConstVarAL_9);
      // direct tailcall eliminated
      ;
      next_value_of_ConstVarMaps_4 = TailConstVarMaps_8;
      next_value_of_ConsensusSoFar0_5 = ConsensusSoFar1_10;
      ConstVarMaps_4 = next_value_of_ConstVarMaps_4;
      ConsensusSoFar0_5 = next_value_of_ConsensusSoFar0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_code_gen__ml_gen_local_var_decls_6_p_0(
  MR_Word VarTable_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Vars_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Entry_18;
      MR_Word Type_20;
      MR_Word IsDummy_21;

      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_1, Var_14, &Entry_18);
      Type_20 = ((MR_Word) ((MR_hl_field(0, Entry_18, (MR_Integer) 1))));
      IsDummy_21 = ((MR_Unsigned) ((MR_hl_field(0, Entry_18, (MR_Integer) 2))) & (MR_Integer) 1);
      switch (IsDummy_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__3_3 = Vars_15;

            // direct tailcall eliminated
            ;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word VarName_22;
            MR_Word HeadDefn_23;
            MR_Word TailDefns_24;
            MR_Word STATE_VARIABLE_Info_28_28;

            VarName_22 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(Var_14, Entry_18);
            ml_backend__ml_code_util__ml_gen_local_var_decl_6_p_0(VarName_22, Type_20, Context_2, &HeadDefn_23, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_28_28);
            ml_backend__ml_code_gen__ml_gen_local_var_decls_6_p_0(VarTable_1, Context_2, Vars_15, &TailDefns_24, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadDefn_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailDefns_24));
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "nondet in det");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "semi in det");
            return;
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
            MR_Word Var_35;

            ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(Context_10, &CallCont_14, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
            {
              Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_35, 0) = ((MR_Box) (CallCont_14));
              MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), STATE_VARIABLE_Stmts_0_17, Var_35);
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
            MR_Word STATE_VARIABLE_Info_37_37;
            MR_Word Var_41;
            MR_Word CallCont_43;

            ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&Succeeded_15, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_37_37);
            ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(Context_10, &CallCont_43, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_20);
            {
              IfStmt_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, IfStmt_16, 0) = ((MR_Box) (Succeeded_15));
              MR_hl_field(2, IfStmt_16, 1) = ((MR_Box) (CallCont_43));
              MR_hl_field(2, IfStmt_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, IfStmt_16, 3) = ((MR_Box) (Context_10));
            }
            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (IfStmt_16));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), STATE_VARIABLE_Stmts_0_17, Var_41);
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
            MR_Word Var_31;

            ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(3, &ml_backend__ml_code_gen_scalar_common_1[3])), Context_10, &SetSuccessTrue_13, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
            {
              Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_31, 0) = ((MR_Box) (SetSuccessTrue_13));
              MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), STATE_VARIABLE_Stmts_0_17, Var_31);
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_gen.ml_gen_maybe_convert_goal_code_model\'/7", (MR_String) "nondet in semi");
            return;
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
