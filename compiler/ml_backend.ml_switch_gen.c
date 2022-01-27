/*
** Automatically generated from `ml_switch_gen.m'
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




#line 159 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0;

#line 162 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 585 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(
#line 585 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_4,
#line 585 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_5,
#line 585 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__MatchCond_6);

#line 580 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1(
#line 580 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 580 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 580 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 560 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(
#line 560 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_1,
#line 560 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__HeadVar__2_2,
#line 560 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_3,
#line 560 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__4_4,
#line 560 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5,
#line 560 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6);

#line 525 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_9,
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 525 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26,
#line 525 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27);

#line 506 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
#line 506 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__FirstExpr_4,
#line 506 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__LaterExprs_5,
#line 506 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Expr_6);

#line 498 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 498 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 498 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4);

#line 498 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 498 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 498 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4);

#line 433 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_10,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_11,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_12,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_13,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 433 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__7_7,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31,
#line 433 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);

#line 417 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 417 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 410 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases0_9,
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 410 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21,
#line 410 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22);

#line 398 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
#line 398 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_4,
#line 398 "ml_switch_gen.m"
  MR_Integer ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9,
#line 398 "ml_switch_gen.m"
  MR_Integer * ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10);

#line 395 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
#line 395 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 395 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 395 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_2,
#line 395 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_3);

#line 388 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
#line 388 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_3,
#line 388 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__2_2);

#line 417 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0_1(
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 417 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 261 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_11,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_13,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_14,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_16,
#line 261 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_17,
#line 261 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_18,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33,
#line 261 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);

#line 214 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_12_p_0(
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_13,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVarType_14,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_15,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_16,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_18,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_19,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_20,
#line 214 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_21,
#line 214 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_22,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42,
#line 214 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_43);

#line 417 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 417 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2);

#line 417 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 417 "ml_switch_gen.m"
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



#line 529 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0
  }
};

#line 538 "ml_backend.ml_switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_switch_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 585 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(
#line 585 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_4,
#line 585 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_5,
#line 585 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__MatchCond_6)
#line 585 "ml_switch_gen.m"
{
#line 588 "ml_switch_gen.m"
  {
#line 588 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 588 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_5, (MR_Integer) 0)));
#line 588 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Tag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_5, (MR_Integer) 1)));
#line 588 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Rval_11;

#line 599 "ml_switch_gen.m"
#line 599 "ml_switch_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_switch_gen__Tag_8)) {
#line 599 "ml_switch_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 599 "ml_switch_gen.m"
      case (MR_Integer) 0:
#line 624 "ml_switch_gen.m"
        {
#line 625 "ml_switch_gen.m"
          {
#line 625 "ml_switch_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/3", (MR_String) "invalid tag type");
#line 625 "ml_switch_gen.m"
            return;
          }
#line 624 "ml_switch_gen.m"
        }
#line 599 "ml_switch_gen.m"
        break;
#line 599 "ml_switch_gen.m"
      case (MR_Integer) 1:
#line 600 "ml_switch_gen.m"
        {
#line 600 "ml_switch_gen.m"
          MR_String ml_backend__ml_switch_gen__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 0)));
#line 600 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__V_49_49;

#line 601 "ml_switch_gen.m"
          {
#line 601 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 601 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_switch_gen__String_13));
#line 601 "ml_switch_gen.m"
          }
#line 601 "ml_switch_gen.m"
          {
#line 601 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 601 "ml_switch_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_49_49));
#line 601 "ml_switch_gen.m"
          }
#line 600 "ml_switch_gen.m"
        }
#line 599 "ml_switch_gen.m"
        break;
#line 599 "ml_switch_gen.m"
      case (MR_Integer) 2:
#line 624 "ml_switch_gen.m"
        {
#line 625 "ml_switch_gen.m"
          {
#line 625 "ml_switch_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/3", (MR_String) "invalid tag type");
#line 625 "ml_switch_gen.m"
            return;
          }
#line 624 "ml_switch_gen.m"
        }
#line 599 "ml_switch_gen.m"
        break;
#line 599 "ml_switch_gen.m"
      case (MR_Integer) 3:
#line 599 "ml_switch_gen.m"
#line 599 "ml_switch_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 0)))) {
#line 599 "ml_switch_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 0:
#line 591 "ml_switch_gen.m"
            {
#line 591 "ml_switch_gen.m"
              MR_Integer ml_backend__ml_switch_gen__Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 1)));
#line 592 "ml_switch_gen.m"
              MR_Integer ml_backend__ml_switch_gen__V_10_10;

#line 592 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_switch_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 592 "ml_switch_gen.m"
              if (ml_backend__ml_switch_gen__succeeded)
#line 592 "ml_switch_gen.m"
                {
#line 592 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 1)));
#line 593 "ml_switch_gen.m"
                  {
#line 593 "ml_switch_gen.m"
                    MR_Word ml_backend__ml_switch_gen__V_50_50;

#line 593 "ml_switch_gen.m"
                    {
#line 593 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__V_50_50, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 593 "ml_switch_gen.m"
                    }
#line 593 "ml_switch_gen.m"
                    {
#line 593 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 593 "ml_switch_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_50_50));
#line 593 "ml_switch_gen.m"
                    }
#line 593 "ml_switch_gen.m"
                  }
#line 592 "ml_switch_gen.m"
                }
#line 592 "ml_switch_gen.m"
              else
#line 596 "ml_switch_gen.m"
                {
#line 594 "ml_switch_gen.m"
                  MR_Char ml_backend__ml_switch_gen__V_12_12;

#line 594 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_switch_gen__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 594 "ml_switch_gen.m"
                  if (ml_backend__ml_switch_gen__succeeded)
#line 594 "ml_switch_gen.m"
                    {
#line 594 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__V_12_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__ConsId_7, (MR_Integer) 1)));
#line 595 "ml_switch_gen.m"
                      {
#line 595 "ml_switch_gen.m"
                        MR_Word ml_backend__ml_switch_gen__V_51_51;

#line 595 "ml_switch_gen.m"
                        {
#line 595 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "ml_switch_gen.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 595 "ml_switch_gen.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_51_51, 1) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 595 "ml_switch_gen.m"
                        }
#line 595 "ml_switch_gen.m"
                        {
#line 595 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "ml_switch_gen.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 595 "ml_switch_gen.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_51_51));
#line 595 "ml_switch_gen.m"
                        }
#line 595 "ml_switch_gen.m"
                      }
#line 594 "ml_switch_gen.m"
                    }
#line 594 "ml_switch_gen.m"
                  else
#line 597 "ml_switch_gen.m"
                    {
#line 597 "ml_switch_gen.m"
                      MR_Word ml_backend__ml_switch_gen__V_52_52;

#line 597 "ml_switch_gen.m"
                      {
#line 597 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 597 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 597 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 1) = ((MR_Box) (ml_backend__ml_switch_gen__Int_9));
#line 597 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_52_52, 2) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_4));
#line 597 "ml_switch_gen.m"
                      }
#line 597 "ml_switch_gen.m"
                      {
#line 597 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 597 "ml_switch_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_52_52));
#line 597 "ml_switch_gen.m"
                      }
#line 597 "ml_switch_gen.m"
                    }
#line 596 "ml_switch_gen.m"
                }
#line 591 "ml_switch_gen.m"
            }
#line 599 "ml_switch_gen.m"
            break;
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 1:
#line 603 "ml_switch_gen.m"
            {
#line 603 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__ForeignLang_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 1)));
#line 603 "ml_switch_gen.m"
              MR_String ml_backend__ml_switch_gen__ForeignTag_15 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Tag_8, (MR_Integer) 2)));
#line 603 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__V_48_48;

#line 604 "ml_switch_gen.m"
              {
#line 604 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 604 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 604 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ForeignLang_14));
#line 604 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 2) = ((MR_Box) (ml_backend__ml_switch_gen__ForeignTag_15));
#line 604 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__V_48_48, 3) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_4));
#line 604 "ml_switch_gen.m"
              }
#line 604 "ml_switch_gen.m"
              {
#line 604 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 604 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__Rval_11, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_48_48));
#line 604 "ml_switch_gen.m"
              }
#line 603 "ml_switch_gen.m"
            }
#line 599 "ml_switch_gen.m"
            break;
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 2:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 3:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 4:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 5:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 6:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 7:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 8:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 9:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 10:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 11:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 12:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 13:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 14:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 15:
#line 599 "ml_switch_gen.m"
          case (MR_Integer) 16:
#line 624 "ml_switch_gen.m"
            {
#line 625 "ml_switch_gen.m"
              {
#line 625 "ml_switch_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/3", (MR_String) "invalid tag type");
#line 625 "ml_switch_gen.m"
                return;
              }
#line 624 "ml_switch_gen.m"
            }
#line 599 "ml_switch_gen.m"
            break;
#line 599 "ml_switch_gen.m"
        }
#line 599 "ml_switch_gen.m"
        break;
#line 599 "ml_switch_gen.m"
    }
#line 627 "ml_switch_gen.m"
    {
#line 627 "ml_switch_gen.m"
      MR_Word base;
#line 627 "ml_switch_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 627 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__MatchCond_6 = base;
#line 627 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_11));
#line 627 "ml_switch_gen.m"
    }
#line 588 "ml_switch_gen.m"
  }
#line 585 "ml_switch_gen.m"
}

#line 580 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1(
#line 580 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 580 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 580 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 580 "ml_switch_gen.m"
{
#line 580 "ml_switch_gen.m"
  {
#line 580 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 580 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_MatchCond_6;

#line 580 "ml_switch_gen.m"
    {
#line 580 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_MatchCond_6);
    }
#line 580 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_MatchCond_6));
#line 580 "ml_switch_gen.m"
  }
#line 580 "ml_switch_gen.m"
}

#line 560 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(
#line 560 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MLDS_Type_1,
#line 560 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__HeadVar__2_2,
#line 560 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_3,
#line 560 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__4_4,
#line 560 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5,
#line 560 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6)
#line 560 "ml_switch_gen.m"
{
#line 564 "ml_switch_gen.m"
  {
#line 564 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;

#line 564 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "ml_switch_gen.m"
      {
#line 564 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 564 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6 = ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5;
#line 564 "ml_switch_gen.m"
      }
#line 564 "ml_switch_gen.m"
    else
#line 566 "ml_switch_gen.m"
      {
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedCase_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedCases_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MLDS_Case_16;
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MLDS_Cases_17;
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21;
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedMainConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 0)));
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedOtherConsIds_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 1)));
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Goal_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 3)));
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MainCond_34;
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__OtherConds_35;
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Statement_36;
#line 566 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_37_37;
#line 578 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_13, (MR_Integer) 2)));

#line 579 "ml_switch_gen.m"
        {
#line 579 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_3_p_0(ml_backend__ml_switch_gen__MLDS_Type_1, ml_backend__ml_switch_gen__TaggedMainConsId_30, &ml_backend__ml_switch_gen__MainCond_34);
        }
#line 580 "ml_switch_gen.m"
        {
#line 580 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 580 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[1]));
#line 580 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0_1));
#line 580 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 580 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_37_37, 3) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_1));
#line 580 "ml_switch_gen.m"
        }
#line 580 "ml_switch_gen.m"
        {
#line 580 "ml_switch_gen.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, ml_backend__ml_switch_gen__V_37_37, ml_backend__ml_switch_gen__TaggedOtherConsIds_31, &ml_backend__ml_switch_gen__OtherConds_35);
        }
#line 582 "ml_switch_gen.m"
        {
#line 582 "ml_switch_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_3, ml_backend__ml_switch_gen__Goal_33, &ml_backend__ml_switch_gen__Statement_36, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_5, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21);
        }
#line 583 "ml_switch_gen.m"
        {
#line 583 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__MLDS_Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 583 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MainCond_34));
#line 583 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__OtherConds_35));
#line 583 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__MLDS_Case_16, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Statement_36));
#line 583 "ml_switch_gen.m"
        }
#line 569 "ml_switch_gen.m"
        {
#line 569 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(ml_backend__ml_switch_gen__MLDS_Type_1, ml_backend__ml_switch_gen__TaggedCases_14, ml_backend__ml_switch_gen__CodeModel_3, &ml_backend__ml_switch_gen__MLDS_Cases_17, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_21_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_6);
        }
#line 566 "ml_switch_gen.m"
        {
#line 566 "ml_switch_gen.m"
          MR_Word base;
#line 566 "ml_switch_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__HeadVar__4_4 = base;
#line 566 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Case_16));
#line 566 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_17));
#line 566 "ml_switch_gen.m"
        }
#line 566 "ml_switch_gen.m"
      }
#line 564 "ml_switch_gen.m"
  }
#line 560 "ml_switch_gen.m"
}

#line 525 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_9,
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 525 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 525 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26,
#line 525 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27)
#line 525 "ml_switch_gen.m"
{
#line 530 "ml_switch_gen.m"
  {
#line 530 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Type_16;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Type_17;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Lval_18;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Rval_19;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Range_20;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Cases_21;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Default_22;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchStmt0_23;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MLDS_Context_24;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchStatement_25;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28;
#line 530 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29;
#line 556 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MinRange_39;
#line 556 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MaxRange_40;
#line 549 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_35;
#line 549 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ExportedType_36;
#line 549 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Type_37;
#line 549 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeCategory_38;
#line 549 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_42_42;
#line 552 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen___NumValuesInRange_41;

#line 531 "ml_switch_gen.m"
    {
#line 531 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Var_10, &ml_backend__ml_switch_gen__Type_16);
    }
#line 532 "ml_switch_gen.m"
    {
#line 532 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Type_16, &ml_backend__ml_switch_gen__MLDS_Type_17);
    }
#line 533 "ml_switch_gen.m"
    {
#line 533 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_switch_gen__Var_10, &ml_backend__ml_switch_gen__Lval_18);
    }
#line 534 "ml_switch_gen.m"
    {
#line 534 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__Rval_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Rval_19, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Lval_18));
#line 534 "ml_switch_gen.m"
    }
#line 549 "ml_switch_gen.m"
    {
#line 549 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_switch_gen__ModuleInfo_35);
    }
#line 551 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MLDS_Type_17)) == (MR_mktag((MR_Integer) 2)));
#line 551 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 551 "ml_switch_gen.m"
      {
#line 551 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__Type_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 0)));
#line 551 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__TypeCategory_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 1)));
#line 551 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__ExportedType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_17, (MR_Integer) 2)));
#line 550 "ml_switch_gen.m"
        {
#line 550 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_42_42 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_switch_gen__ModuleInfo_35, ml_backend__ml_switch_gen__Type_37);
        }
#line 550 "ml_switch_gen.m"
        {
#line 550 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__succeeded = backend_libs__foreign____Unify____exported_type_0_0(ml_backend__ml_switch_gen__ExportedType_36, ml_backend__ml_switch_gen__V_42_42);
        }
#line 549 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 552 "ml_switch_gen.m"
          {
#line 552 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__type_range_6_p_0(ml_backend__ml_switch_gen__ModuleInfo_35, ml_backend__ml_switch_gen__TypeCategory_38, ml_backend__ml_switch_gen__Type_37, &ml_backend__ml_switch_gen__MinRange_39, &ml_backend__ml_switch_gen__MaxRange_40, &ml_backend__ml_switch_gen___NumValuesInRange_41);
          }
#line 551 "ml_switch_gen.m"
      }
#line 556 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 555 "ml_switch_gen.m"
      {
#line 555 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__Range_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "ml_switch_gen.m"
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_20, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MinRange_39));
#line 555 "ml_switch_gen.m"
        MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_20, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MaxRange_40));
#line 555 "ml_switch_gen.m"
      }
#line 556 "ml_switch_gen.m"
    else
#line 557 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__Range_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 536 "ml_switch_gen.m"
    {
#line 536 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(ml_backend__ml_switch_gen__MLDS_Type_17, ml_backend__ml_switch_gen__Cases_9, ml_backend__ml_switch_gen__CodeModel_11, &ml_backend__ml_switch_gen__MLDS_Cases_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_26, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28);
    }
#line 538 "ml_switch_gen.m"
    {
#line 538 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__CodeModel_11, ml_backend__ml_switch_gen__Context_13, &ml_backend__ml_switch_gen__Default_22, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_28, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29);
    }
#line 539 "ml_switch_gen.m"
    {
#line 539 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__SwitchStmt0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 539 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 539 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_17));
#line 539 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_19));
#line 539 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Range_20));
#line 539 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 4) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_21));
#line 539 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_23, 5) = ((MR_Box) (ml_backend__ml_switch_gen__Default_22));
#line 539 "ml_switch_gen.m"
    }
#line 540 "ml_switch_gen.m"
    {
#line 540 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__MLDS_Context_24 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_13);
    }
#line 541 "ml_switch_gen.m"
    {
#line 541 "ml_switch_gen.m"
      ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_switch_gen__SwitchStmt0_23, ml_backend__ml_switch_gen__MLDS_Context_24, &ml_backend__ml_switch_gen__SwitchStatement_25, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_29, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_27);
    }
#line 542 "ml_switch_gen.m"
    {
#line 542 "ml_switch_gen.m"
      MR_Word base;
#line 542 "ml_switch_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__Statements_14 = base;
#line 542 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchStatement_25));
#line 542 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "ml_switch_gen.m"
    }
#line 530 "ml_switch_gen.m"
  }
#line 525 "ml_switch_gen.m"
}

#line 506 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__chain_ors_3_p_0(
#line 506 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__FirstExpr_4,
#line 506 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__LaterExprs_5,
#line 506 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Expr_6)
#line 506 "ml_switch_gen.m"
{
#line 511 "ml_switch_gen.m"
  while (MR_TRUE)
#line 511 "ml_switch_gen.m"
    {
#line 511 "ml_switch_gen.m"
      /* tailcall optimized into a loop */
