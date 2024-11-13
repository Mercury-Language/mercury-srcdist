/*
** Automatically generated from `switch_gen.m'
** by the Mercury compiler,
** version rotd-2024-11-13
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.lookup_switch_util.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
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
#include "ll_backend.lookup_util.mih"
#include "ll_backend.string_switch.mih"
#include "ll_backend.tag_switch.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen_test.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




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
ll_backend__switch_gen__generate_string_switch_14_p_0(
  MR_Word Globals_15,
  MR_Word SwitchVarRval_16,
  MR_Word SwitchVarType_17,
  MR_String SwitchVarName_18,
  MR_Word TaggedCases_19,
  MR_Word CodeModel_20,
  MR_Word CanFail_21,
  MR_Word GoalInfo_22,
  MR_Word EndLabel_23,
  MR_Word * MaybeEnd_24,
  MR_Word * SwitchCode_25,
  MR_Word STATE_VARIABLE_CI_0_32,
  MR_Word * STATE_VARIABLE_CI_33,
  MR_Word STATE_VARIABLE_CLD_0_34);

static MR_Box MR_CALL 
ll_backend__switch_gen__generate_smart_string_switch_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__switch_gen__generate_smart_string_switch_17_p_0(
  MR_Word Globals_18,
  MR_Word SwitchVarRval_19,
  MR_Word SwitchVarType_20,
  MR_String SwitchVarName_21,
  MR_Word TaggedCases_22,
  MR_Word FilteredTaggedCases_23,
  MR_Word CodeModel_24,
  MR_Word CanFail_25,
  MR_Word FilteredCanFail_26,
  MR_Integer NumConsIds_27,
  MR_Word GoalInfo_28,
  MR_Word EndLabel_29,
  MR_Word * MaybeEnd_30,
  MR_Word * SwitchCode_31,
  MR_Word STATE_VARIABLE_CI_0_40,
  MR_Word * STATE_VARIABLE_CI_41,
  MR_Word STATE_VARIABLE_CLD_0_42);

static MR_Box MR_CALL 
ll_backend__switch_gen__generate_int_switch_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__switch_gen__generate_int_switch_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word Globals_18,
  MR_Word SwitchVarRval_19,
  MR_Word SwitchVarType_20,
  MR_String SwitchVarName_21,
  MR_Word TaggedCases_22,
  MR_Word MaybeIntSwitchInfo_23,
  MR_Word CodeModel_24,
  MR_Word CanFail_25,
  MR_Word GoalInfo_26,
  MR_Word EndLabel_27,
  MR_Word * MaybeEnd_28,
  MR_Word * SwitchCode_29,
  MR_Word STATE_VARIABLE_CI_0_52,
  MR_Word * STATE_VARIABLE_CI_53,
  MR_Word STATE_VARIABLE_CLD_0_54);

static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_13_p_0(
  MR_Word VarRval_14,
  MR_Word VarType_15,
  MR_String VarName_16,
  MR_Word TaggedCases_17,
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
ll_backend__switch_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_102_95_116_104_101_110_95_101_108_115_101_95_99_104_97_105_110_95_99_97_115_101_115_95_95_91_51_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__switch_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_102_95_116_104_101_110_95_101_108_115_101_95_99_104_97_105_110_95_99_97_115_101_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word CheaperTagTest_16,
  MR_Word VarRval_17,
  MR_String VarName_19,
  MR_Word Cases_20,
  MR_Word CodeModel_21,
  MR_Word CanFail_22,
  MR_Word SwitchGoalInfo_23,
  MR_Word BranchStart_24,
  MR_Word EndLabel_25,
  MR_Word STATE_VARIABLE_MaybeEnd_0_54,
  MR_Word * STATE_VARIABLE_MaybeEnd_55,
  MR_Word * Code_27,
  MR_Word STATE_VARIABLE_CI_0_56,
  MR_Word * STATE_VARIABLE_CI_57);

static void MR_CALL 
ll_backend__switch_gen__order_recursive_cases_5_p_0(
  MR_Word Cases0_6,
  MR_Word * Cases_7,
  MR_Word CodeModel_8,
  MR_Word CanFail_9,
  MR_Word CI_10);

static MR_Box MR_CALL 
ll_backend__switch_gen__order_tag_test_cost_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__switch_gen__order_tag_test_cost_2_p_0(
  MR_Word Cases0_3,
  MR_Word * Cases_4);

static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);


static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_1[8][3];

static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_2[4][5];

static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_3[2][6];




static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[0])),
    ((MR_Box) (ll_backend__switch_gen__order_tag_test_cost_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_3[0])),
    ((MR_Box) (ll_backend__switch_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_102_95_116_104_101_110_95_101_108_115_101_95_99_104_97_105_110_95_99_97_115_101_115_95_95_91_51_93_95_48_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[1])),
    ((MR_Box) (ll_backend__switch_gen__generate_int_switch_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[2])),
    ((MR_Box) (ll_backend__switch_gen__generate_smart_string_switch_17_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[3])),
    ((MR_Box) (ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_2[1])),
    ((MR_Box) (ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__switch_gen_scalar_common_3[1])),
    ((MR_Box) (ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_2[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
};

static /* final */ const MR_Box ll_backend__switch_gen_scalar_common_3[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)
  }
};

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(
  MR_Word TaggedCase_3)
{
  MR_Word HeadVar__2_2;
  MR_Integer Cost_4;
  MR_Word MainTaggedConsId_5 = ((MR_Word) ((MR_hl_field(0, TaggedCase_3, (MR_Integer) 0))));
  MR_Word OtherTaggedConsIds_6 = ((MR_Word) ((MR_hl_field(0, TaggedCase_3, (MR_Integer) 1))));
  MR_Word MainTag_9;
  MR_Integer MainCost_10;
  MR_Word OtherTags_11;
  MR_Word OtherCosts_12;
  MR_Word Var_16;
  MR_Box conv3_Cost_4;

  MainTag_9 = hlds__hlds_data__project_tagged_cons_id_tag_1_f_0(MainTaggedConsId_5);
  MainCost_10 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(MainTag_9);
  OtherTags_11 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__switch_gen_scalar_common_1[5]), OtherTaggedConsIds_6);
  OtherCosts_12 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__switch_gen_scalar_common_1[6]), OtherTags_11);
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MainCost_10));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (OtherCosts_12));
  }
  conv3_Cost_4 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__switch_gen_scalar_common_1[7]), Var_16, ((MR_Box) ((MR_Integer) 0)));
  Cost_4 = ((MR_Integer) (conv3_Cost_4));
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Cost_4));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (TaggedCase_3));
  }
  return HeadVar__2_2;
}

