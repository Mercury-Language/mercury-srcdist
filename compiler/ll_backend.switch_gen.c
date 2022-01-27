/*
** Automatically generated from `switch_gen.m'
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


/* :- module ll_backend.switch_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__switch_gen__init
ENDINIT
*/

#include "ll_backend.switch_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "libs.op_mode.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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




#line 168 "ll_backend.switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0;

#line 654 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0_1(
#line 654 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 654 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 654 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2,
#line 654 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_3);

#line 623 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__BranchStart_16,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases_17,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_18,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_19,
#line 623 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_20,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CheaperTagTest_21,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_22,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_23,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__SwitchGoalInfo_24,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_25,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54,
#line 623 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55,
#line 623 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_27,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_56,
#line 623 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_57);

#line 619 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3(
#line 619 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 619 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 619 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_2);

#line 618 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
#line 618 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 618 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 617 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
#line 617 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 617 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 611 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
#line 611 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCase_3);

#line 498 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
#line 498 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 498 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 498 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3);

#line 607 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2(
#line 607 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 607 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 607 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1(
#line 607 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 607 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 483 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(
#line 483 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases0_6,
#line 483 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Cases_7,
#line 483 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_8,
#line 483 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_9,
#line 483 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CI_10);

#line 448 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(
#line 448 "switch_gen.m"
  MR_Word ll_backend__switch_gen__ConsTag_3);

#line 434 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(
#line 434 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1);

#line 413 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(
#line 413 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 413 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 413 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3);

#line 333 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_13_p_0(
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCases_14,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_15,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_16,
#line 333 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_17,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_18,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_19,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__GoalInfo_20,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_21,
#line 333 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__MaybeEnd_22,
#line 333 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_23,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_34,
#line 333 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_35,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_0_36);

#line 255 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_3(
#line 255 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 255 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 255 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2);

#line 234 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_2(
#line 234 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 234 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 234 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2);

#line 189 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_1(
#line 189 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 189 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 189 "switch_gen.m"
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



#line 509 "ll_backend.switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0
  }
};

#line 654 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0_1(
#line 654 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 654 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 654 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2,
#line 654 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_3)
#line 654 "switch_gen.m"
{
#line 654 "switch_gen.m"
  {
#line 654 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 654 "switch_gen.m"
    MR_String ll_backend__switch_gen__conv1_HeadVar__2_2;
#line 654 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv0_HeadVar__3_3;

#line 654 "switch_gen.m"
    {
#line 654 "switch_gen.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv1_HeadVar__2_2, &ll_backend__switch_gen__conv0_HeadVar__3_3);
    }
#line 654 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 654 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__3_3));
#line 654 "switch_gen.m"
  }
#line 654 "switch_gen.m"
}

#line 623 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__BranchStart_16,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases_17,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_18,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_19,
#line 623 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_20,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CheaperTagTest_21,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_22,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_23,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__SwitchGoalInfo_24,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_25,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54,
#line 623 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55,
#line 623 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_27,
#line 623 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_56,
#line 623 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_57)
#line 623 "switch_gen.m"
{
#line 633 "switch_gen.m"
  {
#line 633 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;

#line 633 "switch_gen.m"
    if ((ll_backend__switch_gen__Cases_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 677 "switch_gen.m"
      {
#line 677 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TypeCtorInfo_102_102;
#line 677 "switch_gen.m"
        MR_Word ll_backend__switch_gen__FailCode_52;
#line 677 "switch_gen.m"
        MR_Word ll_backend__switch_gen__EndCode_53;
#line 677 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_60_60;
#line 677 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_61_61;
#line 677 "switch_gen.m"
        MR_String ll_backend__switch_gen__V_62_62;

#line 687 "switch_gen.m"
#line 687 "switch_gen.m"
        switch (ll_backend__switch_gen__CanFail_23) {
#line 687 "switch_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 687 "switch_gen.m"
          case (MR_Integer) 0:
#line 679 "switch_gen.m"
            {
#line 679 "switch_gen.m"
              MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_58_58;

#line 684 "switch_gen.m"
              {
#line 684 "switch_gen.m"
                ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_16, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, &ll_backend__switch_gen__STATE_VARIABLE_CLD_58_58);
              }
#line 685 "switch_gen.m"
              {
#line 685 "switch_gen.m"
                ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__switch_gen__FailCode_52, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_58_58);
              }
#line 679 "switch_gen.m"
            }
#line 687 "switch_gen.m"
            break;
#line 687 "switch_gen.m"
          case (MR_Integer) 1:
#line 688 "switch_gen.m"
            {
#line 689 "switch_gen.m"
              {
#line 689 "switch_gen.m"
                ll_backend__switch_gen__FailCode_52 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 688 "switch_gen.m"
              *ll_backend__switch_gen__STATE_VARIABLE_CI_57 = ll_backend__switch_gen__STATE_VARIABLE_CI_0_56;
#line 688 "switch_gen.m"
            }
#line 687 "switch_gen.m"
            break;
#line 687 "switch_gen.m"
        }
#line 654 "ll_backend.switch_gen.c"
        ll_backend__switch_gen__TypeCtorInfo_102_102 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 692 "switch_gen.m"
        {
#line 692 "switch_gen.m"
          ll_backend__switch_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "switch_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 692 "switch_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_61_61, 1) = ((MR_Box) (ll_backend__switch_gen__EndLabel_25));
#line 692 "switch_gen.m"
        }
#line 693 "switch_gen.m"
        {
#line 693 "switch_gen.m"
          ll_backend__switch_gen__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "end of the switch on ", ll_backend__switch_gen__VarName_20);
        }
#line 692 "switch_gen.m"
        {
#line 692 "switch_gen.m"
          ll_backend__switch_gen__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 692 "switch_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_60_60, 0) = ((MR_Box) (ll_backend__switch_gen__V_61_61));
#line 692 "switch_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_60_60, 1) = ((MR_Box) (ll_backend__switch_gen__V_62_62));
#line 692 "switch_gen.m"
        }
#line 691 "switch_gen.m"
        {
#line 691 "switch_gen.m"
          ll_backend__switch_gen__EndCode_53 = mercury__cord__singleton_1_f_0(ll_backend__switch_gen__TypeCtorInfo_102_102, ((MR_Box) (ll_backend__switch_gen__V_60_60)));
        }
#line 695 "switch_gen.m"
        {
#line 695 "switch_gen.m"
          *ll_backend__switch_gen__Code_27 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_102_102, ll_backend__switch_gen__FailCode_52, ll_backend__switch_gen__EndCode_53);
        }
#line 677 "switch_gen.m"
        *ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55 = ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54;
#line 677 "switch_gen.m"
      }
#line 633 "switch_gen.m"
    else
#line 633 "switch_gen.m"
      {
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TypeCtorInfo_100_100;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadCase_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases_17, (MR_Integer) 0)));
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TailCases_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases_17, (MR_Integer) 1)));
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__MainTaggedConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 0)));
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__OtherTaggedConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 1)));
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 3)));
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__StoreMap_35;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TestCode_39;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ElseCode_40;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TraceCode_47;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__GoalCode_48;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__SaveCode_49;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadCaseCode_50;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TailCasesCode_51;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_65_65;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_81_81;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_82_82;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_83_83;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_84_84;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_85_85;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_86_86;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_87_87;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_88_88;
#line 633 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_89_89;
#line 634 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 2)));

#line 635 "switch_gen.m"
        {
#line 635 "switch_gen.m"
          hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_gen__SwitchGoalInfo_24, &ll_backend__switch_gen__StoreMap_35);
        }
#line 637 "switch_gen.m"
        {
#line 637 "switch_gen.m"
          MR_Word ll_backend__switch_gen__V_36_36;
#line 637 "switch_gen.m"
          MR_Word ll_backend__switch_gen__V_37_37;

#line 637 "switch_gen.m"
          ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__TailCases_30)) == (MR_mktag((MR_Integer) 1)));
#line 637 "switch_gen.m"
          if (ll_backend__switch_gen__succeeded)
#line 637 "switch_gen.m"
            {
#line 637 "switch_gen.m"
              ll_backend__switch_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__TailCases_30, (MR_Integer) 0)));
#line 637 "switch_gen.m"
              ll_backend__switch_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__TailCases_30, (MR_Integer) 1)));
#line 637 "switch_gen.m"
            }
#line 637 "switch_gen.m"
        }
#line 638 "switch_gen.m"
        if (!(ll_backend__switch_gen__succeeded))
#line 638 "switch_gen.m"
          ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CanFail_23 == (MR_Integer) 0);
#line 636 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 643 "switch_gen.m"
          {
#line 643 "switch_gen.m"
            MR_Word ll_backend__switch_gen__NextLabel_38;
#line 643 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_66_66;
#line 643 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_67_67;
#line 643 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_68_68;
#line 643 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_69_69;
#line 643 "switch_gen.m"
            MR_String ll_backend__switch_gen__V_70_70;
#line 643 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_72_72;
#line 643 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_73_73;
#line 643 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_74_74;

#line 641 "switch_gen.m"
            {
#line 641 "switch_gen.m"
              ll_backend__unify_gen__generate_raw_tag_test_case_11_p_0(ll_backend__switch_gen__VarRval_18, ll_backend__switch_gen__VarType_19, ll_backend__switch_gen__VarName_20, ll_backend__switch_gen__MainTaggedConsId_31, ll_backend__switch_gen__OtherTaggedConsIds_32, ll_backend__switch_gen__CheaperTagTest_21, (MR_Integer) 1, &ll_backend__switch_gen__NextLabel_38, &ll_backend__switch_gen__TestCode_39, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, &ll_backend__switch_gen__STATE_VARIABLE_CI_65_65);
            }
#line 645 "switch_gen.m"
            {
#line 645 "switch_gen.m"
              ll_backend__switch_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 645 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_69_69, 0) = ((MR_Box) (ll_backend__switch_gen__EndLabel_25));
#line 645 "switch_gen.m"
            }
#line 645 "switch_gen.m"
            {
#line 645 "switch_gen.m"
              ll_backend__switch_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 645 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_68_68, 1) = ((MR_Box) (ll_backend__switch_gen__V_69_69));
#line 645 "switch_gen.m"
            }
#line 646 "switch_gen.m"
            {
#line 646 "switch_gen.m"
              ll_backend__switch_gen__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) "skip to the end of the switch on ", ll_backend__switch_gen__VarName_20);
            }
#line 645 "switch_gen.m"
            {
#line 645 "switch_gen.m"
              ll_backend__switch_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_67_67, 0) = ((MR_Box) (ll_backend__switch_gen__V_68_68));
#line 645 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_67_67, 1) = ((MR_Box) (ll_backend__switch_gen__V_70_70));
#line 645 "switch_gen.m"
            }
#line 647 "switch_gen.m"
            {
#line 647 "switch_gen.m"
              ll_backend__switch_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 647 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_74_74, 1) = ((MR_Box) (ll_backend__switch_gen__NextLabel_38));
#line 647 "switch_gen.m"
            }
#line 647 "switch_gen.m"
            {
#line 647 "switch_gen.m"
              ll_backend__switch_gen__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_73_73, 0) = ((MR_Box) (ll_backend__switch_gen__V_74_74));