#line 511 "ml_switch_gen.m"
      {
#line 511 "ml_switch_gen.m"
        MR_bool ml_backend__ml_switch_gen__succeeded;

#line 511 "ml_switch_gen.m"
        if ((ml_backend__ml_switch_gen__LaterExprs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Expr_6 = ml_backend__ml_switch_gen__FirstExpr_4;
#line 511 "ml_switch_gen.m"
        else
#line 514 "ml_switch_gen.m"
          {
#line 514 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__SecondExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__LaterExprs_5, (MR_Integer) 0)));
#line 514 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__OtherExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__LaterExprs_5, (MR_Integer) 1)));
#line 514 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FirstSecondExpr_9;

#line 515 "ml_switch_gen.m"
            {
#line 515 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__FirstSecondExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 515 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 515 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 515 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 2) = ((MR_Box) (ml_backend__ml_switch_gen__FirstExpr_4));
#line 515 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__FirstSecondExpr_9, 3) = ((MR_Box) (ml_backend__ml_switch_gen__SecondExpr_7));
#line 515 "ml_switch_gen.m"
            }
#line 516 "ml_switch_gen.m"
            /* direct tailcall eliminated */
#line 516 "ml_switch_gen.m"
            {
#line 516 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__FirstExpr__tmp_copy_4 = ml_backend__ml_switch_gen__FirstSecondExpr_9;
#line 516 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__LaterExprs__tmp_copy_5 = ml_backend__ml_switch_gen__OtherExprs_8;

#line 516 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__LaterExprs_5 = ml_backend__ml_switch_gen__LaterExprs__tmp_copy_5;
#line 516 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__FirstExpr_4 = ml_backend__ml_switch_gen__FirstExpr__tmp_copy_4;
#line 516 "ml_switch_gen.m"
            }
#line 516 "ml_switch_gen.m"
            continue;
#line 514 "ml_switch_gen.m"
          }
#line 511 "ml_switch_gen.m"
      }
#line 511 "ml_switch_gen.m"
      break;
#line 511 "ml_switch_gen.m"
    }
#line 506 "ml_switch_gen.m"
}

