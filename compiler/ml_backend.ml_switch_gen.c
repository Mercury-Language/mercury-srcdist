/*
** Automatically generated from `ml_switch_gen.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 154 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0;

#line 157 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 551 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(
#line 551 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_4,
#line 551 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_5,
#line 551 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__MatchCond_6);

#line 546 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1(
#line 546 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 546 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 546 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 526 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(
#line 526 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_1,
#line 526 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__HeadVar__2_2,
#line 526 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_3,
#line 526 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__4_4,
#line 526 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5,
#line 526 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6);

#line 491 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_9,
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 491 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26,
#line 491 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27);

#line 472 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__FirstExpr_4,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__LaterExprs_5,
#line 472 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Expr_6);

#line 464 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 464 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 464 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4);

#line 464 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 464 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 464 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4);

#line 399 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_10,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_11,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_12,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_13,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 399 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__7_7,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31,
#line 399 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);

#line 383 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
#line 383 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 383 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 383 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 376 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases0_9,
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 376 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21,
#line 376 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22);

#line 364 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
#line 364 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_4,
#line 364 "ml_switch_gen.m"
  MR_Integer ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9,
#line 364 "ml_switch_gen.m"
  MR_Integer * ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10);

#line 361 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
#line 361 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 361 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 361 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_2,
#line 361 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_3);

#line 354 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
#line 354 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_3,
#line 354 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__2_2);

#line 301 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_3(
#line 301 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 301 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 301 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 274 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
#line 274 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 274 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 274 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 218 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
#line 218 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 218 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 218 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);


static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_1[6][3];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_2[3][5];

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
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_3)),
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
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 496 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0
  }
};

#line 505 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 551 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(
#line 551 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_4,
#line 551 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_5,
#line 551 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__MatchCond_6)
#line 551 "ml_switch_gen.m"
{
#line 554 "ml_switch_gen.m"
  {
#line 554 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 554 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_5, (MR_Integer) 0)));
#line 554 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Tag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_5, (MR_Integer) 1)));
#line 554 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Rval_11;

#line 565 "ml_switch_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_switch_gen__Tag_8)) == (MR_mktag((MR_Integer) 1))))
#line 566 "ml_switch_gen.m"
      {
#line 566 "ml_switch_gen.m"
        MR_String ml_backend__ml_switch_gen__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 0)));
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_49_49;

#line 567 "ml_switch_gen.m"
        {
#line 567 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 567 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_switch_gen__String_13));
#line 567 "ml_switch_gen.m"
        }
#line 567 "ml_switch_gen.m"
        {
#line 567 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 567 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_49_49));
#line 567 "ml_switch_gen.m"
        }
#line 566 "ml_switch_gen.m"
      }
#line 565 "ml_switch_gen.m"
    else
#line 565 "ml_switch_gen.m"
      if (((((MR_tag((MR_Word) ml_backend__ml_switch_gen__Tag_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 569 "ml_switch_gen.m"
        {
#line 569 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__ForeignLang_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 1)));
#line 569 "ml_switch_gen.m"
          MR_String ml_backend__ml_switch_gen__ForeignTag_15 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 2)));
#line 569 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_48_48;

#line 570 "ml_switch_gen.m"
          {
#line 570 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 570 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 570 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ForeignLang_14));
#line 570 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 2) = ((MR_Box) (ml_backend__ml_switch_gen__ForeignTag_15));
#line 570 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 3) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_4));
#line 570 "ml_switch_gen.m"
          }
#line 570 "ml_switch_gen.m"
          {
#line 570 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 570 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_48_48));
#line 570 "ml_switch_gen.m"
          }
#line 569 "ml_switch_gen.m"
        }
#line 565 "ml_switch_gen.m"
      else
#line 565 "ml_switch_gen.m"
        if (((((MR_tag((MR_Word) ml_backend__ml_switch_gen__Tag_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 557 "ml_switch_gen.m"
          {
#line 557 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 1)));
#line 558 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__V_10_10;

#line 558 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_switch_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 558 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 558 "ml_switch_gen.m"
              {
#line 558 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 1)));
#line 559 "ml_switch_gen.m"
                {
#line 559 "ml_switch_gen.m"
                  MR_Word ml_backend__ml_switch_gen__V_50_50;

#line 559 "ml_switch_gen.m"
                  {
#line 559 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "ml_switch_gen.m"
                    MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__V_50_50, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 559 "ml_switch_gen.m"
                  }
#line 559 "ml_switch_gen.m"
                  {
#line 559 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "ml_switch_gen.m"
                    MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 559 "ml_switch_gen.m"
                    MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_50_50));
#line 559 "ml_switch_gen.m"
                  }
#line 559 "ml_switch_gen.m"
                }
#line 558 "ml_switch_gen.m"
              }
#line 558 "ml_switch_gen.m"
            else
#line 562 "ml_switch_gen.m"
              {
#line 560 "ml_switch_gen.m"
                MR_Char ml_backend__ml_switch_gen__V_12_12;

#line 560 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_switch_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 560 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 560 "ml_switch_gen.m"
                  {
#line 560 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_12_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 1)));
#line 561 "ml_switch_gen.m"
                    {
#line 561 "ml_switch_gen.m"
                      MR_Word ml_backend__ml_switch_gen__V_51_51;

#line 561 "ml_switch_gen.m"
                      {
#line 561 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 561 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_51_51, 1) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 561 "ml_switch_gen.m"
                      }
#line 561 "ml_switch_gen.m"
                      {
#line 561 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 561 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_51_51));
#line 561 "ml_switch_gen.m"
                      }
#line 561 "ml_switch_gen.m"
                    }
#line 560 "ml_switch_gen.m"
                  }
#line 560 "ml_switch_gen.m"
                else
#line 563 "ml_switch_gen.m"
                  {
#line 563 "ml_switch_gen.m"
                    MR_Word ml_backend__ml_switch_gen__V_52_52;

#line 563 "ml_switch_gen.m"
                    {
#line 563 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 563 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 563 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 1) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 563 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 2) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_4));
#line 563 "ml_switch_gen.m"
                    }
#line 563 "ml_switch_gen.m"
                    {
#line 563 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 563 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_52_52));
#line 563 "ml_switch_gen.m"
                    }
#line 563 "ml_switch_gen.m"
                  }
#line 562 "ml_switch_gen.m"
              }
#line 557 "ml_switch_gen.m"
          }
#line 565 "ml_switch_gen.m"
        else
#line 590 "ml_switch_gen.m"
          {
#line 591 "ml_switch_gen.m"
            {
#line 591 "ml_switch_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/3", (MR_String) "invalid tag type");
#line 591 "ml_switch_gen.m"
              return;
            }
#line 590 "ml_switch_gen.m"
          }
#line 593 "ml_switch_gen.m"
    {
#line 593 "ml_switch_gen.m"
      MR_Word base;
#line 593 "ml_switch_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 593 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__MatchCond_6 = base;
#line 593 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_11));
#line 593 "ml_switch_gen.m"
    }
#line 554 "ml_switch_gen.m"
  }
#line 551 "ml_switch_gen.m"
}

#line 546 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1(
#line 546 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 546 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 546 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 546 "ml_switch_gen.m"
{
#line 546 "ml_switch_gen.m"
  {
#line 546 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 546 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_MatchCond_6;

#line 546 "ml_switch_gen.m"
    {
#line 546 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_MatchCond_6);
    }
#line 546 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_MatchCond_6));
#line 546 "ml_switch_gen.m"
  }
#line 546 "ml_switch_gen.m"
}

#line 526 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(
#line 526 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_1,
#line 526 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__HeadVar__2_2,
#line 526 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_3,
#line 526 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__4_4,
#line 526 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5,
#line 526 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6)
#line 526 "ml_switch_gen.m"
{
#line 530 "ml_switch_gen.m"
  {
#line 530 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;

#line 530 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "ml_switch_gen.m"
      {
#line 530 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6 = ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5;
#line 530 "ml_switch_gen.m"
      }
#line 530 "ml_switch_gen.m"
    else
#line 532 "ml_switch_gen.m"
      {
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedCase_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedCases_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MLDS_Case_16;
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MLDS_Cases_17;
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21;
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedMainConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 0)));
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedOtherConsIds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 1)));
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Goal_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 3)));
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MainCond_34;
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__OtherConds_35;
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Statement_36;
#line 532 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_37_37;
#line 544 "ml_switch_gen.m"
        MR_Integer ml_backend__ml_switch_gen__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 2)));

#line 545 "ml_switch_gen.m"
        {
#line 545 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(ml_backend__ml_switch_gen__MLDS_Type_1, ml_backend__ml_switch_gen__TaggedMainConsId_30, &ml_backend__ml_switch_gen__MainCond_34);
        }
#line 546 "ml_switch_gen.m"
        {
#line 546 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 546 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[1]));
#line 546 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1));
#line 546 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 546 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 3) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_1));
#line 546 "ml_switch_gen.m"
        }
#line 546 "ml_switch_gen.m"
        {
#line 546 "ml_switch_gen.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, ml_backend__ml_switch_gen__V_37_37, ml_backend__ml_switch_gen__TaggedOtherConsIds_31, &ml_backend__ml_switch_gen__OtherConds_35);
        }
#line 548 "ml_switch_gen.m"
        {
#line 548 "ml_switch_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_3, ml_backend__ml_switch_gen__Goal_33, &ml_backend__ml_switch_gen__Statement_36, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21);
        }
#line 549 "ml_switch_gen.m"
        {
#line 549 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__MLDS_Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 549 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MainCond_34));
#line 549 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__OtherConds_35));
#line 549 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Statement_36));
#line 549 "ml_switch_gen.m"
        }
#line 535 "ml_switch_gen.m"
        {
#line 535 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(ml_backend__ml_switch_gen__MLDS_Type_1, ml_backend__ml_switch_gen__TaggedCases_14, ml_backend__ml_switch_gen__CodeModel_3, &ml_backend__ml_switch_gen__MLDS_Cases_17, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6);
        }
#line 532 "ml_switch_gen.m"
        {
#line 532 "ml_switch_gen.m"
          MR_Word base;
#line 532 "ml_switch_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__HeadVar__4_4 = base;
#line 532 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Case_16));
#line 532 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_17));
#line 532 "ml_switch_gen.m"
        }
#line 532 "ml_switch_gen.m"
      }
#line 530 "ml_switch_gen.m"
  }
#line 526 "ml_switch_gen.m"
}

#line 491 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_9,
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 491 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 491 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26,
#line 491 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27)
#line 491 "ml_switch_gen.m"
{
#line 496 "ml_switch_gen.m"
  {
#line 496 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Type_16;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Type_17;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Lval_18;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Rval_19;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Range_20;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Cases_21;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Default_22;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchStmt0_23;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Context_24;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchStatement_25;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29;
#line 522 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MinRange_39;
#line 522 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MaxRange_40;
#line 515 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_35;
#line 515 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ExportedType_36;
#line 515 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Type_37;
#line 515 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeCategory_38;
#line 515 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_42_42;
#line 518 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen___NumValuesInRange_41;

#line 497 "ml_switch_gen.m"
    {
#line 497 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Var_10, &ml_backend__ml_switch_gen__Type_16);
    }
#line 498 "ml_switch_gen.m"
    {
#line 498 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Type_16, &ml_backend__ml_switch_gen__MLDS_Type_17);
    }
#line 499 "ml_switch_gen.m"
    {
#line 499 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Var_10, &ml_backend__ml_switch_gen__Lval_18);
    }
#line 500 "ml_switch_gen.m"
    {
#line 500 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__Rval_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 500 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Rval_19, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Lval_18));
#line 500 "ml_switch_gen.m"
    }
#line 515 "ml_switch_gen.m"
    {
#line 515 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_switch_gen__ModuleInfo_35);
    }
#line 517 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MLDS_Type_17)) == (MR_mktag((MR_Integer) 2)));
#line 517 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 517 "ml_switch_gen.m"
      {
#line 517 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__Type_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 0)));
#line 517 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__TypeCategory_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 1)));
#line 517 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__ExportedType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 2)));
#line 516 "ml_switch_gen.m"
        {
#line 516 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_42_42 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_switch_gen__ModuleInfo_35, ml_backend__ml_switch_gen__Type_37);
        }
#line 516 "ml_switch_gen.m"
        {
#line 516 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__succeeded = backend_libs__foreign____Unify____exported_type_0_0(ml_backend__ml_switch_gen__ExportedType_36, ml_backend__ml_switch_gen__V_42_42);
        }
#line 515 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 518 "ml_switch_gen.m"
          {
#line 518 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__type_range_6_p_0(ml_backend__ml_switch_gen__ModuleInfo_35, ml_backend__ml_switch_gen__TypeCategory_38, ml_backend__ml_switch_gen__Type_37, &ml_backend__ml_switch_gen__MinRange_39, &ml_backend__ml_switch_gen__MaxRange_40, &ml_backend__ml_switch_gen___NumValuesInRange_41);
          }
#line 517 "ml_switch_gen.m"
      }
#line 522 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 521 "ml_switch_gen.m"
      {
#line 521 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__Range_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "ml_switch_gen.m"
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_20, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MinRange_39));
#line 521 "ml_switch_gen.m"
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_20, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MaxRange_40));
#line 521 "ml_switch_gen.m"
      }
#line 522 "ml_switch_gen.m"
    else
#line 523 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__Range_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "ml_switch_gen.m"
    {
#line 502 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(ml_backend__ml_switch_gen__MLDS_Type_17, ml_backend__ml_switch_gen__Cases_9, ml_backend__ml_switch_gen__CodeModel_11, &ml_backend__ml_switch_gen__MLDS_Cases_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28);
    }
#line 504 "ml_switch_gen.m"
    {
#line 504 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__CodeModel_11, ml_backend__ml_switch_gen__Context_13, &ml_backend__ml_switch_gen__Default_22, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29);
    }
#line 505 "ml_switch_gen.m"
    {
#line 505 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__SwitchStmt0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 505 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 505 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_17));
#line 505 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_19));
#line 505 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Range_20));
#line 505 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 4) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_21));
#line 505 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 5) = ((MR_Box) (ml_backend__ml_switch_gen__Default_22));
#line 505 "ml_switch_gen.m"
    }
#line 506 "ml_switch_gen.m"
    {
#line 506 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__MLDS_Context_24 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_13);
    }
#line 507 "ml_switch_gen.m"
    {
#line 507 "ml_switch_gen.m"
      ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_switch_gen__SwitchStmt0_23, ml_backend__ml_switch_gen__MLDS_Context_24, &ml_backend__ml_switch_gen__SwitchStatement_25, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27);
    }
#line 508 "ml_switch_gen.m"
    {
#line 508 "ml_switch_gen.m"
      MR_Word base;
#line 508 "ml_switch_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__Statements_14 = base;
#line 508 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchStatement_25));
#line 508 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "ml_switch_gen.m"
    }
#line 496 "ml_switch_gen.m"
  }
#line 491 "ml_switch_gen.m"
}

#line 472 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__FirstExpr_4,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__LaterExprs_5,
#line 472 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Expr_6)
#line 472 "ml_switch_gen.m"
{
#line 477 "ml_switch_gen.m"
  while (MR_TRUE)
#line 477 "ml_switch_gen.m"
    {
#line 477 "ml_switch_gen.m"
      /* tailcall optimized into a loop */
