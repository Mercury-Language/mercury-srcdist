/*
** Automatically generated from `switch_gen.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module ll_backend.switch_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__switch_gen__init
ENDINIT
*/

#include "ll_backend.switch_gen.mih"


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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "backend_libs.builtin_ops.mih"
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
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.dense_switch.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.lookup_switch.mih"
#include "ll_backend.string_switch.mih"
#include "ll_backend.tag_switch.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 165 "ll_backend.switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0;

#line 650 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0_1(
#line 650 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 650 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 650 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2,
#line 650 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_3);

#line 619 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__BranchStart_16,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases_17,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_18,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_19,
#line 619 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_20,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CheaperTagTest_21,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_22,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_23,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__SwitchGoalInfo_24,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_25,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54,
#line 619 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55,
#line 619 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_27,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_56,
#line 619 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_57);

#line 615 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3(
#line 615 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 615 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 615 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_2);

#line 614 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
#line 614 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 614 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 613 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
#line 613 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 613 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 607 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
#line 607 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCase_3);

#line 494 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
#line 494 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 494 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 494 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3);

#line 603 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2(
#line 603 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 603 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 603 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1(
#line 603 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 603 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 479 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(
#line 479 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases0_6,
#line 479 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Cases_7,
#line 479 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_8,
#line 479 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_9,
#line 479 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CI_10);

#line 444 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(
#line 444 "switch_gen.m"
  MR_Word ll_backend__switch_gen__ConsTag_3);

#line 430 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(
#line 430 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1);

#line 409 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(
#line 409 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 409 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 409 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3);

#line 329 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_13_p_0(
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCases_14,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_15,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_16,
#line 329 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_17,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_18,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_19,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__GoalInfo_20,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_21,
#line 329 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__MaybeEnd_22,
#line 329 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_23,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_34,
#line 329 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_35,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_0_36);

#line 251 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_3(
#line 251 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 251 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 251 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2);

#line 230 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_2(
#line 230 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 230 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 230 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2);

#line 185 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_1(
#line 185 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 185 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 185 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2);


static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_1[10][3];

static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_2[4][5];

static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_3[2][6];




static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_1[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[0])),
    ((MR_Box) (ll_backend__switch_gen__generate_switch_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[1])),
    ((MR_Box) (ll_backend__switch_gen__generate_switch_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[1])),
    ((MR_Box) (ll_backend__switch_gen__generate_switch_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[2])),
    ((MR_Box) (ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[2])),
    ((MR_Box) (ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[3])),
    ((MR_Box) (ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[0])),
    ((MR_Box) (ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_3[0])),
    ((MR_Box) (ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_3[1])),
    ((MR_Box) (ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_2[4][5] = {
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
    ((MR_Box) (&ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
};

static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 506 "ll_backend.switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0
  }
};

#line 650 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0_1(
#line 650 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 650 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 650 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2,
#line 650 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_3)
#line 650 "switch_gen.m"
{
#line 650 "switch_gen.m"
  {
#line 650 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 650 "switch_gen.m"
    MR_String ll_backend__switch_gen__conv1_HeadVar__2_2;
#line 650 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv0_HeadVar__3_3;

#line 650 "switch_gen.m"
    {
#line 650 "switch_gen.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv1_HeadVar__2_2, &ll_backend__switch_gen__conv0_HeadVar__3_3);
    }
#line 650 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 650 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__3_3));
#line 650 "switch_gen.m"
  }
#line 650 "switch_gen.m"
}

#line 619 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__BranchStart_16,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases_17,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_18,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_19,
#line 619 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_20,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CheaperTagTest_21,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_22,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_23,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__SwitchGoalInfo_24,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_25,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54,
#line 619 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55,
#line 619 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_27,
#line 619 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_56,
#line 619 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_57)
#line 619 "switch_gen.m"
{
#line 629 "switch_gen.m"
  {
#line 629 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;

#line 629 "switch_gen.m"
    if ((ll_backend__switch_gen__Cases_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 673 "switch_gen.m"
      {
#line 673 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TypeCtorInfo_102_102;
#line 673 "switch_gen.m"
        MR_Word ll_backend__switch_gen__FailCode_52;
#line 673 "switch_gen.m"
        MR_Word ll_backend__switch_gen__EndCode_53;
#line 673 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_60_60;
#line 673 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_61_61;
#line 673 "switch_gen.m"
        MR_String ll_backend__switch_gen__V_62_62;

#line 683 "switch_gen.m"
#line 683 "switch_gen.m"
        switch (ll_backend__switch_gen__CanFail_23) {
#line 683 "switch_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 683 "switch_gen.m"
          case (MR_Integer) 0:
#line 675 "switch_gen.m"
            {
#line 675 "switch_gen.m"
              MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_58_58;

#line 680 "switch_gen.m"
              {
#line 680 "switch_gen.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_16, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, &ll_backend__switch_gen__STATE_VARIABLE_CLD_58_58);
              }
#line 681 "switch_gen.m"
              {
#line 681 "switch_gen.m"
                ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__switch_gen__FailCode_52, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_58_58);
              }
#line 675 "switch_gen.m"
            }
#line 683 "switch_gen.m"
            break;
#line 683 "switch_gen.m"
          case (MR_Integer) 1:
#line 684 "switch_gen.m"
            {
#line 685 "switch_gen.m"
              {
#line 685 "switch_gen.m"
                ll_backend__switch_gen__FailCode_52 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 684 "switch_gen.m"
              *ll_backend__switch_gen__STATE_VARIABLE_CI_57 = ll_backend__switch_gen__STATE_VARIABLE_CI_0_56;
#line 684 "switch_gen.m"
            }
#line 683 "switch_gen.m"
            break;
#line 683 "switch_gen.m"
        }
#line 651 "ll_backend.switch_gen.c"
        ll_backend__switch_gen__TypeCtorInfo_102_102 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 688 "switch_gen.m"
        {
#line 688 "switch_gen.m"
          ll_backend__switch_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "switch_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 688 "switch_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_61_61, 1) = ((MR_Box) (ll_backend__switch_gen__EndLabel_25));
#line 688 "switch_gen.m"
        }
#line 689 "switch_gen.m"
        {
#line 689 "switch_gen.m"
          ll_backend__switch_gen__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "end of the switch on ", ll_backend__switch_gen__VarName_20);
        }
#line 688 "switch_gen.m"
        {
#line 688 "switch_gen.m"
          ll_backend__switch_gen__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "switch_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_60_60, 0) = ((MR_Box) (ll_backend__switch_gen__V_61_61));
#line 688 "switch_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_60_60, 1) = ((MR_Box) (ll_backend__switch_gen__V_62_62));
#line 688 "switch_gen.m"
        }
#line 687 "switch_gen.m"
        {
#line 687 "switch_gen.m"
          ll_backend__switch_gen__EndCode_53 = mercury__cord__singleton_1_f_0(ll_backend__switch_gen__TypeCtorInfo_102_102, ((MR_Box) (ll_backend__switch_gen__V_60_60)));
        }
#line 691 "switch_gen.m"
        {
#line 691 "switch_gen.m"
          *ll_backend__switch_gen__Code_27 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_102_102, ll_backend__switch_gen__FailCode_52, ll_backend__switch_gen__EndCode_53);
        }
#line 673 "switch_gen.m"
        *ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55 = ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54;
#line 673 "switch_gen.m"
      }
#line 629 "switch_gen.m"
    else
#line 629 "switch_gen.m"
      {
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TypeCtorInfo_100_100;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadCase_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases_17, (MR_Integer) 0)));
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TailCases_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases_17, (MR_Integer) 1)));
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__MainTaggedConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 0)));
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__OtherTaggedConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 1)));
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 3)));
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__StoreMap_35;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TestCode_39;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ElseCode_40;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TraceCode_47;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__GoalCode_48;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__SaveCode_49;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadCaseCode_50;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TailCasesCode_51;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_65_65;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_81_81;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_82_82;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_83_83;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_84_84;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_85_85;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_86_86;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_87_87;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_88_88;
#line 629 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_89_89;
#line 630 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 2)));

#line 631 "switch_gen.m"
        {
#line 631 "switch_gen.m"
          hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_gen__SwitchGoalInfo_24, &ll_backend__switch_gen__StoreMap_35);
        }
#line 633 "switch_gen.m"
        {
#line 633 "switch_gen.m"
          MR_Word ll_backend__switch_gen__V_36_36;
#line 633 "switch_gen.m"
          MR_Word ll_backend__switch_gen__V_37_37;

#line 633 "switch_gen.m"
          ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__TailCases_30)) == (MR_mktag((MR_Integer) 1)));
#line 633 "switch_gen.m"
          if (ll_backend__switch_gen__succeeded)
#line 633 "switch_gen.m"
            {
#line 633 "switch_gen.m"
              ll_backend__switch_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__TailCases_30, (MR_Integer) 0)));
#line 633 "switch_gen.m"
              ll_backend__switch_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__TailCases_30, (MR_Integer) 1)));
#line 633 "switch_gen.m"
            }
#line 633 "switch_gen.m"
        }
#line 634 "switch_gen.m"
        if (!(ll_backend__switch_gen__succeeded))
#line 634 "switch_gen.m"
          ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CanFail_23 == (MR_Integer) 0);
#line 645 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 639 "switch_gen.m"
          {
#line 639 "switch_gen.m"
            MR_Word ll_backend__switch_gen__NextLabel_38;
#line 639 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_66_66;
#line 639 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_67_67;
#line 639 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_68_68;
#line 639 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_69_69;
#line 639 "switch_gen.m"
            MR_String ll_backend__switch_gen__V_70_70;
#line 639 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_72_72;
#line 639 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_73_73;
#line 639 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_74_74;

#line 637 "switch_gen.m"
            {
#line 637 "switch_gen.m"
              ll_backend__unify_gen__generate_raw_tag_test_case_11_p_0(ll_backend__switch_gen__VarRval_18, ll_backend__switch_gen__VarType_19, ll_backend__switch_gen__VarName_20, ll_backend__switch_gen__MainTaggedConsId_31, ll_backend__switch_gen__OtherTaggedConsIds_32, ll_backend__switch_gen__CheaperTagTest_21, (MR_Integer) 1, &ll_backend__switch_gen__NextLabel_38, &ll_backend__switch_gen__TestCode_39, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, &ll_backend__switch_gen__STATE_VARIABLE_CI_65_65);
            }
#line 641 "switch_gen.m"
            {
#line 641 "switch_gen.m"
              ll_backend__switch_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_69_69, 0) = ((MR_Box) (ll_backend__switch_gen__EndLabel_25));
#line 641 "switch_gen.m"
            }
#line 641 "switch_gen.m"
            {
#line 641 "switch_gen.m"
              ll_backend__switch_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 641 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_68_68, 1) = ((MR_Box) (ll_backend__switch_gen__V_69_69));
#line 641 "switch_gen.m"
            }
#line 642 "switch_gen.m"
            {
#line 642 "switch_gen.m"
              ll_backend__switch_gen__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) "skip to the end of the switch on ", ll_backend__switch_gen__VarName_20);
            }
#line 641 "switch_gen.m"
            {
#line 641 "switch_gen.m"
              ll_backend__switch_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_67_67, 0) = ((MR_Box) (ll_backend__switch_gen__V_68_68));
