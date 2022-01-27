/*
** Automatically generated from `switch_gen.m'
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
#include "tree_bitset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
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
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 159 "ll_backend.switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0;

#line 638 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_14_p_0_1(
#line 638 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 638 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 638 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2,
#line 638 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_3);

#line 606 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_14_p_0(
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases_15,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_16,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_17,
#line 606 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_18,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CheaperTagTest_19,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_20,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_21,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__SwitchGoalInfo_22,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_23,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_52,
#line 606 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_53,
#line 606 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_25,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_54,
#line 606 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_55);

#line 602 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3(
#line 602 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 602 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 602 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_2);

#line 601 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
#line 601 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 601 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 600 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
#line 600 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 600 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 594 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
#line 594 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCase_3);

#line 481 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
#line 481 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 481 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 481 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3);

#line 590 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2(
#line 590 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 590 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 590 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1(
#line 590 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 590 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

#line 466 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(
#line 466 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases0_6,
#line 466 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Cases_7,
#line 466 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_8,
#line 466 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_9,
#line 466 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CI_10);

#line 431 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(
#line 431 "switch_gen.m"
  MR_Word ll_backend__switch_gen__ConsTag_3);

#line 417 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(
#line 417 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1);

#line 396 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(
#line 396 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 396 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 396 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3);

#line 318 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_12_p_0(
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCases_13,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_14,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_15,
#line 318 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_16,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_17,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_18,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__GoalInfo_19,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_20,
#line 318 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__MaybeEnd_21,
#line 318 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_22,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_31,
#line 318 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_32);

#line 243 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_8_p_0_3(
#line 243 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 243 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 243 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2);

#line 226 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_8_p_0_2(
#line 226 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 226 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 226 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2);

#line 183 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_8_p_0_1(
#line 183 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 183 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 183 "switch_gen.m"
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
    ((MR_Box) (ll_backend__switch_gen__generate_switch_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[1])),
    ((MR_Box) (ll_backend__switch_gen__generate_switch_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[1])),
    ((MR_Box) (ll_backend__switch_gen__generate_switch_8_p_0_3)),
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
    ((MR_Box) (ll_backend__switch_gen__generate_if_then_else_chain_cases_14_p_0_1)),
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



#line 504 "ll_backend.switch_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0
  }
};

#line 638 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_14_p_0_1(
#line 638 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 638 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 638 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2,
#line 638 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_3)
#line 638 "switch_gen.m"
{
#line 638 "switch_gen.m"
  {
#line 638 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 638 "switch_gen.m"
    MR_String ll_backend__switch_gen__conv1_HeadVar__2_2;
#line 638 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv0_HeadVar__3_3;

#line 638 "switch_gen.m"
    {
#line 638 "switch_gen.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv1_HeadVar__2_2, &ll_backend__switch_gen__conv0_HeadVar__3_3);
    }
#line 638 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 638 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__3_3));
#line 638 "switch_gen.m"
  }
#line 638 "switch_gen.m"
}

#line 606 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_14_p_0(
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases_15,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_16,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_17,
#line 606 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_18,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CheaperTagTest_19,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_20,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_21,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__SwitchGoalInfo_22,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_23,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_52,
#line 606 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_53,
#line 606 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_25,
#line 606 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_54,
#line 606 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_55)
#line 606 "switch_gen.m"
{
#line 616 "switch_gen.m"
  {
#line 616 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;

#line 616 "switch_gen.m"
    if ((ll_backend__switch_gen__Cases_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 659 "switch_gen.m"
      {
#line 659 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TypeCtorInfo_98_98;
#line 659 "switch_gen.m"
        MR_Word ll_backend__switch_gen__FailCode_50;
#line 659 "switch_gen.m"
        MR_Word ll_backend__switch_gen__EndCode_51;
#line 659 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_57_57;
#line 659 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_58_58;
#line 659 "switch_gen.m"
        MR_String ll_backend__switch_gen__V_59_59;

#line 666 "switch_gen.m"
        if ((ll_backend__switch_gen__CanFail_21 == (MR_Integer) 0))
#line 665 "switch_gen.m"
          {
#line 665 "switch_gen.m"
            ll_backend__code_info__generate_failure_3_p_0(&ll_backend__switch_gen__FailCode_50, ll_backend__switch_gen__STATE_VARIABLE_CI_0_54, ll_backend__switch_gen__STATE_VARIABLE_CI_55);
          }
#line 666 "switch_gen.m"
        else
#line 667 "switch_gen.m"
          {
#line 668 "switch_gen.m"
            {
#line 668 "switch_gen.m"
              ll_backend__switch_gen__FailCode_50 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 668 "switch_gen.m"
            *ll_backend__switch_gen__STATE_VARIABLE_CI_55 = ll_backend__switch_gen__STATE_VARIABLE_CI_0_54;
#line 667 "switch_gen.m"
          }
#line 624 "ll_backend.switch_gen.c"
        ll_backend__switch_gen__TypeCtorInfo_98_98 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 671 "switch_gen.m"
        {
#line 671 "switch_gen.m"
          ll_backend__switch_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "switch_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 671 "switch_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_58_58, 1) = ((MR_Box) (ll_backend__switch_gen__EndLabel_23));
#line 671 "switch_gen.m"
        }
#line 672 "switch_gen.m"
        {
#line 672 "switch_gen.m"
          ll_backend__switch_gen__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "end of the switch on ", ll_backend__switch_gen__VarName_18);
        }
#line 671 "switch_gen.m"
        {
#line 671 "switch_gen.m"
          ll_backend__switch_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 671 "switch_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_57_57, 0) = ((MR_Box) (ll_backend__switch_gen__V_58_58));
#line 671 "switch_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_57_57, 1) = ((MR_Box) (ll_backend__switch_gen__V_59_59));
#line 671 "switch_gen.m"
        }
#line 670 "switch_gen.m"
        {
#line 670 "switch_gen.m"
          ll_backend__switch_gen__EndCode_51 = mercury__cord__singleton_1_f_0(ll_backend__switch_gen__TypeCtorInfo_98_98, ((MR_Box) (ll_backend__switch_gen__V_57_57)));
        }
#line 674 "switch_gen.m"
        {
#line 674 "switch_gen.m"
          *ll_backend__switch_gen__Code_25 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_98_98, ll_backend__switch_gen__FailCode_50, ll_backend__switch_gen__EndCode_51);
        }
#line 674 "switch_gen.m"
        *ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_53 = ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_52;
#line 659 "switch_gen.m"
      }
#line 616 "switch_gen.m"
    else
#line 616 "switch_gen.m"
      {
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TypeCtorInfo_96_96;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadCase_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases_15, (MR_Integer) 0)));
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TailCases_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases_15, (MR_Integer) 1)));
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__MainTaggedConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_27, (MR_Integer) 0)));
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__OtherTaggedConsIds_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_27, (MR_Integer) 1)));
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_27, (MR_Integer) 3)));
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__BranchStart_33;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__StoreMap_34;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TestCode_38;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ElseCode_39;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TraceCode_45;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__GoalCode_46;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__SaveCode_47;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadCaseCode_48;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TailCasesCode_49;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_62_62;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_78_78;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_79_79;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_80_80;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_81_81;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_82_82;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_83_83;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_84_84;
#line 616 "switch_gen.m"
        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_85_85;
#line 617 "switch_gen.m"
        MR_Integer ll_backend__switch_gen__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_27, (MR_Integer) 2)));

#line 618 "switch_gen.m"
        {
#line 618 "switch_gen.m"
          ll_backend__code_info__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_0_54, &ll_backend__switch_gen__BranchStart_33);
        }
#line 619 "switch_gen.m"
        {
#line 619 "switch_gen.m"
          hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_gen__SwitchGoalInfo_22, &ll_backend__switch_gen__StoreMap_34);
        }
#line 621 "switch_gen.m"
        {
#line 621 "switch_gen.m"
          MR_Word ll_backend__switch_gen__V_35_35;
#line 621 "switch_gen.m"
          MR_Word ll_backend__switch_gen__V_36_36;

#line 621 "switch_gen.m"
          ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__TailCases_28)) == (MR_mktag((MR_Integer) 1)));
#line 621 "switch_gen.m"
          if (ll_backend__switch_gen__succeeded)
#line 621 "switch_gen.m"
            {
#line 621 "switch_gen.m"
              ll_backend__switch_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__TailCases_28, (MR_Integer) 0)));
#line 621 "switch_gen.m"
              ll_backend__switch_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__TailCases_28, (MR_Integer) 1)));
#line 621 "switch_gen.m"
            }
#line 621 "switch_gen.m"
        }
#line 622 "switch_gen.m"
        if (!(ll_backend__switch_gen__succeeded))
#line 622 "switch_gen.m"
          ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CanFail_21 == (MR_Integer) 0);
#line 633 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 627 "switch_gen.m"
          {
#line 627 "switch_gen.m"
            MR_Word ll_backend__switch_gen__NextLabel_37;
#line 627 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_63_63;
#line 627 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_64_64;
#line 627 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_65_65;
#line 627 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_66_66;
#line 627 "switch_gen.m"
            MR_String ll_backend__switch_gen__V_67_67;
#line 627 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_69_69;
#line 627 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_70_70;
#line 627 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_71_71;

#line 625 "switch_gen.m"
            {
#line 625 "switch_gen.m"
              ll_backend__unify_gen__generate_raw_tag_test_case_11_p_0(ll_backend__switch_gen__VarRval_16, ll_backend__switch_gen__VarType_17, ll_backend__switch_gen__VarName_18, ll_backend__switch_gen__MainTaggedConsId_29, ll_backend__switch_gen__OtherTaggedConsIds_30, ll_backend__switch_gen__CheaperTagTest_19, (MR_Integer) 1, &ll_backend__switch_gen__NextLabel_37, &ll_backend__switch_gen__TestCode_38, ll_backend__switch_gen__STATE_VARIABLE_CI_0_54, &ll_backend__switch_gen__STATE_VARIABLE_CI_62_62);
            }
#line 629 "switch_gen.m"
            {
#line 629 "switch_gen.m"
              ll_backend__switch_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 629 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_66_66, 0) = ((MR_Box) (ll_backend__switch_gen__EndLabel_23));
#line 629 "switch_gen.m"
            }
#line 629 "switch_gen.m"
            {
#line 629 "switch_gen.m"
              ll_backend__switch_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 629 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_65_65, 1) = ((MR_Box) (ll_backend__switch_gen__V_66_66));
#line 629 "switch_gen.m"
            }
#line 630 "switch_gen.m"
            {
#line 630 "switch_gen.m"
              ll_backend__switch_gen__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "skip to the end of the switch on ", ll_backend__switch_gen__VarName_18);
            }
#line 629 "switch_gen.m"
            {
#line 629 "switch_gen.m"
              ll_backend__switch_gen__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_64_64, 0) = ((MR_Box) (ll_backend__switch_gen__V_65_65));
#line 629 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_64_64, 1) = ((MR_Box) (ll_backend__switch_gen__V_67_67));
#line 629 "switch_gen.m"
            }
#line 631 "switch_gen.m"
            {
#line 631 "switch_gen.m"
              ll_backend__switch_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 631 "switch_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__switch_gen__V_71_71, 1) = ((MR_Box) (ll_backend__switch_gen__NextLabel_37));
#line 631 "switch_gen.m"
            }
#line 631 "switch_gen.m"
            {
#line 631 "switch_gen.m"
              ll_backend__switch_gen__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_70_70, 0) = ((MR_Box) (ll_backend__switch_gen__V_71_71));
#line 631 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_70_70, 1) = ((MR_Box) ((MR_String) "next case"));
#line 631 "switch_gen.m"
            }
#line 632 "switch_gen.m"
            {
#line 632 "switch_gen.m"
              ll_backend__switch_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_69_69, 0) = ((MR_Box) (ll_backend__switch_gen__V_70_70));
#line 632 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "switch_gen.m"
            }
#line 630 "switch_gen.m"
            {
#line 630 "switch_gen.m"
              ll_backend__switch_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_63_63, 0) = ((MR_Box) (ll_backend__switch_gen__V_64_64));
#line 630 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_63_63, 1) = ((MR_Box) (ll_backend__switch_gen__V_69_69));
#line 630 "switch_gen.m"
            }
#line 628 "switch_gen.m"
            {
#line 628 "switch_gen.m"
              ll_backend__switch_gen__ElseCode_39 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_gen__V_63_63);
            }
#line 627 "switch_gen.m"
          }
#line 633 "switch_gen.m"
        else
#line 637 "switch_gen.m"
          {
#line 637 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TypeCtorInfo_95_95;
#line 637 "switch_gen.m"
            MR_String ll_backend__switch_gen__MainConsName_40;
#line 637 "switch_gen.m"
            MR_Word ll_backend__switch_gen__OtherConsNames_42;
#line 637 "switch_gen.m"
            MR_String ll_backend__switch_gen__Comment_44;
#line 637 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_75_75;
#line 637 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_76_76;
#line 637 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_41_41;
#line 638 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_43_43;

#line 637 "switch_gen.m"
            {
#line 637 "switch_gen.m"
              hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__switch_gen__MainTaggedConsId_29, &ll_backend__switch_gen__MainConsName_40, &ll_backend__switch_gen__V_41_41);
            }
#line 638 "switch_gen.m"
            {
#line 638 "switch_gen.m"
              mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &ll_backend__switch_gen_scalar_common_1[9], ll_backend__switch_gen__OtherTaggedConsIds_30, &ll_backend__switch_gen__OtherConsNames_42, &ll_backend__switch_gen__V_43_43);
            }
#line 640 "switch_gen.m"
            {
#line 640 "switch_gen.m"
              ll_backend__switch_gen__Comment_44 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__switch_gen__VarName_18, ll_backend__switch_gen__MainConsName_40, ll_backend__switch_gen__OtherConsNames_42);
            }
#line 899 "ll_backend.switch_gen.c"
            ll_backend__switch_gen__TypeCtorInfo_95_95 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 642 "switch_gen.m"
            {
#line 642 "switch_gen.m"
              ll_backend__switch_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 642 "switch_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_76_76, 0) = ((MR_Box) (ll_backend__switch_gen__Comment_44));
#line 642 "switch_gen.m"
            }
#line 642 "switch_gen.m"
            {
#line 642 "switch_gen.m"
              ll_backend__switch_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_75_75, 0) = ((MR_Box) (ll_backend__switch_gen__V_76_76));
#line 642 "switch_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__switch_gen__V_75_75, 1) = ((MR_Box) ((MR_String) ""));
#line 642 "switch_gen.m"
            }
#line 641 "switch_gen.m"
            {
#line 641 "switch_gen.m"
              ll_backend__switch_gen__TestCode_38 = mercury__cord__singleton_1_f_0(ll_backend__switch_gen__TypeCtorInfo_95_95, ((MR_Box) (ll_backend__switch_gen__V_75_75)));
            }
#line 644 "switch_gen.m"
            {
#line 644 "switch_gen.m"
              ll_backend__switch_gen__ElseCode_39 = mercury__cord__empty_0_f_0(ll_backend__switch_gen__TypeCtorInfo_95_95);
            }
#line 644 "switch_gen.m"
            ll_backend__switch_gen__STATE_VARIABLE_CI_62_62 = ll_backend__switch_gen__STATE_VARIABLE_CI_0_54;
#line 637 "switch_gen.m"
          }
#line 647 "switch_gen.m"
        {
#line 647 "switch_gen.m"
          ll_backend__trace_gen__maybe_generate_internal_event_code_5_p_0(ll_backend__switch_gen__Goal_32, ll_backend__switch_gen__SwitchGoalInfo_22, &ll_backend__switch_gen__TraceCode_45, ll_backend__switch_gen__STATE_VARIABLE_CI_62_62, &ll_backend__switch_gen__STATE_VARIABLE_CI_78_78);
        }
#line 649 "switch_gen.m"
        {
#line 649 "switch_gen.m"
          ll_backend__code_gen__generate_goal_5_p_0(ll_backend__switch_gen__CodeModel_20, ll_backend__switch_gen__Goal_32, &ll_backend__switch_gen__GoalCode_46, ll_backend__switch_gen__STATE_VARIABLE_CI_78_78, &ll_backend__switch_gen__STATE_VARIABLE_CI_79_79);
        }
#line 650 "switch_gen.m"
        {
#line 650 "switch_gen.m"
          ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__switch_gen__StoreMap_34, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_52, &ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_80_80, &ll_backend__switch_gen__SaveCode_47, ll_backend__switch_gen__STATE_VARIABLE_CI_79_79, &ll_backend__switch_gen__STATE_VARIABLE_CI_81_81);
        }
#line 948 "ll_backend.switch_gen.c"
        ll_backend__switch_gen__TypeCtorInfo_96_96 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 651 "switch_gen.m"
        {
#line 651 "switch_gen.m"
          ll_backend__switch_gen__V_84_84 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_96_96, ll_backend__switch_gen__SaveCode_47, ll_backend__switch_gen__ElseCode_39);
        }
#line 651 "switch_gen.m"
        {
#line 651 "switch_gen.m"
          ll_backend__switch_gen__V_83_83 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_96_96, ll_backend__switch_gen__GoalCode_46, ll_backend__switch_gen__V_84_84);
        }
#line 651 "switch_gen.m"
        {
#line 651 "switch_gen.m"
          ll_backend__switch_gen__V_82_82 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_96_96, ll_backend__switch_gen__TraceCode_45, ll_backend__switch_gen__V_83_83);
        }
#line 651 "switch_gen.m"
        {
#line 651 "switch_gen.m"
          ll_backend__switch_gen__HeadCaseCode_48 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_96_96, ll_backend__switch_gen__TestCode_38, ll_backend__switch_gen__V_82_82);
        }
#line 653 "switch_gen.m"
        {
#line 653 "switch_gen.m"
          ll_backend__code_info__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_33, ll_backend__switch_gen__STATE_VARIABLE_CI_81_81, &ll_backend__switch_gen__STATE_VARIABLE_CI_85_85);
        }
#line 654 "switch_gen.m"
        {
#line 654 "switch_gen.m"
          ll_backend__switch_gen__generate_if_then_else_chain_cases_14_p_0(ll_backend__switch_gen__TailCases_28, ll_backend__switch_gen__VarRval_16, ll_backend__switch_gen__VarType_17, ll_backend__switch_gen__VarName_18, ll_backend__switch_gen__CheaperTagTest_19, ll_backend__switch_gen__CodeModel_20, ll_backend__switch_gen__CanFail_21, ll_backend__switch_gen__SwitchGoalInfo_22, ll_backend__switch_gen__EndLabel_23, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_80_80, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_53, &ll_backend__switch_gen__TailCasesCode_49, ll_backend__switch_gen__STATE_VARIABLE_CI_85_85, ll_backend__switch_gen__STATE_VARIABLE_CI_55);
        }
#line 657 "switch_gen.m"
        {
#line 657 "switch_gen.m"
          *ll_backend__switch_gen__Code_25 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_96_96, ll_backend__switch_gen__HeadCaseCode_48, ll_backend__switch_gen__TailCasesCode_49);
        }
#line 616 "switch_gen.m"
      }
#line 616 "switch_gen.m"
  }
#line 606 "switch_gen.m"
}

#line 602 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3(
#line 602 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 602 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 602 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_2)
#line 602 "switch_gen.m"
{
#line 602 "switch_gen.m"
  {
#line 602 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_3;
#line 602 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 602 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__conv2_HeadVar__3_3;

#line 602 "switch_gen.m"
    {
#line 602 "switch_gen.m"
      ll_backend__switch_gen__conv2_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) ll_backend__switch_gen__wrapper_arg_1), ((MR_Integer) ll_backend__switch_gen__wrapper_arg_2));
    }
#line 602 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_gen__conv2_HeadVar__3_3));
#line 602 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_3;
#line 602 "switch_gen.m"
  }
#line 602 "switch_gen.m"
}

#line 601 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
#line 601 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 601 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 601 "switch_gen.m"
{
#line 601 "switch_gen.m"
  {
#line 601 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 601 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 601 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__conv1_HeadVar__2_2;

#line 601 "switch_gen.m"
    {
#line 601 "switch_gen.m"
      ll_backend__switch_gen__conv1_HeadVar__2_2 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 601 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 601 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 601 "switch_gen.m"
  }
#line 601 "switch_gen.m"
}

#line 600 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
#line 600 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 600 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 600 "switch_gen.m"
{
#line 600 "switch_gen.m"
  {
#line 600 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 600 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 600 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv0_HeadVar__2_2;

#line 600 "switch_gen.m"
    {
#line 600 "switch_gen.m"
      ll_backend__switch_gen__conv0_HeadVar__2_2 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 600 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
#line 600 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 600 "switch_gen.m"
  }
#line 600 "switch_gen.m"
}

#line 594 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
#line 594 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCase_3)
#line 594 "switch_gen.m"
{
#line 596 "switch_gen.m"
  {
#line 596 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 596 "switch_gen.m"
    MR_Word ll_backend__switch_gen__HeadVar__2_2;
#line 596 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeCtorInfo_19_19;
#line 596 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeCtorInfo_22_22;
#line 596 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__Cost_4;
#line 596 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MainTaggedConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 0)));
#line 596 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OtherTaggedConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 1)));
#line 596 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MainTag_9;
#line 596 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__MainCost_10;
#line 596 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OtherTags_11;
#line 596 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OtherCosts_12;
#line 596 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_16_16;
#line 597 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 2)));
#line 597 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 3)));
#line 602 "switch_gen.m"
    MR_Box ll_backend__switch_gen__conv3_Cost_4;

#line 598 "switch_gen.m"
    {
#line 598 "switch_gen.m"
      ll_backend__switch_gen__MainTag_9 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(ll_backend__switch_gen__MainTaggedConsId_5);
    }
#line 599 "switch_gen.m"
    {
#line 599 "switch_gen.m"
      ll_backend__switch_gen__MainCost_10 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ll_backend__switch_gen__MainTag_9);
    }
#line 1140 "ll_backend.switch_gen.c"
    ll_backend__switch_gen__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 600 "switch_gen.m"
    {
#line 600 "switch_gen.m"
      ll_backend__switch_gen__OtherTags_11 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, ll_backend__switch_gen__TypeCtorInfo_19_19, (MR_Word) &ll_backend__switch_gen_scalar_common_1[6], ll_backend__switch_gen__OtherTaggedConsIds_6);
    }
#line 1147 "ll_backend.switch_gen.c"
    ll_backend__switch_gen__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 601 "switch_gen.m"
    {
#line 601 "switch_gen.m"
      ll_backend__switch_gen__OtherCosts_12 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_19_19, ll_backend__switch_gen__TypeCtorInfo_22_22, (MR_Word) &ll_backend__switch_gen_scalar_common_1[7], ll_backend__switch_gen__OtherTags_11);
    }
#line 602 "switch_gen.m"
    {
#line 602 "switch_gen.m"
      ll_backend__switch_gen__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "switch_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_16_16, 0) = ((MR_Box) (ll_backend__switch_gen__MainCost_10));
#line 602 "switch_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_16_16, 1) = ((MR_Box) (ll_backend__switch_gen__OtherCosts_12));
#line 602 "switch_gen.m"
    }
#line 602 "switch_gen.m"
    {
#line 602 "switch_gen.m"
      ll_backend__switch_gen__conv3_Cost_4 = mercury__list__foldl_3_f_0(ll_backend__switch_gen__TypeCtorInfo_22_22, ll_backend__switch_gen__TypeCtorInfo_22_22, (MR_Word) &ll_backend__switch_gen_scalar_common_1[8], ll_backend__switch_gen__V_16_16, ((MR_Box) ((MR_Integer) 0)));
    }
#line 602 "switch_gen.m"
    ll_backend__switch_gen__Cost_4 = ((MR_Integer) ll_backend__switch_gen__conv3_Cost_4);
#line 596 "switch_gen.m"
    {
#line 596 "switch_gen.m"
      ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "switch_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__switch_gen__Cost_4));
#line 596 "switch_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_3));
#line 596 "switch_gen.m"
    }
#line 596 "switch_gen.m"
    return ll_backend__switch_gen__HeadVar__2_2;
#line 596 "switch_gen.m"
  }
#line 594 "switch_gen.m"
}

#line 481 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
#line 481 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 481 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 481 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3)
#line 481 "switch_gen.m"
{
#line 484 "switch_gen.m"
  {
#line 484 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;

#line 484 "switch_gen.m"
    if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "switch_gen.m"
      {
#line 484 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "switch_gen.m"
      }
#line 484 "switch_gen.m"
    else
#line 486 "switch_gen.m"
      {
#line 486 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Case_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 486 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 486 "switch_gen.m"
        MR_Word ll_backend__switch_gen__CanSucceedCases1_8;
#line 486 "switch_gen.m"
        MR_Word ll_backend__switch_gen__CannotSucceedCases1_9;
#line 486 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal_13;
#line 486 "switch_gen.m"
        MR_Word ll_backend__switch_gen__GoalInfo_15;
#line 486 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Detism_16;
#line 486 "switch_gen.m"
        MR_Word ll_backend__switch_gen__SolnCount_18;
#line 489 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_10_10;
#line 489 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_11_11;
#line 489 "switch_gen.m"
        MR_Integer ll_backend__switch_gen__V_12_12;
#line 490 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_14_14;
#line 492 "switch_gen.m"
        MR_Word ll_backend__switch_gen___CanFail_17;

#line 487 "switch_gen.m"
        {
#line 487 "switch_gen.m"
          ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(ll_backend__switch_gen__Cases_5, &ll_backend__switch_gen__CanSucceedCases1_8, &ll_backend__switch_gen__CannotSucceedCases1_9);
        }
#line 489 "switch_gen.m"
        ll_backend__switch_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 0)));
#line 489 "switch_gen.m"
        ll_backend__switch_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 1)));
#line 489 "switch_gen.m"
        ll_backend__switch_gen__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 2)));
#line 489 "switch_gen.m"
        ll_backend__switch_gen__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 3)));
#line 490 "switch_gen.m"
        ll_backend__switch_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Goal_13, (MR_Integer) 0)));
#line 490 "switch_gen.m"
        ll_backend__switch_gen__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Goal_13, (MR_Integer) 1)));
#line 491 "switch_gen.m"
        {
#line 491 "switch_gen.m"
          ll_backend__switch_gen__Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__switch_gen__GoalInfo_15);
        }
#line 492 "switch_gen.m"
        {
#line 492 "switch_gen.m"
          parse_tree__prog_data__determinism_components_3_p_0(ll_backend__switch_gen__Detism_16, &ll_backend__switch_gen___CanFail_17, &ll_backend__switch_gen__SolnCount_18);
        }
#line 500 "switch_gen.m"
        if ((ll_backend__switch_gen__SolnCount_18 == (MR_Integer) 0))
#line 501 "switch_gen.m"
          {
#line 502 "switch_gen.m"
            *ll_backend__switch_gen__HeadVar__2_2 = ll_backend__switch_gen__CanSucceedCases1_8;
#line 503 "switch_gen.m"
            {
#line 503 "switch_gen.m"
              MR_Word base;
#line 503 "switch_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "switch_gen.m"
              *ll_backend__switch_gen__HeadVar__3_3 = base;
#line 503 "switch_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__Case_4));
#line 503 "switch_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__CannotSucceedCases1_9));
#line 503 "switch_gen.m"
            }
#line 501 "switch_gen.m"
          }
#line 500 "switch_gen.m"
        else
#line 497 "switch_gen.m"
          {
#line 498 "switch_gen.m"
            {
#line 498 "switch_gen.m"
              MR_Word base;
#line 498 "switch_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "switch_gen.m"
              *ll_backend__switch_gen__HeadVar__2_2 = base;
#line 498 "switch_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__Case_4));
#line 498 "switch_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__CanSucceedCases1_8));
#line 498 "switch_gen.m"
            }
#line 499 "switch_gen.m"
            *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__CannotSucceedCases1_9;
#line 497 "switch_gen.m"
          }
#line 486 "switch_gen.m"
      }
#line 484 "switch_gen.m"
  }
#line 481 "switch_gen.m"
}

#line 590 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2(
#line 590 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 590 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 590 "switch_gen.m"
{
#line 590 "switch_gen.m"
  {
#line 590 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 590 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 590 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv1_HeadVar__2_2;

#line 590 "switch_gen.m"
    {
#line 590 "switch_gen.m"
      ll_backend__switch_gen__conv1_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 590 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 590 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 590 "switch_gen.m"
  }
#line 590 "switch_gen.m"
}

#line 590 "switch_gen.m"
static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1(
#line 590 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 590 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
#line 590 "switch_gen.m"
{
#line 590 "switch_gen.m"
  {
#line 590 "switch_gen.m"
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
#line 590 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 590 "switch_gen.m"
    MR_Word ll_backend__switch_gen__conv0_HeadVar__2_2;

#line 590 "switch_gen.m"
    {
#line 590 "switch_gen.m"
      ll_backend__switch_gen__conv0_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
#line 590 "switch_gen.m"
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
#line 590 "switch_gen.m"
    return ll_backend__switch_gen__wrapper_arg_2;
#line 590 "switch_gen.m"
  }
#line 590 "switch_gen.m"
}

#line 466 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(
#line 466 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases0_6,
#line 466 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Cases_7,
#line 466 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_8,
#line 466 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_9,
#line 466 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CI_10)
#line 466 "switch_gen.m"
{
#line 470 "switch_gen.m"
  {
#line 470 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 470 "switch_gen.m"
    MR_Word ll_backend__switch_gen__CanSucceedCases_11;
#line 470 "switch_gen.m"
    MR_Word ll_backend__switch_gen__CannotSucceedCases_12;

#line 471 "switch_gen.m"
    {
#line 471 "switch_gen.m"
      ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(ll_backend__switch_gen__Cases0_6, &ll_backend__switch_gen__CanSucceedCases_11, &ll_backend__switch_gen__CannotSucceedCases_12);
    }
#line 475 "switch_gen.m"
    if ((ll_backend__switch_gen__CannotSucceedCases_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "switch_gen.m"
      {
#line 580 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Case1_21;
#line 580 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Case2_22;
#line 580 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal1_26;
#line 580 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Goal2_30;
#line 513 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_44_44;
#line 513 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_45_45;
#line 516 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_23_23;
#line 516 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_24_24;
#line 516 "switch_gen.m"
        MR_Integer ll_backend__switch_gen__V_25_25;
#line 517 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_27_27;
#line 517 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_28_28;
#line 517 "switch_gen.m"
        MR_Integer ll_backend__switch_gen__V_29_29;

#line 513 "switch_gen.m"
        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CodeModel_8 == (MR_Integer) 0);
#line 513 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 513 "switch_gen.m"
          {
#line 514 "switch_gen.m"
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CanFail_9 == (MR_Integer) 1);
#line 513 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 513 "switch_gen.m"
              {
#line 515 "switch_gen.m"
                ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__Cases0_6)) == (MR_mktag((MR_Integer) 1)));
#line 515 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 515 "switch_gen.m"
                  {
#line 515 "switch_gen.m"
                    ll_backend__switch_gen__Case1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases0_6, (MR_Integer) 0)));
#line 515 "switch_gen.m"
                    ll_backend__switch_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases0_6, (MR_Integer) 1)));
#line 515 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 515 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 515 "switch_gen.m"
                      {
#line 515 "switch_gen.m"
                        ll_backend__switch_gen__Case2_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_44_44, (MR_Integer) 0)));
#line 515 "switch_gen.m"
                        ll_backend__switch_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_44_44, (MR_Integer) 1)));
#line 515 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 513 "switch_gen.m"
                          {
#line 516 "switch_gen.m"
                            ll_backend__switch_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 0)));
#line 516 "switch_gen.m"
                            ll_backend__switch_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 1)));
#line 516 "switch_gen.m"
                            ll_backend__switch_gen__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 2)));
#line 516 "switch_gen.m"
                            ll_backend__switch_gen__Goal1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 3)));
#line 517 "switch_gen.m"
                            ll_backend__switch_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 0)));
#line 517 "switch_gen.m"
                            ll_backend__switch_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 1)));
#line 517 "switch_gen.m"
                            ll_backend__switch_gen__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 2)));
#line 517 "switch_gen.m"
                            ll_backend__switch_gen__Goal2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 3)));
#line 517 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = MR_TRUE;
#line 513 "switch_gen.m"
                          }
#line 515 "switch_gen.m"
                      }
#line 515 "switch_gen.m"
                  }
#line 513 "switch_gen.m"
              }
#line 513 "switch_gen.m"
          }
#line 580 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 519 "switch_gen.m"
          {
#line 519 "switch_gen.m"
            MR_Word ll_backend__switch_gen__ModuleInfo_31;
#line 519 "switch_gen.m"
            MR_Word ll_backend__switch_gen__Globals_32;
#line 519 "switch_gen.m"
            MR_Word ll_backend__switch_gen__PredId_33;
#line 519 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__ProcId_34;
#line 519 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Min1_35;
#line 519 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Max1_36;
#line 519 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Min2_37;
#line 519 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__Max2_38;
#line 551 "switch_gen.m"
            MR_Word ll_backend__switch_gen__BaseCase_39;
#line 551 "switch_gen.m"
            MR_Word ll_backend__switch_gen__SingleRecCase_40;

#line 519 "switch_gen.m"
            {
#line 519 "switch_gen.m"
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__ModuleInfo_31);
            }
#line 520 "switch_gen.m"
            {
#line 520 "switch_gen.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__switch_gen__ModuleInfo_31, &ll_backend__switch_gen__Globals_32);
            }
#line 521 "switch_gen.m"
            {
#line 521 "switch_gen.m"
              ll_backend__code_info__get_pred_id_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__PredId_33);
            }
#line 522 "switch_gen.m"
            {
#line 522 "switch_gen.m"
              ll_backend__code_info__get_proc_id_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__ProcId_34);
            }
#line 523 "switch_gen.m"
            {
#line 523 "switch_gen.m"
              hlds__goal_form__count_recursive_calls_5_p_0(ll_backend__switch_gen__Goal1_26, ll_backend__switch_gen__PredId_33, ll_backend__switch_gen__ProcId_34, &ll_backend__switch_gen__Min1_35, &ll_backend__switch_gen__Max1_36);
            }
#line 524 "switch_gen.m"
            {
#line 524 "switch_gen.m"
              hlds__goal_form__count_recursive_calls_5_p_0(ll_backend__switch_gen__Goal2_30, ll_backend__switch_gen__PredId_33, ll_backend__switch_gen__ProcId_34, &ll_backend__switch_gen__Min2_37, &ll_backend__switch_gen__Max2_38);
            }
#line 527 "switch_gen.m"
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max1_36 == (MR_Integer) 0);
#line 527 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 528 "switch_gen.m"
              ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min2_37 == (MR_Integer) 1);
#line 532 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 530 "switch_gen.m"
              {
#line 530 "switch_gen.m"
                ll_backend__switch_gen__BaseCase_39 = ll_backend__switch_gen__Case1_21;
#line 531 "switch_gen.m"
                ll_backend__switch_gen__SingleRecCase_40 = ll_backend__switch_gen__Case2_22;
#line 530 "switch_gen.m"
                ll_backend__switch_gen__succeeded = MR_TRUE;
#line 530 "switch_gen.m"
              }
#line 532 "switch_gen.m"
            else
#line 538 "switch_gen.m"
              {
#line 533 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max2_38 == (MR_Integer) 0);
#line 538 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 538 "switch_gen.m"
                  {
#line 534 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min1_35 == (MR_Integer) 1);
#line 538 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 538 "switch_gen.m"
                      {
#line 536 "switch_gen.m"
                        ll_backend__switch_gen__BaseCase_39 = ll_backend__switch_gen__Case2_22;
#line 537 "switch_gen.m"
                        ll_backend__switch_gen__SingleRecCase_40 = ll_backend__switch_gen__Case1_21;
#line 537 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = MR_TRUE;
#line 538 "switch_gen.m"
                      }
#line 538 "switch_gen.m"
                  }
#line 538 "switch_gen.m"
              }
#line 551 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 543 "switch_gen.m"
              {
#line 543 "switch_gen.m"
                MR_Word ll_backend__switch_gen__SingleRecBaseFirst_41;

#line 542 "switch_gen.m"
                {
#line 542 "switch_gen.m"
                  libs__globals__lookup_bool_option_3_p_0(ll_backend__switch_gen__Globals_32, (MR_Integer) 442, &ll_backend__switch_gen__SingleRecBaseFirst_41);
                }
#line 547 "switch_gen.m"
                if ((ll_backend__switch_gen__SingleRecBaseFirst_41 == (MR_Integer) 0))
#line 548 "switch_gen.m"
                  {
#line 548 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__V_47_47;

#line 549 "switch_gen.m"
                    {
#line 549 "switch_gen.m"
                      ll_backend__switch_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_47_47, 0) = ((MR_Box) (ll_backend__switch_gen__SingleRecCase_40));
#line 549 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 549 "switch_gen.m"
                    }
#line 549 "switch_gen.m"
                    {
#line 549 "switch_gen.m"
                      MR_Word base;
#line 549 "switch_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "switch_gen.m"
                      *ll_backend__switch_gen__Cases_7 = base;
#line 549 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_39));
#line 549 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_47_47));
#line 549 "switch_gen.m"
                    }
#line 548 "switch_gen.m"
                  }
#line 547 "switch_gen.m"
                else
#line 545 "switch_gen.m"
                  {
#line 545 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__V_49_49;

#line 546 "switch_gen.m"
                    {
#line 546 "switch_gen.m"
                      ll_backend__switch_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_49_49, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_39));
#line 546 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "switch_gen.m"
                    }
#line 546 "switch_gen.m"
                    {
#line 546 "switch_gen.m"
                      MR_Word base;
#line 546 "switch_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "switch_gen.m"
                      *ll_backend__switch_gen__Cases_7 = base;
#line 546 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__SingleRecCase_40));
#line 546 "switch_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_49_49));
#line 546 "switch_gen.m"
                    }
#line 545 "switch_gen.m"
                  }
#line 543 "switch_gen.m"
              }
#line 551 "switch_gen.m"
            else
#line 577 "switch_gen.m"
              {
#line 577 "switch_gen.m"
                MR_Word ll_backend__switch_gen__MultiRecCase_42;
#line 577 "switch_gen.m"
                MR_Word ll_backend__switch_gen__BaseCase_58;
#line 553 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__V_51_51;

#line 553 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max1_36 == (MR_Integer) 0);
#line 553 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 553 "switch_gen.m"
                  {
#line 554 "switch_gen.m"
                    ll_backend__switch_gen__V_51_51 = (MR_Integer) 1;
#line 554 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min2_37 > ll_backend__switch_gen__V_51_51);
#line 553 "switch_gen.m"
                  }
#line 558 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 556 "switch_gen.m"
                  {
#line 556 "switch_gen.m"
                    ll_backend__switch_gen__BaseCase_58 = ll_backend__switch_gen__Case1_21;
#line 557 "switch_gen.m"
                    ll_backend__switch_gen__MultiRecCase_42 = ll_backend__switch_gen__Case2_22;
#line 556 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = MR_TRUE;
#line 556 "switch_gen.m"
                  }
#line 558 "switch_gen.m"
                else
#line 564 "switch_gen.m"
                  {
#line 564 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__V_52_52;

#line 559 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max2_38 == (MR_Integer) 0);
#line 564 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 564 "switch_gen.m"
                      {
#line 560 "switch_gen.m"
                        ll_backend__switch_gen__V_52_52 = (MR_Integer) 1;
#line 560 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min1_35 > ll_backend__switch_gen__V_52_52);
#line 564 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 564 "switch_gen.m"
                          {
#line 562 "switch_gen.m"
                            ll_backend__switch_gen__BaseCase_58 = ll_backend__switch_gen__Case2_22;
#line 563 "switch_gen.m"
                            ll_backend__switch_gen__MultiRecCase_42 = ll_backend__switch_gen__Case1_21;
#line 563 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = MR_TRUE;
#line 564 "switch_gen.m"
                          }
#line 564 "switch_gen.m"
                      }
#line 564 "switch_gen.m"
                  }
#line 577 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 569 "switch_gen.m"
                  {
#line 569 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__MultiRecBaseFirst_43;

#line 568 "switch_gen.m"
                    {
#line 568 "switch_gen.m"
                      libs__globals__lookup_bool_option_3_p_0(ll_backend__switch_gen__Globals_32, (MR_Integer) 443, &ll_backend__switch_gen__MultiRecBaseFirst_43);
                    }
#line 573 "switch_gen.m"
                    if ((ll_backend__switch_gen__MultiRecBaseFirst_43 == (MR_Integer) 0))
#line 574 "switch_gen.m"
                      {
#line 574 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__V_54_54;

#line 575 "switch_gen.m"
                        {
#line 575 "switch_gen.m"
                          ll_backend__switch_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "switch_gen.m"
                          MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_54_54, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_58));
#line 575 "switch_gen.m"
                          MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 575 "switch_gen.m"
                        }
#line 575 "switch_gen.m"
                        {
#line 575 "switch_gen.m"
                          MR_Word base;
#line 575 "switch_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "switch_gen.m"
                          *ll_backend__switch_gen__Cases_7 = base;
#line 575 "switch_gen.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__MultiRecCase_42));
#line 575 "switch_gen.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_54_54));
#line 575 "switch_gen.m"
                        }
#line 574 "switch_gen.m"
                      }
#line 573 "switch_gen.m"
                    else
#line 571 "switch_gen.m"
                      {
#line 571 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__V_56_56;

#line 572 "switch_gen.m"
                        {
#line 572 "switch_gen.m"
                          ll_backend__switch_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "switch_gen.m"
                          MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_56_56, 0) = ((MR_Box) (ll_backend__switch_gen__MultiRecCase_42));
#line 572 "switch_gen.m"
                          MR_hl_field(MR_mktag(1), ll_backend__switch_gen__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "switch_gen.m"
                        }
#line 572 "switch_gen.m"
                        {
#line 572 "switch_gen.m"
                          MR_Word base;
#line 572 "switch_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "switch_gen.m"
                          *ll_backend__switch_gen__Cases_7 = base;
#line 572 "switch_gen.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_58));
#line 572 "switch_gen.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__V_56_56));
#line 572 "switch_gen.m"
                        }
#line 571 "switch_gen.m"
                      }
#line 569 "switch_gen.m"
                  }
#line 577 "switch_gen.m"
                else
#line 589 "switch_gen.m"
                  {
#line 589 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__TypeCtorInfo_8_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 589 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__TypeInfo_9_65 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[0];
#line 589 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__CostedCases_61;
#line 589 "switch_gen.m"
                    MR_Word ll_backend__switch_gen__SortedCostedCases_62;

#line 590 "switch_gen.m"
                    {
#line 590 "switch_gen.m"
                      ll_backend__switch_gen__CostedCases_61 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_8_64, ll_backend__switch_gen__TypeInfo_9_65, (MR_Word) &ll_backend__switch_gen_scalar_common_1[4], ll_backend__switch_gen__Cases0_6);
                    }
#line 591 "switch_gen.m"
                    {
#line 591 "switch_gen.m"
                      mercury__list__sort_2_p_0(ll_backend__switch_gen__TypeInfo_9_65, ll_backend__switch_gen__CostedCases_61, &ll_backend__switch_gen__SortedCostedCases_62);
                    }
#line 592 "switch_gen.m"
                    {
#line 592 "switch_gen.m"
                      mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__switch_gen__TypeCtorInfo_8_64, ll_backend__switch_gen__SortedCostedCases_62, ll_backend__switch_gen__Cases_7);
#line 592 "switch_gen.m"
                      return;
                    }
#line 589 "switch_gen.m"
                  }
#line 577 "switch_gen.m"
              }
#line 519 "switch_gen.m"
          }
#line 580 "switch_gen.m"
        else
#line 589 "switch_gen.m"
          {
#line 589 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TypeCtorInfo_8_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
#line 589 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TypeInfo_9_75 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[0];
#line 589 "switch_gen.m"
            MR_Word ll_backend__switch_gen__CostedCases_71;
#line 589 "switch_gen.m"
            MR_Word ll_backend__switch_gen__SortedCostedCases_72;

#line 590 "switch_gen.m"
            {
#line 590 "switch_gen.m"
              ll_backend__switch_gen__CostedCases_71 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_8_74, ll_backend__switch_gen__TypeInfo_9_75, (MR_Word) &ll_backend__switch_gen_scalar_common_1[5], ll_backend__switch_gen__Cases0_6);
            }
#line 591 "switch_gen.m"
            {
#line 591 "switch_gen.m"
              mercury__list__sort_2_p_0(ll_backend__switch_gen__TypeInfo_9_75, ll_backend__switch_gen__CostedCases_71, &ll_backend__switch_gen__SortedCostedCases_72);
            }
#line 592 "switch_gen.m"
            {
#line 592 "switch_gen.m"
              mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__switch_gen__TypeCtorInfo_8_74, ll_backend__switch_gen__SortedCostedCases_72, ll_backend__switch_gen__Cases_7);
#line 592 "switch_gen.m"
              return;
            }
#line 589 "switch_gen.m"
          }
#line 580 "switch_gen.m"
      }
#line 475 "switch_gen.m"
    else
#line 476 "switch_gen.m"
      {
#line 478 "switch_gen.m"
        {
#line 478 "switch_gen.m"
          *ll_backend__switch_gen__Cases_7 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__CanSucceedCases_11, ll_backend__switch_gen__CannotSucceedCases_12);
        }
#line 476 "switch_gen.m"
      }
#line 470 "switch_gen.m"
  }
#line 466 "switch_gen.m"
}

#line 431 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(
#line 431 "switch_gen.m"
  MR_Word ll_backend__switch_gen__ConsTag_3)
#line 431 "switch_gen.m"
{
#line 435 "switch_gen.m"
  while (MR_TRUE)
#line 435 "switch_gen.m"
    {
#line 435 "switch_gen.m"
      /* tailcall optimized into a loop */
