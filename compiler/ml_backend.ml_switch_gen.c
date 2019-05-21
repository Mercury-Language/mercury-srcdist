/*
** Automatically generated from `ml_switch_gen.m'
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


/* :- module ml_backend.ml_switch_gen. */
/* :- implementation. */

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
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_4,
  MR_Integer ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9,
  MR_Integer * ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10);

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
  MR_Word ml_backend__ml_switch_gen__TaggedCase_3,
  MR_Word * ml_backend__ml_switch_gen__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(
  MR_Word ml_backend__ml_switch_gen__SwitchVar_11,
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
  MR_Word ml_backend__ml_switch_gen__TaggedCases_13,
  MR_Word ml_backend__ml_switch_gen__CodeModel_14,
  MR_Word ml_backend__ml_switch_gen__Context_15,
  MR_Word ml_backend__ml_switch_gen__GoalInfo_16,
  MR_Word * ml_backend__ml_switch_gen__Decls_17,
  MR_Word * ml_backend__ml_switch_gen__Stmts_18,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
  MR_Word ml_backend__ml_switch_gen__Cases_9,
  MR_Word ml_backend__ml_switch_gen__Var_10,
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
  MR_Word ml_backend__ml_switch_gen__Context_13,
  MR_Word * ml_backend__ml_switch_gen__Stmts_14,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_25,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_26);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_11_p_0(
  MR_Word ml_backend__ml_switch_gen__SwitchVar_12,
  MR_Word ml_backend__ml_switch_gen__SwitchVarType_13,
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
  MR_Word ml_backend__ml_switch_gen__TaggedCases_15,
  MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_16,
  MR_Word ml_backend__ml_switch_gen__CodeModel_17,
  MR_Word ml_backend__ml_switch_gen__Context_18,
  MR_Word ml_backend__ml_switch_gen__GoalInfo_19,
  MR_Word * ml_backend__ml_switch_gen__Stmts_20,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0(
  MR_Word ml_backend__ml_switch_gen__MerType_1,
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_2,
  MR_Word ml_backend__ml_switch_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_switch_gen__CodeModel_4,
  MR_Word * ml_backend__ml_switch_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(
  MR_Word ml_backend__ml_switch_gen__MerType_5,
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_6,
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_7,
  MR_Word * ml_backend__ml_switch_gen__MatchCond_8);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
  MR_Word ml_backend__ml_switch_gen__TaggedCases0_9,
  MR_Word ml_backend__ml_switch_gen__Var_10,
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
  MR_Word ml_backend__ml_switch_gen__Context_13,
  MR_Word * ml_backend__ml_switch_gen__Stmts_14,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
  MR_Word ml_backend__ml_switch_gen__TaggedCase_10,
  MR_Word ml_backend__ml_switch_gen__TaggedCases_11,
  MR_Word ml_backend__ml_switch_gen__Var_12,
  MR_Word ml_backend__ml_switch_gen__CodeModel_13,
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
  MR_Word ml_backend__ml_switch_gen__Context_15,
  MR_Word * ml_backend__ml_switch_gen__HeadVar__7_7,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);

static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
  MR_Word ml_backend__ml_switch_gen__FirstExpr_4,
  MR_Word ml_backend__ml_switch_gen__LaterExprs_5,
  MR_Word * ml_backend__ml_switch_gen__Expr_6);


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
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_4,
  MR_Integer ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9,
  MR_Integer * ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10)
{
  {
    MR_Word ml_backend__ml_switch_gen__ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_4, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_switch_gen__ConsIdCost_8;
    MR_Word ml_backend__ml_switch_gen___ConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_4, (MR_Integer) 0)));

    ml_backend__ml_switch_gen__ConsIdCost_8 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ml_backend__ml_switch_gen__ConsTag_7);
    *ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10 = (ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9 + ml_backend__ml_switch_gen__ConsIdCost_8);
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
    MR_Integer ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10;

    ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), ((MR_Integer) ml_backend__ml_switch_gen__wrapper_arg_2), &ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10);
    *ml_backend__ml_switch_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
  MR_Word ml_backend__ml_switch_gen__TaggedCase_3,
  MR_Word * ml_backend__ml_switch_gen__HeadVar__2_2)
{
  {
    MR_Integer ml_backend__ml_switch_gen__Cost_4;
    MR_Word ml_backend__ml_switch_gen__TaggedMainConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_switch_gen__TaggedOtherConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_switch_gen__MainCost_9;
    MR_Word ml_backend__ml_switch_gen__ConsTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedMainConsId_5, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_switch_gen__ConsIdCost_23;
    MR_Word ml_backend__ml_switch_gen___CaseNum_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_switch_gen___Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_switch_gen___ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedMainConsId_5, (MR_Integer) 0)));
    MR_Box ml_backend__ml_switch_gen__conv1_Cost_4;

    ml_backend__ml_switch_gen__ConsIdCost_23 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ml_backend__ml_switch_gen__ConsTag_22);
    ml_backend__ml_switch_gen__MainCost_9 = ((MR_Integer) 0 + ml_backend__ml_switch_gen__ConsIdCost_23);
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[5], ml_backend__ml_switch_gen__TaggedOtherConsIds_6, ((MR_Box) (ml_backend__ml_switch_gen__MainCost_9)), &ml_backend__ml_switch_gen__conv1_Cost_4);
    ml_backend__ml_switch_gen__Cost_4 = ((MR_Integer) ml_backend__ml_switch_gen__conv1_Cost_4);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_switch_gen__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cost_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_switch_gen__TaggedCase_3));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
    MR_Word ml_backend__ml_switch_gen__conv1_HeadVar__2_2;

    ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv1_HeadVar__2_2);
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

    ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
  }
}

