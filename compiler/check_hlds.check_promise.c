/*
** Automatically generated from `check_promise.m'
** by the Mercury compiler,
** version rotd-2025-01-12
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


// :- module check_hlds.check_promise.
// :- implementation.

/*
INIT mercury__check_hlds__check_promise__init
ENDINIT
*/

#include "check_hlds.check_promise.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.assertion.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static void MR_CALL 
check_hlds__check_promise__check_promises_in_preds_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ToInvalidatePredIds_0_3,
  MR_Word * STATE_VARIABLE_ToInvalidatePredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(
  MR_Word tscc_proc_1_input_1_ModuleInfo_6,
  MR_Word tscc_proc_1_input_2_PredInfo_7,
  MR_Word tscc_proc_1_input_3_Goal_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Specs_58);

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_unify_rhs_7_p_0(
  MR_Word tscc_proc_2_input_1_ModuleInfo_8,
  MR_Word tscc_proc_2_input_2_PredInfo_9,
  MR_Word tscc_proc_2_input_3_Var_10,
  MR_Word tscc_proc_2_input_4_RHS_11,
  MR_Word tscc_proc_2_input_5_Context_12,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Specs_58);

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
check_hlds__check_promise__report_assertion_module_error_7_p_0(
  MR_Word ModuleName_8,
  MR_Word Context_9,
  MR_Word PredModuleName_10,
  MR_Word InitIdPieces_11,
  MR_Word SubjectIdPieces_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);


static /* final */ const MR_Box check_hlds__check_promise_scalar_common_1[35][2];