void MR_CALL 
ll_backend__switch_gen__generate_switch_10_p_0(
  MR_Word CodeModel_11,
  MR_Word SwitchVar_12,
  MR_Word CanFail_13,
  MR_Word Cases_14,
  MR_Word GoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_39,
  MR_Word * STATE_VARIABLE_CI_40,
  MR_Word STATE_VARIABLE_CLD_0_41,
  MR_Word * STATE_VARIABLE_CLD_42)
{
  MR_bool succeeded;
  MR_Word StoreMap_19;
  MR_Word EndLabel_20;
  MR_Word ModuleInfo_21;
  MR_Word VarTable_22;
  MR_Word SwitchVarEntry_23;
  MR_Word SwitchVarType_24;
  MR_String SwitchVarName_25;
  MR_Word TaggedCases0_26;
  MR_Word MaybeIntSwitchInfo_27;
  MR_Word TaggedCases_28;
  MR_Word SwitchVarCode_29;
  MR_Word SwitchVarRval_30;
  MR_Word SwitchCategory_31;
  MR_Word MaybeEnd_32;
  MR_Word SwitchCode_33;
  MR_Word STATE_VARIABLE_CI_43_43;
  MR_Word STATE_VARIABLE_CLD_44_44;

  hlds__hlds_llds__goal_info_get_store_map_2_p_0(GoalInfo_15, &StoreMap_19);
  ll_backend__code_info__get_next_label_3_p_0(&EndLabel_20, STATE_VARIABLE_CI_0_39, &STATE_VARIABLE_CI_43_43);
  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_43_43, &ModuleInfo_21);
  ll_backend__code_info__get_var_table_2_p_0(STATE_VARIABLE_CI_43_43, &VarTable_22);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_22, SwitchVar_12, &SwitchVarEntry_23);
  SwitchVarType_24 = ((MR_Word) ((MR_hl_field(0, SwitchVarEntry_23, (MR_Integer) 1))));
  SwitchVarName_25 = parse_tree__var_table__var_entry_name_2_f_0(SwitchVar_12, SwitchVarEntry_23);
  backend_libs__switch_util__tag_cases_5_p_0(ModuleInfo_21, SwitchVarType_24, Cases_14, &TaggedCases0_26, &MaybeIntSwitchInfo_27);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), TaggedCases0_26, &TaggedCases_28);
  ll_backend__code_loc_dep__produce_variable_5_p_0(SwitchVar_12, &SwitchVarCode_29, &SwitchVarRval_30, STATE_VARIABLE_CLD_0_41, &STATE_VARIABLE_CLD_44_44);
  backend_libs__switch_util__find_switch_category_3_p_0(ModuleInfo_21, SwitchVarType_24, &SwitchCategory_31);
  switch (SwitchCategory_31) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
    case (MR_Integer) 0:
      ll_backend__switch_gen__order_and_generate_cases_13_p_0(SwitchVarRval_30, SwitchVarType_24, SwitchVarName_25, TaggedCases_28, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_32, &SwitchCode_33, STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CI_40, STATE_VARIABLE_CLD_44_44);
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word Globals_34;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_34);
        ll_backend__switch_gen__generate_int_switch_16_p_0(ModuleInfo_21, Globals_34, SwitchVarRval_30, SwitchVarType_24, SwitchVarName_25, TaggedCases_28, MaybeIntSwitchInfo_27, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_32, &SwitchCode_33, STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CI_40, STATE_VARIABLE_CLD_44_44);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Globals_53;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_53);
        ll_backend__switch_gen__generate_string_switch_14_p_0(Globals_53, SwitchVarRval_30, SwitchVarType_24, SwitchVarName_25, TaggedCases_28, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_32, &SwitchCode_33, STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CI_40, STATE_VARIABLE_CLD_44_44);
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Integer NumConsIds_35;
        MR_Integer NumArms_36;
        MR_Word OptTuple_37;
        MR_Integer TagSize_38;
        MR_Word Globals_54;
        MR_Integer Var_48;

        backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(TaggedCases_28, &NumConsIds_35, &NumArms_36);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_54);
        libs__globals__get_opt_tuple_2_p_0(Globals_54, &OptTuple_37);
        TagSize_38 = ((MR_Integer) ((MR_hl_field(0, OptTuple_37, (MR_Integer) 33))));
        succeeded = (NumConsIds_35 >= TagSize_38);
        if (succeeded)
        {
          Var_48 = (MR_Integer) 1;
          succeeded = (NumArms_36 > Var_48);
        }
        if (succeeded)
          ll_backend__tag_switch__generate_tag_switch_14_p_0(SwitchVarRval_30, SwitchVarType_24, SwitchVarName_25, TaggedCases_28, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, (MR_Word) ((MR_Unsigned) 0U), &MaybeEnd_32, &SwitchCode_33, STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CI_40, STATE_VARIABLE_CLD_44_44);
        else
          ll_backend__switch_gen__order_and_generate_cases_13_p_0(SwitchVarRval_30, SwitchVarType_24, SwitchVarName_25, TaggedCases_28, CodeModel_11, CanFail_13, GoalInfo_15, EndLabel_20, &MaybeEnd_32, &SwitchCode_33, STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CI_40, STATE_VARIABLE_CLD_44_44);
      }
      break;
  }
  *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SwitchVarCode_29, SwitchCode_33);
  ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_19, MaybeEnd_32, *STATE_VARIABLE_CI_40, STATE_VARIABLE_CLD_42);
}