#line 498 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2(
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 498 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 498 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4)
#line 498 "ml_switch_gen.m"
{
#line 498 "ml_switch_gen.m"
  {
#line 498 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 498 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv4_HeadVar__3_3;
#line 498 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv3_HeadVar__5_5;

#line 498 "ml_switch_gen.m"
    {
#line 498 "ml_switch_gen.m"
      ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv4_HeadVar__3_3, ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_3), &ml_backend__ml_switch_gen__conv3_HeadVar__5_5);
    }
#line 498 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv4_HeadVar__3_3));
#line 498 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_switch_gen__conv3_HeadVar__5_5));
#line 498 "ml_switch_gen.m"
  }
#line 498 "ml_switch_gen.m"
}

#line 498 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1(
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 498 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2,
#line 498 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_3,
#line 498 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_4)
#line 498 "ml_switch_gen.m"
{
#line 498 "ml_switch_gen.m"
  {
#line 498 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 498 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv1_HeadVar__3_3;
#line 498 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__5_5;

#line 498 "ml_switch_gen.m"
    {
#line 498 "ml_switch_gen.m"
      ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv1_HeadVar__3_3, ((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_3), &ml_backend__ml_switch_gen__conv0_HeadVar__5_5);
    }
#line 498 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv1_HeadVar__3_3));
#line 498 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__5_5));
#line 498 "ml_switch_gen.m"
  }
#line 498 "ml_switch_gen.m"
}

#line 433 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_10,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_11,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_12,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_13,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_14,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 433 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__7_7,
#line 433 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31,
#line 433 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32)
#line 433 "ml_switch_gen.m"
{
#line 439 "ml_switch_gen.m"
  {
#line 439 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 439 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Statement_16;
#line 439 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 0)));
#line 439 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 1)));
#line 439 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 3)));
#line 440 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_10, (MR_Integer) 2)));

#line 470 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__TaggedCases_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 449 "ml_switch_gen.m"
#line 449 "ml_switch_gen.m"
      switch (ml_backend__ml_switch_gen__CanFail_14) {
#line 449 "ml_switch_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 449 "ml_switch_gen.m"
        case (MR_Integer) 0:
#line 450 "ml_switch_gen.m"
          {
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Cond_22;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__GoalBlock_23;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FailStatements_24;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FailBlock_25;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Stmt_26;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_44_44;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_45_45;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__MainTagTestRval_60;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__OtherTagTestRval_61;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62;
#line 450 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_63_63;
#line 498 "ml_switch_gen.m"
            MR_Box ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40;

#line 496 "ml_switch_gen.m"
            {
#line 496 "ml_switch_gen.m"
              ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__V_18_18, &ml_backend__ml_switch_gen__MainTagTestRval_60, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62);
            }
#line 498 "ml_switch_gen.m"
            {
#line 498 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 498 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0]));
#line 498 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_1));
#line 498 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 498 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_63_63, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Var_12));
#line 498 "ml_switch_gen.m"
            }
#line 498 "ml_switch_gen.m"
            {
#line 498 "ml_switch_gen.m"
              mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_switch_gen__V_63_63, ml_backend__ml_switch_gen__V_19_19, &ml_backend__ml_switch_gen__OtherTagTestRval_61, ((MR_Box) (ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_62)), &ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40);
            }
#line 498 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40 = ((MR_Word) ml_backend__ml_switch_gen__conv2_STATE_VARIABLE_Info_40_40);
#line 500 "ml_switch_gen.m"
            {
#line 500 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__chain_ors_3_p_0(ml_backend__ml_switch_gen__MainTagTestRval_60, ml_backend__ml_switch_gen__OtherTagTestRval_61, &ml_backend__ml_switch_gen__Cond_22);
            }
#line 459 "ml_switch_gen.m"
            {
#line 459 "ml_switch_gen.m"
              ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__GoalBlock_23, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_40_40, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41);
            }
#line 462 "ml_switch_gen.m"
            {
#line 462 "ml_switch_gen.m"
              ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Context_15, &ml_backend__ml_switch_gen__FailStatements_24, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_41_41, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
            }
#line 463 "ml_switch_gen.m"
            {
#line 463 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__FailBlock_25 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__FailStatements_24, ml_backend__ml_switch_gen__Context_15);
            }
#line 467 "ml_switch_gen.m"
            {
#line 467 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 467 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__V_44_44, 0) = ((MR_Box) (ml_backend__ml_switch_gen__FailBlock_25));
#line 467 "ml_switch_gen.m"
            }
#line 467 "ml_switch_gen.m"
            {
#line 467 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__Stmt_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 467 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cond_22));
#line 467 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 1) = ((MR_Box) (ml_backend__ml_switch_gen__GoalBlock_23));
#line 467 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_26, 2) = ((MR_Box) (ml_backend__ml_switch_gen__V_44_44));
#line 467 "ml_switch_gen.m"
            }
#line 468 "ml_switch_gen.m"
            {
#line 468 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__V_45_45 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_15);
            }
#line 468 "ml_switch_gen.m"
            {
#line 468 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Stmt_26));
#line 468 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_45_45));
#line 468 "ml_switch_gen.m"
            }
#line 450 "ml_switch_gen.m"
          }
#line 449 "ml_switch_gen.m"
          break;
#line 449 "ml_switch_gen.m"
        case (MR_Integer) 1:
#line 448 "ml_switch_gen.m"
          {
#line 448 "ml_switch_gen.m"
            ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__Statement_16, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
          }
#line 449 "ml_switch_gen.m"
          break;
#line 449 "ml_switch_gen.m"
      }
#line 470 "ml_switch_gen.m"
    else
#line 471 "ml_switch_gen.m"
      {
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCase_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_11, (MR_Integer) 0)));
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_11, (MR_Integer) 1)));
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterStatements_29;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterBlock_30;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_38_38;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_39_39;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Cond_47;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__GoalBlock_48;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__Stmt_49;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__MainTagTestRval_82;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__OtherTagTestRval_83;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84;
#line 471 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_85_85;
#line 498 "ml_switch_gen.m"
        MR_Box ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34;

#line 496 "ml_switch_gen.m"
        {
#line 496 "ml_switch_gen.m"
          ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__V_18_18, &ml_backend__ml_switch_gen__MainTagTestRval_82, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_31, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84);
        }
#line 498 "ml_switch_gen.m"
        {
#line 498 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 498 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0]));
#line 498 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0_2));
#line 498 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 498 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__V_85_85, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Var_12));
#line 498 "ml_switch_gen.m"
        }
#line 498 "ml_switch_gen.m"
        {
#line 498 "ml_switch_gen.m"
          mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_switch_gen__V_85_85, ml_backend__ml_switch_gen__V_19_19, &ml_backend__ml_switch_gen__OtherTagTestRval_83, ((MR_Box) (ml_backend__ml_switch_gen__STATE_VARIABLE_Info_18_84)), &ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34);
        }
#line 498 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34 = ((MR_Word) ml_backend__ml_switch_gen__conv5_STATE_VARIABLE_Info_34_34);
#line 500 "ml_switch_gen.m"
        {
#line 500 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__chain_ors_3_p_0(ml_backend__ml_switch_gen__MainTagTestRval_82, ml_backend__ml_switch_gen__OtherTagTestRval_83, &ml_backend__ml_switch_gen__Cond_47);
        }
#line 478 "ml_switch_gen.m"
        {
#line 478 "ml_switch_gen.m"
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__Goal_21, &ml_backend__ml_switch_gen__GoalBlock_48, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34_34, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35);
        }
#line 481 "ml_switch_gen.m"
        {
#line 481 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__LaterTaggedCase_27, ml_backend__ml_switch_gen__LaterTaggedCases_28, ml_backend__ml_switch_gen__Var_12, ml_backend__ml_switch_gen__CodeModel_13, ml_backend__ml_switch_gen__CanFail_14, ml_backend__ml_switch_gen__Context_15, &ml_backend__ml_switch_gen__LaterStatements_29, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_35_35, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_32);
        }
#line 484 "ml_switch_gen.m"
        {
#line 484 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__LaterBlock_30 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__LaterStatements_29, ml_backend__ml_switch_gen__Context_15);
        }
#line 487 "ml_switch_gen.m"
        {
#line 487 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 487 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__V_38_38, 0) = ((MR_Box) (ml_backend__ml_switch_gen__LaterBlock_30));
#line 487 "ml_switch_gen.m"
        }
#line 487 "ml_switch_gen.m"
        {
#line 487 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__Stmt_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 487 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cond_47));
#line 487 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 1) = ((MR_Box) (ml_backend__ml_switch_gen__GoalBlock_48));
#line 487 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__Stmt_49, 2) = ((MR_Box) (ml_backend__ml_switch_gen__V_38_38));
#line 487 "ml_switch_gen.m"
        }
#line 488 "ml_switch_gen.m"
        {
#line 488 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_39_39 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_15);
        }
#line 488 "ml_switch_gen.m"
        {
#line 488 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__Statement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Stmt_49));
#line 488 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__Statement_16, 1) = ((MR_Box) (ml_backend__ml_switch_gen__V_39_39));
#line 488 "ml_switch_gen.m"
        }
#line 471 "ml_switch_gen.m"
      }
#line 439 "ml_switch_gen.m"
    {
#line 439 "ml_switch_gen.m"
      MR_Word base;
#line 439 "ml_switch_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__HeadVar__7_7 = base;
#line 439 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Statement_16));
#line 439 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "ml_switch_gen.m"
    }
