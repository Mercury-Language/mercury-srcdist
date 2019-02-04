/*
** Automatically generated from `ml_switch_gen.m'
** by the Mercury compiler,
** version rotd-2017-09-03
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


// :- module ml_backend.ml_switch_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_switch_gen__init
ENDINIT
*/

#include "ml_backend.ml_switch_gen.mih"


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
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "int.mih"
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
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_lookup_switch.mih"
#include "ml_backend.ml_simplify_switch.mih"
#include "ml_backend.ml_string_switch.mih"
#include "ml_backend.ml_tag_switch.mih"
#include "ml_backend.ml_target_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0;

static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
  MR_Word TaggedConsId_4,
  MR_Integer STATE_VARIABLE_CaseCost_0_9,
  MR_Integer * STATE_VARIABLE_CaseCost_10);

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
  MR_Word TaggedCase_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(
  MR_Word SwitchVar_11,
  MR_Word CanFail_12,
  MR_Word TaggedCases_13,
  MR_Word CodeModel_14,
  MR_Word Context_15,
  MR_Word GoalInfo_16,
  MR_Word * Decls_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
  MR_Word Cases_9,
  MR_Word Var_10,
  MR_Word CodeModel_11,
  MR_Word CanFail_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_11_p_0(
  MR_Word SwitchVar_12,
  MR_Word SwitchVarType_13,
  MR_Word CanFail_14,
  MR_Word TaggedCases_15,
  MR_Word MaybeIntSwitchInfo_16,
  MR_Word CodeModel_17,
  MR_Word Context_18,
  MR_Word GoalInfo_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0(
  MR_Word MerType_1,
  MR_Word MLDS_Type_2,
  MR_Word HeadVar__3_3,
  MR_Word CodeModel_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(
  MR_Word MerType_5,
  MR_Word MLDS_Type_6,
  MR_Word TaggedConsId_7,
  MR_Word * MatchCond_8);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
  MR_Word TaggedCases0_9,
  MR_Word Var_10,
  MR_Word CodeModel_11,
  MR_Word CanFail_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
  MR_Word TaggedCase_10,
  MR_Word TaggedCases_11,
  MR_Word Var_12,
  MR_Word CodeModel_13,
  MR_Word CanFail_14,
  MR_Word Context_15,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
  MR_Word FirstExpr_4,
  MR_Word LaterExprs_5,
  MR_Word * Expr_6);


static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_1[6][3];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_2[1][8];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_4[1][7];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_5[1][6];




static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0
  }
};