static void MR_CALL 
ll_backend__switch_gen__generate_string_switch_14_p_0(
  MR_Word Globals_15,
  MR_Word SwitchVarRval_16,
  MR_Word SwitchVarType_17,
  MR_String SwitchVarName_18,
  MR_Word TaggedCases_19,
  MR_Word CodeModel_20,
  MR_Word CanFail_21,
  MR_Word GoalInfo_22,
  MR_Word EndLabel_23,
  MR_Word * MaybeEnd_24,
  MR_Word * SwitchCode_25,
  MR_Word STATE_VARIABLE_CI_0_32,
  MR_Word * STATE_VARIABLE_CI_33,
  MR_Word STATE_VARIABLE_CLD_0_34)
{
  MR_bool succeeded;
  MR_Word FilteredTaggedCases_28;
  MR_Word FilteredCanFail_29;
  MR_Integer NumConsIds_30;
  MR_Integer NumArms_31;

  backend_libs__lookup_switch_util__filter_out_failing_cases_if_needed_5_p_0(CodeModel_20, TaggedCases_19, &FilteredTaggedCases_28, CanFail_21, &FilteredCanFail_29);
  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(FilteredTaggedCases_28, &NumConsIds_30, &NumArms_31);
  succeeded = (NumArms_31 < (MR_Integer) 2);
  if (succeeded)
  {
    MR_Word OrderedTaggedCases_36;
    MR_Word TypeCtor_37;
    MR_Word ModuleInfo_38;
    MR_Word TypeTable_39;
    MR_Word CheaperTagTest_42;
    MR_Word BranchStart_43;
    MR_Word CanSucceedCases_45;
    MR_Word CannotSucceedCases_46;
    MR_Word TypeDefn_40;

    ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(TaggedCases_19, &CanSucceedCases_45, &CannotSucceedCases_46);
    if ((CannotSucceedCases_46 == (MR_Word) ((MR_Unsigned) 0U)))
      ll_backend__switch_gen__order_recursive_cases_5_p_0(TaggedCases_19, &OrderedTaggedCases_36, CodeModel_20, CanFail_21, STATE_VARIABLE_CI_0_32);
    else
      OrderedTaggedCases_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), CanSucceedCases_45, CannotSucceedCases_46);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(SwitchVarType_17, &TypeCtor_37);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_32, &ModuleInfo_38);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_38, &TypeTable_39);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_39, TypeCtor_37, &TypeDefn_40);
    if (succeeded)
    {
      MR_Word TypeBody_41;

      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_40, &TypeBody_41);
      CheaperTagTest_42 = hlds__hlds_data__get_maybe_cheaper_tag_test_1_f_0(TypeBody_41);
    }
    else
      CheaperTagTest_42 = (MR_Word) ((MR_Unsigned) 0U);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_0_34, &BranchStart_43);
    ll_backend__switch_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_102_95_116_104_101_110_95_101_108_115_101_95_99_104_97_105_110_95_99_97_115_101_115_95_95_91_51_93_95_48_15_p_0(CheaperTagTest_42, SwitchVarRval_16, SwitchVarName_18, OrderedTaggedCases_36, CodeModel_20, CanFail_21, GoalInfo_22, BranchStart_43, EndLabel_23, (MR_Word) ((MR_Unsigned) 0U), MaybeEnd_24, SwitchCode_25, STATE_VARIABLE_CI_0_32, STATE_VARIABLE_CI_33);
  }
  else
    ll_backend__switch_gen__generate_smart_string_switch_17_p_0(Globals_15, SwitchVarRval_16, SwitchVarType_17, SwitchVarName_18, TaggedCases_19, FilteredTaggedCases_28, CodeModel_20, CanFail_21, FilteredCanFail_29, NumConsIds_30, GoalInfo_22, EndLabel_23, MaybeEnd_24, SwitchCode_25, STATE_VARIABLE_CI_0_32, STATE_VARIABLE_CI_33, STATE_VARIABLE_CLD_0_34);
}