#line 641 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_67_67, 1) = ((MR_Box) (ll_backend__switch_gen__V_70_70));
#line 641 "switch_gen.m"
            }
#line 643 "switch_gen.m"
            {
#line 643 "switch_gen.m"
              ll_backend__switch_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 643 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_74_74, 1) = ((MR_Box) (ll_backend__switch_gen__NextLabel_38));
#line 643 "switch_gen.m"
            }
#line 643 "switch_gen.m"
            {
#line 643 "switch_gen.m"
              ll_backend__switch_gen__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 643 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_73_73, 0) = ((MR_Box) (ll_backend__switch_gen__V_74_74));
#line 643 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_73_73, 1) = ((MR_Box) ((MR_String) "next case"));
#line 643 "switch_gen.m"
            }
#line 644 "switch_gen.m"
            {
#line 644 "switch_gen.m"
              ll_backend__switch_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_72_72, 0) = ((MR_Box) (ll_backend__switch_gen__V_73_73));
#line 644 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "switch_gen.m"
            }
#line 642 "switch_gen.m"
            {
#line 642 "switch_gen.m"
              ll_backend__switch_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_66_66, 0) = ((MR_Box) (ll_backend__switch_gen__V_67_67));
#line 642 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_66_66, 1) = ((MR_Box) (ll_backend__switch_gen__V_72_72));
#line 642 "switch_gen.m"
            }
#line 640 "switch_gen.m"
            {
#line 640 "switch_gen.m"
              ll_backend__switch_gen__ElseCode_40 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_gen__V_66_66);
            }
#line 639 "switch_gen.m"
          }
#line 645 "switch_gen.m"
        else
#line 649 "switch_gen.m"
          {
#line 649 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TypeCtorInfo_99_99;
#line 649 "switch_gen.m"
            MR_String ll_backend__switch_gen__MainConsName_41;
#line 649 "switch_gen.m"
            MR_Word ll_backend__switch_gen__OtherConsNames_43;
#line 649 "switch_gen.m"
            MR_String ll_backend__switch_gen__Comment_45;
#line 649 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_78_78;
#line 649 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_79_79;
#line 649 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_42_42;
#line 650 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_44_44;

#line 649 "switch_gen.m"
            {
#line 649 "switch_gen.m"
              hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__switch_gen__MainTaggedConsId_31, &ll_backend__switch_gen__MainConsName_41, &ll_backend__switch_gen__V_42_42);
            }
#line 650 "switch_gen.m"
            {
#line 650 "switch_gen.m"
              mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &ll_backend__switch_gen_scalar_common_1[9], ll_backend__switch_gen__OtherTaggedConsIds_32, &ll_backend__switch_gen__OtherConsNames_43, &ll_backend__switch_gen__V_44_44);
            }
#line 652 "switch_gen.m"
            {
#line 652 "switch_gen.m"
              ll_backend__switch_gen__Comment_45 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__switch_gen__VarName_20, ll_backend__switch_gen__MainConsName_41, ll_backend__switch_gen__OtherConsNames_43);
            }
#line 921 "ll_backend.switch_gen.c"
            ll_backend__switch_gen__TypeCtorInfo_99_99 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 654 "switch_gen.m"
            {
#line 654 "switch_gen.m"
              ll_backend__switch_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 654 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_79_79, 0) = ((MR_Box) (ll_backend__switch_gen__Comment_45));
#line 654 "switch_gen.m"
            }
#line 654 "switch_gen.m"
            {
#line 654 "switch_gen.m"
              ll_backend__switch_gen__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 654 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_78_78, 0) = ((MR_Box) (ll_backend__switch_gen__V_79_79));
#line 654 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_78_78, 1) = ((MR_Box) ((MR_String) ""));
#line 654 "switch_gen.m"
            }
#line 653 "switch_gen.m"
            {
#line 653 "switch_gen.m"
              ll_backend__switch_gen__TestCode_39 = mercury__cord__singleton_1_f_0(ll_backend__switch_gen__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__switch_gen__V_78_78)));
            }
#line 656 "switch_gen.m"
            {
#line 656 "switch_gen.m"
              ll_backend__switch_gen__ElseCode_40 = mercury__cord__empty_0_f_0(ll_backend__switch_gen__TypeCtorInfo_99_99);
            }
#line 649 "switch_gen.m"
            ll_backend__switch_gen__STATE_VARIABLE_CI_65_65 = ll_backend__switch_gen__STATE_VARIABLE_CI_0_56;
#line 649 "switch_gen.m"
          }
#line 660 "switch_gen.m"
        {
#line 660 "switch_gen.m"
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_16, ll_backend__switch_gen__STATE_VARIABLE_CI_65_65, &ll_backend__switch_gen__STATE_VARIABLE_CLD_81_81);
        }
#line 661 "switch_gen.m"
        {
#line 661 "switch_gen.m"
          ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__switch_gen__Goal_34, ll_backend__switch_gen__SwitchGoalInfo_24, &ll_backend__switch_gen__TraceCode_47, ll_backend__switch_gen__STATE_VARIABLE_CI_65_65, &ll_backend__switch_gen__STATE_VARIABLE_CI_82_82, ll_backend__switch_gen__STATE_VARIABLE_CLD_81_81, &ll_backend__switch_gen__STATE_VARIABLE_CLD_83_83);
        }
#line 663 "switch_gen.m"
        {
#line 663 "switch_gen.m"
          ll_backend__code_gen__generate_goal_7_p_0(ll_backend__switch_gen__CodeModel_22, ll_backend__switch_gen__Goal_34, &ll_backend__switch_gen__GoalCode_48, ll_backend__switch_gen__STATE_VARIABLE_CI_82_82, &ll_backend__switch_gen__STATE_VARIABLE_CI_84_84, ll_backend__switch_gen__STATE_VARIABLE_CLD_83_83, &ll_backend__switch_gen__STATE_VARIABLE_CLD_85_85);
        }
#line 664 "switch_gen.m"
        {
#line 664 "switch_gen.m"
          ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__switch_gen__StoreMap_35, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54, &ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_86_86, &ll_backend__switch_gen__SaveCode_49, ll_backend__switch_gen__STATE_VARIABLE_CI_84_84, ll_backend__switch_gen__STATE_VARIABLE_CLD_85_85);
        }
#line 975 "ll_backend.switch_gen.c"
        ll_backend__switch_gen__TypeCtorInfo_100_100 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 666 "switch_gen.m"
        {
#line 666 "switch_gen.m"
          ll_backend__switch_gen__V_89_89 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__SaveCode_49, ll_backend__switch_gen__ElseCode_40);
        }
#line 666 "switch_gen.m"
        {
#line 666 "switch_gen.m"
          ll_backend__switch_gen__V_88_88 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__GoalCode_48, ll_backend__switch_gen__V_89_89);
        }
#line 666 "switch_gen.m"
        {
#line 666 "switch_gen.m"
          ll_backend__switch_gen__V_87_87 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__TraceCode_47, ll_backend__switch_gen__V_88_88);
        }
#line 666 "switch_gen.m"
        {
#line 666 "switch_gen.m"
          ll_backend__switch_gen__HeadCaseCode_50 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__TestCode_39, ll_backend__switch_gen__V_87_87);
        }
#line 668 "switch_gen.m"
        {
#line 668 "switch_gen.m"
          ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(ll_backend__switch_gen__BranchStart_16, ll_backend__switch_gen__TailCases_30, ll_backend__switch_gen__VarRval_18, ll_backend__switch_gen__VarType_19, ll_backend__switch_gen__VarName_20, ll_backend__switch_gen__CheaperTagTest_21, ll_backend__switch_gen__CodeModel_22, ll_backend__switch_gen__CanFail_23, ll_backend__switch_gen__SwitchGoalInfo_24, ll_backend__switch_gen__EndLabel_25, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_86_86, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55, &ll_backend__switch_gen__TailCasesCode_51, ll_backend__switch_gen__STATE_VARIABLE_CI_84_84, ll_backend__switch_gen__STATE_VARIABLE_CI_57);
        }
#line 671 "switch_gen.m"
        {
#line 671 "switch_gen.m"
          *ll_backend__switch_gen__Code_27 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__HeadCaseCode_50, ll_backend__switch_gen__TailCasesCode_51);
        }
#line 629 "switch_gen.m"
      }
#line 629 "switch_gen.m"
  }
#line 619 "switch_gen.m"
}

#line 615 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3(
#line 615 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 615 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 615 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_2)
#line 615 "switch_gen.m"
{
#line 615 "switch_gen.m"
  {
#line 615 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_3;
#line 615 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 615 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__conv2_HeadVar__3_3;

#line 615 "switch_gen.m"
    {
#line 615 "switch_gen.m"
      ll_backend__switch_gen__conv2_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) ll_backend__switch_gen__wrapper_arg_1), ((MR_Integer) ll_backend__switch_gen__wrapper_arg_2));
    }
#line 615 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_gen__conv2_HeadVar__3_3));
#line 615 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_3;
#line 615 "switch_gen.m"
  }
#line 615 "switch_gen.m"
}

#line 614 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
#line 614 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 614 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 614 "switch_gen.m"
{
#line 614 "switch_gen.m"
  {
#line 614 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 614 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 614 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__conv1_HeadVar__2_2;

#line 614 "switch_gen.m"
    {
#line 614 "switch_gen.m"
      ll_backend__switch_gen__conv1_HeadVar__2_2 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 614 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 614 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 614 "switch_gen.m"
  }
#line 614 "switch_gen.m"
}

#line 613 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
#line 613 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 613 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 613 "switch_gen.m"
{
#line 613 "switch_gen.m"
  {
#line 613 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 613 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 613 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv0_HeadVar__2_2;

#line 613 "switch_gen.m"
    {
#line 613 "switch_gen.m"
      ll_backend__switch_gen__conv0_HeadVar__2_2 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 613 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
#line 613 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 613 "switch_gen.m"
  }
#line 613 "switch_gen.m"
}

#line 607 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
#line 607 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCase_3)
#line 607 "switch_gen.m"
{
#line 609 "switch_gen.m"
  {
#line 609 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 609 "switch_gen.m"
    MR_Word ll_backend__switch_gen__HeadVar__2_2;
#line 609 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeCtorInfo_19_19;
#line 609 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeCtorInfo_22_22;
#line 609 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__Cost_4;
#line 609 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MainTaggedConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 0)));
#line 609 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OtherTaggedConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 1)));
#line 609 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MainTag_9;
#line 609 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__MainCost_10;
#line 609 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OtherTags_11;
#line 609 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OtherCosts_12;
#line 609 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_16_16;
#line 610 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 2)));
#line 610 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 3)));
#line 615 "switch_gen.m"
    MR_Box ll_backend__switch_gen__conv3_Cost_4;

#line 611 "switch_gen.m"
    {
#line 611 "switch_gen.m"
      ll_backend__switch_gen__MainTag_9 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(ll_backend__switch_gen__MainTaggedConsId_5);
    }
#line 612 "switch_gen.m"
    {
#line 612 "switch_gen.m"
      ll_backend__switch_gen__MainCost_10 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ll_backend__switch_gen__MainTag_9);
    }
#line 1162 "ll_backend.switch_gen.c"
    ll_backend__switch_gen__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 613 "switch_gen.m"
    {
#line 613 "switch_gen.m"
      ll_backend__switch_gen__OtherTags_11 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, ll_backend__switch_gen__TypeCtorInfo_19_19, (MR_Word) &ll_backend__switch_gen_scalar_common_1[6], ll_backend__switch_gen__OtherTaggedConsIds_6);
    }
#line 1169 "ll_backend.switch_gen.c"
    ll_backend__switch_gen__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 614 "switch_gen.m"
    {
#line 614 "switch_gen.m"
      ll_backend__switch_gen__OtherCosts_12 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_19_19, ll_backend__switch_gen__TypeCtorInfo_22_22, (MR_Word) &ll_backend__switch_gen_scalar_common_1[7], ll_backend__switch_gen__OtherTags_11);
    }
#line 615 "switch_gen.m"
    {
#line 615 "switch_gen.m"
      ll_backend__switch_gen__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "switch_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_16_16, 0) = ((MR_Box) (ll_backend__switch_gen__MainCost_10));
#line 615 "switch_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_16_16, 1) = ((MR_Box) (ll_backend__switch_gen__OtherCosts_12));
#line 615 "switch_gen.m"
    }
#line 615 "switch_gen.m"
    {
#line 615 "switch_gen.m"
      ll_backend__switch_gen__conv3_Cost_4 = mercury__list__foldl_3_f_0(ll_backend__switch_gen__TypeCtorInfo_22_22, ll_backend__switch_gen__TypeCtorInfo_22_22, (MR_Word) &ll_backend__switch_gen_scalar_common_1[8], ll_backend__switch_gen__V_16_16, ((MR_Box) ((MR_Integer) 0)));
    }
#line 615 "switch_gen.m"
    ll_backend__switch_gen__Cost_4 = ((MR_Integer) ll_backend__switch_gen__conv3_Cost_4);
#line 609 "switch_gen.m"
    {
#line 609 "switch_gen.m"
      ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 609 "switch_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__switch_gen__Cost_4));
#line 609 "switch_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_3));
#line 609 "switch_gen.m"
    }
#line 609 "switch_gen.m"
    return ll_backend__switch_gen__HeadVar__2_2;
#line 609 "switch_gen.m"
  }