#line 647 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_73_73, 1) = ((MR_Box) ((MR_String) "next case"));
#line 647 "switch_gen.m"
            }
#line 648 "switch_gen.m"
            {
#line 648 "switch_gen.m"
              ll_backend__switch_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_72_72, 0) = ((MR_Box) (ll_backend__switch_gen__V_73_73));
#line 648 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "switch_gen.m"
            }
#line 646 "switch_gen.m"
            {
#line 646 "switch_gen.m"
              ll_backend__switch_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_66_66, 0) = ((MR_Box) (ll_backend__switch_gen__V_67_67));
#line 646 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_66_66, 1) = ((MR_Box) (ll_backend__switch_gen__V_72_72));
#line 646 "switch_gen.m"
            }
#line 644 "switch_gen.m"
            {
#line 644 "switch_gen.m"
              ll_backend__switch_gen__ElseCode_40 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_gen__V_66_66);
            }
#line 643 "switch_gen.m"
          }
#line 636 "switch_gen.m"
        else
#line 653 "switch_gen.m"
          {
#line 653 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TypeCtorInfo_99_99;
#line 653 "switch_gen.m"
            MR_String ll_backend__switch_gen__MainConsName_41;
#line 653 "switch_gen.m"
            MR_Word ll_backend__switch_gen__OtherConsNames_43;
#line 653 "switch_gen.m"
            MR_String ll_backend__switch_gen__Comment_45;
#line 653 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_78_78;
#line 653 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_79_79;
#line 653 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_42_42;
#line 654 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_44_44;

#line 653 "switch_gen.m"
            {
#line 653 "switch_gen.m"
              hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__switch_gen__MainTaggedConsId_31, &ll_backend__switch_gen__MainConsName_41, &ll_backend__switch_gen__V_42_42);
            }
#line 654 "switch_gen.m"
            {
#line 654 "switch_gen.m"
              mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &ll_backend__switch_gen_scalar_common_1[9], ll_backend__switch_gen__OtherTaggedConsIds_32, &ll_backend__switch_gen__OtherConsNames_43, &ll_backend__switch_gen__V_44_44);
            }
#line 656 "switch_gen.m"
            {
#line 656 "switch_gen.m"
              ll_backend__switch_gen__Comment_45 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__switch_gen__VarName_20, ll_backend__switch_gen__MainConsName_41, ll_backend__switch_gen__OtherConsNames_43);
            }
#line 924 "ll_backend.switch_gen.c"
            ll_backend__switch_gen__TypeCtorInfo_99_99 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 658 "switch_gen.m"
            {
#line 658 "switch_gen.m"
              ll_backend__switch_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_79_79, 0) = ((MR_Box) (ll_backend__switch_gen__Comment_45));
#line 658 "switch_gen.m"
            }
#line 658 "switch_gen.m"
            {
#line 658 "switch_gen.m"
              ll_backend__switch_gen__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 658 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_78_78, 0) = ((MR_Box) (ll_backend__switch_gen__V_79_79));
#line 658 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_78_78, 1) = ((MR_Box) ((MR_String) ""));
#line 658 "switch_gen.m"
            }
#line 657 "switch_gen.m"
            {
#line 657 "switch_gen.m"
              ll_backend__switch_gen__TestCode_39 = mercury__cord__singleton_1_f_0(ll_backend__switch_gen__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__switch_gen__V_78_78)));
            }
#line 660 "switch_gen.m"
            {
#line 660 "switch_gen.m"
              ll_backend__switch_gen__ElseCode_40 = mercury__cord__empty_0_f_0(ll_backend__switch_gen__TypeCtorInfo_99_99);
            }
#line 653 "switch_gen.m"
            ll_backend__switch_gen__STATE_VARIABLE_CI_65_65 = ll_backend__switch_gen__STATE_VARIABLE_CI_0_56;
#line 653 "switch_gen.m"
          }
#line 664 "switch_gen.m"
        {
#line 664 "switch_gen.m"
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_16, ll_backend__switch_gen__STATE_VARIABLE_CI_65_65, &ll_backend__switch_gen__STATE_VARIABLE_CLD_81_81);
        }
#line 665 "switch_gen.m"
        {
#line 665 "switch_gen.m"
          ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__switch_gen__Goal_34, ll_backend__switch_gen__SwitchGoalInfo_24, &ll_backend__switch_gen__TraceCode_47, ll_backend__switch_gen__STATE_VARIABLE_CI_65_65, &ll_backend__switch_gen__STATE_VARIABLE_CI_82_82, ll_backend__switch_gen__STATE_VARIABLE_CLD_81_81, &ll_backend__switch_gen__STATE_VARIABLE_CLD_83_83);
        }
#line 667 "switch_gen.m"
        {
#line 667 "switch_gen.m"
          ll_backend__code_gen__generate_goal_7_p_0(ll_backend__switch_gen__CodeModel_22, ll_backend__switch_gen__Goal_34, &ll_backend__switch_gen__GoalCode_48, ll_backend__switch_gen__STATE_VARIABLE_CI_82_82, &ll_backend__switch_gen__STATE_VARIABLE_CI_84_84, ll_backend__switch_gen__STATE_VARIABLE_CLD_83_83, &ll_backend__switch_gen__STATE_VARIABLE_CLD_85_85);
        }
#line 668 "switch_gen.m"
        {
#line 668 "switch_gen.m"
          ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__switch_gen__StoreMap_35, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54, &ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_86_86, &ll_backend__switch_gen__SaveCode_49, ll_backend__switch_gen__STATE_VARIABLE_CI_84_84, ll_backend__switch_gen__STATE_VARIABLE_CLD_85_85);
        }
#line 978 "ll_backend.switch_gen.c"
        ll_backend__switch_gen__TypeCtorInfo_100_100 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 670 "switch_gen.m"
        {
#line 670 "switch_gen.m"
          ll_backend__switch_gen__V_89_89 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__SaveCode_49, ll_backend__switch_gen__ElseCode_40);
        }
#line 670 "switch_gen.m"
        {
#line 670 "switch_gen.m"
          ll_backend__switch_gen__V_88_88 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__GoalCode_48, ll_backend__switch_gen__V_89_89);
        }
#line 670 "switch_gen.m"
        {
#line 670 "switch_gen.m"
          ll_backend__switch_gen__V_87_87 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__TraceCode_47, ll_backend__switch_gen__V_88_88);
        }
#line 670 "switch_gen.m"
        {
#line 670 "switch_gen.m"
          ll_backend__switch_gen__HeadCaseCode_50 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__TestCode_39, ll_backend__switch_gen__V_87_87);
        }
#line 672 "switch_gen.m"
        {
#line 672 "switch_gen.m"
          ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(ll_backend__switch_gen__BranchStart_16, ll_backend__switch_gen__TailCases_30, ll_backend__switch_gen__VarRval_18, ll_backend__switch_gen__VarType_19, ll_backend__switch_gen__VarName_20, ll_backend__switch_gen__CheaperTagTest_21, ll_backend__switch_gen__CodeModel_22, ll_backend__switch_gen__CanFail_23, ll_backend__switch_gen__SwitchGoalInfo_24, ll_backend__switch_gen__EndLabel_25, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_86_86, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55, &ll_backend__switch_gen__TailCasesCode_51, ll_backend__switch_gen__STATE_VARIABLE_CI_84_84, ll_backend__switch_gen__STATE_VARIABLE_CI_57);
        }
#line 675 "switch_gen.m"
        {
#line 675 "switch_gen.m"
          *ll_backend__switch_gen__Code_27 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__HeadCaseCode_50, ll_backend__switch_gen__TailCasesCode_51);
        }
#line 633 "switch_gen.m"
      }
#line 633 "switch_gen.m"
  }
#line 623 "switch_gen.m"
}

#line 619 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3(
#line 619 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 619 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 619 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_2)
#line 619 "switch_gen.m"
{
#line 619 "switch_gen.m"
  {
#line 619 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_3;
#line 619 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 619 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__conv2_HeadVar__3_3;

#line 619 "switch_gen.m"
    {
#line 619 "switch_gen.m"
      ll_backend__switch_gen__conv2_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) ll_backend__switch_gen__wrapper_arg_1), ((MR_Integer) ll_backend__switch_gen__wrapper_arg_2));
    }
#line 619 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_gen__conv2_HeadVar__3_3));
#line 619 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_3;
#line 619 "switch_gen.m"
  }
#line 619 "switch_gen.m"
}

#line 618 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
#line 618 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 618 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 618 "switch_gen.m"
{
#line 618 "switch_gen.m"
  {
#line 618 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 618 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 618 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__conv1_HeadVar__2_2;

#line 618 "switch_gen.m"
    {
#line 618 "switch_gen.m"
      ll_backend__switch_gen__conv1_HeadVar__2_2 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 618 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 618 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 618 "switch_gen.m"
  }
#line 618 "switch_gen.m"
}

#line 617 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
#line 617 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 617 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 617 "switch_gen.m"
{
#line 617 "switch_gen.m"
  {
#line 617 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 617 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 617 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv0_HeadVar__2_2;

#line 617 "switch_gen.m"
    {
#line 617 "switch_gen.m"
      ll_backend__switch_gen__conv0_HeadVar__2_2 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 617 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
#line 617 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 617 "switch_gen.m"
  }
#line 617 "switch_gen.m"
}

#line 611 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
#line 611 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCase_3)
#line 611 "switch_gen.m"
{
#line 613 "switch_gen.m"
  {
#line 613 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 613 "switch_gen.m"
    MR_Word ll_backend__switch_gen__HeadVar__2_2;
#line 613 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeCtorInfo_19_19;
#line 613 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeCtorInfo_22_22;
#line 613 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__Cost_4;
#line 613 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MainTaggedConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 0)));
#line 613 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OtherTaggedConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 1)));
#line 613 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MainTag_9;
#line 613 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__MainCost_10;
#line 613 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OtherTags_11;
#line 613 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OtherCosts_12;
#line 613 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_16_16;
#line 614 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 2)));
#line 614 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 3)));
#line 619 "switch_gen.m"
    MR_Box ll_backend__switch_gen__conv3_Cost_4;

#line 615 "switch_gen.m"
    {
#line 615 "switch_gen.m"
      ll_backend__switch_gen__MainTag_9 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(ll_backend__switch_gen__MainTaggedConsId_5);
    }
#line 616 "switch_gen.m"
    {
#line 616 "switch_gen.m"
      ll_backend__switch_gen__MainCost_10 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ll_backend__switch_gen__MainTag_9);
    }
#line 1165 "ll_backend.switch_gen.c"
    ll_backend__switch_gen__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 617 "switch_gen.m"
    {
#line 617 "switch_gen.m"
      ll_backend__switch_gen__OtherTags_11 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, ll_backend__switch_gen__TypeCtorInfo_19_19, (MR_Word) &ll_backend__switch_gen_scalar_common_1[6], ll_backend__switch_gen__OtherTaggedConsIds_6);
    }
#line 1172 "ll_backend.switch_gen.c"
    ll_backend__switch_gen__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 618 "switch_gen.m"
    {
#line 618 "switch_gen.m"
      ll_backend__switch_gen__OtherCosts_12 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_19_19, ll_backend__switch_gen__TypeCtorInfo_22_22, (MR_Word) &ll_backend__switch_gen_scalar_common_1[7], ll_backend__switch_gen__OtherTags_11);
    }
#line 619 "switch_gen.m"
    {
#line 619 "switch_gen.m"
      ll_backend__switch_gen__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "switch_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_16_16, 0) = ((MR_Box) (ll_backend__switch_gen__MainCost_10));
#line 619 "switch_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_16_16, 1) = ((MR_Box) (ll_backend__switch_gen__OtherCosts_12));
#line 619 "switch_gen.m"
    }
#line 619 "switch_gen.m"
    {
#line 619 "switch_gen.m"
      ll_backend__switch_gen__conv3_Cost_4 = mercury__list__foldl_3_f_0(ll_backend__switch_gen__TypeCtorInfo_22_22, ll_backend__switch_gen__TypeCtorInfo_22_22, (MR_Word) &ll_backend__switch_gen_scalar_common_1[8], ll_backend__switch_gen__V_16_16, ((MR_Box) ((MR_Integer) 0)));
    }
#line 619 "switch_gen.m"
    ll_backend__switch_gen__Cost_4 = ((MR_Integer) ll_backend__switch_gen__conv3_Cost_4);
#line 613 "switch_gen.m"
    {
#line 613 "switch_gen.m"
      ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "switch_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__switch_gen__Cost_4));
#line 613 "switch_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_3));
#line 613 "switch_gen.m"
    }
#line 613 "switch_gen.m"
    return ll_backend__switch_gen__HeadVar__2_2;
#line 613 "switch_gen.m"
  }
