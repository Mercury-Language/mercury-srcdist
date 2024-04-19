/*
** Automatically generated from `ml_switch_gen.m'
** by the Mercury compiler,
** version rotd-2024-04-19
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


// :- module ml_backend.ml_switch_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_switch_gen__init
ENDINIT
*/

#include "ml_backend.ml_switch_gen.mih"


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
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.lookup_switch_util.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_lookup_switch.mih"
#include "ml_backend.ml_simplify_switch.mih"
#include "ml_backend.ml_string_switch.mih"
#include "ml_backend.ml_tag_switch.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.ml_unify_gen_test.mih"
#include "ml_backend.mlds.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0;

static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
  MR_Word TaggedConsId_4,
  MR_Integer STATE_VARIABLE_CaseCost_0_9,
  MR_Integer * STATE_VARIABLE_CaseCost_10);

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
  MR_Word TaggedCase_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_string_switch_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_string_switch_12_p_0(
  MR_Word SwitchVar_13,
  MR_Word SwitchVarEntry_14,
  MR_Word TaggedCases_15,
  MR_Word CanFail_16,
  MR_Word CodeModel_17,
  MR_Word GoalInfo_18,
  MR_Word Context_19,
  MR_Word EntryPackedWordMap_20,
  MR_Word * Defns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_14_p_0(
  MR_Word Globals_15,
  MR_Word SwitchVar_16,
  MR_Word SwitchVarEntry_17,
  MR_Word FilteredTaggedCases_18,
  MR_Word CodeModel_19,
  MR_Word FilteredCanFail_20,
  MR_Word GoalInfo_21,
  MR_Word Context_22,
  MR_Integer NumConsIds_23,
  MR_Word EntryPackedWordMap_24,
  MR_Word * Defns_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(
  MR_Word Var_10,
  MR_Word TaggedCases0_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedWordMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_12_p_0(
  MR_Word Var_13,
  MR_Word TaggedCase_14,
  MR_Word TaggedCases_15,
  MR_Word CodeModel_16,
  MR_Word CanFail_17,
  MR_Word EntryPackedWordMap_18,
  MR_Word Context_19,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_35,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_36,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_int_max_32_switch_12_p_0(
  MR_Word SwitchVar_13,
  MR_Word SwitchVarType_14,
  MR_Word TaggedCases_15,
  MR_Word MaybeIntSwitchInfo_16,
  MR_Word CanFail_17,
  MR_Word CodeModel_18,
  MR_Word GoalInfo_19,
  MR_Word EntryPackedWordMap_20,
  MR_Word Context_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_p_0(
  MR_Word Var_10,
  MR_Word Cases_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedWordMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0(
  MR_Word MerType_1,
  MR_Word MLDS_Type_2,
  MR_Word CodeModel_3,
  MR_Word EntryPackedWordMap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_7,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(
  MR_Word MerType_5,
  MR_Word MLDS_Type_6,
  MR_Word TaggedConsId_7,
  MR_Word * MatchCond_8);


static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_1[4][3];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_2[1][7];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_4[1][6];




static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_1[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_gen_string_switch_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_2[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
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


static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)
  }
};

static void MR_CALL 
ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(
  MR_Word TaggedConsId_4,
  MR_Integer STATE_VARIABLE_CaseCost_0_9,
  MR_Integer * STATE_VARIABLE_CaseCost_10)
{
  MR_Word ConsTag_7 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_4, (MR_Integer) 1))));
  MR_Integer ConsIdCost_8;

  ConsIdCost_8 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ConsTag_7);
  *STATE_VARIABLE_CaseCost_10 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CaseCost_0_9 + (MR_Unsigned) ConsIdCost_8);
}

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_STATE_VARIABLE_CaseCost_10;

  ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CaseCost_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CaseCost_10));
}

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
  MR_Word TaggedCase_3,
  MR_Word * HeadVar__2_2)
{
  MR_Integer Cost_4;
  MR_Word TaggedMainConsId_5 = ((MR_Word) ((MR_hl_field(0, TaggedCase_3, (MR_Integer) 0))));
  MR_Word TaggedOtherConsIds_6 = ((MR_Word) ((MR_hl_field(0, TaggedCase_3, (MR_Integer) 1))));
  MR_Integer MainCost_9;
  MR_Word ConsTag_18 = ((MR_Word) ((MR_hl_field(0, TaggedMainConsId_5, (MR_Integer) 1))));
  MR_Integer ConsIdCost_19;
  MR_Box conv1_Cost_4;

  ConsIdCost_19 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ConsTag_18);
  MainCost_9 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) ConsIdCost_19);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[3]), TaggedOtherConsIds_6, ((MR_Box) (MainCost_9)), &conv1_Cost_4);
  Cost_4 = ((MR_Integer) (conv1_Cost_4));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Cost_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (TaggedCase_3));
  }
}