#line 607 "switch_gen.m"
}

#line 494 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
#line 494 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 494 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 494 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3)
#line 494 "switch_gen.m"
{
#line 497 "switch_gen.m"
  {
#line 497 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;

#line 497 "switch_gen.m"
    if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "switch_gen.m"
      {
#line 497 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 497 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 497 "switch_gen.m"
      }
#line 497 "switch_gen.m"
    else
#line 499 "switch_gen.m"
      {
#line 499 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Case_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 499 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 499 "switch_gen.m"
        MR_Word ll_backend__switch_gen__CanSucceedCases1_8;
#line 499 "switch_gen.m"
        MR_Word ll_backend__switch_gen__CannotSucceedCases1_9;
#line 499 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal_13;
#line 499 "switch_gen.m"
        MR_Word ll_backend__switch_gen__GoalInfo_15;
#line 499 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Detism_16;
#line 499 "switch_gen.m"
        MR_Word ll_backend__switch_gen__SolnCount_18;
#line 502 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_10_10;
#line 502 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_11_11;
#line 502 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_12_12;
#line 503 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_14_14;
#line 505 "switch_gen.m"
        MR_Word ll_backend__switch_gen___CanFail_17;

#line 500 "switch_gen.m"
        {
#line 500 "switch_gen.m"
          ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(ll_backend__switch_gen__Cases_5, &ll_backend__switch_gen__CanSucceedCases1_8, &ll_backend__switch_gen__CannotSucceedCases1_9);
        }
#line 502 "switch_gen.m"
        ll_backend__switch_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 0)));
#line 502 "switch_gen.m"
        ll_backend__switch_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 1)));
#line 502 "switch_gen.m"
        ll_backend__switch_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 2)));
#line 502 "switch_gen.m"
        ll_backend__switch_gen__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 3)));
#line 503 "switch_gen.m"
        ll_backend__switch_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Goal_13, (MR_Integer) 0)));
#line 503 "switch_gen.m"
        ll_backend__switch_gen__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Goal_13, (MR_Integer) 1)));
#line 504 "switch_gen.m"
        {
#line 504 "switch_gen.m"
          ll_backend__switch_gen__Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__switch_gen__GoalInfo_15);
        }
#line 505 "switch_gen.m"
        {
#line 505 "switch_gen.m"
          parse_tree__prog_data__determinism_components_3_p_0(ll_backend__switch_gen__Detism_16, &ll_backend__switch_gen___CanFail_17, &ll_backend__switch_gen__SolnCount_18);
        }
#line 513 "switch_gen.m"
#line 513 "switch_gen.m"
        switch (ll_backend__switch_gen__SolnCount_18) {
#line 513 "switch_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 513 "switch_gen.m"
          case (MR_Integer) 3:
#line 513 "switch_gen.m"
          case (MR_Integer) 2:
#line 513 "switch_gen.m"
          case (MR_Integer) 1:
#line 510 "switch_gen.m"
            {
#line 511 "switch_gen.m"
              {
#line 511 "switch_gen.m"
                MR_Word base;
#line 511 "switch_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "switch_gen.m"
                *ll_backend__switch_gen__HeadVar__2_2 = base;
#line 511 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__Case_4));
#line 511 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__CanSucceedCases1_8));
#line 511 "switch_gen.m"
              }
#line 512 "switch_gen.m"
              *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__CannotSucceedCases1_9;
#line 510 "switch_gen.m"
            }
#line 513 "switch_gen.m"
            break;
#line 513 "switch_gen.m"
          case (MR_Integer) 0:
#line 514 "switch_gen.m"
            {
#line 515 "switch_gen.m"
              *ll_backend__switch_gen__HeadVar__2_2 = ll_backend__switch_gen__CanSucceedCases1_8;
#line 516 "switch_gen.m"
              {
#line 516 "switch_gen.m"
                MR_Word base;
#line 516 "switch_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "switch_gen.m"
                *ll_backend__switch_gen__HeadVar__3_3 = base;
#line 516 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__Case_4));
#line 516 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__CannotSucceedCases1_9));
#line 516 "switch_gen.m"
              }
#line 514 "switch_gen.m"
            }
#line 513 "switch_gen.m"
            break;
#line 513 "switch_gen.m"
        }
#line 499 "switch_gen.m"
      }
#line 497 "switch_gen.m"
  }
#line 494 "switch_gen.m"
}

#line 603 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2(
#line 603 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 603 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 603 "switch_gen.m"
{
#line 603 "switch_gen.m"
  {
#line 603 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 603 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 603 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv1_HeadVar__2_2;

#line 603 "switch_gen.m"
    {
#line 603 "switch_gen.m"
      ll_backend__switch_gen__conv1_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 603 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 603 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 603 "switch_gen.m"
  }
#line 603 "switch_gen.m"
}

#line 603 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1(
#line 603 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 603 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 603 "switch_gen.m"
{
#line 603 "switch_gen.m"
  {
#line 603 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 603 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 603 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv0_HeadVar__2_2;

#line 603 "switch_gen.m"
    {
#line 603 "switch_gen.m"
      ll_backend__switch_gen__conv0_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 603 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
#line 603 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 603 "switch_gen.m"
  }
#line 603 "switch_gen.m"
}

#line 479 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(
#line 479 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases0_6,
#line 479 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Cases_7,
#line 479 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_8,
#line 479 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_9,
#line 479 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CI_10)
#line 479 "switch_gen.m"
{
#line 483 "switch_gen.m"
  {
#line 483 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 483 "switch_gen.m"
    MR_Word ll_backend__switch_gen__CanSucceedCases_11;
#line 483 "switch_gen.m"
    MR_Word ll_backend__switch_gen__CannotSucceedCases_12;

#line 484 "switch_gen.m"
    {
#line 484 "switch_gen.m"
      ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(ll_backend__switch_gen__Cases0_6, &ll_backend__switch_gen__CanSucceedCases_11, &ll_backend__switch_gen__CannotSucceedCases_12);
    }
#line 488 "switch_gen.m"
    if ((ll_backend__switch_gen__CannotSucceedCases_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 593 "switch_gen.m"
      {
#line 593 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Case1_21;
#line 593 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Case2_22;
#line 593 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal1_26;
#line 593 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal2_30;
#line 526 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_44_44;
#line 526 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_45_45;
#line 529 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_23_23;
#line 529 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_24_24;
#line 529 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_25_25;
#line 530 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_27_27;
#line 530 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_28_28;
#line 530 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_29_29;

#line 526 "switch_gen.m"
        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CodeModel_8 == (MR_Integer) 0);
#line 526 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 526 "switch_gen.m"
          {
#line 527 "switch_gen.m"
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CanFail_9 == (MR_Integer) 1);
#line 526 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 526 "switch_gen.m"
              {
#line 528 "switch_gen.m"
                ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__Cases0_6)) == (MR_mktag((MR_Integer) 1)));
#line 528 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 528 "switch_gen.m"
                  {
#line 528 "switch_gen.m"
                    ll_backend__switch_gen__Case1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases0_6, (MR_Integer) 0)));
#line 528 "switch_gen.m"
                    ll_backend__switch_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases0_6, (MR_Integer) 1)));
#line 528 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 528 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 528 "switch_gen.m"
                      {
#line 528 "switch_gen.m"
                        ll_backend__switch_gen__Case2_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_44_44, (MR_Integer) 0)));
#line 528 "switch_gen.m"
                        ll_backend__switch_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_44_44, (MR_Integer) 1)));
#line 528 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 526 "switch_gen.m"
                          {
#line 529 "switch_gen.m"
                            ll_backend__switch_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 0)));
#line 529 "switch_gen.m"
                            ll_backend__switch_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 1)));
#line 529 "switch_gen.m"
                            ll_backend__switch_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 2)));
#line 529 "switch_gen.m"
                            ll_backend__switch_gen__Goal1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 3)));
#line 530 "switch_gen.m"
                            ll_backend__switch_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 0)));
#line 530 "switch_gen.m"
                            ll_backend__switch_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 1)));
#line 530 "switch_gen.m"
                            ll_backend__switch_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 2)));
#line 530 "switch_gen.m"
                            ll_backend__switch_gen__Goal2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 3)));
#line 530 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = MR_TRUE;
#line 526 "switch_gen.m"
                          }
#line 528 "switch_gen.m"
                      }
#line 528 "switch_gen.m"
                  }
#line 526 "switch_gen.m"
              }
#line 526 "switch_gen.m"
          }
#line 593 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 532 "switch_gen.m"
          {
#line 532 "switch_gen.m"
            MR_Word ll_backend__switch_gen__ModuleInfo_31;
#line 532 "switch_gen.m"
            MR_Word ll_backend__switch_gen__Globals_32;
#line 532 "switch_gen.m"
            MR_Word ll_backend__switch_gen__PredId_33;
#line 532 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__ProcId_34;
#line 532 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Min1_35;
#line 532 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Max1_36;
#line 532 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Min2_37;
#line 532 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Max2_38;
#line 564 "switch_gen.m"
            MR_Word ll_backend__switch_gen__BaseCase_39;
#line 564 "switch_gen.m"
            MR_Word ll_backend__switch_gen__SingleRecCase_40;

#line 532 "switch_gen.m"
            {
#line 532 "switch_gen.m"
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__ModuleInfo_31);
            }