#line 439 "ml_switch_gen.m"
  }
#line 433 "ml_switch_gen.m"
}

#line 417 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0_1(
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 417 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 417 "ml_switch_gen.m"
{
#line 417 "ml_switch_gen.m"
  {
#line 417 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 417 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

#line 417 "ml_switch_gen.m"
    {
#line 417 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    }
#line 417 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
#line 417 "ml_switch_gen.m"
  }
#line 417 "ml_switch_gen.m"
}

#line 410 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases0_9,
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Var_10,
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_11,
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_13,
#line 410 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_14,
#line 410 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21,
#line 410 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22)
#line 410 "ml_switch_gen.m"
{
#line 415 "ml_switch_gen.m"
  {
#line 415 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 415 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 415 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TypeInfo_31_31 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
#line 415 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_16;
#line 415 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__CostTaggedCases_17;
#line 415 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedCases_18;

#line 417 "ml_switch_gen.m"
    {
#line 417 "ml_switch_gen.m"
      mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_30_30, ml_backend__ml_switch_gen__TypeInfo_31_31, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[5], ml_backend__ml_switch_gen__TaggedCases0_9, &ml_backend__ml_switch_gen__CostTaggedCases0_16);
    }
#line 420 "ml_switch_gen.m"
    {
#line 420 "ml_switch_gen.m"
      mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_31_31, ml_backend__ml_switch_gen__CostTaggedCases0_16, &ml_backend__ml_switch_gen__CostTaggedCases_17);
    }
#line 421 "ml_switch_gen.m"
    {
#line 421 "ml_switch_gen.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_30_30, ml_backend__ml_switch_gen__CostTaggedCases_17, &ml_backend__ml_switch_gen__TaggedCases_18);
    }
#line 426 "ml_switch_gen.m"
    if ((ml_backend__ml_switch_gen__TaggedCases_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "ml_switch_gen.m"
      {
#line 425 "ml_switch_gen.m"
        {
#line 425 "ml_switch_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
#line 425 "ml_switch_gen.m"
          return;
        }
#line 424 "ml_switch_gen.m"
      }
#line 426 "ml_switch_gen.m"
    else
#line 427 "ml_switch_gen.m"
      {
#line 427 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_18, (MR_Integer) 0)));
#line 427 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_18, (MR_Integer) 1)));

#line 428 "ml_switch_gen.m"
        {
#line 428 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_19, ml_backend__ml_switch_gen__LaterTaggedCases_20, ml_backend__ml_switch_gen__Var_10, ml_backend__ml_switch_gen__CodeModel_11, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_13, ml_backend__ml_switch_gen__Statements_14, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_21, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_22);
        }
#line 427 "ml_switch_gen.m"
      }
#line 415 "ml_switch_gen.m"
  }
#line 410 "ml_switch_gen.m"
}

#line 398 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
#line 398 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedConsId_4,
#line 398 "ml_switch_gen.m"
  MR_Integer ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9,
#line 398 "ml_switch_gen.m"
  MR_Integer * ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10)
#line 398 "ml_switch_gen.m"
{
#line 401 "ml_switch_gen.m"
  {
#line 401 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 401 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_4, (MR_Integer) 1)));
#line 401 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__ConsIdCost_8;
#line 402 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___ConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedConsId_4, (MR_Integer) 0)));

#line 403 "ml_switch_gen.m"
    {
#line 403 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ConsIdCost_8 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ml_backend__ml_switch_gen__ConsTag_7);
    }
#line 404 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_10 = (ml_backend__ml_switch_gen__STATE_VARIABLE_CaseCost_0_9 + ml_backend__ml_switch_gen__ConsIdCost_8);
#line 401 "ml_switch_gen.m"
  }
#line 398 "ml_switch_gen.m"
}

#line 395 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
#line 395 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 395 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 395 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_2,
#line 395 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_3)
#line 395 "ml_switch_gen.m"
{
#line 395 "ml_switch_gen.m"
  {
#line 395 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 395 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10;

#line 395 "ml_switch_gen.m"
    {
#line 395 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), ((MR_Integer) ml_backend__ml_switch_gen__wrapper_arg_2), &ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10);
    }
#line 395 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_STATE_VARIABLE_CaseCost_10));
#line 395 "ml_switch_gen.m"
  }
#line 395 "ml_switch_gen.m"
}

#line 388 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
#line 388 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCase_3,
#line 388 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__HeadVar__2_2)
#line 388 "ml_switch_gen.m"
{
#line 391 "ml_switch_gen.m"
  {
#line 391 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 391 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__Cost_4;
#line 391 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedMainConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 0)));
#line 391 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedOtherConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 1)));
#line 391 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__MainCost_9;
#line 391 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ConsTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedMainConsId_5, (MR_Integer) 1)));
#line 391 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__ConsIdCost_23;
#line 392 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___CaseNum_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 2)));
#line 392 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedCase_3, (MR_Integer) 3)));
#line 402 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen___ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_switch_gen__TaggedMainConsId_5, (MR_Integer) 0)));
#line 395 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__conv1_Cost_4;

#line 403 "ml_switch_gen.m"
    {
#line 403 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__ConsIdCost_23 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ml_backend__ml_switch_gen__ConsTag_22);
    }
#line 404 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__MainCost_9 = ((MR_Integer) 0 + ml_backend__ml_switch_gen__ConsIdCost_23);
#line 395 "ml_switch_gen.m"
    {
#line 395 "ml_switch_gen.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[4], ml_backend__ml_switch_gen__TaggedOtherConsIds_6, ((MR_Box) (ml_backend__ml_switch_gen__MainCost_9)), &ml_backend__ml_switch_gen__conv1_Cost_4);
    }
#line 395 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__Cost_4 = ((MR_Integer) ml_backend__ml_switch_gen__conv1_Cost_4);
#line 391 "ml_switch_gen.m"
    {
#line 391 "ml_switch_gen.m"
      MR_Word base;
#line 391 "ml_switch_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "ml_switch_gen.m"
      *ml_backend__ml_switch_gen__HeadVar__2_2 = base;
#line 391 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Cost_4));
#line 391 "ml_switch_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_switch_gen__TaggedCase_3));
#line 391 "ml_switch_gen.m"
    }
#line 391 "ml_switch_gen.m"
  }
#line 388 "ml_switch_gen.m"
}

#line 417 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0_1(
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 417 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 417 "ml_switch_gen.m"
{
#line 417 "ml_switch_gen.m"
  {
#line 417 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 417 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

#line 417 "ml_switch_gen.m"
    {
#line 417 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    }
#line 417 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
#line 417 "ml_switch_gen.m"
  }
#line 417 "ml_switch_gen.m"
}

#line 261 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_11,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_13,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_14,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_16,
#line 261 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_17,
#line 261 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_18,
#line 261 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33,
#line 261 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34)
#line 261 "ml_switch_gen.m"
{
#line 267 "ml_switch_gen.m"
  {
#line 267 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 267 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__FilteredTaggedCases_20;
#line 267 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__FilteredCanFail_21;
#line 267 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__NumConsIds_22;
#line 267 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__NumArms_23;
#line 267 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_24;
#line 267 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Globals_25;

#line 268 "ml_switch_gen.m"
    {
#line 268 "ml_switch_gen.m"
      backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__TaggedCases_13, &ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CanFail_12, &ml_backend__ml_switch_gen__FilteredCanFail_21);
    }
#line 270 "ml_switch_gen.m"
    {
#line 270 "ml_switch_gen.m"
      backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, &ml_backend__ml_switch_gen__NumConsIds_22, &ml_backend__ml_switch_gen__NumArms_23);
    }
#line 271 "ml_switch_gen.m"
    {
#line 271 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__ModuleInfo_24);
    }
#line 272 "ml_switch_gen.m"
    {
#line 272 "ml_switch_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_24, &ml_backend__ml_switch_gen__Globals_25);
    }
#line 277 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_23 < (MR_Integer) 2);
#line 283 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 281 "ml_switch_gen.m"
      {
#line 281 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_30_88 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 281 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TypeInfo_31_89 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
#line 281 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_76;
#line 281 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__CostTaggedCases_77;
#line 281 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__TaggedCases_78;

#line 417 "ml_switch_gen.m"
        {
#line 417 "ml_switch_gen.m"
          mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_30_88, ml_backend__ml_switch_gen__TypeInfo_31_89, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[3], ml_backend__ml_switch_gen__FilteredTaggedCases_20, &ml_backend__ml_switch_gen__CostTaggedCases0_76);
        }
#line 420 "ml_switch_gen.m"
        {
#line 420 "ml_switch_gen.m"
          mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_31_89, ml_backend__ml_switch_gen__CostTaggedCases0_76, &ml_backend__ml_switch_gen__CostTaggedCases_77);
        }
#line 421 "ml_switch_gen.m"
        {
#line 421 "ml_switch_gen.m"
          mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_30_88, ml_backend__ml_switch_gen__CostTaggedCases_77, &ml_backend__ml_switch_gen__TaggedCases_78);
        }