#line 611 "switch_gen.m"
}

#line 498 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
#line 498 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 498 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 498 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3)
#line 498 "switch_gen.m"
{
#line 501 "switch_gen.m"
  {
#line 501 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;

#line 501 "switch_gen.m"
    if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 501 "switch_gen.m"
      {
#line 501 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "switch_gen.m"
      }
#line 501 "switch_gen.m"
    else
#line 503 "switch_gen.m"
      {
#line 503 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Case_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 503 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 503 "switch_gen.m"
        MR_Word ll_backend__switch_gen__CanSucceedCases1_8;
#line 503 "switch_gen.m"
        MR_Word ll_backend__switch_gen__CannotSucceedCases1_9;
#line 503 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal_13;
#line 503 "switch_gen.m"
        MR_Word ll_backend__switch_gen__GoalInfo_15;
#line 503 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Detism_16;
#line 503 "switch_gen.m"
        MR_Word ll_backend__switch_gen__SolnCount_18;
#line 506 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_10_10;
#line 506 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_11_11;
#line 506 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_12_12;
#line 507 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_14_14;
#line 509 "switch_gen.m"
        MR_Word ll_backend__switch_gen___CanFail_17;

#line 504 "switch_gen.m"
        {
#line 504 "switch_gen.m"
          ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(ll_backend__switch_gen__Cases_5, &ll_backend__switch_gen__CanSucceedCases1_8, &ll_backend__switch_gen__CannotSucceedCases1_9);
        }
#line 506 "switch_gen.m"
        ll_backend__switch_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 0)));
#line 506 "switch_gen.m"
        ll_backend__switch_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 1)));
#line 506 "switch_gen.m"
        ll_backend__switch_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 2)));
#line 506 "switch_gen.m"
        ll_backend__switch_gen__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 3)));
#line 507 "switch_gen.m"
        ll_backend__switch_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Goal_13, (MR_Integer) 0)));
#line 507 "switch_gen.m"
        ll_backend__switch_gen__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Goal_13, (MR_Integer) 1)));
#line 508 "switch_gen.m"
        {
#line 508 "switch_gen.m"
          ll_backend__switch_gen__Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__switch_gen__GoalInfo_15);
        }
#line 509 "switch_gen.m"
        {
#line 509 "switch_gen.m"
          parse_tree__prog_data__determinism_components_3_p_0(ll_backend__switch_gen__Detism_16, &ll_backend__switch_gen___CanFail_17, &ll_backend__switch_gen__SolnCount_18);
        }
#line 517 "switch_gen.m"
#line 517 "switch_gen.m"
        switch (ll_backend__switch_gen__SolnCount_18) {
#line 517 "switch_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 517 "switch_gen.m"
          case (MR_Integer) 3:
#line 517 "switch_gen.m"
          case (MR_Integer) 2:
#line 517 "switch_gen.m"
          case (MR_Integer) 1:
#line 514 "switch_gen.m"
            {
#line 515 "switch_gen.m"
              {
#line 515 "switch_gen.m"
                MR_Word base;
#line 515 "switch_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "switch_gen.m"
                *ll_backend__switch_gen__HeadVar__2_2 = base;
#line 515 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__Case_4));
#line 515 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__CanSucceedCases1_8));
#line 515 "switch_gen.m"
              }
#line 516 "switch_gen.m"
              *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__CannotSucceedCases1_9;
#line 514 "switch_gen.m"
            }
#line 517 "switch_gen.m"
            break;
#line 517 "switch_gen.m"
          case (MR_Integer) 0:
#line 518 "switch_gen.m"
            {
#line 519 "switch_gen.m"
              *ll_backend__switch_gen__HeadVar__2_2 = ll_backend__switch_gen__CanSucceedCases1_8;
#line 520 "switch_gen.m"
              {
#line 520 "switch_gen.m"
                MR_Word base;
#line 520 "switch_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "switch_gen.m"
                *ll_backend__switch_gen__HeadVar__3_3 = base;
#line 520 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__Case_4));
#line 520 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__CannotSucceedCases1_9));
#line 520 "switch_gen.m"
              }
#line 518 "switch_gen.m"
            }
#line 517 "switch_gen.m"
            break;
#line 517 "switch_gen.m"
        }
#line 503 "switch_gen.m"
      }
#line 501 "switch_gen.m"
  }
#line 498 "switch_gen.m"
}

#line 607 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2(
#line 607 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 607 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 607 "switch_gen.m"
{
#line 607 "switch_gen.m"
  {
#line 607 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 607 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 607 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv1_HeadVar__2_2;

#line 607 "switch_gen.m"
    {
#line 607 "switch_gen.m"
      ll_backend__switch_gen__conv1_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 607 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 607 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 607 "switch_gen.m"
  }
#line 607 "switch_gen.m"
}

#line 607 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1(
#line 607 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 607 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 607 "switch_gen.m"
{
#line 607 "switch_gen.m"
  {
#line 607 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 607 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 607 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv0_HeadVar__2_2;

#line 607 "switch_gen.m"
    {
#line 607 "switch_gen.m"
      ll_backend__switch_gen__conv0_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 607 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
#line 607 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 607 "switch_gen.m"
  }
#line 607 "switch_gen.m"
}

#line 483 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(
#line 483 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases0_6,
#line 483 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Cases_7,
#line 483 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_8,
#line 483 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_9,
#line 483 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CI_10)
#line 483 "switch_gen.m"
{
#line 487 "switch_gen.m"
  {
#line 487 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 487 "switch_gen.m"
    MR_Word ll_backend__switch_gen__CanSucceedCases_11;
#line 487 "switch_gen.m"
    MR_Word ll_backend__switch_gen__CannotSucceedCases_12;

#line 488 "switch_gen.m"
    {
#line 488 "switch_gen.m"
      ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(ll_backend__switch_gen__Cases0_6, &ll_backend__switch_gen__CanSucceedCases_11, &ll_backend__switch_gen__CannotSucceedCases_12);
    }
#line 492 "switch_gen.m"
    if ((ll_backend__switch_gen__CannotSucceedCases_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "switch_gen.m"
      {
#line 529 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Case1_21;
#line 529 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Case2_22;
#line 529 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal1_26;
#line 529 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal2_30;
#line 530 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_44_44;
#line 530 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_45_45;
#line 533 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_23_23;
#line 533 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_24_24;
#line 533 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_25_25;
#line 534 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_27_27;
#line 534 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_28_28;
#line 534 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_29_29;

#line 530 "switch_gen.m"
        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CodeModel_8 == (MR_Integer) 0);
#line 530 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 530 "switch_gen.m"
          {
#line 531 "switch_gen.m"
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CanFail_9 == (MR_Integer) 1);
#line 530 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 530 "switch_gen.m"
              {
#line 532 "switch_gen.m"
                ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__Cases0_6)) == (MR_mktag((MR_Integer) 1)));
#line 532 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 532 "switch_gen.m"
                  {
#line 532 "switch_gen.m"
                    ll_backend__switch_gen__Case1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases0_6, (MR_Integer) 0)));
#line 532 "switch_gen.m"
                    ll_backend__switch_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases0_6, (MR_Integer) 1)));
#line 532 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 532 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 532 "switch_gen.m"
                      {
#line 532 "switch_gen.m"
                        ll_backend__switch_gen__Case2_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_44_44, (MR_Integer) 0)));
#line 532 "switch_gen.m"
                        ll_backend__switch_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_44_44, (MR_Integer) 1)));
#line 532 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 530 "switch_gen.m"
                          {
#line 533 "switch_gen.m"
                            ll_backend__switch_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 0)));
#line 533 "switch_gen.m"
                            ll_backend__switch_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 1)));
#line 533 "switch_gen.m"
                            ll_backend__switch_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 2)));
#line 533 "switch_gen.m"
                            ll_backend__switch_gen__Goal1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 3)));
#line 534 "switch_gen.m"
                            ll_backend__switch_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 0)));
#line 534 "switch_gen.m"
                            ll_backend__switch_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 1)));
#line 534 "switch_gen.m"
                            ll_backend__switch_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 2)));
#line 534 "switch_gen.m"
                            ll_backend__switch_gen__Goal2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 3)));
#line 534 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = MR_TRUE;
#line 530 "switch_gen.m"
                          }
#line 532 "switch_gen.m"
                      }
#line 532 "switch_gen.m"
                  }
#line 530 "switch_gen.m"
              }
#line 530 "switch_gen.m"
          }
#line 529 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 536 "switch_gen.m"
          {
#line 536 "switch_gen.m"
            MR_Word ll_backend__switch_gen__ModuleInfo_31;
#line 536 "switch_gen.m"
            MR_Word ll_backend__switch_gen__Globals_32;
#line 536 "switch_gen.m"
            MR_Word ll_backend__switch_gen__PredId_33;
#line 536 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__ProcId_34;
#line 536 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Min1_35;
#line 536 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Max1_36;
#line 536 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Min2_37;
#line 536 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Max2_38;
#line 542 "switch_gen.m"
            MR_Word ll_backend__switch_gen__BaseCase_39;
#line 542 "switch_gen.m"
            MR_Word ll_backend__switch_gen__SingleRecCase_40;

#line 536 "switch_gen.m"
            {
#line 536 "switch_gen.m"
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__ModuleInfo_31);
            }
#line 537 "switch_gen.m"
            {
#line 537 "switch_gen.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__switch_gen__ModuleInfo_31, &ll_backend__switch_gen__Globals_32);
            }
#line 538 "switch_gen.m"
            {
#line 538 "switch_gen.m"
              ll_backend__code_info__get_pred_id_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__PredId_33);
            }
