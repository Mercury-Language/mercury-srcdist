/*
** Automatically generated from `ml_switch_gen.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "set_tree234.mih"
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




#line 155 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0;

#line 158 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 532 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(
#line 532 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_4,
#line 532 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_5,
#line 532 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__MatchCond_6);

#line 527 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1(
#line 527 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 527 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 527 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 507 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(
#line 507 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_1,
#line 507 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__HeadVar__2_2,
#line 507 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_3,
#line 507 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__4_4,
#line 507 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5,
#line 507 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6);

#line 472 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_9,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 472 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26,
#line 472 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27);

#line 453 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
#line 453 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__FirstExpr_4,
#line 453 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__LaterExprs_5,
#line 453 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Expr_6);

#line 445 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 445 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 445 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4);

#line 445 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 445 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 445 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4);

#line 380 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_10,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_11,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_12,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_13,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 380 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__7_7,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31,
#line 380 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);

#line 364 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
#line 364 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 364 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 364 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 357 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases0_9,
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 357 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21,
#line 357 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22);

#line 345 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
#line 345 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_4,
#line 345 "ml_switch_gen.m"
  MR_Integer ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9,
#line 345 "ml_switch_gen.m"
  MR_Integer * ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10);

#line 342 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
#line 342 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 342 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 342 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_2,
#line 342 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_3);

#line 335 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
#line 335 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_3,
#line 335 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__2_2);

#line 282 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_3(
#line 282 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 282 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 282 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 255 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
#line 255 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 255 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 255 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 199 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
#line 199 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 199 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 199 "ml_switch_gen.m"
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



#line 497 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0
  }
};

#line 506 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 532 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(
#line 532 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_4,
#line 532 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_5,
#line 532 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__MatchCond_6)
#line 532 "ml_switch_gen.m"
{
#line 535 "ml_switch_gen.m"
  {
#line 535 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 535 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_5, (MR_Integer) 0)));
#line 535 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Tag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_5, (MR_Integer) 1)));
#line 535 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Rval_11;

#line 546 "ml_switch_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_switch_gen__Tag_8)) == (MR_mktag((MR_Integer) 1))))
#line 547 "ml_switch_gen.m"
      {
#line 547 "ml_switch_gen.m"
        MR_String ml_backend__ml_switch_gen__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 0)));
#line 547 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_49_49;

#line 548 "ml_switch_gen.m"
        {
#line 548 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 548 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_switch_gen__String_13));
#line 548 "ml_switch_gen.m"
        }
#line 548 "ml_switch_gen.m"
        {
#line 548 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 548 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_49_49));
#line 548 "ml_switch_gen.m"
        }
#line 547 "ml_switch_gen.m"
      }
#line 546 "ml_switch_gen.m"
    else
#line 546 "ml_switch_gen.m"
      if (((((MR_tag((MR_Word) ml_backend__ml_switch_gen__Tag_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 550 "ml_switch_gen.m"
        {
#line 550 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__ForeignLang_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 1)));
#line 550 "ml_switch_gen.m"
          MR_String ml_backend__ml_switch_gen__ForeignTag_15 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 2)));
#line 550 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_48_48;

#line 551 "ml_switch_gen.m"
          {
#line 551 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 551 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 551 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ForeignLang_14));
#line 551 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 2) = ((MR_Box) (ml_backend__ml_switch_gen__ForeignTag_15));
#line 551 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 3) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_4));
#line 551 "ml_switch_gen.m"
          }
#line 551 "ml_switch_gen.m"
          {
#line 551 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 551 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_48_48));
#line 551 "ml_switch_gen.m"
          }
#line 550 "ml_switch_gen.m"
        }
#line 546 "ml_switch_gen.m"
      else
#line 546 "ml_switch_gen.m"
        if (((((MR_tag((MR_Word) ml_backend__ml_switch_gen__Tag_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 538 "ml_switch_gen.m"
          {
#line 538 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 1)));
#line 539 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__V_10_10;

#line 539 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_switch_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 539 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 539 "ml_switch_gen.m"
              {
#line 539 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 1)));
#line 540 "ml_switch_gen.m"
                {
#line 540 "ml_switch_gen.m"
                  MR_Word ml_backend__ml_switch_gen__V_50_50;

#line 540 "ml_switch_gen.m"
                  {
#line 540 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "ml_switch_gen.m"
                    MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__V_50_50, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 540 "ml_switch_gen.m"
                  }
#line 540 "ml_switch_gen.m"
                  {
#line 540 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "ml_switch_gen.m"
                    MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 540 "ml_switch_gen.m"
                    MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_50_50));
#line 540 "ml_switch_gen.m"
                  }
#line 540 "ml_switch_gen.m"
                }
#line 539 "ml_switch_gen.m"
              }
#line 539 "ml_switch_gen.m"
            else
#line 543 "ml_switch_gen.m"
              {
#line 541 "ml_switch_gen.m"
                MR_Char ml_backend__ml_switch_gen__V_12_12;

#line 541 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_switch_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 541 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 541 "ml_switch_gen.m"
                  {
#line 541 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_12_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 1)));
#line 542 "ml_switch_gen.m"
                    {
#line 542 "ml_switch_gen.m"
                      MR_Word ml_backend__ml_switch_gen__V_51_51;

#line 542 "ml_switch_gen.m"
                      {
#line 542 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 542 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_51_51, 1) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 542 "ml_switch_gen.m"
                      }
#line 542 "ml_switch_gen.m"
                      {
#line 542 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 542 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_51_51));
#line 542 "ml_switch_gen.m"
                      }
#line 542 "ml_switch_gen.m"
                    }
#line 541 "ml_switch_gen.m"
                  }
#line 541 "ml_switch_gen.m"
                else
#line 544 "ml_switch_gen.m"
                  {
#line 544 "ml_switch_gen.m"
                    MR_Word ml_backend__ml_switch_gen__V_52_52;

#line 544 "ml_switch_gen.m"
                    {
#line 544 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 544 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 544 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 1) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 544 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 2) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_4));
#line 544 "ml_switch_gen.m"
                    }
#line 544 "ml_switch_gen.m"
                    {
#line 544 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 544 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_52_52));
#line 544 "ml_switch_gen.m"
                    }
#line 544 "ml_switch_gen.m"
                  }
#line 543 "ml_switch_gen.m"
              }
#line 538 "ml_switch_gen.m"
          }
#line 546 "ml_switch_gen.m"
        else
#line 571 "ml_switch_gen.m"
          {
#line 572 "ml_switch_gen.m"
            {
#line 572 "ml_switch_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/3", (MR_String) "invalid tag type");
#line 572 "ml_switch_gen.m"
              return;
            }
#line 571 "ml_switch_gen.m"
          }
#line 574 "ml_switch_gen.m"
    {
#line 574 "ml_switch_gen.m"
      MR_Word base;
#line 574 "ml_switch_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 574 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__MatchCond_6 = base;
#line 574 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_11));
#line 574 "ml_switch_gen.m"
    }
#line 535 "ml_switch_gen.m"
  }
#line 532 "ml_switch_gen.m"
}

#line 527 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1(
#line 527 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 527 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 527 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 527 "ml_switch_gen.m"
{
#line 527 "ml_switch_gen.m"
  {
#line 527 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 527 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_MatchCond_6;

#line 527 "ml_switch_gen.m"
    {
#line 527 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_MatchCond_6);
    }
#line 527 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_MatchCond_6));
#line 527 "ml_switch_gen.m"
  }
#line 527 "ml_switch_gen.m"
}

#line 507 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(
#line 507 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_1,
#line 507 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__HeadVar__2_2,
#line 507 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_3,
#line 507 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__4_4,
#line 507 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5,
#line 507 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6)
#line 507 "ml_switch_gen.m"
{
#line 511 "ml_switch_gen.m"
  {
#line 511 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;

#line 511 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "ml_switch_gen.m"
      {
#line 511 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6 = ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5;
#line 511 "ml_switch_gen.m"
      }
#line 511 "ml_switch_gen.m"
    else
#line 513 "ml_switch_gen.m"
      {
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedCase_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedCases_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MLDS_Case_16;
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MLDS_Cases_17;
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21;
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedMainConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 0)));
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedOtherConsIds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 1)));
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Goal_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 3)));
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MainCond_34;
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__OtherConds_35;
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Statement_36;
#line 513 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_37_37;
#line 525 "ml_switch_gen.m"
        MR_Integer ml_backend__ml_switch_gen__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 2)));

#line 526 "ml_switch_gen.m"
        {
#line 526 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(ml_backend__ml_switch_gen__MLDS_Type_1, ml_backend__ml_switch_gen__TaggedMainConsId_30, &ml_backend__ml_switch_gen__MainCond_34);
        }
#line 527 "ml_switch_gen.m"
        {
#line 527 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 527 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[1]));
#line 527 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1));
#line 527 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 527 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 3) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_1));
#line 527 "ml_switch_gen.m"
        }
#line 527 "ml_switch_gen.m"
        {
#line 527 "ml_switch_gen.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, ml_backend__ml_switch_gen__V_37_37, ml_backend__ml_switch_gen__TaggedOtherConsIds_31, &ml_backend__ml_switch_gen__OtherConds_35);
        }
#line 529 "ml_switch_gen.m"
        {
#line 529 "ml_switch_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_3, ml_backend__ml_switch_gen__Goal_33, &ml_backend__ml_switch_gen__Statement_36, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21);
        }
#line 530 "ml_switch_gen.m"
        {
#line 530 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__MLDS_Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 530 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MainCond_34));
#line 530 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__OtherConds_35));
#line 530 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Statement_36));
#line 530 "ml_switch_gen.m"
        }
#line 516 "ml_switch_gen.m"
        {
#line 516 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(ml_backend__ml_switch_gen__MLDS_Type_1, ml_backend__ml_switch_gen__TaggedCases_14, ml_backend__ml_switch_gen__CodeModel_3, &ml_backend__ml_switch_gen__MLDS_Cases_17, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6);
        }
#line 513 "ml_switch_gen.m"
        {
#line 513 "ml_switch_gen.m"
          MR_Word base;
#line 513 "ml_switch_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__HeadVar__4_4 = base;
#line 513 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Case_16));
#line 513 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_17));
#line 513 "ml_switch_gen.m"
        }
#line 513 "ml_switch_gen.m"
      }
#line 511 "ml_switch_gen.m"
  }
#line 507 "ml_switch_gen.m"
}

#line 472 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_9,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 472 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 472 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26,
#line 472 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27)
#line 472 "ml_switch_gen.m"
{
#line 477 "ml_switch_gen.m"
  {
#line 477 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Type_16;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Type_17;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Lval_18;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Rval_19;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Range_20;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Cases_21;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Default_22;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchStmt0_23;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Context_24;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchStatement_25;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28;
#line 477 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29;
#line 503 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MinRange_39;
#line 503 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MaxRange_40;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_35;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ExportedType_36;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Type_37;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeCategory_38;
#line 496 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_42_42;
#line 499 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen___NumValuesInRange_41;

#line 478 "ml_switch_gen.m"
    {
#line 478 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Var_10, &ml_backend__ml_switch_gen__Type_16);
    }
#line 479 "ml_switch_gen.m"
    {
#line 479 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Type_16, &ml_backend__ml_switch_gen__MLDS_Type_17);
    }
#line 480 "ml_switch_gen.m"
    {
#line 480 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Var_10, &ml_backend__ml_switch_gen__Lval_18);
    }
#line 481 "ml_switch_gen.m"
    {
#line 481 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__Rval_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Rval_19, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Lval_18));
#line 481 "ml_switch_gen.m"
    }
#line 496 "ml_switch_gen.m"
    {
#line 496 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_switch_gen__ModuleInfo_35);
    }
#line 498 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MLDS_Type_17)) == (MR_mktag((MR_Integer) 2)));
#line 498 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 498 "ml_switch_gen.m"
      {
#line 498 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__Type_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 0)));
#line 498 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__TypeCategory_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 1)));
#line 498 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__ExportedType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 2)));
#line 497 "ml_switch_gen.m"
        {
#line 497 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_42_42 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_switch_gen__ModuleInfo_35, ml_backend__ml_switch_gen__Type_37);
        }
#line 497 "ml_switch_gen.m"
        {
#line 497 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__succeeded = backend_libs__foreign____Unify____exported_type_0_0(ml_backend__ml_switch_gen__ExportedType_36, ml_backend__ml_switch_gen__V_42_42);
        }
#line 496 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 499 "ml_switch_gen.m"
          {
#line 499 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__type_range_6_p_0(ml_backend__ml_switch_gen__ModuleInfo_35, ml_backend__ml_switch_gen__TypeCategory_38, ml_backend__ml_switch_gen__Type_37, &ml_backend__ml_switch_gen__MinRange_39, &ml_backend__ml_switch_gen__MaxRange_40, &ml_backend__ml_switch_gen___NumValuesInRange_41);
          }
#line 498 "ml_switch_gen.m"
      }
#line 503 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 502 "ml_switch_gen.m"
      {
#line 502 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__Range_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "ml_switch_gen.m"
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_20, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MinRange_39));
#line 502 "ml_switch_gen.m"
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_20, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MaxRange_40));
#line 502 "ml_switch_gen.m"
      }
#line 503 "ml_switch_gen.m"
    else
#line 504 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__Range_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 483 "ml_switch_gen.m"
    {
#line 483 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(ml_backend__ml_switch_gen__MLDS_Type_17, ml_backend__ml_switch_gen__Cases_9, ml_backend__ml_switch_gen__CodeModel_11, &ml_backend__ml_switch_gen__MLDS_Cases_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28);
    }
#line 485 "ml_switch_gen.m"
    {
#line 485 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__CodeModel_11, ml_backend__ml_switch_gen__Context_13, &ml_backend__ml_switch_gen__Default_22, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29);
    }
#line 486 "ml_switch_gen.m"
    {
#line 486 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__SwitchStmt0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 486 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 486 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_17));
#line 486 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_19));
#line 486 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Range_20));
#line 486 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 4) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_21));
#line 486 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 5) = ((MR_Box) (ml_backend__ml_switch_gen__Default_22));
#line 486 "ml_switch_gen.m"
    }
#line 487 "ml_switch_gen.m"
    {
#line 487 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__MLDS_Context_24 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_13);
    }
#line 488 "ml_switch_gen.m"
    {
#line 488 "ml_switch_gen.m"
      ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_switch_gen__SwitchStmt0_23, ml_backend__ml_switch_gen__MLDS_Context_24, &ml_backend__ml_switch_gen__SwitchStatement_25, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27);
    }
#line 489 "ml_switch_gen.m"
    {
#line 489 "ml_switch_gen.m"
      MR_Word base;
#line 489 "ml_switch_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__Statements_14 = base;
#line 489 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchStatement_25));
#line 489 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "ml_switch_gen.m"
    }
#line 477 "ml_switch_gen.m"
  }
#line 472 "ml_switch_gen.m"
}

#line 453 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
#line 453 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__FirstExpr_4,
#line 453 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__LaterExprs_5,
#line 453 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Expr_6)
#line 453 "ml_switch_gen.m"
{
#line 458 "ml_switch_gen.m"
  while (MR_TRUE)
#line 458 "ml_switch_gen.m"
    {
#line 458 "ml_switch_gen.m"
      /* tailcall optimized into a loop */