static MR_Box MR_CALL 
ll_backend__switch_gen__generate_smart_string_switch_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__lookup_switch_util__get_string_tag_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__switch_gen__generate_smart_string_switch_17_p_0(
  MR_Word Globals_18,
  MR_Word SwitchVarRval_19,
  MR_Word SwitchVarType_20,
  MR_String SwitchVarName_21,
  MR_Word TaggedCases_22,
  MR_Word FilteredTaggedCases_23,
  MR_Word CodeModel_24,
  MR_Word CanFail_25,
  MR_Word FilteredCanFail_26,
  MR_Integer NumConsIds_27,
  MR_Word GoalInfo_28,
  MR_Word EndLabel_29,
  MR_Word * MaybeEnd_30,
  MR_Word * SwitchCode_31,
  MR_Word STATE_VARIABLE_CI_0_40,
  MR_Word * STATE_VARIABLE_CI_41,
  MR_Word STATE_VARIABLE_CLD_0_42)
{
  MR_bool succeeded;
  MR_Word MaybeLookupSwitchInfo_34;
  MR_Word OptTuple_35;
  MR_Integer StringTrieSwitchSize_36;
  MR_Word Var_44;

  ll_backend__lookup_switch__is_lookup_switch_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__switch_gen_scalar_common_1[4]), FilteredTaggedCases_23, GoalInfo_28, STATE_VARIABLE_CI_0_40, STATE_VARIABLE_CLD_0_42, &MaybeLookupSwitchInfo_34);
  libs__globals__get_opt_tuple_2_p_0(Globals_18, &OptTuple_35);
  Var_44 = mercury__string__internal_string_encoding_0_f_0();
  succeeded = (Var_44 == (MR_Integer) 0);
  if (succeeded)
  {
    StringTrieSwitchSize_36 = ((MR_Integer) ((MR_hl_field(0, OptTuple_35, (MR_Integer) 30))));
    succeeded = (NumConsIds_27 >= StringTrieSwitchSize_36);
  }
  if (succeeded)
    if ((MaybeLookupSwitchInfo_34 == (MR_Word) ((MR_Unsigned) 0U)))
      ll_backend__string_switch__generate_string_trie_jump_switch_12_p_0(SwitchVarRval_19, SwitchVarName_21, TaggedCases_22, CodeModel_24, CanFail_25, GoalInfo_28, EndLabel_29, MaybeEnd_30, SwitchCode_31, STATE_VARIABLE_CI_0_40, STATE_VARIABLE_CI_41, STATE_VARIABLE_CLD_0_42);
    else
    {
      MR_Word LookupSwitchInfo_37 = ((MR_Word) ((MR_hl_field(1, MaybeLookupSwitchInfo_34, (MR_Integer) 0))));

      ll_backend__string_switch__generate_string_trie_lookup_switch_7_p_0(SwitchVarRval_19, LookupSwitchInfo_37, FilteredCanFail_26, EndLabel_29, MaybeEnd_30, SwitchCode_31, STATE_VARIABLE_CI_41);
    }
  else
  {
    MR_Integer StringHashSwitchSize_38 = ((MR_Integer) ((MR_hl_field(0, OptTuple_35, (MR_Integer) 31))));

    succeeded = (NumConsIds_27 >= StringHashSwitchSize_38);
    if (succeeded)
      if ((MaybeLookupSwitchInfo_34 == (MR_Word) ((MR_Unsigned) 0U)))
        ll_backend__string_switch__generate_string_hash_jump_switch_12_p_0(SwitchVarRval_19, SwitchVarName_21, TaggedCases_22, CodeModel_24, CanFail_25, GoalInfo_28, EndLabel_29, MaybeEnd_30, SwitchCode_31, STATE_VARIABLE_CI_0_40, STATE_VARIABLE_CI_41, STATE_VARIABLE_CLD_0_42);
      else
      {
        MR_Word LookupSwitchInfo_52 = ((MR_Word) ((MR_hl_field(1, MaybeLookupSwitchInfo_34, (MR_Integer) 0))));

        ll_backend__string_switch__generate_string_hash_lookup_switch_7_p_0(SwitchVarRval_19, LookupSwitchInfo_52, FilteredCanFail_26, EndLabel_29, MaybeEnd_30, SwitchCode_31, STATE_VARIABLE_CI_41);
      }
    else
    {
      MR_Integer StringBinarySwitchSize_39 = ((MR_Integer) ((MR_hl_field(0, OptTuple_35, (MR_Integer) 32))));

      succeeded = (NumConsIds_27 >= StringBinarySwitchSize_39);
      if (succeeded)
        if ((MaybeLookupSwitchInfo_34 == (MR_Word) ((MR_Unsigned) 0U)))
          ll_backend__string_switch__generate_string_binary_jump_switch_12_p_0(SwitchVarRval_19, SwitchVarName_21, TaggedCases_22, CodeModel_24, CanFail_25, GoalInfo_28, EndLabel_29, MaybeEnd_30, SwitchCode_31, STATE_VARIABLE_CI_0_40, STATE_VARIABLE_CI_41, STATE_VARIABLE_CLD_0_42);
        else
        {
          MR_Word LookupSwitchInfo_54 = ((MR_Word) ((MR_hl_field(1, MaybeLookupSwitchInfo_34, (MR_Integer) 0))));

          ll_backend__string_switch__generate_string_binary_lookup_switch_7_p_0(SwitchVarRval_19, LookupSwitchInfo_54, FilteredCanFail_26, EndLabel_29, MaybeEnd_30, SwitchCode_31, STATE_VARIABLE_CI_41);
        }
      else
        ll_backend__switch_gen__order_and_generate_cases_13_p_0(SwitchVarRval_19, SwitchVarType_20, SwitchVarName_21, TaggedCases_22, CodeModel_24, CanFail_25, GoalInfo_28, EndLabel_29, MaybeEnd_30, SwitchCode_31, STATE_VARIABLE_CI_0_40, STATE_VARIABLE_CI_41, STATE_VARIABLE_CLD_0_42);
    }
  }
}