#line 539 "switch_gen.m"
            {
#line 539 "switch_gen.m"
              ll_backend__code_info__get_proc_id_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__ProcId_34);
            }
#line 540 "switch_gen.m"
            {
#line 540 "switch_gen.m"
              hlds__goal_form__count_recursive_calls_5_p_0(ll_backend__switch_gen__Goal1_26, ll_backend__switch_gen__PredId_33, ll_backend__switch_gen__ProcId_34, &ll_backend__switch_gen__Min1_35, &ll_backend__switch_gen__Max1_36);
            }
#line 541 "switch_gen.m"
            {
#line 541 "switch_gen.m"
              hlds__goal_form__count_recursive_calls_5_p_0(ll_backend__switch_gen__Goal2_30, ll_backend__switch_gen__PredId_33, ll_backend__switch_gen__ProcId_34, &ll_backend__switch_gen__Min2_37, &ll_backend__switch_gen__Max2_38);
            }
#line 544 "switch_gen.m"
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max1_36 == (MR_Integer) 0);
#line 544 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 545 "switch_gen.m"
              ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min2_37 == (MR_Integer) 1);
#line 543 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 547 "switch_gen.m"
              {
#line 547 "switch_gen.m"
                ll_backend__switch_gen__BaseCase_39 = ll_backend__switch_gen__Case1_21;
#line 548 "switch_gen.m"
                ll_backend__switch_gen__SingleRecCase_40 = ll_backend__switch_gen__Case2_22;
#line 547 "switch_gen.m"
                ll_backend__switch_gen__succeeded = MR_TRUE;
#line 547 "switch_gen.m"
              }
#line 543 "switch_gen.m"
            else
#line 549 "switch_gen.m"
              {
#line 550 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max2_38 == (MR_Integer) 0);
#line 549 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 549 "switch_gen.m"
                  {
#line 551 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min1_35 == (MR_Integer) 1);
#line 549 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 549 "switch_gen.m"
                      {
#line 553 "switch_gen.m"
                        ll_backend__switch_gen__BaseCase_39 = ll_backend__switch_gen__Case2_22;
#line 554 "switch_gen.m"
                        ll_backend__switch_gen__SingleRecCase_40 = ll_backend__switch_gen__Case1_21;
#line 554 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = MR_TRUE;
#line 549 "switch_gen.m"
                      }
#line 549 "switch_gen.m"
                  }
#line 549 "switch_gen.m"
              }
#line 542 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 560 "switch_gen.m"
              {
#line 560 "switch_gen.m"
                MR_Word ll_backend__switch_gen__SingleRecBaseFirst_41;

#line 559 "switch_gen.m"
                {
#line 559 "switch_gen.m"
                  libs__globals__lookup_bool_option_3_p_0(ll_backend__switch_gen__Globals_32, (MR_Integer) 437, &ll_backend__switch_gen__SingleRecBaseFirst_41);
                }
#line 564 "switch_gen.m"
#line 564 "switch_gen.m"
                switch (ll_backend__switch_gen__SingleRecBaseFirst_41) {
#line 564 "switch_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 564 "switch_gen.m"
                  case (MR_Integer) 0:
#line 565 "switch_gen.m"
                    {
#line 565 "switch_gen.m"
                      MR_Word ll_backend__switch_gen__V_47_47;

#line 566 "switch_gen.m"
                      {
#line 566 "switch_gen.m"
                        ll_backend__switch_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_47_47, 0) = ((MR_Box) (ll_backend__switch_gen__SingleRecCase_40));
#line 566 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "switch_gen.m"
                      }
#line 566 "switch_gen.m"
                      {
#line 566 "switch_gen.m"
                        MR_Word base;
#line 566 "switch_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "switch_gen.m"
                        *ll_backend__switch_gen__Cases_7 = base;
#line 566 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_39));
#line 566 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_47_47));
#line 566 "switch_gen.m"
                      }
#line 565 "switch_gen.m"
                    }
#line 564 "switch_gen.m"
                    break;
#line 564 "switch_gen.m"
                  case (MR_Integer) 1:
#line 562 "switch_gen.m"
                    {
#line 562 "switch_gen.m"
                      MR_Word ll_backend__switch_gen__V_49_49;

#line 563 "switch_gen.m"
                      {
#line 563 "switch_gen.m"
                        ll_backend__switch_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_49_49, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_39));
#line 563 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "switch_gen.m"
                      }
#line 563 "switch_gen.m"
                      {
#line 563 "switch_gen.m"
                        MR_Word base;
#line 563 "switch_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "switch_gen.m"
                        *ll_backend__switch_gen__Cases_7 = base;
#line 563 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__SingleRecCase_40));
#line 563 "switch_gen.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_49_49));
#line 563 "switch_gen.m"
                      }
#line 562 "switch_gen.m"
                    }
#line 564 "switch_gen.m"
                    break;
#line 564 "switch_gen.m"
                }
#line 560 "switch_gen.m"
              }
#line 542 "switch_gen.m"
            else
#line 568 "switch_gen.m"
              {
#line 568 "switch_gen.m"
                MR_Word ll_backend__switch_gen__MultiRecCase_42;
#line 568 "switch_gen.m"
                MR_Word ll_backend__switch_gen__BaseCase_58;
#line 570 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__V_51_51;

#line 570 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max1_36 == (MR_Integer) 0);
#line 570 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 570 "switch_gen.m"
                  {
#line 571 "switch_gen.m"
                    ll_backend__switch_gen__V_51_51 = (MR_Integer) 1;
#line 571 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min2_37 > ll_backend__switch_gen__V_51_51);
#line 570 "switch_gen.m"
                  }
#line 569 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 573 "switch_gen.m"
                  {
#line 573 "switch_gen.m"
                    ll_backend__switch_gen__BaseCase_58 = ll_backend__switch_gen__Case1_21;
#line 574 "switch_gen.m"
                    ll_backend__switch_gen__MultiRecCase_42 = ll_backend__switch_gen__Case2_22;
#line 573 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = MR_TRUE;
#line 573 "switch_gen.m"
                  }
#line 569 "switch_gen.m"
                else
#line 575 "switch_gen.m"
                  {
#line 575 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__V_52_52;

#line 576 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max2_38 == (MR_Integer) 0);
#line 575 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 575 "switch_gen.m"
                      {
#line 577 "switch_gen.m"
                        ll_backend__switch_gen__V_52_52 = (MR_Integer) 1;
#line 577 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min1_35 > ll_backend__switch_gen__V_52_52);
#line 575 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 575 "switch_gen.m"
                          {
#line 579 "switch_gen.m"
                            ll_backend__switch_gen__BaseCase_58 = ll_backend__switch_gen__Case2_22;
#line 580 "switch_gen.m"
                            ll_backend__switch_gen__MultiRecCase_42 = ll_backend__switch_gen__Case1_21;
#line 580 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = MR_TRUE;
#line 575 "switch_gen.m"
                          }
#line 575 "switch_gen.m"
                      }
#line 575 "switch_gen.m"
                  }
#line 568 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 586 "switch_gen.m"
                  {
#line 586 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__MultiRecBaseFirst_43;

#line 585 "switch_gen.m"
                    {
#line 585 "switch_gen.m"
                      libs__globals__lookup_bool_option_3_p_0(ll_backend__switch_gen__Globals_32, (MR_Integer) 438, &ll_backend__switch_gen__MultiRecBaseFirst_43);
                    }
#line 590 "switch_gen.m"
#line 590 "switch_gen.m"
                    switch (ll_backend__switch_gen__MultiRecBaseFirst_43) {
#line 590 "switch_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 590 "switch_gen.m"
                      case (MR_Integer) 0:
#line 591 "switch_gen.m"
                        {
#line 591 "switch_gen.m"
                          MR_Word ll_backend__switch_gen__V_54_54;

#line 592 "switch_gen.m"
                          {
#line 592 "switch_gen.m"
                            ll_backend__switch_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_54_54, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_58));
#line 592 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 592 "switch_gen.m"
                          }
#line 592 "switch_gen.m"
                          {
#line 592 "switch_gen.m"
                            MR_Word base;
#line 592 "switch_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "switch_gen.m"
                            *ll_backend__switch_gen__Cases_7 = base;
#line 592 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__MultiRecCase_42));
#line 592 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_54_54));
#line 592 "switch_gen.m"
                          }
#line 591 "switch_gen.m"
                        }
#line 590 "switch_gen.m"
                        break;
#line 590 "switch_gen.m"
                      case (MR_Integer) 1:
#line 588 "switch_gen.m"
                        {
#line 588 "switch_gen.m"
                          MR_Word ll_backend__switch_gen__V_56_56;

#line 589 "switch_gen.m"
                          {
#line 589 "switch_gen.m"
                            ll_backend__switch_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_56_56, 0) = ((MR_Box) (ll_backend__switch_gen__MultiRecCase_42));
#line 589 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "switch_gen.m"
                          }
#line 589 "switch_gen.m"
                          {
#line 589 "switch_gen.m"
                            MR_Word base;
#line 589 "switch_gen.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "switch_gen.m"
                            *ll_backend__switch_gen__Cases_7 = base;
#line 589 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_58));
#line 589 "switch_gen.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_56_56));
#line 589 "switch_gen.m"
                          }
#line 588 "switch_gen.m"
                        }
#line 590 "switch_gen.m"
                        break;
#line 590 "switch_gen.m"
                    }
#line 586 "switch_gen.m"
                  }
#line 568 "switch_gen.m"
                else
#line 606 "switch_gen.m"
                  {
#line 606 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__TypeCtorInfo_8_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 606 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__TypeInfo_9_65 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[0];
#line 606 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__CostedCases_61;
#line 606 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__SortedCostedCases_62;

#line 607 "switch_gen.m"
                    {
#line 607 "switch_gen.m"
                      ll_backend__switch_gen__CostedCases_61 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_8_64, ll_backend__switch_gen__TypeInfo_9_65, (MR_Word) &ll_backend__switch_gen_scalar_common_1[4], ll_backend__switch_gen__Cases0_6);
                    }
#line 608 "switch_gen.m"
                    {
#line 608 "switch_gen.m"
                      mercury__list__sort_2_p_0(ll_backend__switch_gen__TypeInfo_9_65, ll_backend__switch_gen__CostedCases_61, &ll_backend__switch_gen__SortedCostedCases_62);
                    }
#line 609 "switch_gen.m"
                    {
#line 609 "switch_gen.m"
                      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__switch_gen__TypeCtorInfo_8_64, ll_backend__switch_gen__SortedCostedCases_62, ll_backend__switch_gen__Cases_7);
                    }
#line 606 "switch_gen.m"
                  }
#line 568 "switch_gen.m"
              }
#line 536 "switch_gen.m"
          }
#line 529 "switch_gen.m"
        else
#line 606 "switch_gen.m"
          {
#line 606 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TypeCtorInfo_8_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 606 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TypeInfo_9_75 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[0];
#line 606 "switch_gen.m"
            MR_Word ll_backend__switch_gen__CostedCases_71;
#line 606 "switch_gen.m"
            MR_Word ll_backend__switch_gen__SortedCostedCases_72;

#line 607 "switch_gen.m"
            {
#line 607 "switch_gen.m"
              ll_backend__switch_gen__CostedCases_71 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_8_74, ll_backend__switch_gen__TypeInfo_9_75, (MR_Word) &ll_backend__switch_gen_scalar_common_1[5], ll_backend__switch_gen__Cases0_6);
            }