#line 533 "switch_gen.m"
            {
#line 533 "switch_gen.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__switch_gen__ModuleInfo_31, &ll_backend__switch_gen__Globals_32);
            }
#line 534 "switch_gen.m"
            {
#line 534 "switch_gen.m"
              ll_backend__code_info__get_pred_id_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__PredId_33);
            }
#line 535 "switch_gen.m"
            {
#line 535 "switch_gen.m"
              ll_backend__code_info__get_proc_id_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__ProcId_34);
            }
#line 536 "switch_gen.m"
            {
#line 536 "switch_gen.m"
              hlds__goal_form__count_recursive_calls_5_p_0(ll_backend__switch_gen__Goal1_26, ll_backend__switch_gen__PredId_33, ll_backend__switch_gen__ProcId_34, &ll_backend__switch_gen__Min1_35, &ll_backend__switch_gen__Max1_36);
            }
#line 537 "switch_gen.m"
            {
#line 537 "switch_gen.m"
              hlds__goal_form__count_recursive_calls_5_p_0(ll_backend__switch_gen__Goal2_30, ll_backend__switch_gen__PredId_33, ll_backend__switch_gen__ProcId_34, &ll_backend__switch_gen__Min2_37, &ll_backend__switch_gen__Max2_38);
            }
#line 540 "switch_gen.m"
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max1_36 == (MR_Integer) 0);
#line 540 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 541 "switch_gen.m"
              ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min2_37 == (MR_Integer) 1);
#line 545 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 543 "switch_gen.m"
              {
#line 543 "switch_gen.m"
                ll_backend__switch_gen__BaseCase_39 = ll_backend__switch_gen__Case1_21;
#line 544 "switch_gen.m"
                ll_backend__switch_gen__SingleRecCase_40 = ll_backend__switch_gen__Case2_22;
#line 543 "switch_gen.m"
                ll_backend__switch_gen__succeeded = MR_TRUE;
#line 543 "switch_gen.m"
              }
#line 545 "switch_gen.m"
            else
#line 551 "switch_gen.m"
              {
#line 546 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max2_38 == (MR_Integer) 0);
#line 551 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 551 "switch_gen.m"
                  {
#line 547 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min1_35 == (MR_Integer) 1);
#line 551 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 551 "switch_gen.m"
                      {
#line 549 "switch_gen.m"
                        ll_backend__switch_gen__BaseCase_39 = ll_backend__switch_gen__Case2_22;
#line 550 "switch_gen.m"
                        ll_backend__switch_gen__SingleRecCase_40 = ll_backend__switch_gen__Case1_21;
#line 550 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = MR_TRUE;
#line 551 "switch_gen.m"
                      }
#line 551 "switch_gen.m"
                  }
#line 551 "switch_gen.m"
              }
#line 564 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 556 "switch_gen.m"
              {
#line 556 "switch_gen.m"
                MR_Word ll_backend__switch_gen__SingleRecBaseFirst_41;

#line 555 "switch_gen.m"
                {
#line 555 "switch_gen.m"
                  libs__globals__lookup_bool_option_3_p_0(ll_backend__switch_gen__Globals_32, (MR_Integer) 446, &ll_backend__switch_gen__SingleRecBaseFirst_41);
                }
#line 560 "switch_gen.m"
#line 560 "switch_gen.m"
                switch (ll_backend__switch_gen__SingleRecBaseFirst_41) {
#line 560 "switch_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 560 "switch_gen.m"
                  case (MR_Integer) 0:
#line 561 "switch_gen.m"
                    {
#line 561 "switch_gen.m"
                      MR_Word ll_backend__switch_gen__V_47_47;

#line 562 "switch_gen.m"
                      {
#line 562 "switch_gen.m"
                        ll_backend__switch_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_47_47, 0) = ((MR_Box) (ll_backend__switch_gen__SingleRecCase_40));
#line 562 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "switch_gen.m"
                      }
#line 562 "switch_gen.m"
                      {
#line 562 "switch_gen.m"
                        MR_Word base;
#line 562 "switch_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "switch_gen.m"
                        *ll_backend__switch_gen__Cases_7 = base;
#line 562 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_39));
#line 562 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_47_47));
#line 562 "switch_gen.m"
                      }
#line 561 "switch_gen.m"
                    }
#line 560 "switch_gen.m"
                    break;
#line 560 "switch_gen.m"
                  case (MR_Integer) 1:
#line 558 "switch_gen.m"
                    {
#line 558 "switch_gen.m"
                      MR_Word ll_backend__switch_gen__V_49_49;

#line 559 "switch_gen.m"
                      {
#line 559 "switch_gen.m"
                        ll_backend__switch_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_49_49, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_39));
#line 559 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "switch_gen.m"
                      }
#line 559 "switch_gen.m"
                      {
#line 559 "switch_gen.m"
                        MR_Word base;
#line 559 "switch_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "switch_gen.m"
                        *ll_backend__switch_gen__Cases_7 = base;
#line 559 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__SingleRecCase_40));
#line 559 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_49_49));
#line 559 "switch_gen.m"
                      }
#line 558 "switch_gen.m"
                    }
#line 560 "switch_gen.m"
                    break;
#line 560 "switch_gen.m"
                }
#line 556 "switch_gen.m"
              }
#line 564 "switch_gen.m"
            else
#line 590 "switch_gen.m"
              {
#line 590 "switch_gen.m"
                MR_Word ll_backend__switch_gen__MultiRecCase_42;
#line 590 "switch_gen.m"
                MR_Word ll_backend__switch_gen__BaseCase_58;
#line 566 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__V_51_51;

#line 566 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max1_36 == (MR_Integer) 0);
#line 566 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 566 "switch_gen.m"
                  {
#line 567 "switch_gen.m"
                    ll_backend__switch_gen__V_51_51 = (MR_Integer) 1;
#line 567 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min2_37 > ll_backend__switch_gen__V_51_51);
#line 566 "switch_gen.m"
                  }
#line 571 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 569 "switch_gen.m"
                  {
#line 569 "switch_gen.m"
                    ll_backend__switch_gen__BaseCase_58 = ll_backend__switch_gen__Case1_21;
#line 570 "switch_gen.m"
                    ll_backend__switch_gen__MultiRecCase_42 = ll_backend__switch_gen__Case2_22;
#line 569 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = MR_TRUE;
#line 569 "switch_gen.m"
                  }
#line 571 "switch_gen.m"
                else
#line 577 "switch_gen.m"
                  {
#line 577 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__V_52_52;

#line 572 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max2_38 == (MR_Integer) 0);
#line 577 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 577 "switch_gen.m"
                      {
#line 573 "switch_gen.m"
                        ll_backend__switch_gen__V_52_52 = (MR_Integer) 1;
#line 573 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min1_35 > ll_backend__switch_gen__V_52_52);
#line 577 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 577 "switch_gen.m"
                          {
#line 575 "switch_gen.m"
                            ll_backend__switch_gen__BaseCase_58 = ll_backend__switch_gen__Case2_22;
#line 576 "switch_gen.m"
                            ll_backend__switch_gen__MultiRecCase_42 = ll_backend__switch_gen__Case1_21;
#line 576 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = MR_TRUE;
#line 577 "switch_gen.m"
                          }
#line 577 "switch_gen.m"
                      }
#line 577 "switch_gen.m"
                  }
#line 590 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 582 "switch_gen.m"
                  {
#line 582 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__MultiRecBaseFirst_43;

#line 581 "switch_gen.m"
                    {
#line 581 "switch_gen.m"
                      libs__globals__lookup_bool_option_3_p_0(ll_backend__switch_gen__Globals_32, (MR_Integer) 447, &ll_backend__switch_gen__MultiRecBaseFirst_43);
                    }
#line 586 "switch_gen.m"
#line 586 "switch_gen.m"
                    switch (ll_backend__switch_gen__MultiRecBaseFirst_43) {
#line 586 "switch_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 586 "switch_gen.m"
                      case (MR_Integer) 0:
#line 587 "switch_gen.m"
                        {
#line 587 "switch_gen.m"
                          MR_Word ll_backend__switch_gen__V_54_54;

#line 588 "switch_gen.m"
                          {
#line 588 "switch_gen.m"
                            ll_backend__switch_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_54_54, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_58));
#line 588 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 588 "switch_gen.m"
                          }
#line 588 "switch_gen.m"
                          {
#line 588 "switch_gen.m"
                            MR_Word base;
#line 588 "switch_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "switch_gen.m"
                            *ll_backend__switch_gen__Cases_7 = base;
#line 588 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__MultiRecCase_42));
#line 588 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_54_54));
#line 588 "switch_gen.m"
                          }
#line 587 "switch_gen.m"
                        }
#line 586 "switch_gen.m"
                        break;
#line 586 "switch_gen.m"
                      case (MR_Integer) 1:
#line 584 "switch_gen.m"
                        {
#line 584 "switch_gen.m"
                          MR_Word ll_backend__switch_gen__V_56_56;

#line 585 "switch_gen.m"
                          {
#line 585 "switch_gen.m"
                            ll_backend__switch_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_56_56, 0) = ((MR_Box) (ll_backend__switch_gen__MultiRecCase_42));
#line 585 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "switch_gen.m"
                          }
#line 585 "switch_gen.m"
                          {
#line 585 "switch_gen.m"
                            MR_Word base;
#line 585 "switch_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "switch_gen.m"
                            *ll_backend__switch_gen__Cases_7 = base;
#line 585 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_58));
#line 585 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_56_56));
#line 585 "switch_gen.m"
                          }
#line 584 "switch_gen.m"
                        }
#line 586 "switch_gen.m"
                        break;
#line 586 "switch_gen.m"
                    }
#line 582 "switch_gen.m"
                  }
#line 590 "switch_gen.m"
                else
#line 602 "switch_gen.m"
                  {
#line 602 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__TypeCtorInfo_8_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 602 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__TypeInfo_9_65 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[0];
#line 602 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__CostedCases_61;
#line 602 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__SortedCostedCases_62;

#line 603 "switch_gen.m"
                    {
#line 603 "switch_gen.m"
                      ll_backend__switch_gen__CostedCases_61 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_8_64, ll_backend__switch_gen__TypeInfo_9_65, (MR_Word) &ll_backend__switch_gen_scalar_common_1[4], ll_backend__switch_gen__Cases0_6);
                    }
#line 604 "switch_gen.m"
                    {
#line 604 "switch_gen.m"
                      mercury__list__sort_2_p_0(ll_backend__switch_gen__TypeInfo_9_65, ll_backend__switch_gen__CostedCases_61, &ll_backend__switch_gen__SortedCostedCases_62);
                    }
#line 605 "switch_gen.m"
                    {
#line 605 "switch_gen.m"
                      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__switch_gen__TypeCtorInfo_8_64, ll_backend__switch_gen__SortedCostedCases_62, ll_backend__switch_gen__Cases_7);
#line 605 "switch_gen.m"
                      return;
                    }
#line 602 "switch_gen.m"
                  }
#line 590 "switch_gen.m"
              }
#line 532 "switch_gen.m"
          }
#line 593 "switch_gen.m"
        else
