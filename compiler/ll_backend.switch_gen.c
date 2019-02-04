/*
** Automatically generated from `switch_gen.m'
** by the Mercury compiler,
** version rotd-2017-09-15
** configured for x86_64-pc-linux-gnu.
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


// :- module ll_backend.switch_gen.
// :- implementation.

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
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
  MR_Word TaggedCase_3);

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_13_p_0(
  MR_Word TaggedCases_14,
  MR_Word VarRval_15,
  MR_Word VarType_16,
  MR_String VarName_17,
  MR_Word CodeModel_18,
  MR_Word CanFail_19,
  MR_Word GoalInfo_20,
  MR_Word EndLabel_21,
  MR_Word * MaybeEnd_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35,
  MR_Word STATE_VARIABLE_CLD_0_36);

static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(
  MR_Word BranchStart_16,
  MR_Word Cases_17,
  MR_Word VarRval_18,
  MR_Word VarType_19,
  MR_String VarName_20,
  MR_Word CheaperTagTest_21,
  MR_Word CodeModel_22,
  MR_Word CanFail_23,
  MR_Word SwitchGoalInfo_24,
  MR_Word EndLabel_25,
  MR_Word STATE_VARIABLE_MaybeEnd_0_54,
  MR_Word * STATE_VARIABLE_MaybeEnd_55,
  MR_Word * Code_27,
  MR_Word STATE_VARIABLE_CI_0_56,
  MR_Word * STATE_VARIABLE_CI_57);

static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(
  MR_Word Cases0_6,
  MR_Word * Cases_7,
  MR_Word CodeModel_8,
  MR_Word CanFail_9,
  MR_Word CI_10);

static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(
  MR_Word ConsTag_3);


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
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__3_3;

    conv2_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
  MR_Word TaggedCase_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeCtorInfo_22_22;
    MR_Integer Cost_4;
    MR_Word MainTaggedConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_3, (MR_Integer) 0)));
    MR_Word OtherTaggedConsIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_3, (MR_Integer) 1)));
    MR_Word MainTag_9;
    MR_Integer MainCost_10;
    MR_Word OtherTags_11;
    MR_Word OtherCosts_12;
    MR_Word Var_16;
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_3, (MR_Integer) 3)));
    MR_Box conv3_Cost_4;

    MainTag_9 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(MainTaggedConsId_5);
    MainCost_10 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(MainTag_9);
    TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
    OtherTags_11 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, TypeCtorInfo_19_19, (MR_Word) &ll_backend__switch_gen_scalar_common_1[7], OtherTaggedConsIds_6);
    TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    OtherCosts_12 = mercury__list__map_2_f_0(TypeCtorInfo_19_19, TypeCtorInfo_22_22, (MR_Word) &ll_backend__switch_gen_scalar_common_1[8], OtherTags_11);
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MainCost_10));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (OtherCosts_12));
    }
    conv3_Cost_4 = mercury__list__foldl_3_f_0(TypeCtorInfo_22_22, TypeCtorInfo_22_22, (MR_Word) &ll_backend__switch_gen_scalar_common_1[9], Var_16, ((MR_Box) ((MR_Integer) 0)));
    Cost_4 = ((MR_Integer) conv3_Cost_4);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Cost_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (TaggedCase_3));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__2_2;

    backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) wrapper_arg_1), &conv2_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    backend_libs__switch_util__get_string_tag_2_p_0(((MR_Word) wrapper_arg_1), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    backend_libs__switch_util__get_int_tag_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0(
  MR_Word CodeModel_11,
  MR_Word SwitchVar_12,
  MR_Word CanFail_13,
  MR_Word Cases_14,
  MR_Word GoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_56,
  MR_Word * STATE_VARIABLE_CI_57,
  MR_Word STATE_VARIABLE_CLD_0_58,
  MR_Word * STATE_VARIABLE_CLD_59)
{
  {
    MR_bool succeeded;
    MR_Word StoreMap_19;
    MR_Word EndLabel_20;
    MR_Word ModuleInfo_21;
    MR_Word SwitchVarType_22;
    MR_Word TaggedCases0_23;
    MR_Word MaybeIntSwitchInfo_24;
    MR_Word TaggedCases_25;
    MR_String SwitchVarName_26;
    MR_Word SwitchVarCode_27;
    MR_Word SwitchVarRval_28;
    MR_Word SwitchCategory_29;
    MR_Word MayUseSmartIndexing_30;
    MR_Word MaybeEnd_31;
    MR_Word SwitchCode_32;
    MR_Word STATE_VARIABLE_CI_60_60;
    MR_Word STATE_VARIABLE_CLD_61_61;

    hlds__hlds_llds__goal_info_get_store_map_2_p_0(GoalInfo_15, &StoreMap_19);
    ll_backend__code_info__get_next_label_3_p_0(&EndLabel_20, STATE_VARIABLE_CI_0_56, &STATE_VARIABLE_CI_60_60);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_60_60, &ModuleInfo_21);
    SwitchVarType_22 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_60_60, SwitchVar_12);
    backend_libs__switch_util__tag_cases_5_p_0(ModuleInfo_21, SwitchVarType_22, Cases_14, &TaggedCases0_23, &MaybeIntSwitchInfo_24);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, TaggedCases0_23, &TaggedCases_25);
    SwitchVarName_26 = ll_backend__code_info__variable_name_2_f_0(STATE_VARIABLE_CI_60_60, SwitchVar_12);
    ll_backend__code_loc_dep__produce_variable_6_p_0(SwitchVar_12, &SwitchVarCode_27, &SwitchVarRval_28, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CLD_0_58, &STATE_VARIABLE_CLD_61_61);
    backend_libs__switch_util__find_switch_category_4_p_0(ModuleInfo_21, SwitchVarType_22, &SwitchCategory_29, &MayUseSmartIndexing_30);
    switch (MayUseSmartIndexing_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__switch_gen__order_and_generate_cases_13_p_0(TaggedCases_25, SwitchVarRval_28, SwitchVarType_22, SwitchVarName_26, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_61_61);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Globals_33;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_33);
          switch (SwitchCategory_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer NumConsIds_34;
                MR_Integer NumArms_35;
                MR_Word NeedBitVecCheck_44;
                MR_Word NeedRangeCheck_45;
                MR_Integer FirstVal_46;
                MR_Integer LastVal_47;
                MR_Word BranchStart_48;
                MR_Word MaybeEnd1_49;
                MR_Word LookupSwitchInfo_50;
                MR_Word STATE_VARIABLE_CI_92_92;
                MR_Word TypeCtorInfo_173_173;
                MR_Integer LowerLimit_36;
                MR_Integer UpperLimit_37;
                MR_Integer NumValues_38;
                MR_Word MaybeTraceInfo_39;
                MR_Integer LookupSize_40;
                MR_Integer ReqDensity_41;
                MR_Word FilteredTaggedCases_42;
                MR_Word FilteredCanFail_43;
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Word Var_87;
                MR_Integer Var_88;
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Word Var_91;

                backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(TaggedCases_25, &NumConsIds_34, &NumArms_35);
                succeeded = ((MR_tag((MR_Word) MaybeIntSwitchInfo_24)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  LowerLimit_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeIntSwitchInfo_24, (MR_Integer) 0)));
                  UpperLimit_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeIntSwitchInfo_24, (MR_Integer) 1)));
                  NumValues_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeIntSwitchInfo_24, (MR_Integer) 2)));
                  Var_85 = (MR_Integer) 457;
                  Var_86 = (MR_Integer) 1;
                  succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_33, Var_85, Var_86);
                  if (succeeded)
                  {
                    ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_60_60, &MaybeTraceInfo_39);
                    succeeded = (MaybeTraceInfo_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_87 = (MR_Integer) 444;
                      libs__globals__lookup_int_option_3_p_0(Globals_33, Var_87, &LookupSize_40);
                      succeeded = (NumConsIds_34 >= LookupSize_40);
                      if (succeeded)
                      {
                        Var_88 = (MR_Integer) 1;
                        succeeded = (NumArms_35 > Var_88);
                        if (succeeded)
                        {
                          Var_89 = (MR_Integer) 442;
                          libs__globals__lookup_int_option_3_p_0(Globals_33, Var_89, &ReqDensity_41);
                          backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(CodeModel_11, TaggedCases_25, &FilteredTaggedCases_42, CanFail_13, &FilteredCanFail_43);
                          succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ModuleInfo_21, SwitchVarType_22, FilteredCanFail_43, LowerLimit_36, UpperLimit_37, NumValues_38, ReqDensity_41, &NeedBitVecCheck_44, &NeedRangeCheck_45, &FirstVal_46, &LastVal_47);
                          if (succeeded)
                          {
                            ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_61_61, &BranchStart_48);
                            Var_90 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[4];
                            Var_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            TypeCtorInfo_173_173 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                            succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0(TypeCtorInfo_173_173, BranchStart_48, Var_90, FilteredTaggedCases_42, GoalInfo_15, StoreMap_19, Var_91, &MaybeEnd1_49, &LookupSwitchInfo_50, STATE_VARIABLE_CI_60_60, &STATE_VARIABLE_CI_92_92);
                          }
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_CLD_93_103;

                  ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_48, STATE_VARIABLE_CI_92_92, &STATE_VARIABLE_CLD_93_103);
                  ll_backend__lookup_switch__generate_int_lookup_switch_14_p_0(SwitchVarRval_28, LookupSwitchInfo_50, EndLabel_20, StoreMap_19, FirstVal_46, LastVal_47, NeedBitVecCheck_44, NeedRangeCheck_45, MaybeEnd1_49, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_92_92, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_93_103);
                }
                else
                {
                  MR_Word DenseSwitchInfo_52;
                  MR_Integer DenseSize_51;
                  MR_Word Var_95;
                  MR_Integer Var_96;
                  MR_Word Var_97;
                  MR_Integer LowerLimit_104;
                  MR_Integer UpperLimit_105;
                  MR_Integer NumValues_106;
                  MR_Integer ReqDensity_107;

                  succeeded = ((MR_tag((MR_Word) MaybeIntSwitchInfo_24)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    LowerLimit_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeIntSwitchInfo_24, (MR_Integer) 0)));
                    UpperLimit_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeIntSwitchInfo_24, (MR_Integer) 1)));
                    NumValues_106 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeIntSwitchInfo_24, (MR_Integer) 2)));
                    Var_95 = (MR_Integer) 443;
                    libs__globals__lookup_int_option_3_p_0(Globals_33, Var_95, &DenseSize_51);
                    succeeded = (NumConsIds_34 >= DenseSize_51);
                    if (succeeded)
                    {
                      Var_96 = (MR_Integer) 1;
                      succeeded = (NumArms_35 > Var_96);
                      if (succeeded)
                      {
                        Var_97 = (MR_Integer) 441;
                        libs__globals__lookup_int_option_3_p_0(Globals_33, Var_97, &ReqDensity_107);
                        succeeded = ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_p_0(STATE_VARIABLE_CI_60_60, SwitchVarType_22, TaggedCases_25, LowerLimit_104, UpperLimit_105, NumValues_106, ReqDensity_107, CanFail_13, &DenseSwitchInfo_52);
                      }
                    }
                  }
                  if (succeeded)
                  {
                    ll_backend__dense_switch__generate_dense_switch_13_p_0(TaggedCases_25, SwitchVarRval_28, SwitchVarName_26, CodeModel_11, GoalInfo_15, DenseSwitchInfo_52, EndLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_61_61);
                  }
                  else
                    ll_backend__switch_gen__order_and_generate_cases_13_p_0(TaggedCases_25, SwitchVarRval_28, SwitchVarType_22, SwitchVarName_26, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_61_61);
                }
              }
              break;
            case (MR_Integer) 3:
              ll_backend__switch_gen__order_and_generate_cases_13_p_0(TaggedCases_25, SwitchVarRval_28, SwitchVarType_22, SwitchVarName_26, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_61_61);
              break;
            case (MR_Integer) 1:
              {
                MR_Integer NumConsIds_154;
                MR_Integer NumArms_155;
                MR_Word FilteredTaggedCases_156;
                MR_Word FilteredCanFail_157;

                backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(CodeModel_11, TaggedCases_25, &FilteredTaggedCases_156, CanFail_13, &FilteredCanFail_157);
                backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(FilteredTaggedCases_156, &NumConsIds_154, &NumArms_155);
                succeeded = (NumArms_155 > (MR_Integer) 1);
                if (succeeded)
                {
                  MR_Integer StringHashSwitchSize_53;
                  MR_Integer StringBinarySwitchSize_54;

                  libs__globals__lookup_int_option_3_p_0(Globals_33, (MR_Integer) 446, &StringHashSwitchSize_53);
                  libs__globals__lookup_int_option_3_p_0(Globals_33, (MR_Integer) 447, &StringBinarySwitchSize_54);
                  succeeded = (NumConsIds_154 >= StringHashSwitchSize_53);
                  if (succeeded)
                  {
                    MR_Word STATE_VARIABLE_CI_73_73;
                    MR_Word BranchStart_123;
                    MR_Word MaybeEnd1_124;
                    MR_Word LookupSwitchInfo_125;

                    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_61_61, &BranchStart_123);
                    succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, BranchStart_123, (MR_Word) &ll_backend__switch_gen_scalar_common_1[5], FilteredTaggedCases_156, GoalInfo_15, StoreMap_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeEnd1_124, &LookupSwitchInfo_125, STATE_VARIABLE_CI_60_60, &STATE_VARIABLE_CI_73_73);
                    if (succeeded)
                    {
                      MR_Word STATE_VARIABLE_CLD_93_120;

                      ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_123, STATE_VARIABLE_CI_73_73, &STATE_VARIABLE_CLD_93_120);
                      ll_backend__string_switch__generate_string_hash_lookup_switch_11_p_0(SwitchVarRval_28, LookupSwitchInfo_125, FilteredCanFail_157, EndLabel_20, StoreMap_19, MaybeEnd1_124, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_73_73, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_93_120);
                    }
                    else
                      ll_backend__string_switch__generate_string_hash_switch_12_p_0(TaggedCases_25, SwitchVarRval_28, SwitchVarName_26, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_61_61);
                  }
                  else
                  {
                    succeeded = (NumConsIds_154 >= StringBinarySwitchSize_54);
                    if (succeeded)
                    {
                      MR_Word STATE_VARIABLE_CI_79_79;
                      MR_Word BranchStart_130;
                      MR_Word MaybeEnd1_131;
                      MR_Word LookupSwitchInfo_132;

                      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_61_61, &BranchStart_130);
                      succeeded = ll_backend__lookup_switch__is_lookup_switch_10_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, BranchStart_130, (MR_Word) &ll_backend__switch_gen_scalar_common_1[6], FilteredTaggedCases_156, GoalInfo_15, StoreMap_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeEnd1_131, &LookupSwitchInfo_132, STATE_VARIABLE_CI_60_60, &STATE_VARIABLE_CI_79_79);
                      if (succeeded)
                      {
                        MR_Word STATE_VARIABLE_CLD_93_127;

                        ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_130, STATE_VARIABLE_CI_79_79, &STATE_VARIABLE_CLD_93_127);
                        ll_backend__string_switch__generate_string_binary_lookup_switch_11_p_0(SwitchVarRval_28, LookupSwitchInfo_132, FilteredCanFail_157, EndLabel_20, StoreMap_19, MaybeEnd1_131, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_79_79, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_93_127);
                      }
                      else
                        ll_backend__string_switch__generate_string_binary_switch_12_p_0(TaggedCases_25, SwitchVarRval_28, SwitchVarName_26, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_61_61);
                    }
                    else
                      ll_backend__switch_gen__order_and_generate_cases_13_p_0(TaggedCases_25, SwitchVarRval_28, SwitchVarType_22, SwitchVarName_26, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_61_61);
                  }
                }
                else
                  ll_backend__switch_gen__order_and_generate_cases_13_p_0(TaggedCases_25, SwitchVarRval_28, SwitchVarType_22, SwitchVarName_26, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_61_61);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer TagSize_55;
                MR_Integer NumConsIds_163;
                MR_Integer NumArms_164;
                MR_Integer Var_64;

                backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(TaggedCases_25, &NumConsIds_163, &NumArms_164);
                libs__globals__lookup_int_option_3_p_0(Globals_33, (MR_Integer) 448, &TagSize_55);
                succeeded = (NumConsIds_163 >= TagSize_55);
                if (succeeded)
                {
                  Var_64 = (MR_Integer) 1;
                  succeeded = (NumArms_164 > Var_64);
                }
                if (succeeded)
                {
                  ll_backend__tag_switch__generate_tag_switch_14_p_0(TaggedCases_25, SwitchVarRval_28, SwitchVarType_22, SwitchVarName_26, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_61_61);
                }
                else
                  ll_backend__switch_gen__order_and_generate_cases_13_p_0(TaggedCases_25, SwitchVarRval_28, SwitchVarType_22, SwitchVarName_26, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_31, &SwitchCode_32, STATE_VARIABLE_CI_60_60, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_61_61);
              }
              break;
          }
        }
        break;
    }
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, SwitchVarCode_27, SwitchCode_32);
    ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_19, MaybeEnd_31, *STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_59);
  }
}

static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_13_p_0(
  MR_Word TaggedCases_14,
  MR_Word VarRval_15,
  MR_Word VarType_16,
  MR_String VarName_17,
  MR_Word CodeModel_18,
  MR_Word CanFail_19,
  MR_Word GoalInfo_20,
  MR_Word EndLabel_21,
  MR_Word * MaybeEnd_22,
  MR_Word * Code_23,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35,
  MR_Word STATE_VARIABLE_CLD_0_36)
{
  {
    MR_bool succeeded;
    MR_Word OrderedTaggedCases_26;
    MR_Word TypeCtor_27;
    MR_Word ModuleInfo_28;
    MR_Word TypeTable_29;
    MR_Word CheaperTagTest_32;
    MR_Word BranchStart_33;
    MR_Word VarTypeDefn_45;
    MR_Word VarTypeDefnBody_46;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word TypeDefn_30;

    succeeded = ll_backend__code_info__search_type_defn_3_p_0(STATE_VARIABLE_CI_0_34, VarType_16, &VarTypeDefn_45);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(VarTypeDefn_45, &VarTypeDefnBody_46);
      succeeded = ((MR_tag((MR_Word) VarTypeDefnBody_46)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarTypeDefnBody_46, (MR_Integer) 0)));
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarTypeDefnBody_46, (MR_Integer) 1)));
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarTypeDefnBody_46, (MR_Integer) 2)));
        Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarTypeDefnBody_46, (MR_Integer) 3)));
        Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarTypeDefnBody_46, (MR_Integer) 4)));
        Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarTypeDefnBody_46, (MR_Integer) 5)));
        Var_58 = ((((MR_Word) (MR_hl_field(MR_mktag(1), VarTypeDefnBody_46, (MR_Integer) 6)))) & (MR_Integer) 1);
        Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), VarTypeDefnBody_46, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarTypeDefnBody_46, (MR_Integer) 7)));
        succeeded = (Var_51 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word ReservedAddrCases0_47;
      MR_Word NonReservedAddrCases0_48;
      MR_Word ReservedAddrCases_49;
      MR_Word NonReservedAddrCases_50;

      ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(TaggedCases_14, &ReservedAddrCases0_47, &NonReservedAddrCases0_48);
      ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(ReservedAddrCases0_47, &ReservedAddrCases_49, CodeModel_18, CanFail_19, STATE_VARIABLE_CI_0_34);
      ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(NonReservedAddrCases0_48, &NonReservedAddrCases_50, CodeModel_18, CanFail_19, STATE_VARIABLE_CI_0_34);
      OrderedTaggedCases_26 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ReservedAddrCases_49, NonReservedAddrCases_50);
    }
    else
      ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(TaggedCases_14, &OrderedTaggedCases_26, CodeModel_18, CanFail_19, STATE_VARIABLE_CI_0_34);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_16, &TypeCtor_27);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_34, &ModuleInfo_28);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_28, &TypeTable_29);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_29, TypeCtor_27, &TypeDefn_30);
    if (succeeded)
    {
      MR_Word TypeBody_31;

      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_30, &TypeBody_31);
      CheaperTagTest_32 = hlds__hlds_data__get_maybe_cheaper_tag_test_1_f_0(TypeBody_31);
    }
    else
      CheaperTagTest_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_0_36, &BranchStart_33);
    ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(BranchStart_33, OrderedTaggedCases_26, VarRval_15, VarType_16, VarName_17, CheaperTagTest_32, CodeModel_18, CanFail_19, GoalInfo_20, EndLabel_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), MaybeEnd_22, Code_23, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
  }
}

static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) wrapper_arg_1), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(
  MR_Word BranchStart_16,
  MR_Word Cases_17,
  MR_Word VarRval_18,
  MR_Word VarType_19,
  MR_String VarName_20,
  MR_Word CheaperTagTest_21,
  MR_Word CodeModel_22,
  MR_Word CanFail_23,
  MR_Word SwitchGoalInfo_24,
  MR_Word EndLabel_25,
  MR_Word STATE_VARIABLE_MaybeEnd_0_54,
  MR_Word * STATE_VARIABLE_MaybeEnd_55,
  MR_Word * Code_27,
  MR_Word STATE_VARIABLE_CI_0_56,
  MR_Word * STATE_VARIABLE_CI_57)
{
  {
    MR_bool succeeded;

    if ((Cases_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_102_102;
      MR_Word FailCode_52;
      MR_Word EndCode_53;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_String Var_62;

      switch (CanFail_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_CLD_58_58;

            ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_16, STATE_VARIABLE_CI_0_56, &STATE_VARIABLE_CLD_58_58);
            ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_52, STATE_VARIABLE_CI_0_56, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_58_58);
          }
          break;
        case (MR_Integer) 1:
          {
            FailCode_52 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            *STATE_VARIABLE_CI_57 = STATE_VARIABLE_CI_0_56;
          }
          break;
      }
      TypeCtorInfo_102_102 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (EndLabel_25));
      }
      Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "end of the switch on ", VarName_20);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (Var_62));
      }
      EndCode_53 = mercury__cord__singleton_1_f_0(TypeCtorInfo_102_102, ((MR_Box) (Var_60)));
      *Code_27 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_102_102, FailCode_52, EndCode_53);
      *STATE_VARIABLE_MaybeEnd_55 = STATE_VARIABLE_MaybeEnd_0_54;
    }
    else
    {
      MR_Word TypeCtorInfo_100_100;
      MR_Word HeadCase_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cases_17, (MR_Integer) 0)));
      MR_Word TailCases_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cases_17, (MR_Integer) 1)));
      MR_Word MainTaggedConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadCase_29, (MR_Integer) 0)));
      MR_Word OtherTaggedConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadCase_29, (MR_Integer) 1)));
      MR_Word Goal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadCase_29, (MR_Integer) 3)));
      MR_Word StoreMap_35;
      MR_Word TestCode_39;
      MR_Word ElseCode_40;
      MR_Word TraceCode_47;
      MR_Word GoalCode_48;
      MR_Word SaveCode_49;
      MR_Word HeadCaseCode_50;
      MR_Word TailCasesCode_51;
      MR_Word STATE_VARIABLE_CI_65_65;
      MR_Word STATE_VARIABLE_CLD_81_81;
      MR_Word STATE_VARIABLE_CI_82_82;
      MR_Word STATE_VARIABLE_CLD_83_83;
      MR_Word STATE_VARIABLE_CI_84_84;
      MR_Word STATE_VARIABLE_CLD_85_85;
      MR_Word STATE_VARIABLE_MaybeEnd_86_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadCase_29, (MR_Integer) 2)));

      hlds__hlds_llds__goal_info_get_store_map_2_p_0(SwitchGoalInfo_24, &StoreMap_35);
      {
        MR_Word Var_36;
        MR_Word Var_37;

        succeeded = ((MR_tag((MR_Word) TailCases_30)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailCases_30, (MR_Integer) 0)));
          Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailCases_30, (MR_Integer) 1)));
        }
      }
      if (!(succeeded))
        succeeded = (CanFail_23 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word NextLabel_38;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_String Var_70;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;

        ll_backend__unify_gen__generate_raw_tag_test_case_11_p_0(VarRval_18, VarType_19, VarName_20, MainTaggedConsId_31, OtherTaggedConsIds_32, CheaperTagTest_21, (MR_Integer) 1, &NextLabel_38, &TestCode_39, STATE_VARIABLE_CI_0_56, &STATE_VARIABLE_CI_65_65);
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (EndLabel_25));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
        }
        Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "skip to the end of the switch on ", VarName_20);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (Var_70));
        }
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (NextLabel_38));
        }
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) ((MR_String) "next case"));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_72));
        }
        ElseCode_40 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, Var_66);
      }
      else
      {
        MR_Word TypeCtorInfo_99_99;
        MR_String MainConsName_41;
        MR_Word OtherConsNames_43;
        MR_String Comment_45;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_42;
        MR_Word Var_44;

        hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(MainTaggedConsId_31, &MainConsName_41, &Var_42);
        mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &ll_backend__switch_gen_scalar_common_1[3], OtherTaggedConsIds_32, &OtherConsNames_43, &Var_44);
        Comment_45 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(VarName_20, MainConsName_41, OtherConsNames_43);
        TypeCtorInfo_99_99 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Comment_45));
        }
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) ((MR_String) ""));
        }
        TestCode_39 = mercury__cord__singleton_1_f_0(TypeCtorInfo_99_99, ((MR_Box) (Var_78)));
        ElseCode_40 = mercury__cord__empty_0_f_0(TypeCtorInfo_99_99);
        STATE_VARIABLE_CI_65_65 = STATE_VARIABLE_CI_0_56;
      }
      ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_16, STATE_VARIABLE_CI_65_65, &STATE_VARIABLE_CLD_81_81);
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(Goal_34, SwitchGoalInfo_24, &TraceCode_47, STATE_VARIABLE_CI_65_65, &STATE_VARIABLE_CI_82_82, STATE_VARIABLE_CLD_81_81, &STATE_VARIABLE_CLD_83_83);
      ll_backend__code_gen__generate_goal_7_p_0(CodeModel_22, Goal_34, &GoalCode_48, STATE_VARIABLE_CI_82_82, &STATE_VARIABLE_CI_84_84, STATE_VARIABLE_CLD_83_83, &STATE_VARIABLE_CLD_85_85);
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(StoreMap_35, STATE_VARIABLE_MaybeEnd_0_54, &STATE_VARIABLE_MaybeEnd_86_86, &SaveCode_49, STATE_VARIABLE_CI_84_84, STATE_VARIABLE_CLD_85_85);
      TypeCtorInfo_100_100 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
      Var_89 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_100_100, SaveCode_49, ElseCode_40);
      Var_88 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_100_100, GoalCode_48, Var_89);
      Var_87 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_100_100, TraceCode_47, Var_88);
      HeadCaseCode_50 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_100_100, TestCode_39, Var_87);
      ll_backend__switch_gen__generate_if_then_else_chain_cases_15_p_0(BranchStart_16, TailCases_30, VarRval_18, VarType_19, VarName_20, CheaperTagTest_21, CodeModel_22, CanFail_23, SwitchGoalInfo_24, EndLabel_25, STATE_VARIABLE_MaybeEnd_86_86, STATE_VARIABLE_MaybeEnd_55, &TailCasesCode_51, STATE_VARIABLE_CI_84_84, STATE_VARIABLE_CI_57);
      *Code_27 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_100_100, HeadCaseCode_50, TailCasesCode_51);
    }
  }
}

static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_p_0(
  MR_Word Cases0_6,
  MR_Word * Cases_7,
  MR_Word CodeModel_8,
  MR_Word CanFail_9,
  MR_Word CI_10)
{
  {
    MR_bool succeeded;
    MR_Word CanSucceedCases_11;
    MR_Word CannotSucceedCases_12;

    ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(Cases0_6, &CanSucceedCases_11, &CannotSucceedCases_12);
    if ((CannotSucceedCases_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Case1_21;
      MR_Word Case2_22;
      MR_Word Goal1_26;
      MR_Word Goal2_30;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      succeeded = (CodeModel_8 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (CanFail_9 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Cases0_6)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Case1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cases0_6, (MR_Integer) 0)));
            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cases0_6, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Case2_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0)));
              Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1)));
              succeeded = (Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case1_21, (MR_Integer) 0)));
                Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case1_21, (MR_Integer) 1)));
                Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case1_21, (MR_Integer) 2)));
                Goal1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case1_21, (MR_Integer) 3)));
                Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case2_22, (MR_Integer) 0)));
                Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case2_22, (MR_Integer) 1)));
                Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case2_22, (MR_Integer) 2)));
                Goal2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case2_22, (MR_Integer) 3)));
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word ModuleInfo_31;
        MR_Word Globals_32;
        MR_Word PredId_33;
        MR_Integer ProcId_34;
        MR_Integer Min1_35;
        MR_Integer Max1_36;
        MR_Integer Min2_37;
        MR_Integer Max2_38;
        MR_Word BaseCase_39;
        MR_Word SingleRecCase_40;

        ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_31);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_31, &Globals_32);
        ll_backend__code_info__get_pred_id_2_p_0(CI_10, &PredId_33);
        ll_backend__code_info__get_proc_id_2_p_0(CI_10, &ProcId_34);
        hlds__goal_form__count_recursive_calls_5_p_0(Goal1_26, PredId_33, ProcId_34, &Min1_35, &Max1_36);
        hlds__goal_form__count_recursive_calls_5_p_0(Goal2_30, PredId_33, ProcId_34, &Min2_37, &Max2_38);
        succeeded = (Max1_36 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Min2_37 == (MR_Integer) 1);
        if (succeeded)
        {
          BaseCase_39 = Case1_21;
          SingleRecCase_40 = Case2_22;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Max2_38 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Min1_35 == (MR_Integer) 1);
            if (succeeded)
            {
              BaseCase_39 = Case2_22;
              SingleRecCase_40 = Case1_21;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
        {
          MR_Word SingleRecBaseFirst_41;

          libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 451, &SingleRecBaseFirst_41);
          switch (SingleRecBaseFirst_41) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_47;

                {
                  Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (SingleRecCase_40));
                  MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Cases_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BaseCase_39));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_47));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_49;

                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (BaseCase_39));
                  MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Cases_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SingleRecCase_40));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_49));
                }
              }
              break;
          }
        }
        else
        {
          MR_Word MultiRecCase_42;
          MR_Word BaseCase_58;
          MR_Integer Var_51;

          succeeded = (Max1_36 == (MR_Integer) 0);
          if (succeeded)
          {
            Var_51 = (MR_Integer) 1;
            succeeded = (Min2_37 > Var_51);
          }
          if (succeeded)
          {
            BaseCase_58 = Case1_21;
            MultiRecCase_42 = Case2_22;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Integer Var_52;

            succeeded = (Max2_38 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_52 = (MR_Integer) 1;
              succeeded = (Min1_35 > Var_52);
              if (succeeded)
              {
                BaseCase_58 = Case2_22;
                MultiRecCase_42 = Case1_21;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            MR_Word MultiRecBaseFirst_43;

            libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 452, &MultiRecBaseFirst_43);
            switch (MultiRecBaseFirst_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_54;

                  {
                    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (BaseCase_58));
                    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Cases_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MultiRecCase_42));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_54));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_56;

                  {
                    Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MultiRecCase_42));
                    MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Cases_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BaseCase_58));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_56));
                  }
                }
                break;
            }
          }
          else
          {
            MR_Word TypeCtorInfo_8_64 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
            MR_Word TypeInfo_9_65 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[0];
            MR_Word CostedCases_61;
            MR_Word SortedCostedCases_62;

            CostedCases_61 = mercury__list__map_2_f_0(TypeCtorInfo_8_64, TypeInfo_9_65, (MR_Word) &ll_backend__switch_gen_scalar_common_1[1], Cases0_6);
            mercury__list__sort_2_p_0(TypeInfo_9_65, CostedCases_61, &SortedCostedCases_62);
            mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_8_64, SortedCostedCases_62, Cases_7);
          }
        }
      }
      else
      {
        MR_Word TypeCtorInfo_8_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0;
        MR_Word TypeInfo_9_75 = (MR_Word) &ll_backend__switch_gen_scalar_common_1[0];
        MR_Word CostedCases_71;
        MR_Word SortedCostedCases_72;

        CostedCases_71 = mercury__list__map_2_f_0(TypeCtorInfo_8_74, TypeInfo_9_75, (MR_Word) &ll_backend__switch_gen_scalar_common_1[2], Cases0_6);
        mercury__list__sort_2_p_0(TypeInfo_9_75, CostedCases_71, &SortedCostedCases_72);
        mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_8_74, SortedCostedCases_72, Cases_7);
      }
    }
    else
    {
      *Cases_7 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, CanSucceedCases_11, CannotSucceedCases_12);
    }
  }
}

static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word Case_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word CanSucceedCases1_8;
    MR_Word CannotSucceedCases1_9;
    MR_Word Goal_13;
    MR_Word GoalInfo_15;
    MR_Word Detism_16;
    MR_Word SolnCount_18;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word _CanFail_17;

    ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(Cases_5, &CanSucceedCases1_8, &CannotSucceedCases1_9);
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 0)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 1)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 2)));
    Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_4, (MR_Integer) 3)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 0)));
    GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 1)));
    Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_15);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_16, &_CanFail_17, &SolnCount_18);
    switch (SolnCount_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CanSucceedCases1_8));
          }
          *HeadVar__3_3 = CannotSucceedCases1_9;
        }
        break;
      case (MR_Integer) 0:
        {
          *HeadVar__2_2 = CanSucceedCases1_8;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CannotSucceedCases1_9));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word TaggedCase_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word TaggedCases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ReservedAddrCasesTail_8;
    MR_Word NonReservedAddrCasesTail_9;
    MR_Word TaggedConsId_16;
    MR_Word TaggedConsIds_17;
    MR_Word ConsTag_20;
    MR_Word HeadContains_21;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_19;

    ll_backend__switch_gen__separate_reserved_address_cases_3_p_0(TaggedCases_5, &ReservedAddrCasesTail_8, &NonReservedAddrCasesTail_9);
    TaggedConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_4, (MR_Integer) 0)));
    TaggedConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_4, (MR_Integer) 1)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_4, (MR_Integer) 2)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedCase_4, (MR_Integer) 3)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_16, (MR_Integer) 0)));
    ConsTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_16, (MR_Integer) 1)));
    HeadContains_21 = ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(ConsTag_20);
    switch (HeadContains_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ContainsReservedAddr_15;

          ContainsReservedAddr_15 = ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(TaggedConsIds_17);
          switch (ContainsReservedAddr_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__2_2 = ReservedAddrCasesTail_8;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TaggedCase_4));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NonReservedAddrCasesTail_9));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TaggedCase_4));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ReservedAddrCasesTail_8));
                }
                *HeadVar__3_3 = NonReservedAddrCasesTail_9;
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
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TaggedCase_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ReservedAddrCasesTail_8));
          }
          *HeadVar__3_3 = NonReservedAddrCasesTail_9;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__switch_gen__list_contains_reserved_addr_tag_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word TaggedConsId_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word TaggedConsIds_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_3, (MR_Integer) 1)));
      MR_Word HeadContains_8;
      MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_3, (MR_Integer) 0)));

      HeadContains_8 = ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(ConsTag_7);
      switch (HeadContains_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = TaggedConsIds_4;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__switch_gen__is_reserved_addr_tag_1_f_0(
  MR_Word ConsTag_3)
{
  while (MR_TRUE)
  {
    MR_Word IsReservedAddr_4;

    // setup for tailcalls optimized into a loop
    switch (MR_tag((MR_Word) ConsTag_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IsReservedAddr_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        IsReservedAddr_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 0)))) {
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
            IsReservedAddr_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubConsTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 2)));
              MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1)));
              MR_Word next_value_of_ConsTag_3 = SubConsTag_7;

              // direct tailcall eliminated
              ConsTag_3 = next_value_of_ConsTag_3;
              continue;
            }
            break;
          case (MR_Integer) 15:
            IsReservedAddr_4 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return IsReservedAddr_4;
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

// :- end_module ll_backend.switch_gen.
