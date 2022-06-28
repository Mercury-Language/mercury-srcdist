/*
** Automatically generated from `ml_switch_gen.m'
** by the Mercury compiler,
** version 22.01.3-beta-2022-06-28
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
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
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
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
#include "parse_tree.file_names.mih"
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
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_11_p_0(
  MR_Word SwitchVar_12,
  MR_Word CanFail_13,
  MR_Word TaggedCases_14,
  MR_Word CodeModel_15,
  MR_Word GoalInfo_16,
  MR_Word EntryPackedWordMap_17,
  MR_Word Context_18,
  MR_Word * Decls_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_int64_switch_9_p_0(
  MR_Word SwitchVar_10,
  MR_Word CanFail_11,
  MR_Word TaggedCases_12,
  MR_Word CodeModel_13,
  MR_Word EntryPackedWordMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_12_p_0(
  MR_Word SwitchVar_13,
  MR_Word SwitchVarType_14,
  MR_Word CanFail_15,
  MR_Word TaggedCases_16,
  MR_Word MaybeIntSwitchInfo_17,
  MR_Word CodeModel_18,
  MR_Word GoalInfo_19,
  MR_Word EntryPackedWordMap_20,
  MR_Word Context_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_p_0(
  MR_Word Cases_10,
  MR_Word Var_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedWordMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

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

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(
  MR_Word TaggedCases0_10,
  MR_Word Var_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedWordMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_12_p_0(
  MR_Word TaggedCase_13,
  MR_Word TaggedCases_14,
  MR_Word Var_15,
  MR_Word CodeModel_16,
  MR_Word CanFail_17,
  MR_Word EntryPackedWordMap_18,
  MR_Word Context_19,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_35,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_36,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);


static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_1[3][3];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_2[1][5];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_3[1][7];

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_4[1][6];




static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ml_backend__ml_switch_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_tagged_case_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_3[1][7] = {
  /* row 0 */
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

static /* final */ const MR_Box ml_backend__ml_switch_gen_scalar_common_4[1][6] = {
  /* row 0 */
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
  {
    MR_Word ConsTag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_4, (MR_Integer) 1))));
    MR_Integer ConsIdCost_8;

    ConsIdCost_8 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ConsTag_7);
    *STATE_VARIABLE_CaseCost_10 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CaseCost_0_9 + (MR_Unsigned) ConsIdCost_8);
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_CaseCost_10;

    ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CaseCost_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CaseCost_10));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(
  MR_Word TaggedCase_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Integer Cost_4;
    MR_Word TaggedMainConsId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_3, (MR_Integer) 0))));
    MR_Word TaggedOtherConsIds_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_3, (MR_Integer) 1))));
    MR_Integer MainCost_9;
    MR_Word ConsTag_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedMainConsId_5, (MR_Integer) 1))));
    MR_Integer ConsIdCost_23;
    MR_Box conv1_Cost_4;

    ConsIdCost_23 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(ConsTag_22);
    MainCost_9 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) ConsIdCost_23);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[2]), TaggedOtherConsIds_6, ((MR_Box) (MainCost_9)), &conv1_Cost_4);
    Cost_4 = ((MR_Integer) (conv1_Cost_4));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Cost_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TaggedCase_3));
    }
  }
}