#line 602 "switch_gen.m"
          {
#line 602 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TypeCtorInfo_8_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 602 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TypeInfo_9_75 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[0];
#line 602 "switch_gen.m"
            MR_Word ll_backend__switch_gen__CostedCases_71;
#line 602 "switch_gen.m"
            MR_Word ll_backend__switch_gen__SortedCostedCases_72;

#line 603 "switch_gen.m"
            {
#line 603 "switch_gen.m"
              ll_backend__switch_gen__CostedCases_71 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_8_74, ll_backend__switch_gen__TypeInfo_9_75, (MR_Word) &ll_backend__switch_gen_scalar_common_1[5], ll_backend__switch_gen__Cases0_6);
            }
#line 604 "switch_gen.m"
            {
#line 604 "switch_gen.m"
              mercury__list__sort_2_p_0(ll_backend__switch_gen__TypeInfo_9_75, ll_backend__switch_gen__CostedCases_71, &ll_backend__switch_gen__SortedCostedCases_72);
            }
#line 605 "switch_gen.m"
            {
#line 605 "switch_gen.m"
              mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__switch_gen__TypeCtorInfo_8_74, ll_backend__switch_gen__SortedCostedCases_72, ll_backend__switch_gen__Cases_7);
#line 605 "switch_gen.m"
              return;
            }
#line 602 "switch_gen.m"
          }
#line 593 "switch_gen.m"
      }
#line 488 "switch_gen.m"
    else
#line 489 "switch_gen.m"
      {
#line 491 "switch_gen.m"
        {
#line 491 "switch_gen.m"
          *ll_backend__switch_gen__Cases_7 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__CanSucceedCases_11, ll_backend__switch_gen__CannotSucceedCases_12);
        }
#line 489 "switch_gen.m"
      }
#line 483 "switch_gen.m"
  }
#line 479 "switch_gen.m"
}

#line 444 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(
#line 444 "switch_gen.m"
  MR_Word ll_backend__switch_gen__ConsTag_3)
#line 444 "switch_gen.m"
{
#line 448 "switch_gen.m"
  while (MR_TRUE)
#line 448 "switch_gen.m"
    {
#line 448 "switch_gen.m"
      /* tailcall optimized into a loop */
#line 448 "switch_gen.m"
      {
#line 448 "switch_gen.m"
        MR_bool ll_backend__switch_gen__succeeded;
#line 448 "switch_gen.m"
        MR_Word ll_backend__switch_gen__IsReservedAddr_4;

#line 448 "switch_gen.m"
#line 448 "switch_gen.m"
        switch (MR_tag((MR_Word) ll_backend__switch_gen__ConsTag_3)) {
#line 448 "switch_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 448 "switch_gen.m"
          case (MR_Integer) 0:
#line 474 "switch_gen.m"
            ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 0;
#line 448 "switch_gen.m"
            break;
#line 448 "switch_gen.m"
          case (MR_Integer) 1:
#line 448 "switch_gen.m"
          case (MR_Integer) 2:
#line 474 "switch_gen.m"
            ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 0;
#line 448 "switch_gen.m"
            break;
#line 448 "switch_gen.m"
          case (MR_Integer) 3:
#line 448 "switch_gen.m"
#line 448 "switch_gen.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 0)))) {
#line 448 "switch_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 448 "switch_gen.m"
              case (MR_Integer) 0:
#line 448 "switch_gen.m"
              case (MR_Integer) 1:
#line 448 "switch_gen.m"
              case (MR_Integer) 2:
#line 448 "switch_gen.m"
              case (MR_Integer) 3:
#line 448 "switch_gen.m"
              case (MR_Integer) 4:
#line 448 "switch_gen.m"
              case (MR_Integer) 5:
#line 448 "switch_gen.m"
              case (MR_Integer) 6:
#line 448 "switch_gen.m"
              case (MR_Integer) 8:
#line 448 "switch_gen.m"
              case (MR_Integer) 9:
#line 448 "switch_gen.m"
              case (MR_Integer) 10:
#line 448 "switch_gen.m"
              case (MR_Integer) 11:
#line 448 "switch_gen.m"
              case (MR_Integer) 12:
#line 448 "switch_gen.m"
              case (MR_Integer) 13:
#line 448 "switch_gen.m"
              case (MR_Integer) 14:
#line 448 "switch_gen.m"
              case (MR_Integer) 16:
#line 474 "switch_gen.m"
                ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 0;
#line 448 "switch_gen.m"
                break;
#line 448 "switch_gen.m"
              case (MR_Integer) 7:
#line 451 "switch_gen.m"
                {
#line 451 "switch_gen.m"
                  MR_Word ll_backend__switch_gen__SubConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 2)));
#line 451 "switch_gen.m"
                  MR_Integer ll_backend__switch_gen__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 1)));

#line 452 "switch_gen.m"
                  /* direct tailcall eliminated */
#line 452 "switch_gen.m"
                  {
#line 452 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__ConsTag__tmp_copy_3 = ll_backend__switch_gen__SubConsTag_7;

#line 452 "switch_gen.m"
                    ll_backend__switch_gen__ConsTag_3 = ll_backend__switch_gen__ConsTag__tmp_copy_3;
#line 452 "switch_gen.m"
                  }
#line 452 "switch_gen.m"
                  continue;
#line 451 "switch_gen.m"
                }
#line 448 "switch_gen.m"
                break;
#line 448 "switch_gen.m"
              case (MR_Integer) 15:
#line 449 "switch_gen.m"
                ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 1;
#line 448 "switch_gen.m"
                break;
#line 448 "switch_gen.m"
            }
#line 448 "switch_gen.m"
            break;
#line 448 "switch_gen.m"
        }
#line 448 "switch_gen.m"
        return ll_backend__switch_gen__IsReservedAddr_4;
#line 448 "switch_gen.m"
      }
#line 448 "switch_gen.m"
      break;
#line 448 "switch_gen.m"
    }
#line 444 "switch_gen.m"
}

#line 430 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(
#line 430 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1)
#line 430 "switch_gen.m"
{
#line 432 "switch_gen.m"
  while (MR_TRUE)
#line 432 "switch_gen.m"
    {
#line 432 "switch_gen.m"
      /* tailcall optimized into a loop */
#line 432 "switch_gen.m"
      {
#line 432 "switch_gen.m"
        MR_bool ll_backend__switch_gen__succeeded;
#line 432 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadVar__2_2;

#line 432 "switch_gen.m"
        if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "switch_gen.m"
          ll_backend__switch_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 432 "switch_gen.m"
        else
#line 433 "switch_gen.m"
          {
#line 433 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TaggedConsId_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 433 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TaggedConsIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 433 "switch_gen.m"
            MR_Word ll_backend__switch_gen__ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_3, (MR_Integer) 1)));
#line 433 "switch_gen.m"
            MR_Word ll_backend__switch_gen__HeadContains_8;
#line 434 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_3, (MR_Integer) 0)));

#line 435 "switch_gen.m"
            {
#line 435 "switch_gen.m"
              ll_backend__switch_gen__HeadContains_8 = ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(ll_backend__switch_gen__ConsTag_7);
            }
#line 439 "switch_gen.m"
#line 439 "switch_gen.m"
            switch (ll_backend__switch_gen__HeadContains_8) {
#line 439 "switch_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 439 "switch_gen.m"
              case (MR_Integer) 0:
#line 441 "switch_gen.m"
                {
#line 441 "switch_gen.m"
                  /* direct tailcall eliminated */
#line 441 "switch_gen.m"
                  {
#line 441 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__HeadVar__1__tmp_copy_1 = ll_backend__switch_gen__TaggedConsIds_4;

#line 441 "switch_gen.m"
                    ll_backend__switch_gen__HeadVar__1_1 = ll_backend__switch_gen__HeadVar__1__tmp_copy_1;
#line 441 "switch_gen.m"
                  }
#line 441 "switch_gen.m"
                  continue;
#line 441 "switch_gen.m"
                }
#line 439 "switch_gen.m"
                break;
#line 439 "switch_gen.m"
              case (MR_Integer) 1:
#line 438 "switch_gen.m"
                ll_backend__switch_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 439 "switch_gen.m"
                break;
#line 439 "switch_gen.m"
            }
#line 433 "switch_gen.m"
          }
#line 432 "switch_gen.m"
        return ll_backend__switch_gen__HeadVar__2_2;
#line 432 "switch_gen.m"
      }
#line 432 "switch_gen.m"
      break;
#line 432 "switch_gen.m"
    }
#line 430 "switch_gen.m"
}

#line 409 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(
#line 409 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 409 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 409 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3)
#line 409 "switch_gen.m"
{
#line 412 "switch_gen.m"
  {
#line 412 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;

#line 412 "switch_gen.m"
    if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "switch_gen.m"
      {
#line 412 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "switch_gen.m"
      }
#line 412 "switch_gen.m"
    else
#line 414 "switch_gen.m"
      {
#line 414 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedCase_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 414 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedCases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 414 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ReservedAddrCasesTail_8;
#line 414 "switch_gen.m"
        MR_Word ll_backend__switch_gen__NonReservedAddrCasesTail_9;
#line 414 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedConsId_16;
#line 414 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedConsIds_17;
#line 414 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ConsTag_20;
#line 414 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadContains_21;
#line 417 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_12_12;
#line 417 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_13_13;
#line 434 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_19_19;

#line 415 "switch_gen.m"
        {
#line 415 "switch_gen.m"
          ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(ll_backend__switch_gen__TaggedCases_5, &ll_backend__switch_gen__ReservedAddrCasesTail_8, &ll_backend__switch_gen__NonReservedAddrCasesTail_9);
        }
#line 417 "switch_gen.m"
        ll_backend__switch_gen__TaggedConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 0)));
#line 417 "switch_gen.m"
        ll_backend__switch_gen__TaggedConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 1)));
#line 417 "switch_gen.m"
        ll_backend__switch_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 2)));
#line 417 "switch_gen.m"
        ll_backend__switch_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 3)));
#line 434 "switch_gen.m"
        ll_backend__switch_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_16, (MR_Integer) 0)));
#line 434 "switch_gen.m"
        ll_backend__switch_gen__ConsTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_16, (MR_Integer) 1)));
#line 435 "switch_gen.m"
        {
#line 435 "switch_gen.m"
          ll_backend__switch_gen__HeadContains_21 = ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(ll_backend__switch_gen__ConsTag_20);
        }