#line 435 "switch_gen.m"
      {
#line 435 "switch_gen.m"
        MR_bool ll_backend__switch_gen__succeeded;
#line 435 "switch_gen.m"
        MR_Word ll_backend__switch_gen__IsReservedAddr_4;

#line 435 "switch_gen.m"
        if (((((MR_tag((MR_Word) ll_backend__switch_gen__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 438 "switch_gen.m"
          {
#line 438 "switch_gen.m"
            MR_Word ll_backend__switch_gen__SubConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 2)));
#line 438 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 1)));

#line 439 "switch_gen.m"
            /* direct tailcall eliminated */
#line 439 "switch_gen.m"
            {
#line 439 "switch_gen.m"
              MR_Word ll_backend__switch_gen__ConsTag__tmp_copy_3 = ll_backend__switch_gen__SubConsTag_7;

#line 439 "switch_gen.m"
              ll_backend__switch_gen__ConsTag_3 = ll_backend__switch_gen__ConsTag__tmp_copy_3;
#line 439 "switch_gen.m"
            }
#line 439 "switch_gen.m"
            continue;
#line 438 "switch_gen.m"
          }
#line 435 "switch_gen.m"
        else
#line 435 "switch_gen.m"
          if (((((MR_tag((MR_Word) ll_backend__switch_gen__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 436 "switch_gen.m"
            ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 1;
#line 435 "switch_gen.m"
          else
#line 461 "switch_gen.m"
            ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 0;
#line 435 "switch_gen.m"
        return ll_backend__switch_gen__IsReservedAddr_4;
#line 435 "switch_gen.m"
      }
#line 435 "switch_gen.m"
      break;
#line 435 "switch_gen.m"
    }
#line 431 "switch_gen.m"
}

#line 417 "switch_gen.m"
static MR_Word MR_CALL 
ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(
#line 417 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1)
#line 417 "switch_gen.m"
{
#line 419 "switch_gen.m"
  while (MR_TRUE)
#line 419 "switch_gen.m"
    {
#line 419 "switch_gen.m"
      /* tailcall optimized into a loop */
#line 419 "switch_gen.m"
      {
#line 419 "switch_gen.m"
        MR_bool ll_backend__switch_gen__succeeded;
#line 419 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadVar__2_2;

#line 419 "switch_gen.m"
        if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "switch_gen.m"
          ll_backend__switch_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 419 "switch_gen.m"
        else
#line 420 "switch_gen.m"
          {
#line 420 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TaggedConsId_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 420 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TaggedConsIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 420 "switch_gen.m"
            MR_Word ll_backend__switch_gen__ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_3, (MR_Integer) 1)));
#line 420 "switch_gen.m"
            MR_Word ll_backend__switch_gen__HeadContains_8;
#line 421 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_3, (MR_Integer) 0)));

#line 422 "switch_gen.m"
            {
#line 422 "switch_gen.m"
              ll_backend__switch_gen__HeadContains_8 = ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(ll_backend__switch_gen__ConsTag_7);
            }
#line 426 "switch_gen.m"
            if ((ll_backend__switch_gen__HeadContains_8 == (MR_Integer) 0))
#line 428 "switch_gen.m"
              {
#line 428 "switch_gen.m"
                /* direct tailcall eliminated */
#line 428 "switch_gen.m"
                {
#line 428 "switch_gen.m"
                  MR_Word ll_backend__switch_gen__HeadVar__1__tmp_copy_1 = ll_backend__switch_gen__TaggedConsIds_4;

#line 428 "switch_gen.m"
                  ll_backend__switch_gen__HeadVar__1_1 = ll_backend__switch_gen__HeadVar__1__tmp_copy_1;
#line 428 "switch_gen.m"
                }
#line 428 "switch_gen.m"
                continue;
#line 428 "switch_gen.m"
              }
#line 426 "switch_gen.m"
            else
#line 425 "switch_gen.m"
              ll_backend__switch_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 420 "switch_gen.m"
          }
#line 419 "switch_gen.m"
        return ll_backend__switch_gen__HeadVar__2_2;
#line 419 "switch_gen.m"
      }
#line 419 "switch_gen.m"
      break;
#line 419 "switch_gen.m"
    }
#line 417 "switch_gen.m"
}

#line 396 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(
#line 396 "switch_gen.m"
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
#line 396 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
#line 396 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__HeadVar__3_3)
#line 396 "switch_gen.m"
{
#line 399 "switch_gen.m"
  {
#line 399 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;

#line 399 "switch_gen.m"
    if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "switch_gen.m"
      {
#line 399 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 399 "switch_gen.m"
        *ll_backend__switch_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 399 "switch_gen.m"
      }
#line 399 "switch_gen.m"
    else
#line 401 "switch_gen.m"
      {
#line 401 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedCase_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 401 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedCases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 401 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ReservedAddrCasesTail_8;
#line 401 "switch_gen.m"
        MR_Word ll_backend__switch_gen__NonReservedAddrCasesTail_9;
#line 401 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedConsId_16;
#line 401 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TaggedConsIds_17;
#line 401 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ConsTag_20;
#line 401 "switch_gen.m"
        MR_Word ll_backend__switch_gen__HeadContains_21;
#line 404 "switch_gen.m"
        MR_Integer ll_backend__switch_gen__V_12_12;
#line 404 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_13_13;
#line 421 "switch_gen.m"
        MR_Word ll_backend__switch_gen__V_19_19;

#line 402 "switch_gen.m"
        {
#line 402 "switch_gen.m"
          ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(ll_backend__switch_gen__TaggedCases_5, &ll_backend__switch_gen__ReservedAddrCasesTail_8, &ll_backend__switch_gen__NonReservedAddrCasesTail_9);
        }
#line 404 "switch_gen.m"
        ll_backend__switch_gen__TaggedConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 0)));
#line 404 "switch_gen.m"
        ll_backend__switch_gen__TaggedConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 1)));
#line 404 "switch_gen.m"
        ll_backend__switch_gen__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 2)));