static MR_Box MR_CALL 
ll_backend__switch_gen__generate_int_switch_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__lookup_switch_util__get_int_tag_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__switch_gen__generate_int_switch_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word Globals_18,
  MR_Word SwitchVarRval_19,
  MR_Word SwitchVarType_20,
  MR_String SwitchVarName_21,
  MR_Word TaggedCases_22,
  MR_Word MaybeIntSwitchInfo_23,
  MR_Word CodeModel_24,
  MR_Word CanFail_25,
  MR_Word GoalInfo_26,
  MR_Word EndLabel_27,
  MR_Word * MaybeEnd_28,
  MR_Word * SwitchCode_29,
  MR_Word STATE_VARIABLE_CI_0_52,
  MR_Word * STATE_VARIABLE_CI_53,
  MR_Word STATE_VARIABLE_CLD_0_54)
{
  MR_bool succeeded;
  MR_Integer NumConsIds_32;
  MR_Integer NumArms_33;
  MR_Word NeedBitVecCheck_44;
  MR_Word NeedRangeCheck_45;
  MR_Integer FirstVal_46;
  MR_Integer LastVal_47;
  MR_Word LookupSwitchInfo_49;
  MR_Word TypeCtorInfo_691_691;
  MR_Word IntSwitchInfo_34;
  MR_Integer LowerLimit_35;
  MR_Integer UpperLimit_36;
  MR_Integer NumValues_37;
  MR_Word OptTuple_38;
  MR_Word MaybeTraceInfo_39;
  MR_Integer LookupSize_40;
  MR_Integer ReqDensity_41;
  MR_Word FilteredTaggedCases_42;
  MR_Word FilteredCanFail_43;
  MR_Word MaybeLookupSwitchInfo_48;
  MR_Word Var_55;
  MR_Integer Var_56;
  MR_Word Var_57;

  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(TaggedCases_22, &NumConsIds_32, &NumArms_33);
  succeeded = ((MR_tag((MR_Word) MaybeIntSwitchInfo_23)) == (MR_Integer) 1);
  if (succeeded)
  {
    IntSwitchInfo_34 = ((MR_Word) ((MR_hl_field(1, MaybeIntSwitchInfo_23, (MR_Integer) 0))));
    LowerLimit_35 = ((MR_Integer) ((MR_hl_field(0, IntSwitchInfo_34, (MR_Integer) 0))));
    UpperLimit_36 = ((MR_Integer) ((MR_hl_field(0, IntSwitchInfo_34, (MR_Integer) 1))));
    NumValues_37 = ((MR_Integer) ((MR_hl_field(0, IntSwitchInfo_34, (MR_Integer) 2))));
    libs__globals__get_opt_tuple_2_p_0(Globals_18, &OptTuple_38);
    Var_55 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_38, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
    succeeded = (Var_55 == (MR_Integer) 0);
    if (succeeded)
    {
      ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_0_52, &MaybeTraceInfo_39);
      succeeded = (MaybeTraceInfo_39 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ReqDensity_41 = ((MR_Integer) ((MR_hl_field(0, OptTuple_38, (MR_Integer) 27))));
        LookupSize_40 = ((MR_Integer) ((MR_hl_field(0, OptTuple_38, (MR_Integer) 29))));
        succeeded = (NumConsIds_32 >= LookupSize_40);
        if (succeeded)
        {
          Var_56 = (MR_Integer) 1;
          succeeded = (NumArms_33 > Var_56);
          if (succeeded)
          {
            backend_libs__lookup_switch_util__filter_out_failing_cases_if_needed_5_p_0(CodeModel_24, TaggedCases_22, &FilteredTaggedCases_42, CanFail_25, &FilteredCanFail_43);
            succeeded = backend_libs__lookup_switch_util__find_int_lookup_switch_params_11_p_0(ModuleInfo_17, SwitchVarType_20, FilteredCanFail_43, LowerLimit_35, UpperLimit_36, NumValues_37, ReqDensity_41, &NeedBitVecCheck_44, &NeedRangeCheck_45, &FirstVal_46, &LastVal_47);
            if (succeeded)
            {
              Var_57 = (MR_Word) (&ll_backend__switch_gen_scalar_common_1[3]);
              TypeCtorInfo_691_691 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
              ll_backend__lookup_switch__is_lookup_switch_6_p_0(TypeCtorInfo_691_691, Var_57, FilteredTaggedCases_42, GoalInfo_26, STATE_VARIABLE_CI_0_52, STATE_VARIABLE_CLD_0_54, &MaybeLookupSwitchInfo_48);
              succeeded = (MaybeLookupSwitchInfo_48 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                LookupSwitchInfo_49 = ((MR_Word) ((MR_hl_field(1, MaybeLookupSwitchInfo_48, (MR_Integer) 0))));
            }
          }
        }
      }
    }
  }
  if (succeeded)
    ll_backend__lookup_switch__generate_int_lookup_switch_10_p_0(SwitchVarRval_19, LookupSwitchInfo_49, EndLabel_27, FirstVal_46, LastVal_47, NeedBitVecCheck_44, NeedRangeCheck_45, MaybeEnd_28, SwitchCode_29, STATE_VARIABLE_CI_53);
  else
  {
    MR_Word DenseSwitchInfo_51;
    MR_Integer DenseSize_50;
    MR_Integer Var_59;
    MR_Word IntSwitchInfo_63;
    MR_Integer LowerLimit_64;
    MR_Integer UpperLimit_65;
    MR_Integer NumValues_66;
    MR_Word OptTuple_67;
    MR_Integer ReqDensity_68;

    succeeded = ((MR_tag((MR_Word) MaybeIntSwitchInfo_23)) == (MR_Integer) 1);
    if (succeeded)
    {
      IntSwitchInfo_63 = ((MR_Word) ((MR_hl_field(1, MaybeIntSwitchInfo_23, (MR_Integer) 0))));
      LowerLimit_64 = ((MR_Integer) ((MR_hl_field(0, IntSwitchInfo_63, (MR_Integer) 0))));
      UpperLimit_65 = ((MR_Integer) ((MR_hl_field(0, IntSwitchInfo_63, (MR_Integer) 1))));
      NumValues_66 = ((MR_Integer) ((MR_hl_field(0, IntSwitchInfo_63, (MR_Integer) 2))));
      libs__globals__get_opt_tuple_2_p_0(Globals_18, &OptTuple_67);
      ReqDensity_68 = ((MR_Integer) ((MR_hl_field(0, OptTuple_67, (MR_Integer) 26))));
      DenseSize_50 = ((MR_Integer) ((MR_hl_field(0, OptTuple_67, (MR_Integer) 28))));
      succeeded = (NumConsIds_32 >= DenseSize_50);
      if (succeeded)
      {
        Var_59 = (MR_Integer) 1;
        succeeded = (NumArms_33 > Var_59);
        if (succeeded)
          succeeded = ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_p_0(STATE_VARIABLE_CI_0_52, SwitchVarType_20, TaggedCases_22, LowerLimit_64, UpperLimit_65, NumValues_66, ReqDensity_68, CanFail_25, &DenseSwitchInfo_51);
      }
    }
    if (succeeded)
      ll_backend__dense_switch__generate_dense_switch_13_p_0(TaggedCases_22, SwitchVarRval_19, SwitchVarName_21, CodeModel_24, GoalInfo_26, DenseSwitchInfo_51, EndLabel_27, (MR_Word) ((MR_Unsigned) 0U), MaybeEnd_28, SwitchCode_29, STATE_VARIABLE_CI_0_52, STATE_VARIABLE_CI_53, STATE_VARIABLE_CLD_0_54);
    else
      ll_backend__switch_gen__order_and_generate_cases_13_p_0(SwitchVarRval_19, SwitchVarType_20, SwitchVarName_21, TaggedCases_22, CodeModel_24, CanFail_25, GoalInfo_26, EndLabel_27, MaybeEnd_28, SwitchCode_29, STATE_VARIABLE_CI_0_52, STATE_VARIABLE_CI_53, STATE_VARIABLE_CLD_0_54);
  }
}

