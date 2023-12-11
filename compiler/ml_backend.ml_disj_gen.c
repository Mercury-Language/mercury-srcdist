/*
** Automatically generated from `ml_disj_gen.m'
** by the Mercury compiler,
** version rotd-2023-12-11
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


// :- module ml_backend.ml_disj_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_disj_gen__init
ENDINIT
*/

#include "ml_backend.ml_disj_gen.mih"


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
#include "backend_libs.rtti.mih"
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
#include "ml_backend.ml_util.mih"
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




static const MR_FA_TypeInfo_Struct1 ml_backend__ml_disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static MR_bool MR_CALL 
ml_backend__ml_disj_gen__ml_gen_disj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_52_93_95_48_9_p_0(
  MR_Word FirstDisjunct_10,
  MR_Word LaterDisjuncts_11,
  MR_Word EntryPackedWordMap_12,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_22,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static MR_Box MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0(
  MR_Word OutVars_7,
  MR_Word Solns_8,
  MR_Word Context_9,
  MR_Word * Stmts_10,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static MR_Box MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_10_p_0(
  MR_Word FirstDisjunct_11,
  MR_Word LaterDisjuncts_12,
  MR_Word EntryPackedWordMap_13,
  MR_Word CodeModel_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_30,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static MR_Word MR_CALL 
ml_backend__ml_disj_gen__allow_lookup_disj_1_f_0(
  MR_Word HeadVar__1_1);


static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_1[5][2];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_2[3][1];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_4[1][3];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_5[1][6];

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_6[1][8];




static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_disj_gen_scalar_common_2[0])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_disj_gen_scalar_common_2[2])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__ml_disj_gen_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_disj_gen_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__ml_disj_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_disj_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 ml_backend__ml_disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__ml_disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_disj_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0) }
};