void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(
  MR_Word SwitchVar_11,
  MR_Word CanFail_12,
  MR_Word CodeModel_13,
  MR_Word GoalInfo_14,
  MR_Word Context_15,
  MR_Word Cases_16,
  MR_Word * Defns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_bool succeeded;
  MR_Word VarTable_20;
  MR_Word SwitchVarEntry_21;
  MR_Word SwitchVarType_22;
  MR_Word ModuleInfo_23;
  MR_Word TaggedCases_24;
  MR_Word MaybeIntSwitchInfo_25;
  MR_Word EntryPackedWordMap_26;
  MR_Word SwitchCategory_27;
  MR_Word STATE_VARIABLE_Info_37_37;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_35, &VarTable_20);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_20, SwitchVar_11, &SwitchVarEntry_21);
  SwitchVarType_22 = ((MR_Word) ((MR_hl_field(0, SwitchVarEntry_21, (MR_Integer) 1))));
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_35, &ModuleInfo_23);
  backend_libs__switch_util__tag_cases_5_p_0(ModuleInfo_23, SwitchVarType_22, Cases_16, &TaggedCases_24, &MaybeIntSwitchInfo_25);
  ml_backend__ml_gen_info__ml_gen_info_get_packed_word_map_2_p_0(STATE_VARIABLE_Info_0_35, &EntryPackedWordMap_26);
  backend_libs__switch_util__find_switch_category_3_p_0(ModuleInfo_23, SwitchVarType_22, &SwitchCategory_27);
  switch (SwitchCategory_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
    case (MR_Integer) 0:
      {
        ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(SwitchVar_11, TaggedCases_24, CodeModel_13, CanFail_12, EntryPackedWordMap_26, Context_15, Stmts_18, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_37_37);
        *Defns_17 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Globals_28;
        MR_Word Int64SwitchSupported_29;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_23, &Globals_28);
        Int64SwitchSupported_29 = ml_backend__ml_target_util__globals_target_supports_int64_switch_1_f_0(Globals_28);
        switch (Int64SwitchSupported_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(SwitchVar_11, TaggedCases_24, CodeModel_13, CanFail_12, EntryPackedWordMap_26, Context_15, Stmts_18, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_37_37);
            break;
          case (MR_Integer) 1:
            ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_p_0(SwitchVar_11, TaggedCases_24, CodeModel_13, CanFail_12, EntryPackedWordMap_26, Context_15, Stmts_18, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_37_37);
            break;
        }
        *Defns_17 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        ml_backend__ml_switch_gen__ml_gen_smart_int_max_32_switch_12_p_0(SwitchVar_11, SwitchVarType_22, TaggedCases_24, MaybeIntSwitchInfo_25, CanFail_12, CodeModel_13, GoalInfo_14, EntryPackedWordMap_26, Context_15, Stmts_18, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_37_37);
        *Defns_17 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      ml_backend__ml_switch_gen__ml_gen_string_switch_12_p_0(SwitchVar_11, SwitchVarEntry_21, TaggedCases_24, CanFail_12, CodeModel_13, GoalInfo_14, Context_15, EntryPackedWordMap_26, Defns_17, Stmts_18, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_37_37);
      break;
    case (MR_Integer) 5:
      {
        MR_Integer NumConsIds_30;
        MR_Integer NumArms_31;
        MR_Word OptTuple_32;
        MR_Integer TagSize_33;
        MR_Word Globals_46;
        MR_Word StmtsPrime_34;
        MR_Word STATE_VARIABLE_Info_43_43;
        MR_Integer Var_42;

        backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(TaggedCases_24, &NumConsIds_30, &NumArms_31);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_23, &Globals_46);
        libs__globals__get_opt_tuple_2_p_0(Globals_46, &OptTuple_32);
        TagSize_33 = ((MR_Integer) ((MR_hl_field(0, OptTuple_32, (MR_Integer) 33))));
        succeeded = (NumConsIds_30 >= TagSize_33);
        if (succeeded)
        {
          Var_42 = (MR_Integer) 1;
          succeeded = (NumArms_31 > Var_42);
          if (succeeded)
            succeeded = ml_backend__ml_tag_switch__ml_generate_tag_switch_if_possible_10_p_0(SwitchVar_11, SwitchVarEntry_21, TaggedCases_24, CodeModel_13, CanFail_12, Context_15, EntryPackedWordMap_26, &StmtsPrime_34, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_43_43);
        }
        if (succeeded)
        {
          STATE_VARIABLE_Info_37_37 = STATE_VARIABLE_Info_43_43;
          *Stmts_18 = StmtsPrime_34;
        }
        else
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(SwitchVar_11, TaggedCases_24, CodeModel_13, CanFail_12, EntryPackedWordMap_26, Context_15, Stmts_18, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_37_37);
        *Defns_17 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedWordMap_26, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_36);
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_string_switch_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_string_switch_12_p_0(
  MR_Word SwitchVar_13,
  MR_Word SwitchVarEntry_14,
  MR_Word TaggedCases_15,
  MR_Word CanFail_16,
  MR_Word CodeModel_17,
  MR_Word GoalInfo_18,
  MR_Word Context_19,
  MR_Word EntryPackedWordMap_20,
  MR_Word * Defns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_bool succeeded;
  MR_Word FilteredTaggedCases_24;
  MR_Word FilteredCanFail_25;
  MR_Integer NumConsIds_26;
  MR_Integer NumArms_27;

  backend_libs__lookup_switch_util__filter_out_failing_cases_if_needed_5_p_0(CodeModel_17, TaggedCases_15, &FilteredTaggedCases_24, CanFail_16, &FilteredCanFail_25);
  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(FilteredTaggedCases_24, &NumConsIds_26, &NumArms_27);
  succeeded = (NumArms_27 < (MR_Integer) 2);
  if (succeeded)
  {
    MR_Word CostTaggedCases0_34;
    MR_Word CostTaggedCases_35;
    MR_Word TaggedCases_36;

    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), (MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[2]), FilteredTaggedCases_24, &CostTaggedCases0_34);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[0]), CostTaggedCases0_34, &CostTaggedCases_35);
    mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), CostTaggedCases_35, &TaggedCases_36);
    if ((TaggedCases_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/9", (MR_String) "empty switch");
        return;
      }
    else
    {
      MR_Word FirstTaggedCase_37 = ((MR_Word) ((MR_hl_field(1, TaggedCases_36, (MR_Integer) 0))));
      MR_Word LaterTaggedCases_38 = ((MR_Word) ((MR_hl_field(1, TaggedCases_36, (MR_Integer) 1))));
      MR_Word ReachableConstVarMaps_39;
      MR_Word STATE_VARIABLE_Info_30_44;

      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_12_p_0(SwitchVar_13, FirstTaggedCase_37, LaterTaggedCases_38, CodeModel_17, FilteredCanFail_25, EntryPackedWordMap_20, Context_19, Stmts_22, (MR_Word) ((MR_Unsigned) 0U), &ReachableConstVarMaps_39, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_30_44);
      ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_39, STATE_VARIABLE_Info_30_44, STATE_VARIABLE_Info_32);
    }
    *Defns_21 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ModuleInfo_28;
    MR_Word Globals_29;
    MR_Word Target_30;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_31, &ModuleInfo_28);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_28, &Globals_29);
    libs__globals__get_target_2_p_0(Globals_29, &Target_30);
    switch (Target_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_switch_gen__ml_gen_smart_string_switch_14_p_0(Globals_29, SwitchVar_13, SwitchVarEntry_14, FilteredTaggedCases_24, CodeModel_17, FilteredCanFail_25, GoalInfo_18, Context_19, NumConsIds_26, EntryPackedWordMap_20, Defns_21, Stmts_22, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word VarTable_48;
          MR_Word VarEntry_49;
          MR_Word Type_50;
          MR_Word MLDS_Type_51;
          MR_Word Lval_52;
          MR_Word Rval_53;
          MR_Word Range_54;
          MR_Word MLDS_Cases_55;
          MR_Word ReachableConstVarMaps_56;
          MR_Word Default_57;
          MR_Word SwitchStmt0_58;
          MR_Word SwitchStmt_59;
          MR_Word STATE_VARIABLE_Info_33_61;
          MR_Word STATE_VARIABLE_Info_34_62;
          MR_Word STATE_VARIABLE_Info_35_63;
          MR_Word ModuleInfo_67;
          MR_Integer MinRange_70;
          MR_Integer MaxRange_71;
          MR_Word Type_68;
          MR_Word TypeCategory_69;
          MR_Word Var_73;
          MR_Integer _NumValuesInRange_72;

          ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_31, &VarTable_48);
          parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_48, SwitchVar_13, &VarEntry_49);
          Type_50 = ((MR_Word) ((MR_hl_field(0, VarEntry_49, (MR_Integer) 1))));
          ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(STATE_VARIABLE_Info_0_31, Type_50, &MLDS_Type_51);
          ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_31, SwitchVar_13, VarEntry_49, &Lval_52);
          {
            Rval_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Rval_53, 0) = ((MR_Box) (Lval_52));
          }
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_31, &ModuleInfo_67);
          succeeded = ((((MR_tag((MR_Word) MLDS_Type_51)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MLDS_Type_51, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Type_68 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_51, (MR_Integer) 1))));
            TypeCategory_69 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_51, (MR_Integer) 2))));
            Var_73 = (MR_Word) (TypeCategory_69);
            succeeded = backend_libs__lookup_switch_util__type_range_6_p_0(ModuleInfo_67, Var_73, Type_68, &MinRange_70, &MaxRange_71, &_NumValuesInRange_72);
          }
          if (succeeded)
            {
              Range_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Range_54, 0) = ((MR_Box) (MinRange_70));
              MR_hl_field(1, Range_54, 1) = ((MR_Box) (MaxRange_71));
            }
          else
            Range_54 = (MR_Word) ((MR_Unsigned) 0U);
          ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0(Type_50, MLDS_Type_51, CodeModel_17, EntryPackedWordMap_20, FilteredTaggedCases_24, &MLDS_Cases_55, (MR_Word) ((MR_Unsigned) 0U), &ReachableConstVarMaps_56, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_33_61);
          ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_56, STATE_VARIABLE_Info_33_61, &STATE_VARIABLE_Info_34_62);
          ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(FilteredCanFail_25, CodeModel_17, Context_19, &Default_57, STATE_VARIABLE_Info_34_62, &STATE_VARIABLE_Info_35_63);
          {
            SwitchStmt0_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SwitchStmt0_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, SwitchStmt0_58, 1) = ((MR_Box) (MLDS_Type_51));
            MR_hl_field(3, SwitchStmt0_58, 2) = ((MR_Box) (Rval_53));
            MR_hl_field(3, SwitchStmt0_58, 3) = ((MR_Box) (Range_54));
            MR_hl_field(3, SwitchStmt0_58, 4) = ((MR_Box) (MLDS_Cases_55));
            MR_hl_field(3, SwitchStmt0_58, 5) = ((MR_Box) (Default_57));
            MR_hl_field(3, SwitchStmt0_58, 6) = ((MR_Box) (Context_19));
          }
          ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_58, &SwitchStmt_59, STATE_VARIABLE_Info_35_63, STATE_VARIABLE_Info_32);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_22 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (SwitchStmt_59));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *Defns_21 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_14_p_0(
  MR_Word Globals_15,
  MR_Word SwitchVar_16,
  MR_Word SwitchVarEntry_17,
  MR_Word FilteredTaggedCases_18,
  MR_Word CodeModel_19,
  MR_Word FilteredCanFail_20,
  MR_Word GoalInfo_21,
  MR_Word Context_22,
  MR_Integer NumConsIds_23,
  MR_Word EntryPackedWordMap_24,
  MR_Word * Defns_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  MR_bool succeeded;
  MR_Word SwitchVarLval_28;
  MR_Word SwitchVarRval_29;
  MR_Word MaybeLookupSwitchInfo_30;
  MR_Word OptTuple_31;
  MR_Word Target_32;
  MR_Integer StringTrieSwitchSize_33;
  MR_Word Var_39;

  ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_37, SwitchVar_16, SwitchVarEntry_17, &SwitchVarLval_28);
  {
    SwitchVarRval_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, SwitchVarRval_29, 0) = ((MR_Box) (SwitchVarLval_28));
  }
  ml_backend__ml_lookup_switch__ml_is_lookup_switch_6_p_0(SwitchVar_16, FilteredTaggedCases_18, GoalInfo_21, CodeModel_19, STATE_VARIABLE_Info_0_37, &MaybeLookupSwitchInfo_30);
  libs__globals__get_opt_tuple_2_p_0(Globals_15, &OptTuple_31);
  libs__globals__get_target_2_p_0(Globals_15, &Target_32);
  Var_39 = mercury__string__internal_string_encoding_0_f_0();
  succeeded = (Var_39 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (Target_32 == (MR_Integer) 0);
    if (succeeded)
    {
      StringTrieSwitchSize_33 = ((MR_Integer) ((MR_hl_field(0, OptTuple_31, (MR_Integer) 30))));
      succeeded = (NumConsIds_23 >= StringTrieSwitchSize_33);
    }
  }
  if (succeeded)
  {
    if ((MaybeLookupSwitchInfo_30 == (MR_Word) ((MR_Unsigned) 0U)))
      ml_backend__ml_string_switch__ml_generate_string_trie_jump_switch_9_p_0(SwitchVarRval_29, FilteredTaggedCases_18, CodeModel_19, FilteredCanFail_20, EntryPackedWordMap_24, Context_22, Stmts_26, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
    else
    {
      MR_Word LookupSwitchInfo_34 = ((MR_Word) ((MR_hl_field(1, MaybeLookupSwitchInfo_30, (MR_Integer) 0))));

      ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_8_p_0(SwitchVarRval_29, FilteredTaggedCases_18, LookupSwitchInfo_34, CodeModel_19, FilteredCanFail_20, Context_22, Stmts_26, STATE_VARIABLE_Info_38);
    }
    *Defns_25 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Integer StringHashSwitchSize_35 = ((MR_Integer) ((MR_hl_field(0, OptTuple_31, (MR_Integer) 31))));

    succeeded = (NumConsIds_23 >= StringHashSwitchSize_35);
    if (succeeded)
      if ((MaybeLookupSwitchInfo_30 == (MR_Word) ((MR_Unsigned) 0U)))
        ml_backend__ml_string_switch__ml_generate_string_hash_jump_switch_10_p_0(SwitchVarRval_29, FilteredTaggedCases_18, CodeModel_19, FilteredCanFail_20, EntryPackedWordMap_24, Context_22, Defns_25, Stmts_26, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
      else
      {
        MR_Word LookupSwitchInfo_47 = ((MR_Word) ((MR_hl_field(1, MaybeLookupSwitchInfo_30, (MR_Integer) 0))));

        ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_9_p_0(SwitchVarRval_29, FilteredTaggedCases_18, LookupSwitchInfo_47, CodeModel_19, FilteredCanFail_20, Context_22, Defns_25, Stmts_26, STATE_VARIABLE_Info_38);
      }
    else
    {
      MR_Integer StringBinarySwitchSize_36 = ((MR_Integer) ((MR_hl_field(0, OptTuple_31, (MR_Integer) 32))));

      succeeded = (NumConsIds_23 >= StringBinarySwitchSize_36);
      if (succeeded)
        if ((MaybeLookupSwitchInfo_30 == (MR_Word) ((MR_Unsigned) 0U)))
          ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_10_p_0(SwitchVarRval_29, FilteredTaggedCases_18, CodeModel_19, FilteredCanFail_20, EntryPackedWordMap_24, Context_22, Defns_25, Stmts_26, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
        else
        {
          MR_Word LookupSwitchInfo_49 = ((MR_Word) ((MR_hl_field(1, MaybeLookupSwitchInfo_30, (MR_Integer) 0))));

          ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_9_p_0(SwitchVarRval_29, FilteredTaggedCases_18, LookupSwitchInfo_49, CodeModel_19, FilteredCanFail_20, Context_22, Defns_25, Stmts_26, STATE_VARIABLE_Info_38);
        }
      else
      {
        ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(SwitchVar_16, FilteredTaggedCases_18, CodeModel_19, FilteredCanFail_20, EntryPackedWordMap_24, Context_22, Stmts_26, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
        *Defns_25 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(
  MR_Word Var_10,
  MR_Word TaggedCases0_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedWordMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word CostTaggedCases0_18;
  MR_Word CostTaggedCases_19;
  MR_Word TaggedCases_20;

  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), (MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[1]), TaggedCases0_11, &CostTaggedCases0_18);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[0]), CostTaggedCases0_18, &CostTaggedCases_19);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), CostTaggedCases_19, &TaggedCases_20);
  if ((TaggedCases_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/9", (MR_String) "empty switch");
      return;
    }
  else
  {
    MR_Word FirstTaggedCase_21 = ((MR_Word) ((MR_hl_field(1, TaggedCases_20, (MR_Integer) 0))));
    MR_Word LaterTaggedCases_22 = ((MR_Word) ((MR_hl_field(1, TaggedCases_20, (MR_Integer) 1))));
    MR_Word ReachableConstVarMaps_23;
    MR_Word STATE_VARIABLE_Info_30_30;

    ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_12_p_0(Var_10, FirstTaggedCase_21, LaterTaggedCases_22, CodeModel_12, CanFail_13, EntryPackedWordMap_14, Context_15, Stmts_16, (MR_Word) ((MR_Unsigned) 0U), &ReachableConstVarMaps_23, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_30_30);
    ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_23, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_25);
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_12_p_0(
  MR_Word Var_13,
  MR_Word TaggedCase_14,
  MR_Word TaggedCases_15,
  MR_Word CodeModel_16,
  MR_Word CanFail_17,
  MR_Word EntryPackedWordMap_18,
  MR_Word Context_19,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_35,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_36,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  MR_Word Stmt_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Goal_26;
  MR_Word STATE_VARIABLE_Info_40_40;

  ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedWordMap_18, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_40_40);
  Var_23 = ((MR_Word) ((MR_hl_field(0, TaggedCase_14, (MR_Integer) 0))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, TaggedCase_14, (MR_Integer) 1))));
  Goal_26 = ((MR_Word) ((MR_hl_field(0, TaggedCase_14, (MR_Integer) 3))));
  if ((TaggedCases_15 == (MR_Word) ((MR_Unsigned) 0U)))
    switch (CanFail_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Cond_27;
          MR_Word GoalBlock_28;
          MR_Word FailStmts_29;
          MR_Word FailBlock_30;
          MR_Word STATE_VARIABLE_Info_43_43;
          MR_Word STATE_VARIABLE_Info_45_45;
          MR_Word Var_49;

          ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_6_p_0(Var_13, Var_23, Var_24, &Cond_27, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_43_43);
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_16, Goal_26, &GoalBlock_28, STATE_VARIABLE_ReachableConstVarMaps_0_35, STATE_VARIABLE_ReachableConstVarMaps_36, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_45_45);
          ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_16, Context_19, &FailStmts_29, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_38);
          FailBlock_30 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FailStmts_29, Context_19);
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (FailBlock_30));
          }
          {
            Stmt_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Stmt_20, 0) = ((MR_Box) (Cond_27));
            MR_hl_field(2, Stmt_20, 1) = ((MR_Box) (GoalBlock_28));
            MR_hl_field(2, Stmt_20, 2) = ((MR_Box) (Var_49));
            MR_hl_field(2, Stmt_20, 3) = ((MR_Box) (Context_19));
          }
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_16, Goal_26, &Stmt_20, STATE_VARIABLE_ReachableConstVarMaps_0_35, STATE_VARIABLE_ReachableConstVarMaps_36, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_38);
        break;
    }
  else
  {
    MR_Word LaterTaggedCase_31 = ((MR_Word) ((MR_hl_field(1, TaggedCases_15, (MR_Integer) 0))));
    MR_Word LaterTaggedCases_32 = ((MR_Word) ((MR_hl_field(1, TaggedCases_15, (MR_Integer) 1))));
    MR_Word LaterStmts_33;
    MR_Word LaterBlock_34;
    MR_Word STATE_VARIABLE_Info_50_50;
    MR_Word STATE_VARIABLE_ReachableConstVarMaps_51_51;
    MR_Word STATE_VARIABLE_Info_52_52;
    MR_Word Var_57;
    MR_Word Cond_58;
    MR_Word GoalBlock_59;

    ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_6_p_0(Var_13, Var_23, Var_24, &Cond_58, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_50_50);
    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_16, Goal_26, &GoalBlock_59, STATE_VARIABLE_ReachableConstVarMaps_0_35, &STATE_VARIABLE_ReachableConstVarMaps_51_51, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_52_52);
    ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_12_p_0(Var_13, LaterTaggedCase_31, LaterTaggedCases_32, CodeModel_16, CanFail_17, EntryPackedWordMap_18, Context_19, &LaterStmts_33, STATE_VARIABLE_ReachableConstVarMaps_51_51, STATE_VARIABLE_ReachableConstVarMaps_36, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_38);
    LaterBlock_34 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), LaterStmts_33, Context_19);
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (LaterBlock_34));
    }
    {
      Stmt_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Stmt_20, 0) = ((MR_Box) (Cond_58));
      MR_hl_field(2, Stmt_20, 1) = ((MR_Box) (GoalBlock_59));
      MR_hl_field(2, Stmt_20, 2) = ((MR_Box) (Var_57));
      MR_hl_field(2, Stmt_20, 3) = ((MR_Box) (Context_19));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__8_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_20));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_int_max_32_switch_12_p_0(
  MR_Word SwitchVar_13,
  MR_Word SwitchVarType_14,
  MR_Word TaggedCases_15,
  MR_Word MaybeIntSwitchInfo_16,
  MR_Word CanFail_17,
  MR_Word CodeModel_18,
  MR_Word GoalInfo_19,
  MR_Word EntryPackedWordMap_20,
  MR_Word Context_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  MR_bool succeeded;
  MR_Integer NumConsIds_24;
  MR_Integer NumArms_25;
  MR_Word ModuleInfo_26;
  MR_Word Globals_27;
  MR_Word HighLevelData_28;
  MR_Word NeedBitVecCheck_38;
  MR_Word NeedRangeCheck_39;
  MR_Integer FirstVal_40;
  MR_Integer LastVal_41;
  MR_Word LookupSwitchInfo_43;
  MR_Word IntSwitchInfo_29;
  MR_Integer LowerLimit_30;
  MR_Integer UpperLimit_31;
  MR_Integer NumValues_32;
  MR_Word OptTuple_33;
  MR_Integer LookupSize_34;
  MR_Integer ReqDensity_35;
  MR_Word FilteredTaggedCases_36;
  MR_Word FilteredCanFail_37;
  MR_Word MaybeLookupSwitchInfo_42;
  MR_Word Var_47;
  MR_Integer Var_48;

  backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(TaggedCases_15, &NumConsIds_24, &NumArms_25);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_45, &ModuleInfo_26);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_26, &Globals_27);
  ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_45, &HighLevelData_28);
  succeeded = (HighLevelData_28 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) MaybeIntSwitchInfo_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      IntSwitchInfo_29 = ((MR_Word) ((MR_hl_field(1, MaybeIntSwitchInfo_16, (MR_Integer) 0))));
      LowerLimit_30 = ((MR_Integer) ((MR_hl_field(0, IntSwitchInfo_29, (MR_Integer) 0))));
      UpperLimit_31 = ((MR_Integer) ((MR_hl_field(0, IntSwitchInfo_29, (MR_Integer) 1))));
      NumValues_32 = ((MR_Integer) ((MR_hl_field(0, IntSwitchInfo_29, (MR_Integer) 2))));
      libs__globals__get_opt_tuple_2_p_0(Globals_27, &OptTuple_33);
      Var_47 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_33, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
      ReqDensity_35 = ((MR_Integer) ((MR_hl_field(0, OptTuple_33, (MR_Integer) 27))));
      LookupSize_34 = ((MR_Integer) ((MR_hl_field(0, OptTuple_33, (MR_Integer) 29))));
      succeeded = (Var_47 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (NumConsIds_24 >= LookupSize_34);
        if (succeeded)
        {
          Var_48 = (MR_Integer) 1;
          succeeded = (NumArms_25 > Var_48);
          if (succeeded)
          {
            backend_libs__lookup_switch_util__filter_out_failing_cases_if_needed_5_p_0(CodeModel_18, TaggedCases_15, &FilteredTaggedCases_36, CanFail_17, &FilteredCanFail_37);
            succeeded = backend_libs__lookup_switch_util__find_int_lookup_switch_params_11_p_0(ModuleInfo_26, SwitchVarType_14, FilteredCanFail_37, LowerLimit_30, UpperLimit_31, NumValues_32, ReqDensity_35, &NeedBitVecCheck_38, &NeedRangeCheck_39, &FirstVal_40, &LastVal_41);
            if (succeeded)
            {
              ml_backend__ml_lookup_switch__ml_is_lookup_switch_6_p_0(SwitchVar_13, FilteredTaggedCases_36, GoalInfo_19, CodeModel_18, STATE_VARIABLE_Info_0_45, &MaybeLookupSwitchInfo_42);
              succeeded = (MaybeLookupSwitchInfo_42 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                LookupSwitchInfo_43 = ((MR_Word) ((MR_hl_field(1, MaybeLookupSwitchInfo_42, (MR_Integer) 0))));
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word LookupStmt_44;

    ml_backend__ml_lookup_switch__ml_gen_int_max_32_lookup_switch_11_p_0(SwitchVar_13, TaggedCases_15, LookupSwitchInfo_43, CodeModel_18, Context_21, FirstVal_40, LastVal_41, NeedBitVecCheck_38, NeedRangeCheck_39, &LookupStmt_44, STATE_VARIABLE_Info_46);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_22 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LookupStmt_44));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_p_0(SwitchVar_13, TaggedCases_15, CodeModel_18, CanFail_17, EntryPackedWordMap_20, Context_21, Stmts_22, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_p_0(
  MR_Word Var_10,
  MR_Word Cases_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedWordMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_bool succeeded;
  MR_Word VarTable_18;
  MR_Word VarEntry_19;
  MR_Word Type_20;
  MR_Word MLDS_Type_21;
  MR_Word Lval_22;
  MR_Word Rval_23;
  MR_Word Range_24;
  MR_Word MLDS_Cases_25;
  MR_Word ReachableConstVarMaps_26;
  MR_Word Default_27;
  MR_Word SwitchStmt0_28;
  MR_Word SwitchStmt_29;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_Info_34_34;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word ModuleInfo_40;
  MR_Integer MinRange_43;
  MR_Integer MaxRange_44;
  MR_Word Type_41;
  MR_Word TypeCategory_42;
  MR_Word Var_46;
  MR_Integer _NumValuesInRange_45;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_30, &VarTable_18);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_18, Var_10, &VarEntry_19);
  Type_20 = ((MR_Word) ((MR_hl_field(0, VarEntry_19, (MR_Integer) 1))));
  ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(STATE_VARIABLE_Info_0_30, Type_20, &MLDS_Type_21);
  ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_30, Var_10, VarEntry_19, &Lval_22);
  {
    Rval_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Rval_23, 0) = ((MR_Box) (Lval_22));
  }
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_30, &ModuleInfo_40);
  succeeded = ((((MR_tag((MR_Word) MLDS_Type_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MLDS_Type_21, (MR_Integer) 0)))) == (MR_Integer) 3)));
  if (succeeded)
  {
    Type_41 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_21, (MR_Integer) 1))));
    TypeCategory_42 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_21, (MR_Integer) 2))));
    Var_46 = (MR_Word) (TypeCategory_42);
    succeeded = backend_libs__lookup_switch_util__type_range_6_p_0(ModuleInfo_40, Var_46, Type_41, &MinRange_43, &MaxRange_44, &_NumValuesInRange_45);
  }
  if (succeeded)
    {
      Range_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Range_24, 0) = ((MR_Box) (MinRange_43));
      MR_hl_field(1, Range_24, 1) = ((MR_Box) (MaxRange_44));
    }
  else
    Range_24 = (MR_Word) ((MR_Unsigned) 0U);
  ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0(Type_20, MLDS_Type_21, CodeModel_12, EntryPackedWordMap_14, Cases_11, &MLDS_Cases_25, (MR_Word) ((MR_Unsigned) 0U), &ReachableConstVarMaps_26, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_33_33);
  ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_26, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_34_34);
  ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CanFail_13, CodeModel_12, Context_15, &Default_27, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_35_35);
  {
    SwitchStmt0_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SwitchStmt0_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, SwitchStmt0_28, 1) = ((MR_Box) (MLDS_Type_21));
    MR_hl_field(3, SwitchStmt0_28, 2) = ((MR_Box) (Rval_23));
    MR_hl_field(3, SwitchStmt0_28, 3) = ((MR_Box) (Range_24));
    MR_hl_field(3, SwitchStmt0_28, 4) = ((MR_Box) (MLDS_Cases_25));
    MR_hl_field(3, SwitchStmt0_28, 5) = ((MR_Box) (Default_27));
    MR_hl_field(3, SwitchStmt0_28, 6) = ((MR_Box) (Context_15));
  }
  ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_28, &SwitchStmt_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_31);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Stmts_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (SwitchStmt_29));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MatchCond_8;

  ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MatchCond_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MatchCond_8));
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0(
  MR_Word MerType_1,
  MR_Word MLDS_Type_2,
  MR_Word CodeModel_3,
  MR_Word EntryPackedWordMap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_7,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
    *STATE_VARIABLE_ReachableConstVarMaps_8 = STATE_VARIABLE_ReachableConstVarMaps_0_7;
  }
  else
  {
    MR_Word TaggedCase_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word TaggedCases_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word MLDS_Case_27;
    MR_Word MLDS_Cases_28;
    MR_Word STATE_VARIABLE_ReachableConstVarMaps_35_35;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word TaggedMainConsId_37;
    MR_Word TaggedOtherConsIds_38;
    MR_Word Goal_40;
    MR_Word MainCond_41;
    MR_Word OtherConds_42;
    MR_Word Stmt_43;
    MR_Word STATE_VARIABLE_Info_30_44;
    MR_Word Var_45;

    ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedWordMap_4, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_30_44);
    TaggedMainConsId_37 = ((MR_Word) ((MR_hl_field(0, TaggedCase_25, (MR_Integer) 0))));
    TaggedOtherConsIds_38 = ((MR_Word) ((MR_hl_field(0, TaggedCase_25, (MR_Integer) 1))));
    Goal_40 = ((MR_Word) ((MR_hl_field(0, TaggedCase_25, (MR_Integer) 3))));
    ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(MerType_1, MLDS_Type_2, TaggedMainConsId_37, &MainCond_41);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[0]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0_1));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (MerType_1));
      MR_hl_field(0, Var_45, 4) = ((MR_Box) (MLDS_Type_2));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), Var_45, TaggedOtherConsIds_38, &OtherConds_42);
    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_3, Goal_40, &Stmt_43, STATE_VARIABLE_ReachableConstVarMaps_0_7, &STATE_VARIABLE_ReachableConstVarMaps_35_35, STATE_VARIABLE_Info_30_44, &STATE_VARIABLE_Info_36_36);
    {
      MLDS_Case_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MLDS_Case_27, 0) = ((MR_Box) (MainCond_41));
      MR_hl_field(0, MLDS_Case_27, 1) = ((MR_Box) (OtherConds_42));
      MR_hl_field(0, MLDS_Case_27, 2) = ((MR_Box) (Stmt_43));
    }
    ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0(MerType_1, MLDS_Type_2, CodeModel_3, EntryPackedWordMap_4, TaggedCases_26, &MLDS_Cases_28, STATE_VARIABLE_ReachableConstVarMaps_35_35, STATE_VARIABLE_ReachableConstVarMaps_8, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MLDS_Case_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (MLDS_Cases_28));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(
  MR_Word MerType_5,
  MR_Word MLDS_Type_6,
  MR_Word TaggedConsId_7,
  MR_Word * MatchCond_8)
{
  MR_Word Tag_10 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_7, (MR_Integer) 1))));
  MR_Word Rval_12;

  switch (MR_tag((MR_Word) Tag_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/4", (MR_String) "invalid tag type");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_11 = ((MR_Word) ((MR_hl_field(1, Tag_10, (MR_Integer) 0))));

        Rval_12 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_11, MerType_5, MLDS_Type_6);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Tag_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String String_13 = ((MR_String) ((MR_hl_field(3, Tag_10, (MR_Integer) 1))));
            MR_Word Var_42;

            {
              Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, Var_42, 1) = ((MR_Box) (String_13));
            }
            {
              Rval_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Rval_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Rval_12, 1) = ((MR_Box) (Var_42));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForeignLang_14 = ((MR_Unsigned) ((MR_hl_field(3, Tag_10, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String ForeignTag_15 = ((MR_String) ((MR_hl_field(3, Tag_10, (MR_Integer) 2))));
            MR_Word Var_43;

            {
              Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_43, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_14));
              MR_hl_field(3, Var_43, 2) = ((MR_Box) (ForeignTag_15));
              MR_hl_field(3, Var_43, 3) = ((MR_Box) (MLDS_Type_6));
            }
            {
              Rval_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Rval_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Rval_12, 1) = ((MR_Box) (Var_43));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/4", (MR_String) "invalid tag type");
            return;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *MatchCond_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Rval_12));
  }
}

void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(
  MR_Word CanFail_7,
  MR_Word CodeModel_8,
  MR_Word Context_9,
  MR_Word * Default_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_bool succeeded;

  switch (CanFail_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FailStmts_12;

        ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_8, Context_9, &FailStmts_12, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
        succeeded = mercury__list__is_empty_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FailStmts_12);
        if (succeeded)
          *Default_10 = (MR_Word) ((MR_Unsigned) 4U);
        else
        {
          MR_Word Fail_13;

          Fail_13 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FailStmts_12, Context_9);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Default_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Fail_13));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Default_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
      }
      break;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_switch_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_switch_gen.
