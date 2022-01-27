/*
** Automatically generated from `ml_switch_gen.m'
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




#line 161 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0;

#line 164 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 589 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(
#line 589 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_4,
#line 589 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_5,
#line 589 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__MatchCond_6);

#line 584 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1(
#line 584 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 584 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 584 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 564 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(
#line 564 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_1,
#line 564 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__HeadVar__2_2,
#line 564 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_3,
#line 564 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__4_4,
#line 564 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5,
#line 564 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6);

#line 529 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_9,
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 529 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26,
#line 529 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27);

#line 510 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
#line 510 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__FirstExpr_4,
#line 510 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__LaterExprs_5,
#line 510 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Expr_6);

#line 502 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 502 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 502 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4);

#line 502 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 502 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 502 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4);

#line 437 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_10,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_11,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_12,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_13,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 437 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__7_7,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31,
#line 437 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);

#line 421 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 421 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 414 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases0_9,
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 414 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21,
#line 414 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22);

#line 402 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
#line 402 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_4,
#line 402 "ml_switch_gen.m"
  MR_Integer ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9,
#line 402 "ml_switch_gen.m"
  MR_Integer * ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10);

#line 399 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
#line 399 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 399 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 399 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_2,
#line 399 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_3);

#line 392 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
#line 392 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_3,
#line 392 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__2_2);

#line 421 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0_1(
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 421 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 265 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_11,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_13,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_14,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_16,
#line 265 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_17,
#line 265 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_18,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33,
#line 265 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);

#line 218 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_12_p_0(
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_13,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVarType_14,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_15,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_16,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_18,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_19,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_20,
#line 218 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_21,
#line 218 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_22,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42,
#line 218 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_43);

#line 421 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 421 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 421 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 421 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);


static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_1[6][3];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_2[1][5];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_3[2][6];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_4[1][8];




static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_4[1][8] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 531 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0
  }
};

#line 540 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 589 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(
#line 589 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_4,
#line 589 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_5,
#line 589 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__MatchCond_6)
#line 589 "ml_switch_gen.m"
{
#line 592 "ml_switch_gen.m"
  {
#line 592 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 592 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_5, (MR_Integer) 0)));
#line 592 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Tag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_5, (MR_Integer) 1)));
#line 592 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Rval_11;

#line 603 "ml_switch_gen.m"
#line 603 "ml_switch_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_switch_gen__Tag_8)) {
#line 603 "ml_switch_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 603 "ml_switch_gen.m"
      case (MR_Integer) 0:
#line 628 "ml_switch_gen.m"
        {
#line 629 "ml_switch_gen.m"
          {
#line 629 "ml_switch_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/3", (MR_String) "invalid tag type");
#line 629 "ml_switch_gen.m"
            return;
          }
#line 628 "ml_switch_gen.m"
        }
#line 603 "ml_switch_gen.m"
        break;
#line 603 "ml_switch_gen.m"
      case (MR_Integer) 1:
#line 604 "ml_switch_gen.m"
        {
#line 604 "ml_switch_gen.m"
          MR_String ml_backend__ml_switch_gen__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 0)));
#line 604 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_49_49;

#line 605 "ml_switch_gen.m"
          {
#line 605 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 605 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_switch_gen__String_13));
#line 605 "ml_switch_gen.m"
          }
#line 605 "ml_switch_gen.m"
          {
#line 605 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 605 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_49_49));
#line 605 "ml_switch_gen.m"
          }
#line 604 "ml_switch_gen.m"
        }
#line 603 "ml_switch_gen.m"
        break;
#line 603 "ml_switch_gen.m"
      case (MR_Integer) 2:
#line 628 "ml_switch_gen.m"
        {
#line 629 "ml_switch_gen.m"
          {
#line 629 "ml_switch_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/3", (MR_String) "invalid tag type");
#line 629 "ml_switch_gen.m"
            return;
          }
#line 628 "ml_switch_gen.m"
        }
#line 603 "ml_switch_gen.m"
        break;
#line 603 "ml_switch_gen.m"
      case (MR_Integer) 3:
#line 603 "ml_switch_gen.m"
#line 603 "ml_switch_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 0)))) {
#line 603 "ml_switch_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 0:
#line 595 "ml_switch_gen.m"
            {
#line 595 "ml_switch_gen.m"
              MR_Integer ml_backend__ml_switch_gen__Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 1)));
#line 596 "ml_switch_gen.m"
              MR_Integer ml_backend__ml_switch_gen__V_10_10;

#line 596 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_switch_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 596 "ml_switch_gen.m"
              if (ml_backend__ml_switch_gen__succeeded)
#line 596 "ml_switch_gen.m"
                {
#line 596 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 1)));
#line 597 "ml_switch_gen.m"
                  {
#line 597 "ml_switch_gen.m"
                    MR_Word ml_backend__ml_switch_gen__V_50_50;

#line 597 "ml_switch_gen.m"
                    {
#line 597 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 597 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__V_50_50, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 597 "ml_switch_gen.m"
                    }
#line 597 "ml_switch_gen.m"
                    {
#line 597 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 597 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_50_50));
#line 597 "ml_switch_gen.m"
                    }
#line 597 "ml_switch_gen.m"
                  }
#line 596 "ml_switch_gen.m"
                }
#line 596 "ml_switch_gen.m"
              else
#line 598 "ml_switch_gen.m"
                {
#line 598 "ml_switch_gen.m"
                  MR_Char ml_backend__ml_switch_gen__V_12_12;

#line 598 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_switch_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 598 "ml_switch_gen.m"
                  if (ml_backend__ml_switch_gen__succeeded)
#line 598 "ml_switch_gen.m"
                    {
#line 598 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__V_12_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 1)));
#line 599 "ml_switch_gen.m"
                      {
#line 599 "ml_switch_gen.m"
                        MR_Word ml_backend__ml_switch_gen__V_51_51;

#line 599 "ml_switch_gen.m"
                        {
#line 599 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "ml_switch_gen.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 599 "ml_switch_gen.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_51_51, 1) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 599 "ml_switch_gen.m"
                        }
#line 599 "ml_switch_gen.m"
                        {
#line 599 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "ml_switch_gen.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 599 "ml_switch_gen.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_51_51));
#line 599 "ml_switch_gen.m"
                        }
#line 599 "ml_switch_gen.m"
                      }
#line 598 "ml_switch_gen.m"
                    }
#line 598 "ml_switch_gen.m"
                  else
#line 601 "ml_switch_gen.m"
                    {
#line 601 "ml_switch_gen.m"
                      MR_Word ml_backend__ml_switch_gen__V_52_52;

#line 601 "ml_switch_gen.m"
                      {
#line 601 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 601 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 601 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 1) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 601 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 2) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_4));
#line 601 "ml_switch_gen.m"
                      }
#line 601 "ml_switch_gen.m"
                      {
#line 601 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 601 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_52_52));
#line 601 "ml_switch_gen.m"
                      }
#line 601 "ml_switch_gen.m"
                    }
#line 598 "ml_switch_gen.m"
                }
#line 595 "ml_switch_gen.m"
            }
#line 603 "ml_switch_gen.m"
            break;
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 1:
#line 607 "ml_switch_gen.m"
            {
#line 607 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__ForeignLang_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 1)));
#line 607 "ml_switch_gen.m"
              MR_String ml_backend__ml_switch_gen__ForeignTag_15 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 2)));
#line 607 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__V_48_48;

#line 608 "ml_switch_gen.m"
              {
#line 608 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 608 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 608 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ForeignLang_14));
#line 608 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 2) = ((MR_Box) (ml_backend__ml_switch_gen__ForeignTag_15));
#line 608 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 3) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_4));
#line 608 "ml_switch_gen.m"
              }
#line 608 "ml_switch_gen.m"
              {
#line 608 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 608 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_48_48));
#line 608 "ml_switch_gen.m"
              }
#line 607 "ml_switch_gen.m"
            }
#line 603 "ml_switch_gen.m"
            break;
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 2:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 3:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 4:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 5:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 6:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 7:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 8:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 9:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 10:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 11:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 12:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 13:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 14:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 15:
#line 603 "ml_switch_gen.m"
          case (MR_Integer) 16:
#line 628 "ml_switch_gen.m"
            {
#line 629 "ml_switch_gen.m"
              {
#line 629 "ml_switch_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/3", (MR_String) "invalid tag type");
#line 629 "ml_switch_gen.m"
                return;
              }
#line 628 "ml_switch_gen.m"
            }
#line 603 "ml_switch_gen.m"
            break;
#line 603 "ml_switch_gen.m"
        }
#line 603 "ml_switch_gen.m"
        break;
#line 603 "ml_switch_gen.m"
    }
#line 631 "ml_switch_gen.m"
    {
#line 631 "ml_switch_gen.m"
      MR_Word base;
#line 631 "ml_switch_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 631 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__MatchCond_6 = base;
#line 631 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_11));
#line 631 "ml_switch_gen.m"
    }
#line 592 "ml_switch_gen.m"
  }
#line 589 "ml_switch_gen.m"
}

#line 584 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1(
#line 584 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 584 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 584 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 584 "ml_switch_gen.m"
{
#line 584 "ml_switch_gen.m"
  {
#line 584 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 584 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_MatchCond_6;

#line 584 "ml_switch_gen.m"
    {
#line 584 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_MatchCond_6);
    }
#line 584 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_MatchCond_6));
#line 584 "ml_switch_gen.m"
  }
#line 584 "ml_switch_gen.m"
}

#line 564 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(
#line 564 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_1,
#line 564 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__HeadVar__2_2,
#line 564 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_3,
#line 564 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__4_4,
#line 564 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5,
#line 564 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6)
#line 564 "ml_switch_gen.m"
{
#line 568 "ml_switch_gen.m"
  {
#line 568 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;

#line 568 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "ml_switch_gen.m"
      {
#line 568 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 568 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6 = ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5;
#line 568 "ml_switch_gen.m"
      }
#line 568 "ml_switch_gen.m"
    else
#line 570 "ml_switch_gen.m"
      {
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedCase_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedCases_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MLDS_Case_16;
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MLDS_Cases_17;
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21;
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedMainConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 0)));
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedOtherConsIds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 1)));
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Goal_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 3)));
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MainCond_34;
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__OtherConds_35;
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Statement_36;
#line 570 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_37_37;
#line 582 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 2)));

#line 583 "ml_switch_gen.m"
        {
#line 583 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(ml_backend__ml_switch_gen__MLDS_Type_1, ml_backend__ml_switch_gen__TaggedMainConsId_30, &ml_backend__ml_switch_gen__MainCond_34);
        }
#line 584 "ml_switch_gen.m"
        {
#line 584 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 584 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[1]));
#line 584 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1));
#line 584 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 584 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 3) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_1));
#line 584 "ml_switch_gen.m"
        }
#line 584 "ml_switch_gen.m"
        {
#line 584 "ml_switch_gen.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, ml_backend__ml_switch_gen__V_37_37, ml_backend__ml_switch_gen__TaggedOtherConsIds_31, &ml_backend__ml_switch_gen__OtherConds_35);
        }
#line 586 "ml_switch_gen.m"
        {
#line 586 "ml_switch_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_3, ml_backend__ml_switch_gen__Goal_33, &ml_backend__ml_switch_gen__Statement_36, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21);
        }
#line 587 "ml_switch_gen.m"
        {
#line 587 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__MLDS_Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 587 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MainCond_34));
#line 587 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__OtherConds_35));
#line 587 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Statement_36));
#line 587 "ml_switch_gen.m"
        }
#line 573 "ml_switch_gen.m"
        {
#line 573 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(ml_backend__ml_switch_gen__MLDS_Type_1, ml_backend__ml_switch_gen__TaggedCases_14, ml_backend__ml_switch_gen__CodeModel_3, &ml_backend__ml_switch_gen__MLDS_Cases_17, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6);
        }
#line 570 "ml_switch_gen.m"
        {
#line 570 "ml_switch_gen.m"
          MR_Word base;
#line 570 "ml_switch_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__HeadVar__4_4 = base;
#line 570 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Case_16));
#line 570 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_17));
#line 570 "ml_switch_gen.m"
        }
#line 570 "ml_switch_gen.m"
      }
#line 568 "ml_switch_gen.m"
  }
#line 564 "ml_switch_gen.m"
}

#line 529 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_9,
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 529 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 529 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26,
#line 529 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27)
#line 529 "ml_switch_gen.m"
{
#line 534 "ml_switch_gen.m"
  {
#line 534 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Type_16;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Type_17;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Lval_18;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Rval_19;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Range_20;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Cases_21;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Default_22;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchStmt0_23;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Context_24;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchStatement_25;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28;
#line 534 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29;
#line 552 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MinRange_39;
#line 552 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MaxRange_40;
#line 553 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_35;
#line 553 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ExportedType_36;
#line 553 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Type_37;
#line 553 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeCategory_38;
#line 553 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_42_42;
#line 556 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen___NumValuesInRange_41;

#line 535 "ml_switch_gen.m"
    {
#line 535 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Var_10, &ml_backend__ml_switch_gen__Type_16);
    }
#line 536 "ml_switch_gen.m"
    {
#line 536 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Type_16, &ml_backend__ml_switch_gen__MLDS_Type_17);
    }
#line 537 "ml_switch_gen.m"
    {
#line 537 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Var_10, &ml_backend__ml_switch_gen__Lval_18);
    }
#line 538 "ml_switch_gen.m"
    {
#line 538 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__Rval_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 538 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Rval_19, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Lval_18));
#line 538 "ml_switch_gen.m"
    }
#line 553 "ml_switch_gen.m"
    {
#line 553 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_switch_gen__ModuleInfo_35);
    }
#line 555 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MLDS_Type_17)) == (MR_mktag((MR_Integer) 2)));
#line 555 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 555 "ml_switch_gen.m"
      {
#line 555 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__Type_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 0)));
#line 555 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__TypeCategory_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 1)));
#line 555 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__ExportedType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 2)));
#line 554 "ml_switch_gen.m"
        {
#line 554 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_42_42 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_switch_gen__ModuleInfo_35, ml_backend__ml_switch_gen__Type_37);
        }
#line 554 "ml_switch_gen.m"
        {
#line 554 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__succeeded = backend_libs__foreign____Unify____exported_type_0_0(ml_backend__ml_switch_gen__ExportedType_36, ml_backend__ml_switch_gen__V_42_42);
        }
#line 553 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 556 "ml_switch_gen.m"
          {
#line 556 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__type_range_6_p_0(ml_backend__ml_switch_gen__ModuleInfo_35, ml_backend__ml_switch_gen__TypeCategory_38, ml_backend__ml_switch_gen__Type_37, &ml_backend__ml_switch_gen__MinRange_39, &ml_backend__ml_switch_gen__MaxRange_40, &ml_backend__ml_switch_gen___NumValuesInRange_41);
          }
#line 555 "ml_switch_gen.m"
      }
#line 552 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 559 "ml_switch_gen.m"
      {
#line 559 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__Range_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "ml_switch_gen.m"
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_20, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MinRange_39));
#line 559 "ml_switch_gen.m"
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_20, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MaxRange_40));
#line 559 "ml_switch_gen.m"
      }
#line 552 "ml_switch_gen.m"
    else
#line 561 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__Range_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 540 "ml_switch_gen.m"
    {
#line 540 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(ml_backend__ml_switch_gen__MLDS_Type_17, ml_backend__ml_switch_gen__Cases_9, ml_backend__ml_switch_gen__CodeModel_11, &ml_backend__ml_switch_gen__MLDS_Cases_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28);
    }
#line 542 "ml_switch_gen.m"
    {
#line 542 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__CodeModel_11, ml_backend__ml_switch_gen__Context_13, &ml_backend__ml_switch_gen__Default_22, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29);
    }
#line 543 "ml_switch_gen.m"
    {
#line 543 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__SwitchStmt0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 543 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 543 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_17));
#line 543 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_19));
#line 543 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Range_20));
#line 543 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 4) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_21));
#line 543 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 5) = ((MR_Box) (ml_backend__ml_switch_gen__Default_22));
#line 543 "ml_switch_gen.m"
    }
#line 544 "ml_switch_gen.m"
    {
#line 544 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__MLDS_Context_24 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_13);
    }
#line 545 "ml_switch_gen.m"
    {
#line 545 "ml_switch_gen.m"
      ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_switch_gen__SwitchStmt0_23, ml_backend__ml_switch_gen__MLDS_Context_24, &ml_backend__ml_switch_gen__SwitchStatement_25, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27);
    }
#line 546 "ml_switch_gen.m"
    {
#line 546 "ml_switch_gen.m"
      MR_Word base;
#line 546 "ml_switch_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__Statements_14 = base;
#line 546 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchStatement_25));
#line 546 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "ml_switch_gen.m"
    }
#line 534 "ml_switch_gen.m"
  }
#line 529 "ml_switch_gen.m"
}

#line 510 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
#line 510 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__FirstExpr_4,
#line 510 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__LaterExprs_5,
#line 510 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Expr_6)
#line 510 "ml_switch_gen.m"
{
#line 515 "ml_switch_gen.m"
  while (MR_TRUE)
#line 515 "ml_switch_gen.m"
    {
#line 515 "ml_switch_gen.m"
      /* tailcall optimized into a loop */