#line 426 "ml_switch_gen.m"
        if ((ml_backend__ml_switch_gen__TaggedCases_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "ml_switch_gen.m"
          {
#line 425 "ml_switch_gen.m"
            {
#line 425 "ml_switch_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
#line 425 "ml_switch_gen.m"
              return;
            }
#line 424 "ml_switch_gen.m"
          }
#line 426 "ml_switch_gen.m"
        else
#line 427 "ml_switch_gen.m"
          {
#line 427 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_78, (MR_Integer) 0)));
#line 427 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_78, (MR_Integer) 1)));

#line 428 "ml_switch_gen.m"
            {
#line 428 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_79, ml_backend__ml_switch_gen__LaterTaggedCases_80, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
            }
#line 427 "ml_switch_gen.m"
          }
#line 282 "ml_switch_gen.m"
        *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 281 "ml_switch_gen.m"
      }
#line 283 "ml_switch_gen.m"
    else
#line 300 "ml_switch_gen.m"
      {
#line 284 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_37_37;

#line 284 "ml_switch_gen.m"
        {
#line 284 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_37_37 = ml_backend__ml_target_util__globals_target_supports_string_switch_1_f_0(ml_backend__ml_switch_gen__Globals_25);
        }
#line 284 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_37_37 == (MR_Integer) 1);
#line 284 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 284 "ml_switch_gen.m"
          {
#line 289 "ml_switch_gen.m"
            {
#line 289 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 315, (MR_Integer) 1);
            }
#line 290 "ml_switch_gen.m"
            if (!(ml_backend__ml_switch_gen__succeeded))
#line 294 "ml_switch_gen.m"
              {
#line 294 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_64_64;

#line 294 "ml_switch_gen.m"
                {
#line 294 "ml_switch_gen.m"
                  ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__V_64_64);
                }
#line 294 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 1 == ml_backend__ml_switch_gen__V_64_64);
#line 294 "ml_switch_gen.m"
              }
#line 284 "ml_switch_gen.m"
          }
#line 300 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 298 "ml_switch_gen.m"
          {
#line 297 "ml_switch_gen.m"
            {
#line 297 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
            }
#line 299 "ml_switch_gen.m"
            *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "ml_switch_gen.m"
          }
#line 300 "ml_switch_gen.m"
        else
#line 315 "ml_switch_gen.m"
          {
#line 306 "ml_switch_gen.m"
            {
#line 306 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__V_65_65;

#line 306 "ml_switch_gen.m"
              {
#line 306 "ml_switch_gen.m"
                ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__V_65_65);
              }
#line 306 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 1 == ml_backend__ml_switch_gen__V_65_65);
#line 306 "ml_switch_gen.m"
            }
#line 307 "ml_switch_gen.m"
            if (!(ml_backend__ml_switch_gen__succeeded))
#line 308 "ml_switch_gen.m"
              {
#line 308 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_42_42;
#line 308 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_43_43;

#line 308 "ml_switch_gen.m"
                {
#line 308 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_42_42 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(ml_backend__ml_switch_gen__Globals_25);
                }
#line 308 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_42_42 == (MR_Integer) 0);
#line 308 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 308 "ml_switch_gen.m"
                  {
#line 309 "ml_switch_gen.m"
                    {
#line 309 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__V_43_43 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_25);
                    }
#line 309 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_43_43 == (MR_Integer) 0);
#line 308 "ml_switch_gen.m"
                  }
#line 308 "ml_switch_gen.m"
              }
#line 315 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 313 "ml_switch_gen.m"
              {
#line 312 "ml_switch_gen.m"
                {
#line 312 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                }
#line 314 "ml_switch_gen.m"
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "ml_switch_gen.m"
              }
#line 315 "ml_switch_gen.m"
            else
#line 323 "ml_switch_gen.m"
              {
#line 323 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26;
#line 323 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__SwitchVarLval_27;
#line 323 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__SwitchVarRval_28;
#line 323 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46;
#line 328 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__StringTrieSwitchSize_29;
#line 328 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_48_48;
#line 328 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_66_66;

#line 322 "ml_switch_gen.m"
                {
#line 322 "ml_switch_gen.m"
                  ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__GoalInfo_16, ml_backend__ml_switch_gen__CodeModel_14, &ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46);
                }
#line 324 "ml_switch_gen.m"
                {
#line 324 "ml_switch_gen.m"
                  ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__SwitchVar_11, &ml_backend__ml_switch_gen__SwitchVarLval_27);
                }
#line 325 "ml_switch_gen.m"
                {
#line 325 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__SwitchVarRval_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "ml_switch_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__SwitchVarRval_28, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchVarLval_27));
#line 325 "ml_switch_gen.m"
                }
#line 327 "ml_switch_gen.m"
                {
#line 327 "ml_switch_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 430, &ml_backend__ml_switch_gen__StringTrieSwitchSize_29);
                }
#line 329 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_22 >= ml_backend__ml_switch_gen__StringTrieSwitchSize_29);
#line 328 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 328 "ml_switch_gen.m"
                  {
#line 330 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_48_48 = (MR_Integer) 0;
#line 330 "ml_switch_gen.m"
                    {
#line 330 "ml_switch_gen.m"
                      libs__globals__get_target_2_p_0(ml_backend__ml_switch_gen__Globals_25, &ml_backend__ml_switch_gen__V_66_66);
                    }
#line 330 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_48_48 == ml_backend__ml_switch_gen__V_66_66);
#line 328 "ml_switch_gen.m"
                  }
#line 343 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 337 "ml_switch_gen.m"
                  if ((ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 339 "ml_switch_gen.m"
                    {
#line 339 "ml_switch_gen.m"
                      ml_backend__ml_string_switch__ml_generate_string_trie_jump_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                    }
#line 337 "ml_switch_gen.m"
                  else
#line 333 "ml_switch_gen.m"
                    {
#line 333 "ml_switch_gen.m"
                      MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

#line 334 "ml_switch_gen.m"
                      {
#line 334 "ml_switch_gen.m"
                        ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__LookupSwitchInfo_30, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                      }
#line 333 "ml_switch_gen.m"
                    }
#line 343 "ml_switch_gen.m"
                else
#line 359 "ml_switch_gen.m"
                  {
#line 345 "ml_switch_gen.m"
                    MR_Integer ml_backend__ml_switch_gen__StringHashSwitchSize_31;

#line 344 "ml_switch_gen.m"
                    {
#line 344 "ml_switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 431, &ml_backend__ml_switch_gen__StringHashSwitchSize_31);
                    }
#line 346 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_22 >= ml_backend__ml_switch_gen__StringHashSwitchSize_31);
#line 359 "ml_switch_gen.m"
                    if (ml_backend__ml_switch_gen__succeeded)
#line 353 "ml_switch_gen.m"
                      if ((ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 355 "ml_switch_gen.m"
                        {
#line 355 "ml_switch_gen.m"
                          ml_backend__ml_string_switch__ml_generate_string_hash_jump_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                        }
#line 353 "ml_switch_gen.m"
                      else
#line 349 "ml_switch_gen.m"
                        {
#line 349 "ml_switch_gen.m"
                          MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

#line 350 "ml_switch_gen.m"
                          {
#line 350 "ml_switch_gen.m"
                            ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__LookupSwitchInfo_58, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                          }
#line 349 "ml_switch_gen.m"
                        }
#line 359 "ml_switch_gen.m"
                    else
#line 375 "ml_switch_gen.m"
                      {
#line 361 "ml_switch_gen.m"
                        MR_Integer ml_backend__ml_switch_gen__StringBinarySwitchSize_32;

#line 360 "ml_switch_gen.m"
                        {
#line 360 "ml_switch_gen.m"
                          libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_25, (MR_Integer) 432, &ml_backend__ml_switch_gen__StringBinarySwitchSize_32);
                        }
#line 362 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_22 >= ml_backend__ml_switch_gen__StringBinarySwitchSize_32);
#line 375 "ml_switch_gen.m"
                        if (ml_backend__ml_switch_gen__succeeded)
#line 369 "ml_switch_gen.m"
                          if ((ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "ml_switch_gen.m"
                            {
#line 371 "ml_switch_gen.m"
                              ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_9_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                            }
#line 369 "ml_switch_gen.m"
                          else
#line 365 "ml_switch_gen.m"
                            {
#line 365 "ml_switch_gen.m"
                              MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_26, (MR_Integer) 0)));

#line 366 "ml_switch_gen.m"
                              {
#line 366 "ml_switch_gen.m"
                                ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVarRval_28, ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__LookupSwitchInfo_60, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                              }
#line 365 "ml_switch_gen.m"
                            }
#line 375 "ml_switch_gen.m"
                        else
#line 378 "ml_switch_gen.m"
                          {
#line 376 "ml_switch_gen.m"
                            {
#line 376 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__FilteredTaggedCases_20, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__FilteredCanFail_21, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_46_46, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_34);
                            }
#line 379 "ml_switch_gen.m"
                            *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 378 "ml_switch_gen.m"
                          }
#line 375 "ml_switch_gen.m"
                      }
#line 359 "ml_switch_gen.m"
                  }
#line 323 "ml_switch_gen.m"
              }
#line 315 "ml_switch_gen.m"
          }
#line 300 "ml_switch_gen.m"
      }
#line 267 "ml_switch_gen.m"
  }
#line 261 "ml_switch_gen.m"
}

#line 214 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_12_p_0(
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_13,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVarType_14,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_15,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__TaggedCases_16,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_18,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_19,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_20,
#line 214 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_21,
#line 214 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_22,
#line 214 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42,
#line 214 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_43)
#line 214 "ml_switch_gen.m"
{
#line 222 "ml_switch_gen.m"
  {
#line 222 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 222 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__NumConsIds_24;
#line 222 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__NumArms_25;
#line 222 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_26;
#line 222 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__Globals_27;
#line 250 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__NeedBitVecCheck_35;
#line 250 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__NeedRangeCheck_36;
#line 250 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__FirstVal_37;
#line 250 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__LastVal_38;
#line 250 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__LookupSwitchInfo_40;
#line 250 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_50_50;
#line 227 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__LowerLimit_28;
#line 227 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__UpperLimit_29;
#line 227 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__NumValues_30;
#line 227 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__LookupSize_31;
#line 227 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__ReqDensity_32;
#line 227 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__FilteredTaggedCases_33;
#line 227 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__FilteredCanFail_34;
#line 227 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_39;
#line 227 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_45_45;
#line 227 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_46_46;
#line 227 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_47_47;
#line 227 "ml_switch_gen.m"
    MR_Integer ml_backend__ml_switch_gen__V_48_48;
#line 227 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_49_49;
#line 227 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__V_56_56;

#line 223 "ml_switch_gen.m"
    {
#line 223 "ml_switch_gen.m"
      backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__TaggedCases_16, &ml_backend__ml_switch_gen__NumConsIds_24, &ml_backend__ml_switch_gen__NumArms_25);
    }
#line 224 "ml_switch_gen.m"
    {
#line 224 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_switch_gen__ModuleInfo_26);
    }
#line 225 "ml_switch_gen.m"
    {
#line 225 "ml_switch_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_26, &ml_backend__ml_switch_gen__Globals_27);
    }
#line 227 "ml_switch_gen.m"
    {
#line 227 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_switch_gen__V_56_56);
    }
#line 227 "ml_switch_gen.m"
    ml_backend__ml_switch_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_switch_gen__V_56_56);