#line 458 "ml_switch_gen.m"
      {
#line 458 "ml_switch_gen.m"
        MR_bool ml_backend__ml_switch_gen__succeeded;

#line 458 "ml_switch_gen.m"
        if ((ml_backend__ml_switch_gen__LaterExprs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Expr_6 = ml_backend__ml_switch_gen__FirstExpr_4;
#line 458 "ml_switch_gen.m"
        else
#line 461 "ml_switch_gen.m"
          {
#line 461 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__SecondExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__LaterExprs_5, (MR_Integer) 0)));
#line 461 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__OtherExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__LaterExprs_5, (MR_Integer) 1)));
#line 461 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FirstSecondExpr_9;

#line 462 "ml_switch_gen.m"
            {
#line 462 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__FirstSecondExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 462 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 462 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 462 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 2) = ((MR_Box) (ml_backend__ml_switch_gen__FirstExpr_4));
#line 462 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 3) = ((MR_Box) (ml_backend__ml_switch_gen__SecondExpr_7));
#line 462 "ml_switch_gen.m"
            }
#line 463 "ml_switch_gen.m"
            /* direct tailcall eliminated */
#line 463 "ml_switch_gen.m"
            {
#line 463 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__FirstExpr__tmp_copy_4 = ml_backend__ml_switch_gen__FirstSecondExpr_9;
#line 463 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__LaterExprs__tmp_copy_5 = ml_backend__ml_switch_gen__OtherExprs_8;

#line 463 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__LaterExprs_5 = ml_backend__ml_switch_gen__LaterExprs__tmp_copy_5;
#line 463 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__FirstExpr_4 = ml_backend__ml_switch_gen__FirstExpr__tmp_copy_4;
#line 463 "ml_switch_gen.m"
            }
#line 463 "ml_switch_gen.m"
            continue;
#line 461 "ml_switch_gen.m"
          }
#line 458 "ml_switch_gen.m"
      }
#line 458 "ml_switch_gen.m"
      break;
#line 458 "ml_switch_gen.m"
    }
#line 453 "ml_switch_gen.m"
}