#line 477 "ml_switch_gen.m"
      {
#line 477 "ml_switch_gen.m"
        MR_bool ml_backend__ml_switch_gen__succeeded;

#line 477 "ml_switch_gen.m"
        if ((ml_backend__ml_switch_gen__LaterExprs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Expr_6 = ml_backend__ml_switch_gen__FirstExpr_4;
#line 477 "ml_switch_gen.m"
        else
#line 480 "ml_switch_gen.m"
          {
#line 480 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__SecondExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__LaterExprs_5, (MR_Integer) 0)));
#line 480 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__OtherExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__LaterExprs_5, (MR_Integer) 1)));
#line 480 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FirstSecondExpr_9;

#line 481 "ml_switch_gen.m"
            {
#line 481 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__FirstSecondExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 481 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 481 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 481 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 2) = ((MR_Box) (ml_backend__ml_switch_gen__FirstExpr_4));
#line 481 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 3) = ((MR_Box) (ml_backend__ml_switch_gen__SecondExpr_7));
#line 481 "ml_switch_gen.m"
            }
#line 482 "ml_switch_gen.m"
            /* direct tailcall eliminated */
#line 482 "ml_switch_gen.m"
            {
#line 482 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__FirstExpr__tmp_copy_4 = ml_backend__ml_switch_gen__FirstSecondExpr_9;
#line 482 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__LaterExprs__tmp_copy_5 = ml_backend__ml_switch_gen__OtherExprs_8;

#line 482 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__LaterExprs_5 = ml_backend__ml_switch_gen__LaterExprs__tmp_copy_5;
#line 482 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__FirstExpr_4 = ml_backend__ml_switch_gen__FirstExpr__tmp_copy_4;
#line 482 "ml_switch_gen.m"
            }
#line 482 "ml_switch_gen.m"
            continue;
#line 480 "ml_switch_gen.m"
          }
#line 477 "ml_switch_gen.m"
      }
#line 477 "ml_switch_gen.m"
      break;
#line 477 "ml_switch_gen.m"
    }
#line 472 "ml_switch_gen.m"
}