#line 227 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 227 "ml_switch_gen.m"
      {
#line 228 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17)) == (MR_mktag((MR_Integer) 1)));
#line 228 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 228 "ml_switch_gen.m"
          {
#line 228 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__LowerLimit_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17, (MR_Integer) 0)));
#line 228 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__UpperLimit_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17, (MR_Integer) 1)));
#line 228 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__NumValues_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeIntSwitchInfo_17, (MR_Integer) 2)));
#line 229 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_45_45 = (MR_Integer) 442;
#line 229 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__V_46_46 = (MR_Integer) 1;
#line 229 "ml_switch_gen.m"
            {
#line 229 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_45_45, ml_backend__ml_switch_gen__V_46_46);
            }
#line 227 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 227 "ml_switch_gen.m"
              {
#line 230 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__V_47_47 = (MR_Integer) 429;
#line 230 "ml_switch_gen.m"
                {
#line 230 "ml_switch_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_47_47, &ml_backend__ml_switch_gen__LookupSize_31);
                }
#line 231 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_24 >= ml_backend__ml_switch_gen__LookupSize_31);
#line 227 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 227 "ml_switch_gen.m"
                  {
#line 232 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_48_48 = (MR_Integer) 1;
#line 232 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_25 > ml_backend__ml_switch_gen__V_48_48);
#line 227 "ml_switch_gen.m"
                    if (ml_backend__ml_switch_gen__succeeded)
#line 227 "ml_switch_gen.m"
                      {
#line 233 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__V_49_49 = (MR_Integer) 427;
#line 233 "ml_switch_gen.m"
                        {
#line 233 "ml_switch_gen.m"
                          libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_27, ml_backend__ml_switch_gen__V_49_49, &ml_backend__ml_switch_gen__ReqDensity_32);
                        }
#line 235 "ml_switch_gen.m"
                        {
#line 235 "ml_switch_gen.m"
                          backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ml_backend__ml_switch_gen__CodeModel_18, ml_backend__ml_switch_gen__TaggedCases_16, &ml_backend__ml_switch_gen__FilteredTaggedCases_33, ml_backend__ml_switch_gen__CanFail_15, &ml_backend__ml_switch_gen__FilteredCanFail_34);
                        }
#line 238 "ml_switch_gen.m"
                        {
#line 238 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ml_backend__ml_switch_gen__ModuleInfo_26, ml_backend__ml_switch_gen__SwitchVarType_14, ml_backend__ml_switch_gen__FilteredCanFail_34, ml_backend__ml_switch_gen__LowerLimit_28, ml_backend__ml_switch_gen__UpperLimit_29, ml_backend__ml_switch_gen__NumValues_30, ml_backend__ml_switch_gen__ReqDensity_32, &ml_backend__ml_switch_gen__NeedBitVecCheck_35, &ml_backend__ml_switch_gen__NeedRangeCheck_36, &ml_backend__ml_switch_gen__FirstVal_37, &ml_backend__ml_switch_gen__LastVal_38);
                        }
#line 227 "ml_switch_gen.m"
                        if (ml_backend__ml_switch_gen__succeeded)
#line 227 "ml_switch_gen.m"
                          {
#line 242 "ml_switch_gen.m"
                            {
#line 242 "ml_switch_gen.m"
                              ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(ml_backend__ml_switch_gen__SwitchVar_13, ml_backend__ml_switch_gen__FilteredTaggedCases_33, ml_backend__ml_switch_gen__GoalInfo_20, ml_backend__ml_switch_gen__CodeModel_18, &ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_39, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_50_50);
                            }
#line 244 "ml_switch_gen.m"
                            ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_39)) == (MR_mktag((MR_Integer) 1)));
#line 244 "ml_switch_gen.m"
                            if (ml_backend__ml_switch_gen__succeeded)
#line 244 "ml_switch_gen.m"
                              ml_backend__ml_switch_gen__LookupSwitchInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__MaybeLookupSwitchInfo_39, (MR_Integer) 0)));
#line 227 "ml_switch_gen.m"
                          }
#line 227 "ml_switch_gen.m"
                      }
#line 227 "ml_switch_gen.m"
                  }
#line 227 "ml_switch_gen.m"
              }
#line 228 "ml_switch_gen.m"
          }
#line 227 "ml_switch_gen.m"
      }
#line 250 "ml_switch_gen.m"
    if (ml_backend__ml_switch_gen__succeeded)
#line 248 "ml_switch_gen.m"
      {
#line 248 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__LookupStatement_41;

#line 246 "ml_switch_gen.m"
        {
#line 246 "ml_switch_gen.m"
          ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0(ml_backend__ml_switch_gen__SwitchVar_13, ml_backend__ml_switch_gen__TaggedCases_16, ml_backend__ml_switch_gen__LookupSwitchInfo_40, ml_backend__ml_switch_gen__CodeModel_18, ml_backend__ml_switch_gen__Context_19, ml_backend__ml_switch_gen__FirstVal_37, ml_backend__ml_switch_gen__LastVal_38, ml_backend__ml_switch_gen__NeedBitVecCheck_35, ml_backend__ml_switch_gen__NeedRangeCheck_36, &ml_backend__ml_switch_gen__LookupStatement_41, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_50_50, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_43);
        }
#line 249 "ml_switch_gen.m"
        {
#line 249 "ml_switch_gen.m"
          MR_Word base;
#line 249 "ml_switch_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Statements_22 = base;
#line 249 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__LookupStatement_41));
#line 249 "ml_switch_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 249 "ml_switch_gen.m"
        }
#line 248 "ml_switch_gen.m"
      }
#line 250 "ml_switch_gen.m"
    else
#line 255 "ml_switch_gen.m"
      {
#line 251 "ml_switch_gen.m"
        MR_Word ml_backend__ml_switch_gen__V_53_53;

#line 251 "ml_switch_gen.m"
        {
#line 251 "ml_switch_gen.m"
          ml_backend__ml_switch_gen__V_53_53 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_27);
        }
#line 251 "ml_switch_gen.m"
        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_53_53 == (MR_Integer) 1);
#line 255 "ml_switch_gen.m"
        if (ml_backend__ml_switch_gen__succeeded)
#line 530 "ml_switch_gen.m"
          {
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Type_66;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__MLDS_Type_67;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Lval_68;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Rval_69;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Range_70;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__MLDS_Cases_71;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Default_72;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__SwitchStmt0_73;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__MLDS_Context_74;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__SwitchStatement_75;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_76;
#line 530 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_77;
#line 556 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__MinRange_87;
#line 556 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen__MaxRange_88;
#line 549 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__ModuleInfo_83;
#line 549 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__ExportedType_84;
#line 549 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__Type_85;
#line 549 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__TypeCategory_86;
#line 549 "ml_switch_gen.m"
            MR_Word ml_backend__ml_switch_gen__V_90_90;
#line 552 "ml_switch_gen.m"
            MR_Integer ml_backend__ml_switch_gen___NumValuesInRange_89;

#line 531 "ml_switch_gen.m"
            {
#line 531 "ml_switch_gen.m"
              ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, ml_backend__ml_switch_gen__SwitchVar_13, &ml_backend__ml_switch_gen__Type_66);
            }
#line 532 "ml_switch_gen.m"
            {
#line 532 "ml_switch_gen.m"
              ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, ml_backend__ml_switch_gen__Type_66, &ml_backend__ml_switch_gen__MLDS_Type_67);
            }
#line 533 "ml_switch_gen.m"
            {
#line 533 "ml_switch_gen.m"
              ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, ml_backend__ml_switch_gen__SwitchVar_13, &ml_backend__ml_switch_gen__Lval_68);
            }
#line 534 "ml_switch_gen.m"
            {
#line 534 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__Rval_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Rval_69, 0) = ((MR_Box) (ml_backend__ml_switch_gen__Lval_68));
#line 534 "ml_switch_gen.m"
            }
#line 549 "ml_switch_gen.m"
            {
#line 549 "ml_switch_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_switch_gen__ModuleInfo_83);
            }
#line 551 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_switch_gen__MLDS_Type_67)) == (MR_mktag((MR_Integer) 2)));
#line 551 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 551 "ml_switch_gen.m"
              {
#line 551 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__Type_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_67, (MR_Integer) 0)));
#line 551 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__TypeCategory_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_67, (MR_Integer) 1)));
#line 551 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__ExportedType_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_switch_gen__MLDS_Type_67, (MR_Integer) 2)));
#line 550 "ml_switch_gen.m"
                {
#line 550 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__V_90_90 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_switch_gen__ModuleInfo_83, ml_backend__ml_switch_gen__Type_85);
                }
#line 550 "ml_switch_gen.m"
                {
#line 550 "ml_switch_gen.m"
                  ml_backend__ml_switch_gen__succeeded = backend_libs__foreign____Unify____exported_type_0_0(ml_backend__ml_switch_gen__ExportedType_84, ml_backend__ml_switch_gen__V_90_90);
                }
#line 549 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 552 "ml_switch_gen.m"
                  {
#line 552 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = backend_libs__switch_util__type_range_6_p_0(ml_backend__ml_switch_gen__ModuleInfo_83, ml_backend__ml_switch_gen__TypeCategory_86, ml_backend__ml_switch_gen__Type_85, &ml_backend__ml_switch_gen__MinRange_87, &ml_backend__ml_switch_gen__MaxRange_88, &ml_backend__ml_switch_gen___NumValuesInRange_89);
                  }
#line 551 "ml_switch_gen.m"
              }