#line 404 "switch_gen.m"
        ll_backend__switch_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 3)));
#line 421 "switch_gen.m"
        ll_backend__switch_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_16, (MR_Integer) 0)));
#line 421 "switch_gen.m"
        ll_backend__switch_gen__ConsTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_16, (MR_Integer) 1)));
#line 422 "switch_gen.m"
        {
#line 422 "switch_gen.m"
          ll_backend__switch_gen__HeadContains_21 = ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(ll_backend__switch_gen__ConsTag_20);
        }
#line 2146 "ll_backend.switch_gen.c"
        if ((ll_backend__switch_gen__HeadContains_21 == (MR_Integer) 0))
#line 2148 "ll_backend.switch_gen.c"
          {
#line 2150 "ll_backend.switch_gen.c"
            MR_Word ll_backend__switch_gen__ContainsReservedAddr_15;

#line 428 "switch_gen.m"
            {
#line 428 "switch_gen.m"
              ll_backend__switch_gen__ContainsReservedAddr_15 = ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(ll_backend__switch_gen__TaggedConsIds_17);
            }
#line 411 "switch_gen.m"
            if ((ll_backend__switch_gen__ContainsReservedAddr_15 == (MR_Integer) 0))
#line 412 "switch_gen.m"
              {
#line 413 "switch_gen.m"
                *ll_backend__switch_gen__HeadVar__2_2 = ll_backend__switch_gen__ReservedAddrCasesTail_8;
#line 414 "switch_gen.m"
                {
#line 414 "switch_gen.m"
                  MR_Word base;
#line 414 "switch_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "switch_gen.m"
                  *ll_backend__switch_gen__HeadVar__3_3 = base;
#line 414 "switch_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
#line 414 "switch_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__NonReservedAddrCasesTail_9));
#line 414 "switch_gen.m"
                }
#line 412 "switch_gen.m"
              }
#line 411 "switch_gen.m"
            else
#line 408 "switch_gen.m"
              {
#line 409 "switch_gen.m"
                {
#line 409 "switch_gen.m"
                  MR_Word base;
#line 409 "switch_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "switch_gen.m"
                  *ll_backend__switch_gen__HeadVar__2_2 = base;
#line 409 "switch_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
#line 409 "switch_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__ReservedAddrCasesTail_8));
#line 409 "switch_gen.m"
                }
#line 410 "switch_gen.m"
                *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__NonReservedAddrCasesTail_9;
#line 408 "switch_gen.m"
              }
#line 2202 "ll_backend.switch_gen.c"
          }