#line 515 "ml_switch_gen.m"
      {
#line 515 "ml_switch_gen.m"
        MR_bool ml_backend__ml_switch_gen__succeeded;

#line 515 "ml_switch_gen.m"
        if ((ml_backend__ml_switch_gen__LaterExprs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Expr_6 = ml_backend__ml_switch_gen__FirstExpr_4;
#line 515 "ml_switch_gen.m"
        else
#line 518 "ml_switch_gen.m"
          {
#line 518 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__SecondExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__LaterExprs_5, (MR_Integer) 0)));
#line 518 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__OtherExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__LaterExprs_5, (MR_Integer) 1)));
#line 518 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FirstSecondExpr_9;

#line 519 "ml_switch_gen.m"
            {
#line 519 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__FirstSecondExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 519 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 519 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 519 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 2) = ((MR_Box) (ml_backend__ml_switch_gen__FirstExpr_4));
#line 519 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 3) = ((MR_Box) (ml_backend__ml_switch_gen__SecondExpr_7));
#line 519 "ml_switch_gen.m"
            }
#line 520 "ml_switch_gen.m"
            /* direct tailcall eliminated */
#line 520 "ml_switch_gen.m"
            {
#line 520 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__FirstExpr__tmp_copy_4 = ml_backend__ml_switch_gen__FirstSecondExpr_9;
#line 520 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__LaterExprs__tmp_copy_5 = ml_backend__ml_switch_gen__OtherExprs_8;

#line 520 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__LaterExprs_5 = ml_backend__ml_switch_gen__LaterExprs__tmp_copy_5;
#line 520 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__FirstExpr_4 = ml_backend__ml_switch_gen__FirstExpr__tmp_copy_4;
#line 520 "ml_switch_gen.m"
            }
#line 520 "ml_switch_gen.m"
            continue;
#line 518 "ml_switch_gen.m"
          }
#line 515 "ml_switch_gen.m"
      }
#line 515 "ml_switch_gen.m"
      break;
#line 515 "ml_switch_gen.m"
    }
#line 510 "ml_switch_gen.m"
}