static MR_bool MR_CALL 
ml_backend__ml_disj_gen__ml_gen_disj_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__5_5;

  succeeded = ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_disj_7_p_0(
  MR_Word Disjuncts_8,
  MR_Word GoalInfo_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word * Stmts_12,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;

  if ((Disjuncts_8 == (MR_Word) ((MR_Unsigned) 0U)))
    ml_backend__ml_code_util__ml_gen_failure_5_p_0(CodeModel_10, Context_11, Stmts_12, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
  else
  {
    MR_Word Var_180 = ((MR_Word) ((MR_hl_field(1, Disjuncts_8, (MR_Integer) 1))));
    MR_Word Var_181 = ((MR_Word) ((MR_hl_field(1, Disjuncts_8, (MR_Integer) 0))));

    if ((Var_180 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_disj_gen.ml_gen_disj\'/7", (MR_String) "single disjunct");
        return;
      }
    else
    {
      MR_Word EntryPackedWordMap_19;
      MR_Word STATE_VARIABLE_Info_38_38;

      ml_backend__ml_gen_info__ml_gen_info_get_packed_word_map_2_p_0(STATE_VARIABLE_Info_0_29, &EntryPackedWordMap_19);
      switch (CodeModel_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_43_43;
            MR_Word ReachableConstVarMaps_46;

            ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_10_p_0(Var_181, Var_180, EntryPackedWordMap_19, CodeModel_10, Context_11, Stmts_12, (MR_Word) ((MR_Unsigned) 0U), &ReachableConstVarMaps_46, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_43_43);
            ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_46, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_38_38);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OutVars_26;
            MR_Word Solns_27;
            MR_Word STATE_VARIABLE_Info_37_37;
            MR_Word TypeCtorInfo_172_172;
            MR_Word TypeCtorInfo_177_177;
            MR_Word TypeInfo_178_178;
            MR_Word TypeCtorInfo_179_179;
            MR_Word Target_20;
            MR_Word ModuleInfo_21;
            MR_Word Globals_22;
            MR_Word OptTuple_23;
            MR_Word DisjNonLocals_24;
            MR_Word NonLocals_25;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Box conv2_STATE_VARIABLE_Info_37_37;

            ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_29, &Target_20);
            Var_34 = ml_backend__ml_disj_gen__allow_lookup_disj_1_f_0(Target_20);
            succeeded = (Var_34 == (MR_Integer) 1);
            if (succeeded)
            {
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_29, &ModuleInfo_21);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_22);
              libs__globals__get_opt_tuple_2_p_0(Globals_22, &OptTuple_23);
              Var_35 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_23, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
              succeeded = (Var_35 == (MR_Integer) 0);
              if (succeeded)
              {
                DisjNonLocals_24 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(DisjNonLocals_24, Disjuncts_8);
                if (succeeded)
                {
                  NonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                  TypeCtorInfo_172_172 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  OutVars_26 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_172_172, NonLocals_25);
                  TypeCtorInfo_177_177 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                  TypeInfo_178_178 = (MR_Word) (&ml_backend__ml_disj_gen_scalar_common_1[0]);
                  TypeCtorInfo_179_179 = (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0);
                  {
                    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&ml_backend__ml_disj_gen_scalar_common_6[0]));
                    MR_hl_field(0, Var_36, 1) = ((MR_Box) (ml_backend__ml_disj_gen__ml_gen_disj_7_p_0_1));
                    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_36, 3) = ((MR_Box) (OutVars_26));
                  }
                  succeeded = mercury__list__map_foldl_5_p_3(TypeCtorInfo_177_177, TypeInfo_178_178, TypeCtorInfo_179_179, Var_36, Disjuncts_8, &Solns_27, ((MR_Box) (STATE_VARIABLE_Info_0_29)), &conv2_STATE_VARIABLE_Info_37_37);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_37_37 = ((MR_Word) (conv2_STATE_VARIABLE_Info_37_37));
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
            if (succeeded)
              ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0(OutVars_26, Solns_27, Context_11, Stmts_12, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_38_38);
            else
            {
              MR_Word ReachableConstVarMaps_28;
              MR_Word STATE_VARIABLE_Info_40_40;
              MR_Word FirstLaterDisjunct_183;
              MR_Word LaterLaterDisjuncts_184;
              MR_Word FirstStmt_185;
              MR_Word LaterStmts_186;
              MR_Word STATE_VARIABLE_Info_26_187;
              MR_Word STATE_VARIABLE_ReachableConstVarMaps_32_191;
              MR_Word STATE_VARIABLE_Info_33_192;

              ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedWordMap_19, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_26_187);
              FirstLaterDisjunct_183 = ((MR_Word) ((MR_hl_field(1, Var_180, (MR_Integer) 0))));
              LaterLaterDisjuncts_184 = ((MR_Word) ((MR_hl_field(1, Var_180, (MR_Integer) 1))));
              ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0((MR_Integer) 2, Var_181, &FirstStmt_185, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ReachableConstVarMaps_32_191, STATE_VARIABLE_Info_26_187, &STATE_VARIABLE_Info_33_192);
              ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_52_93_95_48_9_p_0(FirstLaterDisjunct_183, LaterLaterDisjuncts_184, EntryPackedWordMap_19, &LaterStmts_186, STATE_VARIABLE_ReachableConstVarMaps_32_191, &ReachableConstVarMaps_28, STATE_VARIABLE_Info_33_192, &STATE_VARIABLE_Info_40_40);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (FirstStmt_185));
                MR_hl_field(1, base, 1) = ((MR_Box) (LaterStmts_186));
              }
              ml_backend__ml_code_gen__ml_gen_record_consensus_const_var_map_3_p_0(ReachableConstVarMaps_28, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_38_38);
            }
          }
          break;
      }
      ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedWordMap_19, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_30);
    }
  }
}