#line 2204 "ll_backend.switch_gen.c"
        else
#line 2206 "ll_backend.switch_gen.c"
          {
#line 409 "switch_gen.m"
            {
#line 409 "switch_gen.m"
              MR_Word base;
#line 409 "switch_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "switch_gen.m"
              *ll_backend__switch_gen__HeadVar__2_2 = base;
#line 409 "switch_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
#line 409 "switch_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__ReservedAddrCasesTail_8));
#line 409 "switch_gen.m"
            }
#line 410 "switch_gen.m"
            *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__NonReservedAddrCasesTail_9;
#line 2224 "ll_backend.switch_gen.c"
          }
#line 401 "switch_gen.m"
      }
#line 399 "switch_gen.m"
  }
#line 396 "switch_gen.m"
}

#line 318 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_12_p_0(
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__TaggedCases_13,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarRval_14,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__VarType_15,
#line 318 "switch_gen.m"
  MR_String ll_backend__switch_gen__VarName_16,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_17,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_18,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__GoalInfo_19,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__EndLabel_20,
#line 318 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__MaybeEnd_21,
#line 318 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_22,
#line 318 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_31,
#line 318 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_32)
#line 318 "switch_gen.m"
{
#line 323 "switch_gen.m"
  {
#line 323 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 323 "switch_gen.m"
    MR_Word ll_backend__switch_gen__OrderedTaggedCases_24;
#line 323 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeCtor_25;
#line 323 "switch_gen.m"
    MR_Word ll_backend__switch_gen__ModuleInfo_26;
#line 323 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeTable_27;
#line 323 "switch_gen.m"
    MR_Word ll_backend__switch_gen__CheaperTagTest_30;
#line 373 "switch_gen.m"
    MR_Word ll_backend__switch_gen__VarTypeDefn_41;
#line 373 "switch_gen.m"
    MR_Word ll_backend__switch_gen__VarTypeDefnBody_42;
#line 373 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_47_47;
#line 375 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_48_48;
#line 375 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_49_49;
#line 375 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_50_50;
#line 375 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_51_51;
#line 375 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_52_52;
#line 375 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_53_53;
#line 375 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_54_54;
#line 375 "switch_gen.m"
    MR_Word ll_backend__switch_gen__V_55_55;
#line 332 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TypeDefn_28;

#line 373 "switch_gen.m"
    {
#line 373 "switch_gen.m"
      ll_backend__switch_gen__succeeded = ll_backend__code_info__search_type_defn_3_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_0_31, ll_backend__switch_gen__VarType_15, &ll_backend__switch_gen__VarTypeDefn_41);
    }
#line 373 "switch_gen.m"
    if (ll_backend__switch_gen__succeeded)
#line 373 "switch_gen.m"
      {
#line 374 "switch_gen.m"
        {
#line 374 "switch_gen.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__switch_gen__VarTypeDefn_41, &ll_backend__switch_gen__VarTypeDefnBody_42);
        }
#line 375 "switch_gen.m"
        ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__VarTypeDefnBody_42)) == (MR_mktag((MR_Integer) 1)));