#line 502 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 502 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 502 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4)
#line 502 "ml_switch_gen.m"
{
#line 502 "ml_switch_gen.m"
  {
#line 502 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 502 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv4_HeadVar__3_3;
#line 502 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv3_HeadVar__5_5;

#line 502 "ml_switch_gen.m"
    {
#line 502 "ml_switch_gen.m"
      ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv4_HeadVar__3_3, ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_3), &ml_backend__ml_switch_gen__conv3_HeadVar__5_5);
    }
#line 502 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv4_HeadVar__3_3));
#line 502 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_switch_gen__conv3_HeadVar__5_5));
#line 502 "ml_switch_gen.m"
  }
#line 502 "ml_switch_gen.m"
}

#line 502 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 502 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 502 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 502 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4)
#line 502 "ml_switch_gen.m"
{
#line 502 "ml_switch_gen.m"
  {
#line 502 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 502 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv1_HeadVar__3_3;
#line 502 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__5_5;

#line 502 "ml_switch_gen.m"
    {
#line 502 "ml_switch_gen.m"
      ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv1_HeadVar__3_3, ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_3), &ml_backend__ml_switch_gen__conv0_HeadVar__5_5);
    }
#line 502 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv1_HeadVar__3_3));
#line 502 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__5_5));
#line 502 "ml_switch_gen.m"
  }
#line 502 "ml_switch_gen.m"
}

#line 437 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_10,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_11,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_12,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_13,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 437 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__7_7,
#line 437 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31,
#line 437 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32)
#line 437 "ml_switch_gen.m"
{
#line 443 "ml_switch_gen.m"
  {
#line 443 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 443 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Statement_16;
#line 443 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 0)));
#line 443 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 1)));
#line 443 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 3)));
#line 444 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 2)));

#line 474 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__TaggedCases_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "ml_switch_gen.m"
#line 453 "ml_switch_gen.m"
      switch (ml_backend__ml_switch_gen__CanFail_14) {
#line 453 "ml_switch_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 453 "ml_switch_gen.m"
        case (MR_Integer) 0:
#line 454 "ml_switch_gen.m"
          {
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Cond_22;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__GoalBlock_23;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FailStatements_24;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FailBlock_25;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Stmt_26;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_44_44;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_45_45;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__MainTagTestRval_60;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__OtherTagTestRval_61;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62;
#line 454 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_63_63;
#line 502 "ml_switch_gen.m"
            MR_Box ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40;

#line 500 "ml_switch_gen.m"
            {
#line 500 "ml_switch_gen.m"
              ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__V_18_18, &ml_backend__ml_switch_gen__MainTagTestRval_60, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62);
            }
#line 502 "ml_switch_gen.m"
            {
#line 502 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 502 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0]));
#line 502 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1));
#line 502 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 502 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Var_12));
#line 502 "ml_switch_gen.m"
            }
#line 502 "ml_switch_gen.m"
            {
#line 502 "ml_switch_gen.m"
              mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_switch_gen__V_63_63, ml_backend__ml_switch_gen__V_19_19, &ml_backend__ml_switch_gen__OtherTagTestRval_61, ((MR_Box) (ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62)), &ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40);
            }
#line 502 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40 = ((MR_Word) ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40);
#line 504 "ml_switch_gen.m"
            {
#line 504 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__chain_ors_3_p_0(ml_backend__ml_switch_gen__MainTagTestRval_60, ml_backend__ml_switch_gen__OtherTagTestRval_61, &ml_backend__ml_switch_gen__Cond_22);
            }
#line 463 "ml_switch_gen.m"
            {
#line 463 "ml_switch_gen.m"
              ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__GoalBlock_23, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41);
            }
#line 466 "ml_switch_gen.m"
            {
#line 466 "ml_switch_gen.m"
              ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Context_15, &ml_backend__ml_switch_gen__FailStatements_24, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
            }
#line 467 "ml_switch_gen.m"
            {
#line 467 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__FailBlock_25 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__FailStatements_24, ml_backend__ml_switch_gen__Context_15);
            }
#line 471 "ml_switch_gen.m"
            {
#line 471 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 471 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__V_44_44, 0) = ((MR_Box) (ml_backend__ml_switch_gen__FailBlock_25));
#line 471 "ml_switch_gen.m"
            }
#line 471 "ml_switch_gen.m"
            {
#line 471 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__Stmt_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 471 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cond_22));
#line 471 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 1) = ((MR_Box) (ml_backend__ml_switch_gen__GoalBlock_23));
#line 471 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 2) = ((MR_Box) (ml_backend__ml_switch_gen__V_44_44));
#line 471 "ml_switch_gen.m"
            }
#line 472 "ml_switch_gen.m"
            {
#line 472 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__V_45_45 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_15);
            }
#line 472 "ml_switch_gen.m"
            {
#line 472 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 472 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Stmt_26));
#line 472 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_45_45));
#line 472 "ml_switch_gen.m"
            }
#line 454 "ml_switch_gen.m"
          }
#line 453 "ml_switch_gen.m"
          break;
#line 453 "ml_switch_gen.m"
        case (MR_Integer) 1:
#line 452 "ml_switch_gen.m"
          {
#line 452 "ml_switch_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__Statement_16, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
          }
#line 453 "ml_switch_gen.m"
          break;
#line 453 "ml_switch_gen.m"
      }
#line 474 "ml_switch_gen.m"
    else
#line 475 "ml_switch_gen.m"
      {
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCase_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_11, (MR_Integer) 0)));
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_11, (MR_Integer) 1)));
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterStatements_29;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterBlock_30;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_38_38;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_39_39;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Cond_47;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__GoalBlock_48;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Stmt_49;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MainTagTestRval_82;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__OtherTagTestRval_83;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84;
#line 475 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_85_85;
#line 502 "ml_switch_gen.m"
        MR_Box ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34;

#line 500 "ml_switch_gen.m"
        {
#line 500 "ml_switch_gen.m"
          ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__V_18_18, &ml_backend__ml_switch_gen__MainTagTestRval_82, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84);
        }
#line 502 "ml_switch_gen.m"
        {
#line 502 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 502 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0]));
#line 502 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2));
#line 502 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 502 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Var_12));
#line 502 "ml_switch_gen.m"
        }
#line 502 "ml_switch_gen.m"
        {
#line 502 "ml_switch_gen.m"
          mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_switch_gen__V_85_85, ml_backend__ml_switch_gen__V_19_19, &ml_backend__ml_switch_gen__OtherTagTestRval_83, ((MR_Box) (ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84)), &ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34);
        }
#line 502 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34 = ((MR_Word) ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34);
#line 504 "ml_switch_gen.m"
        {
#line 504 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__chain_ors_3_p_0(ml_backend__ml_switch_gen__MainTagTestRval_82, ml_backend__ml_switch_gen__OtherTagTestRval_83, &ml_backend__ml_switch_gen__Cond_47);
        }
#line 482 "ml_switch_gen.m"
        {
#line 482 "ml_switch_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__GoalBlock_48, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35);
        }