#line 608 "switch_gen.m"
            {
#line 608 "switch_gen.m"
              mercury__list__sort_2_p_0(ll_backend__switch_gen__TypeInfo_9_75, ll_backend__switch_gen__CostedCases_71, &ll_backend__switch_gen__SortedCostedCases_72);
            }
#line 609 "switch_gen.m"
            {
#line 609 "switch_gen.m"
              mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__switch_gen__TypeCtorInfo_8_74, ll_backend__switch_gen__SortedCostedCases_72, ll_backend__switch_gen__Cases_7);
            }
#line 606 "switch_gen.m"
          }
#line 529 "switch_gen.m"
      }
#line 492 "switch_gen.m"
    else
#line 493 "switch_gen.m"
      {
#line 495 "switch_gen.m"
        {
#line 495 "switch_gen.m"
          *ll_backend__switch_gen__Cases_7 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__CanSucceedCases_11, ll_backend__switch_gen__CannotSucceedCases_12);
        }
#line 493 "switch_gen.m"
      }
#line 487 "switch_gen.m"
  }
#line 483 "switch_gen.m"
}

#line 448 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(
#line 448 "switch_gen.m"
  MR_Word ll_backend__switch_gen__ConsTag_3)
#line 448 "switch_gen.m"
{
#line 452 "switch_gen.m"
  while (MR_TRUE)
#line 452 "switch_gen.m"
    {
#line 452 "switch_gen.m"
      /* tailcall optimized into a loop */
#line 452 "switch_gen.m"
      {
#line 452 "switch_gen.m"
        MR_bool ll_backend__switch_gen__succeeded;
#line 452 "switch_gen.m"
        MR_Word ll_backend__switch_gen__IsReservedAddr_4;

#line 452 "switch_gen.m"
#line 452 "switch_gen.m"
        switch (MR_tag((MR_Word) ll_backend__switch_gen__ConsTag_3)) {
#line 452 "switch_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 452 "switch_gen.m"
          case (MR_Integer) 0:
#line 478 "switch_gen.m"
            ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 0;
#line 452 "switch_gen.m"
            break;
#line 452 "switch_gen.m"
          case (MR_Integer) 1:
#line 452 "switch_gen.m"
          case (MR_Integer) 2:
#line 478 "switch_gen.m"
            ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 0;
#line 452 "switch_gen.m"
            break;
#line 452 "switch_gen.m"
          case (MR_Integer) 3:
#line 452 "switch_gen.m"
#line 452 "switch_gen.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 0)))) {
#line 452 "switch_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 452 "switch_gen.m"
              case (MR_Integer) 0:
#line 452 "switch_gen.m"
              case (MR_Integer) 1:
#line 452 "switch_gen.m"
              case (MR_Integer) 2:
#line 452 "switch_gen.m"
              case (MR_Integer) 3:
#line 452 "switch_gen.m"
              case (MR_Integer) 4:
#line 452 "switch_gen.m"
              case (MR_Integer) 5:
#line 452 "switch_gen.m"
              case (MR_Integer) 6:
#line 452 "switch_gen.m"
              case (MR_Integer) 8:
#line 452 "switch_gen.m"
              case (MR_Integer) 9:
#line 452 "switch_gen.m"
              case (MR_Integer) 10:
#line 452 "switch_gen.m"
              case (MR_Integer) 11:
#line 452 "switch_gen.m"
              case (MR_Integer) 12:
#line 452 "switch_gen.m"
              case (MR_Integer) 13:
#line 452 "switch_gen.m"
              case (MR_Integer) 14:
#line 452 "switch_gen.m"
              case (MR_Integer) 16:
#line 478 "switch_gen.m"
                ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 0;
#line 452 "switch_gen.m"
                break;
#line 452 "switch_gen.m"
              case (MR_Integer) 7:
#line 455 "switch_gen.m"
                {
#line 455 "switch_gen.m"
                  MR_Word ll_backend__switch_gen__SubConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 2)));
#line 455 "switch_gen.m"
                  MR_Integer ll_backend__switch_gen__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 1)));

#line 456 "switch_gen.m"
                  /* direct tailcall eliminated */
#line 456 "switch_gen.m"
                  {
#line 456 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__ConsTag__tmp_copy_3 = ll_backend__switch_gen__SubConsTag_7;

#line 456 "switch_gen.m"
                    ll_backend__switch_gen__ConsTag_3 = ll_backend__switch_gen__ConsTag__tmp_copy_3;
#line 456 "switch_gen.m"
                  }
#line 456 "switch_gen.m"
                  continue;
#line 455 "switch_gen.m"
                }
#line 452 "switch_gen.m"
                break;
#line 452 "switch_gen.m"
              case (MR_Integer) 15:
#line 453 "switch_gen.m"
                ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 1;
#line 452 "switch_gen.m"
                break;
#line 452 "switch_gen.m"
            }
#line 452 "switch_gen.m"
            break;
#line 452 "switch_gen.m"
        }
#line 452 "switch_gen.m"
        return ll_backend__switch_gen__IsReservedAddr_4;
#line 452 "switch_gen.m"
      }
#line 452 "switch_gen.m"
      break;
#line 452 "switch_gen.m"
    }
#line 448 "switch_gen.m"
}

#line 434 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(
#line 434 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1)
#line 434 "switch_gen.m"
{
#line 436 "switch_gen.m"
  while (MR_TRUE)
#line 436 "switch_gen.m"
    {
#line 436 "switch_gen.m"
      /* tailcall optimized into a loop */
#line 436 "switch_gen.m"
      {
#line 436 "switch_gen.m"
        MR_bool ll_backend__switch_gen__succeeded;
#line 436 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadVar__2_2;

#line 436 "switch_gen.m"
        if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "switch_gen.m"
          ll_backend__switch_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 436 "switch_gen.m"
        else
#line 437 "switch_gen.m"
          {
#line 437 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TaggedConsId_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 437 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TaggedConsIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 437 "switch_gen.m"
            MR_Word ll_backend__switch_gen__ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_3, (MR_Integer) 1)));
#line 437 "switch_gen.m"
            MR_Word ll_backend__switch_gen__HeadContains_8;
#line 438 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_3, (MR_Integer) 0)));

#line 439 "switch_gen.m"
            {
#line 439 "switch_gen.m"
              ll_backend__switch_gen__HeadContains_8 = ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(ll_backend__switch_gen__ConsTag_7);
            }
#line 443 "switch_gen.m"
#line 443 "switch_gen.m"
            switch (ll_backend__switch_gen__HeadContains_8) {
#line 443 "switch_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 443 "switch_gen.m"
              case (MR_Integer) 0:
#line 445 "switch_gen.m"
                {
#line 445 "switch_gen.m"
                  /* direct tailcall eliminated */
#line 445 "switch_gen.m"
                  {
#line 445 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__HeadVar__1__tmp_copy_1 = ll_backend__switch_gen__TaggedConsIds_4;

#line 445 "switch_gen.m"
                    ll_backend__switch_gen__HeadVar__1_1 = ll_backend__switch_gen__HeadVar__1__tmp_copy_1;
#line 445 "switch_gen.m"
                  }
#line 445 "switch_gen.m"
                  continue;
#line 445 "switch_gen.m"
                }
#line 443 "switch_gen.m"
                break;
#line 443 "switch_gen.m"
              case (MR_Integer) 1:
#line 442 "switch_gen.m"
                ll_backend__switch_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 443 "switch_gen.m"
                break;
#line 443 "switch_gen.m"
            }
#line 437 "switch_gen.m"
          }
#line 436 "switch_gen.m"
        return ll_backend__switch_gen__HeadVar__2_2;
#line 436 "switch_gen.m"
      }
#line 436 "switch_gen.m"
      break;
#line 436 "switch_gen.m"
    }
#line 434 "switch_gen.m"
}

#line 413 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(
#line 413 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 413 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 413 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3)
#line 413 "switch_gen.m"
{
#line 416 "switch_gen.m"
  {
#line 416 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;

#line 416 "switch_gen.m"
    if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "switch_gen.m"
      {
#line 416 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 416 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 416 "switch_gen.m"
      }
#line 416 "switch_gen.m"
    else
#line 418 "switch_gen.m"
      {
#line 418 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedCase_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedCases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ReservedAddrCasesTail_8;
#line 418 "switch_gen.m"
        MR_Word ll_backend__switch_gen__NonReservedAddrCasesTail_9;
#line 418 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedConsId_16;
#line 418 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedConsIds_17;
#line 418 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ConsTag_20;
#line 418 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadContains_21;
#line 421 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_12_12;
#line 421 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_13_13;
#line 438 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_19_19;

#line 419 "switch_gen.m"
        {
#line 419 "switch_gen.m"
          ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(ll_backend__switch_gen__TaggedCases_5, &ll_backend__switch_gen__ReservedAddrCasesTail_8, &ll_backend__switch_gen__NonReservedAddrCasesTail_9);
        }
#line 421 "switch_gen.m"
        ll_backend__switch_gen__TaggedConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 0)));
#line 421 "switch_gen.m"
        ll_backend__switch_gen__TaggedConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 1)));
#line 421 "switch_gen.m"
        ll_backend__switch_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 2)));
#line 421 "switch_gen.m"
        ll_backend__switch_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 3)));
#line 438 "switch_gen.m"
        ll_backend__switch_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_16, (MR_Integer) 0)));
#line 438 "switch_gen.m"
        ll_backend__switch_gen__ConsTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_16, (MR_Integer) 1)));
#line 439 "switch_gen.m"
        {
#line 439 "switch_gen.m"
          ll_backend__switch_gen__HeadContains_21 = ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(ll_backend__switch_gen__ConsTag_20);
        }