#line 445 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 445 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 445 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4)
#line 445 "ml_switch_gen.m"
{
#line 445 "ml_switch_gen.m"
  {
#line 445 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 445 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv4_HeadVar__3_3;
#line 445 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv3_HeadVar__5_5;

#line 445 "ml_switch_gen.m"
    {
#line 445 "ml_switch_gen.m"
      ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv4_HeadVar__3_3, ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_3), &ml_backend__ml_switch_gen__conv3_HeadVar__5_5);
    }
#line 445 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv4_HeadVar__3_3));
#line 445 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_switch_gen__conv3_HeadVar__5_5));
#line 445 "ml_switch_gen.m"
  }
#line 445 "ml_switch_gen.m"
}

#line 445 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 445 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 445 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 445 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4)
#line 445 "ml_switch_gen.m"
{
#line 445 "ml_switch_gen.m"
  {
#line 445 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 445 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv1_HeadVar__3_3;
#line 445 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__5_5;

#line 445 "ml_switch_gen.m"
    {
#line 445 "ml_switch_gen.m"
      ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv1_HeadVar__3_3, ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_3), &ml_backend__ml_switch_gen__conv0_HeadVar__5_5);
    }
#line 445 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv1_HeadVar__3_3));
#line 445 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__5_5));
#line 445 "ml_switch_gen.m"
  }
#line 445 "ml_switch_gen.m"
}

#line 380 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_10,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_11,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_12,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_13,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 380 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__7_7,
#line 380 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31,
#line 380 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32)
#line 380 "ml_switch_gen.m"
{
#line 386 "ml_switch_gen.m"
  {
#line 386 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 386 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Statement_16;
#line 386 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 0)));
#line 386 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 1)));
#line 386 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 3)));
#line 387 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 2)));

#line 417 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__TaggedCases_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "ml_switch_gen.m"
      if ((ml_backend__ml_switch_gen__CanFail_14 == (MR_Integer) 0))
#line 397 "ml_switch_gen.m"
        {
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__Cond_22;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__GoalBlock_23;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__FailStatements_24;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__FailBlock_25;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__Stmt_26;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_44_44;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_45_45;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__MainTagTestRval_60;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__OtherTagTestRval_61;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62;
#line 397 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_63_63;
#line 445 "ml_switch_gen.m"
          MR_Box ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40;

#line 443 "ml_switch_gen.m"
          {
#line 443 "ml_switch_gen.m"
            ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__V_18_18, &ml_backend__ml_switch_gen__MainTagTestRval_60, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62);
          }
#line 445 "ml_switch_gen.m"
          {
#line 445 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 445 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0]));
#line 445 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1));
#line 445 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 445 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Var_12));
#line 445 "ml_switch_gen.m"
          }
#line 445 "ml_switch_gen.m"
          {
#line 445 "ml_switch_gen.m"
            mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_switch_gen__V_63_63, ml_backend__ml_switch_gen__V_19_19, &ml_backend__ml_switch_gen__OtherTagTestRval_61, ((MR_Box) (ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62)), &ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40);
          }
#line 445 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40 = ((MR_Word) ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40);
#line 447 "ml_switch_gen.m"
          {
#line 447 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__chain_ors_3_p_0(ml_backend__ml_switch_gen__MainTagTestRval_60, ml_backend__ml_switch_gen__OtherTagTestRval_61, &ml_backend__ml_switch_gen__Cond_22);
          }
#line 406 "ml_switch_gen.m"
          {
#line 406 "ml_switch_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__GoalBlock_23, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41);
          }
#line 409 "ml_switch_gen.m"
          {
#line 409 "ml_switch_gen.m"
            ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Context_15, &ml_backend__ml_switch_gen__FailStatements_24, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
          }
#line 410 "ml_switch_gen.m"
          {
#line 410 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__FailBlock_25 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__FailStatements_24, ml_backend__ml_switch_gen__Context_15);
          }
#line 414 "ml_switch_gen.m"
          {
#line 414 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 414 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__V_44_44, 0) = ((MR_Box) (ml_backend__ml_switch_gen__FailBlock_25));
#line 414 "ml_switch_gen.m"
          }
#line 414 "ml_switch_gen.m"
          {
#line 414 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__Stmt_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 414 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cond_22));
#line 414 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 1) = ((MR_Box) (ml_backend__ml_switch_gen__GoalBlock_23));
#line 414 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 2) = ((MR_Box) (ml_backend__ml_switch_gen__V_44_44));
#line 414 "ml_switch_gen.m"
          }
#line 415 "ml_switch_gen.m"
          {
#line 415 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_45_45 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_15);
          }
#line 415 "ml_switch_gen.m"
          {
#line 415 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Stmt_26));
#line 415 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_45_45));
#line 415 "ml_switch_gen.m"
          }
#line 397 "ml_switch_gen.m"
        }
#line 396 "ml_switch_gen.m"
      else
#line 395 "ml_switch_gen.m"
        {
#line 395 "ml_switch_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__Statement_16, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
        }
#line 417 "ml_switch_gen.m"
    else