#line 556 "ml_switch_gen.m"
            if (ml_backend__ml_switch_gen__succeeded)
#line 555 "ml_switch_gen.m"
              {
#line 555 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__Range_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_70, 0) = ((MR_Box) (ml_backend__ml_switch_gen__MinRange_87));
#line 555 "ml_switch_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__Range_70, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MaxRange_88));
#line 555 "ml_switch_gen.m"
              }
#line 556 "ml_switch_gen.m"
            else
#line 557 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__Range_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 536 "ml_switch_gen.m"
            {
#line 536 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_6_p_0(ml_backend__ml_switch_gen__MLDS_Type_67, ml_backend__ml_switch_gen__TaggedCases_16, ml_backend__ml_switch_gen__CodeModel_18, &ml_backend__ml_switch_gen__MLDS_Cases_71, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_76);
            }
#line 538 "ml_switch_gen.m"
            {
#line 538 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_switch_gen__CanFail_15, ml_backend__ml_switch_gen__CodeModel_18, ml_backend__ml_switch_gen__Context_19, &ml_backend__ml_switch_gen__Default_72, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_28_76, &ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_77);
            }
#line 539 "ml_switch_gen.m"
            {
#line 539 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__SwitchStmt0_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 539 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 539 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 1) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Type_67));
#line 539 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 2) = ((MR_Box) (ml_backend__ml_switch_gen__Rval_69));
#line 539 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 3) = ((MR_Box) (ml_backend__ml_switch_gen__Range_70));
#line 539 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 4) = ((MR_Box) (ml_backend__ml_switch_gen__MLDS_Cases_71));
#line 539 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_switch_gen__SwitchStmt0_73, 5) = ((MR_Box) (ml_backend__ml_switch_gen__Default_72));
#line 539 "ml_switch_gen.m"
            }
#line 540 "ml_switch_gen.m"
            {
#line 540 "ml_switch_gen.m"
              ml_backend__ml_switch_gen__MLDS_Context_74 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_switch_gen__Context_19);
            }
#line 541 "ml_switch_gen.m"
            {
#line 541 "ml_switch_gen.m"
              ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_switch_gen__SwitchStmt0_73, ml_backend__ml_switch_gen__MLDS_Context_74, &ml_backend__ml_switch_gen__SwitchStatement_75, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_29_77, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_43);
            }
#line 542 "ml_switch_gen.m"
            {
#line 542 "ml_switch_gen.m"
              MR_Word base;
#line 542 "ml_switch_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "ml_switch_gen.m"
              *ml_backend__ml_switch_gen__Statements_22 = base;
#line 542 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_switch_gen__SwitchStatement_75));
#line 542 "ml_switch_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "ml_switch_gen.m"
            }
#line 530 "ml_switch_gen.m"
          }
#line 255 "ml_switch_gen.m"
        else
#line 256 "ml_switch_gen.m"
          {
#line 256 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_16, ml_backend__ml_switch_gen__SwitchVar_13, ml_backend__ml_switch_gen__CodeModel_18, ml_backend__ml_switch_gen__CanFail_15, ml_backend__ml_switch_gen__Context_19, ml_backend__ml_switch_gen__Statements_22, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_42, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_43);
          }
#line 255 "ml_switch_gen.m"
      }
#line 259 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 222 "ml_switch_gen.m"
  }
#line 214 "ml_switch_gen.m"
}

#line 127 "ml_switch_gen.m"
void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(
#line 127 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_7,
#line 127 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_8,
#line 127 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_9,
#line 127 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Default_10,
#line 127 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14,
#line 127 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15)
#line 127 "ml_switch_gen.m"
{
#line 633 "ml_switch_gen.m"
  {
#line 633 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;

#line 633 "ml_switch_gen.m"
#line 633 "ml_switch_gen.m"
    switch (ml_backend__ml_switch_gen__CanFail_7) {
#line 633 "ml_switch_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 633 "ml_switch_gen.m"
      case (MR_Integer) 0:
#line 633 "ml_switch_gen.m"
        {
#line 633 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__FailStatements_12;

#line 634 "ml_switch_gen.m"
          {
#line 634 "ml_switch_gen.m"
            ml_backend__ml_code_util__ml_gen_failure_5_p_0(ml_backend__ml_switch_gen__CodeModel_8, ml_backend__ml_switch_gen__Context_9, &ml_backend__ml_switch_gen__FailStatements_12, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15);
          }
#line 635 "ml_switch_gen.m"
          {
#line 635 "ml_switch_gen.m"
            ml_backend__ml_switch_gen__succeeded = mercury__list__is_empty_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_switch_gen__FailStatements_12);
          }
#line 637 "ml_switch_gen.m"
          if (ml_backend__ml_switch_gen__succeeded)
#line 636 "ml_switch_gen.m"
            *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 637 "ml_switch_gen.m"
          else
#line 638 "ml_switch_gen.m"
            {
#line 638 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__Fail_13;

#line 638 "ml_switch_gen.m"
              {
#line 638 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__Fail_13 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_switch_gen__FailStatements_12, ml_backend__ml_switch_gen__Context_9);
              }
#line 639 "ml_switch_gen.m"
              *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_switch_gen__Fail_13);
#line 638 "ml_switch_gen.m"
            }
#line 633 "ml_switch_gen.m"
        }
#line 633 "ml_switch_gen.m"
        break;
#line 633 "ml_switch_gen.m"
      case (MR_Integer) 1:
#line 642 "ml_switch_gen.m"
        {
#line 643 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Default_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__STATE_VARIABLE_Info_15 = ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_14;
#line 642 "ml_switch_gen.m"
        }
#line 633 "ml_switch_gen.m"
        break;
#line 633 "ml_switch_gen.m"
    }
#line 633 "ml_switch_gen.m"
  }
#line 127 "ml_switch_gen.m"
}

#line 417 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_2(
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 417 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 417 "ml_switch_gen.m"
{
#line 417 "ml_switch_gen.m"
  {
#line 417 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 417 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv1_HeadVar__2_2;

#line 417 "ml_switch_gen.m"
    {
#line 417 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv1_HeadVar__2_2);
    }
#line 417 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv1_HeadVar__2_2));
#line 417 "ml_switch_gen.m"
  }
#line 417 "ml_switch_gen.m"
}

#line 417 "ml_switch_gen.m"
static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0_1(
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__closure_arg,
#line 417 "ml_switch_gen.m"
  MR_Box ml_backend__ml_switch_gen__wrapper_arg_1,
#line 417 "ml_switch_gen.m"
  MR_Box * ml_backend__ml_switch_gen__wrapper_arg_2)
#line 417 "ml_switch_gen.m"
{
#line 417 "ml_switch_gen.m"
  {
#line 417 "ml_switch_gen.m"
    MR_Box ml_backend__ml_switch_gen__closure = ml_backend__ml_switch_gen__closure_arg;
#line 417 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__conv0_HeadVar__2_2;

#line 417 "ml_switch_gen.m"
    {
#line 417 "ml_switch_gen.m"
      ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) ml_backend__ml_switch_gen__wrapper_arg_1), &ml_backend__ml_switch_gen__conv0_HeadVar__2_2);
    }
#line 417 "ml_switch_gen.m"
    *ml_backend__ml_switch_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_switch_gen__conv0_HeadVar__2_2));
#line 417 "ml_switch_gen.m"
  }
#line 417 "ml_switch_gen.m"
}

#line 120 "ml_switch_gen.m"
void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(
#line 120 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__SwitchVar_11,
#line 120 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CanFail_12,
#line 120 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Cases_13,
#line 120 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__CodeModel_14,
#line 120 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__Context_15,
#line 120 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__GoalInfo_16,
#line 120 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Decls_17,
#line 120 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__Statements_18,
#line 120 "ml_switch_gen.m"
  MR_Word ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30,
#line 120 "ml_switch_gen.m"
  MR_Word * ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31)
#line 120 "ml_switch_gen.m"
{
#line 162 "ml_switch_gen.m"
  {
#line 162 "ml_switch_gen.m"
    MR_bool ml_backend__ml_switch_gen__succeeded;
#line 162 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__ModuleInfo_20;
#line 162 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchVarType_21;
#line 162 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__TaggedCases_22;
#line 162 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23;
#line 162 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__SwitchCategory_24;
#line 162 "ml_switch_gen.m"
    MR_Word ml_backend__ml_switch_gen__MayUseSmartIndexing_25;

#line 166 "ml_switch_gen.m"
    {
#line 166 "ml_switch_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, &ml_backend__ml_switch_gen__ModuleInfo_20);
    }
#line 167 "ml_switch_gen.m"
    {
#line 167 "ml_switch_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__SwitchVar_11, &ml_backend__ml_switch_gen__SwitchVarType_21);
    }
#line 168 "ml_switch_gen.m"
    {
#line 168 "ml_switch_gen.m"
      backend_libs__switch_util__tag_cases_5_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, ml_backend__ml_switch_gen__Cases_13, &ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23);
    }
#line 171 "ml_switch_gen.m"
    {
#line 171 "ml_switch_gen.m"
      backend_libs__switch_util__find_switch_category_4_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, ml_backend__ml_switch_gen__SwitchVarType_21, &ml_backend__ml_switch_gen__SwitchCategory_24, &ml_backend__ml_switch_gen__MayUseSmartIndexing_25);
    }