static void MR_CALL 
ll_backend__switch_gen__order_and_generate_cases_13_p_0(
  MR_Word VarRval_14,
  MR_Word VarType_15,
  MR_String VarName_16,
  MR_Word TaggedCases_17,
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
  MR_bool succeeded;
  MR_Word OrderedTaggedCases_26;
  MR_Word TypeCtor_27;
  MR_Word ModuleInfo_28;
  MR_Word TypeTable_29;
  MR_Word CheaperTagTest_32;
  MR_Word BranchStart_33;
  MR_Word CanSucceedCases_38;
  MR_Word CannotSucceedCases_39;
  MR_Word TypeDefn_30;

  ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(TaggedCases_17, &CanSucceedCases_38, &CannotSucceedCases_39);
  if ((CannotSucceedCases_39 == (MR_Word) ((MR_Unsigned) 0U)))
    ll_backend__switch_gen__order_recursive_cases_5_p_0(TaggedCases_17, &OrderedTaggedCases_26, CodeModel_18, CanFail_19, STATE_VARIABLE_CI_0_34);
  else
    OrderedTaggedCases_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), CanSucceedCases_38, CannotSucceedCases_39);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_15, &TypeCtor_27);
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
    CheaperTagTest_32 = (MR_Word) ((MR_Unsigned) 0U);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_0_36, &BranchStart_33);
  ll_backend__switch_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_102_95_116_104_101_110_95_101_108_115_101_95_99_104_97_105_110_95_99_97_115_101_115_95_95_91_51_93_95_48_15_p_0(CheaperTagTest_32, VarRval_14, VarName_16, OrderedTaggedCases_26, CodeModel_18, CanFail_19, GoalInfo_20, BranchStart_33, EndLabel_21, (MR_Word) ((MR_Unsigned) 0U), MaybeEnd_22, Code_23, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
}