#line 418 "ml_switch_gen.m"
      {
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCase_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_11, (MR_Integer) 0)));
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_11, (MR_Integer) 1)));
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterStatements_29;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterBlock_30;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_38_38;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_39_39;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Cond_47;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__GoalBlock_48;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Stmt_49;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MainTagTestRval_82;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__OtherTagTestRval_83;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84;
#line 418 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_85_85;
#line 445 "ml_switch_gen.m"
        MR_Box ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34;

#line 443 "ml_switch_gen.m"
        {
#line 443 "ml_switch_gen.m"
          ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__V_18_18, &ml_backend__ml_switch_gen__MainTagTestRval_82, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84);
        }
#line 445 "ml_switch_gen.m"
        {
#line 445 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 445 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0]));
#line 445 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2));
#line 445 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 445 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Var_12));
#line 445 "ml_switch_gen.m"
        }
#line 445 "ml_switch_gen.m"
        {
#line 445 "ml_switch_gen.m"
          mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_switch_gen__V_85_85, ml_backend__ml_switch_gen__V_19_19, &ml_backend__ml_switch_gen__OtherTagTestRval_83, ((MR_Box) (ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84)), &ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34);
        }
#line 445 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34 = ((MR_Word) ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34);
#line 447 "ml_switch_gen.m"
        {
#line 447 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__chain_ors_3_p_0(ml_backend__ml_switch_gen__MainTagTestRval_82, ml_backend__ml_switch_gen__OtherTagTestRval_83, &ml_backend__ml_switch_gen__Cond_47);
        }
#line 425 "ml_switch_gen.m"
        {
#line 425 "ml_switch_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__GoalBlock_48, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35);
        }
#line 428 "ml_switch_gen.m"
        {
#line 428 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__LaterTaggedCase_27, ml_backend__ml_switch_gen__LaterTaggedCases_28, ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__CanFail_14, ml_backend__ml_switch_gen__Context_15, &ml_backend__ml_switch_gen__LaterStatements_29, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
        }
#line 431 "ml_switch_gen.m"
        {
#line 431 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__LaterBlock_30 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__LaterStatements_29, ml_backend__ml_switch_gen__Context_15);
        }
#line 434 "ml_switch_gen.m"
        {
#line 434 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 434 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__V_38_38, 0) = ((MR_Box) (ml_backend__ml_switch_gen__LaterBlock_30));
#line 434 "ml_switch_gen.m"
        }
#line 434 "ml_switch_gen.m"
        {
#line 434 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__Stmt_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 434 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cond_47));
#line 434 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 1) = ((MR_Box) (ml_backend__ml_switch_gen__GoalBlock_48));
#line 434 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 2) = ((MR_Box) (ml_backend__ml_switch_gen__V_38_38));
#line 434 "ml_switch_gen.m"
        }
#line 435 "ml_switch_gen.m"
        {
#line 435 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_39_39 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_15);
        }
#line 435 "ml_switch_gen.m"
        {
#line 435 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Stmt_49));
#line 435 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_39_39));
#line 435 "ml_switch_gen.m"
        }
#line 418 "ml_switch_gen.m"
      }
#line 386 "ml_switch_gen.m"
    {
#line 386 "ml_switch_gen.m"
      MR_Word base;
#line 386 "ml_switch_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__HeadVar__7_7 = base;
#line 386 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Statement_16));
#line 386 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "ml_switch_gen.m"
    }
#line 386 "ml_switch_gen.m"
  }
#line 380 "ml_switch_gen.m"
}

#line 364 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
#line 364 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 364 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 364 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 364 "ml_switch_gen.m"
{
#line 364 "ml_switch_gen.m"
  {
#line 364 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 364 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

#line 364 "ml_switch_gen.m"
    {
#line 364 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    }
#line 364 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
#line 364 "ml_switch_gen.m"
  }
#line 364 "ml_switch_gen.m"
}

#line 357 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases0_9,
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 357 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 357 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21,
#line 357 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22)
#line 357 "ml_switch_gen.m"
{
#line 362 "ml_switch_gen.m"
  {
#line 362 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 362 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 362 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeInfo_31_31 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
#line 362 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_16;
#line 362 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__CostTaggedCases_17;
#line 362 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedCases_18;

#line 364 "ml_switch_gen.m"
    {
#line 364 "ml_switch_gen.m"
      mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_30_30, ml_backend__ml_switch_gen__TypeInfo_31_31, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[5], ml_backend__ml_switch_gen__TaggedCases0_9, &ml_backend__ml_switch_gen__CostTaggedCases0_16);
    }
#line 367 "ml_switch_gen.m"
    {
#line 367 "ml_switch_gen.m"
      mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_31_31, ml_backend__ml_switch_gen__CostTaggedCases0_16, &ml_backend__ml_switch_gen__CostTaggedCases_17);
    }
#line 368 "ml_switch_gen.m"
    {
#line 368 "ml_switch_gen.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_30_30, ml_backend__ml_switch_gen__CostTaggedCases_17, &ml_backend__ml_switch_gen__TaggedCases_18);
    }
#line 373 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__TaggedCases_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "ml_switch_gen.m"
      {
#line 372 "ml_switch_gen.m"
        {
#line 372 "ml_switch_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
#line 372 "ml_switch_gen.m"
          return;
        }
#line 371 "ml_switch_gen.m"
      }
#line 373 "ml_switch_gen.m"
    else
#line 374 "ml_switch_gen.m"
      {
#line 374 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_18, (MR_Integer) 0)));
#line 374 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_18, (MR_Integer) 1)));

#line 375 "ml_switch_gen.m"
        {
#line 375 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_19, ml_backend__ml_switch_gen__LaterTaggedCases_20, ml_backend__ml_switch_gen__Var_10, ml_backend__ml_switch_gen__CodeModel_11, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_13, ml_backend__ml_switch_gen__Statements_14, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22);
#line 375 "ml_switch_gen.m"
          return;
        }
#line 374 "ml_switch_gen.m"
      }
#line 362 "ml_switch_gen.m"
  }
#line 357 "ml_switch_gen.m"
}

#line 345 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
#line 345 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_4,
#line 345 "ml_switch_gen.m"
  MR_Integer ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9,
#line 345 "ml_switch_gen.m"
  MR_Integer * ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10)
#line 345 "ml_switch_gen.m"
{
#line 348 "ml_switch_gen.m"
  {
#line 348 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 348 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_4, (MR_Integer) 1)));
#line 348 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__ConsIdCost_8;
#line 349 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___ConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_4, (MR_Integer) 0)));

#line 350 "ml_switch_gen.m"
    {
#line 350 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ConsIdCost_8 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ml_backend__ml_switch_gen__ConsTag_7);
    }
#line 351 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10 = (ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9 + ml_backend__ml_switch_gen__ConsIdCost_8);
#line 348 "ml_switch_gen.m"
  }
#line 345 "ml_switch_gen.m"
}

#line 342 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
#line 342 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 342 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 342 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_2,
#line 342 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_3)
#line 342 "ml_switch_gen.m"
{
#line 342 "ml_switch_gen.m"
  {
#line 342 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 342 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10;

#line 342 "ml_switch_gen.m"
    {
#line 342 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), ((MR_Integer) ml_backend__ml_switch_gen__wrapper_arg_2), &ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10);
    }
#line 342 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10));
#line 342 "ml_switch_gen.m"
  }
#line 342 "ml_switch_gen.m"
}