#line 485 "ml_switch_gen.m"
        {
#line 485 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__LaterTaggedCase_27, ml_backend__ml_switch_gen__LaterTaggedCases_28, ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__CanFail_14, ml_backend__ml_switch_gen__Context_15, &ml_backend__ml_switch_gen__LaterStatements_29, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
        }
#line 488 "ml_switch_gen.m"
        {
#line 488 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__LaterBlock_30 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__LaterStatements_29, ml_backend__ml_switch_gen__Context_15);
        }
#line 491 "ml_switch_gen.m"
        {
#line 491 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 491 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__V_38_38, 0) = ((MR_Box) (ml_backend__ml_switch_gen__LaterBlock_30));
#line 491 "ml_switch_gen.m"
        }
#line 491 "ml_switch_gen.m"
        {
#line 491 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__Stmt_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 491 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cond_47));
#line 491 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 1) = ((MR_Box) (ml_backend__ml_switch_gen__GoalBlock_48));
#line 491 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 2) = ((MR_Box) (ml_backend__ml_switch_gen__V_38_38));
#line 491 "ml_switch_gen.m"
        }
#line 492 "ml_switch_gen.m"
        {
#line 492 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_39_39 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_15);
        }
#line 492 "ml_switch_gen.m"
        {
#line 492 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Stmt_49));
#line 492 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_39_39));
#line 492 "ml_switch_gen.m"
        }
#line 475 "ml_switch_gen.m"
      }
#line 443 "ml_switch_gen.m"
    {
#line 443 "ml_switch_gen.m"
      MR_Word base;
#line 443 "ml_switch_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__HeadVar__7_7 = base;
#line 443 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Statement_16));
#line 443 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "ml_switch_gen.m"
    }
#line 443 "ml_switch_gen.m"
  }
#line 437 "ml_switch_gen.m"
}

#line 421 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 421 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 421 "ml_switch_gen.m"
{
#line 421 "ml_switch_gen.m"
  {
#line 421 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 421 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

#line 421 "ml_switch_gen.m"
    {
#line 421 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    }
#line 421 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
#line 421 "ml_switch_gen.m"
  }
#line 421 "ml_switch_gen.m"
}

#line 414 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases0_9,
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 414 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 414 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21,
#line 414 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22)
#line 414 "ml_switch_gen.m"
{
#line 419 "ml_switch_gen.m"
  {
#line 419 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 419 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 419 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeInfo_31_31 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
#line 419 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_16;
#line 419 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__CostTaggedCases_17;
#line 419 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedCases_18;

#line 421 "ml_switch_gen.m"
    {
#line 421 "ml_switch_gen.m"
      mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_30_30, ml_backend__ml_switch_gen__TypeInfo_31_31, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[5], ml_backend__ml_switch_gen__TaggedCases0_9, &ml_backend__ml_switch_gen__CostTaggedCases0_16);
    }
#line 424 "ml_switch_gen.m"
    {
#line 424 "ml_switch_gen.m"
      mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_31_31, ml_backend__ml_switch_gen__CostTaggedCases0_16, &ml_backend__ml_switch_gen__CostTaggedCases_17);
    }
#line 425 "ml_switch_gen.m"
    {
#line 425 "ml_switch_gen.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_30_30, ml_backend__ml_switch_gen__CostTaggedCases_17, &ml_backend__ml_switch_gen__TaggedCases_18);
    }
#line 430 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__TaggedCases_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "ml_switch_gen.m"
      {
#line 429 "ml_switch_gen.m"
        {
#line 429 "ml_switch_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
#line 429 "ml_switch_gen.m"
          return;
        }
#line 428 "ml_switch_gen.m"
      }
#line 430 "ml_switch_gen.m"
    else
#line 431 "ml_switch_gen.m"
      {
#line 431 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_18, (MR_Integer) 0)));
#line 431 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_18, (MR_Integer) 1)));

#line 432 "ml_switch_gen.m"
        {
#line 432 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_19, ml_backend__ml_switch_gen__LaterTaggedCases_20, ml_backend__ml_switch_gen__Var_10, ml_backend__ml_switch_gen__CodeModel_11, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_13, ml_backend__ml_switch_gen__Statements_14, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22);
        }
#line 431 "ml_switch_gen.m"
      }
#line 419 "ml_switch_gen.m"
  }
#line 414 "ml_switch_gen.m"
}

#line 402 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
#line 402 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_4,
#line 402 "ml_switch_gen.m"
  MR_Integer ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9,
#line 402 "ml_switch_gen.m"
  MR_Integer * ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10)
#line 402 "ml_switch_gen.m"
{
#line 405 "ml_switch_gen.m"
  {
#line 405 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 405 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_4, (MR_Integer) 1)));
#line 405 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__ConsIdCost_8;
#line 406 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___ConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_4, (MR_Integer) 0)));

#line 407 "ml_switch_gen.m"
    {
#line 407 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ConsIdCost_8 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ml_backend__ml_switch_gen__ConsTag_7);
    }
#line 408 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10 = (ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9 + ml_backend__ml_switch_gen__ConsIdCost_8);
#line 405 "ml_switch_gen.m"
  }
#line 402 "ml_switch_gen.m"
}

#line 399 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
#line 399 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 399 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 399 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_2,
#line 399 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_3)
#line 399 "ml_switch_gen.m"
{
#line 399 "ml_switch_gen.m"
  {
#line 399 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 399 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10;

#line 399 "ml_switch_gen.m"
    {
#line 399 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), ((MR_Integer) ml_backend__ml_switch_gen__wrapper_arg_2), &ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10);
    }
#line 399 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10));
#line 399 "ml_switch_gen.m"
  }
#line 399 "ml_switch_gen.m"
}

#line 392 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
#line 392 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_3,
#line 392 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__2_2)
#line 392 "ml_switch_gen.m"
{
#line 395 "ml_switch_gen.m"
  {
#line 395 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 395 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__Cost_4;
#line 395 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedMainConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 0)));
#line 395 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedOtherConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 1)));
#line 395 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MainCost_9;
#line 395 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedMainConsId_5, (MR_Integer) 1)));
#line 395 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__ConsIdCost_23;
#line 396 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___CaseNum_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 2)));
#line 396 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 3)));
#line 406 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedMainConsId_5, (MR_Integer) 0)));
#line 399 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__conv1_Cost_4;

#line 407 "ml_switch_gen.m"
    {
#line 407 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ConsIdCost_23 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ml_backend__ml_switch_gen__ConsTag_22);
    }
#line 408 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__MainCost_9 = ((MR_Integer) 0 + ml_backend__ml_switch_gen__ConsIdCost_23);
#line 399 "ml_switch_gen.m"
    {
#line 399 "ml_switch_gen.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[4], ml_backend__ml_switch_gen__TaggedOtherConsIds_6, ((MR_Box) (ml_backend__ml_switch_gen__MainCost_9)), &ml_backend__ml_switch_gen__conv1_Cost_4);
    }
#line 399 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__Cost_4 = ((MR_Integer) ml_backend__ml_switch_gen__conv1_Cost_4);
#line 395 "ml_switch_gen.m"
    {
#line 395 "ml_switch_gen.m"
      MR_Word base;
#line 395 "ml_switch_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__HeadVar__2_2 = base;
#line 395 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cost_4));
#line 395 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_switch_gen__TaggedCase_3));
#line 395 "ml_switch_gen.m"
    }
#line 395 "ml_switch_gen.m"
  }
#line 392 "ml_switch_gen.m"
}

#line 421 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0_1(
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 421 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 421 "ml_switch_gen.m"
{
#line 421 "ml_switch_gen.m"
  {
#line 421 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 421 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

#line 421 "ml_switch_gen.m"
    {
#line 421 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    }
#line 421 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
#line 421 "ml_switch_gen.m"
  }
#line 421 "ml_switch_gen.m"
}

#line 265 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_11,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_13,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_14,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_16,
#line 265 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_17,
#line 265 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_18,
#line 265 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33,
#line 265 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34)
#line 265 "ml_switch_gen.m"
{
#line 271 "ml_switch_gen.m"
  {
#line 271 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 271 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__FilteredTaggedCases_20;
#line 271 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__FilteredCanFail_21;
#line 271 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__NumConsIds_22;
#line 271 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__NumArms_23;
#line 271 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_24;
#line 271 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Globals_25;

#line 272 "ml_switch_gen.m"
    {
#line 272 "ml_switch_gen.m"
      backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__TaggedCases_13, &ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CanFail_12, &ml_backend__ml_switch_gen__FilteredCanFail_21);
    }
#line 274 "ml_switch_gen.m"
    {
#line 274 "ml_switch_gen.m"
      backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, &ml_backend__ml_switch_gen__NumConsIds_22, &ml_backend__ml_switch_gen__NumArms_23);
    }
#line 275 "ml_switch_gen.m"
    {
#line 275 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__ModuleInfo_24);
    }
#line 276 "ml_switch_gen.m"
    {
#line 276 "ml_switch_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_24, &ml_backend__ml_switch_gen__Globals_25);
    }
#line 281 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_23 < (MR_Integer) 2);
#line 277 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 285 "ml_switch_gen.m"
      {
#line 285 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_30_88 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 285 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TypeInfo_31_89 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
#line 285 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_76;
#line 285 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__CostTaggedCases_77;
#line 285 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedCases_78;

#line 421 "ml_switch_gen.m"
        {
#line 421 "ml_switch_gen.m"
          mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_30_88, ml_backend__ml_switch_gen__TypeInfo_31_89, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[3], ml_backend__ml_switch_gen__FilteredTaggedCases_20, &ml_backend__ml_switch_gen__CostTaggedCases0_76);
        }
#line 424 "ml_switch_gen.m"
        {
#line 424 "ml_switch_gen.m"
          mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_31_89, ml_backend__ml_switch_gen__CostTaggedCases0_76, &ml_backend__ml_switch_gen__CostTaggedCases_77);
        }