#line 2279 "ll_backend.switch_gen.c"
#line 2280 "ll_backend.switch_gen.c"
        switch (ll_backend__switch_gen__HeadContains_21) {
#line 2282 "ll_backend.switch_gen.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2284 "ll_backend.switch_gen.c"
          case (MR_Integer) 0:
#line 2286 "ll_backend.switch_gen.c"
            {
#line 2288 "ll_backend.switch_gen.c"
              MR_Word ll_backend__switch_gen__ContainsReservedAddr_15;

#line 445 "switch_gen.m"
              {
#line 445 "switch_gen.m"
                ll_backend__switch_gen__ContainsReservedAddr_15 = ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(ll_backend__switch_gen__TaggedConsIds_17);
              }
#line 428 "switch_gen.m"
#line 428 "switch_gen.m"
              switch (ll_backend__switch_gen__ContainsReservedAddr_15) {
#line 428 "switch_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 428 "switch_gen.m"
                case (MR_Integer) 0:
#line 429 "switch_gen.m"
                  {
#line 430 "switch_gen.m"
                    *ll_backend__switch_gen__HeadVar__2_2 = ll_backend__switch_gen__ReservedAddrCasesTail_8;
#line 431 "switch_gen.m"
                    {
#line 431 "switch_gen.m"
                      MR_Word base;
#line 431 "switch_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "switch_gen.m"
                      *ll_backend__switch_gen__HeadVar__3_3 = base;
#line 431 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
#line 431 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__NonReservedAddrCasesTail_9));
#line 431 "switch_gen.m"
                    }
#line 429 "switch_gen.m"
                  }
#line 428 "switch_gen.m"
                  break;
#line 428 "switch_gen.m"
                case (MR_Integer) 1:
#line 425 "switch_gen.m"
                  {
#line 426 "switch_gen.m"
                    {
#line 426 "switch_gen.m"
                      MR_Word base;
#line 426 "switch_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "switch_gen.m"
                      *ll_backend__switch_gen__HeadVar__2_2 = base;
#line 426 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
#line 426 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__ReservedAddrCasesTail_8));
#line 426 "switch_gen.m"
                    }
#line 427 "switch_gen.m"
                    *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__NonReservedAddrCasesTail_9;
#line 425 "switch_gen.m"
                  }
#line 428 "switch_gen.m"
                  break;
#line 428 "switch_gen.m"
              }
#line 2351 "ll_backend.switch_gen.c"
            }
#line 2353 "ll_backend.switch_gen.c"
            break;
#line 2355 "ll_backend.switch_gen.c"
          case (MR_Integer) 1:
#line 2357 "ll_backend.switch_gen.c"
            {
#line 426 "switch_gen.m"
              {
#line 426 "switch_gen.m"
                MR_Word base;
#line 426 "switch_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "switch_gen.m"
                *ll_backend__switch_gen__HeadVar__2_2 = base;
#line 426 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
#line 426 "switch_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__ReservedAddrCasesTail_8));
#line 426 "switch_gen.m"
              }
#line 427 "switch_gen.m"
              *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__NonReservedAddrCasesTail_9;
#line 2375 "ll_backend.switch_gen.c"
            }
#line 2377 "ll_backend.switch_gen.c"
            break;
#line 2379 "ll_backend.switch_gen.c"
        }
#line 418 "switch_gen.m"
      }
#line 416 "switch_gen.m"
  }
#line 413 "switch_gen.m"
}

#line 333 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_13_p_0(
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCases_14,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_15,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_16,
#line 333 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_17,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_18,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_19,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__GoalInfo_20,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_21,
#line 333 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__MaybeEnd_22,
#line 333 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_23,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_34,
#line 333 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_35,
#line 333 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_0_36)
#line 333 "switch_gen.m"
{
#line 339 "switch_gen.m"
  {
#line 339 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 339 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OrderedTaggedCases_26;
#line 339 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeCtor_27;
#line 339 "switch_gen.m"
    MR_Word ll_backend__switch_gen__ModuleInfo_28;
#line 339 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeTable_29;
#line 339 "switch_gen.m"
    MR_Word ll_backend__switch_gen__CheaperTagTest_32;
#line 339 "switch_gen.m"
    MR_Word ll_backend__switch_gen__BranchStart_33;
#line 390 "switch_gen.m"
    MR_Word ll_backend__switch_gen__VarTypeDefn_45;
#line 390 "switch_gen.m"
    MR_Word ll_backend__switch_gen__VarTypeDefnBody_46;
#line 390 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_51_51;
#line 392 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_52_52;
#line 392 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_53_53;
#line 392 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_54_54;
#line 392 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_55_55;
#line 392 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_56_56;
#line 392 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_57_57;
#line 392 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_58_58;
#line 392 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_59_59;
#line 345 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeDefn_30;

#line 390 "switch_gen.m"
    {
#line 390 "switch_gen.m"
      ll_backend__switch_gen__succeeded = ll_backend__code_info__search_type_defn_3_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_0_34, ll_backend__switch_gen__VarType_16, &ll_backend__switch_gen__VarTypeDefn_45);
    }
#line 390 "switch_gen.m"
    if (ll_backend__switch_gen__succeeded)
#line 390 "switch_gen.m"
      {
#line 391 "switch_gen.m"
        {
#line 391 "switch_gen.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__switch_gen__VarTypeDefn_45, &ll_backend__switch_gen__VarTypeDefnBody_46);
        }
#line 392 "switch_gen.m"
        ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__VarTypeDefnBody_46)) == (MR_mktag((MR_Integer) 1)));
#line 392 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 392 "switch_gen.m"
          {
#line 392 "switch_gen.m"
            ll_backend__switch_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 0)));
#line 392 "switch_gen.m"
            ll_backend__switch_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 1)));
#line 392 "switch_gen.m"
            ll_backend__switch_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 2)));
#line 392 "switch_gen.m"
            ll_backend__switch_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 3)));
#line 392 "switch_gen.m"
            ll_backend__switch_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 4)));
#line 392 "switch_gen.m"
            ll_backend__switch_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 5)));
#line 392 "switch_gen.m"
            ll_backend__switch_gen__V_58_58 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 392 "switch_gen.m"
            ll_backend__switch_gen__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 392 "switch_gen.m"
            ll_backend__switch_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 7)));
#line 392 "switch_gen.m"
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__V_51_51 == (MR_Integer) 0);
#line 392 "switch_gen.m"
          }
#line 390 "switch_gen.m"
      }
#line 389 "switch_gen.m"
    if (ll_backend__switch_gen__succeeded)
#line 395 "switch_gen.m"
      {
#line 395 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ReservedAddrCases0_47;
#line 395 "switch_gen.m"
        MR_Word ll_backend__switch_gen__NonReservedAddrCases0_48;
#line 395 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ReservedAddrCases_49;
#line 395 "switch_gen.m"
        MR_Word ll_backend__switch_gen__NonReservedAddrCases_50;

#line 394 "switch_gen.m"
        {
#line 394 "switch_gen.m"
          ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(ll_backend__switch_gen__TaggedCases_14, &ll_backend__switch_gen__ReservedAddrCases0_47, &ll_backend__switch_gen__NonReservedAddrCases0_48);
        }
#line 396 "switch_gen.m"
        {
#line 396 "switch_gen.m"
          ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__ReservedAddrCases0_47, &ll_backend__switch_gen__ReservedAddrCases_49, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34);
        }
#line 399 "switch_gen.m"
        {
#line 399 "switch_gen.m"
          ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__NonReservedAddrCases0_48, &ll_backend__switch_gen__NonReservedAddrCases_50, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34);
        }
#line 402 "switch_gen.m"
        {
#line 402 "switch_gen.m"
          ll_backend__switch_gen__OrderedTaggedCases_26 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__ReservedAddrCases_49, ll_backend__switch_gen__NonReservedAddrCases_50);
        }
#line 395 "switch_gen.m"
      }
#line 389 "switch_gen.m"
    else
#line 407 "switch_gen.m"
      {
#line 407 "switch_gen.m"
        ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__TaggedCases_14, &ll_backend__switch_gen__OrderedTaggedCases_26, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34);
      }
#line 342 "switch_gen.m"
    {
#line 342 "switch_gen.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__switch_gen__VarType_16, &ll_backend__switch_gen__TypeCtor_27);
    }
#line 343 "switch_gen.m"
    {
#line 343 "switch_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_0_34, &ll_backend__switch_gen__ModuleInfo_28);
    }
#line 344 "switch_gen.m"
    {
#line 344 "switch_gen.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__switch_gen__ModuleInfo_28, &ll_backend__switch_gen__TypeTable_29);
    }
#line 345 "switch_gen.m"
    {
#line 345 "switch_gen.m"
      ll_backend__switch_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__switch_gen__TypeTable_29, ll_backend__switch_gen__TypeCtor_27, &ll_backend__switch_gen__TypeDefn_30);
    }
#line 345 "switch_gen.m"
    if (ll_backend__switch_gen__succeeded)
#line 346 "switch_gen.m"
      {
#line 346 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TypeBody_31;

#line 346 "switch_gen.m"
        {
#line 346 "switch_gen.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__switch_gen__TypeDefn_30, &ll_backend__switch_gen__TypeBody_31);
        }
#line 347 "switch_gen.m"
        {
#line 347 "switch_gen.m"
          ll_backend__switch_gen__CheaperTagTest_32 = hlds__hlds_data__get_maybe_cheaper_tag_test_1_f_0(ll_backend__switch_gen__TypeBody_31);
        }
#line 346 "switch_gen.m"
      }
#line 345 "switch_gen.m"
    else
#line 349 "switch_gen.m"
      ll_backend__switch_gen__CheaperTagTest_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 351 "switch_gen.m"
    {
#line 351 "switch_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_0_36, &ll_backend__switch_gen__BranchStart_33);
    }
#line 352 "switch_gen.m"
    {
#line 352 "switch_gen.m"
      ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(ll_backend__switch_gen__BranchStart_33, ll_backend__switch_gen__OrderedTaggedCases_26, ll_backend__switch_gen__VarRval_15, ll_backend__switch_gen__VarType_16, ll_backend__switch_gen__VarName_17, ll_backend__switch_gen__CheaperTagTest_32, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__GoalInfo_20, ll_backend__switch_gen__EndLabel_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__switch_gen__MaybeEnd_22, ll_backend__switch_gen__Code_23, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34, ll_backend__switch_gen__STATE_VARIABLE_CI_35);
    }
#line 339 "switch_gen.m"
  }
#line 333 "switch_gen.m"
}

#line 255 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_3(
#line 255 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 255 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 255 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
#line 255 "switch_gen.m"
{
#line 255 "switch_gen.m"
  {
#line 255 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 255 "switch_gen.m"
    MR_String ll_backend__switch_gen__conv2_HeadVar__2_2;

#line 255 "switch_gen.m"
    {
#line 255 "switch_gen.m"
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv2_HeadVar__2_2);
    }
#line 255 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv2_HeadVar__2_2));
#line 255 "switch_gen.m"
  }
#line 255 "switch_gen.m"
}

#line 234 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_2(
#line 234 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 234 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 234 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
#line 234 "switch_gen.m"
{
#line 234 "switch_gen.m"
  {
#line 234 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 234 "switch_gen.m"
    MR_String ll_backend__switch_gen__conv1_HeadVar__2_2;

#line 234 "switch_gen.m"
    {
#line 234 "switch_gen.m"
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv1_HeadVar__2_2);
    }
#line 234 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 234 "switch_gen.m"
  }
#line 234 "switch_gen.m"
}

#line 189 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_1(
#line 189 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 189 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 189 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
#line 189 "switch_gen.m"
{
#line 189 "switch_gen.m"
  {
#line 189 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 189 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__conv0_HeadVar__2_2;

#line 189 "switch_gen.m"
    {
#line 189 "switch_gen.m"
      backend_libs__switch_util__get_int_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv0_HeadVar__2_2);
    }
#line 189 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
#line 189 "switch_gen.m"
  }
#line 189 "switch_gen.m"
}