#line 464 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 464 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 464 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4)
#line 464 "ml_switch_gen.m"
{
#line 464 "ml_switch_gen.m"
  {
#line 464 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 464 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv4_HeadVar__3_3;
#line 464 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv3_HeadVar__5_5;

#line 464 "ml_switch_gen.m"
    {
#line 464 "ml_switch_gen.m"
      ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv4_HeadVar__3_3, ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_3), &ml_backend__ml_switch_gen__conv3_HeadVar__5_5);
    }
#line 464 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv4_HeadVar__3_3));
#line 464 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_switch_gen__conv3_HeadVar__5_5));
#line 464 "ml_switch_gen.m"
  }
#line 464 "ml_switch_gen.m"
}

#line 464 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 464 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 464 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 464 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4)
#line 464 "ml_switch_gen.m"
{
#line 464 "ml_switch_gen.m"
  {
#line 464 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 464 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv1_HeadVar__3_3;
#line 464 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__5_5;

#line 464 "ml_switch_gen.m"
    {
#line 464 "ml_switch_gen.m"
      ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv1_HeadVar__3_3, ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_3), &ml_backend__ml_switch_gen__conv0_HeadVar__5_5);
    }
#line 464 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv1_HeadVar__3_3));
#line 464 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__5_5));
#line 464 "ml_switch_gen.m"
  }
#line 464 "ml_switch_gen.m"
}

#line 399 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_10,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_11,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_12,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_13,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 399 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__7_7,
#line 399 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31,
#line 399 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32)
#line 399 "ml_switch_gen.m"
{
#line 405 "ml_switch_gen.m"
  {
#line 405 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 405 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Statement_16;
#line 405 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 0)));
#line 405 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 1)));
#line 405 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 3)));
#line 406 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 2)));

#line 436 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__TaggedCases_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "ml_switch_gen.m"
      if ((ml_backend__ml_switch_gen__CanFail_14 == (MR_Integer) 0))
#line 416 "ml_switch_gen.m"
        {
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__Cond_22;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__GoalBlock_23;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__FailStatements_24;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__FailBlock_25;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__Stmt_26;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_44_44;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_45_45;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__MainTagTestRval_60;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__OtherTagTestRval_61;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62;
#line 416 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_63_63;
#line 464 "ml_switch_gen.m"
          MR_Box ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40;

#line 462 "ml_switch_gen.m"
          {
#line 462 "ml_switch_gen.m"
            ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__V_18_18, &ml_backend__ml_switch_gen__MainTagTestRval_60, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62);
          }
#line 464 "ml_switch_gen.m"
          {
#line 464 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0]));
#line 464 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1));
#line 464 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 464 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Var_12));
#line 464 "ml_switch_gen.m"
          }
#line 464 "ml_switch_gen.m"
          {
#line 464 "ml_switch_gen.m"
            mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_switch_gen__V_63_63, ml_backend__ml_switch_gen__V_19_19, &ml_backend__ml_switch_gen__OtherTagTestRval_61, ((MR_Box) (ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62)), &ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40);
          }
#line 464 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40 = ((MR_Word) ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40);
#line 466 "ml_switch_gen.m"
          {
#line 466 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__chain_ors_3_p_0(ml_backend__ml_switch_gen__MainTagTestRval_60, ml_backend__ml_switch_gen__OtherTagTestRval_61, &ml_backend__ml_switch_gen__Cond_22);
          }
#line 425 "ml_switch_gen.m"
          {
#line 425 "ml_switch_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__GoalBlock_23, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41);
          }
#line 428 "ml_switch_gen.m"
          {
#line 428 "ml_switch_gen.m"
            ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Context_15, &ml_backend__ml_switch_gen__FailStatements_24, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
          }
#line 429 "ml_switch_gen.m"
          {
#line 429 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__FailBlock_25 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__FailStatements_24, ml_backend__ml_switch_gen__Context_15);
          }
#line 433 "ml_switch_gen.m"
          {
#line 433 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 433 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__V_44_44, 0) = ((MR_Box) (ml_backend__ml_switch_gen__FailBlock_25));
#line 433 "ml_switch_gen.m"
          }
#line 433 "ml_switch_gen.m"
          {
#line 433 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__Stmt_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 433 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cond_22));
#line 433 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 1) = ((MR_Box) (ml_backend__ml_switch_gen__GoalBlock_23));
#line 433 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 2) = ((MR_Box) (ml_backend__ml_switch_gen__V_44_44));
#line 433 "ml_switch_gen.m"
          }
#line 434 "ml_switch_gen.m"
          {
#line 434 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_45_45 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_15);
          }
#line 434 "ml_switch_gen.m"
          {
#line 434 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 434 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Stmt_26));
#line 434 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_45_45));
#line 434 "ml_switch_gen.m"
          }
#line 416 "ml_switch_gen.m"
        }
#line 415 "ml_switch_gen.m"
      else
#line 414 "ml_switch_gen.m"
        {
#line 414 "ml_switch_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__Statement_16, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
        }
#line 436 "ml_switch_gen.m"
    else
#line 437 "ml_switch_gen.m"
      {
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCase_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_11, (MR_Integer) 0)));
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_11, (MR_Integer) 1)));
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterStatements_29;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterBlock_30;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_38_38;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_39_39;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Cond_47;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__GoalBlock_48;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Stmt_49;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MainTagTestRval_82;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__OtherTagTestRval_83;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84;
#line 437 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_85_85;
#line 464 "ml_switch_gen.m"
        MR_Box ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34;

#line 462 "ml_switch_gen.m"
        {
#line 462 "ml_switch_gen.m"
          ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__V_18_18, &ml_backend__ml_switch_gen__MainTagTestRval_82, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84);
        }
#line 464 "ml_switch_gen.m"
        {
#line 464 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0]));
#line 464 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2));
#line 464 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 464 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Var_12));
#line 464 "ml_switch_gen.m"
        }
#line 464 "ml_switch_gen.m"
        {
#line 464 "ml_switch_gen.m"
          mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_switch_gen__V_85_85, ml_backend__ml_switch_gen__V_19_19, &ml_backend__ml_switch_gen__OtherTagTestRval_83, ((MR_Box) (ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84)), &ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34);
        }
#line 464 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34 = ((MR_Word) ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34);
#line 466 "ml_switch_gen.m"
        {
#line 466 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__chain_ors_3_p_0(ml_backend__ml_switch_gen__MainTagTestRval_82, ml_backend__ml_switch_gen__OtherTagTestRval_83, &ml_backend__ml_switch_gen__Cond_47);
        }
#line 444 "ml_switch_gen.m"
        {
#line 444 "ml_switch_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__GoalBlock_48, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35);
        }
#line 447 "ml_switch_gen.m"
        {
#line 447 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__LaterTaggedCase_27, ml_backend__ml_switch_gen__LaterTaggedCases_28, ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__CanFail_14, ml_backend__ml_switch_gen__Context_15, &ml_backend__ml_switch_gen__LaterStatements_29, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
        }