#line 425 "ml_switch_gen.m"
        {
#line 425 "ml_switch_gen.m"
          mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_30_88, ml_backend__ml_switch_gen__CostTaggedCases_77, &ml_backend__ml_switch_gen__TaggedCases_78);
        }
#line 430 "ml_switch_gen.m"
        if ((ml_backend__ml_switch_gen__TaggedCases_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "ml_switch_gen.m"
          {
#line 429 "ml_switch_gen.m"
            {
#line 429 "ml_switch_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
#line 429 "ml_switch_gen.m"
              return;
            }
#line 428 "ml_switch_gen.m"
          }
#line 430 "ml_switch_gen.m"
        else
#line 431 "ml_switch_gen.m"
          {
#line 431 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_78, (MR_Integer) 0)));
#line 431 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_78, (MR_Integer) 1)));

#line 432 "ml_switch_gen.m"
            {
#line 432 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_79, ml_backend__ml_switch_gen__LaterTaggedCases_80, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
            }
#line 431 "ml_switch_gen.m"
          }
#line 286 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "ml_switch_gen.m"
      }
#line 277 "ml_switch_gen.m"
    else
#line 287 "ml_switch_gen.m"
      {
#line 288 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_37_37;

#line 288 "ml_switch_gen.m"
        {
#line 288 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_37_37 = ml_backend__ml_target_util__globals_target_supports_string_switch_1_f_0(ml_backend__ml_switch_gen__Globals_25);
        }
#line 288 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_37_37 == (MR_Integer) 1);
#line 288 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 288 "ml_switch_gen.m"
          {
#line 293 "ml_switch_gen.m"
            {
#line 293 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 316, (MR_Integer) 1);
            }
#line 294 "ml_switch_gen.m"
            if (!(ml_backend__ml_switch_gen__succeeded))
#line 298 "ml_switch_gen.m"
              {
#line 298 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_64_64;

#line 298 "ml_switch_gen.m"
                {
#line 298 "ml_switch_gen.m"
                  ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__V_64_64);
                }
#line 298 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 1 == ml_backend__ml_switch_gen__V_64_64);
#line 298 "ml_switch_gen.m"
              }
#line 288 "ml_switch_gen.m"
          }
#line 287 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 302 "ml_switch_gen.m"
          {
#line 301 "ml_switch_gen.m"
            {
#line 301 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
            }
#line 303 "ml_switch_gen.m"
            *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "ml_switch_gen.m"
          }
#line 287 "ml_switch_gen.m"
        else
#line 304 "ml_switch_gen.m"
          {
#line 310 "ml_switch_gen.m"
            {
#line 310 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__V_65_65;

#line 310 "ml_switch_gen.m"
              {
#line 310 "ml_switch_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__V_65_65);
              }
#line 310 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 1 == ml_backend__ml_switch_gen__V_65_65);
#line 310 "ml_switch_gen.m"
            }
#line 311 "ml_switch_gen.m"
            if (!(ml_backend__ml_switch_gen__succeeded))
#line 312 "ml_switch_gen.m"
              {
#line 312 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_42_42;
#line 312 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_43_43;

#line 312 "ml_switch_gen.m"
                {
#line 312 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_42_42 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(ml_backend__ml_switch_gen__Globals_25);
                }
#line 312 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_42_42 == (MR_Integer) 0);
#line 312 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 312 "ml_switch_gen.m"
                  {
#line 313 "ml_switch_gen.m"
                    {
#line 313 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__V_43_43 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_25);
                    }
#line 313 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_43_43 == (MR_Integer) 0);
#line 312 "ml_switch_gen.m"
                  }
#line 312 "ml_switch_gen.m"
              }
#line 304 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 317 "ml_switch_gen.m"
              {
#line 316 "ml_switch_gen.m"
                {
#line 316 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                }
#line 318 "ml_switch_gen.m"
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 317 "ml_switch_gen.m"
              }
#line 304 "ml_switch_gen.m"
            else
#line 327 "ml_switch_gen.m"
              {
#line 327 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26;
#line 327 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__SwitchVarLval_27;
#line 327 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__SwitchVarRval_28;
#line 327 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46;
#line 332 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__StringTrieSwitchSize_29;
#line 332 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_48_48;
#line 332 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_66_66;

#line 326 "ml_switch_gen.m"
                {
#line 326 "ml_switch_gen.m"
                  ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__GoalInfo_16, ml_backend__ml_switch_gen__CodeModel_14, &ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46);
                }
#line 328 "ml_switch_gen.m"
                {
#line 328 "ml_switch_gen.m"
                  ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__SwitchVar_11, &ml_backend__ml_switch_gen__SwitchVarLval_27);
                }
#line 329 "ml_switch_gen.m"
                {
#line 329 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__SwitchVarRval_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 329 "ml_switch_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarRval_28, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchVarLval_27));
#line 329 "ml_switch_gen.m"
                }
#line 331 "ml_switch_gen.m"
                {
#line 331 "ml_switch_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 431, &ml_backend__ml_switch_gen__StringTrieSwitchSize_29);
                }
#line 333 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_22 >= ml_backend__ml_switch_gen__StringTrieSwitchSize_29);
#line 332 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 332 "ml_switch_gen.m"
                  {
#line 334 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_48_48 = (MR_Integer) 0;
#line 334 "ml_switch_gen.m"
                    {
#line 334 "ml_switch_gen.m"
                      libs__globals__get_target_2_p_0(ml_backend__ml_switch_gen__Globals_25, &ml_backend__ml_switch_gen__V_66_66);
                    }
#line 334 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_48_48 == ml_backend__ml_switch_gen__V_66_66);
#line 332 "ml_switch_gen.m"
                  }
#line 330 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 341 "ml_switch_gen.m"
                  if ((ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "ml_switch_gen.m"
                    {
#line 343 "ml_switch_gen.m"
                      ml_backend__ml_string_switch__ml_generate_string_trie_jump_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                    }
#line 341 "ml_switch_gen.m"
                  else
#line 337 "ml_switch_gen.m"
                    {
#line 337 "ml_switch_gen.m"
                      MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

#line 338 "ml_switch_gen.m"
                      {
#line 338 "ml_switch_gen.m"
                        ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__LookupSwitchInfo_30, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                      }
#line 337 "ml_switch_gen.m"
                    }
#line 330 "ml_switch_gen.m"
                else
#line 347 "ml_switch_gen.m"
                  {
#line 349 "ml_switch_gen.m"
                    MR_Integer ml_backend__ml_switch_gen__StringHashSwitchSize_31;

#line 348 "ml_switch_gen.m"
                    {
#line 348 "ml_switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 432, &ml_backend__ml_switch_gen__StringHashSwitchSize_31);
                    }
#line 350 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_22 >= ml_backend__ml_switch_gen__StringHashSwitchSize_31);
#line 347 "ml_switch_gen.m"
                    if (ml_backend__ml_switch_gen__succeeded)
#line 357 "ml_switch_gen.m"
                      if ((ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 359 "ml_switch_gen.m"
                        {
#line 359 "ml_switch_gen.m"
                          ml_backend__ml_string_switch__ml_generate_string_hash_jump_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                        }
#line 357 "ml_switch_gen.m"
                      else
#line 353 "ml_switch_gen.m"
                        {
#line 353 "ml_switch_gen.m"
                          MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

#line 354 "ml_switch_gen.m"
                          {
#line 354 "ml_switch_gen.m"
                            ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__LookupSwitchInfo_58, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                          }
#line 353 "ml_switch_gen.m"
                        }
#line 347 "ml_switch_gen.m"
                    else
#line 363 "ml_switch_gen.m"
                      {
#line 365 "ml_switch_gen.m"
                        MR_Integer ml_backend__ml_switch_gen__StringBinarySwitchSize_32;

#line 364 "ml_switch_gen.m"
                        {
#line 364 "ml_switch_gen.m"
                          libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 433, &ml_backend__ml_switch_gen__StringBinarySwitchSize_32);
                        }
#line 366 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_22 >= ml_backend__ml_switch_gen__StringBinarySwitchSize_32);
#line 363 "ml_switch_gen.m"
                        if (ml_backend__ml_switch_gen__succeeded)
#line 373 "ml_switch_gen.m"
                          if ((ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "ml_switch_gen.m"
                            {
#line 375 "ml_switch_gen.m"
                              ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                            }
#line 373 "ml_switch_gen.m"
                          else
#line 369 "ml_switch_gen.m"
                            {
#line 369 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

#line 370 "ml_switch_gen.m"
                              {
#line 370 "ml_switch_gen.m"
                                ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__LookupSwitchInfo_60, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                              }
#line 369 "ml_switch_gen.m"
                            }
#line 363 "ml_switch_gen.m"
                        else
#line 382 "ml_switch_gen.m"
                          {
#line 380 "ml_switch_gen.m"
                            {
#line 380 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                            }
#line 383 "ml_switch_gen.m"
                            *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "ml_switch_gen.m"
                          }
#line 363 "ml_switch_gen.m"
                      }
#line 347 "ml_switch_gen.m"
                  }
#line 327 "ml_switch_gen.m"
              }
#line 304 "ml_switch_gen.m"
          }
#line 287 "ml_switch_gen.m"
      }
#line 271 "ml_switch_gen.m"
  }
#line 265 "ml_switch_gen.m"
}

#line 218 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_12_p_0(
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_13,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVarType_14,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_15,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_16,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_18,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_19,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_20,
#line 218 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_21,
#line 218 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_22,
#line 218 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42,
#line 218 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_43)
#line 218 "ml_switch_gen.m"
{
#line 226 "ml_switch_gen.m"
  {
#line 226 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 226 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__NumConsIds_24;
#line 226 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__NumArms_25;
#line 226 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_26;
#line 226 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Globals_27;
#line 230 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__NeedBitVecCheck_35;
#line 230 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__NeedRangeCheck_36;
#line 230 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__FirstVal_37;
#line 230 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__LastVal_38;
#line 230 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_40;
#line 230 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_50_50;
#line 231 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__LowerLimit_28;
#line 231 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__UpperLimit_29;
#line 231 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__NumValues_30;
#line 231 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__LookupSize_31;
#line 231 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__ReqDensity_32;
#line 231 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__FilteredTaggedCases_33;
#line 231 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__FilteredCanFail_34;
#line 231 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_39;
#line 231 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_45_45;
#line 231 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_46_46;
#line 231 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_47_47;
#line 231 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__V_48_48;
#line 231 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_49_49;
#line 231 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_56_56;

#line 227 "ml_switch_gen.m"
    {
#line 227 "ml_switch_gen.m"
      backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__TaggedCases_16, &ml_backend__ml_switch_gen__NumConsIds_24, &ml_backend__ml_switch_gen__NumArms_25);
    }
#line 228 "ml_switch_gen.m"
    {
#line 228 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_switch_gen__ModuleInfo_26);
    }
#line 229 "ml_switch_gen.m"
    {
#line 229 "ml_switch_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_26, &ml_backend__ml_switch_gen__Globals_27);
    }
#line 231 "ml_switch_gen.m"
    {
#line 231 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_switch_gen__V_56_56);
    }
#line 231 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_switch_gen__V_56_56);
#line 231 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 231 "ml_switch_gen.m"
      {
#line 232 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17)) == (MR_mktag((MR_Integer) 1)));
#line 232 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 232 "ml_switch_gen.m"
          {
#line 232 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__LowerLimit_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17, (MR_Integer) 0)));
#line 232 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__UpperLimit_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17, (MR_Integer) 1)));
#line 232 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__NumValues_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17, (MR_Integer) 2)));
#line 233 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_45_45 = (MR_Integer) 443;
#line 233 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_46_46 = (MR_Integer) 1;
#line 233 "ml_switch_gen.m"
            {
#line 233 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_45_45, ml_backend__ml_switch_gen__V_46_46);
            }
#line 231 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 231 "ml_switch_gen.m"
              {
#line 234 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__V_47_47 = (MR_Integer) 430;
#line 234 "ml_switch_gen.m"
                {
#line 234 "ml_switch_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_47_47, &ml_backend__ml_switch_gen__LookupSize_31);
                }
#line 235 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_24 >= ml_backend__ml_switch_gen__LookupSize_31);
#line 231 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 231 "ml_switch_gen.m"
                  {
#line 236 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_48_48 = (MR_Integer) 1;
#line 236 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_25 > ml_backend__ml_switch_gen__V_48_48);
#line 231 "ml_switch_gen.m"
                    if (ml_backend__ml_switch_gen__succeeded)
#line 231 "ml_switch_gen.m"
                      {
#line 237 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__V_49_49 = (MR_Integer) 428;
#line 237 "ml_switch_gen.m"
                        {
#line 237 "ml_switch_gen.m"
                          libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_49_49, &ml_backend__ml_switch_gen__ReqDensity_32);
                        }
#line 239 "ml_switch_gen.m"
                        {
#line 239 "ml_switch_gen.m"
                          backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ml_backend__ml_switch_gen__CodeModel_18, ml_backend__ml_switch_gen__TaggedCases_16, &ml_backend__ml_switch_gen__FilteredTaggedCases_33, ml_backend__ml_switch_gen__CanFail_15, &ml_backend__ml_switch_gen__FilteredCanFail_34);
                        }
#line 242 "ml_switch_gen.m"
                        {
#line 242 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ml_backend__ml_switch_gen__ModuleInfo_26, ml_backend__ml_switch_gen__SwitchVarType_14, ml_backend__ml_switch_gen__FilteredCanFail_34, ml_backend__ml_switch_gen__LowerLimit_28, ml_backend__ml_switch_gen__UpperLimit_29, ml_backend__ml_switch_gen__NumValues_30, ml_backend__ml_switch_gen__ReqDensity_32, &ml_backend__ml_switch_gen__NeedBitVecCheck_35, &ml_backend__ml_switch_gen__NeedRangeCheck_36, &ml_backend__ml_switch_gen__FirstVal_37, &ml_backend__ml_switch_gen__LastVal_38);
                        }
#line 231 "ml_switch_gen.m"
                        if (ml_backend__ml_switch_gen__succeeded)
#line 231 "ml_switch_gen.m"
                          {
#line 246 "ml_switch_gen.m"
                            {
#line 246 "ml_switch_gen.m"
                              ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(ml_backend__ml_switch_gen__SwitchVar_13, ml_backend__ml_switch_gen__FilteredTaggedCases_33, ml_backend__ml_switch_gen__GoalInfo_20, ml_backend__ml_switch_gen__CodeModel_18, &ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_39, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_50_50);
                            }
#line 248 "ml_switch_gen.m"
                            ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_39)) == (MR_mktag((MR_Integer) 1)));
#line 248 "ml_switch_gen.m"
                            if (ml_backend__ml_switch_gen__succeeded)
#line 248 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__LookupSwitchInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_39, (MR_Integer) 0)));
#line 231 "ml_switch_gen.m"
                          }
#line 231 "ml_switch_gen.m"
                      }
#line 231 "ml_switch_gen.m"
                  }
#line 231 "ml_switch_gen.m"
              }
#line 232 "ml_switch_gen.m"
          }