#line 2280 "ll_backend.switch_gen.c"
#line 2281 "ll_backend.switch_gen.c"
        switch (ll_backend__switch_gen__HeadContains_21) {
#line 2283 "ll_backend.switch_gen.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2285 "ll_backend.switch_gen.c"
          case (MR_Integer) 0:
#line 2287 "ll_backend.switch_gen.c"
            {
#line 2289 "ll_backend.switch_gen.c"
              MR_Word ll_backend__switch_gen__ContainsReservedAddr_15;

#line 441 "switch_gen.m"
              {
#line 441 "switch_gen.m"
                ll_backend__switch_gen__ContainsReservedAddr_15 = ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(ll_backend__switch_gen__TaggedConsIds_17);
              }
#line 424 "switch_gen.m"
#line 424 "switch_gen.m"
              switch (ll_backend__switch_gen__ContainsReservedAddr_15) {
#line 424 "switch_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 424 "switch_gen.m"
                case (MR_Integer) 0:
#line 425 "switch_gen.m"
                  {
#line 426 "switch_gen.m"
                    *ll_backend__switch_gen__HeadVar__2_2 = ll_backend__switch_gen__ReservedAddrCasesTail_8;
#line 427 "switch_gen.m"
                    {
#line 427 "switch_gen.m"
                      MR_Word base;
#line 427 "switch_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "switch_gen.m"
                      *ll_backend__switch_gen__HeadVar__3_3 = base;
#line 427 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
#line 427 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__NonReservedAddrCasesTail_9));
#line 427 "switch_gen.m"
                    }
#line 425 "switch_gen.m"
                  }
#line 424 "switch_gen.m"
                  break;
#line 424 "switch_gen.m"
                case (MR_Integer) 1:
#line 421 "switch_gen.m"
                  {
#line 422 "switch_gen.m"
                    {
#line 422 "switch_gen.m"
                      MR_Word base;
#line 422 "switch_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "switch_gen.m"
                      *ll_backend__switch_gen__HeadVar__2_2 = base;
#line 422 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
#line 422 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__ReservedAddrCasesTail_8));
#line 422 "switch_gen.m"
                    }
#line 423 "switch_gen.m"
                    *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__NonReservedAddrCasesTail_9;
#line 421 "switch_gen.m"
                  }
#line 424 "switch_gen.m"
                  break;
#line 424 "switch_gen.m"
              }
#line 2352 "ll_backend.switch_gen.c"
            }
#line 2354 "ll_backend.switch_gen.c"
            break;
#line 2356 "ll_backend.switch_gen.c"
          case (MR_Integer) 1:
#line 2358 "ll_backend.switch_gen.c"
            {
#line 422 "switch_gen.m"
              {
#line 422 "switch_gen.m"
                MR_Word base;
#line 422 "switch_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "switch_gen.m"
                *ll_backend__switch_gen__HeadVar__2_2 = base;
#line 422 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
#line 422 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__ReservedAddrCasesTail_8));
#line 422 "switch_gen.m"
              }
#line 423 "switch_gen.m"
              *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__NonReservedAddrCasesTail_9;
#line 2376 "ll_backend.switch_gen.c"
            }
#line 2378 "ll_backend.switch_gen.c"
            break;
#line 2380 "ll_backend.switch_gen.c"
        }
#line 414 "switch_gen.m"
      }
#line 412 "switch_gen.m"
  }
#line 409 "switch_gen.m"
}

#line 329 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_13_p_0(
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCases_14,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_15,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_16,
#line 329 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_17,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_18,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_19,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__GoalInfo_20,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_21,
#line 329 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__MaybeEnd_22,
#line 329 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_23,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_34,
#line 329 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_35,
#line 329 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_0_36)
#line 329 "switch_gen.m"
{
#line 335 "switch_gen.m"
  {
#line 335 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 335 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OrderedTaggedCases_26;
#line 335 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeCtor_27;
#line 335 "switch_gen.m"
    MR_Word ll_backend__switch_gen__ModuleInfo_28;
#line 335 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeTable_29;
#line 335 "switch_gen.m"
    MR_Word ll_backend__switch_gen__CheaperTagTest_32;
#line 335 "switch_gen.m"
    MR_Word ll_backend__switch_gen__BranchStart_33;
#line 386 "switch_gen.m"
    MR_Word ll_backend__switch_gen__VarTypeDefn_45;
#line 386 "switch_gen.m"
    MR_Word ll_backend__switch_gen__VarTypeDefnBody_46;
#line 386 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_51_51;
#line 388 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_52_52;
#line 388 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_53_53;
#line 388 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_54_54;
#line 388 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_55_55;
#line 388 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_56_56;
#line 388 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_57_57;
#line 388 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_58_58;
#line 388 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_59_59;
#line 344 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeDefn_30;

#line 386 "switch_gen.m"
    {
#line 386 "switch_gen.m"
      ll_backend__switch_gen__succeeded = ll_backend__code_info__search_type_defn_3_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_0_34, ll_backend__switch_gen__VarType_16, &ll_backend__switch_gen__VarTypeDefn_45);
    }
#line 386 "switch_gen.m"
    if (ll_backend__switch_gen__succeeded)
#line 386 "switch_gen.m"
      {
#line 387 "switch_gen.m"
        {
#line 387 "switch_gen.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__switch_gen__VarTypeDefn_45, &ll_backend__switch_gen__VarTypeDefnBody_46);
        }
#line 388 "switch_gen.m"
        ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__VarTypeDefnBody_46)) == (MR_mktag((MR_Integer) 1)));
#line 388 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 388 "switch_gen.m"
          {
#line 388 "switch_gen.m"
            ll_backend__switch_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 0)));
#line 388 "switch_gen.m"
            ll_backend__switch_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 1)));
#line 388 "switch_gen.m"
            ll_backend__switch_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 2)));
#line 388 "switch_gen.m"
            ll_backend__switch_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 3)));
#line 388 "switch_gen.m"
            ll_backend__switch_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 4)));
#line 388 "switch_gen.m"
            ll_backend__switch_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 5)));
#line 388 "switch_gen.m"
            ll_backend__switch_gen__V_58_58 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 388 "switch_gen.m"
            ll_backend__switch_gen__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 388 "switch_gen.m"
            ll_backend__switch_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 7)));
#line 388 "switch_gen.m"
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__V_51_51 == (MR_Integer) 0);
#line 388 "switch_gen.m"
          }
#line 386 "switch_gen.m"
      }
#line 399 "switch_gen.m"
    if (ll_backend__switch_gen__succeeded)
#line 391 "switch_gen.m"
      {
#line 391 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ReservedAddrCases0_47;
#line 391 "switch_gen.m"
        MR_Word ll_backend__switch_gen__NonReservedAddrCases0_48;
#line 391 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ReservedAddrCases_49;
#line 391 "switch_gen.m"
        MR_Word ll_backend__switch_gen__NonReservedAddrCases_50;

#line 390 "switch_gen.m"
        {
#line 390 "switch_gen.m"
          ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(ll_backend__switch_gen__TaggedCases_14, &ll_backend__switch_gen__ReservedAddrCases0_47, &ll_backend__switch_gen__NonReservedAddrCases0_48);
        }
#line 392 "switch_gen.m"
        {
#line 392 "switch_gen.m"
          ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__ReservedAddrCases0_47, &ll_backend__switch_gen__ReservedAddrCases_49, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34);
        }
#line 395 "switch_gen.m"
        {
#line 395 "switch_gen.m"
          ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__NonReservedAddrCases0_48, &ll_backend__switch_gen__NonReservedAddrCases_50, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34);
        }
#line 398 "switch_gen.m"
        {
#line 398 "switch_gen.m"
          ll_backend__switch_gen__OrderedTaggedCases_26 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__ReservedAddrCases_49, ll_backend__switch_gen__NonReservedAddrCases_50);
        }
#line 391 "switch_gen.m"
      }
#line 399 "switch_gen.m"
    else
#line 403 "switch_gen.m"
      {
#line 403 "switch_gen.m"
        ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__TaggedCases_14, &ll_backend__switch_gen__OrderedTaggedCases_26, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34);
      }
#line 338 "switch_gen.m"
    {
#line 338 "switch_gen.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__switch_gen__VarType_16, &ll_backend__switch_gen__TypeCtor_27);
    }
#line 339 "switch_gen.m"
    {
#line 339 "switch_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_0_34, &ll_backend__switch_gen__ModuleInfo_28);
    }
#line 340 "switch_gen.m"
    {
#line 340 "switch_gen.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__switch_gen__ModuleInfo_28, &ll_backend__switch_gen__TypeTable_29);
    }
#line 341 "switch_gen.m"
    {
#line 341 "switch_gen.m"
      ll_backend__switch_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__switch_gen__TypeTable_29, ll_backend__switch_gen__TypeCtor_27, &ll_backend__switch_gen__TypeDefn_30);
    }
#line 344 "switch_gen.m"
    if (ll_backend__switch_gen__succeeded)
#line 342 "switch_gen.m"
      {
#line 342 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TypeBody_31;

#line 342 "switch_gen.m"
        {
#line 342 "switch_gen.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__switch_gen__TypeDefn_30, &ll_backend__switch_gen__TypeBody_31);
        }
#line 343 "switch_gen.m"
        {
#line 343 "switch_gen.m"
          ll_backend__switch_gen__CheaperTagTest_32 = hlds__hlds_data__get_maybe_cheaper_tag_test_1_f_0(ll_backend__switch_gen__TypeBody_31);
        }
#line 342 "switch_gen.m"
      }
#line 344 "switch_gen.m"
    else
#line 345 "switch_gen.m"
      ll_backend__switch_gen__CheaperTagTest_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "switch_gen.m"
    {
#line 347 "switch_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_0_36, &ll_backend__switch_gen__BranchStart_33);
    }
#line 348 "switch_gen.m"
    {
#line 348 "switch_gen.m"
      ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(ll_backend__switch_gen__BranchStart_33, ll_backend__switch_gen__OrderedTaggedCases_26, ll_backend__switch_gen__VarRval_15, ll_backend__switch_gen__VarType_16, ll_backend__switch_gen__VarName_17, ll_backend__switch_gen__CheaperTagTest_32, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__GoalInfo_20, ll_backend__switch_gen__EndLabel_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__switch_gen__MaybeEnd_22, ll_backend__switch_gen__Code_23, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34, ll_backend__switch_gen__STATE_VARIABLE_CI_35);
#line 348 "switch_gen.m"
      return;
    }
#line 335 "switch_gen.m"
  }
#line 329 "switch_gen.m"
}

#line 251 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_3(
#line 251 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 251 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 251 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
#line 251 "switch_gen.m"
{
#line 251 "switch_gen.m"
  {
#line 251 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 251 "switch_gen.m"
    MR_String ll_backend__switch_gen__conv2_HeadVar__2_2;

#line 251 "switch_gen.m"
    {
#line 251 "switch_gen.m"
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv2_HeadVar__2_2);
    }
#line 251 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv2_HeadVar__2_2));
#line 251 "switch_gen.m"
  }
#line 251 "switch_gen.m"
}

#line 230 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_2(
#line 230 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 230 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 230 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
#line 230 "switch_gen.m"
{
#line 230 "switch_gen.m"
  {
#line 230 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 230 "switch_gen.m"
    MR_String ll_backend__switch_gen__conv1_HeadVar__2_2;

#line 230 "switch_gen.m"
    {
#line 230 "switch_gen.m"
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv1_HeadVar__2_2);
    }
#line 230 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 230 "switch_gen.m"
  }
#line 230 "switch_gen.m"
}

#line 185 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_1(
#line 185 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 185 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 185 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
#line 185 "switch_gen.m"
{
#line 185 "switch_gen.m"
  {
#line 185 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 185 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__conv0_HeadVar__2_2;

#line 185 "switch_gen.m"
    {
#line 185 "switch_gen.m"
      backend_libs__switch_util__get_int_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv0_HeadVar__2_2);
    }
#line 185 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
#line 185 "switch_gen.m"
  }
#line 185 "switch_gen.m"
}