#line 335 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
#line 335 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_3,
#line 335 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__2_2)
#line 335 "ml_switch_gen.m"
{
#line 338 "ml_switch_gen.m"
  {
#line 338 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 338 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__Cost_4;
#line 338 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedMainConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 0)));
#line 338 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedOtherConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 1)));
#line 338 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MainCost_9;
#line 338 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedMainConsId_5, (MR_Integer) 1)));
#line 338 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__ConsIdCost_23;
#line 339 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen___CaseNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 2)));
#line 339 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 3)));
#line 349 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedMainConsId_5, (MR_Integer) 0)));
#line 342 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__conv1_Cost_4;

#line 350 "ml_switch_gen.m"
    {
#line 350 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ConsIdCost_23 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ml_backend__ml_switch_gen__ConsTag_22);
    }
#line 351 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__MainCost_9 = ((MR_Integer) 0 + ml_backend__ml_switch_gen__ConsIdCost_23);
#line 342 "ml_switch_gen.m"
    {
#line 342 "ml_switch_gen.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[4], ml_backend__ml_switch_gen__TaggedOtherConsIds_6, ((MR_Box) (ml_backend__ml_switch_gen__MainCost_9)), &ml_backend__ml_switch_gen__conv1_Cost_4);
    }
#line 342 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__Cost_4 = ((MR_Integer) ml_backend__ml_switch_gen__conv1_Cost_4);
#line 338 "ml_switch_gen.m"
    {
#line 338 "ml_switch_gen.m"
      MR_Word base;
#line 338 "ml_switch_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__HeadVar__2_2 = base;
#line 338 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cost_4));
#line 338 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_switch_gen__TaggedCase_3));
#line 338 "ml_switch_gen.m"
    }
#line 338 "ml_switch_gen.m"
  }
#line 335 "ml_switch_gen.m"
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
#line 580 "ml_switch_gen.m"
  {
#line 580 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;

#line 580 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__CanFail_7 == (MR_Integer) 0))
#line 580 "ml_switch_gen.m"
      {
#line 580 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__FailStatements_12;

#line 581 "ml_switch_gen.m"
        {
#line 581 "ml_switch_gen.m"
          ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_switch_gen__CodeModel_8, ml_backend__ml_switch_gen__Context_9, &ml_backend__ml_switch_gen__FailStatements_12, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15);
        }
#line 582 "ml_switch_gen.m"
        {
#line 582 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__succeeded = mercury__list__is_empty_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_switch_gen__FailStatements_12);
        }
#line 584 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 583 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 584 "ml_switch_gen.m"
        else
#line 585 "ml_switch_gen.m"
          {
#line 585 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Fail_13;

#line 585 "ml_switch_gen.m"
            {
#line 585 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__Fail_13 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__FailStatements_12, ml_backend__ml_switch_gen__Context_9);
            }
#line 586 "ml_switch_gen.m"
            *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_switch_gen__Fail_13);
#line 585 "ml_switch_gen.m"
          }
#line 580 "ml_switch_gen.m"
      }
#line 580 "ml_switch_gen.m"
    else
#line 589 "ml_switch_gen.m"
      {
#line 590 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 590 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15 = ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14;
#line 589 "ml_switch_gen.m"
      }
#line 580 "ml_switch_gen.m"
  }
#line 121 "ml_switch_gen.m"
}

#line 282 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_3(
#line 282 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 282 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 282 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 282 "ml_switch_gen.m"
{
#line 282 "ml_switch_gen.m"
  {
#line 282 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 282 "ml_switch_gen.m"
    MR_String ml_backend__ml_switch_gen__conv2_HeadVar__2_2;

#line 282 "ml_switch_gen.m"
    {
#line 282 "ml_switch_gen.m"
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv2_HeadVar__2_2);
    }
#line 282 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv2_HeadVar__2_2));
#line 282 "ml_switch_gen.m"
  }
#line 282 "ml_switch_gen.m"
}

#line 255 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
#line 255 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 255 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 255 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 255 "ml_switch_gen.m"
{
#line 255 "ml_switch_gen.m"
  {
#line 255 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 255 "ml_switch_gen.m"
    MR_String ml_backend__ml_switch_gen__conv1_HeadVar__2_2;

#line 255 "ml_switch_gen.m"
    {
#line 255 "ml_switch_gen.m"
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv1_HeadVar__2_2);
    }
#line 255 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv1_HeadVar__2_2));
#line 255 "ml_switch_gen.m"
  }
#line 255 "ml_switch_gen.m"
}

#line 199 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
#line 199 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 199 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 199 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 199 "ml_switch_gen.m"
{
#line 199 "ml_switch_gen.m"
  {
#line 199 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 199 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

#line 199 "ml_switch_gen.m"
    {
#line 199 "ml_switch_gen.m"
      backend_libs__switch_util__get_int_tag_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    }
#line 199 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
#line 199 "ml_switch_gen.m"
  }
#line 199 "ml_switch_gen.m"
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
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47,
#line 114 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48)
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
    MR_Word ml_backend__ml_switch_gen__TaggedCases_22;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchCategory_24;
#line 158 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MayUseSmartIndexing_25;

#line 162 "ml_switch_gen.m"
    {
#line 162 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, &ml_backend__ml_switch_gen__ModuleInfo_20);
    }
#line 163 "ml_switch_gen.m"
    {
#line 163 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__SwitchVar_11, &ml_backend__ml_switch_gen__SwitchVarType_21);
    }
#line 164 "ml_switch_gen.m"
    {
#line 164 "ml_switch_gen.m"
      backend_libs__switch_util__tag_cases_5_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, ml_backend__ml_switch_gen__Cases_13, &ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23);
    }
#line 167 "ml_switch_gen.m"
    {
#line 167 "ml_switch_gen.m"
      backend_libs__switch_util__find_switch_category_4_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, &ml_backend__ml_switch_gen__SwitchCategory_24, &ml_backend__ml_switch_gen__MayUseSmartIndexing_25);
    }
#line 174 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__MayUseSmartIndexing_25 == (MR_Integer) 0))
#line 170 "ml_switch_gen.m"
      {
#line 171 "ml_switch_gen.m"
        {
#line 171 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
        }
#line 173 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "ml_switch_gen.m"
      }
#line 174 "ml_switch_gen.m"
    else