static void MR_CALL 
ll_backend__switch_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_102_95_116_104_101_110_95_101_108_115_101_95_99_104_97_105_110_95_99_97_115_101_115_95_95_91_51_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
ll_backend__switch_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_102_95_116_104_101_110_95_101_108_115_101_95_99_104_97_105_110_95_99_97_115_101_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word CheaperTagTest_16,
  MR_Word VarRval_17,
  MR_String VarName_19,
  MR_Word Cases_20,
  MR_Word CodeModel_21,
  MR_Word CanFail_22,
  MR_Word SwitchGoalInfo_23,
  MR_Word BranchStart_24,
  MR_Word EndLabel_25,
  MR_Word STATE_VARIABLE_MaybeEnd_0_54,
  MR_Word * STATE_VARIABLE_MaybeEnd_55,
  MR_Word * Code_27,
  MR_Word STATE_VARIABLE_CI_0_56,
  MR_Word * STATE_VARIABLE_CI_57)
{
  MR_bool succeeded;

  if ((Cases_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word FailCode_52;
    MR_Word EndCode_53;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_String Var_90;

    switch (CanFail_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_CLD_86_86;

          ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_24, STATE_VARIABLE_CI_0_56, &STATE_VARIABLE_CLD_86_86);
          ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_52, STATE_VARIABLE_CI_0_56, STATE_VARIABLE_CI_57, STATE_VARIABLE_CLD_86_86);
        }
        break;
      case (MR_Integer) 1:
        {
          FailCode_52 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CI_57 = STATE_VARIABLE_CI_0_56;
        }
        break;
    }
    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_89, 1) = ((MR_Box) (EndLabel_25));
    }
    Var_90 = mercury__string__f_43_43_2_f_0((MR_String) "end of the switch on ", VarName_19);
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(0, Var_88, 1) = ((MR_Box) (Var_90));
    }
    EndCode_53 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_88)));
    *Code_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_52, EndCode_53);
    *STATE_VARIABLE_MaybeEnd_55 = STATE_VARIABLE_MaybeEnd_0_54;
  }
  else
  {
    MR_Word HeadCase_29 = ((MR_Word) ((MR_hl_field(1, Cases_20, (MR_Integer) 0))));
    MR_Word TailCases_30 = ((MR_Word) ((MR_hl_field(1, Cases_20, (MR_Integer) 1))));
    MR_Word MainTaggedConsId_31 = ((MR_Word) ((MR_hl_field(0, HeadCase_29, (MR_Integer) 0))));
    MR_Word OtherTaggedConsIds_32 = ((MR_Word) ((MR_hl_field(0, HeadCase_29, (MR_Integer) 1))));
    MR_Word Goal_34 = ((MR_Word) ((MR_hl_field(0, HeadCase_29, (MR_Integer) 3))));
    MR_Word StoreMap_35;
    MR_Word TestCode_39;
    MR_Word ElseCode_40;
    MR_Word TraceCode_47;
    MR_Word GoalCode_48;
    MR_Word SaveCode_49;
    MR_Word HeadCaseCode_50;
    MR_Word TailCasesCode_51;
    MR_Word STATE_VARIABLE_CI_59_59;
    MR_Word STATE_VARIABLE_CLD_75_75;
    MR_Word STATE_VARIABLE_CI_76_76;
    MR_Word STATE_VARIABLE_CLD_77_77;
    MR_Word STATE_VARIABLE_CI_78_78;
    MR_Word STATE_VARIABLE_CLD_79_79;
    MR_Word STATE_VARIABLE_MaybeEnd_80_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;

    hlds__hlds_llds__goal_info_get_store_map_2_p_0(SwitchGoalInfo_23, &StoreMap_35);
    succeeded = (TailCases_30 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
      succeeded = (CanFail_22 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word NextLabel_38;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_String Var_64;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;

      ll_backend__unify_gen_test__generate_test_var_has_one_tagged_cons_id_10_p_0(VarRval_17, VarName_19, MainTaggedConsId_31, OtherTaggedConsIds_32, CheaperTagTest_16, (MR_Integer) 1, &NextLabel_38, &TestCode_39, STATE_VARIABLE_CI_0_56, &STATE_VARIABLE_CI_59_59);
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (EndLabel_25));
      }
      {
        Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_62, 1) = ((MR_Box) (Var_63));
      }
      Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "skip to the end of the switch on ", VarName_19);
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(0, Var_61, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_68, 1) = ((MR_Box) (NextLabel_38));
      }
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_String) "next case"));
      }
      {
        Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_66));
      }
      ElseCode_40 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_60);
    }
    else
    {
      MR_String MainConsName_41;
      MR_Word OtherConsNames_43;
      MR_String Comment_45;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_42;
      MR_Word Var_44;

      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(MainTaggedConsId_31, &MainConsName_41, &Var_42);
      mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__switch_gen_scalar_common_1[2]), OtherTaggedConsIds_32, &OtherConsNames_43, &Var_44);
      Comment_45 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(VarName_19, MainConsName_41, OtherConsNames_43);
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (Comment_45));
      }
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_String) ""));
      }
      TestCode_39 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_72)));
      ElseCode_40 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      STATE_VARIABLE_CI_59_59 = STATE_VARIABLE_CI_0_56;
    }
    ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_24, STATE_VARIABLE_CI_59_59, &STATE_VARIABLE_CLD_75_75);
    ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(Goal_34, SwitchGoalInfo_23, &TraceCode_47, STATE_VARIABLE_CI_59_59, &STATE_VARIABLE_CI_76_76, STATE_VARIABLE_CLD_75_75, &STATE_VARIABLE_CLD_77_77);
    ll_backend__code_gen__generate_goal_7_p_0(CodeModel_21, Goal_34, &GoalCode_48, STATE_VARIABLE_CI_76_76, &STATE_VARIABLE_CI_78_78, STATE_VARIABLE_CLD_77_77, &STATE_VARIABLE_CLD_79_79);
    ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_35, STATE_VARIABLE_MaybeEnd_0_54, &STATE_VARIABLE_MaybeEnd_80_80, &SaveCode_49, STATE_VARIABLE_CLD_79_79);
    Var_83 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveCode_49, ElseCode_40);
    Var_82 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_48, Var_83);
    Var_81 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode_47, Var_82);
    HeadCaseCode_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_39, Var_81);
    ll_backend__switch_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_102_95_116_104_101_110_95_101_108_115_101_95_99_104_97_105_110_95_99_97_115_101_115_95_95_91_51_93_95_48_15_p_0(CheaperTagTest_16, VarRval_17, VarName_19, TailCases_30, CodeModel_21, CanFail_22, SwitchGoalInfo_23, BranchStart_24, EndLabel_25, STATE_VARIABLE_MaybeEnd_80_80, STATE_VARIABLE_MaybeEnd_55, &TailCasesCode_51, STATE_VARIABLE_CI_78_78, STATE_VARIABLE_CI_57);
    *Code_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCaseCode_50, TailCasesCode_51);
  }
}