#line 92 "switch_gen.m"
void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0(
#line 92 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_11,
#line 92 "switch_gen.m"
  MR_Word ll_backend__switch_gen__SwitchVar_12,
#line 92 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_13,
#line 92 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases_14,
#line 92 "switch_gen.m"
  MR_Word ll_backend__switch_gen__GoalInfo_15,
#line 92 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_16,
#line 92 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_56,
#line 92 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_57,
#line 92 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_0_58,
#line 92 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CLD_59)
#line 92 "switch_gen.m"
{
#line 131 "switch_gen.m"
  {
#line 131 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__StoreMap_19;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__EndLabel_20;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__ModuleInfo_21;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchVarType_22;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TaggedCases0_23;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MaybeIntSwitchInfo_24;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TaggedCases_25;
#line 131 "switch_gen.m"
    MR_String ll_backend__switch_gen__SwitchVarName_26;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchVarCode_27;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchVarRval_28;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchCategory_29;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MayUseSmartIndexing_30;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MaybeEnd_31;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchCode_32;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_60_60;
#line 131 "switch_gen.m"
    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61;

#line 135 "switch_gen.m"
    {
#line 135 "switch_gen.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_gen__GoalInfo_15, &ll_backend__switch_gen__StoreMap_19);
    }
#line 136 "switch_gen.m"
    {
#line 136 "switch_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, &ll_backend__switch_gen__STATE_VARIABLE_CI_60_60);
    }
#line 137 "switch_gen.m"
    {
#line 137 "switch_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__ModuleInfo_21);
    }
#line 138 "switch_gen.m"
    {
#line 138 "switch_gen.m"
      ll_backend__switch_gen__SwitchVarType_22 = ll_backend__code_info__variable_type_2_f_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__SwitchVar_12);
    }
#line 139 "switch_gen.m"
    {
#line 139 "switch_gen.m"
      backend_libs__switch_util__tag_cases_5_p_0(ll_backend__switch_gen__ModuleInfo_21, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__Cases_14, &ll_backend__switch_gen__TaggedCases0_23, &ll_backend__switch_gen__MaybeIntSwitchInfo_24);
    }
#line 141 "switch_gen.m"
    {
#line 141 "switch_gen.m"
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__TaggedCases0_23, &ll_backend__switch_gen__TaggedCases_25);
    }
#line 143 "switch_gen.m"
    {
#line 143 "switch_gen.m"
      ll_backend__switch_gen__SwitchVarName_26 = ll_backend__code_info__variable_name_2_f_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__SwitchVar_12);
    }
#line 144 "switch_gen.m"
    {
#line 144 "switch_gen.m"
      ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__switch_gen__SwitchVar_12, &ll_backend__switch_gen__SwitchVarCode_27, &ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CLD_0_58, &ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
    }
#line 146 "switch_gen.m"
    {
#line 146 "switch_gen.m"
      backend_libs__switch_util__find_switch_category_4_p_0(ll_backend__switch_gen__ModuleInfo_21, ll_backend__switch_gen__SwitchVarType_22, &ll_backend__switch_gen__SwitchCategory_29, &ll_backend__switch_gen__MayUseSmartIndexing_30);
    }
#line 153 "switch_gen.m"
#line 153 "switch_gen.m"
    switch (ll_backend__switch_gen__MayUseSmartIndexing_30) {
#line 153 "switch_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 153 "switch_gen.m"
      case (MR_Integer) 0:
#line 150 "switch_gen.m"
        {
#line 150 "switch_gen.m"
          ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
        }
#line 153 "switch_gen.m"
        break;
#line 153 "switch_gen.m"
      case (MR_Integer) 1:
#line 154 "switch_gen.m"
        {
#line 154 "switch_gen.m"
          MR_Word ll_backend__switch_gen__Globals_33;

#line 155 "switch_gen.m"
          {
#line 155 "switch_gen.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__switch_gen__ModuleInfo_21, &ll_backend__switch_gen__Globals_33);
          }
#line 220 "switch_gen.m"
#line 220 "switch_gen.m"
          switch (ll_backend__switch_gen__SwitchCategory_29) {
#line 220 "switch_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 220 "switch_gen.m"
            case (MR_Integer) 0:
#line 157 "switch_gen.m"
              {
#line 157 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumConsIds_34;
#line 157 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumArms_35;
#line 159 "switch_gen.m"
                MR_Word ll_backend__switch_gen__NeedBitVecCheck_44;
#line 159 "switch_gen.m"
                MR_Word ll_backend__switch_gen__NeedRangeCheck_45;
#line 159 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__FirstVal_46;
#line 159 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__LastVal_47;
#line 159 "switch_gen.m"
                MR_Word ll_backend__switch_gen__BranchStart_48;
#line 159 "switch_gen.m"
                MR_Word ll_backend__switch_gen__MaybeEnd1_49;
#line 159 "switch_gen.m"
                MR_Word ll_backend__switch_gen__LookupSwitchInfo_50;
#line 159 "switch_gen.m"
                MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_92_92;
#line 161 "switch_gen.m"
                MR_Word ll_backend__switch_gen__TypeCtorInfo_173_173;
#line 161 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__LowerLimit_36;
#line 161 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__UpperLimit_37;
#line 161 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumValues_38;
#line 161 "switch_gen.m"
                MR_Word ll_backend__switch_gen__MaybeTraceInfo_39;
#line 161 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__LookupSize_40;
#line 161 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__ReqDensity_41;
#line 161 "switch_gen.m"
                MR_Word ll_backend__switch_gen__FilteredTaggedCases_42;
#line 161 "switch_gen.m"
                MR_Word ll_backend__switch_gen__FilteredCanFail_43;
#line 161 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_85_85;
#line 161 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_86_86;
#line 161 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_87_87;
#line 161 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__V_88_88;
#line 161 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_89_89;
#line 161 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_90_90;
#line 161 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_91_91;

#line 158 "switch_gen.m"
                {
#line 158 "switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__NumConsIds_34, &ll_backend__switch_gen__NumArms_35);
                }
#line 160 "switch_gen.m"
                ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__MaybeIntSwitchInfo_24)) == (MR_mktag((MR_Integer) 1)));
#line 160 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 160 "switch_gen.m"
                  {
#line 160 "switch_gen.m"
                    ll_backend__switch_gen__LowerLimit_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 0)));
#line 160 "switch_gen.m"
                    ll_backend__switch_gen__UpperLimit_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 1)));
#line 160 "switch_gen.m"
                    ll_backend__switch_gen__NumValues_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 2)));
#line 169 "switch_gen.m"
                    ll_backend__switch_gen__V_85_85 = (MR_Integer) 443;
#line 169 "switch_gen.m"
                    ll_backend__switch_gen__V_86_86 = (MR_Integer) 1;
#line 169 "switch_gen.m"
                    {
#line 169 "switch_gen.m"
                      ll_backend__switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__V_85_85, ll_backend__switch_gen__V_86_86);
                    }
#line 161 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 161 "switch_gen.m"
                      {
#line 172 "switch_gen.m"
                        {
#line 172 "switch_gen.m"
                          ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__MaybeTraceInfo_39);
                        }
#line 173 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__MaybeTraceInfo_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 161 "switch_gen.m"
                          {
#line 175 "switch_gen.m"
                            ll_backend__switch_gen__V_87_87 = (MR_Integer) 430;
#line 175 "switch_gen.m"
                            {
#line 175 "switch_gen.m"
                              libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__V_87_87, &ll_backend__switch_gen__LookupSize_40);
                            }
#line 177 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_34 >= ll_backend__switch_gen__LookupSize_40);
#line 161 "switch_gen.m"
                            if (ll_backend__switch_gen__succeeded)
#line 161 "switch_gen.m"
                              {
#line 178 "switch_gen.m"
                                ll_backend__switch_gen__V_88_88 = (MR_Integer) 1;
#line 178 "switch_gen.m"
                                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_35 > ll_backend__switch_gen__V_88_88);
#line 161 "switch_gen.m"
                                if (ll_backend__switch_gen__succeeded)
#line 161 "switch_gen.m"
                                  {
#line 179 "switch_gen.m"
                                    ll_backend__switch_gen__V_89_89 = (MR_Integer) 428;
#line 179 "switch_gen.m"
                                    {
#line 179 "switch_gen.m"
                                      libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__V_89_89, &ll_backend__switch_gen__ReqDensity_41);
                                    }
#line 181 "switch_gen.m"
                                    {
#line 181 "switch_gen.m"
                                      backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__FilteredTaggedCases_42, ll_backend__switch_gen__CanFail_13, &ll_backend__switch_gen__FilteredCanFail_43);
                                    }
#line 184 "switch_gen.m"
                                    {
#line 184 "switch_gen.m"
                                      ll_backend__switch_gen__succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ll_backend__switch_gen__ModuleInfo_21, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__FilteredCanFail_43, ll_backend__switch_gen__LowerLimit_36, ll_backend__switch_gen__UpperLimit_37, ll_backend__switch_gen__NumValues_38, ll_backend__switch_gen__ReqDensity_41, &ll_backend__switch_gen__NeedBitVecCheck_44, &ll_backend__switch_gen__NeedRangeCheck_45, &ll_backend__switch_gen__FirstVal_46, &ll_backend__switch_gen__LastVal_47);
                                    }
#line 161 "switch_gen.m"
                                    if (ll_backend__switch_gen__succeeded)
#line 161 "switch_gen.m"
                                      {
#line 188 "switch_gen.m"
                                        {
#line 188 "switch_gen.m"
                                          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__switch_gen__BranchStart_48);
                                        }
#line 189 "switch_gen.m"
                                        ll_backend__switch_gen__V_90_90 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[1];
#line 190 "switch_gen.m"
                                        ll_backend__switch_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2981 "ll_backend.switch_gen.c"
                                        ll_backend__switch_gen__TypeCtorInfo_173_173 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 189 "switch_gen.m"
                                        {
#line 189 "switch_gen.m"
                                          ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0(ll_backend__switch_gen__TypeCtorInfo_173_173, ll_backend__switch_gen__BranchStart_48, ll_backend__switch_gen__V_90_90, ll_backend__switch_gen__FilteredTaggedCases_42, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__V_91_91, &ll_backend__switch_gen__MaybeEnd1_49, &ll_backend__switch_gen__LookupSwitchInfo_50, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                                        }
#line 161 "switch_gen.m"
                                      }
#line 161 "switch_gen.m"
                                  }
#line 161 "switch_gen.m"
                              }
#line 161 "switch_gen.m"
                          }
#line 161 "switch_gen.m"
                      }
#line 160 "switch_gen.m"
                  }
#line 159 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 194 "switch_gen.m"
                  {
#line 194 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_93_103;

#line 194 "switch_gen.m"
                    {
#line 194 "switch_gen.m"
                      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_48, ll_backend__switch_gen__STATE_VARIABLE_CI_92_92, &ll_backend__switch_gen__STATE_VARIABLE_CLD_93_103);
                    }
#line 195 "switch_gen.m"
                    {
#line 195 "switch_gen.m"
                      ll_backend__lookup_switch__generate_int_lookup_switch_14_p_0(ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__LookupSwitchInfo_50, ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__FirstVal_46, ll_backend__switch_gen__LastVal_47, ll_backend__switch_gen__NeedBitVecCheck_44, ll_backend__switch_gen__NeedRangeCheck_45, ll_backend__switch_gen__MaybeEnd1_49, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_92_92, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_93_103);
                    }
#line 194 "switch_gen.m"
                  }
#line 159 "switch_gen.m"
                else