#line 178 "ml_switch_gen.m"
#line 178 "ml_switch_gen.m"
    switch (ml_backend__ml_switch_gen__MayUseSmartIndexing_25) {
#line 178 "ml_switch_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 178 "ml_switch_gen.m"
      case (MR_Integer) 0:
#line 174 "ml_switch_gen.m"
        {
#line 174 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_30_62 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 174 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__TypeInfo_31_63 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
#line 174 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_50;
#line 174 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__CostTaggedCases_51;
#line 174 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__TaggedCases_52;

#line 417 "ml_switch_gen.m"
          {
#line 417 "ml_switch_gen.m"
            mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_30_62, ml_backend__ml_switch_gen__TypeInfo_31_63, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[1], ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__CostTaggedCases0_50);
          }
#line 420 "ml_switch_gen.m"
          {
#line 420 "ml_switch_gen.m"
            mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_31_63, ml_backend__ml_switch_gen__CostTaggedCases0_50, &ml_backend__ml_switch_gen__CostTaggedCases_51);
          }
#line 421 "ml_switch_gen.m"
          {
#line 421 "ml_switch_gen.m"
            mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_30_62, ml_backend__ml_switch_gen__CostTaggedCases_51, &ml_backend__ml_switch_gen__TaggedCases_52);
          }
#line 426 "ml_switch_gen.m"
          if ((ml_backend__ml_switch_gen__TaggedCases_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "ml_switch_gen.m"
            {
#line 425 "ml_switch_gen.m"
              {
#line 425 "ml_switch_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
#line 425 "ml_switch_gen.m"
                return;
              }
#line 424 "ml_switch_gen.m"
            }
#line 426 "ml_switch_gen.m"
          else
#line 427 "ml_switch_gen.m"
            {
#line 427 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_52, (MR_Integer) 0)));
#line 427 "ml_switch_gen.m"
              MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_52, (MR_Integer) 1)));

#line 428 "ml_switch_gen.m"
              {
#line 428 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_53, ml_backend__ml_switch_gen__LaterTaggedCases_54, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
              }
#line 427 "ml_switch_gen.m"
            }
#line 177 "ml_switch_gen.m"
          *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 174 "ml_switch_gen.m"
        }
#line 178 "ml_switch_gen.m"
        break;
#line 178 "ml_switch_gen.m"
      case (MR_Integer) 1:
#line 179 "ml_switch_gen.m"
        {
#line 179 "ml_switch_gen.m"
          MR_Word ml_backend__ml_switch_gen__Globals_26;

#line 180 "ml_switch_gen.m"
          {
#line 180 "ml_switch_gen.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_switch_gen__ModuleInfo_20, &ml_backend__ml_switch_gen__Globals_26);
          }
#line 186 "ml_switch_gen.m"
#line 186 "ml_switch_gen.m"
          switch (ml_backend__ml_switch_gen__SwitchCategory_24) {
#line 186 "ml_switch_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 186 "ml_switch_gen.m"
            case (MR_Integer) 0:
#line 183 "ml_switch_gen.m"
              {
#line 183 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_12_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__SwitchVarType_21, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__MaybeIntSwitchInfo_23, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__GoalInfo_16, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
              }
#line 186 "ml_switch_gen.m"
              break;
#line 186 "ml_switch_gen.m"
            case (MR_Integer) 3:
#line 207 "ml_switch_gen.m"
              {
#line 207 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__TypeCtorInfo_30_86 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 207 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__TypeInfo_31_87 = (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[0];
#line 207 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__CostTaggedCases0_74;
#line 207 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__CostTaggedCases_75;
#line 207 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__TaggedCases_76;

#line 417 "ml_switch_gen.m"
                {
#line 417 "ml_switch_gen.m"
                  mercury__list__map_3_p_0(ml_backend__ml_switch_gen__TypeCtorInfo_30_86, ml_backend__ml_switch_gen__TypeInfo_31_87, (MR_Word) &ml_backend__ml_switch_gen_scalar_common_1[2], ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__CostTaggedCases0_74);
                }
#line 420 "ml_switch_gen.m"
                {
#line 420 "ml_switch_gen.m"
                  mercury__list__sort_2_p_0(ml_backend__ml_switch_gen__TypeInfo_31_87, ml_backend__ml_switch_gen__CostTaggedCases0_74, &ml_backend__ml_switch_gen__CostTaggedCases_75);
                }
#line 421 "ml_switch_gen.m"
                {
#line 421 "ml_switch_gen.m"
                  mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_switch_gen__TypeCtorInfo_30_86, ml_backend__ml_switch_gen__CostTaggedCases_75, &ml_backend__ml_switch_gen__TaggedCases_76);
                }
#line 426 "ml_switch_gen.m"
                if ((ml_backend__ml_switch_gen__TaggedCases_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "ml_switch_gen.m"
                  {
#line 425 "ml_switch_gen.m"
                    {
#line 425 "ml_switch_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_switch_gen", (MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/8", (MR_String) "empty switch");
#line 425 "ml_switch_gen.m"
                      return;
                    }
#line 424 "ml_switch_gen.m"
                  }
#line 426 "ml_switch_gen.m"
                else
#line 427 "ml_switch_gen.m"
                  {
#line 427 "ml_switch_gen.m"
                    MR_Word ml_backend__ml_switch_gen__FirstTaggedCase_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_76, (MR_Integer) 0)));
#line 427 "ml_switch_gen.m"
                    MR_Word ml_backend__ml_switch_gen__LaterTaggedCases_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_switch_gen__TaggedCases_76, (MR_Integer) 1)));

#line 428 "ml_switch_gen.m"
                    {
#line 428 "ml_switch_gen.m"
                      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_p_0(ml_backend__ml_switch_gen__FirstTaggedCase_77, ml_backend__ml_switch_gen__LaterTaggedCases_78, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
                    }
#line 427 "ml_switch_gen.m"
                  }
#line 210 "ml_switch_gen.m"
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "ml_switch_gen.m"
              }
#line 186 "ml_switch_gen.m"
              break;
#line 186 "ml_switch_gen.m"
            case (MR_Integer) 1:
#line 188 "ml_switch_gen.m"
              {
#line 188 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__ml_gen_smart_string_switch_10_p_0(ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__GoalInfo_16, ml_backend__ml_switch_gen__Decls_17, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
              }
#line 186 "ml_switch_gen.m"
              break;
#line 186 "ml_switch_gen.m"
            case (MR_Integer) 2:
#line 191 "ml_switch_gen.m"
              {
#line 191 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__NumConsIds_27;
#line 191 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__NumArms_28;
#line 191 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__TagSize_29;
#line 195 "ml_switch_gen.m"
                MR_Integer ml_backend__ml_switch_gen__V_34_34;
#line 195 "ml_switch_gen.m"
                MR_Word ml_backend__ml_switch_gen__V_35_35;

#line 192 "ml_switch_gen.m"
                {
#line 192 "ml_switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ml_backend__ml_switch_gen__TaggedCases_22, &ml_backend__ml_switch_gen__NumConsIds_27, &ml_backend__ml_switch_gen__NumArms_28);
                }
#line 193 "ml_switch_gen.m"
                {
#line 193 "ml_switch_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ml_backend__ml_switch_gen__Globals_26, (MR_Integer) 433, &ml_backend__ml_switch_gen__TagSize_29);
                }
#line 195 "ml_switch_gen.m"
                ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumConsIds_27 >= ml_backend__ml_switch_gen__TagSize_29);
#line 195 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 195 "ml_switch_gen.m"
                  {
#line 196 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__V_34_34 = (MR_Integer) 1;
#line 196 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__NumArms_28 > ml_backend__ml_switch_gen__V_34_34);
#line 195 "ml_switch_gen.m"
                    if (ml_backend__ml_switch_gen__succeeded)
#line 195 "ml_switch_gen.m"
                      {
#line 197 "ml_switch_gen.m"
                        {
#line 197 "ml_switch_gen.m"
                          ml_backend__ml_switch_gen__V_35_35 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(ml_backend__ml_switch_gen__Globals_26);
                        }
#line 197 "ml_switch_gen.m"
                        ml_backend__ml_switch_gen__succeeded = (ml_backend__ml_switch_gen__V_35_35 == (MR_Integer) 1);
#line 195 "ml_switch_gen.m"
                      }
#line 195 "ml_switch_gen.m"
                  }
#line 201 "ml_switch_gen.m"
                if (ml_backend__ml_switch_gen__succeeded)
#line 199 "ml_switch_gen.m"
                  {
#line 199 "ml_switch_gen.m"
                    ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
                  }
#line 201 "ml_switch_gen.m"
                else
#line 202 "ml_switch_gen.m"
                  {
#line 202 "ml_switch_gen.m"
                    ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_8_p_0(ml_backend__ml_switch_gen__TaggedCases_22, ml_backend__ml_switch_gen__SwitchVar_11, ml_backend__ml_switch_gen__CodeModel_14, ml_backend__ml_switch_gen__CanFail_12, ml_backend__ml_switch_gen__Context_15, ml_backend__ml_switch_gen__Statements_18, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_switch_gen__STATE_VARIABLE_Info_31);
                  }
#line 205 "ml_switch_gen.m"
                *ml_backend__ml_switch_gen__Decls_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "ml_switch_gen.m"
              }
#line 186 "ml_switch_gen.m"
              break;
#line 186 "ml_switch_gen.m"
          }
#line 179 "ml_switch_gen.m"
        }
#line 178 "ml_switch_gen.m"
        break;
#line 178 "ml_switch_gen.m"
    }
#line 162 "ml_switch_gen.m"
  }
#line 120 "ml_switch_gen.m"
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