#line 231 "ml_switch_gen.m"
      }
#line 230 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 252 "ml_switch_gen.m"
      {
#line 252 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LookupStatement_41;

#line 250 "ml_switch_gen.m"
        {
#line 250 "ml_switch_gen.m"
          ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0(ml_backend__ml_switch_gen__SwitchVar_13, ml_backend__ml_switch_gen__TaggedCases_16, ml_backend__ml_switch_gen__LookupSwitchInfo_40, ml_backend__ml_switch_gen__CodeModel_18, ml_backend__ml_switch_gen__Context_19, ml_backend__ml_switch_gen__FirstVal_37, ml_backend__ml_switch_gen__LastVal_38, ml_backend__ml_switch_gen__NeedBitVecCheck_35, ml_backend__ml_switch_gen__NeedRangeCheck_36, &ml_backend__ml_switch_gen__LookupStatement_41, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_50_50, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_43);
        }
#line 253 "ml_switch_gen.m"
        {
#line 253 "ml_switch_gen.m"
          MR_Word base;
#line 253 "ml_switch_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Statements_22 = base;
#line 253 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__LookupStatement_41));
#line 253 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "ml_switch_gen.m"
        }
#line 252 "ml_switch_gen.m"
      }
#line 230 "ml_switch_gen.m"
    else