#line 375 "switch_gen.m"
        if (ll_backend__switch_gen__succeeded)
#line 375 "switch_gen.m"
          {
#line 375 "switch_gen.m"
            ll_backend__switch_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_42, (MR_Integer) 0)));
#line 375 "switch_gen.m"
            ll_backend__switch_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_42, (MR_Integer) 1)));
#line 375 "switch_gen.m"
            ll_backend__switch_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_42, (MR_Integer) 2)));
#line 375 "switch_gen.m"
            ll_backend__switch_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_42, (MR_Integer) 3)));
#line 375 "switch_gen.m"
            ll_backend__switch_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_42, (MR_Integer) 4)));
#line 375 "switch_gen.m"
            ll_backend__switch_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_42, (MR_Integer) 5)));
#line 375 "switch_gen.m"
            ll_backend__switch_gen__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_42, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 375 "switch_gen.m"
            ll_backend__switch_gen__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_42, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 375 "switch_gen.m"
            ll_backend__switch_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_42, (MR_Integer) 7)));
#line 375 "switch_gen.m"
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__V_47_47 == (MR_Integer) 0);
#line 375 "switch_gen.m"
          }
#line 373 "switch_gen.m"
      }
#line 386 "switch_gen.m"
    if (ll_backend__switch_gen__succeeded)