static void MR_CALL 
ll_backend__switch_gen__order_recursive_cases_5_p_0(
  MR_Word Cases0_6,
  MR_Word * Cases_7,
  MR_Word CodeModel_8,
  MR_Word CanFail_9,
  MR_Word CI_10)
{
  MR_bool succeeded = (CodeModel_8 == (MR_Integer) 0);
  MR_Word Case1_11;
  MR_Word Case2_12;
  MR_Word Goal1_16;
  MR_Word Goal2_20;
  MR_Word Var_35;
  MR_Word Var_36;

  if (succeeded)
  {
    succeeded = (CanFail_9 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (Cases0_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Case1_11 = ((MR_Word) ((MR_hl_field(1, Cases0_6, (MR_Integer) 0))));
        Var_35 = ((MR_Word) ((MR_hl_field(1, Cases0_6, (MR_Integer) 1))));
        succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Case2_12 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
          Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
          succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Goal1_16 = ((MR_Word) ((MR_hl_field(0, Case1_11, (MR_Integer) 3))));
            Goal2_20 = ((MR_Word) ((MR_hl_field(0, Case2_12, (MR_Integer) 3))));
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word ModuleInfo_21;
    MR_Word Globals_22;
    MR_Word PredId_23;
    MR_Integer ProcId_24;
    MR_Integer Min1_25;
    MR_Integer Max1_26;
    MR_Integer Min2_27;
    MR_Integer Max2_28;
    MR_Word BaseCase_29;
    MR_Word SingleRecCase_30;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_21);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_22);
    ll_backend__code_info__get_pred_id_2_p_0(CI_10, &PredId_23);
    ll_backend__code_info__get_proc_id_2_p_0(CI_10, &ProcId_24);
    hlds__goal_form__count_recursive_calls_5_p_0(Goal1_16, PredId_23, ProcId_24, &Min1_25, &Max1_26);
    hlds__goal_form__count_recursive_calls_5_p_0(Goal2_20, PredId_23, ProcId_24, &Min2_27, &Max2_28);
    succeeded = (Max1_26 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Min2_27 == (MR_Integer) 1);
    if (succeeded)
    {
      BaseCase_29 = Case1_11;
      SingleRecCase_30 = Case2_12;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Max2_28 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Min1_25 == (MR_Integer) 1);
        if (succeeded)
        {
          BaseCase_29 = Case2_12;
          SingleRecCase_30 = Case1_11;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word OptTuple_31;
      MR_Word SingleRecBaseFirst_32;

      libs__globals__get_opt_tuple_2_p_0(Globals_22, &OptTuple_31);
      SingleRecBaseFirst_32 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_31, (MR_Integer) 1))) >> 14)) & (MR_Integer) 1);
      switch (SingleRecBaseFirst_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_39;

            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (SingleRecCase_30));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Cases_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (BaseCase_29));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_39));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_37;

            {
              Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_37, 0) = ((MR_Box) (BaseCase_29));
              MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Cases_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SingleRecCase_30));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_37));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word MultiRecCase_33;
      MR_Word BaseCase_48;
      MR_Integer Var_41;

      succeeded = (Max1_26 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_41 = (MR_Integer) 1;
        succeeded = (Min2_27 > Var_41);
      }
      if (succeeded)
      {
        BaseCase_48 = Case1_11;
        MultiRecCase_33 = Case2_12;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Var_42;

        succeeded = (Max2_28 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_42 = (MR_Integer) 1;
          succeeded = (Min1_25 > Var_42);
          if (succeeded)
          {
            BaseCase_48 = Case2_12;
            MultiRecCase_33 = Case1_11;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        MR_Word MultiRecBaseFirst_34;
        MR_Word OptTuple_47;

        libs__globals__get_opt_tuple_2_p_0(Globals_22, &OptTuple_47);
        MultiRecBaseFirst_34 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
        switch (MultiRecBaseFirst_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_45;

              {
                Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_45, 0) = ((MR_Box) (BaseCase_48));
                MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Cases_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (MultiRecCase_33));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_45));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_43;

              {
                Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_43, 0) = ((MR_Box) (MultiRecCase_33));
                MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Cases_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (BaseCase_48));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_43));
              }
            }
            break;
        }
      }
      else
        ll_backend__switch_gen__order_tag_test_cost_2_p_0(Cases0_6, Cases_7);
    }
  }
  else
    ll_backend__switch_gen__order_tag_test_cost_2_p_0(Cases0_6, Cases_7);
}

static MR_Box MR_CALL 
ll_backend__switch_gen__order_tag_test_cost_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__switch_gen__estimate_cost_of_case_test_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__switch_gen__order_tag_test_cost_2_p_0(
  MR_Word Cases0_3,
  MR_Word * Cases_4)
{
  MR_Word CostedCases_5;
  MR_Word SortedCostedCases_6;

  CostedCases_5 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), (MR_Word) (&ll_backend__switch_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__switch_gen_scalar_common_1[1]), Cases0_3);
  mercury__list__sort_2_p_0((MR_Word) (&ll_backend__switch_gen_scalar_common_1[0]), CostedCases_5, &SortedCostedCases_6);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), SortedCostedCases_6, Cases_4);
}

static void MR_CALL 
ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Case_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word CanSucceedCases1_8;
    MR_Word CannotSucceedCases1_9;
    MR_Word Goal_13;
    MR_Word GoalInfo_15;
    MR_Word Detism_16;
    MR_Word SolnCount_18;
    MR_Word _CanFail_17;

    ll_backend__switch_gen__separate_cannot_succeed_cases_3_p_0(Cases_5, &CanSucceedCases1_8, &CannotSucceedCases1_9);
    Goal_13 = ((MR_Word) ((MR_hl_field(0, Case_4, (MR_Integer) 3))));
    GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_13, (MR_Integer) 1))));
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
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Case_4));
            MR_hl_field(1, base, 1) = ((MR_Box) (CanSucceedCases1_8));
          }
          *HeadVar__3_3 = CannotSucceedCases1_9;
        }
        break;
      case (MR_Integer) 0:
        {
          *HeadVar__2_2 = CanSucceedCases1_8;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Case_4));
            MR_hl_field(1, base, 1) = ((MR_Box) (CannotSucceedCases1_9));
          }
        }
        break;
    }
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