#line 199 "switch_gen.m"
                  {
#line 199 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__DenseSwitchInfo_52;
#line 201 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__DenseSize_51;
#line 201 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__V_95_95;
#line 201 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__V_96_96;
#line 201 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__V_97_97;
#line 201 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__LowerLimit_104;
#line 201 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__UpperLimit_105;
#line 201 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__NumValues_106;
#line 201 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__ReqDensity_107;

#line 200 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__MaybeIntSwitchInfo_24)) == (MR_mktag((MR_Integer) 1)));
#line 200 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 200 "switch_gen.m"
                      {
#line 200 "switch_gen.m"
                        ll_backend__switch_gen__LowerLimit_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 0)));
#line 200 "switch_gen.m"
                        ll_backend__switch_gen__UpperLimit_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 1)));
#line 200 "switch_gen.m"
                        ll_backend__switch_gen__NumValues_106 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 2)));
#line 202 "switch_gen.m"
                        ll_backend__switch_gen__V_95_95 = (MR_Integer) 429;
#line 202 "switch_gen.m"
                        {
#line 202 "switch_gen.m"
                          libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__V_95_95, &ll_backend__switch_gen__DenseSize_51);
                        }
#line 204 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_34 >= ll_backend__switch_gen__DenseSize_51);
#line 201 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 201 "switch_gen.m"
                          {
#line 205 "switch_gen.m"
                            ll_backend__switch_gen__V_96_96 = (MR_Integer) 1;
#line 205 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_35 > ll_backend__switch_gen__V_96_96);
#line 201 "switch_gen.m"
                            if (ll_backend__switch_gen__succeeded)
#line 201 "switch_gen.m"
                              {
#line 206 "switch_gen.m"
                                ll_backend__switch_gen__V_97_97 = (MR_Integer) 427;
#line 206 "switch_gen.m"
                                {
#line 206 "switch_gen.m"
                                  libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__V_97_97, &ll_backend__switch_gen__ReqDensity_107);
                                }
#line 208 "switch_gen.m"
                                {
#line 208 "switch_gen.m"
                                  ll_backend__switch_gen__succeeded = ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__LowerLimit_104, ll_backend__switch_gen__UpperLimit_105, ll_backend__switch_gen__NumValues_106, ll_backend__switch_gen__ReqDensity_107, ll_backend__switch_gen__CanFail_13, &ll_backend__switch_gen__DenseSwitchInfo_52);
                                }
#line 201 "switch_gen.m"
                              }
#line 201 "switch_gen.m"
                          }
#line 200 "switch_gen.m"
                      }
#line 199 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 212 "switch_gen.m"
                      {
#line 212 "switch_gen.m"
                        {
#line 212 "switch_gen.m"
                          ll_backend__dense_switch__generate_dense_switch_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__DenseSwitchInfo_52, ll_backend__switch_gen__EndLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                        }
#line 212 "switch_gen.m"
                      }
#line 199 "switch_gen.m"
                    else
#line 216 "switch_gen.m"
                      {
#line 216 "switch_gen.m"
                        ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                      }
#line 199 "switch_gen.m"
                  }
#line 157 "switch_gen.m"
              }
#line 220 "switch_gen.m"
              break;
#line 220 "switch_gen.m"
            case (MR_Integer) 3:
#line 298 "switch_gen.m"
              {
#line 298 "switch_gen.m"
                ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
              }
#line 220 "switch_gen.m"
              break;
#line 220 "switch_gen.m"
            case (MR_Integer) 1:
#line 221 "switch_gen.m"
              {
#line 221 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumConsIds_154;
#line 221 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumArms_155;
#line 221 "switch_gen.m"
                MR_Word ll_backend__switch_gen__FilteredTaggedCases_156;
#line 221 "switch_gen.m"
                MR_Word ll_backend__switch_gen__FilteredCanFail_157;

#line 222 "switch_gen.m"
                {
#line 222 "switch_gen.m"
                  backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__FilteredTaggedCases_156, ll_backend__switch_gen__CanFail_13, &ll_backend__switch_gen__FilteredCanFail_157);
                }
#line 224 "switch_gen.m"
                {
#line 224 "switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__FilteredTaggedCases_156, &ll_backend__switch_gen__NumConsIds_154, &ll_backend__switch_gen__NumArms_155);
                }
#line 226 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_155 > (MR_Integer) 1);
#line 226 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 228 "switch_gen.m"
                  {
#line 228 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__StringHashSwitchSize_53;
#line 228 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__StringBinarySwitchSize_54;

#line 227 "switch_gen.m"
                    {
#line 227 "switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, (MR_Integer) 432, &ll_backend__switch_gen__StringHashSwitchSize_53);
                    }
#line 229 "switch_gen.m"
                    {
#line 229 "switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, (MR_Integer) 433, &ll_backend__switch_gen__StringBinarySwitchSize_54);
                    }
#line 231 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_154 >= ll_backend__switch_gen__StringHashSwitchSize_53);
#line 231 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 232 "switch_gen.m"
                      {
#line 232 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_73_73;
#line 232 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__BranchStart_123;
#line 232 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__MaybeEnd1_124;
#line 232 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__LookupSwitchInfo_125;

#line 233 "switch_gen.m"
                        {
#line 233 "switch_gen.m"
                          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__switch_gen__BranchStart_123);
                        }
#line 234 "switch_gen.m"
                        {
#line 234 "switch_gen.m"
                          ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__switch_gen__BranchStart_123, (MR_Word) &ll_backend__switch_gen_scalar_common_1[2], ll_backend__switch_gen__FilteredTaggedCases_156, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__StoreMap_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd1_124, &ll_backend__switch_gen__LookupSwitchInfo_125, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__STATE_VARIABLE_CI_73_73);
                        }
#line 232 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 241 "switch_gen.m"
                          {
#line 241 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_93_120;

#line 241 "switch_gen.m"
                            {
#line 241 "switch_gen.m"
                              ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_123, ll_backend__switch_gen__STATE_VARIABLE_CI_73_73, &ll_backend__switch_gen__STATE_VARIABLE_CLD_93_120);
                            }
#line 242 "switch_gen.m"
                            {
#line 242 "switch_gen.m"
                              ll_backend__string_switch__generate_string_hash_lookup_switch_11_p_0(ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__LookupSwitchInfo_125, ll_backend__switch_gen__FilteredCanFail_157, ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__MaybeEnd1_124, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_73_73, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_93_120);
                            }
#line 241 "switch_gen.m"
                          }
#line 232 "switch_gen.m"
                        else
#line 247 "switch_gen.m"
                          {
#line 247 "switch_gen.m"
                            ll_backend__string_switch__generate_string_hash_switch_12_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                          }
#line 232 "switch_gen.m"
                      }
#line 231 "switch_gen.m"
                    else
#line 252 "switch_gen.m"
                      {
#line 252 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_154 >= ll_backend__switch_gen__StringBinarySwitchSize_54);
#line 252 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 253 "switch_gen.m"
                          {
#line 253 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_79_79;
#line 253 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__BranchStart_130;
#line 253 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__MaybeEnd1_131;
#line 253 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__LookupSwitchInfo_132;

#line 254 "switch_gen.m"
                            {
#line 254 "switch_gen.m"
                              ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__switch_gen__BranchStart_130);
                            }
#line 255 "switch_gen.m"
                            {
#line 255 "switch_gen.m"
                              ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__switch_gen__BranchStart_130, (MR_Word) &ll_backend__switch_gen_scalar_common_1[3], ll_backend__switch_gen__FilteredTaggedCases_156, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__StoreMap_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd1_131, &ll_backend__switch_gen__LookupSwitchInfo_132, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__STATE_VARIABLE_CI_79_79);
                            }
#line 253 "switch_gen.m"
                            if (ll_backend__switch_gen__succeeded)
#line 262 "switch_gen.m"
                              {
#line 262 "switch_gen.m"
                                MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_93_127;

#line 262 "switch_gen.m"
                                {
#line 262 "switch_gen.m"
                                  ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_130, ll_backend__switch_gen__STATE_VARIABLE_CI_79_79, &ll_backend__switch_gen__STATE_VARIABLE_CLD_93_127);
                                }
#line 263 "switch_gen.m"
                                {
#line 263 "switch_gen.m"
                                  ll_backend__string_switch__generate_string_binary_lookup_switch_11_p_0(ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__LookupSwitchInfo_132, ll_backend__switch_gen__FilteredCanFail_157, ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__MaybeEnd1_131, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_79_79, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_93_127);
                                }
#line 262 "switch_gen.m"
                              }
#line 253 "switch_gen.m"
                            else
#line 268 "switch_gen.m"
                              {
#line 268 "switch_gen.m"
                                ll_backend__string_switch__generate_string_binary_switch_12_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                              }
#line 253 "switch_gen.m"
                          }
#line 252 "switch_gen.m"
                        else
#line 274 "switch_gen.m"
                          {
#line 274 "switch_gen.m"
                            ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                          }
#line 252 "switch_gen.m"
                      }
#line 228 "switch_gen.m"
                  }
#line 226 "switch_gen.m"
                else
#line 279 "switch_gen.m"
                  {
#line 279 "switch_gen.m"
                    ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                  }
#line 221 "switch_gen.m"
              }
#line 220 "switch_gen.m"
              break;
#line 220 "switch_gen.m"
            case (MR_Integer) 2:
#line 284 "switch_gen.m"
              {
#line 284 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__TagSize_55;
#line 284 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumConsIds_163;
#line 284 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumArms_164;
#line 287 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__V_64_64;

#line 285 "switch_gen.m"
                {
#line 285 "switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__NumConsIds_163, &ll_backend__switch_gen__NumArms_164);
                }
#line 286 "switch_gen.m"
                {
#line 286 "switch_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, (MR_Integer) 434, &ll_backend__switch_gen__TagSize_55);
                }
#line 287 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_163 >= ll_backend__switch_gen__TagSize_55);
#line 287 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 287 "switch_gen.m"
                  {
#line 287 "switch_gen.m"
                    ll_backend__switch_gen__V_64_64 = (MR_Integer) 1;
#line 287 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_164 > ll_backend__switch_gen__V_64_64);
#line 287 "switch_gen.m"
                  }
#line 287 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 288 "switch_gen.m"
                  {
#line 288 "switch_gen.m"
                    {
#line 288 "switch_gen.m"
                      ll_backend__tag_switch__generate_tag_switch_14_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                    }
#line 288 "switch_gen.m"
                  }
#line 287 "switch_gen.m"
                else
#line 292 "switch_gen.m"
                  {
#line 292 "switch_gen.m"
                    ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                  }
#line 284 "switch_gen.m"
              }
#line 220 "switch_gen.m"
              break;
#line 220 "switch_gen.m"
          }
#line 154 "switch_gen.m"
        }
#line 153 "switch_gen.m"
        break;
#line 153 "switch_gen.m"
    }
#line 303 "switch_gen.m"
    {
#line 303 "switch_gen.m"
      *ll_backend__switch_gen__Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_gen__SwitchVarCode_27, ll_backend__switch_gen__SwitchCode_32);
    }
#line 304 "switch_gen.m"
    {
#line 304 "switch_gen.m"
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__MaybeEnd_31, *ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_59);
    }
#line 131 "switch_gen.m"
  }
#line 92 "switch_gen.m"
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