static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
  MR_Word TaggedConsId_4,
  MR_Integer STATE_VARIABLE_CaseCost_0_9,
  MR_Integer * STATE_VARIABLE_CaseCost_10)
{
  {
    MR_Word ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_4, (MR_Integer) 1)));
    MR_Integer ConsIdCost_8;
    MR_Word _ConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_4, (MR_Integer) 0)));

    ConsIdCost_8 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ConsTag_7);
    *STATE_VARIABLE_CaseCost_10 = (STATE_VARIABLE_CaseCost_0_9 + ConsIdCost_8);
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_CaseCost_10;

    ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_STATE_VARIABLE_CaseCost_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CaseCost_10));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
  MR_Word TaggedCase_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Integer Cost_4;
    MR_Word TaggedMainConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_3, (MR_Integer) 0)));
    MR_Word TaggedOtherConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_3, (MR_Integer) 1)));
    MR_Integer MainCost_9;
    MR_Word ConsTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedMainConsId_5, (MR_Integer) 1)));
    MR_Integer ConsIdCost_23;
    MR_Word _CaseNum_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_3, (MR_Integer) 2)));
    MR_Word _Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_3, (MR_Integer) 3)));
    MR_Word _ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedMainConsId_5, (MR_Integer) 0)));
    MR_Box conv1_Cost_4;

    ConsIdCost_23 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ConsTag_22);
    MainCost_9 = ((MR_Integer) 0 + ConsIdCost_23);
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[5], TaggedOtherConsIds_6, ((MR_Box) (MainCost_9)), &conv1_Cost_4);
    Cost_4 = ((MR_Integer) conv1_Cost_4);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Cost_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TaggedCase_3));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) wrapper_arg_1), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(
  MR_Word SwitchVar_11,
  MR_Word CanFail_12,
  MR_Word Cases_13,
  MR_Word CodeModel_14,
  MR_Word Context_15,
  MR_Word GoalInfo_16,
  MR_Word * Decls_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_20;
    MR_Word SwitchVarType_21;
    MR_Word TaggedCases_22;
    MR_Word MaybeIntSwitchInfo_23;
    MR_Word SwitchCategory_24;
    MR_Word MayUseSmartIndexing_25;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_30, &ModuleInfo_20);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_30, SwitchVar_11, &SwitchVarType_21);
    backend_libs__switch_util__tag_cases_5_p_0(ModuleInfo_20, SwitchVarType_21, Cases_13, &TaggedCases_22, &MaybeIntSwitchInfo_23);
    backend_libs__switch_util__find_switch_category_4_p_0(ModuleInfo_20, SwitchVarType_21, &SwitchCategory_24, &MayUseSmartIndexing_25);
    switch (MayUseSmartIndexing_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_29_61 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
          MR_Word TypeInfo_30_62 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
          MR_Word CostTaggedCases0_50;
          MR_Word CostTaggedCases_51;
          MR_Word TaggedCases_52;

          mercury__list__map_3_p_0(TypeCtorInfo_29_61, TypeInfo_30_62, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[3], TaggedCases_22, &CostTaggedCases0_50);
          mercury__list__sort_2_p_0(TypeInfo_30_62, CostTaggedCases0_50, &CostTaggedCases_51);
          mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_29_61, CostTaggedCases_51, &TaggedCases_52);
          if ((TaggedCases_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
              return;
            }
          }
          else
          {
            MR_Word FirstTaggedCase_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), TaggedCases_52, (MR_Integer) 0)));
            MR_Word LaterTaggedCases_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), TaggedCases_52, (MR_Integer) 1)));

            ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(FirstTaggedCase_53, LaterTaggedCases_54, SwitchVar_11, CodeModel_14, CanFail_12, Context_15, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
          }
          *Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Globals_26;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_20, &Globals_26);
          switch (SwitchCategory_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_11_p_0(SwitchVar_11, SwitchVarType_21, CanFail_12, TaggedCases_22, MaybeIntSwitchInfo_23, CodeModel_14, Context_15, GoalInfo_16, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
                *Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeCtorInfo_29_84 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
                MR_Word TypeInfo_30_85 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
                MR_Word CostTaggedCases0_73;
                MR_Word CostTaggedCases_74;
                MR_Word TaggedCases_75;

                mercury__list__map_3_p_0(TypeCtorInfo_29_84, TypeInfo_30_85, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[4], TaggedCases_22, &CostTaggedCases0_73);
                mercury__list__sort_2_p_0(TypeInfo_30_85, CostTaggedCases0_73, &CostTaggedCases_74);
                mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_29_84, CostTaggedCases_74, &TaggedCases_75);
                if ((TaggedCases_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
                    return;
                  }
                }
                else
                {
                  MR_Word FirstTaggedCase_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), TaggedCases_75, (MR_Integer) 0)));
                  MR_Word LaterTaggedCases_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), TaggedCases_75, (MR_Integer) 1)));

                  ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(FirstTaggedCase_76, LaterTaggedCases_77, SwitchVar_11, CodeModel_14, CanFail_12, Context_15, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
                }
                *Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(SwitchVar_11, CanFail_12, TaggedCases_22, CodeModel_14, Context_15, GoalInfo_16, Decls_17, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
              break;
            case (MR_Integer) 2:
              {
                MR_Integer NumConsIds_27;
                MR_Integer NumArms_28;
                MR_Integer TagSize_29;
                MR_Integer Var_34;
                MR_Word Var_35;

                backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(TaggedCases_22, &NumConsIds_27, &NumArms_28);
                libs__globals__lookup_int_option_3_p_0(Globals_26, (MR_Integer) 450, &TagSize_29);
                succeeded = (NumConsIds_27 >= TagSize_29);
                if (succeeded)
                {
                  Var_34 = (MR_Integer) 1;
                  succeeded = (NumArms_28 > Var_34);
                  if (succeeded)
                  {
                    Var_35 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(Globals_26);
                    succeeded = (Var_35 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0(TaggedCases_22, SwitchVar_11, CodeModel_14, CanFail_12, Context_15, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
                else
                  ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(TaggedCases_22, SwitchVar_11, CodeModel_14, CanFail_12, Context_15, Stmts_18, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
                *Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(
  MR_Word SwitchVar_11,
  MR_Word CanFail_12,
  MR_Word TaggedCases_13,
  MR_Word CodeModel_14,
  MR_Word Context_15,
  MR_Word GoalInfo_16,
  MR_Word * Decls_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word FilteredTaggedCases_20;
    MR_Word FilteredCanFail_21;
    MR_Integer NumConsIds_22;
    MR_Integer NumArms_23;
    MR_Word ModuleInfo_24;
    MR_Word Globals_25;

    backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(CodeModel_14, TaggedCases_13, &FilteredTaggedCases_20, CanFail_12, &FilteredCanFail_21);
    backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(FilteredTaggedCases_20, &NumConsIds_22, &NumArms_23);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_33, &ModuleInfo_24);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_24, &Globals_25);
    succeeded = (NumArms_23 < (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_29_87 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
      MR_Word TypeInfo_30_88 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
      MR_Word CostTaggedCases0_76;
      MR_Word CostTaggedCases_77;
      MR_Word TaggedCases_78;

      mercury__list__map_3_p_0(TypeCtorInfo_29_87, TypeInfo_30_88, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[2], FilteredTaggedCases_20, &CostTaggedCases0_76);
      mercury__list__sort_2_p_0(TypeInfo_30_88, CostTaggedCases0_76, &CostTaggedCases_77);
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_29_87, CostTaggedCases_77, &TaggedCases_78);
      if ((TaggedCases_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
          return;
        }
      }
      else
      {
        MR_Word FirstTaggedCase_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), TaggedCases_78, (MR_Integer) 0)));
        MR_Word LaterTaggedCases_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), TaggedCases_78, (MR_Integer) 1)));

        ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(FirstTaggedCase_79, LaterTaggedCases_80, SwitchVar_11, CodeModel_14, FilteredCanFail_21, Context_15, Stmts_18, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
      }
      *Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word Var_37;

      Var_37 = ml_backend__ml_target_util__globals_target_supports_string_switch_1_f_0(Globals_25);
      succeeded = (Var_37 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_25, (MR_Integer) 327, (MR_Integer) 1);
        if (!(succeeded))
        {
          MR_Word Var_64;

          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_33, &Var_64);
          succeeded = ((MR_Integer) 1 == Var_64);
        }
      }
      if (succeeded)
      {
        ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(FilteredTaggedCases_20, SwitchVar_11, CodeModel_14, FilteredCanFail_21, Context_15, Stmts_18, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
        *Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        {
          MR_Word Var_65;

          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_33, &Var_65);
          succeeded = ((MR_Integer) 1 == Var_65);
        }
        if (!(succeeded))
        {
          MR_Word Var_42;
          MR_Word Var_43;

          Var_42 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(Globals_25);
          succeeded = (Var_42 == (MR_Integer) 0);
          if (succeeded)
          {
            Var_43 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(Globals_25);
            succeeded = (Var_43 == (MR_Integer) 0);
          }
        }
        if (succeeded)
        {
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(FilteredTaggedCases_20, SwitchVar_11, CodeModel_14, FilteredCanFail_21, Context_15, Stmts_18, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
          *Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Word MaybeLookupSwitchInfo_26;
          MR_Word SwitchVarLval_27;
          MR_Word SwitchVarRval_28;
          MR_Word STATE_VARIABLE_Info_46_46;
          MR_Integer StringTrieSwitchSize_29;
          MR_Word Var_48;
          MR_Word Var_66;

          ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(SwitchVar_11, FilteredTaggedCases_20, GoalInfo_16, CodeModel_14, &MaybeLookupSwitchInfo_26, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_46_46);
          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_46_46, SwitchVar_11, &SwitchVarLval_27);
          {
            SwitchVarRval_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), SwitchVarRval_28, 0) = ((MR_Box) (SwitchVarLval_27));
          }
          libs__globals__lookup_int_option_3_p_0(Globals_25, (MR_Integer) 447, &StringTrieSwitchSize_29);
          succeeded = (NumConsIds_22 >= StringTrieSwitchSize_29);
          if (succeeded)
          {
            Var_48 = (MR_Integer) 0;
            libs__globals__get_target_2_p_0(Globals_25, &Var_66);
            succeeded = (Var_48 == Var_66);
          }
          if (succeeded)
          {
            if ((MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ml_backend__ml_string_switch__ml_generate_string_trie_jump_switch_8_p_0(SwitchVarRval_28, FilteredTaggedCases_20, CodeModel_14, FilteredCanFail_21, Context_15, Stmts_18, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_34);
            else
            {
              MR_Word LookupSwitchInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

              ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_9_p_0(SwitchVarRval_28, FilteredTaggedCases_20, LookupSwitchInfo_30, CodeModel_14, FilteredCanFail_21, Context_15, Stmts_18, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_34);
            }
            *Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MR_Integer StringHashSwitchSize_31;

            libs__globals__lookup_int_option_3_p_0(Globals_25, (MR_Integer) 448, &StringHashSwitchSize_31);
            succeeded = (NumConsIds_22 >= StringHashSwitchSize_31);
            if (succeeded)
              if ((MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ml_backend__ml_string_switch__ml_generate_string_hash_jump_switch_9_p_0(SwitchVarRval_28, FilteredTaggedCases_20, CodeModel_14, FilteredCanFail_21, Context_15, Decls_17, Stmts_18, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_34);
              else
              {
                MR_Word LookupSwitchInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

                ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0(SwitchVarRval_28, FilteredTaggedCases_20, LookupSwitchInfo_58, CodeModel_14, FilteredCanFail_21, Context_15, Decls_17, Stmts_18, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_34);
              }
            else
            {
              MR_Integer StringBinarySwitchSize_32;

              libs__globals__lookup_int_option_3_p_0(Globals_25, (MR_Integer) 449, &StringBinarySwitchSize_32);
              succeeded = (NumConsIds_22 >= StringBinarySwitchSize_32);
              if (succeeded)
                if ((MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_9_p_0(SwitchVarRval_28, FilteredTaggedCases_20, CodeModel_14, FilteredCanFail_21, Context_15, Decls_17, Stmts_18, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_34);
                else
                {
                  MR_Word LookupSwitchInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

                  ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0(SwitchVarRval_28, FilteredTaggedCases_20, LookupSwitchInfo_60, CodeModel_14, FilteredCanFail_21, Context_15, Decls_17, Stmts_18, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_34);
                }
              else
              {
                ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(FilteredTaggedCases_20, SwitchVar_11, CodeModel_14, FilteredCanFail_21, Context_15, Stmts_18, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_34);
                *Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
  MR_Word Cases_9,
  MR_Word Var_10,
  MR_Word CodeModel_11,
  MR_Word CanFail_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_bool succeeded;
    MR_Word Type_16;
    MR_Word MLDS_Type_17;
    MR_Word Lval_18;
    MR_Word Rval_19;
    MR_Word Range_20;
    MR_Word MLDS_Cases_21;
    MR_Word Default_22;
    MR_Word SwitchStmt0_23;
    MR_Word SwitchStmt_24;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Integer MinRange_38;
    MR_Integer MaxRange_39;
    MR_Word ModuleInfo_34;
    MR_Word ExportedType_35;
    MR_Word Type_36;
    MR_Word TypeCategory_37;
    MR_Word Var_41;
    MR_Integer _NumValuesInRange_40;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_25, Var_10, &Type_16);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_25, Type_16, &MLDS_Type_17);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_25, Var_10, &Lval_18);
    {
      Rval_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Rval_19, 0) = ((MR_Box) (Lval_18));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_25, &ModuleInfo_34);
    succeeded = ((MR_tag((MR_Word) MLDS_Type_17)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), MLDS_Type_17, (MR_Integer) 0)));
      TypeCategory_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), MLDS_Type_17, (MR_Integer) 1)));
      ExportedType_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), MLDS_Type_17, (MR_Integer) 2)));
      Var_41 = backend_libs__foreign__to_exported_type_2_f_0(ModuleInfo_34, Type_36);
      succeeded = backend_libs__foreign____Unify____exported_type_0_0(ExportedType_35, Var_41);
      if (succeeded)
        succeeded = backend_libs__switch_util__type_range_6_p_0(ModuleInfo_34, TypeCategory_37, Type_36, &MinRange_38, &MaxRange_39, &_NumValuesInRange_40);
    }
    if (succeeded)
      {
        Range_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Range_20, 0) = ((MR_Box) (MinRange_38));
        MR_hl_field(MR_mktag(1), Range_20, 1) = ((MR_Box) (MaxRange_39));
      }
    else
      Range_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0(Type_16, MLDS_Type_17, Cases_9, CodeModel_11, &MLDS_Cases_21, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_27_27);
    ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CanFail_12, CodeModel_11, Context_13, &Default_22, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28);
    {
      SwitchStmt0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchStmt0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), SwitchStmt0_23, 1) = ((MR_Box) (MLDS_Type_17));
      MR_hl_field(MR_mktag(3), SwitchStmt0_23, 2) = ((MR_Box) (Rval_19));
      MR_hl_field(MR_mktag(3), SwitchStmt0_23, 3) = ((MR_Box) (Range_20));
      MR_hl_field(MR_mktag(3), SwitchStmt0_23, 4) = ((MR_Box) (MLDS_Cases_21));
      MR_hl_field(MR_mktag(3), SwitchStmt0_23, 5) = ((MR_Box) (Default_22));
      MR_hl_field(MR_mktag(3), SwitchStmt0_23, 6) = ((MR_Box) (Context_13));
    }
    ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_23, &SwitchStmt_24, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_26);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SwitchStmt_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_11_p_0(
  MR_Word SwitchVar_12,
  MR_Word SwitchVarType_13,
  MR_Word CanFail_14,
  MR_Word TaggedCases_15,
  MR_Word MaybeIntSwitchInfo_16,
  MR_Word CodeModel_17,
  MR_Word Context_18,
  MR_Word GoalInfo_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  {
    MR_bool succeeded;
    MR_Integer NumConsIds_22;
    MR_Integer NumArms_23;
    MR_Word ModuleInfo_24;
    MR_Word Globals_25;
    MR_Word NeedBitVecCheck_33;
    MR_Word NeedRangeCheck_34;
    MR_Integer FirstVal_35;
    MR_Integer LastVal_36;
    MR_Word LookupSwitchInfo_38;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_Integer LowerLimit_26;
    MR_Integer UpperLimit_27;
    MR_Integer NumValues_28;
    MR_Integer LookupSize_29;
    MR_Integer ReqDensity_30;
    MR_Word FilteredTaggedCases_31;
    MR_Word FilteredCanFail_32;
    MR_Word MaybeLookupSwitchInfo_37;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Integer Var_46;
    MR_Word Var_47;
    MR_Word Var_54;

    backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(TaggedCases_15, &NumConsIds_22, &NumArms_23);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_40, &ModuleInfo_24);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_24, &Globals_25);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_40, &Var_54);
    succeeded = ((MR_Integer) 0 == Var_54);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeIntSwitchInfo_16)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        LowerLimit_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeIntSwitchInfo_16, (MR_Integer) 0)));
        UpperLimit_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeIntSwitchInfo_16, (MR_Integer) 1)));
        NumValues_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeIntSwitchInfo_16, (MR_Integer) 2)));
        Var_43 = (MR_Integer) 459;
        Var_44 = (MR_Integer) 1;
        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_25, Var_43, Var_44);
        if (succeeded)
        {
          Var_45 = (MR_Integer) 446;
          libs__globals__lookup_int_option_3_p_0(Globals_25, Var_45, &LookupSize_29);
          succeeded = (NumConsIds_22 >= LookupSize_29);
          if (succeeded)
          {
            Var_46 = (MR_Integer) 1;
            succeeded = (NumArms_23 > Var_46);
            if (succeeded)
            {
              Var_47 = (MR_Integer) 444;
              libs__globals__lookup_int_option_3_p_0(Globals_25, Var_47, &ReqDensity_30);
              backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(CodeModel_17, TaggedCases_15, &FilteredTaggedCases_31, CanFail_14, &FilteredCanFail_32);
              succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ModuleInfo_24, SwitchVarType_13, FilteredCanFail_32, LowerLimit_26, UpperLimit_27, NumValues_28, ReqDensity_30, &NeedBitVecCheck_33, &NeedRangeCheck_34, &FirstVal_35, &LastVal_36);
              if (succeeded)
              {
                ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(SwitchVar_12, FilteredTaggedCases_31, GoalInfo_19, CodeModel_17, &MaybeLookupSwitchInfo_37, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_48_48);
                succeeded = ((MR_tag((MR_Word) MaybeLookupSwitchInfo_37)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  LookupSwitchInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeLookupSwitchInfo_37, (MR_Integer) 0)));
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word LookupStmt_39;

      ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0(SwitchVar_12, TaggedCases_15, LookupSwitchInfo_38, CodeModel_17, Context_18, FirstVal_35, LastVal_36, NeedBitVecCheck_33, NeedRangeCheck_34, &LookupStmt_39, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_41);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LookupStmt_39));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word Var_51;

      Var_51 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(Globals_25);
      succeeded = (Var_51 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Type_64;
        MR_Word MLDS_Type_65;
        MR_Word Lval_66;
        MR_Word Rval_67;
        MR_Word Range_68;
        MR_Word MLDS_Cases_69;
        MR_Word Default_70;
        MR_Word SwitchStmt0_71;
        MR_Word SwitchStmt_72;
        MR_Word STATE_VARIABLE_Info_27_73;
        MR_Word STATE_VARIABLE_Info_28_74;
        MR_Integer MinRange_84;
        MR_Integer MaxRange_85;
        MR_Word ModuleInfo_80;
        MR_Word ExportedType_81;
        MR_Word Type_82;
        MR_Word TypeCategory_83;
        MR_Word Var_87;
        MR_Integer _NumValuesInRange_86;

        ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_40, SwitchVar_12, &Type_64);
        ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_40, Type_64, &MLDS_Type_65);
        ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_40, SwitchVar_12, &Lval_66);
        {
          Rval_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Rval_67, 0) = ((MR_Box) (Lval_66));
        }
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_40, &ModuleInfo_80);
        succeeded = ((MR_tag((MR_Word) MLDS_Type_65)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
        {
          Type_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), MLDS_Type_65, (MR_Integer) 0)));
          TypeCategory_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), MLDS_Type_65, (MR_Integer) 1)));
          ExportedType_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), MLDS_Type_65, (MR_Integer) 2)));
          Var_87 = backend_libs__foreign__to_exported_type_2_f_0(ModuleInfo_80, Type_82);
          succeeded = backend_libs__foreign____Unify____exported_type_0_0(ExportedType_81, Var_87);
          if (succeeded)
            succeeded = backend_libs__switch_util__type_range_6_p_0(ModuleInfo_80, TypeCategory_83, Type_82, &MinRange_84, &MaxRange_85, &_NumValuesInRange_86);
        }
        if (succeeded)
          {
            Range_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Range_68, 0) = ((MR_Box) (MinRange_84));
            MR_hl_field(MR_mktag(1), Range_68, 1) = ((MR_Box) (MaxRange_85));
          }
        else
          Range_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0(Type_64, MLDS_Type_65, TaggedCases_15, CodeModel_17, &MLDS_Cases_69, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_27_73);
        ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CanFail_14, CodeModel_17, Context_18, &Default_70, STATE_VARIABLE_Info_27_73, &STATE_VARIABLE_Info_28_74);
        {
          SwitchStmt0_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SwitchStmt0_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), SwitchStmt0_71, 1) = ((MR_Box) (MLDS_Type_65));
          MR_hl_field(MR_mktag(3), SwitchStmt0_71, 2) = ((MR_Box) (Rval_67));
          MR_hl_field(MR_mktag(3), SwitchStmt0_71, 3) = ((MR_Box) (Range_68));
          MR_hl_field(MR_mktag(3), SwitchStmt0_71, 4) = ((MR_Box) (MLDS_Cases_69));
          MR_hl_field(MR_mktag(3), SwitchStmt0_71, 5) = ((MR_Box) (Default_70));
          MR_hl_field(MR_mktag(3), SwitchStmt0_71, 6) = ((MR_Box) (Context_18));
        }
        ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_71, &SwitchStmt_72, STATE_VARIABLE_Info_28_74, STATE_VARIABLE_Info_41);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SwitchStmt_72));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
        ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(TaggedCases_15, SwitchVar_12, CodeModel_17, CanFail_14, Context_18, Stmts_20, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MatchCond_8;

    ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_MatchCond_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_MatchCond_8));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0(
  MR_Word MerType_1,
  MR_Word MLDS_Type_2,
  MR_Word HeadVar__3_3,
  MR_Word CodeModel_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word TaggedCase_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word TaggedCases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word MLDS_Case_19;
    MR_Word MLDS_Cases_20;
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word TaggedMainConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_16, (MR_Integer) 0)));
    MR_Word TaggedOtherConsIds_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_16, (MR_Integer) 1)));
    MR_Word Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_16, (MR_Integer) 3)));
    MR_Word MainCond_38;
    MR_Word OtherConds_39;
    MR_Word Stmt_40;
    MR_Word Var_41;
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_16, (MR_Integer) 2)));

    ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(MerType_1, MLDS_Type_2, TaggedMainConsId_34, &MainCond_38);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (MerType_1));
      MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (MLDS_Type_2));
    }
    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, Var_41, TaggedOtherConsIds_35, &OtherConds_39);
    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(CodeModel_4, Goal_37, &Stmt_40, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_24_24);
    {
      MLDS_Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MLDS_Case_19, 0) = ((MR_Box) (MainCond_38));
      MR_hl_field(MR_mktag(0), MLDS_Case_19, 1) = ((MR_Box) (OtherConds_39));
      MR_hl_field(MR_mktag(0), MLDS_Case_19, 2) = ((MR_Box) (Stmt_40));
    }
    ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0(MerType_1, MLDS_Type_2, TaggedCases_17, CodeModel_4, &MLDS_Cases_20, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MLDS_Case_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MLDS_Cases_20));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(
  MR_Word MerType_5,
  MR_Word MLDS_Type_6,
  MR_Word TaggedConsId_7,
  MR_Word * MatchCond_8)
{
  {
    MR_Word Tag_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 1)));
    MR_Word Rval_12;
    MR_Word _ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) Tag_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/4", (MR_String) "invalid tag type");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), Tag_10, (MR_Integer) 0)));
          MR_Word Var_48;

          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (String_13));
          }
          {
            Rval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Rval_12, 1) = ((MR_Box) (Var_48));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/4", (MR_String) "invalid tag type");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_10, (MR_Integer) 1)));

              Rval_12 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_11, MerType_5, MLDS_Type_6);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_10, (MR_Integer) 1)));
              MR_String ForeignTag_15 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_10, (MR_Integer) 2)));
              MR_Word Var_47;

              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (ForeignLang_14));
                MR_hl_field(MR_mktag(3), Var_47, 2) = ((MR_Box) (ForeignTag_15));
                MR_hl_field(MR_mktag(3), Var_47, 3) = ((MR_Box) (MLDS_Type_6));
              }
              {
                Rval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_12, 1) = ((MR_Box) (Var_47));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/4", (MR_String) "invalid tag type");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *MatchCond_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
  MR_Word TaggedCases0_9,
  MR_Word Var_10,
  MR_Word CodeModel_11,
  MR_Word CanFail_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_Word TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
    MR_Word TypeInfo_30_30 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
    MR_Word CostTaggedCases0_16;
    MR_Word CostTaggedCases_17;
    MR_Word TaggedCases_18;

    mercury__list__map_3_p_0(TypeCtorInfo_29_29, TypeInfo_30_30, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[1], TaggedCases0_9, &CostTaggedCases0_16);
    mercury__list__sort_2_p_0(TypeInfo_30_30, CostTaggedCases0_16, &CostTaggedCases_17);
    mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_29_29, CostTaggedCases_17, &TaggedCases_18);
    if ((TaggedCases_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
        return;
      }
    }
    else
    {
      MR_Word FirstTaggedCase_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), TaggedCases_18, (MR_Integer) 0)));
      MR_Word LaterTaggedCases_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), TaggedCases_18, (MR_Integer) 1)));

      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(FirstTaggedCase_19, LaterTaggedCases_20, Var_10, CodeModel_11, CanFail_12, Context_13, Stmts_14, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;
    MR_Word conv3_HeadVar__5_5;

    ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv4_HeadVar__3_3, ((MR_Word) wrapper_arg_3), &conv3_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__5_5;

    ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_HeadVar__3_3, ((MR_Word) wrapper_arg_3), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
  MR_Word TaggedCase_10,
  MR_Word TaggedCases_11,
  MR_Word Var_12,
  MR_Word CodeModel_13,
  MR_Word CanFail_14,
  MR_Word Context_15,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_Word Stmt_16;
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_10, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_10, (MR_Integer) 1)));
    MR_Word Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_10, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_10, (MR_Integer) 2)));

    if ((TaggedCases_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (CanFail_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Cond_22;
            MR_Word GoalBlock_23;
            MR_Word FailStmts_24;
            MR_Word FailBlock_25;
            MR_Word STATE_VARIABLE_Info_39_39;
            MR_Word STATE_VARIABLE_Info_40_40;
            MR_Word Var_44;
            MR_Word MainTagTestRval_58;
            MR_Word OtherTagTestRval_59;
            MR_Word STATE_VARIABLE_Info_18_60;
            MR_Word Var_61;
            MR_Box conv2_STATE_VARIABLE_Info_39_39;

            ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(Var_12, Var_18, &MainTagTestRval_58, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_18_60);
            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1));
              MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Var_12));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, Var_61, Var_19, &OtherTagTestRval_59, ((MR_Box) (STATE_VARIABLE_Info_18_60)), &conv2_STATE_VARIABLE_Info_39_39);
            STATE_VARIABLE_Info_39_39 = ((MR_Word) conv2_STATE_VARIABLE_Info_39_39);
            ml_backend__ml_switch_gen__chain_ors_3_p_0(MainTagTestRval_58, OtherTagTestRval_59, &Cond_22);
            ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(CodeModel_13, Goal_21, &GoalBlock_23, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
            ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_13, Context_15, &FailStmts_24, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_31);
            FailBlock_25 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), FailStmts_24, Context_15);
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (FailBlock_25));
            }
            {
              Stmt_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Stmt_16, 0) = ((MR_Box) (Cond_22));
              MR_hl_field(MR_mktag(2), Stmt_16, 1) = ((MR_Box) (GoalBlock_23));
              MR_hl_field(MR_mktag(2), Stmt_16, 2) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(2), Stmt_16, 3) = ((MR_Box) (Context_15));
            }
          }
          break;
        case (MR_Integer) 1:
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(CodeModel_13, Goal_21, &Stmt_16, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
          break;
      }
    else
    {
      MR_Word LaterTaggedCase_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), TaggedCases_11, (MR_Integer) 0)));
      MR_Word LaterTaggedCases_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), TaggedCases_11, (MR_Integer) 1)));
      MR_Word LaterStmts_28;
      MR_Word LaterBlock_29;
      MR_Word STATE_VARIABLE_Info_33_33;
      MR_Word STATE_VARIABLE_Info_34_34;
      MR_Word Var_38;
      MR_Word Cond_46;
      MR_Word GoalBlock_47;
      MR_Word MainTagTestRval_80;
      MR_Word OtherTagTestRval_81;
      MR_Word STATE_VARIABLE_Info_18_82;
      MR_Word Var_83;
      MR_Box conv5_STATE_VARIABLE_Info_33_33;

      ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(Var_12, Var_18, &MainTagTestRval_80, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_18_82);
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (Var_12));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, Var_83, Var_19, &OtherTagTestRval_81, ((MR_Box) (STATE_VARIABLE_Info_18_82)), &conv5_STATE_VARIABLE_Info_33_33);
      STATE_VARIABLE_Info_33_33 = ((MR_Word) conv5_STATE_VARIABLE_Info_33_33);
      ml_backend__ml_switch_gen__chain_ors_3_p_0(MainTagTestRval_80, OtherTagTestRval_81, &Cond_46);
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(CodeModel_13, Goal_21, &GoalBlock_47, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_34_34);
      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(LaterTaggedCase_26, LaterTaggedCases_27, Var_12, CodeModel_13, CanFail_14, Context_15, &LaterStmts_28, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_31);
      LaterBlock_29 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), LaterStmts_28, Context_15);
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (LaterBlock_29));
      }
      {
        Stmt_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Stmt_16, 0) = ((MR_Box) (Cond_46));
        MR_hl_field(MR_mktag(2), Stmt_16, 1) = ((MR_Box) (GoalBlock_47));
        MR_hl_field(MR_mktag(2), Stmt_16, 2) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(2), Stmt_16, 3) = ((MR_Box) (Context_15));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
  MR_Word FirstExpr_4,
  MR_Word LaterExprs_5,
  MR_Word * Expr_6)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if ((LaterExprs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Expr_6 = FirstExpr_4;
    else
    {
      MR_Word SecondExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), LaterExprs_5, (MR_Integer) 0)));
      MR_Word OtherExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), LaterExprs_5, (MR_Integer) 1)));
      MR_Word FirstSecondExpr_9;
      MR_Word next_value_of_FirstExpr_4;
      MR_Word next_value_of_LaterExprs_5;

      {
        FirstSecondExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FirstSecondExpr_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), FirstSecondExpr_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(3), FirstSecondExpr_9, 2) = ((MR_Box) (FirstExpr_4));
        MR_hl_field(MR_mktag(3), FirstSecondExpr_9, 3) = ((MR_Box) (SecondExpr_7));
      }
      // direct tailcall eliminated
      next_value_of_FirstExpr_4 = FirstSecondExpr_9;
      next_value_of_LaterExprs_5 = OtherExprs_8;
      FirstExpr_4 = next_value_of_FirstExpr_4;
      LaterExprs_5 = next_value_of_LaterExprs_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(
  MR_Word CanFail_7,
  MR_Word CodeModel_8,
  MR_Word Context_9,
  MR_Word * Default_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;

    switch (CanFail_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FailStmts_12;

          ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_8, Context_9, &FailStmts_12, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
          succeeded = mercury__list__is_empty_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, FailStmts_12);
          if (succeeded)
            *Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          else
          {
            MR_Word Fail_13;

            Fail_13 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), FailStmts_12, Context_9);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *Default_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Fail_13));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
        }
        break;
    }
  }
}

void mercury__ml_backend__ml_switch_gen__init(void)
{
}

void mercury__ml_backend__ml_switch_gen__init_type_tables(void)
{
}

void mercury__ml_backend__ml_switch_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_switch_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_switch_gen.