#line 450 "ml_switch_gen.m"
        {
#line 450 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__LaterBlock_30 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__LaterStatements_29, ml_backend__ml_switch_gen__Context_15);
        }
#line 453 "ml_switch_gen.m"
        {
#line 453 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 453 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__V_38_38, 0) = ((MR_Box) (ml_backend__ml_switch_gen__LaterBlock_30));
#line 453 "ml_switch_gen.m"
        }
#line 453 "ml_switch_gen.m"
        {
#line 453 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__Stmt_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 453 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cond_47));
#line 453 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 1) = ((MR_Box) (ml_backend__ml_switch_gen__GoalBlock_48));
#line 453 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 2) = ((MR_Box) (ml_backend__ml_switch_gen__V_38_38));
#line 453 "ml_switch_gen.m"
        }
#line 454 "ml_switch_gen.m"
        {
#line 454 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_39_39 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_15);
        }
#line 454 "ml_switch_gen.m"
        {
#line 454 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 454 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Stmt_49));
#line 454 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_39_39));
#line 454 "ml_switch_gen.m"
        }
#line 437 "ml_switch_gen.m"
      }
#line 405 "ml_switch_gen.m"
    {
#line 405 "ml_switch_gen.m"
      MR_Word base;
#line 405 "ml_switch_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__HeadVar__7_7 = base;
#line 405 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Statement_16));
#line 405 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "ml_switch_gen.m"
    }
#line 405 "ml_switch_gen.m"
  }
#line 399 "ml_switch_gen.m"
}

#line 383 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
#line 383 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 383 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 383 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 383 "ml_switch_gen.m"
{
#line 383 "ml_switch_gen.m"
  {
#line 383 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 383 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

#line 383 "ml_switch_gen.m"
    {
#line 383 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    }
#line 383 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
#line 383 "ml_switch_gen.m"
  }
#line 383 "ml_switch_gen.m"
}

#line 376 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases0_9,
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 376 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 376 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21,
#line 376 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22)
#line 376 "ml_switch_gen.m"
{
#line 381 "ml_switch_gen.m"
  {
#line 381 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 381 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 381 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeInfo_31_31 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
#line 381 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_16;
#line 381 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__CostTaggedCases_17;
#line 381 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedCases_18;

#line 383 "ml_switch_gen.m"
    {
#line 383 "ml_switch_gen.m"
      mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_30_30, ml_backend__ml_switch_gen__TypeInfo_31_31, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[5], ml_backend__ml_switch_gen__TaggedCases0_9, &ml_backend__ml_switch_gen__CostTaggedCases0_16);
    }
#line 386 "ml_switch_gen.m"
    {
#line 386 "ml_switch_gen.m"
      mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_31_31, ml_backend__ml_switch_gen__CostTaggedCases0_16, &ml_backend__ml_switch_gen__CostTaggedCases_17);
    }
#line 387 "ml_switch_gen.m"
    {
#line 387 "ml_switch_gen.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_30_30, ml_backend__ml_switch_gen__CostTaggedCases_17, &ml_backend__ml_switch_gen__TaggedCases_18);
    }
#line 392 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__TaggedCases_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "ml_switch_gen.m"
      {
#line 391 "ml_switch_gen.m"
        {
#line 391 "ml_switch_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
#line 391 "ml_switch_gen.m"
          return;
        }
#line 390 "ml_switch_gen.m"
      }
#line 392 "ml_switch_gen.m"
    else
#line 393 "ml_switch_gen.m"
      {
#line 393 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_18, (MR_Integer) 0)));
#line 393 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_18, (MR_Integer) 1)));

#line 394 "ml_switch_gen.m"
        {
#line 394 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_19, ml_backend__ml_switch_gen__LaterTaggedCases_20, ml_backend__ml_switch_gen__Var_10, ml_backend__ml_switch_gen__CodeModel_11, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_13, ml_backend__ml_switch_gen__Statements_14, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22);
#line 394 "ml_switch_gen.m"
          return;
        }
#line 393 "ml_switch_gen.m"
      }
#line 381 "ml_switch_gen.m"
  }
#line 376 "ml_switch_gen.m"
}

#line 364 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
#line 364 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_4,
#line 364 "ml_switch_gen.m"
  MR_Integer ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9,
#line 364 "ml_switch_gen.m"
  MR_Integer * ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10)
#line 364 "ml_switch_gen.m"
{
#line 367 "ml_switch_gen.m"
  {
#line 367 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 367 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_4, (MR_Integer) 1)));
#line 367 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__ConsIdCost_8;
#line 368 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___ConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_4, (MR_Integer) 0)));

#line 369 "ml_switch_gen.m"
    {
#line 369 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ConsIdCost_8 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ml_backend__ml_switch_gen__ConsTag_7);
    }
#line 370 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10 = (ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9 + ml_backend__ml_switch_gen__ConsIdCost_8);
#line 367 "ml_switch_gen.m"
  }
#line 364 "ml_switch_gen.m"
}

#line 361 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
#line 361 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 361 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 361 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_2,
#line 361 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_3)
#line 361 "ml_switch_gen.m"
{
#line 361 "ml_switch_gen.m"
  {
#line 361 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 361 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10;

#line 361 "ml_switch_gen.m"
    {
#line 361 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), ((MR_Integer) ml_backend__ml_switch_gen__wrapper_arg_2), &ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10);
    }
#line 361 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10));
#line 361 "ml_switch_gen.m"
  }
#line 361 "ml_switch_gen.m"
}

#line 354 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
#line 354 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_3,
#line 354 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__2_2)
#line 354 "ml_switch_gen.m"
{
#line 357 "ml_switch_gen.m"
  {
#line 357 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 357 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__Cost_4;
#line 357 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedMainConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 0)));
#line 357 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedOtherConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 1)));
#line 357 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MainCost_9;
#line 357 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedMainConsId_5, (MR_Integer) 1)));
#line 357 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__ConsIdCost_23;
#line 358 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen___CaseNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 2)));
#line 358 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 3)));
#line 368 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedMainConsId_5, (MR_Integer) 0)));
#line 361 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__conv1_Cost_4;

#line 369 "ml_switch_gen.m"
    {
#line 369 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ConsIdCost_23 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ml_backend__ml_switch_gen__ConsTag_22);
    }
#line 370 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__MainCost_9 = ((MR_Integer) 0 + ml_backend__ml_switch_gen__ConsIdCost_23);
#line 361 "ml_switch_gen.m"
    {
#line 361 "ml_switch_gen.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[4], ml_backend__ml_switch_gen__TaggedOtherConsIds_6, ((MR_Box) (ml_backend__ml_switch_gen__MainCost_9)), &ml_backend__ml_switch_gen__conv1_Cost_4);
    }
#line 361 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__Cost_4 = ((MR_Integer) ml_backend__ml_switch_gen__conv1_Cost_4);
#line 357 "ml_switch_gen.m"
    {
#line 357 "ml_switch_gen.m"
      MR_Word base;
#line 357 "ml_switch_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 357 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__HeadVar__2_2 = base;
#line 357 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cost_4));
#line 357 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_switch_gen__TaggedCase_3));
#line 357 "ml_switch_gen.m"
    }
#line 357 "ml_switch_gen.m"
  }
#line 354 "ml_switch_gen.m"
}

#line 121 "ml_switch_gen.m"
void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(
#line 121 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_7,
#line 121 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_8,
#line 121 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_9,
#line 121 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Default_10,
#line 121 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14,
#line 121 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15)
#line 121 "ml_switch_gen.m"
{
#line 599 "ml_switch_gen.m"
  {
#line 599 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;

#line 599 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__CanFail_7 == (MR_Integer) 0))
#line 599 "ml_switch_gen.m"
      {
#line 599 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__FailStatements_12;

#line 600 "ml_switch_gen.m"
        {
#line 600 "ml_switch_gen.m"
          ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_switch_gen__CodeModel_8, ml_backend__ml_switch_gen__Context_9, &ml_backend__ml_switch_gen__FailStatements_12, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15);
        }
#line 601 "ml_switch_gen.m"
        {
#line 601 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__succeeded = mercury__list__is_empty_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_switch_gen__FailStatements_12);
        }
#line 603 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 602 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 603 "ml_switch_gen.m"
        else
#line 604 "ml_switch_gen.m"
          {
#line 604 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Fail_13;

#line 604 "ml_switch_gen.m"
            {
#line 604 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__Fail_13 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__FailStatements_12, ml_backend__ml_switch_gen__Context_9);
            }
#line 605 "ml_switch_gen.m"
            *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_switch_gen__Fail_13);
#line 604 "ml_switch_gen.m"
          }
#line 599 "ml_switch_gen.m"
      }
#line 599 "ml_switch_gen.m"
    else
#line 608 "ml_switch_gen.m"
      {
#line 609 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15 = ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14;
#line 608 "ml_switch_gen.m"
      }
#line 599 "ml_switch_gen.m"
  }