#line 90 "switch_gen.m"
void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0(
#line 90 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_11,
#line 90 "switch_gen.m"
  MR_Word ll_backend__switch_gen__SwitchVar_12,
#line 90 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_13,
#line 90 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases_14,
#line 90 "switch_gen.m"
  MR_Word ll_backend__switch_gen__GoalInfo_15,
#line 90 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_16,
#line 90 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_56,
#line 90 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_57,
#line 90 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_0_58,
#line 90 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CLD_59)
#line 90 "switch_gen.m"
{
#line 127 "switch_gen.m"
  {
#line 127 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__StoreMap_19;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__EndLabel_20;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__ModuleInfo_21;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchVarType_22;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TaggedCases0_23;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MaybeIntSwitchInfo_24;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TaggedCases_25;
#line 127 "switch_gen.m"
    MR_String ll_backend__switch_gen__SwitchVarName_26;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchVarCode_27;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchVarRval_28;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchCategory_29;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MayUseSmartIndexing_30;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MaybeEnd_31;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchCode_32;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_60_60;
#line 127 "switch_gen.m"
    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61;

#line 131 "switch_gen.m"
    {
#line 131 "switch_gen.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_gen__GoalInfo_15, &ll_backend__switch_gen__StoreMap_19);
    }
#line 132 "switch_gen.m"
    {
#line 132 "switch_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, &ll_backend__switch_gen__STATE_VARIABLE_CI_60_60);
    }
#line 133 "switch_gen.m"
    {
#line 133 "switch_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__ModuleInfo_21);
    }
#line 134 "switch_gen.m"
    {
#line 134 "switch_gen.m"
      ll_backend__switch_gen__SwitchVarType_22 = ll_backend__code_info__variable_type_2_f_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__SwitchVar_12);
    }
#line 135 "switch_gen.m"
    {
#line 135 "switch_gen.m"
      backend_libs__switch_util__tag_cases_5_p_0(ll_backend__switch_gen__ModuleInfo_21, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__Cases_14, &ll_backend__switch_gen__TaggedCases0_23, &ll_backend__switch_gen__MaybeIntSwitchInfo_24);
    }
#line 137 "switch_gen.m"
    {
#line 137 "switch_gen.m"
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__TaggedCases0_23, &ll_backend__switch_gen__TaggedCases_25);
    }
#line 139 "switch_gen.m"
    {
#line 139 "switch_gen.m"
      ll_backend__switch_gen__SwitchVarName_26 = ll_backend__code_info__variable_name_2_f_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__SwitchVar_12);
    }
#line 140 "switch_gen.m"
    {
#line 140 "switch_gen.m"
      ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__switch_gen__SwitchVar_12, &ll_backend__switch_gen__SwitchVarCode_27, &ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CLD_0_58, &ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
    }
#line 142 "switch_gen.m"
    {
#line 142 "switch_gen.m"
      backend_libs__switch_util__find_switch_category_4_p_0(ll_backend__switch_gen__ModuleInfo_21, ll_backend__switch_gen__SwitchVarType_22, &ll_backend__switch_gen__SwitchCategory_29, &ll_backend__switch_gen__MayUseSmartIndexing_30);
    }
#line 149 "switch_gen.m"
#line 149 "switch_gen.m"
    switch (ll_backend__switch_gen__MayUseSmartIndexing_30) {
#line 149 "switch_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 149 "switch_gen.m"
      case (MR_Integer) 0:
#line 146 "switch_gen.m"
        {
#line 146 "switch_gen.m"
          ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
        }
#line 149 "switch_gen.m"
        break;
#line 149 "switch_gen.m"
      case (MR_Integer) 1:
#line 150 "switch_gen.m"
        {
#line 150 "switch_gen.m"
          MR_Word ll_backend__switch_gen__Globals_33;

#line 151 "switch_gen.m"
          {
#line 151 "switch_gen.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__switch_gen__ModuleInfo_21, &ll_backend__switch_gen__Globals_33);
          }
#line 216 "switch_gen.m"
#line 216 "switch_gen.m"
          switch (ll_backend__switch_gen__SwitchCategory_29) {
#line 216 "switch_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 216 "switch_gen.m"
            case (MR_Integer) 0:
#line 153 "switch_gen.m"
              {
#line 153 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumConsIds_34;
#line 153 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumArms_35;
#line 195 "switch_gen.m"
                MR_Word ll_backend__switch_gen__NeedBitVecCheck_44;
#line 195 "switch_gen.m"
                MR_Word ll_backend__switch_gen__NeedRangeCheck_45;
#line 195 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__FirstVal_46;
#line 195 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__LastVal_47;
#line 195 "switch_gen.m"
                MR_Word ll_backend__switch_gen__BranchStart_48;
#line 195 "switch_gen.m"
                MR_Word ll_backend__switch_gen__MaybeEnd1_49;
#line 195 "switch_gen.m"
                MR_Word ll_backend__switch_gen__LookupSwitchInfo_50;
#line 195 "switch_gen.m"
                MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_92_92;
#line 157 "switch_gen.m"
                MR_Word ll_backend__switch_gen__TypeCtorInfo_173_173;
#line 157 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__LowerLimit_36;
#line 157 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__UpperLimit_37;
#line 157 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumValues_38;
#line 157 "switch_gen.m"
                MR_Word ll_backend__switch_gen__MaybeTraceInfo_39;
#line 157 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__LookupSize_40;
#line 157 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__ReqDensity_41;
#line 157 "switch_gen.m"
                MR_Word ll_backend__switch_gen__FilteredTaggedCases_42;
#line 157 "switch_gen.m"
                MR_Word ll_backend__switch_gen__FilteredCanFail_43;
#line 157 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_85_85;
#line 157 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_86_86;
#line 157 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_87_87;
#line 157 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__V_88_88;
#line 157 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_89_89;
#line 157 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_90_90;
#line 157 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_91_91;

#line 154 "switch_gen.m"
                {
#line 154 "switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__NumConsIds_34, &ll_backend__switch_gen__NumArms_35);
                }
#line 156 "switch_gen.m"
                ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__MaybeIntSwitchInfo_24)) == (MR_mktag((MR_Integer) 1)));
#line 156 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 156 "switch_gen.m"
                  {
#line 156 "switch_gen.m"
                    ll_backend__switch_gen__LowerLimit_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 0)));
#line 156 "switch_gen.m"
                    ll_backend__switch_gen__UpperLimit_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 1)));
#line 156 "switch_gen.m"
                    ll_backend__switch_gen__NumValues_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 2)));
#line 165 "switch_gen.m"
                    ll_backend__switch_gen__V_85_85 = (MR_Integer) 452;
#line 165 "switch_gen.m"
                    ll_backend__switch_gen__V_86_86 = (MR_Integer) 1;
#line 165 "switch_gen.m"
                    {
#line 165 "switch_gen.m"
                      ll_backend__switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__V_85_85, ll_backend__switch_gen__V_86_86);
                    }
#line 157 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 157 "switch_gen.m"
                      {
#line 168 "switch_gen.m"
                        {
#line 168 "switch_gen.m"
                          ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__MaybeTraceInfo_39);
                        }
#line 169 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__MaybeTraceInfo_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 157 "switch_gen.m"
                          {
#line 171 "switch_gen.m"
                            ll_backend__switch_gen__V_87_87 = (MR_Integer) 439;
#line 171 "switch_gen.m"
                            {
#line 171 "switch_gen.m"
                              libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__V_87_87, &ll_backend__switch_gen__LookupSize_40);
                            }
#line 173 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_34 >= ll_backend__switch_gen__LookupSize_40);
#line 157 "switch_gen.m"
                            if (ll_backend__switch_gen__succeeded)
#line 157 "switch_gen.m"
                              {
#line 174 "switch_gen.m"
                                ll_backend__switch_gen__V_88_88 = (MR_Integer) 1;
#line 174 "switch_gen.m"
                                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_35 > ll_backend__switch_gen__V_88_88);
#line 157 "switch_gen.m"
                                if (ll_backend__switch_gen__succeeded)
#line 157 "switch_gen.m"
                                  {
#line 175 "switch_gen.m"
                                    ll_backend__switch_gen__V_89_89 = (MR_Integer) 437;
#line 175 "switch_gen.m"
                                    {
#line 175 "switch_gen.m"
                                      libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__V_89_89, &ll_backend__switch_gen__ReqDensity_41);
                                    }
#line 177 "switch_gen.m"
                                    {
#line 177 "switch_gen.m"
                                      backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__FilteredTaggedCases_42, ll_backend__switch_gen__CanFail_13, &ll_backend__switch_gen__FilteredCanFail_43);
                                    }
#line 180 "switch_gen.m"
                                    {
#line 180 "switch_gen.m"
                                      ll_backend__switch_gen__succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ll_backend__switch_gen__ModuleInfo_21, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__FilteredCanFail_43, ll_backend__switch_gen__LowerLimit_36, ll_backend__switch_gen__UpperLimit_37, ll_backend__switch_gen__NumValues_38, ll_backend__switch_gen__ReqDensity_41, &ll_backend__switch_gen__NeedBitVecCheck_44, &ll_backend__switch_gen__NeedRangeCheck_45, &ll_backend__switch_gen__FirstVal_46, &ll_backend__switch_gen__LastVal_47);
                                    }
#line 157 "switch_gen.m"
                                    if (ll_backend__switch_gen__succeeded)
#line 157 "switch_gen.m"
                                      {
#line 184 "switch_gen.m"
                                        {
#line 184 "switch_gen.m"
                                          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__switch_gen__BranchStart_48);
                                        }
#line 185 "switch_gen.m"
                                        ll_backend__switch_gen__V_90_90 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[1];
#line 186 "switch_gen.m"
                                        ll_backend__switch_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2984 "ll_backend.switch_gen.c"
                                        ll_backend__switch_gen__TypeCtorInfo_173_173 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 185 "switch_gen.m"
                                        {
#line 185 "switch_gen.m"
                                          ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0(ll_backend__switch_gen__TypeCtorInfo_173_173, ll_backend__switch_gen__BranchStart_48, ll_backend__switch_gen__V_90_90, ll_backend__switch_gen__FilteredTaggedCases_42, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__V_91_91, &ll_backend__switch_gen__MaybeEnd1_49, &ll_backend__switch_gen__LookupSwitchInfo_50, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                                        }
#line 157 "switch_gen.m"
                                      }
#line 157 "switch_gen.m"
                                  }
#line 157 "switch_gen.m"
                              }
#line 157 "switch_gen.m"
                          }
#line 157 "switch_gen.m"
                      }
#line 156 "switch_gen.m"
                  }
#line 195 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 190 "switch_gen.m"
                  {
#line 190 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_93_103;

#line 190 "switch_gen.m"
                    {
#line 190 "switch_gen.m"
                      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_48, ll_backend__switch_gen__STATE_VARIABLE_CI_92_92, &ll_backend__switch_gen__STATE_VARIABLE_CLD_93_103);
                    }
#line 191 "switch_gen.m"
                    {
#line 191 "switch_gen.m"
                      ll_backend__lookup_switch__generate_int_lookup_switch_14_p_0(ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__LookupSwitchInfo_50, ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__FirstVal_46, ll_backend__switch_gen__LastVal_47, ll_backend__switch_gen__NeedBitVecCheck_44, ll_backend__switch_gen__NeedRangeCheck_45, ll_backend__switch_gen__MaybeEnd1_49, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_92_92, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_93_103);
                    }
#line 190 "switch_gen.m"
                  }
#line 195 "switch_gen.m"
                else