#line 254 "ml_switch_gen.m"
      {
#line 255 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_53_53;

#line 255 "ml_switch_gen.m"
        {
#line 255 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_53_53 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_27);
        }
#line 255 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_53_53 == (MR_Integer) 1);
#line 254 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 534 "ml_switch_gen.m"
          {
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Type_66;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__MLDS_Type_67;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Lval_68;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Rval_69;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Range_70;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__MLDS_Cases_71;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Default_72;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__SwitchStmt0_73;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__MLDS_Context_74;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__SwitchStatement_75;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_76;
#line 534 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_77;
#line 552 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__MinRange_87;
#line 552 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__MaxRange_88;
#line 553 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__ModuleInfo_83;
#line 553 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__ExportedType_84;
#line 553 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Type_85;
#line 553 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__TypeCategory_86;
#line 553 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_90_90;
#line 556 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen___NumValuesInRange_89;

#line 535 "ml_switch_gen.m"
            {
#line 535 "ml_switch_gen.m"
              ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, ml_backend__ml_switch_gen__SwitchVar_13, &ml_backend__ml_switch_gen__Type_66);
            }
#line 536 "ml_switch_gen.m"
            {
#line 536 "ml_switch_gen.m"
              ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, ml_backend__ml_switch_gen__Type_66, &ml_backend__ml_switch_gen__MLDS_Type_67);
            }
#line 537 "ml_switch_gen.m"
            {
#line 537 "ml_switch_gen.m"
              ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, ml_backend__ml_switch_gen__SwitchVar_13, &ml_backend__ml_switch_gen__Lval_68);
            }
#line 538 "ml_switch_gen.m"
            {
#line 538 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__Rval_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 538 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Rval_69, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Lval_68));
#line 538 "ml_switch_gen.m"
            }
#line 553 "ml_switch_gen.m"
            {
#line 553 "ml_switch_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_switch_gen__ModuleInfo_83);
            }
#line 555 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MLDS_Type_67)) == (MR_mktag((MR_Integer) 2)));
#line 555 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 555 "ml_switch_gen.m"
              {
#line 555 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__Type_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_67, (MR_Integer) 0)));
#line 555 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__TypeCategory_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_67, (MR_Integer) 1)));
#line 555 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__ExportedType_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_67, (MR_Integer) 2)));
#line 554 "ml_switch_gen.m"
                {
#line 554 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_90_90 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_switch_gen__ModuleInfo_83, ml_backend__ml_switch_gen__Type_85);
                }
#line 554 "ml_switch_gen.m"
                {
#line 554 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__succeeded = backend_libs__foreign____Unify____exported_type_0_0(ml_backend__ml_switch_gen__ExportedType_84, ml_backend__ml_switch_gen__V_90_90);
                }
#line 553 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 556 "ml_switch_gen.m"
                  {
#line 556 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__type_range_6_p_0(ml_backend__ml_switch_gen__ModuleInfo_83, ml_backend__ml_switch_gen__TypeCategory_86, ml_backend__ml_switch_gen__Type_85, &ml_backend__ml_switch_gen__MinRange_87, &ml_backend__ml_switch_gen__MaxRange_88, &ml_backend__ml_switch_gen___NumValuesInRange_89);
                  }
#line 555 "ml_switch_gen.m"
              }
#line 552 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 559 "ml_switch_gen.m"
              {
#line 559 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__Range_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_70, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MinRange_87));
#line 559 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_70, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MaxRange_88));
#line 559 "ml_switch_gen.m"
              }
#line 552 "ml_switch_gen.m"
            else
#line 561 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__Range_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 540 "ml_switch_gen.m"
            {
#line 540 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(ml_backend__ml_switch_gen__MLDS_Type_67, ml_backend__ml_switch_gen__TaggedCases_16, ml_backend__ml_switch_gen__CodeModel_18, &ml_backend__ml_switch_gen__MLDS_Cases_71, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_76);
            }
#line 542 "ml_switch_gen.m"
            {
#line 542 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_switch_gen__CanFail_15, ml_backend__ml_switch_gen__CodeModel_18, ml_backend__ml_switch_gen__Context_19, &ml_backend__ml_switch_gen__Default_72, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_76, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_77);
            }
#line 543 "ml_switch_gen.m"
            {
#line 543 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__SwitchStmt0_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 543 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 543 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_67));
#line 543 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_69));
#line 543 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Range_70));
#line 543 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 4) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_71));
#line 543 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 5) = ((MR_Box) (ml_backend__ml_switch_gen__Default_72));
#line 543 "ml_switch_gen.m"
            }
#line 544 "ml_switch_gen.m"
            {
#line 544 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__MLDS_Context_74 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_19);
            }
#line 545 "ml_switch_gen.m"
            {
#line 545 "ml_switch_gen.m"
              ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_switch_gen__SwitchStmt0_73, ml_backend__ml_switch_gen__MLDS_Context_74, &ml_backend__ml_switch_gen__SwitchStatement_75, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_77, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_43);
            }
#line 546 "ml_switch_gen.m"
            {
#line 546 "ml_switch_gen.m"
              MR_Word base;
#line 546 "ml_switch_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "ml_switch_gen.m"
              *ml_backend__ml_switch_gen__Statements_22 = base;
#line 546 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchStatement_75));
#line 546 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "ml_switch_gen.m"
            }
#line 534 "ml_switch_gen.m"
          }
#line 254 "ml_switch_gen.m"
        else
#line 260 "ml_switch_gen.m"
          {
#line 260 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_16, ml_backend__ml_switch_gen__SwitchVar_13, ml_backend__ml_switch_gen__CodeModel_18, ml_backend__ml_switch_gen__CanFail_15, ml_backend__ml_switch_gen__Context_19, ml_backend__ml_switch_gen__Statements_22, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_43);
          }
#line 254 "ml_switch_gen.m"
      }
#line 263 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 226 "ml_switch_gen.m"
  }
#line 218 "ml_switch_gen.m"
}

#line 129 "ml_switch_gen.m"
void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(
#line 129 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_7,
#line 129 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_8,
#line 129 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_9,
#line 129 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Default_10,
#line 129 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14,
#line 129 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15)
#line 129 "ml_switch_gen.m"
{
#line 637 "ml_switch_gen.m"
  {
#line 637 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;

#line 637 "ml_switch_gen.m"
#line 637 "ml_switch_gen.m"
    switch (ml_backend__ml_switch_gen__CanFail_7) {
#line 637 "ml_switch_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 637 "ml_switch_gen.m"
      case (MR_Integer) 0:
#line 637 "ml_switch_gen.m"
        {
#line 637 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__FailStatements_12;

#line 638 "ml_switch_gen.m"
          {
#line 638 "ml_switch_gen.m"
            ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_switch_gen__CodeModel_8, ml_backend__ml_switch_gen__Context_9, &ml_backend__ml_switch_gen__FailStatements_12, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15);
          }
#line 639 "ml_switch_gen.m"
          {
#line 639 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = mercury__list__is_empty_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_switch_gen__FailStatements_12);
          }
#line 639 "ml_switch_gen.m"
          if (ml_backend__ml_switch_gen__succeeded)
#line 640 "ml_switch_gen.m"
            *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 639 "ml_switch_gen.m"
          else
#line 642 "ml_switch_gen.m"
            {
#line 642 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__Fail_13;

#line 642 "ml_switch_gen.m"
              {
#line 642 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__Fail_13 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__FailStatements_12, ml_backend__ml_switch_gen__Context_9);
              }
#line 643 "ml_switch_gen.m"
              *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_switch_gen__Fail_13);
#line 642 "ml_switch_gen.m"
            }
#line 637 "ml_switch_gen.m"
        }
#line 637 "ml_switch_gen.m"
        break;
#line 637 "ml_switch_gen.m"
      case (MR_Integer) 1:
#line 646 "ml_switch_gen.m"
        {
#line 647 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15 = ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14;
#line 646 "ml_switch_gen.m"
        }
#line 637 "ml_switch_gen.m"
        break;
#line 637 "ml_switch_gen.m"
    }
#line 637 "ml_switch_gen.m"
  }
#line 129 "ml_switch_gen.m"
}

#line 421 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 421 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 421 "ml_switch_gen.m"
{
#line 421 "ml_switch_gen.m"
  {
#line 421 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 421 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv1_HeadVar__2_2;

#line 421 "ml_switch_gen.m"
    {
#line 421 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv1_HeadVar__2_2);
    }
#line 421 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv1_HeadVar__2_2));
#line 421 "ml_switch_gen.m"
  }
#line 421 "ml_switch_gen.m"
}