#line 121 "ml_switch_gen.m"
}

#line 301 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_3(
#line 301 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 301 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 301 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 301 "ml_switch_gen.m"
{
#line 301 "ml_switch_gen.m"
  {
#line 301 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 301 "ml_switch_gen.m"
    MR_String ml_backend__ml_switch_gen__conv2_HeadVar__2_2;

#line 301 "ml_switch_gen.m"
    {
#line 301 "ml_switch_gen.m"
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv2_HeadVar__2_2);
    }
#line 301 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv2_HeadVar__2_2));
#line 301 "ml_switch_gen.m"
  }
#line 301 "ml_switch_gen.m"
}

#line 274 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
#line 274 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 274 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 274 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 274 "ml_switch_gen.m"
{
#line 274 "ml_switch_gen.m"
  {
#line 274 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 274 "ml_switch_gen.m"
    MR_String ml_backend__ml_switch_gen__conv1_HeadVar__2_2;

#line 274 "ml_switch_gen.m"
    {
#line 274 "ml_switch_gen.m"
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv1_HeadVar__2_2);
    }
#line 274 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv1_HeadVar__2_2));
#line 274 "ml_switch_gen.m"
  }
#line 274 "ml_switch_gen.m"
}

#line 218 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
#line 218 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 218 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 218 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 218 "ml_switch_gen.m"
{
#line 218 "ml_switch_gen.m"
  {
#line 218 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 218 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

#line 218 "ml_switch_gen.m"
    {
#line 218 "ml_switch_gen.m"
      backend_libs__switch_util__get_int_tag_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    }
#line 218 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
#line 218 "ml_switch_gen.m"
  }
#line 218 "ml_switch_gen.m"
}