#line 175 "ml_switch_gen.m"
      {
#line 175 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Globals_26;

#line 176 "ml_switch_gen.m"
        {
#line 176 "ml_switch_gen.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, &ml_backend__ml_switch_gen__Globals_26);
        }
#line 217 "ml_switch_gen.m"
        if ((ml_backend__ml_switch_gen__SwitchCategory_24 == (MR_Integer) 0))
#line 178 "ml_switch_gen.m"
          {
#line 178 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__NumConsIds_27;
#line 178 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__NumArms_28;
#line 207 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__NeedBitVecCheck_36;
#line 207 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__NeedRangeCheck_37;
#line 207 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__FirstVal_38;
#line 207 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__LastVal_39;
#line 207 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_41;
#line 207 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_88_88;
#line 181 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_121_121;
#line 181 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__LowerLimit_29;
#line 181 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__UpperLimit_30;
#line 181 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__NumValues_31;
#line 181 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__LookupSize_32;
#line 181 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__ReqDensity_33;
#line 181 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FilteredTaggedCases_34;
#line 181 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FilteredCanFail_35;
#line 181 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__NonLocals_40;
#line 181 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_82_82;
#line 181 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_83_83;
#line 181 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_84_84;
#line 181 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__V_85_85;
#line 181 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_86_86;
#line 181 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_87_87;
#line 181 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_128_128;

#line 179 "ml_switch_gen.m"
            {
#line 179 "ml_switch_gen.m"
              backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__NumConsIds_27, &ml_backend__ml_switch_gen__NumArms_28);
            }
#line 181 "ml_switch_gen.m"
            {
#line 181 "ml_switch_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, &ml_backend__ml_switch_gen__V_128_128);
            }
#line 181 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_switch_gen__V_128_128);
#line 181 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 181 "ml_switch_gen.m"
              {
#line 182 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23)) == (MR_mktag((MR_Integer) 1)));
#line 182 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 182 "ml_switch_gen.m"
                  {
#line 182 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__LowerLimit_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23, (MR_Integer) 0)));
#line 182 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__UpperLimit_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23, (MR_Integer) 1)));
#line 182 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__NumValues_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23, (MR_Integer) 2)));
#line 184 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_82_82 = (MR_Integer) 448;
#line 184 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_83_83 = (MR_Integer) 1;
#line 184 "ml_switch_gen.m"
                    {
#line 184 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_26, ml_backend__ml_switch_gen__V_82_82, ml_backend__ml_switch_gen__V_83_83);
                    }
#line 181 "ml_switch_gen.m"
                    if (ml_backend__ml_switch_gen__succeeded)
#line 181 "ml_switch_gen.m"
                      {
#line 185 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__V_84_84 = (MR_Integer) 436;
#line 185 "ml_switch_gen.m"
                        {
#line 185 "ml_switch_gen.m"
                          libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_26, ml_backend__ml_switch_gen__V_84_84, &ml_backend__ml_switch_gen__LookupSize_32);
                        }
#line 187 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_27 >= ml_backend__ml_switch_gen__LookupSize_32);
#line 181 "ml_switch_gen.m"
                        if (ml_backend__ml_switch_gen__succeeded)
#line 181 "ml_switch_gen.m"
                          {
#line 188 "ml_switch_gen.m"
                            ml_backend__ml_switch_gen__V_85_85 = (MR_Integer) 1;
#line 188 "ml_switch_gen.m"
                            ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_28 > ml_backend__ml_switch_gen__V_85_85);
#line 181 "ml_switch_gen.m"
                            if (ml_backend__ml_switch_gen__succeeded)
#line 181 "ml_switch_gen.m"
                              {
#line 189 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__V_86_86 = (MR_Integer) 434;
#line 189 "ml_switch_gen.m"
                                {
#line 189 "ml_switch_gen.m"
                                  libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_26, ml_backend__ml_switch_gen__V_86_86, &ml_backend__ml_switch_gen__ReqDensity_33);
                                }
#line 191 "ml_switch_gen.m"
                                {
#line 191 "ml_switch_gen.m"
                                  backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__FilteredTaggedCases_34, ml_backend__ml_switch_gen__CanFail_12, &ml_backend__ml_switch_gen__FilteredCanFail_35);
                                }
#line 194 "ml_switch_gen.m"
                                {
#line 194 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, ml_backend__ml_switch_gen__FilteredCanFail_35, ml_backend__ml_switch_gen__LowerLimit_29, ml_backend__ml_switch_gen__UpperLimit_30, ml_backend__ml_switch_gen__NumValues_31, ml_backend__ml_switch_gen__ReqDensity_33, &ml_backend__ml_switch_gen__NeedBitVecCheck_36, &ml_backend__ml_switch_gen__NeedRangeCheck_37, &ml_backend__ml_switch_gen__FirstVal_38, &ml_backend__ml_switch_gen__LastVal_39);
                                }
#line 181 "ml_switch_gen.m"
                                if (ml_backend__ml_switch_gen__succeeded)
#line 181 "ml_switch_gen.m"
                                  {
#line 198 "ml_switch_gen.m"
                                    {
#line 198 "ml_switch_gen.m"
                                      ml_backend__ml_switch_gen__NonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_switch_gen__GoalInfo_16);
                                    }
#line 199 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__V_87_87 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[1];
#line 2222 "ml_backend.ml_switch_gen.c"
                                    ml_backend__ml_switch_gen__TypeCtorInfo_121_121 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 199 "ml_switch_gen.m"
                                    {
#line 199 "ml_switch_gen.m"
                                      ml_backend__ml_switch_gen__succeeded = ml_backend__ml_lookup_switch__ml_is_lookup_switch_8_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_121_121, ml_backend__ml_switch_gen__V_87_87, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__FilteredTaggedCases_34, ml_backend__ml_switch_gen__NonLocals_40, ml_backend__ml_switch_gen__CodeModel_14, &ml_backend__ml_switch_gen__LookupSwitchInfo_41, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_88_88);
                                    }
#line 181 "ml_switch_gen.m"
                                  }
#line 181 "ml_switch_gen.m"
                              }
#line 181 "ml_switch_gen.m"
                          }
#line 181 "ml_switch_gen.m"
                      }
#line 182 "ml_switch_gen.m"
                  }
#line 181 "ml_switch_gen.m"
              }
#line 207 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 205 "ml_switch_gen.m"
              {
#line 205 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__LookupStatement_42;

#line 203 "ml_switch_gen.m"
                {
#line 203 "ml_switch_gen.m"
                  ml_backend__ml_lookup_switch__ml_gen_lookup_switch_11_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__LookupSwitchInfo_41, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__FirstVal_38, ml_backend__ml_switch_gen__LastVal_39, ml_backend__ml_switch_gen__NeedBitVecCheck_36, ml_backend__ml_switch_gen__NeedRangeCheck_37, &ml_backend__ml_switch_gen__LookupStatement_42, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_88_88, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
                }
#line 206 "ml_switch_gen.m"
                {
#line 206 "ml_switch_gen.m"
                  MR_Word base;
#line 206 "ml_switch_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "ml_switch_gen.m"
                  *ml_backend__ml_switch_gen__Statements_18 = base;
#line 206 "ml_switch_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__LookupStatement_42));
#line 206 "ml_switch_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "ml_switch_gen.m"
                }
#line 205 "ml_switch_gen.m"
              }
#line 207 "ml_switch_gen.m"
            else
#line 212 "ml_switch_gen.m"
              {
#line 208 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_91_91;

#line 208 "ml_switch_gen.m"
                {
#line 208 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_91_91 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_26);
                }
#line 208 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_91_91 == (MR_Integer) 1);
#line 212 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 210 "ml_switch_gen.m"
                  {
#line 210 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
                  }
#line 212 "ml_switch_gen.m"
                else
#line 213 "ml_switch_gen.m"
                  {
#line 213 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
                  }
#line 212 "ml_switch_gen.m"
              }
#line 216 "ml_switch_gen.m"
            *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "ml_switch_gen.m"
          }
#line 217 "ml_switch_gen.m"
        else
#line 217 "ml_switch_gen.m"
          if ((ml_backend__ml_switch_gen__SwitchCategory_24 == (MR_Integer) 3))
#line 323 "ml_switch_gen.m"
            {
#line 324 "ml_switch_gen.m"
              {
#line 324 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
              }
#line 326 "ml_switch_gen.m"
              *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "ml_switch_gen.m"
            }
#line 217 "ml_switch_gen.m"
          else
#line 217 "ml_switch_gen.m"
            if ((ml_backend__ml_switch_gen__SwitchCategory_24 == (MR_Integer) 1))
#line 218 "ml_switch_gen.m"
              {
#line 218 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__NumConsIds_111;
#line 218 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__NumArms_112;
#line 218 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__FilteredTaggedCases_113;
#line 218 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__FilteredCanFail_114;

#line 219 "ml_switch_gen.m"
                {
#line 219 "ml_switch_gen.m"
                  backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__FilteredTaggedCases_113, ml_backend__ml_switch_gen__CanFail_12, &ml_backend__ml_switch_gen__FilteredCanFail_114);
                }
#line 221 "ml_switch_gen.m"
                {
#line 221 "ml_switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_113, &ml_backend__ml_switch_gen__NumConsIds_111, &ml_backend__ml_switch_gen__NumArms_112);
                }