#line 378 "switch_gen.m"
      {
#line 378 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ReservedAddrCases0_43;
#line 378 "switch_gen.m"
        MR_Word ll_backend__switch_gen__NonReservedAddrCases0_44;
#line 378 "switch_gen.m"
        MR_Word ll_backend__switch_gen__ReservedAddrCases_45;
#line 378 "switch_gen.m"
        MR_Word ll_backend__switch_gen__NonReservedAddrCases_46;

#line 377 "switch_gen.m"
        {
#line 377 "switch_gen.m"
          ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(ll_backend__switch_gen__TaggedCases_13, &ll_backend__switch_gen__ReservedAddrCases0_43, &ll_backend__switch_gen__NonReservedAddrCases0_44);
        }
#line 379 "switch_gen.m"
        {
#line 379 "switch_gen.m"
          ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__ReservedAddrCases0_43, &ll_backend__switch_gen__ReservedAddrCases_45, ll_backend__switch_gen__CodeModel_17, ll_backend__switch_gen__CanFail_18, ll_backend__switch_gen__STATE_VARIABLE_CI_0_31);
        }
#line 382 "switch_gen.m"
        {
#line 382 "switch_gen.m"
          ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__NonReservedAddrCases0_44, &ll_backend__switch_gen__NonReservedAddrCases_46, ll_backend__switch_gen__CodeModel_17, ll_backend__switch_gen__CanFail_18, ll_backend__switch_gen__STATE_VARIABLE_CI_0_31);
        }
#line 385 "switch_gen.m"
        {
#line 385 "switch_gen.m"
          ll_backend__switch_gen__OrderedTaggedCases_24 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__ReservedAddrCases_45, ll_backend__switch_gen__NonReservedAddrCases_46);
        }
#line 378 "switch_gen.m"
      }
#line 386 "switch_gen.m"
    else
#line 390 "switch_gen.m"
      {
#line 390 "switch_gen.m"
        ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__TaggedCases_13, &ll_backend__switch_gen__OrderedTaggedCases_24, ll_backend__switch_gen__CodeModel_17, ll_backend__switch_gen__CanFail_18, ll_backend__switch_gen__STATE_VARIABLE_CI_0_31);
      }
#line 326 "switch_gen.m"
    {
#line 326 "switch_gen.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__switch_gen__VarType_15, &ll_backend__switch_gen__TypeCtor_25);
    }
#line 327 "switch_gen.m"
    {
#line 327 "switch_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_0_31, &ll_backend__switch_gen__ModuleInfo_26);
    }
#line 328 "switch_gen.m"
    {
#line 328 "switch_gen.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__switch_gen__ModuleInfo_26, &ll_backend__switch_gen__TypeTable_27);
    }
#line 329 "switch_gen.m"
    {
#line 329 "switch_gen.m"
      ll_backend__switch_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__switch_gen__TypeTable_27, ll_backend__switch_gen__TypeCtor_25, &ll_backend__switch_gen__TypeDefn_28);
    }
#line 332 "switch_gen.m"
    if (ll_backend__switch_gen__succeeded)
#line 330 "switch_gen.m"
      {
#line 330 "switch_gen.m"
        MR_Word ll_backend__switch_gen__TypeBody_29;

#line 330 "switch_gen.m"
        {
#line 330 "switch_gen.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__switch_gen__TypeDefn_28, &ll_backend__switch_gen__TypeBody_29);
        }
#line 331 "switch_gen.m"
        {
#line 331 "switch_gen.m"
          ll_backend__switch_gen__CheaperTagTest_30 = hlds__hlds_data__get_maybe_cheaper_tag_test_1_f_0(ll_backend__switch_gen__TypeBody_29);
        }
#line 330 "switch_gen.m"
      }
#line 332 "switch_gen.m"
    else
#line 333 "switch_gen.m"
      ll_backend__switch_gen__CheaperTagTest_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 335 "switch_gen.m"
    {
#line 335 "switch_gen.m"
      ll_backend__switch_gen__generate_if_then_else_chain_cases_14_p_0(ll_backend__switch_gen__OrderedTaggedCases_24, ll_backend__switch_gen__VarRval_14, ll_backend__switch_gen__VarType_15, ll_backend__switch_gen__VarName_16, ll_backend__switch_gen__CheaperTagTest_30, ll_backend__switch_gen__CodeModel_17, ll_backend__switch_gen__CanFail_18, ll_backend__switch_gen__GoalInfo_19, ll_backend__switch_gen__EndLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__switch_gen__MaybeEnd_21, ll_backend__switch_gen__Code_22, ll_backend__switch_gen__STATE_VARIABLE_CI_0_31, ll_backend__switch_gen__STATE_VARIABLE_CI_32);
#line 335 "switch_gen.m"
      return;
    }
#line 323 "switch_gen.m"
  }
#line 318 "switch_gen.m"
}

#line 243 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_8_p_0_3(
#line 243 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 243 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 243 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
#line 243 "switch_gen.m"
{
#line 243 "switch_gen.m"
  {
#line 243 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 243 "switch_gen.m"
    MR_String ll_backend__switch_gen__conv2_HeadVar__2_2;

#line 243 "switch_gen.m"
    {
#line 243 "switch_gen.m"
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv2_HeadVar__2_2);
    }
#line 243 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv2_HeadVar__2_2));
#line 243 "switch_gen.m"
  }
#line 243 "switch_gen.m"
}

#line 226 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_8_p_0_2(
#line 226 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 226 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 226 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
#line 226 "switch_gen.m"
{
#line 226 "switch_gen.m"
  {
#line 226 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 226 "switch_gen.m"
    MR_String ll_backend__switch_gen__conv1_HeadVar__2_2;

#line 226 "switch_gen.m"
    {
#line 226 "switch_gen.m"
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv1_HeadVar__2_2);
    }
#line 226 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
#line 226 "switch_gen.m"
  }
#line 226 "switch_gen.m"
}

#line 183 "switch_gen.m"
static void MR_CALL 
ll_backend__switch_gen__generate_switch_8_p_0_1(
#line 183 "switch_gen.m"
  MR_Box ll_backend__switch_gen__closure_arg,
#line 183 "switch_gen.m"
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
#line 183 "switch_gen.m"
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
#line 183 "switch_gen.m"
{
#line 183 "switch_gen.m"
  {
#line 183 "switch_gen.m"
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
#line 183 "switch_gen.m"
    MR_Integer ll_backend__switch_gen__conv0_HeadVar__2_2;

#line 183 "switch_gen.m"
    {
#line 183 "switch_gen.m"
      backend_libs__switch_util__get_int_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv0_HeadVar__2_2);
    }
#line 183 "switch_gen.m"
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
#line 183 "switch_gen.m"
  }
#line 183 "switch_gen.m"
}