void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(
  MR_Word ml_backend__ml_switch_gen__SwitchVar_11,
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
  MR_Word ml_backend__ml_switch_gen__Cases_13,
  MR_Word ml_backend__ml_switch_gen__CodeModel_14,
  MR_Word ml_backend__ml_switch_gen__Context_15,
  MR_Word ml_backend__ml_switch_gen__GoalInfo_16,
  MR_Word * ml_backend__ml_switch_gen__Decls_17,
  MR_Word * ml_backend__ml_switch_gen__Stmts_18,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31)
{
  {
    MR_bool ml_backend__ml_switch_gen__succeeded;
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_20;
    MR_Word ml_backend__ml_switch_gen__SwitchVarType_21;
    MR_Word ml_backend__ml_switch_gen__TaggedCases_22;
    MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23;
    MR_Word ml_backend__ml_switch_gen__SwitchCategory_24;
    MR_Word ml_backend__ml_switch_gen__MayUseSmartIndexing_25;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, &ml_backend__ml_switch_gen__ModuleInfo_20);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__SwitchVar_11, &ml_backend__ml_switch_gen__SwitchVarType_21);
    backend_libs__switch_util__tag_cases_5_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, ml_backend__ml_switch_gen__Cases_13, &ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23);
    backend_libs__switch_util__find_switch_category_4_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, &ml_backend__ml_switch_gen__SwitchCategory_24, &ml_backend__ml_switch_gen__MayUseSmartIndexing_25);
    switch (ml_backend__ml_switch_gen__MayUseSmartIndexing_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_29_61 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
          MR_Word ml_backend__ml_switch_gen__TypeInfo_30_62 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
          MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_50;
          MR_Word ml_backend__ml_switch_gen__CostTaggedCases_51;
          MR_Word ml_backend__ml_switch_gen__TaggedCases_52;

          mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_29_61, ml_backend__ml_switch_gen__TypeInfo_30_62, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[3], ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__CostTaggedCases0_50);
          mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_30_62, ml_backend__ml_switch_gen__CostTaggedCases0_50, &ml_backend__ml_switch_gen__CostTaggedCases_51);
          mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_29_61, ml_backend__ml_switch_gen__CostTaggedCases_51, &ml_backend__ml_switch_gen__TaggedCases_52);
          if ((ml_backend__ml_switch_gen__TaggedCases_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
              return;
            }
          }
          else
          {
            MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_52, (MR_Integer) 0)));
            MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_52, (MR_Integer) 1)));

            ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_53, ml_backend__ml_switch_gen__LaterTaggedCases_54, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
          }
          *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_switch_gen__Globals_26;

          hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, &ml_backend__ml_switch_gen__Globals_26);
          switch (ml_backend__ml_switch_gen__SwitchCategory_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_11_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__SwitchVarType_21, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__GoalInfo_16, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_29_84 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
                MR_Word ml_backend__ml_switch_gen__TypeInfo_30_85 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
                MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_73;
                MR_Word ml_backend__ml_switch_gen__CostTaggedCases_74;
                MR_Word ml_backend__ml_switch_gen__TaggedCases_75;

                mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_29_84, ml_backend__ml_switch_gen__TypeInfo_30_85, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[4], ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__CostTaggedCases0_73);
                mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_30_85, ml_backend__ml_switch_gen__CostTaggedCases0_73, &ml_backend__ml_switch_gen__CostTaggedCases_74);
                mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_29_84, ml_backend__ml_switch_gen__CostTaggedCases_74, &ml_backend__ml_switch_gen__TaggedCases_75);
                if ((ml_backend__ml_switch_gen__TaggedCases_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
                    return;
                  }
                }
                else
                {
                  MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_75, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_75, (MR_Integer) 1)));

                  ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_76, ml_backend__ml_switch_gen__LaterTaggedCases_77, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
                }
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__GoalInfo_16, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ml_backend__ml_switch_gen__NumConsIds_27;
                MR_Integer ml_backend__ml_switch_gen__NumArms_28;
                MR_Integer ml_backend__ml_switch_gen__TagSize_29;
                MR_Integer ml_backend__ml_switch_gen__Var_34;
                MR_Word ml_backend__ml_switch_gen__Var_35;

                backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__NumConsIds_27, &ml_backend__ml_switch_gen__NumArms_28);
                libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_26, (MR_Integer) 448, &ml_backend__ml_switch_gen__TagSize_29);
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_27 >= ml_backend__ml_switch_gen__TagSize_29);
                if (ml_backend__ml_switch_gen__succeeded)
                {
                  ml_backend__ml_switch_gen__Var_34 = (MR_Integer) 1;
                  ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_28 > ml_backend__ml_switch_gen__Var_34);
                  if (ml_backend__ml_switch_gen__succeeded)
                  {
                    ml_backend__ml_switch_gen__Var_35 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_26);
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__Var_35 == (MR_Integer) 1);
                  }
                }
                if (ml_backend__ml_switch_gen__succeeded)
                  ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
                else
                  ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

    ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(
  MR_Word ml_backend__ml_switch_gen__SwitchVar_11,
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
  MR_Word ml_backend__ml_switch_gen__TaggedCases_13,
  MR_Word ml_backend__ml_switch_gen__CodeModel_14,
  MR_Word ml_backend__ml_switch_gen__Context_15,
  MR_Word ml_backend__ml_switch_gen__GoalInfo_16,
  MR_Word * ml_backend__ml_switch_gen__Decls_17,
  MR_Word * ml_backend__ml_switch_gen__Stmts_18,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34)
{
  {
    MR_bool ml_backend__ml_switch_gen__succeeded;
    MR_Word ml_backend__ml_switch_gen__FilteredTaggedCases_20;
    MR_Word ml_backend__ml_switch_gen__FilteredCanFail_21;
    MR_Integer ml_backend__ml_switch_gen__NumConsIds_22;
    MR_Integer ml_backend__ml_switch_gen__NumArms_23;
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_24;
    MR_Word ml_backend__ml_switch_gen__Globals_25;

    backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__TaggedCases_13, &ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CanFail_12, &ml_backend__ml_switch_gen__FilteredCanFail_21);
    backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, &ml_backend__ml_switch_gen__NumConsIds_22, &ml_backend__ml_switch_gen__NumArms_23);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__ModuleInfo_24);
    hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_24, &ml_backend__ml_switch_gen__Globals_25);
    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_23 < (MR_Integer) 2);
    if (ml_backend__ml_switch_gen__succeeded)
    {
      MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_29_87 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
      MR_Word ml_backend__ml_switch_gen__TypeInfo_30_88 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
      MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_76;
      MR_Word ml_backend__ml_switch_gen__CostTaggedCases_77;
      MR_Word ml_backend__ml_switch_gen__TaggedCases_78;

      mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_29_87, ml_backend__ml_switch_gen__TypeInfo_30_88, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[2], ml_backend__ml_switch_gen__FilteredTaggedCases_20, &ml_backend__ml_switch_gen__CostTaggedCases0_76);
      mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_30_88, ml_backend__ml_switch_gen__CostTaggedCases0_76, &ml_backend__ml_switch_gen__CostTaggedCases_77);
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_29_87, ml_backend__ml_switch_gen__CostTaggedCases_77, &ml_backend__ml_switch_gen__TaggedCases_78);
      if ((ml_backend__ml_switch_gen__TaggedCases_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
          return;
        }
      }
      else
      {
        MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_78, (MR_Integer) 0)));
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_78, (MR_Integer) 1)));

        ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_79, ml_backend__ml_switch_gen__LaterTaggedCases_80, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
      }
      *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word ml_backend__ml_switch_gen__Var_37;

      ml_backend__ml_switch_gen__Var_37 = ml_backend__ml_target_util__globals_target_supports_string_switch_1_f_0(ml_backend__ml_switch_gen__Globals_25);
      ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__Var_37 == (MR_Integer) 1);
      if (ml_backend__ml_switch_gen__succeeded)
      {
        ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 327, (MR_Integer) 1);
        if (!(ml_backend__ml_switch_gen__succeeded))
        {
          MR_Word ml_backend__ml_switch_gen__Var_64;

          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__Var_64);
          ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 1 == ml_backend__ml_switch_gen__Var_64);
        }
      }
      if (ml_backend__ml_switch_gen__succeeded)
      {
        ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
        *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        {
          MR_Word ml_backend__ml_switch_gen__Var_65;

          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__Var_65);
          ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 1 == ml_backend__ml_switch_gen__Var_65);
        }
        if (!(ml_backend__ml_switch_gen__succeeded))
        {
          MR_Word ml_backend__ml_switch_gen__Var_42;
          MR_Word ml_backend__ml_switch_gen__Var_43;

          ml_backend__ml_switch_gen__Var_42 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(ml_backend__ml_switch_gen__Globals_25);
          ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__Var_42 == (MR_Integer) 0);
          if (ml_backend__ml_switch_gen__succeeded)
          {
            ml_backend__ml_switch_gen__Var_43 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_25);
            ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__Var_43 == (MR_Integer) 0);
          }
        }
        if (ml_backend__ml_switch_gen__succeeded)
        {
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
          *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Word ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26;
          MR_Word ml_backend__ml_switch_gen__SwitchVarLval_27;
          MR_Word ml_backend__ml_switch_gen__SwitchVarRval_28;
          MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46;
          MR_Integer ml_backend__ml_switch_gen__StringTrieSwitchSize_29;
          MR_Word ml_backend__ml_switch_gen__Var_48;
          MR_Word ml_backend__ml_switch_gen__Var_66;

          ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__GoalInfo_16, ml_backend__ml_switch_gen__CodeModel_14, &ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46);
          ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__SwitchVar_11, &ml_backend__ml_switch_gen__SwitchVarLval_27);
          {
            ml_backend__ml_switch_gen__SwitchVarRval_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__SwitchVarRval_28, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchVarLval_27));
          }
          libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 445, &ml_backend__ml_switch_gen__StringTrieSwitchSize_29);
          ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_22 >= ml_backend__ml_switch_gen__StringTrieSwitchSize_29);
          if (ml_backend__ml_switch_gen__succeeded)
          {
            ml_backend__ml_switch_gen__Var_48 = (MR_Integer) 0;
            libs__globals__get_target_2_p_0(ml_backend__ml_switch_gen__Globals_25, &ml_backend__ml_switch_gen__Var_66);
            ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__Var_48 == ml_backend__ml_switch_gen__Var_66);
          }
          if (ml_backend__ml_switch_gen__succeeded)
          {
            if ((ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ml_backend__ml_string_switch__ml_generate_string_trie_jump_switch_8_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
            else
            {
              MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

              ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__LookupSwitchInfo_30, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
            }
            *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MR_Integer ml_backend__ml_switch_gen__StringHashSwitchSize_31;

            libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 446, &ml_backend__ml_switch_gen__StringHashSwitchSize_31);
            ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_22 >= ml_backend__ml_switch_gen__StringHashSwitchSize_31);
            if (ml_backend__ml_switch_gen__succeeded)
              if ((ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ml_backend__ml_string_switch__ml_generate_string_hash_jump_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
              else
              {
                MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

                ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__LookupSwitchInfo_58, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
              }
            else
            {
              MR_Integer ml_backend__ml_switch_gen__StringBinarySwitchSize_32;

              libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 447, &ml_backend__ml_switch_gen__StringBinarySwitchSize_32);
              ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_22 >= ml_backend__ml_switch_gen__StringBinarySwitchSize_32);
              if (ml_backend__ml_switch_gen__succeeded)
                if ((ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                else
                {
                  MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

                  ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__LookupSwitchInfo_60, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                }
              else
              {
                ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Stmts_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
  MR_Word ml_backend__ml_switch_gen__Cases_9,
  MR_Word ml_backend__ml_switch_gen__Var_10,
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
  MR_Word ml_backend__ml_switch_gen__Context_13,
  MR_Word * ml_backend__ml_switch_gen__Stmts_14,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_25,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_26)
{
  {
    MR_bool ml_backend__ml_switch_gen__succeeded;
    MR_Word ml_backend__ml_switch_gen__Type_16;
    MR_Word ml_backend__ml_switch_gen__MLDS_Type_17;
    MR_Word ml_backend__ml_switch_gen__Lval_18;
    MR_Word ml_backend__ml_switch_gen__Rval_19;
    MR_Word ml_backend__ml_switch_gen__Range_20;
    MR_Word ml_backend__ml_switch_gen__MLDS_Cases_21;
    MR_Word ml_backend__ml_switch_gen__Default_22;
    MR_Word ml_backend__ml_switch_gen__SwitchStmt0_23;
    MR_Word ml_backend__ml_switch_gen__SwitchStmt_24;
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27_27;
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28;
    MR_Integer ml_backend__ml_switch_gen__MinRange_38;
    MR_Integer ml_backend__ml_switch_gen__MaxRange_39;
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_34;
    MR_Word ml_backend__ml_switch_gen__ExportedType_35;
    MR_Word ml_backend__ml_switch_gen__Type_36;
    MR_Word ml_backend__ml_switch_gen__TypeCategory_37;
    MR_Word ml_backend__ml_switch_gen__Var_41;
    MR_Integer ml_backend__ml_switch_gen___NumValuesInRange_40;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_switch_gen__Var_10, &ml_backend__ml_switch_gen__Type_16);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_switch_gen__Type_16, &ml_backend__ml_switch_gen__MLDS_Type_17);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_25, ml_backend__ml_switch_gen__Var_10, &ml_backend__ml_switch_gen__Lval_18);
    {
      ml_backend__ml_switch_gen__Rval_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Rval_19, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Lval_18));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_switch_gen__ModuleInfo_34);
    ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MLDS_Type_17)) == (MR_mktag((MR_Integer) 2)));
    if (ml_backend__ml_switch_gen__succeeded)
    {
      ml_backend__ml_switch_gen__Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 0)));
      ml_backend__ml_switch_gen__TypeCategory_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 1)));
      ml_backend__ml_switch_gen__ExportedType_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 2)));
      ml_backend__ml_switch_gen__Var_41 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_switch_gen__ModuleInfo_34, ml_backend__ml_switch_gen__Type_36);
      ml_backend__ml_switch_gen__succeeded = backend_libs__foreign____Unify____exported_type_0_0(ml_backend__ml_switch_gen__ExportedType_35, ml_backend__ml_switch_gen__Var_41);
      if (ml_backend__ml_switch_gen__succeeded)
        ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__type_range_6_p_0(ml_backend__ml_switch_gen__ModuleInfo_34, ml_backend__ml_switch_gen__TypeCategory_37, ml_backend__ml_switch_gen__Type_36, &ml_backend__ml_switch_gen__MinRange_38, &ml_backend__ml_switch_gen__MaxRange_39, &ml_backend__ml_switch_gen___NumValuesInRange_40);
    }
    if (ml_backend__ml_switch_gen__succeeded)
      {
        ml_backend__ml_switch_gen__Range_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_20, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MinRange_38));
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_20, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MaxRange_39));
      }
    else
      ml_backend__ml_switch_gen__Range_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0(ml_backend__ml_switch_gen__Type_16, ml_backend__ml_switch_gen__MLDS_Type_17, ml_backend__ml_switch_gen__Cases_9, ml_backend__ml_switch_gen__CodeModel_11, &ml_backend__ml_switch_gen__MLDS_Cases_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27_27);
    ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__CodeModel_11, ml_backend__ml_switch_gen__Context_13, &ml_backend__ml_switch_gen__Default_22, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27_27, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28);
    {
      ml_backend__ml_switch_gen__SwitchStmt0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_17));
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_19));
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Range_20));
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 4) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_21));
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 5) = ((MR_Box) (ml_backend__ml_switch_gen__Default_22));
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 6) = ((MR_Box) (ml_backend__ml_switch_gen__Context_13));
    }
    ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(ml_backend__ml_switch_gen__SwitchStmt0_23, &ml_backend__ml_switch_gen__SwitchStmt_24, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_26);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_switch_gen__Stmts_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchStmt_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_11_p_0(
  MR_Word ml_backend__ml_switch_gen__SwitchVar_12,
  MR_Word ml_backend__ml_switch_gen__SwitchVarType_13,
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
  MR_Word ml_backend__ml_switch_gen__TaggedCases_15,
  MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_16,
  MR_Word ml_backend__ml_switch_gen__CodeModel_17,
  MR_Word ml_backend__ml_switch_gen__Context_18,
  MR_Word ml_backend__ml_switch_gen__GoalInfo_19,
  MR_Word * ml_backend__ml_switch_gen__Stmts_20,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41)
{
  {
    MR_bool ml_backend__ml_switch_gen__succeeded;
    MR_Integer ml_backend__ml_switch_gen__NumConsIds_22;
    MR_Integer ml_backend__ml_switch_gen__NumArms_23;
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_24;
    MR_Word ml_backend__ml_switch_gen__Globals_25;
    MR_Word ml_backend__ml_switch_gen__NeedBitVecCheck_33;
    MR_Word ml_backend__ml_switch_gen__NeedRangeCheck_34;
    MR_Integer ml_backend__ml_switch_gen__FirstVal_35;
    MR_Integer ml_backend__ml_switch_gen__LastVal_36;
    MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_38;
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48_48;
    MR_Integer ml_backend__ml_switch_gen__LowerLimit_26;
    MR_Integer ml_backend__ml_switch_gen__UpperLimit_27;
    MR_Integer ml_backend__ml_switch_gen__NumValues_28;
    MR_Integer ml_backend__ml_switch_gen__LookupSize_29;
    MR_Integer ml_backend__ml_switch_gen__ReqDensity_30;
    MR_Word ml_backend__ml_switch_gen__FilteredTaggedCases_31;
    MR_Word ml_backend__ml_switch_gen__FilteredCanFail_32;
    MR_Word ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_37;
    MR_Word ml_backend__ml_switch_gen__Var_43;
    MR_Word ml_backend__ml_switch_gen__Var_44;
    MR_Word ml_backend__ml_switch_gen__Var_45;
    MR_Integer ml_backend__ml_switch_gen__Var_46;
    MR_Word ml_backend__ml_switch_gen__Var_47;
    MR_Word ml_backend__ml_switch_gen__Var_54;

    backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__TaggedCases_15, &ml_backend__ml_switch_gen__NumConsIds_22, &ml_backend__ml_switch_gen__NumArms_23);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_switch_gen__ModuleInfo_24);
    hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_24, &ml_backend__ml_switch_gen__Globals_25);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_switch_gen__Var_54);
    ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_switch_gen__Var_54);
    if (ml_backend__ml_switch_gen__succeeded)
    {
      ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MaybeIntSwitchInfo_16)) == (MR_mktag((MR_Integer) 1)));
      if (ml_backend__ml_switch_gen__succeeded)
      {
        ml_backend__ml_switch_gen__LowerLimit_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_16, (MR_Integer) 0)));
        ml_backend__ml_switch_gen__UpperLimit_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_16, (MR_Integer) 1)));
        ml_backend__ml_switch_gen__NumValues_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_16, (MR_Integer) 2)));
        ml_backend__ml_switch_gen__Var_43 = (MR_Integer) 457;
        ml_backend__ml_switch_gen__Var_44 = (MR_Integer) 1;
        ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_25, ml_backend__ml_switch_gen__Var_43, ml_backend__ml_switch_gen__Var_44);
        if (ml_backend__ml_switch_gen__succeeded)
        {
          ml_backend__ml_switch_gen__Var_45 = (MR_Integer) 444;
          libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, ml_backend__ml_switch_gen__Var_45, &ml_backend__ml_switch_gen__LookupSize_29);
          ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_22 >= ml_backend__ml_switch_gen__LookupSize_29);
          if (ml_backend__ml_switch_gen__succeeded)
          {
            ml_backend__ml_switch_gen__Var_46 = (MR_Integer) 1;
            ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_23 > ml_backend__ml_switch_gen__Var_46);
            if (ml_backend__ml_switch_gen__succeeded)
            {
              ml_backend__ml_switch_gen__Var_47 = (MR_Integer) 442;
              libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, ml_backend__ml_switch_gen__Var_47, &ml_backend__ml_switch_gen__ReqDensity_30);
              backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ml_backend__ml_switch_gen__CodeModel_17, ml_backend__ml_switch_gen__TaggedCases_15, &ml_backend__ml_switch_gen__FilteredTaggedCases_31, ml_backend__ml_switch_gen__CanFail_14, &ml_backend__ml_switch_gen__FilteredCanFail_32);
              ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ml_backend__ml_switch_gen__ModuleInfo_24, ml_backend__ml_switch_gen__SwitchVarType_13, ml_backend__ml_switch_gen__FilteredCanFail_32, ml_backend__ml_switch_gen__LowerLimit_26, ml_backend__ml_switch_gen__UpperLimit_27, ml_backend__ml_switch_gen__NumValues_28, ml_backend__ml_switch_gen__ReqDensity_30, &ml_backend__ml_switch_gen__NeedBitVecCheck_33, &ml_backend__ml_switch_gen__NeedRangeCheck_34, &ml_backend__ml_switch_gen__FirstVal_35, &ml_backend__ml_switch_gen__LastVal_36);
              if (ml_backend__ml_switch_gen__succeeded)
              {
                ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(ml_backend__ml_switch_gen__SwitchVar_12, ml_backend__ml_switch_gen__FilteredTaggedCases_31, ml_backend__ml_switch_gen__GoalInfo_19, ml_backend__ml_switch_gen__CodeModel_17, &ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_37, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48_48);
                ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_37)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_switch_gen__succeeded)
                  ml_backend__ml_switch_gen__LookupSwitchInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_37, (MR_Integer) 0)));
              }
            }
          }
        }
      }
    }
    if (ml_backend__ml_switch_gen__succeeded)
    {
      MR_Word ml_backend__ml_switch_gen__LookupStmt_39;

      ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0(ml_backend__ml_switch_gen__SwitchVar_12, ml_backend__ml_switch_gen__TaggedCases_15, ml_backend__ml_switch_gen__LookupSwitchInfo_38, ml_backend__ml_switch_gen__CodeModel_17, ml_backend__ml_switch_gen__Context_18, ml_backend__ml_switch_gen__FirstVal_35, ml_backend__ml_switch_gen__LastVal_36, ml_backend__ml_switch_gen__NeedBitVecCheck_33, ml_backend__ml_switch_gen__NeedRangeCheck_34, &ml_backend__ml_switch_gen__LookupStmt_39, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48_48, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_switch_gen__Stmts_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__LookupStmt_39));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word ml_backend__ml_switch_gen__Var_51;

      ml_backend__ml_switch_gen__Var_51 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_25);
      ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__Var_51 == (MR_Integer) 1);
      if (ml_backend__ml_switch_gen__succeeded)
      {
        MR_Word ml_backend__ml_switch_gen__Type_64;
        MR_Word ml_backend__ml_switch_gen__MLDS_Type_65;
        MR_Word ml_backend__ml_switch_gen__Lval_66;
        MR_Word ml_backend__ml_switch_gen__Rval_67;
        MR_Word ml_backend__ml_switch_gen__Range_68;
        MR_Word ml_backend__ml_switch_gen__MLDS_Cases_69;
        MR_Word ml_backend__ml_switch_gen__Default_70;
        MR_Word ml_backend__ml_switch_gen__SwitchStmt0_71;
        MR_Word ml_backend__ml_switch_gen__SwitchStmt_72;
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27_73;
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_74;
        MR_Integer ml_backend__ml_switch_gen__MinRange_84;
        MR_Integer ml_backend__ml_switch_gen__MaxRange_85;
        MR_Word ml_backend__ml_switch_gen__ModuleInfo_80;
        MR_Word ml_backend__ml_switch_gen__ExportedType_81;
        MR_Word ml_backend__ml_switch_gen__Type_82;
        MR_Word ml_backend__ml_switch_gen__TypeCategory_83;
        MR_Word ml_backend__ml_switch_gen__Var_87;
        MR_Integer ml_backend__ml_switch_gen___NumValuesInRange_86;

        ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_switch_gen__SwitchVar_12, &ml_backend__ml_switch_gen__Type_64);
        ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_switch_gen__Type_64, &ml_backend__ml_switch_gen__MLDS_Type_65);
        ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_switch_gen__SwitchVar_12, &ml_backend__ml_switch_gen__Lval_66);
        {
          ml_backend__ml_switch_gen__Rval_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Rval_67, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Lval_66));
        }
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_switch_gen__ModuleInfo_80);
        ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MLDS_Type_65)) == (MR_mktag((MR_Integer) 2)));
        if (ml_backend__ml_switch_gen__succeeded)
        {
          ml_backend__ml_switch_gen__Type_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_65, (MR_Integer) 0)));
          ml_backend__ml_switch_gen__TypeCategory_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_65, (MR_Integer) 1)));
          ml_backend__ml_switch_gen__ExportedType_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_65, (MR_Integer) 2)));
          ml_backend__ml_switch_gen__Var_87 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_switch_gen__ModuleInfo_80, ml_backend__ml_switch_gen__Type_82);
          ml_backend__ml_switch_gen__succeeded = backend_libs__foreign____Unify____exported_type_0_0(ml_backend__ml_switch_gen__ExportedType_81, ml_backend__ml_switch_gen__Var_87);
          if (ml_backend__ml_switch_gen__succeeded)
            ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__type_range_6_p_0(ml_backend__ml_switch_gen__ModuleInfo_80, ml_backend__ml_switch_gen__TypeCategory_83, ml_backend__ml_switch_gen__Type_82, &ml_backend__ml_switch_gen__MinRange_84, &ml_backend__ml_switch_gen__MaxRange_85, &ml_backend__ml_switch_gen___NumValuesInRange_86);
        }
        if (ml_backend__ml_switch_gen__succeeded)
          {
            ml_backend__ml_switch_gen__Range_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_68, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MinRange_84));
            MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_68, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MaxRange_85));
          }
        else
          ml_backend__ml_switch_gen__Range_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0(ml_backend__ml_switch_gen__Type_64, ml_backend__ml_switch_gen__MLDS_Type_65, ml_backend__ml_switch_gen__TaggedCases_15, ml_backend__ml_switch_gen__CodeModel_17, &ml_backend__ml_switch_gen__MLDS_Cases_69, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27_73);
        ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_switch_gen__CanFail_14, ml_backend__ml_switch_gen__CodeModel_17, ml_backend__ml_switch_gen__Context_18, &ml_backend__ml_switch_gen__Default_70, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27_73, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_74);
        {
          ml_backend__ml_switch_gen__SwitchStmt0_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_71, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_65));
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_71, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_67));
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_71, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Range_68));
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_71, 4) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_69));
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_71, 5) = ((MR_Box) (ml_backend__ml_switch_gen__Default_70));
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_71, 6) = ((MR_Box) (ml_backend__ml_switch_gen__Context_18));
        }
        ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(ml_backend__ml_switch_gen__SwitchStmt0_71, &ml_backend__ml_switch_gen__SwitchStmt_72, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_74, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_switch_gen__Stmts_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchStmt_72));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
        ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_15, ml_backend__ml_switch_gen__SwitchVar_12, ml_backend__ml_switch_gen__CodeModel_17, ml_backend__ml_switch_gen__CanFail_14, ml_backend__ml_switch_gen__Context_18, ml_backend__ml_switch_gen__Stmts_20, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41);
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
    MR_Word ml_backend__ml_switch_gen__conv0_MatchCond_8;

    ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_MatchCond_8);
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_MatchCond_8));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0(
  MR_Word ml_backend__ml_switch_gen__MerType_1,
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_2,
  MR_Word ml_backend__ml_switch_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_switch_gen__CodeModel_4,
  MR_Word * ml_backend__ml_switch_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_7)
{
  if ((ml_backend__ml_switch_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ml_backend__ml_switch_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_switch_gen__STATE_VARIABLE_Info_7 = ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word ml_backend__ml_switch_gen__TaggedCase_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_switch_gen__TaggedCases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_switch_gen__MLDS_Case_19;
    MR_Word ml_backend__ml_switch_gen__MLDS_Cases_20;
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_24_24;
    MR_Word ml_backend__ml_switch_gen__TaggedMainConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_16, (MR_Integer) 0)));
    MR_Word ml_backend__ml_switch_gen__TaggedOtherConsIds_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_16, (MR_Integer) 1)));
    MR_Word ml_backend__ml_switch_gen__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_16, (MR_Integer) 3)));
    MR_Word ml_backend__ml_switch_gen__MainCond_38;
    MR_Word ml_backend__ml_switch_gen__OtherConds_39;
    MR_Word ml_backend__ml_switch_gen__Stmt_40;
    MR_Word ml_backend__ml_switch_gen__Var_41;
    MR_Word ml_backend__ml_switch_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_16, (MR_Integer) 2)));

    ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(ml_backend__ml_switch_gen__MerType_1, ml_backend__ml_switch_gen__MLDS_Type_2, ml_backend__ml_switch_gen__TaggedMainConsId_34, &ml_backend__ml_switch_gen__MainCond_38);
    {
      ml_backend__ml_switch_gen__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_41, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_41, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_41, 3) = ((MR_Box) (ml_backend__ml_switch_gen__MerType_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_41, 4) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_2));
    }
    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, ml_backend__ml_switch_gen__Var_41, ml_backend__ml_switch_gen__TaggedOtherConsIds_35, &ml_backend__ml_switch_gen__OtherConds_39);
    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_4, ml_backend__ml_switch_gen__Goal_37, &ml_backend__ml_switch_gen__Stmt_40, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_24_24);
    {
      ml_backend__ml_switch_gen__MLDS_Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_19, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MainCond_38));
      MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_19, 1) = ((MR_Box) (ml_backend__ml_switch_gen__OtherConds_39));
      MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_19, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Stmt_40));
    }
    ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_7_p_0(ml_backend__ml_switch_gen__MerType_1, ml_backend__ml_switch_gen__MLDS_Type_2, ml_backend__ml_switch_gen__TaggedCases_17, ml_backend__ml_switch_gen__CodeModel_4, &ml_backend__ml_switch_gen__MLDS_Cases_20, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_24_24, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_switch_gen__HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Case_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_20));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(
  MR_Word ml_backend__ml_switch_gen__MerType_5,
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_6,
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_7,
  MR_Word * ml_backend__ml_switch_gen__MatchCond_8)
{
  {
    MR_Word ml_backend__ml_switch_gen__Tag_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_switch_gen__Rval_12;
    MR_Word ml_backend__ml_switch_gen___ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_7, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) ml_backend__ml_switch_gen__Tag_10)) {
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
          MR_String ml_backend__ml_switch_gen__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Tag_10, (MR_Integer) 0)));
          MR_Word ml_backend__ml_switch_gen__Var_48;

          {
            ml_backend__ml_switch_gen__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Var_48, 1) = ((MR_Box) (ml_backend__ml_switch_gen__String_13));
          }
          {
            ml_backend__ml_switch_gen__Rval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_12, 1) = ((MR_Box) (ml_backend__ml_switch_gen__Var_48));
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_switch_gen__IntTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_10, (MR_Integer) 1)));

              ml_backend__ml_switch_gen__Rval_12 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(ml_backend__ml_switch_gen__IntTag_11, ml_backend__ml_switch_gen__MerType_5, ml_backend__ml_switch_gen__MLDS_Type_6);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_switch_gen__ForeignLang_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_10, (MR_Integer) 1)));
              MR_String ml_backend__ml_switch_gen__ForeignTag_15 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_10, (MR_Integer) 2)));
              MR_Word ml_backend__ml_switch_gen__Var_47;

              {
                ml_backend__ml_switch_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Var_47, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ForeignLang_14));
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Var_47, 2) = ((MR_Box) (ml_backend__ml_switch_gen__ForeignTag_15));
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Var_47, 3) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_6));
              }
              {
                ml_backend__ml_switch_gen__Rval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_12, 1) = ((MR_Box) (ml_backend__ml_switch_gen__Var_47));
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
      *ml_backend__ml_switch_gen__MatchCond_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

    ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
  MR_Word ml_backend__ml_switch_gen__TaggedCases0_9,
  MR_Word ml_backend__ml_switch_gen__Var_10,
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
  MR_Word ml_backend__ml_switch_gen__Context_13,
  MR_Word * ml_backend__ml_switch_gen__Stmts_14,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22)
{
  {
    MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
    MR_Word ml_backend__ml_switch_gen__TypeInfo_30_30 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
    MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_16;
    MR_Word ml_backend__ml_switch_gen__CostTaggedCases_17;
    MR_Word ml_backend__ml_switch_gen__TaggedCases_18;

    mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_29_29, ml_backend__ml_switch_gen__TypeInfo_30_30, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[1], ml_backend__ml_switch_gen__TaggedCases0_9, &ml_backend__ml_switch_gen__CostTaggedCases0_16);
    mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_30_30, ml_backend__ml_switch_gen__CostTaggedCases0_16, &ml_backend__ml_switch_gen__CostTaggedCases_17);
    mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_29_29, ml_backend__ml_switch_gen__CostTaggedCases_17, &ml_backend__ml_switch_gen__TaggedCases_18);
    if ((ml_backend__ml_switch_gen__TaggedCases_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
        return;
      }
    }
    else
    {
      MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_18, (MR_Integer) 0)));
      MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_18, (MR_Integer) 1)));

      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_19, ml_backend__ml_switch_gen__LaterTaggedCases_20, ml_backend__ml_switch_gen__Var_10, ml_backend__ml_switch_gen__CodeModel_11, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_13, ml_backend__ml_switch_gen__Stmts_14, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22);
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
    MR_Word ml_backend__ml_switch_gen__conv4_HeadVar__3_3;
    MR_Word ml_backend__ml_switch_gen__conv3_HeadVar__5_5;

    ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv4_HeadVar__3_3, ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_3), &ml_backend__ml_switch_gen__conv3_HeadVar__5_5);
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv4_HeadVar__3_3));
    *ml_backend__ml_switch_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_switch_gen__conv3_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
  MR_Box ml_backend__ml_switch_gen__closure_arg,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
    MR_Word ml_backend__ml_switch_gen__conv1_HeadVar__3_3;
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__5_5;

    ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv1_HeadVar__3_3, ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_3), &ml_backend__ml_switch_gen__conv0_HeadVar__5_5);
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv1_HeadVar__3_3));
    *ml_backend__ml_switch_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
  MR_Word ml_backend__ml_switch_gen__TaggedCase_10,
  MR_Word ml_backend__ml_switch_gen__TaggedCases_11,
  MR_Word ml_backend__ml_switch_gen__Var_12,
  MR_Word ml_backend__ml_switch_gen__CodeModel_13,
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
  MR_Word ml_backend__ml_switch_gen__Context_15,
  MR_Word * ml_backend__ml_switch_gen__HeadVar__7_7,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31)
{
  {
    MR_Word ml_backend__ml_switch_gen__Stmt_16;
    MR_Word ml_backend__ml_switch_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_switch_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_switch_gen__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 3)));
    MR_Word ml_backend__ml_switch_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 2)));

    if ((ml_backend__ml_switch_gen__TaggedCases_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (ml_backend__ml_switch_gen__CanFail_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_switch_gen__Cond_22;
            MR_Word ml_backend__ml_switch_gen__GoalBlock_23;
            MR_Word ml_backend__ml_switch_gen__FailStmts_24;
            MR_Word ml_backend__ml_switch_gen__FailBlock_25;
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_39_39;
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40;
            MR_Word ml_backend__ml_switch_gen__Var_44;
            MR_Word ml_backend__ml_switch_gen__MainTagTestRval_58;
            MR_Word ml_backend__ml_switch_gen__OtherTagTestRval_59;
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_60;
            MR_Word ml_backend__ml_switch_gen__Var_61;
            MR_Box ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_39_39;

            ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__Var_18, &ml_backend__ml_switch_gen__MainTagTestRval_58, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_60);
            {
              ml_backend__ml_switch_gen__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_61, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_61, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_61, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Var_12));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_switch_gen__Var_61, ml_backend__ml_switch_gen__Var_19, &ml_backend__ml_switch_gen__OtherTagTestRval_59, ((MR_Box) (ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_60)), &ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_39_39);
            ml_backend__ml_switch_gen__STATE_VARIABLE_Info_39_39 = ((MR_Word) ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_39_39);
            ml_backend__ml_switch_gen__chain_ors_3_p_0(ml_backend__ml_switch_gen__MainTagTestRval_58, ml_backend__ml_switch_gen__OtherTagTestRval_59, &ml_backend__ml_switch_gen__Cond_22);
            ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__GoalBlock_23, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_39_39, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40);
            ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Context_15, &ml_backend__ml_switch_gen__FailStmts_24, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
            ml_backend__ml_switch_gen__FailBlock_25 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__FailStmts_24, ml_backend__ml_switch_gen__Context_15);
            {
              ml_backend__ml_switch_gen__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Var_44, 0) = ((MR_Box) (ml_backend__ml_switch_gen__FailBlock_25));
            }
            {
              ml_backend__ml_switch_gen__Stmt_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cond_22));
              MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__GoalBlock_23));
              MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_16, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Var_44));
              MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_16, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Context_15));
            }
          }
          break;
        case (MR_Integer) 1:
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__Stmt_16, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
          break;
      }
    else
    {
      MR_Word ml_backend__ml_switch_gen__LaterTaggedCase_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_11, (MR_Integer) 0)));
      MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_11, (MR_Integer) 1)));
      MR_Word ml_backend__ml_switch_gen__LaterStmts_28;
      MR_Word ml_backend__ml_switch_gen__LaterBlock_29;
      MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_33_33;
      MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34;
      MR_Word ml_backend__ml_switch_gen__Var_38;
      MR_Word ml_backend__ml_switch_gen__Cond_46;
      MR_Word ml_backend__ml_switch_gen__GoalBlock_47;
      MR_Word ml_backend__ml_switch_gen__MainTagTestRval_80;
      MR_Word ml_backend__ml_switch_gen__OtherTagTestRval_81;
      MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_82;
      MR_Word ml_backend__ml_switch_gen__Var_83;
      MR_Box ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_33_33;

      ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__Var_18, &ml_backend__ml_switch_gen__MainTagTestRval_80, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_82);
      {
        ml_backend__ml_switch_gen__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_83, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_83, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2));
        MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Var_83, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Var_12));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_switch_gen__Var_83, ml_backend__ml_switch_gen__Var_19, &ml_backend__ml_switch_gen__OtherTagTestRval_81, ((MR_Box) (ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_82)), &ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_33_33);
      ml_backend__ml_switch_gen__STATE_VARIABLE_Info_33_33 = ((MR_Word) ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_33_33);
      ml_backend__ml_switch_gen__chain_ors_3_p_0(ml_backend__ml_switch_gen__MainTagTestRval_80, ml_backend__ml_switch_gen__OtherTagTestRval_81, &ml_backend__ml_switch_gen__Cond_46);
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__GoalBlock_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_33_33, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34);
      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__LaterTaggedCase_26, ml_backend__ml_switch_gen__LaterTaggedCases_27, ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__CanFail_14, ml_backend__ml_switch_gen__Context_15, &ml_backend__ml_switch_gen__LaterStmts_28, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
      ml_backend__ml_switch_gen__LaterBlock_29 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__LaterStmts_28, ml_backend__ml_switch_gen__Context_15);
      {
        ml_backend__ml_switch_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Var_38, 0) = ((MR_Box) (ml_backend__ml_switch_gen__LaterBlock_29));
      }
      {
        ml_backend__ml_switch_gen__Stmt_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cond_46));
        MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__GoalBlock_47));
        MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_16, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Var_38));
        MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_16, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Context_15));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_switch_gen__HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Stmt_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
  MR_Word ml_backend__ml_switch_gen__FirstExpr_4,
  MR_Word ml_backend__ml_switch_gen__LaterExprs_5,
  MR_Word * ml_backend__ml_switch_gen__Expr_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((ml_backend__ml_switch_gen__LaterExprs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_switch_gen__Expr_6 = ml_backend__ml_switch_gen__FirstExpr_4;
    else
    {
      MR_Word ml_backend__ml_switch_gen__SecondExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__LaterExprs_5, (MR_Integer) 0)));
      MR_Word ml_backend__ml_switch_gen__OtherExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__LaterExprs_5, (MR_Integer) 1)));
      MR_Word ml_backend__ml_switch_gen__FirstSecondExpr_9;

      {
        ml_backend__ml_switch_gen__FirstSecondExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 2) = ((MR_Box) (ml_backend__ml_switch_gen__FirstExpr_4));
        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 3) = ((MR_Box) (ml_backend__ml_switch_gen__SecondExpr_7));
      }
      /* direct tailcall eliminated */
      {
        MR_Word ml_backend__ml_switch_gen__next_value_of_FirstExpr_4 = ml_backend__ml_switch_gen__FirstSecondExpr_9;
        MR_Word ml_backend__ml_switch_gen__next_value_of_LaterExprs_5 = ml_backend__ml_switch_gen__OtherExprs_8;

        ml_backend__ml_switch_gen__FirstExpr_4 = ml_backend__ml_switch_gen__next_value_of_FirstExpr_4;
        ml_backend__ml_switch_gen__LaterExprs_5 = ml_backend__ml_switch_gen__next_value_of_LaterExprs_5;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(
  MR_Word ml_backend__ml_switch_gen__CanFail_7,
  MR_Word ml_backend__ml_switch_gen__CodeModel_8,
  MR_Word ml_backend__ml_switch_gen__Context_9,
  MR_Word * ml_backend__ml_switch_gen__Default_10,
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14,
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15)
{
  {
    MR_bool ml_backend__ml_switch_gen__succeeded;

    switch (ml_backend__ml_switch_gen__CanFail_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_switch_gen__FailStmts_12;

          ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_switch_gen__CodeModel_8, ml_backend__ml_switch_gen__Context_9, &ml_backend__ml_switch_gen__FailStmts_12, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15);
          ml_backend__ml_switch_gen__succeeded = mercury__list__is_empty_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_switch_gen__FailStmts_12);
          if (ml_backend__ml_switch_gen__succeeded)
            *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          else
          {
            MR_Word ml_backend__ml_switch_gen__Fail_13;

            ml_backend__ml_switch_gen__Fail_13 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__FailStmts_12, ml_backend__ml_switch_gen__Context_9);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_switch_gen__Default_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Fail_13));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15 = ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14;
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

/* :- end_module ml_backend.ml_switch_gen. */