void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_switch_10_p_0(
  MR_Word SwitchVar_11,
  MR_Word CanFail_12,
  MR_Word Cases_13,
  MR_Word CodeModel_14,
  MR_Word Context_15,
  MR_Word GoalInfo_16,
  MR_Word * Decls_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_20;
    MR_Word SwitchVarType_21;
    MR_Word TaggedCases_22;
    MR_Word MaybeIntSwitchInfo_23;
    MR_Word EntryPackedWordMap_24;
    MR_Word SwitchCategory_25;
    MR_Word MayUseSmartIndexing_26;
    MR_Word STATE_VARIABLE_Info_43_43;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_33, &ModuleInfo_20);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_33, SwitchVar_11, &SwitchVarType_21);
    backend_libs__switch_util__tag_cases_5_p_0(ModuleInfo_20, SwitchVarType_21, Cases_13, &TaggedCases_22, &MaybeIntSwitchInfo_23);
    ml_backend__ml_gen_info__ml_gen_info_get_packed_word_map_2_p_0(STATE_VARIABLE_Info_0_33, &EntryPackedWordMap_24);
    backend_libs__switch_util__find_switch_category_4_p_0(ModuleInfo_20, SwitchVarType_21, &SwitchCategory_25, &MayUseSmartIndexing_26);
    switch (MayUseSmartIndexing_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(TaggedCases_22, SwitchVar_11, CodeModel_14, CanFail_12, EntryPackedWordMap_24, Context_15, Stmts_18, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_43_43);
          *Decls_17 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        switch (SwitchCategory_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_12_p_0(SwitchVar_11, SwitchVarType_21, CanFail_12, TaggedCases_22, MaybeIntSwitchInfo_23, CodeModel_14, GoalInfo_16, EntryPackedWordMap_24, Context_15, Stmts_18, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_43_43);
              *Decls_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(TaggedCases_22, SwitchVar_11, CodeModel_14, CanFail_12, EntryPackedWordMap_24, Context_15, Stmts_18, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_43_43);
              *Decls_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_switch_gen__ml_gen_smart_int64_switch_9_p_0(SwitchVar_11, CanFail_12, TaggedCases_22, CodeModel_14, EntryPackedWordMap_24, Context_15, Stmts_18, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_43_43);
              *Decls_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            ml_backend__ml_switch_gen__ml_gen_smart_string_switch_11_p_0(SwitchVar_11, CanFail_12, TaggedCases_22, CodeModel_14, GoalInfo_16, EntryPackedWordMap_24, Context_15, Decls_17, Stmts_18, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_43_43);
            break;
          case (MR_Integer) 3:
            {
              MR_Integer NumConsIds_27;
              MR_Integer NumArms_28;
              MR_Word Globals_29;
              MR_Word OptTuple_30;
              MR_Integer TagSize_31;
              MR_Word StmtsPrime_32;
              MR_Word STATE_VARIABLE_Info_38_38;
              MR_Integer Var_36;
              MR_Word Var_37;

              backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(TaggedCases_22, &NumConsIds_27, &NumArms_28);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_20, &Globals_29);
              libs__globals__get_opt_tuple_2_p_0(Globals_29, &OptTuple_30);
              TagSize_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_30, (MR_Integer) 33))));
              succeeded = (NumConsIds_27 >= TagSize_31);
              if (succeeded)
              {
                Var_36 = (MR_Integer) 1;
                succeeded = (NumArms_28 > Var_36);
                if (succeeded)
                {
                  Var_37 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(Globals_29);
                  succeeded = (Var_37 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = ml_backend__ml_tag_switch__ml_generate_tag_switch_if_possible_9_p_0(TaggedCases_22, SwitchVar_11, CodeModel_14, CanFail_12, EntryPackedWordMap_24, Context_15, &StmtsPrime_32, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_38_38);
                }
              }
              if (succeeded)
              {
                STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_38_38;
                *Stmts_18 = StmtsPrime_32;
              }
              else
                ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(TaggedCases_22, SwitchVar_11, CodeModel_14, CanFail_12, EntryPackedWordMap_24, Context_15, Stmts_18, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_43_43);
              *Decls_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
    }
    ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedWordMap_24, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_34);
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_string_switch_11_p_0(
  MR_Word SwitchVar_12,
  MR_Word CanFail_13,
  MR_Word TaggedCases_14,
  MR_Word CodeModel_15,
  MR_Word GoalInfo_16,
  MR_Word EntryPackedWordMap_17,
  MR_Word Context_18,
  MR_Word * Decls_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_bool succeeded;
    MR_Word FilteredTaggedCases_22;
    MR_Word FilteredCanFail_23;
    MR_Integer NumConsIds_24;
    MR_Integer NumArms_25;
    MR_Word ModuleInfo_26;
    MR_Word Globals_27;

    backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(CodeModel_15, TaggedCases_14, &FilteredTaggedCases_22, CanFail_13, &FilteredCanFail_23);
    backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(FilteredTaggedCases_22, &NumConsIds_24, &NumArms_25);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_36, &ModuleInfo_26);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_26, &Globals_27);
    succeeded = (NumArms_25 < (MR_Integer) 2);
    if (succeeded)
    {
      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(FilteredTaggedCases_22, SwitchVar_12, CodeModel_15, FilteredCanFail_23, EntryPackedWordMap_17, Context_18, Stmts_20, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
      *Decls_19 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_40;

      Var_40 = ml_backend__ml_target_util__globals_target_supports_string_switch_1_f_0(Globals_27);
      succeeded = (Var_40 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_27, (MR_Integer) 358, (MR_Integer) 1);
        if (!(succeeded))
        {
          MR_Word Var_436;

          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_36, &Var_436);
          succeeded = ((MR_Integer) 1 == Var_436);
        }
      }
      if (succeeded)
      {
        ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_p_0(FilteredTaggedCases_22, SwitchVar_12, CodeModel_15, FilteredCanFail_23, EntryPackedWordMap_17, Context_18, Stmts_20, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
        *Decls_19 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        {
          MR_Word Var_437;

          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_36, &Var_437);
          succeeded = ((MR_Integer) 1 == Var_437);
        }
        if (!(succeeded))
        {
          MR_Word Var_45;
          MR_Word Var_46;

          Var_45 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(Globals_27);
          succeeded = (Var_45 == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(Globals_27);
            succeeded = (Var_46 == (MR_Integer) 0);
          }
        }
        if (succeeded)
        {
          ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(FilteredTaggedCases_22, SwitchVar_12, CodeModel_15, FilteredCanFail_23, EntryPackedWordMap_17, Context_18, Stmts_20, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
          *Decls_19 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word MaybeLookupSwitchInfo_28;
          MR_Word SwitchVarLval_29;
          MR_Word SwitchVarRval_30;
          MR_Word OptTuple_31;
          MR_Word STATE_VARIABLE_Info_49_49;
          MR_Integer StringTrieSwitchSize_32;
          MR_Word Var_50;
          MR_Word Var_438;

          ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(SwitchVar_12, FilteredTaggedCases_22, GoalInfo_16, CodeModel_15, &MaybeLookupSwitchInfo_28, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_49_49);
          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_49_49, SwitchVar_12, &SwitchVarLval_29);
          {
            SwitchVarRval_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), SwitchVarRval_30, 0) = ((MR_Box) (SwitchVarLval_29));
          }
          libs__globals__get_opt_tuple_2_p_0(Globals_27, &OptTuple_31);
          StringTrieSwitchSize_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_31, (MR_Integer) 30))));
          succeeded = (NumConsIds_24 >= StringTrieSwitchSize_32);
          if (succeeded)
          {
            Var_50 = (MR_Integer) 0;
            libs__globals__get_target_2_p_0(Globals_27, &Var_438);
            succeeded = (Var_50 == Var_438);
          }
          if (succeeded)
          {
            if ((MaybeLookupSwitchInfo_28 == (MR_Word) ((MR_Unsigned) 0U)))
              ml_backend__ml_string_switch__ml_generate_string_trie_jump_switch_9_p_0(SwitchVarRval_30, FilteredTaggedCases_22, CodeModel_15, FilteredCanFail_23, EntryPackedWordMap_17, Context_18, Stmts_20, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_37);
            else
            {
              MR_Word LookupSwitchInfo_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLookupSwitchInfo_28, (MR_Integer) 0))));

              ml_backend__ml_string_switch__ml_generate_string_trie_lookup_switch_9_p_0(SwitchVarRval_30, FilteredTaggedCases_22, LookupSwitchInfo_33, CodeModel_15, FilteredCanFail_23, Context_18, Stmts_20, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_37);
            }
            *Decls_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Integer StringHashSwitchSize_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_31, (MR_Integer) 31))));

            succeeded = (NumConsIds_24 >= StringHashSwitchSize_34);
            if (succeeded)
              if ((MaybeLookupSwitchInfo_28 == (MR_Word) ((MR_Unsigned) 0U)))
                ml_backend__ml_string_switch__ml_generate_string_hash_jump_switch_10_p_0(SwitchVarRval_30, FilteredTaggedCases_22, CodeModel_15, FilteredCanFail_23, EntryPackedWordMap_17, Context_18, Decls_19, Stmts_20, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_37);
              else
              {
                MR_Word LookupSwitchInfo_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLookupSwitchInfo_28, (MR_Integer) 0))));

                ml_backend__ml_string_switch__ml_generate_string_hash_lookup_switch_10_p_0(SwitchVarRval_30, FilteredTaggedCases_22, LookupSwitchInfo_58, CodeModel_15, FilteredCanFail_23, Context_18, Decls_19, Stmts_20, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_37);
              }
            else
            {
              MR_Integer StringBinarySwitchSize_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_31, (MR_Integer) 32))));

              succeeded = (NumConsIds_24 >= StringBinarySwitchSize_35);
              if (succeeded)
                if ((MaybeLookupSwitchInfo_28 == (MR_Word) ((MR_Unsigned) 0U)))
                  ml_backend__ml_string_switch__ml_generate_string_binary_jump_switch_10_p_0(SwitchVarRval_30, FilteredTaggedCases_22, CodeModel_15, FilteredCanFail_23, EntryPackedWordMap_17, Context_18, Decls_19, Stmts_20, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_37);
                else
                {
                  MR_Word LookupSwitchInfo_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLookupSwitchInfo_28, (MR_Integer) 0))));

                  ml_backend__ml_string_switch__ml_generate_string_binary_lookup_switch_10_p_0(SwitchVarRval_30, FilteredTaggedCases_22, LookupSwitchInfo_60, CodeModel_15, FilteredCanFail_23, Context_18, Decls_19, Stmts_20, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_37);
                }
              else
              {
                ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(FilteredTaggedCases_22, SwitchVar_12, CodeModel_15, FilteredCanFail_23, EntryPackedWordMap_17, Context_18, Stmts_20, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_37);
                *Decls_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_int64_switch_9_p_0(
  MR_Word SwitchVar_10,
  MR_Word CanFail_11,
  MR_Word TaggedCases_12,
  MR_Word CodeModel_13,
  MR_Word EntryPackedWordMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_18;
    MR_Word Globals_19;
    MR_Word Int64SwitchSupported_20;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_21, &ModuleInfo_18);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_18, &Globals_19);
    Int64SwitchSupported_20 = ml_backend__ml_target_util__globals_target_supports_int64_switch_1_f_0(Globals_19);
    switch (Int64SwitchSupported_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(TaggedCases_12, SwitchVar_10, CodeModel_13, CanFail_11, EntryPackedWordMap_14, Context_15, Stmts_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Type_35;
          MR_Word MLDS_Type_36;
          MR_Word Lval_37;
          MR_Word Rval_38;
          MR_Word Range_39;
          MR_Word MLDS_Cases_40;
          MR_Word ReachableConstVarMaps_41;
          MR_Word Default_42;
          MR_Word SwitchStmt0_43;
          MR_Word SwitchStmt_44;
          MR_Word STATE_VARIABLE_Info_31_46;
          MR_Word STATE_VARIABLE_Info_32_47;
          MR_Word STATE_VARIABLE_Info_33_48;
          MR_Integer MinRange_57;
          MR_Integer MaxRange_58;
          MR_Word ModuleInfo_54;
          MR_Word Type_55;
          MR_Word TypeCategory_56;
          MR_Integer _NumValuesInRange_59;

          ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_21, SwitchVar_10, &Type_35);
          ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_21, Type_35, &MLDS_Type_36);
          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_21, SwitchVar_10, &Lval_37);
          {
            Rval_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Rval_38, 0) = ((MR_Box) (Lval_37));
          }
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_21, &ModuleInfo_54);
          succeeded = ((((MR_tag((MR_Word) MLDS_Type_36)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Type_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_36, (MR_Integer) 1))));
            TypeCategory_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_36, (MR_Integer) 2))));
            succeeded = backend_libs__switch_util__type_range_6_p_0(ModuleInfo_54, TypeCategory_56, Type_55, &MinRange_57, &MaxRange_58, &_NumValuesInRange_59);
          }
          if (succeeded)
            {
              Range_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Range_39, 0) = ((MR_Box) (MinRange_57));
              MR_hl_field(MR_mktag(1), Range_39, 1) = ((MR_Box) (MaxRange_58));
            }
          else
            Range_39 = (MR_Word) ((MR_Unsigned) 0U);
          ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0(Type_35, MLDS_Type_36, CodeModel_13, EntryPackedWordMap_14, TaggedCases_12, &MLDS_Cases_40, (MR_Word) ((MR_Unsigned) 0U), &ReachableConstVarMaps_41, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_31_46);
          ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_41, STATE_VARIABLE_Info_31_46, &STATE_VARIABLE_Info_32_47);
          ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CanFail_11, CodeModel_13, Context_15, &Default_42, STATE_VARIABLE_Info_32_47, &STATE_VARIABLE_Info_33_48);
          {
            SwitchStmt0_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SwitchStmt0_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), SwitchStmt0_43, 1) = ((MR_Box) (MLDS_Type_36));
            MR_hl_field(MR_mktag(3), SwitchStmt0_43, 2) = ((MR_Box) (Rval_38));
            MR_hl_field(MR_mktag(3), SwitchStmt0_43, 3) = ((MR_Box) (Range_39));
            MR_hl_field(MR_mktag(3), SwitchStmt0_43, 4) = ((MR_Box) (MLDS_Cases_40));
            MR_hl_field(MR_mktag(3), SwitchStmt0_43, 5) = ((MR_Box) (Default_42));
            MR_hl_field(MR_mktag(3), SwitchStmt0_43, 6) = ((MR_Box) (Context_15));
          }
          ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_43, &SwitchStmt_44, STATE_VARIABLE_Info_33_48, STATE_VARIABLE_Info_22);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SwitchStmt_44));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_gen_smart_atomic_switch_12_p_0(
  MR_Word SwitchVar_13,
  MR_Word SwitchVarType_14,
  MR_Word CanFail_15,
  MR_Word TaggedCases_16,
  MR_Word MaybeIntSwitchInfo_17,
  MR_Word CodeModel_18,
  MR_Word GoalInfo_19,
  MR_Word EntryPackedWordMap_20,
  MR_Word Context_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  {
    MR_bool succeeded;
    MR_Integer NumConsIds_24;
    MR_Integer NumArms_25;
    MR_Word ModuleInfo_26;
    MR_Word Globals_27;
    MR_Word NeedBitVecCheck_37;
    MR_Word NeedRangeCheck_38;
    MR_Integer FirstVal_39;
    MR_Integer LastVal_40;
    MR_Word LookupSwitchInfo_42;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word IntSwitchInfo_28;
    MR_Integer LowerLimit_29;
    MR_Integer UpperLimit_30;
    MR_Integer NumValues_31;
    MR_Word OptTuple_32;
    MR_Integer LookupSize_33;
    MR_Integer ReqDensity_34;
    MR_Word FilteredTaggedCases_35;
    MR_Word FilteredCanFail_36;
    MR_Word MaybeLookupSwitchInfo_41;
    MR_Word Var_47;
    MR_Integer Var_48;
    MR_Word Var_427;

    backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(TaggedCases_16, &NumConsIds_24, &NumArms_25);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_44, &ModuleInfo_26);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_26, &Globals_27);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_44, &Var_427);
    succeeded = ((MR_Integer) 0 == Var_427);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeIntSwitchInfo_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        IntSwitchInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIntSwitchInfo_17, (MR_Integer) 0))));
        LowerLimit_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntSwitchInfo_28, (MR_Integer) 0))));
        UpperLimit_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntSwitchInfo_28, (MR_Integer) 1))));
        NumValues_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntSwitchInfo_28, (MR_Integer) 2))));
        libs__globals__get_opt_tuple_2_p_0(Globals_27, &OptTuple_32);
        Var_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_32, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
        ReqDensity_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_32, (MR_Integer) 27))));
        LookupSize_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_32, (MR_Integer) 29))));
        succeeded = (Var_47 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (NumConsIds_24 >= LookupSize_33);
          if (succeeded)
          {
            Var_48 = (MR_Integer) 1;
            succeeded = (NumArms_25 > Var_48);
            if (succeeded)
            {
              backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(CodeModel_18, TaggedCases_16, &FilteredTaggedCases_35, CanFail_15, &FilteredCanFail_36);
              succeeded = backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(ModuleInfo_26, SwitchVarType_14, FilteredCanFail_36, LowerLimit_29, UpperLimit_30, NumValues_31, ReqDensity_34, &NeedBitVecCheck_37, &NeedRangeCheck_38, &FirstVal_39, &LastVal_40);
              if (succeeded)
              {
                ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(SwitchVar_13, FilteredTaggedCases_35, GoalInfo_19, CodeModel_18, &MaybeLookupSwitchInfo_41, STATE_VARIABLE_Info_0_44, &STATE_VARIABLE_Info_49_49);
                succeeded = (MaybeLookupSwitchInfo_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  LookupSwitchInfo_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLookupSwitchInfo_41, (MR_Integer) 0))));
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word LookupStmt_43;

      ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0(SwitchVar_13, TaggedCases_16, LookupSwitchInfo_42, CodeModel_18, Context_21, FirstVal_39, LastVal_40, NeedBitVecCheck_37, NeedRangeCheck_38, &LookupStmt_43, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_45);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_22 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LookupStmt_43));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_52;

      Var_52 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(Globals_27);
      succeeded = (Var_52 == (MR_Integer) 1);
      if (succeeded)
        ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_p_0(TaggedCases_16, SwitchVar_13, CodeModel_18, CanFail_15, EntryPackedWordMap_20, Context_21, Stmts_22, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
      else
        ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(TaggedCases_16, SwitchVar_13, CodeModel_18, CanFail_15, EntryPackedWordMap_20, Context_21, Stmts_22, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_p_0(
  MR_Word Cases_10,
  MR_Word Var_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedWordMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;
    MR_Word Type_18;
    MR_Word MLDS_Type_19;
    MR_Word Lval_20;
    MR_Word Rval_21;
    MR_Word Range_22;
    MR_Word MLDS_Cases_23;
    MR_Word ReachableConstVarMaps_24;
    MR_Word Default_25;
    MR_Word SwitchStmt0_26;
    MR_Word SwitchStmt_27;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Integer MinRange_42;
    MR_Integer MaxRange_43;
    MR_Word ModuleInfo_39;
    MR_Word Type_40;
    MR_Word TypeCategory_41;
    MR_Integer _NumValuesInRange_44;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_28, Var_11, &Type_18);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_28, Type_18, &MLDS_Type_19);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_28, Var_11, &Lval_20);
    {
      Rval_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Rval_21, 0) = ((MR_Box) (Lval_20));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_28, &ModuleInfo_39);
    succeeded = ((((MR_tag((MR_Word) MLDS_Type_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Type_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_19, (MR_Integer) 1))));
      TypeCategory_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_19, (MR_Integer) 2))));
      succeeded = backend_libs__switch_util__type_range_6_p_0(ModuleInfo_39, TypeCategory_41, Type_40, &MinRange_42, &MaxRange_43, &_NumValuesInRange_44);
    }
    if (succeeded)
      {
        Range_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Range_22, 0) = ((MR_Box) (MinRange_42));
        MR_hl_field(MR_mktag(1), Range_22, 1) = ((MR_Box) (MaxRange_43));
      }
    else
      Range_22 = (MR_Word) ((MR_Unsigned) 0U);
    ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0(Type_18, MLDS_Type_19, CodeModel_12, EntryPackedWordMap_14, Cases_10, &MLDS_Cases_23, (MR_Word) ((MR_Unsigned) 0U), &ReachableConstVarMaps_24, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_31_31);
    ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_24, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_32_32);
    ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(CanFail_13, CodeModel_12, Context_15, &Default_25, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_33_33);
    {
      SwitchStmt0_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchStmt0_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SwitchStmt0_26, 1) = ((MR_Box) (MLDS_Type_19));
      MR_hl_field(MR_mktag(3), SwitchStmt0_26, 2) = ((MR_Box) (Rval_21));
      MR_hl_field(MR_mktag(3), SwitchStmt0_26, 3) = ((MR_Box) (Range_22));
      MR_hl_field(MR_mktag(3), SwitchStmt0_26, 4) = ((MR_Box) (MLDS_Cases_23));
      MR_hl_field(MR_mktag(3), SwitchStmt0_26, 5) = ((MR_Box) (Default_25));
      MR_hl_field(MR_mktag(3), SwitchStmt0_26, 6) = ((MR_Box) (Context_15));
    }
    ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(SwitchStmt0_26, &SwitchStmt_27, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_29);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SwitchStmt_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MatchCond_8;

    ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MatchCond_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_MatchCond_8));
  }
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
    MR_Word TaggedCase_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word TaggedCases_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word MLDS_Case_27;
    MR_Word MLDS_Cases_28;
    MR_Word STATE_VARIABLE_ReachableConstVarMaps_35_35;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word TaggedMainConsId_51;
    MR_Word TaggedOtherConsIds_52;
    MR_Word Goal_54;
    MR_Word MainCond_55;
    MR_Word OtherConds_56;
    MR_Word Stmt_57;
    MR_Word STATE_VARIABLE_Info_30_58;
    MR_Word Var_59;

    ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedWordMap_4, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_30_58);
    TaggedMainConsId_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_25, (MR_Integer) 0))));
    TaggedOtherConsIds_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_25, (MR_Integer) 1))));
    Goal_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_25, (MR_Integer) 3))));
    ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_4_p_0(MerType_1, MLDS_Type_2, TaggedMainConsId_51, &MainCond_55);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&ml_backend__ml_switch_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (MerType_1));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (MLDS_Type_2));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), Var_59, TaggedOtherConsIds_52, &OtherConds_56);
    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_3, Goal_54, &Stmt_57, STATE_VARIABLE_ReachableConstVarMaps_0_7, &STATE_VARIABLE_ReachableConstVarMaps_35_35, STATE_VARIABLE_Info_30_58, &STATE_VARIABLE_Info_36_36);
    {
      MLDS_Case_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MLDS_Case_27, 0) = ((MR_Box) (MainCond_55));
      MR_hl_field(MR_mktag(0), MLDS_Case_27, 1) = ((MR_Box) (OtherConds_56));
      MR_hl_field(MR_mktag(0), MLDS_Case_27, 2) = ((MR_Box) (Stmt_57));
    }
    ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_10_p_0(MerType_1, MLDS_Type_2, CodeModel_3, EntryPackedWordMap_4, TaggedCases_26, &MLDS_Cases_28, STATE_VARIABLE_ReachableConstVarMaps_35_35, STATE_VARIABLE_ReachableConstVarMaps_8, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MLDS_Case_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MLDS_Cases_28));
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
  {
    MR_Word Tag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 1))));
    MR_Word Rval_12;

    switch (MR_tag((MR_Word) Tag_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/4", (MR_String) "invalid tag type");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tag_10, (MR_Integer) 0))));

          Rval_12 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_11, MerType_5, MLDS_Type_6);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_tagged_cons_id_to_match_cond\'/4", (MR_String) "invalid tag type");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Tag_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), Tag_10, (MR_Integer) 1))));
              MR_Word Var_45;

              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (String_13));
              }
              {
                Rval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Rval_12, 1) = ((MR_Box) (Var_45));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Tag_10, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String ForeignTag_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Tag_10, (MR_Integer) 2))));
              MR_Word Var_44;

              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), Var_44, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_14));
                MR_hl_field(MR_mktag(3), Var_44, 2) = ((MR_Box) (ForeignTag_15));
                MR_hl_field(MR_mktag(3), Var_44, 3) = ((MR_Box) (MLDS_Type_6));
              }
              {
                Rval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Rval_12, 1) = ((MR_Box) (Var_44));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_12));
    }
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
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Default_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Fail_13));
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
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    ml_backend__ml_switch_gen__mark_tag_test_cost_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_p_0(
  MR_Word TaggedCases0_10,
  MR_Word Var_11,
  MR_Word CodeModel_12,
  MR_Word CanFail_13,
  MR_Word EntryPackedWordMap_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_Word CostTaggedCases0_18;
    MR_Word CostTaggedCases_19;
    MR_Word TaggedCases_20;

    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), (MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[1]), TaggedCases0_10, &CostTaggedCases0_18);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__ml_switch_gen_scalar_common_1[0]), CostTaggedCases0_18, &CostTaggedCases_19);
    mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), CostTaggedCases_19, &TaggedCases_20);
    if ((TaggedCases_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_switch_gen.ml_switch_generate_if_then_else_chain\'/9", (MR_String) "empty switch");
        return;
      }
    else
    {
      MR_Word FirstTaggedCase_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TaggedCases_20, (MR_Integer) 0))));
      MR_Word LaterTaggedCases_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TaggedCases_20, (MR_Integer) 1))));
      MR_Word ReachableConstVarMaps_23;
      MR_Word STATE_VARIABLE_Info_28_28;

      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_12_p_0(FirstTaggedCase_21, LaterTaggedCases_22, Var_11, CodeModel_12, CanFail_13, EntryPackedWordMap_14, Context_15, Stmts_16, (MR_Word) ((MR_Unsigned) 0U), &ReachableConstVarMaps_23, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
      ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_23, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_25);
    }
  }
}