#line 89 "switch_gen.m"
void MR_CALL 
ll_backend__switch_gen__generate_switch_8_p_0(
#line 89 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CodeModel_9,
#line 89 "switch_gen.m"
  MR_Word ll_backend__switch_gen__SwitchVar_10,
#line 89 "switch_gen.m"
  MR_Word ll_backend__switch_gen__CanFail_11,
#line 89 "switch_gen.m"
  MR_Word ll_backend__switch_gen__Cases_12,
#line 89 "switch_gen.m"
  MR_Word ll_backend__switch_gen__GoalInfo_13,
#line 89 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__Code_14,
#line 89 "switch_gen.m"
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_52,
#line 89 "switch_gen.m"
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_53)
#line 89 "switch_gen.m"
{
#line 126 "switch_gen.m"
  {
#line 126 "switch_gen.m"
    MR_bool ll_backend__switch_gen__succeeded;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__StoreMap_16;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__EndLabel_17;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__ModuleInfo_18;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchVarType_19;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TaggedCases0_20;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MaybeIntSwitchInfo_21;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__TaggedCases_22;
#line 126 "switch_gen.m"
    MR_String ll_backend__switch_gen__SwitchVarName_23;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchVarCode_24;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchVarRval_25;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchCategory_26;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MayUseSmartIndexing_27;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__MaybeEnd_28;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__SwitchCode_29;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_54_54;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_55_55;
#line 126 "switch_gen.m"
    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_92_92;

#line 130 "switch_gen.m"
    {
#line 130 "switch_gen.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_gen__GoalInfo_13, &ll_backend__switch_gen__StoreMap_16);
    }
#line 131 "switch_gen.m"
    {
#line 131 "switch_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__switch_gen__EndLabel_17, ll_backend__switch_gen__STATE_VARIABLE_CI_0_52, &ll_backend__switch_gen__STATE_VARIABLE_CI_54_54);
    }
#line 132 "switch_gen.m"
    {
#line 132 "switch_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_54_54, &ll_backend__switch_gen__ModuleInfo_18);
    }
#line 133 "switch_gen.m"
    {
#line 133 "switch_gen.m"
      ll_backend__switch_gen__SwitchVarType_19 = ll_backend__code_info__variable_type_2_f_0(ll_backend__switch_gen__STATE_VARIABLE_CI_54_54, ll_backend__switch_gen__SwitchVar_10);
    }
#line 134 "switch_gen.m"
    {
#line 134 "switch_gen.m"
      backend_libs__switch_util__tag_cases_5_p_0(ll_backend__switch_gen__ModuleInfo_18, ll_backend__switch_gen__SwitchVarType_19, ll_backend__switch_gen__Cases_12, &ll_backend__switch_gen__TaggedCases0_20, &ll_backend__switch_gen__MaybeIntSwitchInfo_21);
    }
#line 136 "switch_gen.m"
    {
#line 136 "switch_gen.m"
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__TaggedCases0_20, &ll_backend__switch_gen__TaggedCases_22);
    }
#line 138 "switch_gen.m"
    {
#line 138 "switch_gen.m"
      ll_backend__switch_gen__SwitchVarName_23 = ll_backend__code_info__variable_name_2_f_0(ll_backend__switch_gen__STATE_VARIABLE_CI_54_54, ll_backend__switch_gen__SwitchVar_10);
    }
#line 139 "switch_gen.m"
    {
#line 139 "switch_gen.m"
      ll_backend__code_info__produce_variable_5_p_0(ll_backend__switch_gen__SwitchVar_10, &ll_backend__switch_gen__SwitchVarCode_24, &ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__STATE_VARIABLE_CI_54_54, &ll_backend__switch_gen__STATE_VARIABLE_CI_55_55);
    }
#line 141 "switch_gen.m"
    {
#line 141 "switch_gen.m"
      backend_libs__switch_util__find_switch_category_4_p_0(ll_backend__switch_gen__ModuleInfo_18, ll_backend__switch_gen__SwitchVarType_19, &ll_backend__switch_gen__SwitchCategory_26, &ll_backend__switch_gen__MayUseSmartIndexing_27);
    }
#line 148 "switch_gen.m"
    if ((ll_backend__switch_gen__MayUseSmartIndexing_27 == (MR_Integer) 0))
#line 145 "switch_gen.m"
      {
#line 145 "switch_gen.m"
        ll_backend__switch_gen__order_and_generate_cases_12_p_0(ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__SwitchVarType_19, ll_backend__switch_gen__SwitchVarName_23, ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__CanFail_11, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__EndLabel_17, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
      }
#line 148 "switch_gen.m"
    else
#line 149 "switch_gen.m"
      {
#line 149 "switch_gen.m"
        MR_Word ll_backend__switch_gen__Globals_30;

#line 150 "switch_gen.m"
        {
#line 150 "switch_gen.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__switch_gen__ModuleInfo_18, &ll_backend__switch_gen__Globals_30);
        }
#line 213 "switch_gen.m"
        if ((ll_backend__switch_gen__SwitchCategory_26 == (MR_Integer) 0))
#line 152 "switch_gen.m"
          {
#line 152 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__NumConsIds_31;
#line 152 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__NumArms_32;
#line 192 "switch_gen.m"
            MR_Word ll_backend__switch_gen__NeedBitVecCheck_41;
#line 192 "switch_gen.m"
            MR_Word ll_backend__switch_gen__NeedRangeCheck_42;
#line 192 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__FirstVal_43;
#line 192 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__LastVal_44;
#line 192 "switch_gen.m"
            MR_Word ll_backend__switch_gen__MaybeEnd1_45;
#line 192 "switch_gen.m"
            MR_Word ll_backend__switch_gen__LookupSwitchInfo_46;
#line 192 "switch_gen.m"
            MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_84_84;
#line 156 "switch_gen.m"
            MR_Word ll_backend__switch_gen__TypeCtorInfo_125_125;
#line 156 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__LowerLimit_33;
#line 156 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__UpperLimit_34;
#line 156 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__NumValues_35;
#line 156 "switch_gen.m"
            MR_Word ll_backend__switch_gen__MaybeTraceInfo_36;
#line 156 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__LookupSize_37;
#line 156 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__ReqDensity_38;
#line 156 "switch_gen.m"
            MR_Word ll_backend__switch_gen__FilteredTaggedCases_39;
#line 156 "switch_gen.m"
            MR_Word ll_backend__switch_gen__FilteredCanFail_40;
#line 156 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_77_77;
#line 156 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_78_78;
#line 156 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_79_79;
#line 156 "switch_gen.m"
            MR_Integer ll_backend__switch_gen__V_80_80;
#line 156 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_81_81;
#line 156 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_82_82;
#line 156 "switch_gen.m"
            MR_Word ll_backend__switch_gen__V_83_83;

#line 153 "switch_gen.m"
            {
#line 153 "switch_gen.m"
              backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__TaggedCases_22, &ll_backend__switch_gen__NumConsIds_31, &ll_backend__switch_gen__NumArms_32);
            }
#line 155 "switch_gen.m"
            ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__MaybeIntSwitchInfo_21)) == (MR_mktag((MR_Integer) 1)));
#line 155 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 155 "switch_gen.m"
              {
#line 155 "switch_gen.m"
                ll_backend__switch_gen__LowerLimit_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_21, (MR_Integer) 0)));
#line 155 "switch_gen.m"
                ll_backend__switch_gen__UpperLimit_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_21, (MR_Integer) 1)));
#line 155 "switch_gen.m"
                ll_backend__switch_gen__NumValues_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_21, (MR_Integer) 2)));
#line 164 "switch_gen.m"
                ll_backend__switch_gen__V_77_77 = (MR_Integer) 448;
#line 164 "switch_gen.m"
                ll_backend__switch_gen__V_78_78 = (MR_Integer) 1;
#line 164 "switch_gen.m"
                {
#line 164 "switch_gen.m"
                  ll_backend__switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__switch_gen__Globals_30, ll_backend__switch_gen__V_77_77, ll_backend__switch_gen__V_78_78);
                }
#line 156 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 156 "switch_gen.m"
                  {
#line 167 "switch_gen.m"
                    {
#line 167 "switch_gen.m"
                      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__MaybeTraceInfo_36);
                    }
#line 168 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__MaybeTraceInfo_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 156 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 156 "switch_gen.m"
                      {
#line 170 "switch_gen.m"
                        ll_backend__switch_gen__V_79_79 = (MR_Integer) 436;
#line 170 "switch_gen.m"
                        {
#line 170 "switch_gen.m"
                          libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_30, ll_backend__switch_gen__V_79_79, &ll_backend__switch_gen__LookupSize_37);
                        }
#line 172 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_31 >= ll_backend__switch_gen__LookupSize_37);
#line 156 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 156 "switch_gen.m"
                          {
#line 173 "switch_gen.m"
                            ll_backend__switch_gen__V_80_80 = (MR_Integer) 1;
#line 173 "switch_gen.m"
                            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_32 > ll_backend__switch_gen__V_80_80);
#line 156 "switch_gen.m"
                            if (ll_backend__switch_gen__succeeded)
#line 156 "switch_gen.m"
                              {
#line 174 "switch_gen.m"
                                ll_backend__switch_gen__V_81_81 = (MR_Integer) 434;
#line 174 "switch_gen.m"
                                {
#line 174 "switch_gen.m"
                                  libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_30, ll_backend__switch_gen__V_81_81, &ll_backend__switch_gen__ReqDensity_38);
                                }
#line 176 "switch_gen.m"
                                {
#line 176 "switch_gen.m"
                                  backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__TaggedCases_22, &ll_backend__switch_gen__FilteredTaggedCases_39, ll_backend__switch_gen__CanFail_11, &ll_backend__switch_gen__FilteredCanFail_40);
                                }
#line 179 "switch_gen.m"
                                {
#line 179 "switch_gen.m"
                                  ll_backend__switch_gen__succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ll_backend__switch_gen__ModuleInfo_18, ll_backend__switch_gen__SwitchVarType_19, ll_backend__switch_gen__FilteredCanFail_40, ll_backend__switch_gen__LowerLimit_33, ll_backend__switch_gen__UpperLimit_34, ll_backend__switch_gen__NumValues_35, ll_backend__switch_gen__ReqDensity_38, &ll_backend__switch_gen__NeedBitVecCheck_41, &ll_backend__switch_gen__NeedRangeCheck_42, &ll_backend__switch_gen__FirstVal_43, &ll_backend__switch_gen__LastVal_44);
                                }
#line 156 "switch_gen.m"
                                if (ll_backend__switch_gen__succeeded)
#line 156 "switch_gen.m"
                                  {
#line 183 "switch_gen.m"
                                    ll_backend__switch_gen__V_82_82 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[1];
#line 184 "switch_gen.m"
                                    ll_backend__switch_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2798 "ll_backend.switch_gen.c"
                                    ll_backend__switch_gen__TypeCtorInfo_125_125 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 183 "switch_gen.m"
                                    {
#line 183 "switch_gen.m"
                                      ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_9_p_0(ll_backend__switch_gen__TypeCtorInfo_125_125, ll_backend__switch_gen__V_82_82, ll_backend__switch_gen__FilteredTaggedCases_39, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__StoreMap_16, ll_backend__switch_gen__V_83_83, &ll_backend__switch_gen__MaybeEnd1_45, &ll_backend__switch_gen__LookupSwitchInfo_46, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_84_84);
                                    }
#line 156 "switch_gen.m"
                                  }
#line 156 "switch_gen.m"
                              }
#line 156 "switch_gen.m"
                          }
#line 156 "switch_gen.m"
                      }
#line 156 "switch_gen.m"
                  }
#line 155 "switch_gen.m"
              }
#line 192 "switch_gen.m"
            if (ll_backend__switch_gen__succeeded)
#line 188 "switch_gen.m"
              {
#line 188 "switch_gen.m"
                ll_backend__lookup_switch__generate_int_lookup_switch_13_p_0(ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__LookupSwitchInfo_46, ll_backend__switch_gen__EndLabel_17, ll_backend__switch_gen__StoreMap_16, ll_backend__switch_gen__FirstVal_43, ll_backend__switch_gen__LastVal_44, ll_backend__switch_gen__NeedBitVecCheck_41, ll_backend__switch_gen__NeedRangeCheck_42, ll_backend__switch_gen__MaybeEnd1_45, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_84_84, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
              }
#line 192 "switch_gen.m"
            else
#line 208 "switch_gen.m"
              {
#line 208 "switch_gen.m"
                MR_Word ll_backend__switch_gen__DenseSwitchInfo_48;
#line 194 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__DenseSize_47;
#line 194 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_86_86;
#line 194 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__V_87_87;
#line 194 "switch_gen.m"
                MR_Word ll_backend__switch_gen__V_88_88;
#line 194 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__LowerLimit_94;
#line 194 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__UpperLimit_95;
#line 194 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumValues_96;
#line 194 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__ReqDensity_97;

#line 193 "switch_gen.m"
                ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__MaybeIntSwitchInfo_21)) == (MR_mktag((MR_Integer) 1)));
#line 193 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 193 "switch_gen.m"
                  {
#line 193 "switch_gen.m"
                    ll_backend__switch_gen__LowerLimit_94 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_21, (MR_Integer) 0)));
#line 193 "switch_gen.m"
                    ll_backend__switch_gen__UpperLimit_95 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_21, (MR_Integer) 1)));
#line 193 "switch_gen.m"
                    ll_backend__switch_gen__NumValues_96 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_21, (MR_Integer) 2)));
#line 195 "switch_gen.m"
                    ll_backend__switch_gen__V_86_86 = (MR_Integer) 435;
#line 195 "switch_gen.m"
                    {
#line 195 "switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_30, ll_backend__switch_gen__V_86_86, &ll_backend__switch_gen__DenseSize_47);
                    }