#line 114 "ml_switch_gen.m"
void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(
#line 114 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_11,
#line 114 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 114 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_13,
#line 114 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_14,
#line 114 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 114 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_16,
#line 114 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_17,
#line 114 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_18,
#line 114 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52,
#line 114 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53)
#line 114 "ml_switch_gen.m"
{
#line 158 "ml_switch_gen.m"
  {
#line 158 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_20;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchVarType_21;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchVarTypeCtor_22;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedCases_23;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_24;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeCtorCategory_25;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchCategory_26;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Globals_27;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Indexing_28;

#line 162 "ml_switch_gen.m"
    {
#line 162 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, &ml_backend__ml_switch_gen__ModuleInfo_20);
    }
#line 163 "ml_switch_gen.m"
    {
#line 163 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__SwitchVar_11, &ml_backend__ml_switch_gen__SwitchVarType_21);
    }
#line 164 "ml_switch_gen.m"
    {
#line 164 "ml_switch_gen.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ml_backend__ml_switch_gen__SwitchVarType_21, &ml_backend__ml_switch_gen__SwitchVarTypeCtor_22);
    }
#line 165 "ml_switch_gen.m"
    {
#line 165 "ml_switch_gen.m"
      backend_libs__switch_util__tag_cases_5_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, ml_backend__ml_switch_gen__Cases_13, &ml_backend__ml_switch_gen__TaggedCases_23, &ml_backend__ml_switch_gen__MaybeIntSwitchInfo_24);
    }
#line 169 "ml_switch_gen.m"
    {
#line 169 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__TypeCtorCategory_25 = check_hlds__type_util__classify_type_2_f_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21);
    }
#line 170 "ml_switch_gen.m"
    {
#line 170 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__SwitchCategory_26 = backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_f_0(ml_backend__ml_switch_gen__TypeCtorCategory_25);
    }
#line 171 "ml_switch_gen.m"
    {
#line 171 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, &ml_backend__ml_switch_gen__Globals_27);
    }
#line 172 "ml_switch_gen.m"
    {
#line 172 "ml_switch_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, (MR_Integer) 428, &ml_backend__ml_switch_gen__Indexing_28);
    }
#line 175 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__Indexing_28 == (MR_Integer) 0);
#line 176 "ml_switch_gen.m"
    if (!(ml_backend__ml_switch_gen__succeeded))
#line 176 "ml_switch_gen.m"
      {
#line 180 "ml_switch_gen.m"
        {
#line 180 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__TypeTable_29;
#line 180 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__SwitchVarTypeDefn_30;
#line 180 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__SwitchVarTypeBody_31;
#line 180 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_55_55;
#line 184 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_126_126;
#line 184 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_127_127;
#line 184 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_128_128;
#line 184 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_129_129;
#line 184 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_130_130;
#line 184 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_131_131;
#line 184 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_132_132;
#line 184 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_133_133;

#line 180 "ml_switch_gen.m"
          {
#line 180 "ml_switch_gen.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, &ml_backend__ml_switch_gen__TypeTable_29);
          }
#line 181 "ml_switch_gen.m"
          {
#line 181 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ml_backend__ml_switch_gen__TypeTable_29, ml_backend__ml_switch_gen__SwitchVarTypeCtor_22, &ml_backend__ml_switch_gen__SwitchVarTypeDefn_30);
          }
#line 180 "ml_switch_gen.m"
          if (ml_backend__ml_switch_gen__succeeded)
#line 180 "ml_switch_gen.m"
            {
#line 183 "ml_switch_gen.m"
              {
#line 183 "ml_switch_gen.m"
                hlds__hlds_data__get_type_defn_body_2_p_0(ml_backend__ml_switch_gen__SwitchVarTypeDefn_30, &ml_backend__ml_switch_gen__SwitchVarTypeBody_31);
              }
#line 184 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__SwitchVarTypeBody_31)) == (MR_mktag((MR_Integer) 1)));
#line 184 "ml_switch_gen.m"
              if (ml_backend__ml_switch_gen__succeeded)
#line 184 "ml_switch_gen.m"
                {
#line 184 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarTypeBody_31, (MR_Integer) 0)));
#line 184 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarTypeBody_31, (MR_Integer) 1)));
#line 184 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarTypeBody_31, (MR_Integer) 2)));
#line 184 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarTypeBody_31, (MR_Integer) 3)));
#line 184 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarTypeBody_31, (MR_Integer) 4)));
#line 184 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarTypeBody_31, (MR_Integer) 5)));
#line 184 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_132_132 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarTypeBody_31, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 184 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarTypeBody_31, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 184 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarTypeBody_31, (MR_Integer) 7)));
#line 184 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_55_55 == (MR_Integer) 0);
#line 184 "ml_switch_gen.m"
                }
#line 180 "ml_switch_gen.m"
            }
#line 180 "ml_switch_gen.m"
        }
#line 176 "ml_switch_gen.m"
        if (!(ml_backend__ml_switch_gen__succeeded))
#line 186 "ml_switch_gen.m"
          {
#line 186 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__is_smart_indexing_disabled_category_2_p_0(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__SwitchCategory_26);
          }
#line 176 "ml_switch_gen.m"
      }
#line 195 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 193 "ml_switch_gen.m"
      {
#line 192 "ml_switch_gen.m"
        {
#line 192 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_23, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
        }
#line 194 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "ml_switch_gen.m"
      }
#line 195 "ml_switch_gen.m"
    else
#line 236 "ml_switch_gen.m"
      if ((ml_backend__ml_switch_gen__SwitchCategory_26 == (MR_Integer) 0))
#line 197 "ml_switch_gen.m"
        {
#line 197 "ml_switch_gen.m"
          MR_Integer ml_backend__ml_switch_gen__NumConsIds_32;
#line 197 "ml_switch_gen.m"
          MR_Integer ml_backend__ml_switch_gen__NumArms_33;
#line 226 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__NeedBitVecCheck_41;
#line 226 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__NeedRangeCheck_42;
#line 226 "ml_switch_gen.m"
          MR_Integer ml_backend__ml_switch_gen__FirstVal_43;
#line 226 "ml_switch_gen.m"
          MR_Integer ml_backend__ml_switch_gen__LastVal_44;
#line 226 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_46;
#line 226 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_96_96;
#line 200 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_136_136;
#line 200 "ml_switch_gen.m"
          MR_Integer ml_backend__ml_switch_gen__LowerLimit_34;
#line 200 "ml_switch_gen.m"
          MR_Integer ml_backend__ml_switch_gen__UpperLimit_35;
#line 200 "ml_switch_gen.m"
          MR_Integer ml_backend__ml_switch_gen__NumValues_36;
#line 200 "ml_switch_gen.m"
          MR_Integer ml_backend__ml_switch_gen__LookupSize_37;
#line 200 "ml_switch_gen.m"
          MR_Integer ml_backend__ml_switch_gen__ReqDensity_38;
#line 200 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__FilteredTaggedCases_39;
#line 200 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__FilteredCanFail_40;
#line 200 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__NonLocals_45;
#line 200 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_90_90;
#line 200 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_91_91;
#line 200 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_92_92;
#line 200 "ml_switch_gen.m"
          MR_Integer ml_backend__ml_switch_gen__V_93_93;
#line 200 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_94_94;
#line 200 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_95_95;
#line 200 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_143_143;

#line 198 "ml_switch_gen.m"
          {
#line 198 "ml_switch_gen.m"
            backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__TaggedCases_23, &ml_backend__ml_switch_gen__NumConsIds_32, &ml_backend__ml_switch_gen__NumArms_33);
          }
#line 200 "ml_switch_gen.m"
          {
#line 200 "ml_switch_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, &ml_backend__ml_switch_gen__V_143_143);
          }
#line 200 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_switch_gen__V_143_143);
#line 200 "ml_switch_gen.m"
          if (ml_backend__ml_switch_gen__succeeded)
#line 200 "ml_switch_gen.m"
            {
#line 201 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MaybeIntSwitchInfo_24)) == (MR_mktag((MR_Integer) 1)));
#line 201 "ml_switch_gen.m"
              if (ml_backend__ml_switch_gen__succeeded)
#line 201 "ml_switch_gen.m"
                {
#line 201 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__LowerLimit_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 0)));
#line 201 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__UpperLimit_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 1)));
#line 201 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__NumValues_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 2)));
#line 203 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_90_90 = (MR_Integer) 444;
#line 203 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_91_91 = (MR_Integer) 1;
#line 203 "ml_switch_gen.m"
                  {
#line 203 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_90_90, ml_backend__ml_switch_gen__V_91_91);
                  }
#line 200 "ml_switch_gen.m"
                  if (ml_backend__ml_switch_gen__succeeded)
#line 200 "ml_switch_gen.m"
                    {
#line 204 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__V_92_92 = (MR_Integer) 432;
#line 204 "ml_switch_gen.m"
                      {
#line 204 "ml_switch_gen.m"
                        libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_92_92, &ml_backend__ml_switch_gen__LookupSize_37);
                      }
#line 206 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_32 >= ml_backend__ml_switch_gen__LookupSize_37);
#line 200 "ml_switch_gen.m"
                      if (ml_backend__ml_switch_gen__succeeded)
#line 200 "ml_switch_gen.m"
                        {
#line 207 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__V_93_93 = (MR_Integer) 1;
#line 207 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_33 > ml_backend__ml_switch_gen__V_93_93);
#line 200 "ml_switch_gen.m"
                          if (ml_backend__ml_switch_gen__succeeded)
#line 200 "ml_switch_gen.m"
                            {
#line 208 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__V_94_94 = (MR_Integer) 430;
#line 208 "ml_switch_gen.m"
                              {
#line 208 "ml_switch_gen.m"
                                libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_94_94, &ml_backend__ml_switch_gen__ReqDensity_38);
                              }
#line 210 "ml_switch_gen.m"
                              {
#line 210 "ml_switch_gen.m"
                                backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__TaggedCases_23, &ml_backend__ml_switch_gen__FilteredTaggedCases_39, ml_backend__ml_switch_gen__CanFail_12, &ml_backend__ml_switch_gen__FilteredCanFail_40);
                              }
#line 213 "ml_switch_gen.m"
                              {
#line 213 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, ml_backend__ml_switch_gen__FilteredCanFail_40, ml_backend__ml_switch_gen__LowerLimit_34, ml_backend__ml_switch_gen__UpperLimit_35, ml_backend__ml_switch_gen__NumValues_36, ml_backend__ml_switch_gen__ReqDensity_38, &ml_backend__ml_switch_gen__NeedBitVecCheck_41, &ml_backend__ml_switch_gen__NeedRangeCheck_42, &ml_backend__ml_switch_gen__FirstVal_43, &ml_backend__ml_switch_gen__LastVal_44);
                              }
#line 200 "ml_switch_gen.m"
                              if (ml_backend__ml_switch_gen__succeeded)
#line 200 "ml_switch_gen.m"
                                {
#line 217 "ml_switch_gen.m"
                                  {
#line 217 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__NonLocals_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_switch_gen__GoalInfo_16);
                                  }
#line 218 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__V_95_95 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[1];
#line 2330 "ml_backend.ml_switch_gen.c"
                                  ml_backend__ml_switch_gen__TypeCtorInfo_136_136 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 218 "ml_switch_gen.m"
                                  {
#line 218 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__succeeded = ml_backend__ml_lookup_switch__ml_is_lookup_switch_8_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_136_136, ml_backend__ml_switch_gen__V_95_95, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__FilteredTaggedCases_39, ml_backend__ml_switch_gen__NonLocals_45, ml_backend__ml_switch_gen__CodeModel_14, &ml_backend__ml_switch_gen__LookupSwitchInfo_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_96_96);
                                  }
#line 200 "ml_switch_gen.m"
                                }
#line 200 "ml_switch_gen.m"
                            }
#line 200 "ml_switch_gen.m"
                        }
#line 200 "ml_switch_gen.m"
                    }
#line 201 "ml_switch_gen.m"
                }
#line 200 "ml_switch_gen.m"
            }
#line 226 "ml_switch_gen.m"
          if (ml_backend__ml_switch_gen__succeeded)
#line 224 "ml_switch_gen.m"
            {
#line 224 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__LookupStatement_47;

#line 222 "ml_switch_gen.m"
              {
#line 222 "ml_switch_gen.m"
                ml_backend__ml_lookup_switch__ml_gen_lookup_switch_11_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__LookupSwitchInfo_46, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__FirstVal_43, ml_backend__ml_switch_gen__LastVal_44, ml_backend__ml_switch_gen__NeedBitVecCheck_41, ml_backend__ml_switch_gen__NeedRangeCheck_42, &ml_backend__ml_switch_gen__LookupStatement_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_96_96, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
              }
#line 225 "ml_switch_gen.m"
              {
#line 225 "ml_switch_gen.m"
                MR_Word base;
#line 225 "ml_switch_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "ml_switch_gen.m"
                *ml_backend__ml_switch_gen__Statements_18 = base;
#line 225 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__LookupStatement_47));
#line 225 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 225 "ml_switch_gen.m"
              }
#line 224 "ml_switch_gen.m"
            }
#line 226 "ml_switch_gen.m"
          else
#line 231 "ml_switch_gen.m"
            {
#line 227 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__V_99_99;

#line 227 "ml_switch_gen.m"
              {
#line 227 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__V_99_99 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_27);
              }
#line 227 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_99_99 == (MR_Integer) 1);
#line 231 "ml_switch_gen.m"
              if (ml_backend__ml_switch_gen__succeeded)
#line 229 "ml_switch_gen.m"
                {
#line 229 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(ml_backend__ml_switch_gen__TaggedCases_23, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
                }
#line 231 "ml_switch_gen.m"
              else
#line 232 "ml_switch_gen.m"
                {
#line 232 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_23, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
                }
#line 231 "ml_switch_gen.m"
            }
#line 235 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "ml_switch_gen.m"
        }
#line 236 "ml_switch_gen.m"
      else