static void MR_CALL 
ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_12_p_0(
  MR_Word TaggedCase_13,
  MR_Word TaggedCases_14,
  MR_Word Var_15,
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
  {
    MR_Word Stmt_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Goal_26;
    MR_Word STATE_VARIABLE_Info_40_40;

    ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedWordMap_18, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_40_40);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 1))));
    Goal_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_13, (MR_Integer) 3))));
    if ((TaggedCases_14 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (CanFail_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Cond_27;
            MR_Word GoalBlock_28;
            MR_Word FailStmts_29;
            MR_Word FailBlock_30;
            MR_Word STATE_VARIABLE_Info_49_49;
            MR_Word STATE_VARIABLE_Info_51_51;
            MR_Word Var_55;

            ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_6_p_0(Var_15, Var_23, Var_24, &Cond_27, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_49_49);
            ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_16, Goal_26, &GoalBlock_28, STATE_VARIABLE_ReachableConstVarMaps_0_35, STATE_VARIABLE_ReachableConstVarMaps_36, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_51_51);
            ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_16, Context_19, &FailStmts_29, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_38);
            FailBlock_30 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FailStmts_29, Context_19);
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (FailBlock_30));
            }
            {
              Stmt_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Stmt_20, 0) = ((MR_Box) (Cond_27));
              MR_hl_field(MR_mktag(2), Stmt_20, 1) = ((MR_Box) (GoalBlock_28));
              MR_hl_field(MR_mktag(2), Stmt_20, 2) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(2), Stmt_20, 3) = ((MR_Box) (Context_19));
            }
          }
          break;
        case (MR_Integer) 1:
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_16, Goal_26, &Stmt_20, STATE_VARIABLE_ReachableConstVarMaps_0_35, STATE_VARIABLE_ReachableConstVarMaps_36, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_38);
          break;
      }
    else
    {
      MR_Word LaterTaggedCase_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TaggedCases_14, (MR_Integer) 0))));
      MR_Word LaterTaggedCases_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TaggedCases_14, (MR_Integer) 1))));
      MR_Word LaterStmts_33;
      MR_Word LaterBlock_34;
      MR_Word STATE_VARIABLE_Info_41_41;
      MR_Word STATE_VARIABLE_ReachableConstVarMaps_42_42;
      MR_Word STATE_VARIABLE_Info_43_43;
      MR_Word Var_48;
      MR_Word Cond_58;
      MR_Word GoalBlock_59;

      ml_backend__ml_unify_gen_test__ml_generate_test_var_has_one_tagged_cons_id_6_p_0(Var_15, Var_23, Var_24, &Cond_58, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_41_41);
      ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_16, Goal_26, &GoalBlock_59, STATE_VARIABLE_ReachableConstVarMaps_0_35, &STATE_VARIABLE_ReachableConstVarMaps_42_42, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_43_43);
      ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_12_p_0(LaterTaggedCase_31, LaterTaggedCases_32, Var_15, CodeModel_16, CanFail_17, EntryPackedWordMap_18, Context_19, &LaterStmts_33, STATE_VARIABLE_ReachableConstVarMaps_42_42, STATE_VARIABLE_ReachableConstVarMaps_36, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_38);
      LaterBlock_34 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), LaterStmts_33, Context_19);
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (LaterBlock_34));
      }
      {
        Stmt_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Stmt_20, 0) = ((MR_Box) (Cond_58));
        MR_hl_field(MR_mktag(2), Stmt_20, 1) = ((MR_Box) (GoalBlock_59));
        MR_hl_field(MR_mktag(2), Stmt_20, 2) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(2), Stmt_20, 3) = ((MR_Box) (Context_19));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
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