#line 197 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_31 >= ll_backend__switch_gen__DenseSize_47);
#line 194 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 194 "switch_gen.m"
                      {
#line 198 "switch_gen.m"
                        ll_backend__switch_gen__V_87_87 = (MR_Integer) 1;
#line 198 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_32 > ll_backend__switch_gen__V_87_87);
#line 194 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 194 "switch_gen.m"
                          {
#line 199 "switch_gen.m"
                            ll_backend__switch_gen__V_88_88 = (MR_Integer) 433;
#line 199 "switch_gen.m"
                            {
#line 199 "switch_gen.m"
                              libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_30, ll_backend__switch_gen__V_88_88, &ll_backend__switch_gen__ReqDensity_97);
                            }
#line 201 "switch_gen.m"
                            {
#line 201 "switch_gen.m"
                              ll_backend__switch_gen__succeeded = ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, ll_backend__switch_gen__SwitchVarType_19, ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__LowerLimit_94, ll_backend__switch_gen__UpperLimit_95, ll_backend__switch_gen__NumValues_96, ll_backend__switch_gen__ReqDensity_97, ll_backend__switch_gen__CanFail_11, &ll_backend__switch_gen__DenseSwitchInfo_48);
                            }
#line 194 "switch_gen.m"
                          }
#line 194 "switch_gen.m"
                      }
#line 193 "switch_gen.m"
                  }
#line 208 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 205 "switch_gen.m"
                  {
#line 205 "switch_gen.m"
                    {
#line 205 "switch_gen.m"
                      ll_backend__dense_switch__generate_dense_switch_12_p_0(ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__SwitchVarName_23, ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__DenseSwitchInfo_48, ll_backend__switch_gen__EndLabel_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                    }
#line 205 "switch_gen.m"
                  }
#line 208 "switch_gen.m"
                else
#line 209 "switch_gen.m"
                  {
#line 209 "switch_gen.m"
                    ll_backend__switch_gen__order_and_generate_cases_12_p_0(ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__SwitchVarType_19, ll_backend__switch_gen__SwitchVarName_23, ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__CanFail_11, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__EndLabel_17, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                  }
#line 208 "switch_gen.m"
              }
#line 152 "switch_gen.m"
          }
#line 213 "switch_gen.m"
        else
#line 213 "switch_gen.m"
          if ((ll_backend__switch_gen__SwitchCategory_26 == (MR_Integer) 3))
#line 283 "switch_gen.m"
            {
#line 283 "switch_gen.m"
              ll_backend__switch_gen__order_and_generate_cases_12_p_0(ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__SwitchVarType_19, ll_backend__switch_gen__SwitchVarName_23, ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__CanFail_11, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__EndLabel_17, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
            }
#line 213 "switch_gen.m"
          else
#line 213 "switch_gen.m"
            if ((ll_backend__switch_gen__SwitchCategory_26 == (MR_Integer) 1))
#line 214 "switch_gen.m"
              {
#line 214 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumConsIds_114;
#line 214 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumArms_115;
#line 214 "switch_gen.m"
                MR_Word ll_backend__switch_gen__FilteredTaggedCases_116;
#line 214 "switch_gen.m"
                MR_Word ll_backend__switch_gen__FilteredCanFail_117;

#line 215 "switch_gen.m"
                {
#line 215 "switch_gen.m"
                  backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__TaggedCases_22, &ll_backend__switch_gen__FilteredTaggedCases_116, ll_backend__switch_gen__CanFail_11, &ll_backend__switch_gen__FilteredCanFail_117);
                }
#line 217 "switch_gen.m"
                {
#line 217 "switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__FilteredTaggedCases_116, &ll_backend__switch_gen__NumConsIds_114, &ll_backend__switch_gen__NumArms_115);
                }
#line 219 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_115 > (MR_Integer) 1);
#line 263 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 221 "switch_gen.m"
                  {
#line 221 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__StringHashSwitchSize_49;
#line 221 "switch_gen.m"
                    MR_Integer ll_backend__switch_gen__StringBinarySwitchSize_50;

#line 220 "switch_gen.m"
                    {
#line 220 "switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_30, (MR_Integer) 437, &ll_backend__switch_gen__StringHashSwitchSize_49);
                    }
#line 222 "switch_gen.m"
                    {
#line 222 "switch_gen.m"
                      libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_30, (MR_Integer) 438, &ll_backend__switch_gen__StringBinarySwitchSize_50);
                    }
#line 224 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_114 >= ll_backend__switch_gen__StringHashSwitchSize_49);
#line 241 "switch_gen.m"
                    if (ll_backend__switch_gen__succeeded)
#line 236 "switch_gen.m"
                      {
#line 236 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_67_67;
#line 236 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__MaybeEnd1_102;
#line 236 "switch_gen.m"
                        MR_Word ll_backend__switch_gen__LookupSwitchInfo_103;

#line 226 "switch_gen.m"
                        {
#line 226 "switch_gen.m"
                          ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_9_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__switch_gen_scalar_common_1[2], ll_backend__switch_gen__FilteredTaggedCases_116, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__StoreMap_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd1_102, &ll_backend__switch_gen__LookupSwitchInfo_103, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_67_67);
                        }
#line 236 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 233 "switch_gen.m"
                          {
#line 233 "switch_gen.m"
                            ll_backend__string_switch__generate_string_hash_lookup_switch_10_p_0(ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__LookupSwitchInfo_103, ll_backend__switch_gen__FilteredCanFail_117, ll_backend__switch_gen__EndLabel_17, ll_backend__switch_gen__StoreMap_16, ll_backend__switch_gen__MaybeEnd1_102, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_67_67, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                          }
#line 236 "switch_gen.m"
                        else
#line 237 "switch_gen.m"
                          {
#line 237 "switch_gen.m"
                            ll_backend__string_switch__generate_string_hash_switch_11_p_0(ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__SwitchVarName_23, ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__CanFail_11, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__EndLabel_17, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                          }
#line 236 "switch_gen.m"
                      }
#line 241 "switch_gen.m"
                    else
#line 258 "switch_gen.m"
                      {
#line 241 "switch_gen.m"
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_114 >= ll_backend__switch_gen__StringBinarySwitchSize_50);
#line 258 "switch_gen.m"
                        if (ll_backend__switch_gen__succeeded)
#line 253 "switch_gen.m"
                          {
#line 253 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_72_72;
#line 253 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__MaybeEnd1_104;
#line 253 "switch_gen.m"
                            MR_Word ll_backend__switch_gen__LookupSwitchInfo_105;

#line 243 "switch_gen.m"
                            {
#line 243 "switch_gen.m"
                              ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_9_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__switch_gen_scalar_common_1[3], ll_backend__switch_gen__FilteredTaggedCases_116, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__StoreMap_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd1_104, &ll_backend__switch_gen__LookupSwitchInfo_105, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_72_72);
                            }
#line 253 "switch_gen.m"
                            if (ll_backend__switch_gen__succeeded)
#line 250 "switch_gen.m"
                              {
#line 250 "switch_gen.m"
                                ll_backend__string_switch__generate_string_binary_lookup_switch_10_p_0(ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__LookupSwitchInfo_105, ll_backend__switch_gen__FilteredCanFail_117, ll_backend__switch_gen__EndLabel_17, ll_backend__switch_gen__StoreMap_16, ll_backend__switch_gen__MaybeEnd1_104, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_72_72, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                              }
#line 253 "switch_gen.m"
                            else
#line 254 "switch_gen.m"
                              {
#line 254 "switch_gen.m"
                                ll_backend__string_switch__generate_string_binary_switch_11_p_0(ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__SwitchVarName_23, ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__CanFail_11, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__EndLabel_17, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                              }
#line 253 "switch_gen.m"
                          }
#line 258 "switch_gen.m"
                        else
#line 259 "switch_gen.m"
                          {
#line 259 "switch_gen.m"
                            ll_backend__switch_gen__order_and_generate_cases_12_p_0(ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__SwitchVarType_19, ll_backend__switch_gen__SwitchVarName_23, ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__CanFail_11, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__EndLabel_17, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                          }
#line 258 "switch_gen.m"
                      }
#line 221 "switch_gen.m"
                  }
#line 263 "switch_gen.m"
                else
#line 264 "switch_gen.m"
                  {
#line 264 "switch_gen.m"
                    ll_backend__switch_gen__order_and_generate_cases_12_p_0(ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__SwitchVarType_19, ll_backend__switch_gen__SwitchVarName_23, ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__CanFail_11, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__EndLabel_17, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                  }
#line 214 "switch_gen.m"
              }
#line 213 "switch_gen.m"
            else
#line 269 "switch_gen.m"
              {
#line 269 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__TagSize_51;
#line 269 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumConsIds_120;
#line 269 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__NumArms_121;
#line 272 "switch_gen.m"
                MR_Integer ll_backend__switch_gen__V_58_58;

#line 270 "switch_gen.m"
                {
#line 270 "switch_gen.m"
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__TaggedCases_22, &ll_backend__switch_gen__NumConsIds_120, &ll_backend__switch_gen__NumArms_121);
                }
#line 271 "switch_gen.m"
                {
#line 271 "switch_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_30, (MR_Integer) 439, &ll_backend__switch_gen__TagSize_51);
                }
#line 272 "switch_gen.m"
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_120 >= ll_backend__switch_gen__TagSize_51);
#line 272 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 272 "switch_gen.m"
                  {
#line 272 "switch_gen.m"
                    ll_backend__switch_gen__V_58_58 = (MR_Integer) 1;
#line 272 "switch_gen.m"
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_121 > ll_backend__switch_gen__V_58_58);
#line 272 "switch_gen.m"
                  }
#line 276 "switch_gen.m"
                if (ll_backend__switch_gen__succeeded)
#line 273 "switch_gen.m"
                  {
#line 273 "switch_gen.m"
                    {
#line 273 "switch_gen.m"
                      ll_backend__tag_switch__generate_tag_switch_13_p_0(ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__SwitchVarType_19, ll_backend__switch_gen__SwitchVarName_23, ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__CanFail_11, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__EndLabel_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                    }
#line 273 "switch_gen.m"
                  }
#line 276 "switch_gen.m"
                else
#line 277 "switch_gen.m"
                  {
#line 277 "switch_gen.m"
                    ll_backend__switch_gen__order_and_generate_cases_12_p_0(ll_backend__switch_gen__TaggedCases_22, ll_backend__switch_gen__SwitchVarRval_25, ll_backend__switch_gen__SwitchVarType_19, ll_backend__switch_gen__SwitchVarName_23, ll_backend__switch_gen__CodeModel_9, ll_backend__switch_gen__CanFail_11, ll_backend__switch_gen__GoalInfo_13, ll_backend__switch_gen__EndLabel_17, &ll_backend__switch_gen__MaybeEnd_28, &ll_backend__switch_gen__SwitchCode_29, ll_backend__switch_gen__STATE_VARIABLE_CI_55_55, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                  }
#line 269 "switch_gen.m"
              }
#line 149 "switch_gen.m"
      }
#line 288 "switch_gen.m"
    {
#line 288 "switch_gen.m"
      *ll_backend__switch_gen__Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_gen__SwitchVarCode_24, ll_backend__switch_gen__SwitchCode_29);
    }
#line 289 "switch_gen.m"
    {
#line 289 "switch_gen.m"
      ll_backend__code_info__after_all_branches_4_p_0(ll_backend__switch_gen__StoreMap_16, ll_backend__switch_gen__MaybeEnd_28, ll_backend__switch_gen__STATE_VARIABLE_CI_92_92, ll_backend__switch_gen__STATE_VARIABLE_CI_53);
#line 289 "switch_gen.m"
      return;
    }
#line 126 "switch_gen.m"
  }
#line 89 "switch_gen.m"
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