static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_52_93_95_48_9_p_0(
  MR_Word FirstDisjunct_10,
  MR_Word LaterDisjuncts_11,
  MR_Word EntryPackedWordMap_12,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_22,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word STATE_VARIABLE_Info_26_26;

  ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedWordMap_12, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_26_26);
  if ((LaterDisjuncts_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Stmt_17;

    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0((MR_Integer) 2, FirstDisjunct_10, &Stmt_17, STATE_VARIABLE_ReachableConstVarMaps_0_22, STATE_VARIABLE_ReachableConstVarMaps_23, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_17));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word FirstLaterDisjunct_18 = ((MR_Word) ((MR_hl_field(1, LaterDisjuncts_11, (MR_Integer) 0))));
    MR_Word LaterLaterDisjuncts_19 = ((MR_Word) ((MR_hl_field(1, LaterDisjuncts_11, (MR_Integer) 1))));
    MR_Word FirstStmt_20;
    MR_Word LaterStmts_21;
    MR_Word STATE_VARIABLE_ReachableConstVarMaps_32_32;
    MR_Word STATE_VARIABLE_Info_33_33;

    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0((MR_Integer) 2, FirstDisjunct_10, &FirstStmt_20, STATE_VARIABLE_ReachableConstVarMaps_0_22, &STATE_VARIABLE_ReachableConstVarMaps_32_32, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_33_33);
    ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_109_111_100_101_108_95_110_111_110_95_100_105_115_106_95_95_91_52_93_95_48_9_p_0(FirstLaterDisjunct_18, LaterLaterDisjuncts_19, EntryPackedWordMap_12, &LaterStmts_21, STATE_VARIABLE_ReachableConstVarMaps_32_32, STATE_VARIABLE_ReachableConstVarMaps_23, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FirstStmt_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (LaterStmts_21));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = ml_backend__ml_code_util__var_table_entry_to_mlds_type_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0(
  MR_Word OutVars_7,
  MR_Word Solns_8,
  MR_Word Context_9,
  MR_Word * Stmts_10,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  MR_Word ModuleInfo_12;
  MR_Word ModuleName_13;
  MR_Word MLDS_ModuleName_14;
  MR_Word Target_15;
  MR_Word VarTable_16;
  MR_Word OutVarEntries_17;
  MR_Word MLDS_FieldTypes_18;
  MR_Word GlobalData0_19;
  MR_Word StructTypeNum_20;
  MR_Word StructType_21;
  MR_Word FieldIds_22;
  MR_Word GlobalData1_23;
  MR_Word RowInitializers_24;
  MR_Integer NumRows_25;
  MR_Word VectorCommon_26;
  MR_Word GlobalData_27;
  MR_Word SlotVar_28;
  MR_Word SlotVarType_29;
  MR_Word SlotVarDefn_31;
  MR_Word SlotVarLval_32;
  MR_Word SlotVarRval_33;
  MR_Word LookupStmts_34;
  MR_Word CallContStmt_35;
  MR_Word InitSlotVarStmt_36;
  MR_Word IncrSlotVarStmt_37;
  MR_Word LoopBodyStmt_38;
  MR_Word LoopCond_39;
  MR_Word LoopStmt_40;
  MR_Word Stmt_41;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_Word STATE_VARIABLE_Info_47_47;
  MR_Word STATE_VARIABLE_Info_49_49;
  MR_Word Var_51;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_75;
  MR_Word Var_78;
  MR_Word Var_79;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_42, &ModuleInfo_12);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_12, &ModuleName_13);
  MLDS_ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_13);
  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_42, &Target_15);
  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_42, &VarTable_16);
  parse_tree__var_table__lookup_var_entries_3_p_0(VarTable_16, OutVars_7, &OutVarEntries_17);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&ml_backend__ml_disj_gen_scalar_common_5[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (ml_backend__ml_disj_gen__ml_gen_lookup_disj_6_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (ModuleInfo_12));
  }
  MLDS_FieldTypes_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Var_44, OutVarEntries_17);
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_42, &GlobalData0_19);
  ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_14, Context_9, Target_15, MLDS_FieldTypes_18, &StructTypeNum_20, &StructType_21, &FieldIds_22, GlobalData0_19, &GlobalData1_23);
  ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(StructType_21, Solns_8, &RowInitializers_24);
  mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitializers_24, &NumRows_25);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_14, StructTypeNum_20, RowInitializers_24, &VectorCommon_26, GlobalData1_23, &GlobalData_27);
  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_27, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_45_45);
  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 1, &SlotVar_28, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_47_47);
  SlotVarType_29 = (MR_Word) (MR_mkword(3, &ml_backend__ml_disj_gen_scalar_common_1[1]));
  SlotVarDefn_31 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(SlotVar_28, SlotVarType_29, (MR_Word) ((MR_Unsigned) 0U), Context_9);
  {
    SlotVarLval_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SlotVarLval_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, SlotVarLval_32, 1) = ((MR_Box) (SlotVar_28));
    MR_hl_field(3, SlotVarLval_32, 2) = ((MR_Box) (SlotVarType_29));
  }
  {
    SlotVarRval_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, SlotVarRval_33, 0) = ((MR_Box) (SlotVarLval_32));
  }
  ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_7, MLDS_FieldTypes_18, FieldIds_22, VectorCommon_26, StructType_21, SlotVarRval_33, Context_9, &LookupStmts_34, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_49_49);
  ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(Context_9, &CallContStmt_35, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_43);
  {
    Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_51, 0) = ((MR_Box) (SlotVarLval_32));
    MR_hl_field(2, Var_51, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_disj_gen_scalar_common_1[2])));
  }
  {
    InitSlotVarStmt_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InitSlotVarStmt_36, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, InitSlotVarStmt_36, 1) = ((MR_Box) (Var_51));
    MR_hl_field(3, InitSlotVarStmt_36, 2) = ((MR_Box) (Context_9));
  }
  {
    Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_56, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_disj_gen_scalar_common_2[1])));
    MR_hl_field(3, Var_56, 2) = ((MR_Box) (SlotVarRval_33));
    MR_hl_field(3, Var_56, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_disj_gen_scalar_common_1[3])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_55, 0) = ((MR_Box) (SlotVarLval_32));
    MR_hl_field(2, Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    IncrSlotVarStmt_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, IncrSlotVarStmt_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, IncrSlotVarStmt_37, 1) = ((MR_Box) (Var_55));
    MR_hl_field(3, IncrSlotVarStmt_37, 2) = ((MR_Box) (Context_9));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (IncrSlotVarStmt_37));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (CallContStmt_35));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
  }
  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), LookupStmts_34, Var_65);
  {
    LoopBodyStmt_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LoopBodyStmt_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, LoopBodyStmt_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, LoopBodyStmt_38, 2) = ((MR_Box) (Var_64));
    MR_hl_field(0, LoopBodyStmt_38, 3) = ((MR_Box) (Context_9));
  }
  {
    Var_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_71, 0) = ((MR_Box) (NumRows_25));
  }
  {
    Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_70, 1) = ((MR_Box) (Var_71));
  }
  {
    LoopCond_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LoopCond_39, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, LoopCond_39, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_disj_gen_scalar_common_1[4])));
    MR_hl_field(3, LoopCond_39, 2) = ((MR_Box) (SlotVarRval_33));
    MR_hl_field(3, LoopCond_39, 3) = ((MR_Box) (Var_70));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (SlotVar_28));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LoopStmt_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LoopStmt_40, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(1, LoopStmt_40, 1) = ((MR_Box) (LoopCond_39));
    MR_hl_field(1, LoopStmt_40, 2) = ((MR_Box) (LoopBodyStmt_38));
    MR_hl_field(1, LoopStmt_40, 3) = ((MR_Box) (Var_73));
    MR_hl_field(1, LoopStmt_40, 4) = ((MR_Box) (Context_9));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (SlotVarDefn_31));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (LoopStmt_40));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (InitSlotVarStmt_36));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    Stmt_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Stmt_41, 0) = ((MR_Box) (Var_75));
    MR_hl_field(0, Stmt_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Stmt_41, 2) = ((MR_Box) (Var_78));
    MR_hl_field(0, Stmt_41, 3) = ((MR_Box) (Context_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Stmts_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_41));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Soln_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Solns_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RowInitializer_11;
    MR_Word RowInitializers_12;
    MR_Word FieldInitializers_13;

    FieldInitializers_13 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_disj_gen_scalar_common_4[0]), Soln_9);
    {
      RowInitializer_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, RowInitializer_11, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(2, RowInitializer_11, 1) = ((MR_Box) (FieldInitializers_13));
    }
    ml_backend__ml_disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_100_105_115_106_117_110_99_116_105_111_110_95_118_101_99_116_111_114_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2, Solns_10, &RowInitializers_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RowInitializer_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (RowInitializers_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_10_p_0(
  MR_Word FirstDisjunct_11,
  MR_Word LaterDisjuncts_12,
  MR_Word EntryPackedWordMap_13,
  MR_Word CodeModel_14,
  MR_Word Context_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_ReachableConstVarMaps_0_30,
  MR_Word * STATE_VARIABLE_ReachableConstVarMaps_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_Word STATE_VARIABLE_Info_34_34;

  ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(EntryPackedWordMap_13, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_34_34);
  if ((LaterDisjuncts_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Stmt_19;

    ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0(CodeModel_14, FirstDisjunct_11, &Stmt_19, STATE_VARIABLE_ReachableConstVarMaps_0_30, STATE_VARIABLE_ReachableConstVarMaps_31, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_33);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_19));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word FirstLaterDisjunct_20 = ((MR_Word) ((MR_hl_field(1, LaterDisjuncts_12, (MR_Integer) 0))));
    MR_Word LaterLaterDisjuncts_21 = ((MR_Word) ((MR_hl_field(1, LaterDisjuncts_12, (MR_Integer) 1))));
    MR_Word FirstGoalInfo_23 = ((MR_Word) ((MR_hl_field(0, FirstDisjunct_11, (MR_Integer) 1))));
    MR_Word FirstCodeModel_24;

    FirstCodeModel_24 = hlds__code_model__goal_info_get_code_model_1_f_0(FirstGoalInfo_23);
    switch (FirstCodeModel_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Stmt_57;

          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0((MR_Integer) 0, FirstDisjunct_11, &Stmt_57, STATE_VARIABLE_ReachableConstVarMaps_0_30, STATE_VARIABLE_ReachableConstVarMaps_31, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_33);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_57));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_disj_gen.ml_gen_ordinary_model_det_semi_disj\'/10", (MR_String) "model_non disjunct in model_det or model_semi disjunction");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FirstStmt_25;
          MR_Word Succeeded_26;
          MR_Word LaterStmts_27;
          MR_Word LaterStmt_28;
          MR_Word IfStmt_29;
          MR_Word STATE_VARIABLE_ReachableConstVarMaps_43_43;
          MR_Word STATE_VARIABLE_Info_44_44;
          MR_Word STATE_VARIABLE_Info_45_45;
          MR_Word Var_50;
          MR_Word Var_53;

          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_7_p_0((MR_Integer) 1, FirstDisjunct_11, &FirstStmt_25, STATE_VARIABLE_ReachableConstVarMaps_0_30, &STATE_VARIABLE_ReachableConstVarMaps_43_43, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_44_44);
          ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&Succeeded_26, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_45_45);
          ml_backend__ml_disj_gen__ml_gen_ordinary_model_det_semi_disj_10_p_0(FirstLaterDisjunct_20, LaterLaterDisjuncts_21, EntryPackedWordMap_13, CodeModel_14, Context_15, &LaterStmts_27, STATE_VARIABLE_ReachableConstVarMaps_43_43, STATE_VARIABLE_ReachableConstVarMaps_31, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_33);
          LaterStmt_28 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), LaterStmts_27, Context_15);
          {
            Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(3, Var_50, 2) = ((MR_Box) (Succeeded_26));
          }
          {
            IfStmt_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, IfStmt_29, 0) = ((MR_Box) (Var_50));
            MR_hl_field(2, IfStmt_29, 1) = ((MR_Box) (LaterStmt_28));
            MR_hl_field(2, IfStmt_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, IfStmt_29, 3) = ((MR_Box) (Context_15));
          }
          {
            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_53, 0) = ((MR_Box) (IfStmt_29));
            MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (FirstStmt_25));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_53));
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_disj_gen__allow_lookup_disj_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
  }
  return HeadVar__2_2;
}

void mercury__ml_backend__ml_disj_gen__init(void)
{
}

void mercury__ml_backend__ml_disj_gen__init_type_tables(void)
{
}

void mercury__ml_backend__ml_disj_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_disj_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_disj_gen.