static /* final */ const MR_Box check_hlds__check_promise_scalar_common_1[35][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "constructor"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In interface for module"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: this exported promise refers to"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not exported"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "from module"))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or move the definition into the interface."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[15])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Either move the promise into the implementation section,"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: exported promise refers to"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "defined in another module,"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or move it to the"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In most cases, the latter is preferable."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[15])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[30])))
  },
  /* row  33 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[21])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__check_promise_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
check_hlds__check_promise__check_promises_in_module_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  MR_Word ValidPredIds0_9;
  MR_Word ToInvalidatePredIds_10;
  MR_Word STATE_VARIABLE_ModuleInfo_16_16;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &ValidPredIds0_9);
  check_hlds__check_promise__check_promises_in_preds_8_p_0(ProgressStream_6, ValidPredIds0_9, (MR_Word) ((MR_Unsigned) 0U), &ToInvalidatePredIds_10, STATE_VARIABLE_ModuleInfo_0_11, &STATE_VARIABLE_ModuleInfo_16_16, STATE_VARIABLE_Specs_0_13, STATE_VARIABLE_Specs_14);
  hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(ToInvalidatePredIds_10, STATE_VARIABLE_ModuleInfo_16_16, STATE_VARIABLE_ModuleInfo_12);
}

static void MR_CALL 
check_hlds__check_promise__check_promises_in_preds_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ToInvalidatePredIds_0_3,
  MR_Word * STATE_VARIABLE_ToInvalidatePredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
      *STATE_VARIABLE_ToInvalidatePredIds_4 = STATE_VARIABLE_ToInvalidatePredIds_0_3;
    }
    else
    {
      MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ToInvalidatePredIds_31_31;
      MR_Word STATE_VARIABLE_ModuleInfo_32_32;
      MR_Word STATE_VARIABLE_Specs_33_33;
      MR_Word PredInfo_34;
      MR_Word GoalType_35;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ToInvalidatePredIds_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_5, PredId_20, &PredInfo_34);
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_34, &GoalType_35);
      if (((MR_tag((MR_Word) GoalType_35)) == (MR_Integer) 1))
      {
        MR_Word PromiseType_36 = ((MR_Unsigned) ((MR_hl_field(1, GoalType_35, (MR_Integer) 0))) & (MR_Integer) 3);

        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_34);
        if (succeeded)
        {
          STATE_VARIABLE_Specs_33_33 = STATE_VARIABLE_Specs_0_7;
          STATE_VARIABLE_ModuleInfo_32_32 = STATE_VARIABLE_ModuleInfo_0_5;
          STATE_VARIABLE_ToInvalidatePredIds_31_31 = STATE_VARIABLE_ToInvalidatePredIds_0_3;
        }
        else
        {
          MR_Word Goal_37;

          hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_1, STATE_VARIABLE_ModuleInfo_0_5, (MR_String) "Checking promises in", PredId_20);
          switch (PromiseType_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
              {
                MR_Word CalleePredIds_45;
                MR_Word Table0_46;
                MR_Word Table_47;
                MR_Word ClausesInfo_49;
                MR_Word ClausesRep_50;
                MR_Word Clauses_52;
                MR_Word _ItemNumbers_51;
                MR_Word Clause_53;
                MR_Word Var_55;

                hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_34, &ClausesInfo_49);
                hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_49, &ClausesRep_50, &_ItemNumbers_51);
                hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_50, &Clauses_52);
                succeeded = (Clauses_52 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Clause_53 = ((MR_Word) ((MR_hl_field(1, Clauses_52, (MR_Integer) 0))));
                  Var_55 = ((MR_Word) ((MR_hl_field(1, Clauses_52, (MR_Integer) 1))));
                  succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                {
                  MR_Word Goal0_54;

                  Goal0_54 = hlds__hlds_clauses__clause_body_1_f_0(Clause_53);
                  hlds__assertion__normalise_goal_2_p_0(Goal0_54, &Goal_37);
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_promise.get_promise_ex_goal\'/2", (MR_String) "not a single clause");
                    return;
                  }
                hlds__goal_util__pred_ids_called_from_goal_2_p_0(Goal_37, &CalleePredIds_45);
                hlds__hlds_module__module_info_get_exclusive_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_5, &Table0_46);
                hlds__hlds_promise__exclusive_table_add_exclusive_4_p_0(PredId_20, CalleePredIds_45, Table0_46, &Table_47);
                hlds__hlds_module__module_info_set_exclusive_table_3_p_0(Table_47, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_32_32);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ClausesInfo_58;
                MR_Word ClausesRep_59;
                MR_Word Clauses_61;
                MR_Word _ItemNumbers_60;
                MR_Word Clause_62;
                MR_Word Var_64;

                hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_34, &ClausesInfo_58);
                hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_58, &ClausesRep_59, &_ItemNumbers_60);
                hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_59, &Clauses_61);
                succeeded = (Clauses_61 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Clause_62 = ((MR_Word) ((MR_hl_field(1, Clauses_61, (MR_Integer) 0))));
                  Var_64 = ((MR_Word) ((MR_hl_field(1, Clauses_61, (MR_Integer) 1))));
                  succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                {
                  MR_Word Goal0_63;

                  Goal0_63 = hlds__hlds_clauses__clause_body_1_f_0(Clause_62);
                  hlds__assertion__normalise_goal_2_p_0(Goal0_63, &Goal_37);
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_promise.get_promise_ex_goal\'/2", (MR_String) "not a single clause");
                    return;
                  }
                STATE_VARIABLE_ModuleInfo_32_32 = STATE_VARIABLE_ModuleInfo_0_5;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word AssertTable0_42;
                MR_Word AssertionId_43;
                MR_Word AssertTable_44;
                MR_Word STATE_VARIABLE_ModuleInfo_20_48;

                hlds__hlds_module__module_info_get_assertion_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_5, &AssertTable0_42);
                hlds__hlds_promise__assertion_table_add_assertion_4_p_0(PredId_20, &AssertionId_43, AssertTable0_42, &AssertTable_44);
                hlds__hlds_module__module_info_set_assertion_table_3_p_0(AssertTable_44, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_20_48);
                hlds__assertion__assert_id_goal_3_p_0(STATE_VARIABLE_ModuleInfo_20_48, AssertionId_43, &Goal_37);
                hlds__assertion__record_preds_used_in_4_p_0(Goal_37, AssertionId_43, STATE_VARIABLE_ModuleInfo_20_48, &STATE_VARIABLE_ModuleInfo_32_32);
              }
              break;
          }
          {
            STATE_VARIABLE_ToInvalidatePredIds_31_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ToInvalidatePredIds_31_31, 0) = ((MR_Box) (PredId_20));
            MR_hl_field(1, STATE_VARIABLE_ToInvalidatePredIds_31_31, 1) = ((MR_Box) (STATE_VARIABLE_ToInvalidatePredIds_0_3));
          }
          succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_34);
          if (succeeded)
            check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(STATE_VARIABLE_ModuleInfo_32_32, PredInfo_34, Goal_37, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_33_33);
          else
            STATE_VARIABLE_Specs_33_33 = STATE_VARIABLE_Specs_0_7;
        }
      }
      else
      {
        STATE_VARIABLE_ToInvalidatePredIds_31_31 = STATE_VARIABLE_ToInvalidatePredIds_0_3;
        STATE_VARIABLE_ModuleInfo_32_32 = STATE_VARIABLE_ModuleInfo_0_5;
        STATE_VARIABLE_Specs_33_33 = STATE_VARIABLE_Specs_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_21;
      next_value_of_STATE_VARIABLE_ToInvalidatePredIds_0_3 = STATE_VARIABLE_ToInvalidatePredIds_31_31;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_5 = STATE_VARIABLE_ModuleInfo_32_32;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_33_33;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ToInvalidatePredIds_0_3 = next_value_of_STATE_VARIABLE_ToInvalidatePredIds_0_3;
      STATE_VARIABLE_ModuleInfo_0_5 = next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(
  MR_Word tscc_proc_1_input_1_ModuleInfo_6,
  MR_Word tscc_proc_1_input_2_PredInfo_7,
  MR_Word tscc_proc_1_input_3_Goal_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Specs_58)
{
  MR_Word tscc_proc_2_input_1_ModuleInfo_8;
  MR_Word tscc_proc_2_input_2_PredInfo_9;
  MR_Word tscc_proc_2_input_3_Var_10;
  MR_Word tscc_proc_2_input_4_RHS_11;
  MR_Word tscc_proc_2_input_5_Context_12;
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39;
  MR_Word tscc_output_1_STATE_VARIABLE_Specs_58;

  // The code for TSCC PROC 1: pred check_hlds.check_promise.check_in_interface_promise_goal/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.check_promise.check_in_interface_promise_goal/5-0
  ;
  // proc 2 in TSCC: pred check_hlds.check_promise.check_in_interface_promise_unify_rhs/7-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word ModuleInfo_6 = tscc_proc_1_input_1_ModuleInfo_6;
    MR_Word PredInfo_7 = tscc_proc_1_input_2_PredInfo_7;
    MR_Word Goal_8 = tscc_proc_1_input_3_Goal_8;
    MR_Word STATE_VARIABLE_Specs_0_57 = tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
    MR_Word STATE_VARIABLE_Specs_58;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_40 = (MR_Word) ((MR_Word) (GoalExpr_10));
          MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
          MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_40;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_0_57;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
          tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
          tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 0))));
          MR_Word RHS_24 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 1))));
          MR_Word Context_28;
          MR_Word next_value_of_tscc_proc_2_input_1_ModuleInfo_8;
          MR_Word next_value_of_tscc_proc_2_input_2_PredInfo_9;
          MR_Word next_value_of_tscc_proc_2_input_3_Var_10;
          MR_Word next_value_of_tscc_proc_2_input_4_RHS_11;
          MR_Word next_value_of_tscc_proc_2_input_5_Context_12;
          MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39;

          Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_ModuleInfo_8 = ModuleInfo_6;
          next_value_of_tscc_proc_2_input_2_PredInfo_9 = PredInfo_7;
          next_value_of_tscc_proc_2_input_3_Var_10 = Var_23;
          next_value_of_tscc_proc_2_input_4_RHS_11 = RHS_24;
          next_value_of_tscc_proc_2_input_5_Context_12 = Context_28;
          next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39 = STATE_VARIABLE_Specs_0_57;
          tscc_proc_2_input_1_ModuleInfo_8 = next_value_of_tscc_proc_2_input_1_ModuleInfo_8;
          tscc_proc_2_input_2_PredInfo_9 = next_value_of_tscc_proc_2_input_2_PredInfo_9;
          tscc_proc_2_input_3_Var_10 = next_value_of_tscc_proc_2_input_3_Var_10;
          tscc_proc_2_input_4_RHS_11 = next_value_of_tscc_proc_2_input_4_RHS_11;
          tscc_proc_2_input_5_Context_12 = next_value_of_tscc_proc_2_input_5_Context_12;
          tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 0))));

          check_hlds__check_promise__check_in_interface_promise_call_5_p_0(ModuleInfo_6, PredId_12, GoalInfo_11, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));

              check_hlds__check_promise__check_in_interface_promise_call_5_p_0(ModuleInfo_6, PredId_76, GoalInfo_11, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));

              check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, Goals_36, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));

              check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, Goals_77, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_promise.check_in_interface_promise_goal\'/5", (MR_String) "assertion contains switch");
              return;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
              MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_78;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_0_57;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
              tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
              tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word Then_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word Else_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_Specs_68_68;
              MR_Word STATE_VARIABLE_Specs_69_69;
              MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
              MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;

              check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Cond_43, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_68_68);
              check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Then_44, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_69_69);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
              next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
              next_value_of_tscc_proc_1_input_3_Goal_8 = Else_45;
              next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_69_69;
              tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
              tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
              tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_46)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LHS_56 = ((MR_Word) ((MR_hl_field(0, ShortHand_46, (MR_Integer) 0))));
                    MR_Word STATE_VARIABLE_Specs_74_74;
                    MR_Word RHS_80 = ((MR_Word) ((MR_hl_field(0, ShortHand_46, (MR_Integer) 1))));
                    MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;

                    check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, LHS_56, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_74_74);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                    next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                    next_value_of_tscc_proc_1_input_3_Goal_8 = RHS_80;
                    next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_74_74;
                    tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                    tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                    tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_51 = ((MR_Word) ((MR_hl_field(1, ShortHand_46, (MR_Integer) 4))));
                    MR_Word OrElseGoals_52 = ((MR_Word) ((MR_hl_field(1, ShortHand_46, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_Specs_71_71;

                    check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, MainGoal_51, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_71_71);
                    check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, OrElseGoals_52, STATE_VARIABLE_Specs_71_71, &STATE_VARIABLE_Specs_58);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_79 = ((MR_Word) ((MR_hl_field(2, ShortHand_46, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_79;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_0_57;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                    tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                    tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_58;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word ModuleInfo_8 = tscc_proc_2_input_1_ModuleInfo_8;
    MR_Word PredInfo_9 = tscc_proc_2_input_2_PredInfo_9;
    MR_Word Var_10 = tscc_proc_2_input_3_Var_10;
    MR_Word RHS_11 = tscc_proc_2_input_4_RHS_11;
    MR_Word Context_12 = tscc_proc_2_input_5_Context_12;
    MR_Word STATE_VARIABLE_Specs_0_39 = tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39;
    MR_Word STATE_VARIABLE_Specs_40;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_15 = ((MR_Word) ((MR_hl_field(1, RHS_11, (MR_Integer) 0))));
          MR_Word ClausesInfo_18;
          MR_Word VarTable_19;
          MR_Word Type_20;
          MR_Word TypeCtor_21;
          MR_Word TypeTable_22;
          MR_Word TypeDefn_23;
          MR_Word TypeStatus_24;
          MR_Word ModuleName_25;
          MR_Word TypeCtorSymName_26;
          MR_Word TypeCtorModuleName_28;

          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_9, &ClausesInfo_18);
          hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo_18, &VarTable_19);
          parse_tree__var_table__lookup_var_type_3_p_0(VarTable_19, Var_10, &Type_20);
          parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_20, &TypeCtor_21);
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_22);
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_21, &TypeDefn_23);
          hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_24);
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_25);
          TypeCtorSymName_26 = ((MR_Word) ((MR_hl_field(0, TypeCtor_21, (MR_Integer) 0))));
          succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(TypeCtorSymName_26, &TypeCtorModuleName_28);
          if (succeeded)
          {
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_25, TypeCtorModuleName_28);
            if (succeeded)
            {
              MR_Word DefinedInImpl_29;

              DefinedInImpl_29 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_24);
              switch (DefinedInImpl_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubjectIdPieces_31;
                    MR_Word Var_44;
                    MR_Word MainPieces_57;
                    MR_Word Msgs_59;
                    MR_Word Spec_60;
                    MR_Word Var_61;
                    MR_Word Var_64;
                    MR_Word Var_65;
                    MR_Word Var_67;
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Word Var_70;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word Var_78;
                    MR_Word Var_81;
                    MR_Word Var_84;
                    MR_Word Var_92;
                    MR_Word Var_93;

                    {
                      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 25U));
                      MR_hl_field(3, Var_44, 1) = ((MR_Box) (ConsId_15));
                    }
                    {
                      SubjectIdPieces_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SubjectIdPieces_31, 0) = ((MR_Box) (Var_44));
                      MR_hl_field(1, SubjectIdPieces_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(3, Var_65, 1) = ((MR_Box) (ModuleName_25));
                    }
                    {
                      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
                      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[7])));
                    }
                    {
                      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[2])));
                      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
                    }
                    Var_69 = parse_tree__error_spec__color_as_subject_1_f_0(SubjectIdPieces_31);
                    Var_73 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[13])));
                    {
                      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_65));
                      MR_hl_field(1, Var_81, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[17])));
                    }
                    {
                      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[14])));
                      MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
                    }
                    Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_78);
                    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[11])), Var_72);
                    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_70);
                    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[1])), Var_68);
                    MainPieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_67);
                    {
                      Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_84, 0) = ((MR_Box) (MainPieces_57));
                    }
                    {
                      Msgs_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Msgs_59, 0) = ((MR_Box) (Var_84));
                      MR_hl_field(1, Msgs_59, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[34])));
                    }
                    {
                      Var_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_93, 0) = ((MR_Box) (Context_12));
                      MR_hl_field(2, Var_93, 1) = ((MR_Box) (Msgs_59));
                    }
                    {
                      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
                      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_promise.report_assertion_interface_error\'/6"));
                      MR_hl_field(2, Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(2, Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 52U));
                      MR_hl_field(2, Spec_60, 3) = ((MR_Box) (Var_92));
                    }
                    {
                      STATE_VARIABLE_Specs_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_Specs_40, 0) = ((MR_Box) (Spec_60));
                      MR_hl_field(1, STATE_VARIABLE_Specs_40, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word Var_50;
              MR_Word SubjectIdPieces_55;

              {
                Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 25U));
                MR_hl_field(3, Var_50, 1) = ((MR_Box) (ConsId_15));
              }
              {
                SubjectIdPieces_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SubjectIdPieces_55, 0) = ((MR_Box) (Var_50));
                MR_hl_field(1, SubjectIdPieces_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              check_hlds__check_promise__report_assertion_module_error_7_p_0(ModuleName_25, Context_12, TypeCtorModuleName_28, (MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[1])), SubjectIdPieces_55, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_40);
            }
          }
          else
            STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Goal_38 = ((MR_Word) ((MR_hl_field(2, RHS_11, (MR_Integer) 4))));
          MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_8;
          MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_9;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = Goal_38;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_0_39;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
          tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
          tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_40;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Specs_58 = tscc_output_1_STATE_VARIABLE_Specs_58;
  return;
}

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_unify_rhs_7_p_0(
  MR_Word tscc_proc_2_input_1_ModuleInfo_8,
  MR_Word tscc_proc_2_input_2_PredInfo_9,
  MR_Word tscc_proc_2_input_3_Var_10,
  MR_Word tscc_proc_2_input_4_RHS_11,
  MR_Word tscc_proc_2_input_5_Context_12,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Specs_58)
{
  MR_Word tscc_proc_1_input_1_ModuleInfo_6;
  MR_Word tscc_proc_1_input_2_PredInfo_7;
  MR_Word tscc_proc_1_input_3_Goal_8;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
  MR_Word tscc_output_1_STATE_VARIABLE_Specs_58;

  // The code for TSCC PROC 2: pred check_hlds.check_promise.check_in_interface_promise_unify_rhs/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.check_promise.check_in_interface_promise_goal/5-0
  ;
  // proc 2 in TSCC: pred check_hlds.check_promise.check_in_interface_promise_unify_rhs/7-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word ModuleInfo_6 = tscc_proc_1_input_1_ModuleInfo_6;
    MR_Word PredInfo_7 = tscc_proc_1_input_2_PredInfo_7;
    MR_Word Goal_8 = tscc_proc_1_input_3_Goal_8;
    MR_Word STATE_VARIABLE_Specs_0_57 = tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
    MR_Word STATE_VARIABLE_Specs_58;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_40 = (MR_Word) ((MR_Word) (GoalExpr_10));
          MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
          MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_40;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_0_57;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
          tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
          tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 0))));
          MR_Word RHS_24 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 1))));
          MR_Word Context_28;
          MR_Word next_value_of_tscc_proc_2_input_1_ModuleInfo_8;
          MR_Word next_value_of_tscc_proc_2_input_2_PredInfo_9;
          MR_Word next_value_of_tscc_proc_2_input_3_Var_10;
          MR_Word next_value_of_tscc_proc_2_input_4_RHS_11;
          MR_Word next_value_of_tscc_proc_2_input_5_Context_12;
          MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39;

          Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_ModuleInfo_8 = ModuleInfo_6;
          next_value_of_tscc_proc_2_input_2_PredInfo_9 = PredInfo_7;
          next_value_of_tscc_proc_2_input_3_Var_10 = Var_23;
          next_value_of_tscc_proc_2_input_4_RHS_11 = RHS_24;
          next_value_of_tscc_proc_2_input_5_Context_12 = Context_28;
          next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39 = STATE_VARIABLE_Specs_0_57;
          tscc_proc_2_input_1_ModuleInfo_8 = next_value_of_tscc_proc_2_input_1_ModuleInfo_8;
          tscc_proc_2_input_2_PredInfo_9 = next_value_of_tscc_proc_2_input_2_PredInfo_9;
          tscc_proc_2_input_3_Var_10 = next_value_of_tscc_proc_2_input_3_Var_10;
          tscc_proc_2_input_4_RHS_11 = next_value_of_tscc_proc_2_input_4_RHS_11;
          tscc_proc_2_input_5_Context_12 = next_value_of_tscc_proc_2_input_5_Context_12;
          tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 0))));

          check_hlds__check_promise__check_in_interface_promise_call_5_p_0(ModuleInfo_6, PredId_12, GoalInfo_11, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));

              check_hlds__check_promise__check_in_interface_promise_call_5_p_0(ModuleInfo_6, PredId_76, GoalInfo_11, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));

              check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, Goals_36, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));

              check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, Goals_77, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_promise.check_in_interface_promise_goal\'/5", (MR_String) "assertion contains switch");
              return;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
              MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_78;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_0_57;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
              tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
              tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word Then_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word Else_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_Specs_68_68;
              MR_Word STATE_VARIABLE_Specs_69_69;
              MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
              MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;

              check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Cond_43, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_68_68);
              check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Then_44, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_69_69);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
              next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
              next_value_of_tscc_proc_1_input_3_Goal_8 = Else_45;
              next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_69_69;
              tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
              tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
              tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_46)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LHS_56 = ((MR_Word) ((MR_hl_field(0, ShortHand_46, (MR_Integer) 0))));
                    MR_Word STATE_VARIABLE_Specs_74_74;
                    MR_Word RHS_80 = ((MR_Word) ((MR_hl_field(0, ShortHand_46, (MR_Integer) 1))));
                    MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;

                    check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, LHS_56, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_74_74);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                    next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                    next_value_of_tscc_proc_1_input_3_Goal_8 = RHS_80;
                    next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_74_74;
                    tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                    tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                    tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_51 = ((MR_Word) ((MR_hl_field(1, ShortHand_46, (MR_Integer) 4))));
                    MR_Word OrElseGoals_52 = ((MR_Word) ((MR_hl_field(1, ShortHand_46, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_Specs_71_71;

                    check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, MainGoal_51, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_71_71);
                    check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, OrElseGoals_52, STATE_VARIABLE_Specs_71_71, &STATE_VARIABLE_Specs_58);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_79 = ((MR_Word) ((MR_hl_field(2, ShortHand_46, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_79;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_0_57;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                    tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                    tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_58;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word ModuleInfo_8 = tscc_proc_2_input_1_ModuleInfo_8;
    MR_Word PredInfo_9 = tscc_proc_2_input_2_PredInfo_9;
    MR_Word Var_10 = tscc_proc_2_input_3_Var_10;
    MR_Word RHS_11 = tscc_proc_2_input_4_RHS_11;
    MR_Word Context_12 = tscc_proc_2_input_5_Context_12;
    MR_Word STATE_VARIABLE_Specs_0_39 = tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_39;
    MR_Word STATE_VARIABLE_Specs_40;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_15 = ((MR_Word) ((MR_hl_field(1, RHS_11, (MR_Integer) 0))));
          MR_Word ClausesInfo_18;
          MR_Word VarTable_19;
          MR_Word Type_20;
          MR_Word TypeCtor_21;
          MR_Word TypeTable_22;
          MR_Word TypeDefn_23;
          MR_Word TypeStatus_24;
          MR_Word ModuleName_25;
          MR_Word TypeCtorSymName_26;
          MR_Word TypeCtorModuleName_28;

          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_9, &ClausesInfo_18);
          hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo_18, &VarTable_19);
          parse_tree__var_table__lookup_var_type_3_p_0(VarTable_19, Var_10, &Type_20);
          parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_20, &TypeCtor_21);
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_22);
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_21, &TypeDefn_23);
          hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_24);
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_25);
          TypeCtorSymName_26 = ((MR_Word) ((MR_hl_field(0, TypeCtor_21, (MR_Integer) 0))));
          succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(TypeCtorSymName_26, &TypeCtorModuleName_28);
          if (succeeded)
          {
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_25, TypeCtorModuleName_28);
            if (succeeded)
            {
              MR_Word DefinedInImpl_29;

              DefinedInImpl_29 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_24);
              switch (DefinedInImpl_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubjectIdPieces_31;
                    MR_Word Var_44;
                    MR_Word MainPieces_57;
                    MR_Word Msgs_59;
                    MR_Word Spec_60;
                    MR_Word Var_61;
                    MR_Word Var_64;
                    MR_Word Var_65;
                    MR_Word Var_67;
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Word Var_70;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word Var_78;
                    MR_Word Var_81;
                    MR_Word Var_84;
                    MR_Word Var_92;
                    MR_Word Var_93;

                    {
                      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 25U));
                      MR_hl_field(3, Var_44, 1) = ((MR_Box) (ConsId_15));
                    }
                    {
                      SubjectIdPieces_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SubjectIdPieces_31, 0) = ((MR_Box) (Var_44));
                      MR_hl_field(1, SubjectIdPieces_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(3, Var_65, 1) = ((MR_Box) (ModuleName_25));
                    }
                    {
                      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
                      MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[7])));
                    }
                    {
                      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[2])));
                      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
                    }
                    Var_69 = parse_tree__error_spec__color_as_subject_1_f_0(SubjectIdPieces_31);
                    Var_73 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[13])));
                    {
                      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_65));
                      MR_hl_field(1, Var_81, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[17])));
                    }
                    {
                      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[14])));
                      MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
                    }
                    Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, Var_78);
                    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[11])), Var_72);
                    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_70);
                    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[1])), Var_68);
                    MainPieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_67);
                    {
                      Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_84, 0) = ((MR_Box) (MainPieces_57));
                    }
                    {
                      Msgs_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Msgs_59, 0) = ((MR_Box) (Var_84));
                      MR_hl_field(1, Msgs_59, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[34])));
                    }
                    {
                      Var_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_93, 0) = ((MR_Box) (Context_12));
                      MR_hl_field(2, Var_93, 1) = ((MR_Box) (Msgs_59));
                    }
                    {
                      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
                      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_promise.report_assertion_interface_error\'/6"));
                      MR_hl_field(2, Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(2, Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 52U));
                      MR_hl_field(2, Spec_60, 3) = ((MR_Box) (Var_92));
                    }
                    {
                      STATE_VARIABLE_Specs_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_Specs_40, 0) = ((MR_Box) (Spec_60));
                      MR_hl_field(1, STATE_VARIABLE_Specs_40, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word Var_50;
              MR_Word SubjectIdPieces_55;

              {
                Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 25U));
                MR_hl_field(3, Var_50, 1) = ((MR_Box) (ConsId_15));
              }
              {
                SubjectIdPieces_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SubjectIdPieces_55, 0) = ((MR_Box) (Var_50));
                MR_hl_field(1, SubjectIdPieces_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              check_hlds__check_promise__report_assertion_module_error_7_p_0(ModuleName_25, Context_12, TypeCtorModuleName_28, (MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[1])), SubjectIdPieces_55, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_40);
            }
          }
          else
            STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Goal_38 = ((MR_Word) ((MR_hl_field(2, RHS_11, (MR_Integer) 4))));
          MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_8;
          MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_9;
          MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = Goal_38;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_0_39;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
          tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
          tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_40;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Specs_58 = tscc_output_1_STATE_VARIABLE_Specs_58;
  return;
}

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Goal0s_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_18_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(HeadVar__1_1, HeadVar__2_2, Goal0_13, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Goal0s_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_18_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_call_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded;
  MR_Word ModuleName_10;
  MR_Word PredInfo_11;
  MR_Word PredModuleName_12;
  MR_String PredName_13;
  MR_Word PredStatus_14;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_10);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_11);
  hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_11, &PredModuleName_12);
  hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_11, &PredName_13);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_11, &PredStatus_14);
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_10, PredModuleName_12);
  if (succeeded)
  {
    MR_Word DefnInImplSection_15;

    DefnInImplSection_15 = hlds__status__pred_status_defined_in_impl_section_1_f_0(PredStatus_14);
    switch (DefnInImplSection_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_16;
          MR_Word PredOrFunc_17;
          MR_Word PredSymName_18;
          MR_Integer UserArityInt_19;
          MR_Word SymNameArity_20;
          MR_Word InitIdPieces_21;
          MR_Word SubjectIdPieces_22;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_28;
          MR_Word MainPieces_45;
          MR_Word Msgs_47;
          MR_Word Spec_48;
          MR_Word Var_49;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_66;
          MR_Word Var_69;
          MR_Word Var_72;
          MR_Word Var_80;
          MR_Word Var_81;

          Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
          PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
          {
            PredSymName_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PredSymName_18, 0) = ((MR_Box) (PredModuleName_12));
            MR_hl_field(1, PredSymName_18, 1) = ((MR_Box) (PredName_13));
          }
          Var_25 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_11);
          UserArityInt_19 = (MR_Integer) (Var_25);
          {
            SymNameArity_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SymNameArity_20, 0) = ((MR_Box) (PredSymName_18));
            MR_hl_field(0, SymNameArity_20, 1) = ((MR_Box) (UserArityInt_19));
          }
          {
            Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(3, Var_26, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
          }
          {
            InitIdPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, InitIdPieces_21, 0) = ((MR_Box) (Var_26));
            MR_hl_field(1, InitIdPieces_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_28, 1) = ((MR_Box) (SymNameArity_20));
          }
          {
            SubjectIdPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SubjectIdPieces_22, 0) = ((MR_Box) (Var_28));
            MR_hl_field(1, SubjectIdPieces_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_53, 1) = ((MR_Box) (ModuleName_10));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[7])));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[2])));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
          }
          Var_57 = parse_tree__error_spec__color_as_subject_1_f_0(SubjectIdPieces_22);
          Var_61 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[13])));
          {
            Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_53));
            MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[17])));
          }
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[14])));
            MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
          }
          Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_66);
          Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[11])), Var_60);
          Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, Var_58);
          Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InitIdPieces_21, Var_56);
          MainPieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_55);
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_72, 0) = ((MR_Box) (MainPieces_45));
          }
          {
            Msgs_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Msgs_47, 0) = ((MR_Box) (Var_72));
            MR_hl_field(1, Msgs_47, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[34])));
          }
          {
            Var_81 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_81, 0) = ((MR_Box) (Context_16));
            MR_hl_field(2, Var_81, 1) = ((MR_Box) (Msgs_47));
          }
          {
            Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_promise.report_assertion_interface_error\'/6"));
            MR_hl_field(2, Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 52U));
            MR_hl_field(2, Spec_48, 3) = ((MR_Box) (Var_80));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_24 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_48));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Context_37;
    MR_Word PredOrFunc_38;
    MR_Word PredSymName_39;
    MR_Integer UserArityInt_40;
    MR_Word SymNameArity_41;
    MR_Word InitIdPieces_42;
    MR_Word SubjectIdPieces_43;

    Context_37 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
    PredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
    {
      PredSymName_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredSymName_39, 0) = ((MR_Box) (PredModuleName_12));
      MR_hl_field(1, PredSymName_39, 1) = ((MR_Box) (PredName_13));
    }
    Var_31 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_11);
    UserArityInt_40 = (MR_Integer) (Var_31);
    {
      SymNameArity_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SymNameArity_41, 0) = ((MR_Box) (PredSymName_39));
      MR_hl_field(0, SymNameArity_41, 1) = ((MR_Box) (UserArityInt_40));
    }
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_32, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
    }
    {
      InitIdPieces_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InitIdPieces_42, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, InitIdPieces_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_34, 1) = ((MR_Box) (SymNameArity_41));
    }
    {
      SubjectIdPieces_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SubjectIdPieces_43, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, SubjectIdPieces_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    check_hlds__check_promise__report_assertion_module_error_7_p_0(ModuleName_10, Context_37, PredModuleName_12, InitIdPieces_42, SubjectIdPieces_43, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
  }
}

static void MR_CALL 
check_hlds__check_promise__report_assertion_module_error_7_p_0(
  MR_Word ModuleName_8,
  MR_Word Context_9,
  MR_Word PredModuleName_10,
  MR_Word InitIdPieces_11,
  MR_Word SubjectIdPieces_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word MainPieces_14;
  MR_Word VerbosePieces_15;
  MR_Word Msgs_16;
  MR_Word Spec_17;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_61;
  MR_Word Var_64;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_83;
  MR_Word Var_84;

  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (ModuleName_8));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[25])));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[2])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  Var_36 = parse_tree__error_spec__color_as_subject_1_f_0(SubjectIdPieces_12);
  {
    Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_51, 1) = ((MR_Box) (PredModuleName_10));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[27])));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[26])));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
  }
  Var_46 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_47);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[15])));
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[11])), Var_45);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_37);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InitIdPieces_11, Var_35);
  MainPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_34);
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_promise_scalar_common_1[32])));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[28])));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
  }
  {
    VerbosePieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, VerbosePieces_15, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_promise_scalar_common_1[20])));
    MR_hl_field(1, VerbosePieces_15, 1) = ((MR_Box) (Var_61));
  }
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (MainPieces_14));
  }
  {
    Var_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_77, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(2, Var_77, 1) = ((MR_Box) (VerbosePieces_15));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Msgs_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Msgs_16, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Msgs_16, 1) = ((MR_Box) (Var_76));
  }
  {
    Var_84 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_84, 0) = ((MR_Box) (Context_9));
    MR_hl_field(2, Var_84, 1) = ((MR_Box) (Msgs_16));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_promise.report_assertion_module_error\'/7"));
    MR_hl_field(2, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_17, 3) = ((MR_Box) (Var_83));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_19 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
  }
}

void mercury__check_hlds__check_promise__init(void)
{
}

void mercury__check_hlds__check_promise__init_type_tables(void)
{
}

void mercury__check_hlds__check_promise__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__check_promise__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.check_promise.