#line 236 "ml_switch_gen.m"
        if ((ml_backend__ml_switch_gen__SwitchCategory_26 == (MR_Integer) 3))
#line 342 "ml_switch_gen.m"
          {
#line 343 "ml_switch_gen.m"
            {
#line 343 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_23, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
            }
#line 345 "ml_switch_gen.m"
            *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 342 "ml_switch_gen.m"
          }
#line 236 "ml_switch_gen.m"
        else
#line 236 "ml_switch_gen.m"
          if ((ml_backend__ml_switch_gen__SwitchCategory_26 == (MR_Integer) 1))
#line 237 "ml_switch_gen.m"
            {
#line 237 "ml_switch_gen.m"
              MR_Integer ml_backend__ml_switch_gen__NumConsIds_118;
#line 237 "ml_switch_gen.m"
              MR_Integer ml_backend__ml_switch_gen__NumArms_119;
#line 237 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__FilteredTaggedCases_120;
#line 237 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__FilteredCanFail_121;

#line 238 "ml_switch_gen.m"
              {
#line 238 "ml_switch_gen.m"
                backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__TaggedCases_23, &ml_backend__ml_switch_gen__FilteredTaggedCases_120, ml_backend__ml_switch_gen__CanFail_12, &ml_backend__ml_switch_gen__FilteredCanFail_121);
              }
#line 240 "ml_switch_gen.m"
              {
#line 240 "ml_switch_gen.m"
                backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_120, &ml_backend__ml_switch_gen__NumConsIds_118, &ml_backend__ml_switch_gen__NumArms_119);
              }
#line 242 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_119 > (MR_Integer) 1);
#line 319 "ml_switch_gen.m"
              if (ml_backend__ml_switch_gen__succeeded)
#line 244 "ml_switch_gen.m"
                {
#line 244 "ml_switch_gen.m"
                  MR_Integer ml_backend__ml_switch_gen__StringHashSwitchSize_48;
#line 244 "ml_switch_gen.m"
                  MR_Integer ml_backend__ml_switch_gen__StringBinarySwitchSize_49;
#line 244 "ml_switch_gen.m"
                  MR_Word ml_backend__ml_switch_gen__PreferSwitch_50;
#line 250 "ml_switch_gen.m"
                  MR_Word ml_backend__ml_switch_gen__V_67_67;

#line 243 "ml_switch_gen.m"
                  {
#line 243 "ml_switch_gen.m"
                    libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, (MR_Integer) 433, &ml_backend__ml_switch_gen__StringHashSwitchSize_48);
                  }
#line 245 "ml_switch_gen.m"
                  {
#line 245 "ml_switch_gen.m"
                    libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, (MR_Integer) 434, &ml_backend__ml_switch_gen__StringBinarySwitchSize_49);
                  }
#line 247 "ml_switch_gen.m"
                  {
#line 247 "ml_switch_gen.m"
                    libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, (MR_Integer) 318, &ml_backend__ml_switch_gen__PreferSwitch_50);
                  }
#line 250 "ml_switch_gen.m"
                  {
#line 250 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_67_67 = ml_backend__ml_target_util__globals_target_supports_string_switch_1_f_0(ml_backend__ml_switch_gen__Globals_27);
                  }
#line 250 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_67_67 == (MR_Integer) 1);
#line 250 "ml_switch_gen.m"
                  if (ml_backend__ml_switch_gen__succeeded)
#line 253 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__PreferSwitch_50 == (MR_Integer) 1);
#line 259 "ml_switch_gen.m"
                  if (ml_backend__ml_switch_gen__succeeded)
#line 257 "ml_switch_gen.m"
                    {
#line 255 "ml_switch_gen.m"
                      {
#line 255 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_120, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_121, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
                      }
#line 258 "ml_switch_gen.m"
                      *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 257 "ml_switch_gen.m"
                    }
#line 259 "ml_switch_gen.m"
                  else
#line 286 "ml_switch_gen.m"
                    {
#line 260 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_118 >= ml_backend__ml_switch_gen__StringHashSwitchSize_48);
#line 260 "ml_switch_gen.m"
                      if (ml_backend__ml_switch_gen__succeeded)
#line 260 "ml_switch_gen.m"
                        {
#line 264 "ml_switch_gen.m"
                          {
#line 264 "ml_switch_gen.m"
                            MR_Word ml_backend__ml_switch_gen__V_70_70;

#line 264 "ml_switch_gen.m"
                            {
#line 264 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__V_70_70 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(ml_backend__ml_switch_gen__Globals_27);
                            }
#line 264 "ml_switch_gen.m"
                            ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_70_70 == (MR_Integer) 1);
#line 264 "ml_switch_gen.m"
                          }
#line 265 "ml_switch_gen.m"
                          if (!(ml_backend__ml_switch_gen__succeeded))
#line 266 "ml_switch_gen.m"
                            {
#line 266 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__V_69_69;

#line 266 "ml_switch_gen.m"
                              {
#line 266 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__V_69_69 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_27);
                              }
#line 266 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_69_69 == (MR_Integer) 1);
#line 266 "ml_switch_gen.m"
                            }
#line 260 "ml_switch_gen.m"
                        }
#line 286 "ml_switch_gen.m"
                      if (ml_backend__ml_switch_gen__succeeded)
#line 281 "ml_switch_gen.m"
                        {
#line 281 "ml_switch_gen.m"
                          MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_75_75;
#line 281 "ml_switch_gen.m"
                          MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_104;
#line 270 "ml_switch_gen.m"
                          MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_139_139;
#line 270 "ml_switch_gen.m"
                          MR_Word ml_backend__ml_switch_gen__V_72_72;
#line 270 "ml_switch_gen.m"
                          MR_Word ml_backend__ml_switch_gen__V_73_73;
#line 270 "ml_switch_gen.m"
                          MR_Word ml_backend__ml_switch_gen__V_74_74;
#line 270 "ml_switch_gen.m"
                          MR_Word ml_backend__ml_switch_gen__NonLocals_102;
#line 270 "ml_switch_gen.m"
                          MR_Word ml_backend__ml_switch_gen__V_144_144;

#line 270 "ml_switch_gen.m"
                          {
#line 270 "ml_switch_gen.m"
                            ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, &ml_backend__ml_switch_gen__V_144_144);
                          }
#line 270 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_switch_gen__V_144_144);
#line 270 "ml_switch_gen.m"
                          if (ml_backend__ml_switch_gen__succeeded)
#line 270 "ml_switch_gen.m"
                            {
#line 272 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__V_72_72 = (MR_Integer) 444;
#line 272 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__V_73_73 = (MR_Integer) 1;
#line 271 "ml_switch_gen.m"
                              {
#line 271 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_72_72, ml_backend__ml_switch_gen__V_73_73);
                              }
#line 270 "ml_switch_gen.m"
                              if (ml_backend__ml_switch_gen__succeeded)
#line 270 "ml_switch_gen.m"
                                {
#line 273 "ml_switch_gen.m"
                                  {
#line 273 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__NonLocals_102 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_switch_gen__GoalInfo_16);
                                  }
#line 274 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__V_74_74 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[2];
#line 2599 "ml_backend.ml_switch_gen.c"
                                  ml_backend__ml_switch_gen__TypeCtorInfo_139_139 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 274 "ml_switch_gen.m"
                                  {
#line 274 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__succeeded = ml_backend__ml_lookup_switch__ml_is_lookup_switch_8_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_139_139, ml_backend__ml_switch_gen__V_74_74, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__FilteredTaggedCases_120, ml_backend__ml_switch_gen__NonLocals_102, ml_backend__ml_switch_gen__CodeModel_14, &ml_backend__ml_switch_gen__LookupSwitchInfo_104, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_75_75);
                                  }
#line 270 "ml_switch_gen.m"
                                }
#line 270 "ml_switch_gen.m"
                            }
#line 281 "ml_switch_gen.m"
                          if (ml_backend__ml_switch_gen__succeeded)
#line 278 "ml_switch_gen.m"
                            {
#line 278 "ml_switch_gen.m"
                              ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__LookupSwitchInfo_104, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_121, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_75_75, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
#line 278 "ml_switch_gen.m"
                              return;
                            }
