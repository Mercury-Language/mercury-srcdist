/*
** Automatically generated from `switch_gen.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0;

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
  MR_Box ll_backend__switch_gen__wrapper_arg_2);

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
  MR_Word ll_backend__switch_gen__TaggedCase_3);

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_3(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
  MR_Box * ll_backend__switch_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_2(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
  MR_Box * ll_backend__switch_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_1(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
  MR_Box * ll_backend__switch_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_13_p_0(
  MR_Word ll_backend__switch_gen__TaggedCases_14,
  MR_Word ll_backend__switch_gen__VarRval_15,
  MR_Word ll_backend__switch_gen__VarType_16,
  MR_String ll_backend__switch_gen__VarName_17,
  MR_Word ll_backend__switch_gen__CodeModel_18,
  MR_Word ll_backend__switch_gen__CanFail_19,
  MR_Word ll_backend__switch_gen__GoalInfo_20,
  MR_Word ll_backend__switch_gen__EndLabel_21,
  MR_Word * ll_backend__switch_gen__MaybeEnd_22,
  MR_Word * ll_backend__switch_gen__Code_23,
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_34,
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_35,
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_0_36);

static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0_1(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
  MR_Box * ll_backend__switch_gen__wrapper_arg_2,
  MR_Box * ll_backend__switch_gen__wrapper_arg_3);

static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(
  MR_Word ll_backend__switch_gen__BranchStart_16,
  MR_Word ll_backend__switch_gen__Cases_17,
  MR_Word ll_backend__switch_gen__VarRval_18,
  MR_Word ll_backend__switch_gen__VarType_19,
  MR_String ll_backend__switch_gen__VarName_20,
  MR_Word ll_backend__switch_gen__CheaperTagTest_21,
  MR_Word ll_backend__switch_gen__CodeModel_22,
  MR_Word ll_backend__switch_gen__CanFail_23,
  MR_Word ll_backend__switch_gen__SwitchGoalInfo_24,
  MR_Word ll_backend__switch_gen__EndLabel_25,
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54,
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55,
  MR_Word * ll_backend__switch_gen__Code_27,
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_56,
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_57);

static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1);

static void MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(
  MR_Word ll_backend__switch_gen__Cases0_6,
  MR_Word * ll_backend__switch_gen__Cases_7,
  MR_Word ll_backend__switch_gen__CodeModel_8,
  MR_Word ll_backend__switch_gen__CanFail_9,
  MR_Word ll_backend__switch_gen__CI_10);

static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
  MR_Word * ll_backend__switch_gen__HeadVar__3_3);

static void MR_CALL 
ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
  MR_Word * ll_backend__switch_gen__HeadVar__3_3);

static MR_Word MR_CALL 
ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(
  MR_Word ll_backend__switch_gen__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(
  MR_Word ll_backend__switch_gen__ConsTag_3);


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
    ((MR_Box) (ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[0])),
    ((MR_Box) (ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_3[0])),
    ((MR_Box) (ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[1])),
    ((MR_Box) (ll_backend__switch_gen__generate_switch_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[2])),
    ((MR_Box) (ll_backend__switch_gen__generate_switch_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[2])),
    ((MR_Box) (ll_backend__switch_gen__generate_switch_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[3])),
    ((MR_Box) (ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[1])),
    ((MR_Box) (ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_3[1])),
    ((MR_Box) (ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_2[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0
  }
};

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
  MR_Box ll_backend__switch_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__switch_gen__wrapper_arg_3;
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
    MR_Integer ll_backend__switch_gen__conv2_HeadVar__3_3;

    {
      ll_backend__switch_gen__conv2_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) ll_backend__switch_gen__wrapper_arg_1), ((MR_Integer) ll_backend__switch_gen__wrapper_arg_2));
    }
    ll_backend__switch_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_gen__conv2_HeadVar__3_3));
    return ll_backend__switch_gen__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
    MR_Integer ll_backend__switch_gen__conv1_HeadVar__2_2;

    {
      ll_backend__switch_gen__conv1_HeadVar__2_2 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
    return ll_backend__switch_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
    MR_Word ll_backend__switch_gen__conv0_HeadVar__2_2;

    {
      ll_backend__switch_gen__conv0_HeadVar__2_2 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
    return ll_backend__switch_gen__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
  MR_Word ll_backend__switch_gen__TaggedCase_3)
{
  {
    MR_Word ll_backend__switch_gen__HeadVar__2_2;
    MR_Word ll_backend__switch_gen__TypeCtorInfo_19_19;
    MR_Word ll_backend__switch_gen__TypeCtorInfo_22_22;
    MR_Integer ll_backend__switch_gen__Cost_4;
    MR_Word ll_backend__switch_gen__MainTaggedConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 0)));
    MR_Word ll_backend__switch_gen__OtherTaggedConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 1)));
    MR_Word ll_backend__switch_gen__MainTag_9;
    MR_Integer ll_backend__switch_gen__MainCost_10;
    MR_Word ll_backend__switch_gen__OtherTags_11;
    MR_Word ll_backend__switch_gen__OtherCosts_12;
    MR_Word ll_backend__switch_gen__Var_16;
    MR_Word ll_backend__switch_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 2)));
    MR_Word ll_backend__switch_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_3, (MR_Integer) 3)));
    MR_Box ll_backend__switch_gen__conv3_Cost_4;

    {
      ll_backend__switch_gen__MainTag_9 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(ll_backend__switch_gen__MainTaggedConsId_5);
    }
    {
      ll_backend__switch_gen__MainCost_10 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ll_backend__switch_gen__MainTag_9);
    }
    ll_backend__switch_gen__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
    {
      ll_backend__switch_gen__OtherTags_11 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, ll_backend__switch_gen__TypeCtorInfo_19_19, (MR_Word) &ll_backend__switch_gen_scalar_common_1[7], ll_backend__switch_gen__OtherTaggedConsIds_6);
    }
    ll_backend__switch_gen__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      ll_backend__switch_gen__OtherCosts_12 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_19_19, ll_backend__switch_gen__TypeCtorInfo_22_22, (MR_Word) &ll_backend__switch_gen_scalar_common_1[8], ll_backend__switch_gen__OtherTags_11);
    }
    {
      ll_backend__switch_gen__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_16, 0) = ((MR_Box) (ll_backend__switch_gen__MainCost_10));
      MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_16, 1) = ((MR_Box) (ll_backend__switch_gen__OtherCosts_12));
    }
    {
      ll_backend__switch_gen__conv3_Cost_4 = mercury__list__foldl_3_f_0(ll_backend__switch_gen__TypeCtorInfo_22_22, ll_backend__switch_gen__TypeCtorInfo_22_22, (MR_Word) &ll_backend__switch_gen_scalar_common_1[9], ll_backend__switch_gen__Var_16, ((MR_Box) ((MR_Integer) 0)));
    }
    ll_backend__switch_gen__Cost_4 = ((MR_Integer) ll_backend__switch_gen__conv3_Cost_4);
    {
      ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__switch_gen__Cost_4));
      MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_3));
    }
    return ll_backend__switch_gen__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_3(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
    MR_String ll_backend__switch_gen__conv2_HeadVar__2_2;

    {
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv2_HeadVar__2_2);
    }
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_2(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
    MR_String ll_backend__switch_gen__conv1_HeadVar__2_2;

    {
      backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv1_HeadVar__2_2);
    }
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_1(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
  MR_Box * ll_backend__switch_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
    MR_Integer ll_backend__switch_gen__conv0_HeadVar__2_2;

    {
      backend_libs__switch_util__get_int_tag_2_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv0_HeadVar__2_2);
    }
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
  }
}

void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0(
  MR_Word ll_backend__switch_gen__CodeModel_11,
  MR_Word ll_backend__switch_gen__SwitchVar_12,
  MR_Word ll_backend__switch_gen__CanFail_13,
  MR_Word ll_backend__switch_gen__Cases_14,
  MR_Word ll_backend__switch_gen__GoalInfo_15,
  MR_Word * ll_backend__switch_gen__Code_16,
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_56,
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_57,
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_0_58,
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CLD_59)
{
  {
    MR_bool ll_backend__switch_gen__succeeded;
    MR_Word ll_backend__switch_gen__StoreMap_19;
    MR_Word ll_backend__switch_gen__EndLabel_20;
    MR_Word ll_backend__switch_gen__ModuleInfo_21;
    MR_Word ll_backend__switch_gen__SwitchVarType_22;
    MR_Word ll_backend__switch_gen__TaggedCases0_23;
    MR_Word ll_backend__switch_gen__MaybeIntSwitchInfo_24;
    MR_Word ll_backend__switch_gen__TaggedCases_25;
    MR_String ll_backend__switch_gen__SwitchVarName_26;
    MR_Word ll_backend__switch_gen__SwitchVarCode_27;
    MR_Word ll_backend__switch_gen__SwitchVarRval_28;
    MR_Word ll_backend__switch_gen__SwitchCategory_29;
    MR_Word ll_backend__switch_gen__MayUseSmartIndexing_30;
    MR_Word ll_backend__switch_gen__MaybeEnd_31;
    MR_Word ll_backend__switch_gen__SwitchCode_32;
    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_60_60;
    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61;

    {
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_gen__GoalInfo_15, &ll_backend__switch_gen__StoreMap_19);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, &ll_backend__switch_gen__STATE_VARIABLE_CI_60_60);
    }
    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__ModuleInfo_21);
    }
    {
      ll_backend__switch_gen__SwitchVarType_22 = ll_backend__code_info__variable_type_2_f_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__SwitchVar_12);
    }
    {
      backend_libs__switch_util__tag_cases_5_p_0(ll_backend__switch_gen__ModuleInfo_21, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__Cases_14, &ll_backend__switch_gen__TaggedCases0_23, &ll_backend__switch_gen__MaybeIntSwitchInfo_24);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__TaggedCases0_23, &ll_backend__switch_gen__TaggedCases_25);
    }
    {
      ll_backend__switch_gen__SwitchVarName_26 = ll_backend__code_info__variable_name_2_f_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__SwitchVar_12);
    }
    {
      ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__switch_gen__SwitchVar_12, &ll_backend__switch_gen__SwitchVarCode_27, &ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CLD_0_58, &ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
    }
    {
      backend_libs__switch_util__find_switch_category_4_p_0(ll_backend__switch_gen__ModuleInfo_21, ll_backend__switch_gen__SwitchVarType_22, &ll_backend__switch_gen__SwitchCategory_29, &ll_backend__switch_gen__MayUseSmartIndexing_30);
    }
    switch (ll_backend__switch_gen__MayUseSmartIndexing_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__switch_gen__Globals_33;

          {
            hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__switch_gen__ModuleInfo_21, &ll_backend__switch_gen__Globals_33);
          }
          switch (ll_backend__switch_gen__SwitchCategory_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ll_backend__switch_gen__NumConsIds_34;
                MR_Integer ll_backend__switch_gen__NumArms_35;
                MR_Word ll_backend__switch_gen__NeedBitVecCheck_44;
                MR_Word ll_backend__switch_gen__NeedRangeCheck_45;
                MR_Integer ll_backend__switch_gen__FirstVal_46;
                MR_Integer ll_backend__switch_gen__LastVal_47;
                MR_Word ll_backend__switch_gen__BranchStart_48;
                MR_Word ll_backend__switch_gen__MaybeEnd1_49;
                MR_Word ll_backend__switch_gen__LookupSwitchInfo_50;
                MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_92_92;
                MR_Word ll_backend__switch_gen__TypeCtorInfo_173_173;
                MR_Integer ll_backend__switch_gen__LowerLimit_36;
                MR_Integer ll_backend__switch_gen__UpperLimit_37;
                MR_Integer ll_backend__switch_gen__NumValues_38;
                MR_Word ll_backend__switch_gen__MaybeTraceInfo_39;
                MR_Integer ll_backend__switch_gen__LookupSize_40;
                MR_Integer ll_backend__switch_gen__ReqDensity_41;
                MR_Word ll_backend__switch_gen__FilteredTaggedCases_42;
                MR_Word ll_backend__switch_gen__FilteredCanFail_43;
                MR_Word ll_backend__switch_gen__Var_85;
                MR_Word ll_backend__switch_gen__Var_86;
                MR_Word ll_backend__switch_gen__Var_87;
                MR_Integer ll_backend__switch_gen__Var_88;
                MR_Word ll_backend__switch_gen__Var_89;
                MR_Word ll_backend__switch_gen__Var_90;
                MR_Word ll_backend__switch_gen__Var_91;

                {
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__NumConsIds_34, &ll_backend__switch_gen__NumArms_35);
                }
                ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__MaybeIntSwitchInfo_24)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__switch_gen__succeeded)
                {
                  ll_backend__switch_gen__LowerLimit_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 0)));
                  ll_backend__switch_gen__UpperLimit_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 1)));
                  ll_backend__switch_gen__NumValues_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 2)));
                  ll_backend__switch_gen__Var_85 = (MR_Integer) 457;
                  ll_backend__switch_gen__Var_86 = (MR_Integer) 1;
                  {
                    ll_backend__switch_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__Var_85, ll_backend__switch_gen__Var_86);
                  }
                  if (ll_backend__switch_gen__succeeded)
                  {
                    {
                      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__MaybeTraceInfo_39);
                    }
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__MaybeTraceInfo_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (ll_backend__switch_gen__succeeded)
                    {
                      ll_backend__switch_gen__Var_87 = (MR_Integer) 444;
                      {
                        libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__Var_87, &ll_backend__switch_gen__LookupSize_40);
                      }
                      ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_34 >= ll_backend__switch_gen__LookupSize_40);
                      if (ll_backend__switch_gen__succeeded)
                      {
                        ll_backend__switch_gen__Var_88 = (MR_Integer) 1;
                        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_35 > ll_backend__switch_gen__Var_88);
                        if (ll_backend__switch_gen__succeeded)
                        {
                          ll_backend__switch_gen__Var_89 = (MR_Integer) 442;
                          {
                            libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__Var_89, &ll_backend__switch_gen__ReqDensity_41);
                          }
                          {
                            backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__FilteredTaggedCases_42, ll_backend__switch_gen__CanFail_13, &ll_backend__switch_gen__FilteredCanFail_43);
                          }
                          {
                            ll_backend__switch_gen__succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ll_backend__switch_gen__ModuleInfo_21, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__FilteredCanFail_43, ll_backend__switch_gen__LowerLimit_36, ll_backend__switch_gen__UpperLimit_37, ll_backend__switch_gen__NumValues_38, ll_backend__switch_gen__ReqDensity_41, &ll_backend__switch_gen__NeedBitVecCheck_44, &ll_backend__switch_gen__NeedRangeCheck_45, &ll_backend__switch_gen__FirstVal_46, &ll_backend__switch_gen__LastVal_47);
                          }
                          if (ll_backend__switch_gen__succeeded)
                          {
                            {
                              ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__switch_gen__BranchStart_48);
                            }
                            ll_backend__switch_gen__Var_90 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[4];
                            ll_backend__switch_gen__Var_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            ll_backend__switch_gen__TypeCtorInfo_173_173 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                            {
                              ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0(ll_backend__switch_gen__TypeCtorInfo_173_173, ll_backend__switch_gen__BranchStart_48, ll_backend__switch_gen__Var_90, ll_backend__switch_gen__FilteredTaggedCases_42, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__Var_91, &ll_backend__switch_gen__MaybeEnd1_49, &ll_backend__switch_gen__LookupSwitchInfo_50, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__STATE_VARIABLE_CI_92_92);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if (ll_backend__switch_gen__succeeded)
                {
                  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_93_103;

                  {
                    ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_48, ll_backend__switch_gen__STATE_VARIABLE_CI_92_92, &ll_backend__switch_gen__STATE_VARIABLE_CLD_93_103);
                  }
                  {
                    ll_backend__lookup_switch__generate_int_lookup_switch_14_p_0(ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__LookupSwitchInfo_50, ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__FirstVal_46, ll_backend__switch_gen__LastVal_47, ll_backend__switch_gen__NeedBitVecCheck_44, ll_backend__switch_gen__NeedRangeCheck_45, ll_backend__switch_gen__MaybeEnd1_49, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_92_92, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_93_103);
                  }
                }
                else
                {
                  MR_Word ll_backend__switch_gen__DenseSwitchInfo_52;
                  MR_Integer ll_backend__switch_gen__DenseSize_51;
                  MR_Word ll_backend__switch_gen__Var_95;
                  MR_Integer ll_backend__switch_gen__Var_96;
                  MR_Word ll_backend__switch_gen__Var_97;
                  MR_Integer ll_backend__switch_gen__LowerLimit_104;
                  MR_Integer ll_backend__switch_gen__UpperLimit_105;
                  MR_Integer ll_backend__switch_gen__NumValues_106;
                  MR_Integer ll_backend__switch_gen__ReqDensity_107;

                  ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__MaybeIntSwitchInfo_24)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__switch_gen__succeeded)
                  {
                    ll_backend__switch_gen__LowerLimit_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 0)));
                    ll_backend__switch_gen__UpperLimit_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 1)));
                    ll_backend__switch_gen__NumValues_106 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__MaybeIntSwitchInfo_24, (MR_Integer) 2)));
                    ll_backend__switch_gen__Var_95 = (MR_Integer) 443;
                    {
                      libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__Var_95, &ll_backend__switch_gen__DenseSize_51);
                    }
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_34 >= ll_backend__switch_gen__DenseSize_51);
                    if (ll_backend__switch_gen__succeeded)
                    {
                      ll_backend__switch_gen__Var_96 = (MR_Integer) 1;
                      ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_35 > ll_backend__switch_gen__Var_96);
                      if (ll_backend__switch_gen__succeeded)
                      {
                        ll_backend__switch_gen__Var_97 = (MR_Integer) 441;
                        {
                          libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, ll_backend__switch_gen__Var_97, &ll_backend__switch_gen__ReqDensity_107);
                        }
                        {
                          ll_backend__switch_gen__succeeded = ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__LowerLimit_104, ll_backend__switch_gen__UpperLimit_105, ll_backend__switch_gen__NumValues_106, ll_backend__switch_gen__ReqDensity_107, ll_backend__switch_gen__CanFail_13, &ll_backend__switch_gen__DenseSwitchInfo_52);
                        }
                      }
                    }
                  }
                  if (ll_backend__switch_gen__succeeded)
                  {
                    {
                      ll_backend__dense_switch__generate_dense_switch_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__DenseSwitchInfo_52, ll_backend__switch_gen__EndLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                    }
                  }
                  else
                    {
                      ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                    }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ll_backend__switch_gen__NumConsIds_154;
                MR_Integer ll_backend__switch_gen__NumArms_155;
                MR_Word ll_backend__switch_gen__FilteredTaggedCases_156;
                MR_Word ll_backend__switch_gen__FilteredCanFail_157;

                {
                  backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__FilteredTaggedCases_156, ll_backend__switch_gen__CanFail_13, &ll_backend__switch_gen__FilteredCanFail_157);
                }
                {
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__FilteredTaggedCases_156, &ll_backend__switch_gen__NumConsIds_154, &ll_backend__switch_gen__NumArms_155);
                }
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_155 > (MR_Integer) 1);
                if (ll_backend__switch_gen__succeeded)
                {
                  MR_Integer ll_backend__switch_gen__StringHashSwitchSize_53;
                  MR_Integer ll_backend__switch_gen__StringBinarySwitchSize_54;

                  {
                    libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, (MR_Integer) 446, &ll_backend__switch_gen__StringHashSwitchSize_53);
                  }
                  {
                    libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, (MR_Integer) 447, &ll_backend__switch_gen__StringBinarySwitchSize_54);
                  }
                  ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_154 >= ll_backend__switch_gen__StringHashSwitchSize_53);
                  if (ll_backend__switch_gen__succeeded)
                  {
                    MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_73_73;
                    MR_Word ll_backend__switch_gen__BranchStart_123;
                    MR_Word ll_backend__switch_gen__MaybeEnd1_124;
                    MR_Word ll_backend__switch_gen__LookupSwitchInfo_125;

                    {
                      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__switch_gen__BranchStart_123);
                    }
                    {
                      ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__switch_gen__BranchStart_123, (MR_Word) &ll_backend__switch_gen_scalar_common_1[5], ll_backend__switch_gen__FilteredTaggedCases_156, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__StoreMap_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd1_124, &ll_backend__switch_gen__LookupSwitchInfo_125, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__STATE_VARIABLE_CI_73_73);
                    }
                    if (ll_backend__switch_gen__succeeded)
                    {
                      MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_93_120;

                      {
                        ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_123, ll_backend__switch_gen__STATE_VARIABLE_CI_73_73, &ll_backend__switch_gen__STATE_VARIABLE_CLD_93_120);
                      }
                      {
                        ll_backend__string_switch__generate_string_hash_lookup_switch_11_p_0(ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__LookupSwitchInfo_125, ll_backend__switch_gen__FilteredCanFail_157, ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__MaybeEnd1_124, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_73_73, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_93_120);
                      }
                    }
                    else
                      {
                        ll_backend__string_switch__generate_string_hash_switch_12_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                      }
                  }
                  else
                  {
                    ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_154 >= ll_backend__switch_gen__StringBinarySwitchSize_54);
                    if (ll_backend__switch_gen__succeeded)
                    {
                      MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_79_79;
                      MR_Word ll_backend__switch_gen__BranchStart_130;
                      MR_Word ll_backend__switch_gen__MaybeEnd1_131;
                      MR_Word ll_backend__switch_gen__LookupSwitchInfo_132;

                      {
                        ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__switch_gen__BranchStart_130);
                      }
                      {
                        ll_backend__switch_gen__succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__switch_gen__BranchStart_130, (MR_Word) &ll_backend__switch_gen_scalar_common_1[6], ll_backend__switch_gen__FilteredTaggedCases_156, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__StoreMap_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd1_131, &ll_backend__switch_gen__LookupSwitchInfo_132, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, &ll_backend__switch_gen__STATE_VARIABLE_CI_79_79);
                      }
                      if (ll_backend__switch_gen__succeeded)
                      {
                        MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_93_127;

                        {
                          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_130, ll_backend__switch_gen__STATE_VARIABLE_CI_79_79, &ll_backend__switch_gen__STATE_VARIABLE_CLD_93_127);
                        }
                        {
                          ll_backend__string_switch__generate_string_binary_lookup_switch_11_p_0(ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__LookupSwitchInfo_132, ll_backend__switch_gen__FilteredCanFail_157, ll_backend__switch_gen__EndLabel_20, ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__MaybeEnd1_131, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_79_79, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_93_127);
                        }
                      }
                      else
                        {
                          ll_backend__string_switch__generate_string_binary_switch_12_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                        }
                    }
                    else
                      {
                        ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                      }
                  }
                }
                else
                  {
                    ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ll_backend__switch_gen__TagSize_55;
                MR_Integer ll_backend__switch_gen__NumConsIds_163;
                MR_Integer ll_backend__switch_gen__NumArms_164;
                MR_Integer ll_backend__switch_gen__Var_64;

                {
                  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(ll_backend__switch_gen__TaggedCases_25, &ll_backend__switch_gen__NumConsIds_163, &ll_backend__switch_gen__NumArms_164);
                }
                {
                  libs__globals__lookup_int_option_3_p_0(ll_backend__switch_gen__Globals_33, (MR_Integer) 448, &ll_backend__switch_gen__TagSize_55);
                }
                ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumConsIds_163 >= ll_backend__switch_gen__TagSize_55);
                if (ll_backend__switch_gen__succeeded)
                {
                  ll_backend__switch_gen__Var_64 = (MR_Integer) 1;
                  ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__NumArms_164 > ll_backend__switch_gen__Var_64);
                }
                if (ll_backend__switch_gen__succeeded)
                {
                  {
                    ll_backend__tag_switch__generate_tag_switch_14_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                  }
                }
                else
                  {
                    ll_backend__switch_gen__order_and_generate_cases_13_p_0(ll_backend__switch_gen__TaggedCases_25, ll_backend__switch_gen__SwitchVarRval_28, ll_backend__switch_gen__SwitchVarType_22, ll_backend__switch_gen__SwitchVarName_26, ll_backend__switch_gen__CodeModel_11, ll_backend__switch_gen__CanFail_13, ll_backend__switch_gen__GoalInfo_15, ll_backend__switch_gen__EndLabel_20, &ll_backend__switch_gen__MaybeEnd_31, &ll_backend__switch_gen__SwitchCode_32, ll_backend__switch_gen__STATE_VARIABLE_CI_60_60, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_61_61);
                  }
              }
              break;
          }
        }
        break;
    }
    {
      *ll_backend__switch_gen__Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_gen__SwitchVarCode_27, ll_backend__switch_gen__SwitchCode_32);
    }
    {
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__switch_gen__StoreMap_19, ll_backend__switch_gen__MaybeEnd_31, *ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_59);
    }
  }
}

static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_13_p_0(
  MR_Word ll_backend__switch_gen__TaggedCases_14,
  MR_Word ll_backend__switch_gen__VarRval_15,
  MR_Word ll_backend__switch_gen__VarType_16,
  MR_String ll_backend__switch_gen__VarName_17,
  MR_Word ll_backend__switch_gen__CodeModel_18,
  MR_Word ll_backend__switch_gen__CanFail_19,
  MR_Word ll_backend__switch_gen__GoalInfo_20,
  MR_Word ll_backend__switch_gen__EndLabel_21,
  MR_Word * ll_backend__switch_gen__MaybeEnd_22,
  MR_Word * ll_backend__switch_gen__Code_23,
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_34,
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_35,
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_0_36)
{
  {
    MR_bool ll_backend__switch_gen__succeeded;
    MR_Word ll_backend__switch_gen__OrderedTaggedCases_26;
    MR_Word ll_backend__switch_gen__TypeCtor_27;
    MR_Word ll_backend__switch_gen__ModuleInfo_28;
    MR_Word ll_backend__switch_gen__TypeTable_29;
    MR_Word ll_backend__switch_gen__CheaperTagTest_32;
    MR_Word ll_backend__switch_gen__BranchStart_33;
    MR_Word ll_backend__switch_gen__VarTypeDefn_45;
    MR_Word ll_backend__switch_gen__VarTypeDefnBody_46;
    MR_Word ll_backend__switch_gen__Var_51;
    MR_Word ll_backend__switch_gen__Var_52;
    MR_Word ll_backend__switch_gen__Var_53;
    MR_Word ll_backend__switch_gen__Var_54;
    MR_Word ll_backend__switch_gen__Var_55;
    MR_Word ll_backend__switch_gen__Var_56;
    MR_Word ll_backend__switch_gen__Var_57;
    MR_Word ll_backend__switch_gen__Var_58;
    MR_Word ll_backend__switch_gen__Var_59;
    MR_Word ll_backend__switch_gen__TypeDefn_30;

    {
      ll_backend__switch_gen__succeeded = ll_backend__code_info__search_type_defn_3_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_0_34, ll_backend__switch_gen__VarType_16, &ll_backend__switch_gen__VarTypeDefn_45);
    }
    if (ll_backend__switch_gen__succeeded)
    {
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__switch_gen__VarTypeDefn_45, &ll_backend__switch_gen__VarTypeDefnBody_46);
      }
      ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__VarTypeDefnBody_46)) == (MR_mktag((MR_Integer) 1)));
      if (ll_backend__switch_gen__succeeded)
      {
        ll_backend__switch_gen__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 0)));
        ll_backend__switch_gen__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 1)));
        ll_backend__switch_gen__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 2)));
        ll_backend__switch_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 3)));
        ll_backend__switch_gen__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 4)));
        ll_backend__switch_gen__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 5)));
        ll_backend__switch_gen__Var_58 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 6)))) & (MR_Integer) 1);
        ll_backend__switch_gen__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        ll_backend__switch_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__VarTypeDefnBody_46, (MR_Integer) 7)));
        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Var_51 == (MR_Integer) 0);
      }
    }
    if (ll_backend__switch_gen__succeeded)
    {
      MR_Word ll_backend__switch_gen__ReservedAddrCases0_47;
      MR_Word ll_backend__switch_gen__NonReservedAddrCases0_48;
      MR_Word ll_backend__switch_gen__ReservedAddrCases_49;
      MR_Word ll_backend__switch_gen__NonReservedAddrCases_50;

      {
        ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(ll_backend__switch_gen__TaggedCases_14, &ll_backend__switch_gen__ReservedAddrCases0_47, &ll_backend__switch_gen__NonReservedAddrCases0_48);
      }
      {
        ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__ReservedAddrCases0_47, &ll_backend__switch_gen__ReservedAddrCases_49, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34);
      }
      {
        ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__NonReservedAddrCases0_48, &ll_backend__switch_gen__NonReservedAddrCases_50, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34);
      }
      {
        ll_backend__switch_gen__OrderedTaggedCases_26 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__ReservedAddrCases_49, ll_backend__switch_gen__NonReservedAddrCases_50);
      }
    }
    else
      {
        ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ll_backend__switch_gen__TaggedCases_14, &ll_backend__switch_gen__OrderedTaggedCases_26, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34);
      }
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__switch_gen__VarType_16, &ll_backend__switch_gen__TypeCtor_27);
    }
    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CI_0_34, &ll_backend__switch_gen__ModuleInfo_28);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__switch_gen__ModuleInfo_28, &ll_backend__switch_gen__TypeTable_29);
    }
    {
      ll_backend__switch_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__switch_gen__TypeTable_29, ll_backend__switch_gen__TypeCtor_27, &ll_backend__switch_gen__TypeDefn_30);
    }
    if (ll_backend__switch_gen__succeeded)
    {
      MR_Word ll_backend__switch_gen__TypeBody_31;

      {
        hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__switch_gen__TypeDefn_30, &ll_backend__switch_gen__TypeBody_31);
      }
      {
        ll_backend__switch_gen__CheaperTagTest_32 = hlds__hlds_data__get_maybe_cheaper_tag_test_1_f_0(ll_backend__switch_gen__TypeBody_31);
      }
    }
    else
      ll_backend__switch_gen__CheaperTagTest_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__switch_gen__STATE_VARIABLE_CLD_0_36, &ll_backend__switch_gen__BranchStart_33);
    }
    {
      ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(ll_backend__switch_gen__BranchStart_33, ll_backend__switch_gen__OrderedTaggedCases_26, ll_backend__switch_gen__VarRval_15, ll_backend__switch_gen__VarType_16, ll_backend__switch_gen__VarName_17, ll_backend__switch_gen__CheaperTagTest_32, ll_backend__switch_gen__CodeModel_18, ll_backend__switch_gen__CanFail_19, ll_backend__switch_gen__GoalInfo_20, ll_backend__switch_gen__EndLabel_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__switch_gen__MaybeEnd_22, ll_backend__switch_gen__Code_23, ll_backend__switch_gen__STATE_VARIABLE_CI_0_34, ll_backend__switch_gen__STATE_VARIABLE_CI_35);
    }
  }
}

static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0_1(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1,
  MR_Box * ll_backend__switch_gen__wrapper_arg_2,
  MR_Box * ll_backend__switch_gen__wrapper_arg_3)
{
  {
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
    MR_String ll_backend__switch_gen__conv1_HeadVar__2_2;
    MR_Word ll_backend__switch_gen__conv0_HeadVar__3_3;

    {
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1), &ll_backend__switch_gen__conv1_HeadVar__2_2, &ll_backend__switch_gen__conv0_HeadVar__3_3);
    }
    *ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
    *ll_backend__switch_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(
  MR_Word ll_backend__switch_gen__BranchStart_16,
  MR_Word ll_backend__switch_gen__Cases_17,
  MR_Word ll_backend__switch_gen__VarRval_18,
  MR_Word ll_backend__switch_gen__VarType_19,
  MR_String ll_backend__switch_gen__VarName_20,
  MR_Word ll_backend__switch_gen__CheaperTagTest_21,
  MR_Word ll_backend__switch_gen__CodeModel_22,
  MR_Word ll_backend__switch_gen__CanFail_23,
  MR_Word ll_backend__switch_gen__SwitchGoalInfo_24,
  MR_Word ll_backend__switch_gen__EndLabel_25,
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54,
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55,
  MR_Word * ll_backend__switch_gen__Code_27,
  MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_0_56,
  MR_Word * ll_backend__switch_gen__STATE_VARIABLE_CI_57)
{
  {
    MR_bool ll_backend__switch_gen__succeeded;

    if ((ll_backend__switch_gen__Cases_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ll_backend__switch_gen__TypeCtorInfo_102_102;
      MR_Word ll_backend__switch_gen__FailCode_52;
      MR_Word ll_backend__switch_gen__EndCode_53;
      MR_Word ll_backend__switch_gen__Var_60;
      MR_Word ll_backend__switch_gen__Var_61;
      MR_String ll_backend__switch_gen__Var_62;

      switch (ll_backend__switch_gen__CanFail_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_58_58;

            {
              ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_16, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, &ll_backend__switch_gen__STATE_VARIABLE_CLD_58_58);
            }
            {
              ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__switch_gen__FailCode_52, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, ll_backend__switch_gen__STATE_VARIABLE_CI_57, ll_backend__switch_gen__STATE_VARIABLE_CLD_58_58);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              ll_backend__switch_gen__FailCode_52 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
            *ll_backend__switch_gen__STATE_VARIABLE_CI_57 = ll_backend__switch_gen__STATE_VARIABLE_CI_0_56;
          }
          break;
      }
      ll_backend__switch_gen__TypeCtorInfo_102_102 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
      {
        ll_backend__switch_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ll_backend__switch_gen__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), ll_backend__switch_gen__Var_61, 1) = ((MR_Box) (ll_backend__switch_gen__EndLabel_25));
      }
      {
        ll_backend__switch_gen__Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "end of the switch on ", ll_backend__switch_gen__VarName_20);
      }
      {
        ll_backend__switch_gen__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Var_60, 0) = ((MR_Box) (ll_backend__switch_gen__Var_61));
        MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Var_60, 1) = ((MR_Box) (ll_backend__switch_gen__Var_62));
      }
      {
        ll_backend__switch_gen__EndCode_53 = mercury__cord__singleton_1_f_0(ll_backend__switch_gen__TypeCtorInfo_102_102, ((MR_Box) (ll_backend__switch_gen__Var_60)));
      }
      {
        *ll_backend__switch_gen__Code_27 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_102_102, ll_backend__switch_gen__FailCode_52, ll_backend__switch_gen__EndCode_53);
      }
      *ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55 = ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54;
    }
    else
    {
      MR_Word ll_backend__switch_gen__TypeCtorInfo_100_100;
      MR_Word ll_backend__switch_gen__HeadCase_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases_17, (MR_Integer) 0)));
      MR_Word ll_backend__switch_gen__TailCases_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases_17, (MR_Integer) 1)));
      MR_Word ll_backend__switch_gen__MainTaggedConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 0)));
      MR_Word ll_backend__switch_gen__OtherTaggedConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 1)));
      MR_Word ll_backend__switch_gen__Goal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 3)));
      MR_Word ll_backend__switch_gen__StoreMap_35;
      MR_Word ll_backend__switch_gen__TestCode_39;
      MR_Word ll_backend__switch_gen__ElseCode_40;
      MR_Word ll_backend__switch_gen__TraceCode_47;
      MR_Word ll_backend__switch_gen__GoalCode_48;
      MR_Word ll_backend__switch_gen__SaveCode_49;
      MR_Word ll_backend__switch_gen__HeadCaseCode_50;
      MR_Word ll_backend__switch_gen__TailCasesCode_51;
      MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_65_65;
      MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_81_81;
      MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_82_82;
      MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_83_83;
      MR_Word ll_backend__switch_gen__STATE_VARIABLE_CI_84_84;
      MR_Word ll_backend__switch_gen__STATE_VARIABLE_CLD_85_85;
      MR_Word ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_86_86;
      MR_Word ll_backend__switch_gen__Var_87;
      MR_Word ll_backend__switch_gen__Var_88;
      MR_Word ll_backend__switch_gen__Var_89;
      MR_Word ll_backend__switch_gen__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__HeadCase_29, (MR_Integer) 2)));

      {
        hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_gen__SwitchGoalInfo_24, &ll_backend__switch_gen__StoreMap_35);
      }
      {
        MR_Word ll_backend__switch_gen__Var_36;
        MR_Word ll_backend__switch_gen__Var_37;

        ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__TailCases_30)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__switch_gen__succeeded)
        {
          ll_backend__switch_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__TailCases_30, (MR_Integer) 0)));
          ll_backend__switch_gen__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__TailCases_30, (MR_Integer) 1)));
        }
      }
      if (!(ll_backend__switch_gen__succeeded))
        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CanFail_23 == (MR_Integer) 0);
      if (ll_backend__switch_gen__succeeded)
      {
        MR_Word ll_backend__switch_gen__NextLabel_38;
        MR_Word ll_backend__switch_gen__Var_66;
        MR_Word ll_backend__switch_gen__Var_67;
        MR_Word ll_backend__switch_gen__Var_68;
        MR_Word ll_backend__switch_gen__Var_69;
        MR_String ll_backend__switch_gen__Var_70;
        MR_Word ll_backend__switch_gen__Var_72;
        MR_Word ll_backend__switch_gen__Var_73;
        MR_Word ll_backend__switch_gen__Var_74;

        {
          ll_backend__unify_gen__generate_raw_tag_test_case_11_p_0(ll_backend__switch_gen__VarRval_18, ll_backend__switch_gen__VarType_19, ll_backend__switch_gen__VarName_20, ll_backend__switch_gen__MainTaggedConsId_31, ll_backend__switch_gen__OtherTaggedConsIds_32, ll_backend__switch_gen__CheaperTagTest_21, (MR_Integer) 1, &ll_backend__switch_gen__NextLabel_38, &ll_backend__switch_gen__TestCode_39, ll_backend__switch_gen__STATE_VARIABLE_CI_0_56, &ll_backend__switch_gen__STATE_VARIABLE_CI_65_65);
        }
        {
          ll_backend__switch_gen__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_69, 0) = ((MR_Box) (ll_backend__switch_gen__EndLabel_25));
        }
        {
          ll_backend__switch_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__switch_gen__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), ll_backend__switch_gen__Var_68, 1) = ((MR_Box) (ll_backend__switch_gen__Var_69));
        }
        {
          ll_backend__switch_gen__Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "skip to the end of the switch on ", ll_backend__switch_gen__VarName_20);
        }
        {
          ll_backend__switch_gen__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Var_67, 0) = ((MR_Box) (ll_backend__switch_gen__Var_68));
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Var_67, 1) = ((MR_Box) (ll_backend__switch_gen__Var_70));
        }
        {
          ll_backend__switch_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__switch_gen__Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__switch_gen__Var_74, 1) = ((MR_Box) (ll_backend__switch_gen__NextLabel_38));
        }
        {
          ll_backend__switch_gen__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Var_73, 0) = ((MR_Box) (ll_backend__switch_gen__Var_74));
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Var_73, 1) = ((MR_Box) ((MR_String) "next case"));
        }
        {
          ll_backend__switch_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_72, 0) = ((MR_Box) (ll_backend__switch_gen__Var_73));
          MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__switch_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_66, 0) = ((MR_Box) (ll_backend__switch_gen__Var_67));
          MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_66, 1) = ((MR_Box) (ll_backend__switch_gen__Var_72));
        }
        {
          ll_backend__switch_gen__ElseCode_40 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_gen__Var_66);
        }
      }
      else
      {
        MR_Word ll_backend__switch_gen__TypeCtorInfo_99_99;
        MR_String ll_backend__switch_gen__MainConsName_41;
        MR_Word ll_backend__switch_gen__OtherConsNames_43;
        MR_String ll_backend__switch_gen__Comment_45;
        MR_Word ll_backend__switch_gen__Var_78;
        MR_Word ll_backend__switch_gen__Var_79;
        MR_Word ll_backend__switch_gen__Var_42;
        MR_Word ll_backend__switch_gen__Var_44;

        {
          hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__switch_gen__MainTaggedConsId_31, &ll_backend__switch_gen__MainConsName_41, &ll_backend__switch_gen__Var_42);
        }
        {
          mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &ll_backend__switch_gen_scalar_common_1[3], ll_backend__switch_gen__OtherTaggedConsIds_32, &ll_backend__switch_gen__OtherConsNames_43, &ll_backend__switch_gen__Var_44);
        }
        {
          ll_backend__switch_gen__Comment_45 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__switch_gen__VarName_20, ll_backend__switch_gen__MainConsName_41, ll_backend__switch_gen__OtherConsNames_43);
        }
        ll_backend__switch_gen__TypeCtorInfo_99_99 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__switch_gen__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_79, 0) = ((MR_Box) (ll_backend__switch_gen__Comment_45));
        }
        {
          ll_backend__switch_gen__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Var_78, 0) = ((MR_Box) (ll_backend__switch_gen__Var_79));
          MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Var_78, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          ll_backend__switch_gen__TestCode_39 = mercury__cord__singleton_1_f_0(ll_backend__switch_gen__TypeCtorInfo_99_99, ((MR_Box) (ll_backend__switch_gen__Var_78)));
        }
        {
          ll_backend__switch_gen__ElseCode_40 = mercury__cord__empty_0_f_0(ll_backend__switch_gen__TypeCtorInfo_99_99);
        }
        ll_backend__switch_gen__STATE_VARIABLE_CI_65_65 = ll_backend__switch_gen__STATE_VARIABLE_CI_0_56;
      }
      {
        ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_gen__BranchStart_16, ll_backend__switch_gen__STATE_VARIABLE_CI_65_65, &ll_backend__switch_gen__STATE_VARIABLE_CLD_81_81);
      }
      {
        ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__switch_gen__Goal_34, ll_backend__switch_gen__SwitchGoalInfo_24, &ll_backend__switch_gen__TraceCode_47, ll_backend__switch_gen__STATE_VARIABLE_CI_65_65, &ll_backend__switch_gen__STATE_VARIABLE_CI_82_82, ll_backend__switch_gen__STATE_VARIABLE_CLD_81_81, &ll_backend__switch_gen__STATE_VARIABLE_CLD_83_83);
      }
      {
        ll_backend__code_gen__generate_goal_7_p_0(ll_backend__switch_gen__CodeModel_22, ll_backend__switch_gen__Goal_34, &ll_backend__switch_gen__GoalCode_48, ll_backend__switch_gen__STATE_VARIABLE_CI_82_82, &ll_backend__switch_gen__STATE_VARIABLE_CI_84_84, ll_backend__switch_gen__STATE_VARIABLE_CLD_83_83, &ll_backend__switch_gen__STATE_VARIABLE_CLD_85_85);
      }
      {
        ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__switch_gen__StoreMap_35, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_0_54, &ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_86_86, &ll_backend__switch_gen__SaveCode_49, ll_backend__switch_gen__STATE_VARIABLE_CI_84_84, ll_backend__switch_gen__STATE_VARIABLE_CLD_85_85);
      }
      ll_backend__switch_gen__TypeCtorInfo_100_100 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
      {
        ll_backend__switch_gen__Var_89 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__SaveCode_49, ll_backend__switch_gen__ElseCode_40);
      }
      {
        ll_backend__switch_gen__Var_88 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__GoalCode_48, ll_backend__switch_gen__Var_89);
      }
      {
        ll_backend__switch_gen__Var_87 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__TraceCode_47, ll_backend__switch_gen__Var_88);
      }
      {
        ll_backend__switch_gen__HeadCaseCode_50 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__TestCode_39, ll_backend__switch_gen__Var_87);
      }
      {
        ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(ll_backend__switch_gen__BranchStart_16, ll_backend__switch_gen__TailCases_30, ll_backend__switch_gen__VarRval_18, ll_backend__switch_gen__VarType_19, ll_backend__switch_gen__VarName_20, ll_backend__switch_gen__CheaperTagTest_21, ll_backend__switch_gen__CodeModel_22, ll_backend__switch_gen__CanFail_23, ll_backend__switch_gen__SwitchGoalInfo_24, ll_backend__switch_gen__EndLabel_25, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_86_86, ll_backend__switch_gen__STATE_VARIABLE_MaybeEnd_55, &ll_backend__switch_gen__TailCasesCode_51, ll_backend__switch_gen__STATE_VARIABLE_CI_84_84, ll_backend__switch_gen__STATE_VARIABLE_CI_57);
      }
      {
        *ll_backend__switch_gen__Code_27 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_gen__TypeCtorInfo_100_100, ll_backend__switch_gen__HeadCaseCode_50, ll_backend__switch_gen__TailCasesCode_51);
      }
    }
  }
}

static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
    MR_Word ll_backend__switch_gen__conv1_HeadVar__2_2;

    {
      ll_backend__switch_gen__conv1_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv1_HeadVar__2_2));
    return ll_backend__switch_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1(
  MR_Box ll_backend__switch_gen__closure_arg,
  MR_Box ll_backend__switch_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__switch_gen__wrapper_arg_2;
    MR_Box ll_backend__switch_gen__closure = ll_backend__switch_gen__closure_arg;
    MR_Word ll_backend__switch_gen__conv0_HeadVar__2_2;

    {
      ll_backend__switch_gen__conv0_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) ll_backend__switch_gen__wrapper_arg_1));
    }
    ll_backend__switch_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_gen__conv0_HeadVar__2_2));
    return ll_backend__switch_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(
  MR_Word ll_backend__switch_gen__Cases0_6,
  MR_Word * ll_backend__switch_gen__Cases_7,
  MR_Word ll_backend__switch_gen__CodeModel_8,
  MR_Word ll_backend__switch_gen__CanFail_9,
  MR_Word ll_backend__switch_gen__CI_10)
{
  {
    MR_bool ll_backend__switch_gen__succeeded;
    MR_Word ll_backend__switch_gen__CanSucceedCases_11;
    MR_Word ll_backend__switch_gen__CannotSucceedCases_12;

    {
      ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(ll_backend__switch_gen__Cases0_6, &ll_backend__switch_gen__CanSucceedCases_11, &ll_backend__switch_gen__CannotSucceedCases_12);
    }
    if ((ll_backend__switch_gen__CannotSucceedCases_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ll_backend__switch_gen__Case1_21;
      MR_Word ll_backend__switch_gen__Case2_22;
      MR_Word ll_backend__switch_gen__Goal1_26;
      MR_Word ll_backend__switch_gen__Goal2_30;
      MR_Word ll_backend__switch_gen__Var_44;
      MR_Word ll_backend__switch_gen__Var_45;
      MR_Word ll_backend__switch_gen__Var_23;
      MR_Word ll_backend__switch_gen__Var_24;
      MR_Word ll_backend__switch_gen__Var_25;
      MR_Word ll_backend__switch_gen__Var_27;
      MR_Word ll_backend__switch_gen__Var_28;
      MR_Word ll_backend__switch_gen__Var_29;

      ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CodeModel_8 == (MR_Integer) 0);
      if (ll_backend__switch_gen__succeeded)
      {
        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__CanFail_9 == (MR_Integer) 1);
        if (ll_backend__switch_gen__succeeded)
        {
          ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__Cases0_6)) == (MR_mktag((MR_Integer) 1)));
          if (ll_backend__switch_gen__succeeded)
          {
            ll_backend__switch_gen__Case1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases0_6, (MR_Integer) 0)));
            ll_backend__switch_gen__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Cases0_6, (MR_Integer) 1)));
            ll_backend__switch_gen__succeeded = ((MR_tag((MR_Word) ll_backend__switch_gen__Var_44)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__switch_gen__succeeded)
            {
              ll_backend__switch_gen__Case2_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_44, (MR_Integer) 0)));
              ll_backend__switch_gen__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_44, (MR_Integer) 1)));
              ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (ll_backend__switch_gen__succeeded)
              {
                ll_backend__switch_gen__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 0)));
                ll_backend__switch_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 1)));
                ll_backend__switch_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 2)));
                ll_backend__switch_gen__Goal1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case1_21, (MR_Integer) 3)));
                ll_backend__switch_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 0)));
                ll_backend__switch_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 1)));
                ll_backend__switch_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 2)));
                ll_backend__switch_gen__Goal2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case2_22, (MR_Integer) 3)));
                ll_backend__switch_gen__succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      if (ll_backend__switch_gen__succeeded)
      {
        MR_Word ll_backend__switch_gen__ModuleInfo_31;
        MR_Word ll_backend__switch_gen__Globals_32;
        MR_Word ll_backend__switch_gen__PredId_33;
        MR_Integer ll_backend__switch_gen__ProcId_34;
        MR_Integer ll_backend__switch_gen__Min1_35;
        MR_Integer ll_backend__switch_gen__Max1_36;
        MR_Integer ll_backend__switch_gen__Min2_37;
        MR_Integer ll_backend__switch_gen__Max2_38;
        MR_Word ll_backend__switch_gen__BaseCase_39;
        MR_Word ll_backend__switch_gen__SingleRecCase_40;

        {
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__ModuleInfo_31);
        }
        {
          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__switch_gen__ModuleInfo_31, &ll_backend__switch_gen__Globals_32);
        }
        {
          ll_backend__code_info__get_pred_id_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__PredId_33);
        }
        {
          ll_backend__code_info__get_proc_id_2_p_0(ll_backend__switch_gen__CI_10, &ll_backend__switch_gen__ProcId_34);
        }
        {
          hlds__goal_form__count_recursive_calls_5_p_0(ll_backend__switch_gen__Goal1_26, ll_backend__switch_gen__PredId_33, ll_backend__switch_gen__ProcId_34, &ll_backend__switch_gen__Min1_35, &ll_backend__switch_gen__Max1_36);
        }
        {
          hlds__goal_form__count_recursive_calls_5_p_0(ll_backend__switch_gen__Goal2_30, ll_backend__switch_gen__PredId_33, ll_backend__switch_gen__ProcId_34, &ll_backend__switch_gen__Min2_37, &ll_backend__switch_gen__Max2_38);
        }
        ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max1_36 == (MR_Integer) 0);
        if (ll_backend__switch_gen__succeeded)
          ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min2_37 == (MR_Integer) 1);
        if (ll_backend__switch_gen__succeeded)
        {
          ll_backend__switch_gen__BaseCase_39 = ll_backend__switch_gen__Case1_21;
          ll_backend__switch_gen__SingleRecCase_40 = ll_backend__switch_gen__Case2_22;
          ll_backend__switch_gen__succeeded = MR_TRUE;
        }
        else
        {
          ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max2_38 == (MR_Integer) 0);
          if (ll_backend__switch_gen__succeeded)
          {
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min1_35 == (MR_Integer) 1);
            if (ll_backend__switch_gen__succeeded)
            {
              ll_backend__switch_gen__BaseCase_39 = ll_backend__switch_gen__Case2_22;
              ll_backend__switch_gen__SingleRecCase_40 = ll_backend__switch_gen__Case1_21;
              ll_backend__switch_gen__succeeded = MR_TRUE;
            }
          }
        }
        if (ll_backend__switch_gen__succeeded)
        {
          MR_Word ll_backend__switch_gen__SingleRecBaseFirst_41;

          {
            libs__globals__lookup_bool_option_3_p_0(ll_backend__switch_gen__Globals_32, (MR_Integer) 451, &ll_backend__switch_gen__SingleRecBaseFirst_41);
          }
          switch (ll_backend__switch_gen__SingleRecBaseFirst_41) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ll_backend__switch_gen__Var_47;

                {
                  ll_backend__switch_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_47, 0) = ((MR_Box) (ll_backend__switch_gen__SingleRecCase_40));
                  MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__switch_gen__Cases_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_39));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__Var_47));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__switch_gen__Var_49;

                {
                  ll_backend__switch_gen__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_49, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_39));
                  MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__switch_gen__Cases_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__SingleRecCase_40));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__Var_49));
                }
              }
              break;
          }
        }
        else
        {
          MR_Word ll_backend__switch_gen__MultiRecCase_42;
          MR_Word ll_backend__switch_gen__BaseCase_58;
          MR_Integer ll_backend__switch_gen__Var_51;

          ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max1_36 == (MR_Integer) 0);
          if (ll_backend__switch_gen__succeeded)
          {
            ll_backend__switch_gen__Var_51 = (MR_Integer) 1;
            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min2_37 > ll_backend__switch_gen__Var_51);
          }
          if (ll_backend__switch_gen__succeeded)
          {
            ll_backend__switch_gen__BaseCase_58 = ll_backend__switch_gen__Case1_21;
            ll_backend__switch_gen__MultiRecCase_42 = ll_backend__switch_gen__Case2_22;
            ll_backend__switch_gen__succeeded = MR_TRUE;
          }
          else
          {
            MR_Integer ll_backend__switch_gen__Var_52;

            ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Max2_38 == (MR_Integer) 0);
            if (ll_backend__switch_gen__succeeded)
            {
              ll_backend__switch_gen__Var_52 = (MR_Integer) 1;
              ll_backend__switch_gen__succeeded = (ll_backend__switch_gen__Min1_35 > ll_backend__switch_gen__Var_52);
              if (ll_backend__switch_gen__succeeded)
              {
                ll_backend__switch_gen__BaseCase_58 = ll_backend__switch_gen__Case2_22;
                ll_backend__switch_gen__MultiRecCase_42 = ll_backend__switch_gen__Case1_21;
                ll_backend__switch_gen__succeeded = MR_TRUE;
              }
            }
          }
          if (ll_backend__switch_gen__succeeded)
          {
            MR_Word ll_backend__switch_gen__MultiRecBaseFirst_43;

            {
              libs__globals__lookup_bool_option_3_p_0(ll_backend__switch_gen__Globals_32, (MR_Integer) 452, &ll_backend__switch_gen__MultiRecBaseFirst_43);
            }
            switch (ll_backend__switch_gen__MultiRecBaseFirst_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__switch_gen__Var_54;

                  {
                    ll_backend__switch_gen__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_54, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_58));
                    MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__switch_gen__Cases_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__MultiRecCase_42));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__Var_54));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__switch_gen__Var_56;

                  {
                    ll_backend__switch_gen__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_56, 0) = ((MR_Box) (ll_backend__switch_gen__MultiRecCase_42));
                    MR_hl_field(MR_mktag(1), ll_backend__switch_gen__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__switch_gen__Cases_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__BaseCase_58));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__Var_56));
                  }
                }
                break;
            }
          }
          else
          {
            MR_Word ll_backend__switch_gen__TypeCtorInfo_8_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
            MR_Word ll_backend__switch_gen__TypeInfo_9_65 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[0];
            MR_Word ll_backend__switch_gen__CostedCases_61;
            MR_Word ll_backend__switch_gen__SortedCostedCases_62;

            {
              ll_backend__switch_gen__CostedCases_61 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_8_64, ll_backend__switch_gen__TypeInfo_9_65, (MR_Word) &ll_backend__switch_gen_scalar_common_1[1], ll_backend__switch_gen__Cases0_6);
            }
            {
              mercury__list__sort_2_p_0(ll_backend__switch_gen__TypeInfo_9_65, ll_backend__switch_gen__CostedCases_61, &ll_backend__switch_gen__SortedCostedCases_62);
            }
            {
              mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__switch_gen__TypeCtorInfo_8_64, ll_backend__switch_gen__SortedCostedCases_62, ll_backend__switch_gen__Cases_7);
            }
          }
        }
      }
      else
      {
        MR_Word ll_backend__switch_gen__TypeCtorInfo_8_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
        MR_Word ll_backend__switch_gen__TypeInfo_9_75 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[0];
        MR_Word ll_backend__switch_gen__CostedCases_71;
        MR_Word ll_backend__switch_gen__SortedCostedCases_72;

        {
          ll_backend__switch_gen__CostedCases_71 = mercury__list__map_2_f_0(ll_backend__switch_gen__TypeCtorInfo_8_74, ll_backend__switch_gen__TypeInfo_9_75, (MR_Word) &ll_backend__switch_gen_scalar_common_1[2], ll_backend__switch_gen__Cases0_6);
        }
        {
          mercury__list__sort_2_p_0(ll_backend__switch_gen__TypeInfo_9_75, ll_backend__switch_gen__CostedCases_71, &ll_backend__switch_gen__SortedCostedCases_72);
        }
        {
          mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__switch_gen__TypeCtorInfo_8_74, ll_backend__switch_gen__SortedCostedCases_72, ll_backend__switch_gen__Cases_7);
        }
      }
    }
    else
    {
      {
        *ll_backend__switch_gen__Cases_7 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__switch_gen__CanSucceedCases_11, ll_backend__switch_gen__CannotSucceedCases_12);
      }
    }
  }
}

static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
  MR_Word * ll_backend__switch_gen__HeadVar__3_3)
{
  if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__switch_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word ll_backend__switch_gen__Case_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__switch_gen__Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__switch_gen__CanSucceedCases1_8;
    MR_Word ll_backend__switch_gen__CannotSucceedCases1_9;
    MR_Word ll_backend__switch_gen__Goal_13;
    MR_Word ll_backend__switch_gen__GoalInfo_15;
    MR_Word ll_backend__switch_gen__Detism_16;
    MR_Word ll_backend__switch_gen__SolnCount_18;
    MR_Word ll_backend__switch_gen__Var_10;
    MR_Word ll_backend__switch_gen__Var_11;
    MR_Word ll_backend__switch_gen__Var_12;
    MR_Word ll_backend__switch_gen__Var_14;
    MR_Word ll_backend__switch_gen___CanFail_17;

    {
      ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(ll_backend__switch_gen__Cases_5, &ll_backend__switch_gen__CanSucceedCases1_8, &ll_backend__switch_gen__CannotSucceedCases1_9);
    }
    ll_backend__switch_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 0)));
    ll_backend__switch_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 1)));
    ll_backend__switch_gen__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 2)));
    ll_backend__switch_gen__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Case_4, (MR_Integer) 3)));
    ll_backend__switch_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Goal_13, (MR_Integer) 0)));
    ll_backend__switch_gen__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__Goal_13, (MR_Integer) 1)));
    {
      ll_backend__switch_gen__Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__switch_gen__GoalInfo_15);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(ll_backend__switch_gen__Detism_16, &ll_backend__switch_gen___CanFail_17, &ll_backend__switch_gen__SolnCount_18);
    }
    switch (ll_backend__switch_gen__SolnCount_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__switch_gen__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__Case_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__CanSucceedCases1_8));
          }
          *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__CannotSucceedCases1_9;
        }
        break;
      case (MR_Integer) 0:
        {
          *ll_backend__switch_gen__HeadVar__2_2 = ll_backend__switch_gen__CanSucceedCases1_8;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__switch_gen__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__Case_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__CannotSucceedCases1_9));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(
  MR_Word ll_backend__switch_gen__HeadVar__1_1,
  MR_Word * ll_backend__switch_gen__HeadVar__2_2,
  MR_Word * ll_backend__switch_gen__HeadVar__3_3)
{
  if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *ll_backend__switch_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ll_backend__switch_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word ll_backend__switch_gen__TaggedCase_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__switch_gen__TaggedCases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__switch_gen__ReservedAddrCasesTail_8;
    MR_Word ll_backend__switch_gen__NonReservedAddrCasesTail_9;
    MR_Word ll_backend__switch_gen__TaggedConsId_16;
    MR_Word ll_backend__switch_gen__TaggedConsIds_17;
    MR_Word ll_backend__switch_gen__ConsTag_20;
    MR_Word ll_backend__switch_gen__HeadContains_21;
    MR_Word ll_backend__switch_gen__Var_12;
    MR_Word ll_backend__switch_gen__Var_13;
    MR_Word ll_backend__switch_gen__Var_19;

    {
      ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(ll_backend__switch_gen__TaggedCases_5, &ll_backend__switch_gen__ReservedAddrCasesTail_8, &ll_backend__switch_gen__NonReservedAddrCasesTail_9);
    }
    ll_backend__switch_gen__TaggedConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 0)));
    ll_backend__switch_gen__TaggedConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 1)));
    ll_backend__switch_gen__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 2)));
    ll_backend__switch_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedCase_4, (MR_Integer) 3)));
    ll_backend__switch_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_16, (MR_Integer) 0)));
    ll_backend__switch_gen__ConsTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_16, (MR_Integer) 1)));
    {
      ll_backend__switch_gen__HeadContains_21 = ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(ll_backend__switch_gen__ConsTag_20);
    }
    switch (ll_backend__switch_gen__HeadContains_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__switch_gen__ContainsReservedAddr_15;

          {
            ll_backend__switch_gen__ContainsReservedAddr_15 = ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(ll_backend__switch_gen__TaggedConsIds_17);
          }
          switch (ll_backend__switch_gen__ContainsReservedAddr_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *ll_backend__switch_gen__HeadVar__2_2 = ll_backend__switch_gen__ReservedAddrCasesTail_8;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__switch_gen__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__NonReservedAddrCasesTail_9));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__switch_gen__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__ReservedAddrCasesTail_8));
                }
                *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__NonReservedAddrCasesTail_9;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__switch_gen__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__switch_gen__TaggedCase_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__switch_gen__ReservedAddrCasesTail_8));
          }
          *ll_backend__switch_gen__HeadVar__3_3 = ll_backend__switch_gen__NonReservedAddrCasesTail_9;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(
  MR_Word ll_backend__switch_gen__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word ll_backend__switch_gen__HeadVar__2_2;

      if ((ll_backend__switch_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ll_backend__switch_gen__HeadVar__2_2 = (MR_Integer) 0;
      else
      {
        MR_Word ll_backend__switch_gen__TaggedConsId_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__switch_gen__TaggedConsIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__switch_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__switch_gen__ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_3, (MR_Integer) 1)));
        MR_Word ll_backend__switch_gen__HeadContains_8;
        MR_Word ll_backend__switch_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_gen__TaggedConsId_3, (MR_Integer) 0)));

        {
          ll_backend__switch_gen__HeadContains_8 = ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(ll_backend__switch_gen__ConsTag_7);
        }
        switch (ll_backend__switch_gen__HeadContains_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__switch_gen__next_value_of_HeadVar__1_1 = ll_backend__switch_gen__TaggedConsIds_4;

                ll_backend__switch_gen__HeadVar__1_1 = ll_backend__switch_gen__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            ll_backend__switch_gen__HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
      }
      return ll_backend__switch_gen__HeadVar__2_2;
    }
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(
  MR_Word ll_backend__switch_gen__ConsTag_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word ll_backend__switch_gen__IsReservedAddr_4;

      switch (MR_tag((MR_Word) ll_backend__switch_gen__ConsTag_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
            case (MR_Integer) 16:
              ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 0;
              break;
            case (MR_Integer) 7:
              {
                MR_Word ll_backend__switch_gen__SubConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 2)));
                MR_Integer ll_backend__switch_gen__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__switch_gen__ConsTag_3, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__switch_gen__next_value_of_ConsTag_3 = ll_backend__switch_gen__SubConsTag_7;

                  ll_backend__switch_gen__ConsTag_3 = ll_backend__switch_gen__next_value_of_ConsTag_3;
                }
                continue;
              }
              break;
            case (MR_Integer) 15:
              ll_backend__switch_gen__IsReservedAddr_4 = (MR_Integer) 1;
              break;
          }
          break;
      }
      return ll_backend__switch_gen__IsReservedAddr_4;
    }
    break;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__switch_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.switch_gen. */