#line 223 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_112 > (MR_Integer) 1);
#line 300 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 225 "ml_switch_gen.m"
                  {
#line 225 "ml_switch_gen.m"
                    MR_Integer ml_backend__ml_switch_gen__StringHashSwitchSize_43;
#line 225 "ml_switch_gen.m"
                    MR_Integer ml_backend__ml_switch_gen__StringBinarySwitchSize_44;
#line 225 "ml_switch_gen.m"
                    MR_Word ml_backend__ml_switch_gen__PreferSwitch_45;
#line 231 "ml_switch_gen.m"
                    MR_Word ml_backend__ml_switch_gen__V_59_59;

#line 224 "ml_switch_gen.m"
                    {
#line 224 "ml_switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_26, (MR_Integer) 437, &ml_backend__ml_switch_gen__StringHashSwitchSize_43);
                    }
#line 226 "ml_switch_gen.m"
                    {
#line 226 "ml_switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_26, (MR_Integer) 438, &ml_backend__ml_switch_gen__StringBinarySwitchSize_44);
                    }
#line 228 "ml_switch_gen.m"
                    {
#line 228 "ml_switch_gen.m"
                      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_switch_gen__Globals_26, (MR_Integer) 322, &ml_backend__ml_switch_gen__PreferSwitch_45);
                    }
#line 231 "ml_switch_gen.m"
                    {
#line 231 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__V_59_59 = ml_backend__ml_target_util__globals_target_supports_string_switch_1_f_0(ml_backend__ml_switch_gen__Globals_26);
                    }
#line 231 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_59_59 == (MR_Integer) 1);
#line 231 "ml_switch_gen.m"
                    if (ml_backend__ml_switch_gen__succeeded)
#line 234 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__PreferSwitch_45 == (MR_Integer) 1);
#line 240 "ml_switch_gen.m"
                    if (ml_backend__ml_switch_gen__succeeded)
#line 238 "ml_switch_gen.m"
                      {
#line 236 "ml_switch_gen.m"
                        {
#line 236 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_113, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_114, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
                        }
#line 239 "ml_switch_gen.m"
                        *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "ml_switch_gen.m"
                      }
#line 240 "ml_switch_gen.m"
                    else
#line 267 "ml_switch_gen.m"
                      {
#line 241 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_111 >= ml_backend__ml_switch_gen__StringHashSwitchSize_43);
#line 241 "ml_switch_gen.m"
                        if (ml_backend__ml_switch_gen__succeeded)
#line 241 "ml_switch_gen.m"
                          {
#line 245 "ml_switch_gen.m"
                            {
#line 245 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__V_62_62;

#line 245 "ml_switch_gen.m"
                              {
#line 245 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__V_62_62 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(ml_backend__ml_switch_gen__Globals_26);
                              }
#line 245 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_62_62 == (MR_Integer) 1);
#line 245 "ml_switch_gen.m"
                            }
#line 246 "ml_switch_gen.m"
                            if (!(ml_backend__ml_switch_gen__succeeded))
#line 247 "ml_switch_gen.m"
                              {
#line 247 "ml_switch_gen.m"
                                MR_Word ml_backend__ml_switch_gen__V_61_61;

#line 247 "ml_switch_gen.m"
                                {
#line 247 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__V_61_61 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_26);
                                }
#line 247 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_61_61 == (MR_Integer) 1);
#line 247 "ml_switch_gen.m"
                              }
#line 241 "ml_switch_gen.m"
                          }
#line 267 "ml_switch_gen.m"
                        if (ml_backend__ml_switch_gen__succeeded)
#line 262 "ml_switch_gen.m"
                          {
#line 262 "ml_switch_gen.m"
                            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_67_67;
#line 262 "ml_switch_gen.m"
                            MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_97;
#line 251 "ml_switch_gen.m"
                            MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_124_124;
#line 251 "ml_switch_gen.m"
                            MR_Word ml_backend__ml_switch_gen__V_64_64;
#line 251 "ml_switch_gen.m"
                            MR_Word ml_backend__ml_switch_gen__V_65_65;
#line 251 "ml_switch_gen.m"
                            MR_Word ml_backend__ml_switch_gen__V_66_66;
#line 251 "ml_switch_gen.m"
                            MR_Word ml_backend__ml_switch_gen__NonLocals_95;
#line 251 "ml_switch_gen.m"
                            MR_Word ml_backend__ml_switch_gen__V_129_129;

#line 251 "ml_switch_gen.m"
                            {
#line 251 "ml_switch_gen.m"
                              ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, &ml_backend__ml_switch_gen__V_129_129);
                            }
#line 251 "ml_switch_gen.m"
                            ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_switch_gen__V_129_129);
#line 251 "ml_switch_gen.m"
                            if (ml_backend__ml_switch_gen__succeeded)
#line 251 "ml_switch_gen.m"
                              {
#line 253 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__V_64_64 = (MR_Integer) 448;
#line 253 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__V_65_65 = (MR_Integer) 1;
#line 252 "ml_switch_gen.m"
                                {
#line 252 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_26, ml_backend__ml_switch_gen__V_64_64, ml_backend__ml_switch_gen__V_65_65);
                                }
#line 251 "ml_switch_gen.m"
                                if (ml_backend__ml_switch_gen__succeeded)
#line 251 "ml_switch_gen.m"
                                  {
#line 254 "ml_switch_gen.m"
                                    {
#line 254 "ml_switch_gen.m"
                                      ml_backend__ml_switch_gen__NonLocals_95 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_switch_gen__GoalInfo_16);
                                    }
#line 255 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__V_66_66 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[2];
#line 2491 "ml_backend.ml_switch_gen.c"
                                    ml_backend__ml_switch_gen__TypeCtorInfo_124_124 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 255 "ml_switch_gen.m"
                                    {
#line 255 "ml_switch_gen.m"
                                      ml_backend__ml_switch_gen__succeeded = ml_backend__ml_lookup_switch__ml_is_lookup_switch_8_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_124_124, ml_backend__ml_switch_gen__V_66_66, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__FilteredTaggedCases_113, ml_backend__ml_switch_gen__NonLocals_95, ml_backend__ml_switch_gen__CodeModel_14, &ml_backend__ml_switch_gen__LookupSwitchInfo_97, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_67_67);
                                    }
#line 251 "ml_switch_gen.m"
                                  }
#line 251 "ml_switch_gen.m"
                              }
#line 262 "ml_switch_gen.m"
                            if (ml_backend__ml_switch_gen__succeeded)
#line 259 "ml_switch_gen.m"
                              {
#line 259 "ml_switch_gen.m"
                                ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__LookupSwitchInfo_97, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_114, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_67_67, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
#line 259 "ml_switch_gen.m"
                                return;
                              }
#line 262 "ml_switch_gen.m"
                            else
#line 263 "ml_switch_gen.m"
                              {
#line 263 "ml_switch_gen.m"
                                ml_backend__ml_string_switch__ml_generate_string_hash_jump_switch_9_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_113, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_114, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
#line 263 "ml_switch_gen.m"
                                return;
                              }
#line 262 "ml_switch_gen.m"
                          }
#line 267 "ml_switch_gen.m"
                        else
#line 294 "ml_switch_gen.m"
                          {
#line 268 "ml_switch_gen.m"
                            ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_111 >= ml_backend__ml_switch_gen__StringBinarySwitchSize_44);
#line 268 "ml_switch_gen.m"
                            if (ml_backend__ml_switch_gen__succeeded)