#line 281 "ml_switch_gen.m"
                          else
#line 282 "ml_switch_gen.m"
                            {
#line 282 "ml_switch_gen.m"
                              ml_backend__ml_string_switch__ml_generate_string_hash_jump_switch_9_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_120, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_121, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
#line 282 "ml_switch_gen.m"
                              return;
                            }
#line 281 "ml_switch_gen.m"
                        }
#line 286 "ml_switch_gen.m"
                      else
#line 313 "ml_switch_gen.m"
                        {
#line 287 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_118 >= ml_backend__ml_switch_gen__StringBinarySwitchSize_49);
#line 287 "ml_switch_gen.m"
                          if (ml_backend__ml_switch_gen__succeeded)
#line 287 "ml_switch_gen.m"
                            {
#line 291 "ml_switch_gen.m"
                              {
#line 291 "ml_switch_gen.m"
                                MR_Word ml_backend__ml_switch_gen__V_79_79;

#line 291 "ml_switch_gen.m"
                                {
#line 291 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__V_79_79 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(ml_backend__ml_switch_gen__Globals_27);
                                }
#line 291 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_79_79 == (MR_Integer) 1);
#line 291 "ml_switch_gen.m"
                              }
#line 292 "ml_switch_gen.m"
                              if (!(ml_backend__ml_switch_gen__succeeded))
#line 293 "ml_switch_gen.m"
                                {
#line 293 "ml_switch_gen.m"
                                  MR_Word ml_backend__ml_switch_gen__V_78_78;

#line 293 "ml_switch_gen.m"
                                  {
#line 293 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__V_78_78 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_27);
                                  }
#line 293 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_78_78 == (MR_Integer) 1);
#line 293 "ml_switch_gen.m"
                                }
#line 287 "ml_switch_gen.m"
                            }
#line 313 "ml_switch_gen.m"
                          if (ml_backend__ml_switch_gen__succeeded)
#line 308 "ml_switch_gen.m"
                            {
#line 308 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_84_84;
#line 308 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_107;
#line 297 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_142_142;
#line 297 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__V_81_81;
#line 297 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__V_82_82;
#line 297 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__V_83_83;
#line 297 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__NonLocals_105;
#line 297 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__V_145_145;

#line 297 "ml_switch_gen.m"
                              {
#line 297 "ml_switch_gen.m"
                                ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, &ml_backend__ml_switch_gen__V_145_145);
                              }
#line 297 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_switch_gen__V_145_145);
#line 297 "ml_switch_gen.m"
                              if (ml_backend__ml_switch_gen__succeeded)
#line 297 "ml_switch_gen.m"
                                {
#line 299 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__V_81_81 = (MR_Integer) 444;
#line 299 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__V_82_82 = (MR_Integer) 1;
#line 298 "ml_switch_gen.m"
                                  {
#line 298 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_81_81, ml_backend__ml_switch_gen__V_82_82);
                                  }
#line 297 "ml_switch_gen.m"
                                  if (ml_backend__ml_switch_gen__succeeded)
#line 297 "ml_switch_gen.m"
                                    {
#line 300 "ml_switch_gen.m"
                                      {
#line 300 "ml_switch_gen.m"
                                        ml_backend__ml_switch_gen__NonLocals_105 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_switch_gen__GoalInfo_16);
                                      }
#line 301 "ml_switch_gen.m"
                                      ml_backend__ml_switch_gen__V_83_83 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[3];
#line 2724 "ml_backend.ml_switch_gen.c"
                                      ml_backend__ml_switch_gen__TypeCtorInfo_142_142 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 301 "ml_switch_gen.m"
                                      {
#line 301 "ml_switch_gen.m"
                                        ml_backend__ml_switch_gen__succeeded = ml_backend__ml_lookup_switch__ml_is_lookup_switch_8_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_142_142, ml_backend__ml_switch_gen__V_83_83, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__FilteredTaggedCases_120, ml_backend__ml_switch_gen__NonLocals_105, ml_backend__ml_switch_gen__CodeModel_14, &ml_backend__ml_switch_gen__LookupSwitchInfo_107, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_84_84);
                                      }
#line 297 "ml_switch_gen.m"
                                    }
#line 297 "ml_switch_gen.m"
                                }
#line 308 "ml_switch_gen.m"
                              if (ml_backend__ml_switch_gen__succeeded)
#line 305 "ml_switch_gen.m"
                                {
#line 305 "ml_switch_gen.m"
                                  ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__LookupSwitchInfo_107, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_121, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_84_84, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
#line 305 "ml_switch_gen.m"
                                  return;
                                }
#line 308 "ml_switch_gen.m"
                              else
#line 309 "ml_switch_gen.m"
                                {
#line 309 "ml_switch_gen.m"
                                  ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_9_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_120, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_121, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
#line 309 "ml_switch_gen.m"
                                  return;
                                }
#line 308 "ml_switch_gen.m"
                            }
#line 313 "ml_switch_gen.m"
                          else
#line 316 "ml_switch_gen.m"
                            {
#line 314 "ml_switch_gen.m"
                              {
#line 314 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_120, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_121, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
                              }
#line 317 "ml_switch_gen.m"
                              *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "ml_switch_gen.m"
                            }
#line 313 "ml_switch_gen.m"
                        }
#line 286 "ml_switch_gen.m"
                    }
#line 244 "ml_switch_gen.m"
                }
#line 319 "ml_switch_gen.m"
              else
#line 322 "ml_switch_gen.m"
                {
#line 320 "ml_switch_gen.m"
                  {
#line 320 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_120, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_121, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
                  }
#line 323 "ml_switch_gen.m"
                  *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 322 "ml_switch_gen.m"
                }
#line 237 "ml_switch_gen.m"
            }
#line 236 "ml_switch_gen.m"
          else
#line 326 "ml_switch_gen.m"
            {
#line 326 "ml_switch_gen.m"
              MR_Integer ml_backend__ml_switch_gen__TagSize_51;
#line 326 "ml_switch_gen.m"
              MR_Integer ml_backend__ml_switch_gen__NumConsIds_124;
#line 326 "ml_switch_gen.m"
              MR_Integer ml_backend__ml_switch_gen__NumArms_125;
#line 330 "ml_switch_gen.m"
              MR_Integer ml_backend__ml_switch_gen__V_59_59;
#line 330 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__V_60_60;

#line 327 "ml_switch_gen.m"
              {
#line 327 "ml_switch_gen.m"
                backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__TaggedCases_23, &ml_backend__ml_switch_gen__NumConsIds_124, &ml_backend__ml_switch_gen__NumArms_125);
              }
#line 328 "ml_switch_gen.m"
              {
#line 328 "ml_switch_gen.m"
                libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, (MR_Integer) 435, &ml_backend__ml_switch_gen__TagSize_51);
              }
#line 330 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_124 >= ml_backend__ml_switch_gen__TagSize_51);
#line 330 "ml_switch_gen.m"
              if (ml_backend__ml_switch_gen__succeeded)
#line 330 "ml_switch_gen.m"
                {
#line 331 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_59_59 = (MR_Integer) 1;
#line 331 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_125 > ml_backend__ml_switch_gen__V_59_59);
#line 330 "ml_switch_gen.m"
                  if (ml_backend__ml_switch_gen__succeeded)
#line 330 "ml_switch_gen.m"
                    {
#line 332 "ml_switch_gen.m"
                      {
#line 332 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__V_60_60 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_27);
                      }
#line 332 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_60_60 == (MR_Integer) 1);
#line 330 "ml_switch_gen.m"
                    }
#line 330 "ml_switch_gen.m"
                }
#line 336 "ml_switch_gen.m"
              if (ml_backend__ml_switch_gen__succeeded)
#line 334 "ml_switch_gen.m"
                {
#line 334 "ml_switch_gen.m"
                  ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0(ml_backend__ml_switch_gen__TaggedCases_23, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
                }
#line 336 "ml_switch_gen.m"
              else
#line 337 "ml_switch_gen.m"
                {
#line 337 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_23, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_52, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_53);
                }
#line 340 "ml_switch_gen.m"
              *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "ml_switch_gen.m"
            }
#line 158 "ml_switch_gen.m"
  }
#line 114 "ml_switch_gen.m"
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