#line 211 "switch_gen.m"
                  {
#line 211 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__DenseSwitchInfo_52;
#line 197 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__DenseSize_51;
#line 197 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__V_95_95;
#line 197 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__V_96_96;
#line 197 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__V_97_97;
#line 197 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__LowerLimit_104;
#line 197 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__UpperLimit_105;
#line 197 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__NumValues_106;
#line 197 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__ReqDensity_107;

#line 196 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__MaybeIntSwitchInfo_24)) == (MR_mktag((MR_Integer) 1)));
#line 196 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 196 "switch_gen.m"
                      {
#line 196 "switch_gen.m"
                        ll_backend__switch_gen__LowerLimit_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 0)));
#line 196 "switch_gen.m"
                        ll_backend__switch_gen__UpperLimit_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 1)));
#line 196 "switch_gen.m"
                        ll_backend__switch_gen__NumValues_106 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 2)));
#line 198 "switch_gen.m"
                        ll_backend__switch_gen__V_95_95 = (MR_Integer) 438;
#line 198 "switch_gen.m"
                        {
#line 198 "switch_gen.m"
                          libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__V_95_95, &ll_backend__switch_gen__DenseSize_51);
                        }
#line 200 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_34 >= ll_backend__switch_gen__DenseSize_51);
#line 197 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 197 "switch_gen.m"
                          {
#line 201 "switch_gen.m"
                            ll_backend__switch_gen__V_96_96 = (MR_Integer) 1;
#line 201 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_35 > ll_backend__switch_gen__V_96_96);
#line 197 "switch_gen.m"
                            if (ll_backend__switch_gen__succeeded)
#line 197 "switch_gen.m"
                              {
#line 202 "switch_gen.m"
                                ll_backend__switch_gen__V_97_97 = (MR_Integer) 436;
#line 202 "switch_gen.m"
                                {
#line 202 "switch_gen.m"
                                  libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__V_97_97, &ll_backend__switch_gen__ReqDensity_107);
                                }
#line 204 "switch_gen.m"
                                {
#line 204 "switch_gen.m"
                                  ll_backend__switch_gen__succeeded = ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__LowerLimit_104, ll_backend__switch_gen__UpperLimit_105, ll_backend__switch_gen__NumValues_106, ll_backend__switch_gen__ReqDensity_107, ll_backend__switch_gen__CanFail_13, &ll_backend__switch_gen__DenseSwitchInfo_52);
                                }
#line 197 "switch_gen.m"
                              }
#line 197 "switch_gen.m"
                          }
#line 196 "switch_gen.m"
                      }
#line 211 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 208 "switch_gen.m"
                      {
#line 208 "switch_gen.m"
                        {
#line 208 "switch_gen.m"
                          ll_backend__dense_switch__generate_dense_switch_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__DenseSwitchInfo_52, ll_backend__switch_gen__EndLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                        }
#line 208 "switch_gen.m"
                      }
#line 211 "switch_gen.m"
                    else
#line 212 "switch_gen.m"
                      {
#line 212 "switch_gen.m"
                        ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                      }
#line 211 "switch_gen.m"
                  }
#line 153 "switch_gen.m"
              }
#line 216 "switch_gen.m"
              break;
#line 216 "switch_gen.m"
            case (MR_Integer) 3:
#line 294 "switch_gen.m"
              {
#line 294 "switch_gen.m"
                ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
              }
#line 216 "switch_gen.m"
              break;
#line 216 "switch_gen.m"
            case (MR_Integer) 1:
#line 217 "switch_gen.m"
              {
#line 217 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumConsIds_154;
#line 217 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumArms_155;
#line 217 "switch_gen.m"
                MR_Word ll_backend__switch_gen__FilteredTaggedCases_156;
#line 217 "switch_gen.m"
                MR_Word ll_backend__switch_gen__FilteredCanFail_157;

#line 218 "switch_gen.m"
                {
#line 218 "switch_gen.m"
                  backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__FilteredTaggedCases_156, ll_backend__switch_gen__CanFail_13, &ll_backend__switch_gen__FilteredCanFail_157);
                }
#line 220 "switch_gen.m"
                {
#line 220 "switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__FilteredTaggedCases_156, &ll_backend__switch_gen__NumConsIds_154, &ll_backend__switch_gen__NumArms_155);
                }
#line 222 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_155 > (MR_Integer) 1);
#line 274 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 224 "switch_gen.m"
                  {
#line 224 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__StringHashSwitchSize_53;
#line 224 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__StringBinarySwitchSize_54;

#line 223 "switch_gen.m"
                    {
#line 223 "switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, (MR_Integer) 441, &ll_backend__switch_gen__StringHashSwitchSize_53);
                    }
#line 225 "switch_gen.m"
                    {
#line 225 "switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, (MR_Integer) 442, &ll_backend__switch_gen__StringBinarySwitchSize_54);
                    }
#line 227 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_154 >= ll_backend__switch_gen__StringHashSwitchSize_53);
#line 248 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 242 "switch_gen.m"
                      {
#line 242 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_73_73;
#line 242 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__BranchStart_123;
#line 242 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__MaybeEnd1_124;
#line 242 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__LookupSwitchInfo_125;

#line 229 "switch_gen.m"
                        {
#line 229 "switch_gen.m"
                          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__switch_gen__BranchStart_123);
                        }
#line 230 "switch_gen.m"
                        {
#line 230 "switch_gen.m"
                          ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__switch_gen__BranchStart_123, (MR_Word) &ll_backend__switch_gen_scalar_common_1[2], ll_backend__switch_gen__FilteredTaggedCases_156, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__StoreMap_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd1_124, &ll_backend__switch_gen__LookupSwitchInfo_125, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__STATE_VARIABLE_CI_73_73);
                        }
#line 242 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 237 "switch_gen.m"
                          {
#line 237 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_93_120;

#line 237 "switch_gen.m"
                            {
#line 237 "switch_gen.m"
                              ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_123, ll_backend__switch_gen__STATE_VARIABLE_CI_73_73, &ll_backend__switch_gen__STATE_VARIABLE_CLD_93_120);
                            }
#line 238 "switch_gen.m"
                            {
#line 238 "switch_gen.m"
                              ll_backend__string_switch__generate_string_hash_lookup_switch_11_p_0(ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__LookupSwitchInfo_125, ll_backend__switch_gen__FilteredCanFail_157, ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__MaybeEnd1_124, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_73_73, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_93_120);
                            }
#line 237 "switch_gen.m"
                          }
#line 242 "switch_gen.m"
                        else
#line 243 "switch_gen.m"
                          {
#line 243 "switch_gen.m"
                            ll_backend__string_switch__generate_string_hash_switch_12_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                          }
#line 242 "switch_gen.m"
                      }
#line 248 "switch_gen.m"
                    else
#line 269 "switch_gen.m"
                      {
#line 248 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_154 >= ll_backend__switch_gen__StringBinarySwitchSize_54);
#line 269 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 263 "switch_gen.m"
                          {
#line 263 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_79_79;
#line 263 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__BranchStart_130;
#line 263 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__MaybeEnd1_131;
#line 263 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__LookupSwitchInfo_132;

#line 250 "switch_gen.m"
                            {
#line 250 "switch_gen.m"
                              ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__switch_gen__BranchStart_130);
                            }
#line 251 "switch_gen.m"
                            {
#line 251 "switch_gen.m"
                              ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__switch_gen__BranchStart_130, (MR_Word) &ll_backend__switch_gen_scalar_common_1[3], ll_backend__switch_gen__FilteredTaggedCases_156, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__StoreMap_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd1_131, &ll_backend__switch_gen__LookupSwitchInfo_132, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__STATE_VARIABLE_CI_79_79);
                            }
#line 263 "switch_gen.m"
                            if (ll_backend__switch_gen__succeeded)
#line 258 "switch_gen.m"
                              {
#line 258 "switch_gen.m"
                                MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_93_127;

#line 258 "switch_gen.m"
                                {
#line 258 "switch_gen.m"
                                  ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_130, ll_backend__switch_gen__STATE_VARIABLE_CI_79_79, &ll_backend__switch_gen__STATE_VARIABLE_CLD_93_127);
                                }
#line 259 "switch_gen.m"
                                {
#line 259 "switch_gen.m"
                                  ll_backend__string_switch__generate_string_binary_lookup_switch_11_p_0(ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__LookupSwitchInfo_132, ll_backend__switch_gen__FilteredCanFail_157, ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__MaybeEnd1_131, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_79_79, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_93_127);
                                }
#line 258 "switch_gen.m"
                              }
#line 263 "switch_gen.m"
                            else
#line 264 "switch_gen.m"
                              {
#line 264 "switch_gen.m"
                                ll_backend__string_switch__generate_string_binary_switch_12_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                              }
#line 263 "switch_gen.m"
                          }
#line 269 "switch_gen.m"
                        else
#line 270 "switch_gen.m"
                          {
#line 270 "switch_gen.m"
                            ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                          }
#line 269 "switch_gen.m"
                      }
#line 224 "switch_gen.m"
                  }
#line 274 "switch_gen.m"
                else
#line 275 "switch_gen.m"
                  {
#line 275 "switch_gen.m"
                    ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                  }
#line 217 "switch_gen.m"
              }
#line 216 "switch_gen.m"
              break;
#line 216 "switch_gen.m"
            case (MR_Integer) 2:
#line 280 "switch_gen.m"
              {
#line 280 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__TagSize_55;
#line 280 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumConsIds_163;
#line 280 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumArms_164;
#line 283 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__V_64_64;

#line 281 "switch_gen.m"
                {
#line 281 "switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__NumConsIds_163, &ll_backend__switch_gen__NumArms_164);
                }
#line 282 "switch_gen.m"
                {
#line 282 "switch_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, (MR_Integer) 443, &ll_backend__switch_gen__TagSize_55);
                }
#line 283 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_163 >= ll_backend__switch_gen__TagSize_55);
#line 283 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 283 "switch_gen.m"
                  {
#line 283 "switch_gen.m"
                    ll_backend__switch_gen__V_64_64 = (MR_Integer) 1;
#line 283 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_164 > ll_backend__switch_gen__V_64_64);
#line 283 "switch_gen.m"
                  }
#line 287 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 284 "switch_gen.m"
                  {
#line 284 "switch_gen.m"
                    {
#line 284 "switch_gen.m"
                      ll_backend__tag_switch__generate_tag_switch_14_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                    }
#line 284 "switch_gen.m"
                  }
#line 287 "switch_gen.m"
                else
#line 288 "switch_gen.m"
                  {
#line 288 "switch_gen.m"
                    ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                  }
#line 280 "switch_gen.m"
              }
#line 216 "switch_gen.m"
              break;
#line 216 "switch_gen.m"
          }
#line 150 "switch_gen.m"
        }
#line 149 "switch_gen.m"
        break;
#line 149 "switch_gen.m"
    }
#line 299 "switch_gen.m"
    {
#line 299 "switch_gen.m"
      *ll_backend__switch_gen__Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_gen__SwitchVarCode_27, ll_backend__switch_gen__SwitchCode_32);
    }
#line 300 "switch_gen.m"
    {
#line 300 "switch_gen.m"
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__MaybeEnd_31, *ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_59);
#line 300 "switch_gen.m"
      return;
    }
#line 127 "switch_gen.m"
  }
#line 90 "switch_gen.m"
}

void mercury__ll_backend__switch_gen__init(void)
{
}

void mercury__ll_backend__switch_gen__init_type_tables(void)
{
}

void mercury__ll_backend__switch_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.switch_gen. */