#line 268 "ml_switch_gen.m"
                              {
#line 272 "ml_switch_gen.m"
                                {
#line 272 "ml_switch_gen.m"
                                  MR_Word ml_backend__ml_switch_gen__V_71_71;

#line 272 "ml_switch_gen.m"
                                  {
#line 272 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__V_71_71 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(ml_backend__ml_switch_gen__Globals_26);
                                  }
#line 272 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_71_71 == (MR_Integer) 1);
#line 272 "ml_switch_gen.m"
                                }
#line 273 "ml_switch_gen.m"
                                if (!(ml_backend__ml_switch_gen__succeeded))
#line 274 "ml_switch_gen.m"
                                  {
#line 274 "ml_switch_gen.m"
                                    MR_Word ml_backend__ml_switch_gen__V_70_70;

#line 274 "ml_switch_gen.m"
                                    {
#line 274 "ml_switch_gen.m"
                                      ml_backend__ml_switch_gen__V_70_70 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_26);
                                    }
#line 274 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_70_70 == (MR_Integer) 1);
#line 274 "ml_switch_gen.m"
                                  }
#line 268 "ml_switch_gen.m"
                              }
#line 294 "ml_switch_gen.m"
                            if (ml_backend__ml_switch_gen__succeeded)
#line 289 "ml_switch_gen.m"
                              {
#line 289 "ml_switch_gen.m"
                                MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_76_76;
#line 289 "ml_switch_gen.m"
                                MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_100;
#line 278 "ml_switch_gen.m"
                                MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_127_127;
#line 278 "ml_switch_gen.m"
                                MR_Word ml_backend__ml_switch_gen__V_73_73;
#line 278 "ml_switch_gen.m"
                                MR_Word ml_backend__ml_switch_gen__V_74_74;
#line 278 "ml_switch_gen.m"
                                MR_Word ml_backend__ml_switch_gen__V_75_75;
#line 278 "ml_switch_gen.m"
                                MR_Word ml_backend__ml_switch_gen__NonLocals_98;
#line 278 "ml_switch_gen.m"
                                MR_Word ml_backend__ml_switch_gen__V_130_130;

#line 278 "ml_switch_gen.m"
                                {
#line 278 "ml_switch_gen.m"
                                  ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, &ml_backend__ml_switch_gen__V_130_130);
                                }
#line 278 "ml_switch_gen.m"
                                ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_switch_gen__V_130_130);
#line 278 "ml_switch_gen.m"
                                if (ml_backend__ml_switch_gen__succeeded)
#line 278 "ml_switch_gen.m"
                                  {
#line 280 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__V_73_73 = (MR_Integer) 448;
#line 280 "ml_switch_gen.m"
                                    ml_backend__ml_switch_gen__V_74_74 = (MR_Integer) 1;
#line 279 "ml_switch_gen.m"
                                    {
#line 279 "ml_switch_gen.m"
                                      ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_26, ml_backend__ml_switch_gen__V_73_73, ml_backend__ml_switch_gen__V_74_74);
                                    }
#line 278 "ml_switch_gen.m"
                                    if (ml_backend__ml_switch_gen__succeeded)
#line 278 "ml_switch_gen.m"
                                      {
#line 281 "ml_switch_gen.m"
                                        {
#line 281 "ml_switch_gen.m"
                                          ml_backend__ml_switch_gen__NonLocals_98 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_switch_gen__GoalInfo_16);
                                        }
#line 282 "ml_switch_gen.m"
                                        ml_backend__ml_switch_gen__V_75_75 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[3];
#line 2616 "ml_backend.ml_switch_gen.c"
                                        ml_backend__ml_switch_gen__TypeCtorInfo_127_127 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 282 "ml_switch_gen.m"
                                        {
#line 282 "ml_switch_gen.m"
                                          ml_backend__ml_switch_gen__succeeded = ml_backend__ml_lookup_switch__ml_is_lookup_switch_8_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_127_127, ml_backend__ml_switch_gen__V_75_75, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__FilteredTaggedCases_113, ml_backend__ml_switch_gen__NonLocals_98, ml_backend__ml_switch_gen__CodeModel_14, &ml_backend__ml_switch_gen__LookupSwitchInfo_100, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_76_76);
                                        }
#line 278 "ml_switch_gen.m"
                                      }
#line 278 "ml_switch_gen.m"
                                  }
#line 289 "ml_switch_gen.m"
                                if (ml_backend__ml_switch_gen__succeeded)
#line 286 "ml_switch_gen.m"
                                  {
#line 286 "ml_switch_gen.m"
                                    ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__LookupSwitchInfo_100, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_114, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_76_76, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
#line 286 "ml_switch_gen.m"
                                    return;
                                  }
#line 289 "ml_switch_gen.m"
                                else
#line 290 "ml_switch_gen.m"
                                  {
#line 290 "ml_switch_gen.m"
                                    ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_9_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_113, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_114, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
#line 290 "ml_switch_gen.m"
                                    return;
                                  }
#line 289 "ml_switch_gen.m"
                              }
#line 294 "ml_switch_gen.m"
                            else
#line 297 "ml_switch_gen.m"
                              {
#line 295 "ml_switch_gen.m"
                                {
#line 295 "ml_switch_gen.m"
                                  ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_113, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_114, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
                                }
#line 298 "ml_switch_gen.m"
                                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "ml_switch_gen.m"
                              }
#line 294 "ml_switch_gen.m"
                          }
#line 267 "ml_switch_gen.m"
                      }
#line 225 "ml_switch_gen.m"
                  }
#line 300 "ml_switch_gen.m"
                else
#line 303 "ml_switch_gen.m"
                  {
#line 301 "ml_switch_gen.m"
                    {
#line 301 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_113, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_114, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
                    }
#line 304 "ml_switch_gen.m"
                    *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "ml_switch_gen.m"
                  }
#line 218 "ml_switch_gen.m"
              }
#line 217 "ml_switch_gen.m"
            else
#line 307 "ml_switch_gen.m"
              {
#line 307 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__TagSize_46;
#line 307 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__NumConsIds_117;
#line 307 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__NumArms_118;
#line 311 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__V_51_51;
#line 311 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_52_52;

#line 308 "ml_switch_gen.m"
                {
#line 308 "ml_switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__NumConsIds_117, &ml_backend__ml_switch_gen__NumArms_118);
                }
#line 309 "ml_switch_gen.m"
                {
#line 309 "ml_switch_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_26, (MR_Integer) 439, &ml_backend__ml_switch_gen__TagSize_46);
                }
#line 311 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_117 >= ml_backend__ml_switch_gen__TagSize_46);
#line 311 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 311 "ml_switch_gen.m"
                  {
#line 312 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_51_51 = (MR_Integer) 1;
#line 312 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_118 > ml_backend__ml_switch_gen__V_51_51);
#line 311 "ml_switch_gen.m"
                    if (ml_backend__ml_switch_gen__succeeded)
#line 311 "ml_switch_gen.m"
                      {
#line 313 "ml_switch_gen.m"
                        {
#line 313 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__V_52_52 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_26);
                        }
#line 313 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_52_52 == (MR_Integer) 1);
#line 311 "ml_switch_gen.m"
                      }
#line 311 "ml_switch_gen.m"
                  }
#line 317 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 315 "ml_switch_gen.m"
                  {
#line 315 "ml_switch_gen.m"
                    ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
                  }
#line 317 "ml_switch_gen.m"
                else
#line 318 "ml_switch_gen.m"
                  {
#line 318 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_47, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_48);
                  }
#line 321 "ml_switch_gen.m"
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "ml_switch_gen.m"
              }
#line 175 "ml_switch_gen.m"
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