#line 421 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 421 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 421 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 421 "ml_switch_gen.m"
{
#line 421 "ml_switch_gen.m"
  {
#line 421 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 421 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

#line 421 "ml_switch_gen.m"
    {
#line 421 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    }
#line 421 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
#line 421 "ml_switch_gen.m"
  }
#line 421 "ml_switch_gen.m"
}

#line 122 "ml_switch_gen.m"
void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(
#line 122 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_11,
#line 122 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 122 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_13,
#line 122 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_14,
#line 122 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 122 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_16,
#line 122 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_17,
#line 122 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_18,
#line 122 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30,
#line 122 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31)
#line 122 "ml_switch_gen.m"
{
#line 166 "ml_switch_gen.m"
  {
#line 166 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 166 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_20;
#line 166 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchVarType_21;
#line 166 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedCases_22;
#line 166 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23;
#line 166 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchCategory_24;
#line 166 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MayUseSmartIndexing_25;

#line 170 "ml_switch_gen.m"
    {
#line 170 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, &ml_backend__ml_switch_gen__ModuleInfo_20);
    }
#line 171 "ml_switch_gen.m"
    {
#line 171 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__SwitchVar_11, &ml_backend__ml_switch_gen__SwitchVarType_21);
    }
#line 172 "ml_switch_gen.m"
    {
#line 172 "ml_switch_gen.m"
      backend_libs__switch_util__tag_cases_5_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, ml_backend__ml_switch_gen__Cases_13, &ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23);
    }
#line 175 "ml_switch_gen.m"
    {
#line 175 "ml_switch_gen.m"
      backend_libs__switch_util__find_switch_category_4_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, &ml_backend__ml_switch_gen__SwitchCategory_24, &ml_backend__ml_switch_gen__MayUseSmartIndexing_25);
    }
#line 182 "ml_switch_gen.m"
#line 182 "ml_switch_gen.m"
    switch (ml_backend__ml_switch_gen__MayUseSmartIndexing_25) {
#line 182 "ml_switch_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 182 "ml_switch_gen.m"
      case (MR_Integer) 0:
#line 178 "ml_switch_gen.m"
        {
#line 178 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_30_62 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 178 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__TypeInfo_31_63 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
#line 178 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_50;
#line 178 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__CostTaggedCases_51;
#line 178 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__TaggedCases_52;

#line 421 "ml_switch_gen.m"
          {
#line 421 "ml_switch_gen.m"
            mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_30_62, ml_backend__ml_switch_gen__TypeInfo_31_63, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[1], ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__CostTaggedCases0_50);
          }
#line 424 "ml_switch_gen.m"
          {
#line 424 "ml_switch_gen.m"
            mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_31_63, ml_backend__ml_switch_gen__CostTaggedCases0_50, &ml_backend__ml_switch_gen__CostTaggedCases_51);
          }
#line 425 "ml_switch_gen.m"
          {
#line 425 "ml_switch_gen.m"
            mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_30_62, ml_backend__ml_switch_gen__CostTaggedCases_51, &ml_backend__ml_switch_gen__TaggedCases_52);
          }
#line 430 "ml_switch_gen.m"
          if ((ml_backend__ml_switch_gen__TaggedCases_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "ml_switch_gen.m"
            {
#line 429 "ml_switch_gen.m"
              {
#line 429 "ml_switch_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
#line 429 "ml_switch_gen.m"
                return;
              }
#line 428 "ml_switch_gen.m"
            }
#line 430 "ml_switch_gen.m"
          else
#line 431 "ml_switch_gen.m"
            {
#line 431 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_52, (MR_Integer) 0)));
#line 431 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_52, (MR_Integer) 1)));

#line 432 "ml_switch_gen.m"
              {
#line 432 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_53, ml_backend__ml_switch_gen__LaterTaggedCases_54, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
              }
#line 431 "ml_switch_gen.m"
            }
#line 181 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "ml_switch_gen.m"
        }
#line 182 "ml_switch_gen.m"
        break;
#line 182 "ml_switch_gen.m"
      case (MR_Integer) 1:
#line 183 "ml_switch_gen.m"
        {
#line 183 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__Globals_26;

#line 184 "ml_switch_gen.m"
          {
#line 184 "ml_switch_gen.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, &ml_backend__ml_switch_gen__Globals_26);
          }
#line 190 "ml_switch_gen.m"
#line 190 "ml_switch_gen.m"
          switch (ml_backend__ml_switch_gen__SwitchCategory_24) {
#line 190 "ml_switch_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 190 "ml_switch_gen.m"
            case (MR_Integer) 0:
#line 187 "ml_switch_gen.m"
              {
#line 187 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_12_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__SwitchVarType_21, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__GoalInfo_16, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
              }
#line 190 "ml_switch_gen.m"
              break;
#line 190 "ml_switch_gen.m"
            case (MR_Integer) 3:
#line 211 "ml_switch_gen.m"
              {
#line 211 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_30_86 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 211 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__TypeInfo_31_87 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
#line 211 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_74;
#line 211 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__CostTaggedCases_75;
#line 211 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__TaggedCases_76;

#line 421 "ml_switch_gen.m"
                {
#line 421 "ml_switch_gen.m"
                  mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_30_86, ml_backend__ml_switch_gen__TypeInfo_31_87, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[2], ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__CostTaggedCases0_74);
                }
#line 424 "ml_switch_gen.m"
                {
#line 424 "ml_switch_gen.m"
                  mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_31_87, ml_backend__ml_switch_gen__CostTaggedCases0_74, &ml_backend__ml_switch_gen__CostTaggedCases_75);
                }
#line 425 "ml_switch_gen.m"
                {
#line 425 "ml_switch_gen.m"
                  mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_30_86, ml_backend__ml_switch_gen__CostTaggedCases_75, &ml_backend__ml_switch_gen__TaggedCases_76);
                }
#line 430 "ml_switch_gen.m"
                if ((ml_backend__ml_switch_gen__TaggedCases_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "ml_switch_gen.m"
                  {
#line 429 "ml_switch_gen.m"
                    {
#line 429 "ml_switch_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
#line 429 "ml_switch_gen.m"
                      return;
                    }
#line 428 "ml_switch_gen.m"
                  }
#line 430 "ml_switch_gen.m"
                else
#line 431 "ml_switch_gen.m"
                  {
#line 431 "ml_switch_gen.m"
                    MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_76, (MR_Integer) 0)));
#line 431 "ml_switch_gen.m"
                    MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_76, (MR_Integer) 1)));

#line 432 "ml_switch_gen.m"
                    {
#line 432 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_77, ml_backend__ml_switch_gen__LaterTaggedCases_78, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
                    }
#line 431 "ml_switch_gen.m"
                  }
#line 214 "ml_switch_gen.m"
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 211 "ml_switch_gen.m"
              }
#line 190 "ml_switch_gen.m"
              break;
#line 190 "ml_switch_gen.m"
            case (MR_Integer) 1:
#line 192 "ml_switch_gen.m"
              {
#line 192 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__GoalInfo_16, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
              }
#line 190 "ml_switch_gen.m"
              break;
#line 190 "ml_switch_gen.m"
            case (MR_Integer) 2:
#line 195 "ml_switch_gen.m"
              {
#line 195 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__NumConsIds_27;
#line 195 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__NumArms_28;
#line 195 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__TagSize_29;
#line 199 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__V_34_34;
#line 199 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_35_35;

#line 196 "ml_switch_gen.m"
                {
#line 196 "ml_switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__NumConsIds_27, &ml_backend__ml_switch_gen__NumArms_28);
                }
#line 197 "ml_switch_gen.m"
                {
#line 197 "ml_switch_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_26, (MR_Integer) 434, &ml_backend__ml_switch_gen__TagSize_29);
                }
#line 199 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_27 >= ml_backend__ml_switch_gen__TagSize_29);
#line 199 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 199 "ml_switch_gen.m"
                  {
#line 200 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_34_34 = (MR_Integer) 1;
#line 200 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_28 > ml_backend__ml_switch_gen__V_34_34);
#line 199 "ml_switch_gen.m"
                    if (ml_backend__ml_switch_gen__succeeded)
#line 199 "ml_switch_gen.m"
                      {
#line 201 "ml_switch_gen.m"
                        {
#line 201 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__V_35_35 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_26);
                        }
#line 201 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_35_35 == (MR_Integer) 1);
#line 199 "ml_switch_gen.m"
                      }
#line 199 "ml_switch_gen.m"
                  }
#line 198 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 203 "ml_switch_gen.m"
                  {
#line 203 "ml_switch_gen.m"
                    ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
                  }
#line 198 "ml_switch_gen.m"
                else
#line 206 "ml_switch_gen.m"
                  {
#line 206 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
                  }
#line 209 "ml_switch_gen.m"
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 195 "ml_switch_gen.m"
              }
#line 190 "ml_switch_gen.m"
              break;
#line 190 "ml_switch_gen.m"
          }
#line 183 "ml_switch_gen.m"
        }
#line 182 "ml_switch_gen.m"
        break;
#line 182 "ml_switch_gen.m"
    }
#line 166 "ml_switch_gen.m"
  }
#line 122 "ml_switch_gen.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_switch_gen. */
