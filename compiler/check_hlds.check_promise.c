/*
** Automatically generated from `check_promise.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-28
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
#include "ops.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__check_promise__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static void MR_CALL 
check_hlds__check_promise__check_promises_in_preds_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ToInvalidatePredIds_0_2,
  MR_Word * STATE_VARIABLE_ToInvalidatePredIds_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
check_hlds__check_promise__check_promises_in_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_promise__check_promises_in_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ToInvalidatePredIds_0_18,
  MR_Word * STATE_VARIABLE_ToInvalidatePredIds_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

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
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
check_hlds__check_promise__report_assertion_module_error_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word PredModuleName_9,
  MR_Word IdPieces_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
check_hlds__check_promise__report_assertion_interface_error_5_p_0(
  MR_Word ModuleName_6,
  MR_Word Context_7,
  MR_Word IdPieces_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);


static /* final */ const MR_Box check_hlds__check_promise_scalar_common_1[24][2];

static /* final */ const MR_Box check_hlds__check_promise_scalar_common_2[1][7];




static /* final */ const MR_Box check_hlds__check_promise_scalar_common_1[24][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "constructor"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In interface for module"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: exported promise refers to"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is defined in the implementation section of module"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or move the definition into the interface."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[9])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Either move the promise into the implementation section,"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is defined in another module,"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or move it to the"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In most cases, the latter is preferable."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[9])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "module."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[19])))
  },
  /* row 22 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[15])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__check_promise_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__check_promise_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__check_promise__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__check_promise__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

void MR_CALL 
check_hlds__check_promise__check_promises_in_module_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  {
    MR_Word ValidPredIds0_7;
    MR_Word ToInvalidatePredIds_8;
    MR_Word STATE_VARIABLE_ModuleInfo_14_14;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_9, &ValidPredIds0_7);
    check_hlds__check_promise__check_promises_in_preds_7_p_0(ValidPredIds0_7, (MR_Word) ((MR_Unsigned) 0U), &ToInvalidatePredIds_8, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_14_14, STATE_VARIABLE_Specs_0_11, STATE_VARIABLE_Specs_12);
    hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(ToInvalidatePredIds_8, STATE_VARIABLE_ModuleInfo_14_14, STATE_VARIABLE_ModuleInfo_10);
  }
}

static void MR_CALL 
check_hlds__check_promise__check_promises_in_preds_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ToInvalidatePredIds_0_2,
  MR_Word * STATE_VARIABLE_ToInvalidatePredIds_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
      *STATE_VARIABLE_ToInvalidatePredIds_3 = STATE_VARIABLE_ToInvalidatePredIds_0_2;
    }
    else
    {
      MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ToInvalidatePredIds_28_28;
      MR_Word STATE_VARIABLE_ModuleInfo_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ToInvalidatePredIds_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      check_hlds__check_promise__check_promises_in_pred_7_p_0(PredId_17, STATE_VARIABLE_ToInvalidatePredIds_0_2, &STATE_VARIABLE_ToInvalidatePredIds_28_28, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_29_29, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_18;
      next_value_of_STATE_VARIABLE_ToInvalidatePredIds_0_2 = STATE_VARIABLE_ToInvalidatePredIds_28_28;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ToInvalidatePredIds_0_2 = next_value_of_STATE_VARIABLE_ToInvalidatePredIds_0_2;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_promise__check_promises_in_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    hlds__hlds_promise__exclusive_table_add_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__check_promise__check_promises_in_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ToInvalidatePredIds_0_18,
  MR_Word * STATE_VARIABLE_ToInvalidatePredIds_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_12;
    MR_Word GoalType_13;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredId_8, &PredInfo_12);
    hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_12, &GoalType_13);
    if (((MR_tag((MR_Word) GoalType_13)) == (MR_Integer) 1))
    {
      MR_Word PromiseType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), GoalType_13, (MR_Integer) 0))) & (MR_Integer) 3);

      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_12);
      if (succeeded)
      {
        *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
        *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
        *STATE_VARIABLE_ToInvalidatePredIds_19 = STATE_VARIABLE_ToInvalidatePredIds_0_18;
      }
      else
      {
        MR_Word Goal_16;

        hlds__passes_aux__write_pred_progress_message_5_p_0(STATE_VARIABLE_ModuleInfo_0_20, (MR_String) "Checking promises in", PredId_8);
        switch (PromiseType_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              MR_Word CalleePredIds_40;
              MR_Word Table0_41;
              MR_Word Table_42;
              MR_Word Var_43;
              MR_Word ClausesInfo_54;
              MR_Word ClausesRep_55;
              MR_Word Clauses_57;
              MR_Word _ItemNumbers_56;
              MR_Word Clause_58;
              MR_Word Var_60;
              MR_Box conv1_Table_42;

              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_12, &ClausesInfo_54);
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_54, &ClausesRep_55, &_ItemNumbers_56);
              hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_55, &Clauses_57);
              succeeded = (Clauses_57 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Clause_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_57, (MR_Integer) 0))));
                Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_57, (MR_Integer) 1))));
                succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Goal0_59;

                Goal0_59 = hlds__hlds_clauses__clause_body_1_f_0(Clause_58);
                hlds__assertion__normalise_goal_2_p_0(Goal0_59, &Goal_16);
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_promise.get_promise_ex_goal\'/2", (MR_String) "not a single clause");
                  return;
                }
              hlds__goal_util__pred_ids_called_from_goal_2_p_0(Goal_16, &CalleePredIds_40);
              hlds__hlds_module__module_info_get_exclusive_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &Table0_41);
              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&check_hlds__check_promise_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (check_hlds__check_promise__check_promises_in_pred_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (PredId_8));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_table_0), Var_43, CalleePredIds_40, ((MR_Box) (Table0_41)), &conv1_Table_42);
              Table_42 = ((MR_Word) (conv1_Table_42));
              hlds__hlds_module__module_info_set_exclusive_table_3_p_0(Table_42, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ClausesInfo_65;
              MR_Word ClausesRep_66;
              MR_Word Clauses_68;
              MR_Word _ItemNumbers_67;
              MR_Word Clause_69;
              MR_Word Var_71;

              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_12, &ClausesInfo_65);
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_65, &ClausesRep_66, &_ItemNumbers_67);
              hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_66, &Clauses_68);
              succeeded = (Clauses_68 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Clause_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_68, (MR_Integer) 0))));
                Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_68, (MR_Integer) 1))));
                succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Goal0_70;

                Goal0_70 = hlds__hlds_clauses__clause_body_1_f_0(Clause_69);
                hlds__assertion__normalise_goal_2_p_0(Goal0_70, &Goal_16);
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_promise.get_promise_ex_goal\'/2", (MR_String) "not a single clause");
                  return;
                }
              *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word AssertTable0_37;
              MR_Word AssertionId_38;
              MR_Word AssertTable_39;
              MR_Word STATE_VARIABLE_ModuleInfo_22_45;

              hlds__hlds_module__module_info_get_assertion_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &AssertTable0_37);
              hlds__hlds_promise__assertion_table_add_assertion_4_p_0(PredId_8, &AssertionId_38, AssertTable0_37, &AssertTable_39);
              hlds__hlds_module__module_info_set_assertion_table_3_p_0(AssertTable_39, STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_22_45);
              hlds__assertion__assert_id_goal_3_p_0(STATE_VARIABLE_ModuleInfo_22_45, AssertionId_38, &Goal_16);
              hlds__assertion__record_preds_used_in_4_p_0(Goal_16, AssertionId_38, STATE_VARIABLE_ModuleInfo_22_45, STATE_VARIABLE_ModuleInfo_21);
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ToInvalidatePredIds_19 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ToInvalidatePredIds_0_18));
        }
        succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_12);
        if (succeeded)
          check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(*STATE_VARIABLE_ModuleInfo_21, PredInfo_12, Goal_16, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
        else
          *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
      }
    }
    else
    {
      *STATE_VARIABLE_ToInvalidatePredIds_19 = STATE_VARIABLE_ToInvalidatePredIds_0_18;
      *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    }
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
      MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
      MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));

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
            MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0))));
            MR_Word RHS_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1))));
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
            MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0))));

            check_hlds__check_promise__check_in_interface_promise_call_5_p_0(ModuleInfo_6, PredId_12, GoalInfo_11, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredId_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                check_hlds__check_promise__check_in_interface_promise_call_5_p_0(ModuleInfo_6, PredId_76, GoalInfo_11, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, Goals_36, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

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
                MR_Word SubGoal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
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
                MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word Then_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                MR_Word Else_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_Specs_64_64;
                MR_Word STATE_VARIABLE_Specs_65_65;
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;

                check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Cond_43, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_64_64);
                check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Then_44, STATE_VARIABLE_Specs_64_64, &STATE_VARIABLE_Specs_65_65);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                next_value_of_tscc_proc_1_input_3_Goal_8 = Else_45;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_65_65;
                tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_46)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word LHS_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_46, (MR_Integer) 0))));
                      MR_Word STATE_VARIABLE_Specs_59_59;
                      MR_Word RHS_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_46, (MR_Integer) 1))));
                      MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;

                      check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, LHS_56, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_59_59);
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                      next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                      next_value_of_tscc_proc_1_input_3_Goal_8 = RHS_80;
                      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_59_59;
                      tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                      tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                      tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_46, (MR_Integer) 4))));
                      MR_Word OrElseGoals_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_46, (MR_Integer) 5))));
                      MR_Word STATE_VARIABLE_Specs_62_62;

                      check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, MainGoal_51, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_62_62);
                      check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, OrElseGoals_52, STATE_VARIABLE_Specs_62_62, &STATE_VARIABLE_Specs_58);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_46, (MR_Integer) 2))));
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
            MR_Word ConsId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_11, (MR_Integer) 0))));
            MR_Word ClausesInfo_18;
            MR_Word VarTypes_19;
            MR_Word Type_20;
            MR_Word TypeCtor_21;
            MR_Word TypeTable_22;
            MR_Word TypeDefn_23;
            MR_Word TypeStatus_24;
            MR_Word ModuleName_25;
            MR_Word TypeCtorSymName_26;
            MR_Word TypeCtorModuleName_28;

            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_9, &ClausesInfo_18);
            hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo_18, &VarTypes_19);
            hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Var_10, &Type_20);
            parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_20, &TypeCtor_21);
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_22);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_21, &TypeDefn_23);
            hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_24);
            hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_25);
            TypeCtorSymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_21, (MR_Integer) 0))));
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
                      MR_Word IdPieces_30;
                      MR_Word Var_44;
                      MR_Word Var_45;

                      {
                        Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (ConsId_15));
                      }
                      {
                        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
                        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        IdPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), IdPieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[0])));
                        MR_hl_field(MR_mktag(1), IdPieces_30, 1) = ((MR_Box) (Var_44));
                      }
                      check_hlds__check_promise__report_assertion_interface_error_5_p_0(ModuleName_25, Context_12, IdPieces_30, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_40);
                    }
                    break;
                }
              }
              else
              {
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word IdPieces_54;

                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ConsId_15));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                  MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  IdPieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), IdPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[0])));
                  MR_hl_field(MR_mktag(1), IdPieces_54, 1) = ((MR_Box) (Var_50));
                }
                check_hlds__check_promise__report_assertion_module_error_6_p_0(ModuleName_25, Context_12, TypeCtorModuleName_28, IdPieces_54, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_40);
              }
            }
            else
              STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_11, (MR_Integer) 5))));
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
      MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
      MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));

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
            MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0))));
            MR_Word RHS_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1))));
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
            MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0))));

            check_hlds__check_promise__check_in_interface_promise_call_5_p_0(ModuleInfo_6, PredId_12, GoalInfo_11, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredId_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                check_hlds__check_promise__check_in_interface_promise_call_5_p_0(ModuleInfo_6, PredId_76, GoalInfo_11, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, Goals_36, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_58);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

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
                MR_Word SubGoal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
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
                MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word Then_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                MR_Word Else_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_Specs_64_64;
                MR_Word STATE_VARIABLE_Specs_65_65;
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;

                check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Cond_43, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_64_64);
                check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Then_44, STATE_VARIABLE_Specs_64_64, &STATE_VARIABLE_Specs_65_65);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                next_value_of_tscc_proc_1_input_3_Goal_8 = Else_45;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_65_65;
                tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_46)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word LHS_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_46, (MR_Integer) 0))));
                      MR_Word STATE_VARIABLE_Specs_59_59;
                      MR_Word RHS_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_46, (MR_Integer) 1))));
                      MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;

                      check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, LHS_56, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_59_59);
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                      next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                      next_value_of_tscc_proc_1_input_3_Goal_8 = RHS_80;
                      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = STATE_VARIABLE_Specs_59_59;
                      tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                      tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                      tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_57;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_46, (MR_Integer) 4))));
                      MR_Word OrElseGoals_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_46, (MR_Integer) 5))));
                      MR_Word STATE_VARIABLE_Specs_62_62;

                      check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, MainGoal_51, STATE_VARIABLE_Specs_0_57, &STATE_VARIABLE_Specs_62_62);
                      check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, OrElseGoals_52, STATE_VARIABLE_Specs_62_62, &STATE_VARIABLE_Specs_58);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_46, (MR_Integer) 2))));
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
            MR_Word ConsId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_11, (MR_Integer) 0))));
            MR_Word ClausesInfo_18;
            MR_Word VarTypes_19;
            MR_Word Type_20;
            MR_Word TypeCtor_21;
            MR_Word TypeTable_22;
            MR_Word TypeDefn_23;
            MR_Word TypeStatus_24;
            MR_Word ModuleName_25;
            MR_Word TypeCtorSymName_26;
            MR_Word TypeCtorModuleName_28;

            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_9, &ClausesInfo_18);
            hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo_18, &VarTypes_19);
            hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Var_10, &Type_20);
            parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_20, &TypeCtor_21);
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_22);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_21, &TypeDefn_23);
            hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_24);
            hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_25);
            TypeCtorSymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_21, (MR_Integer) 0))));
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
                      MR_Word IdPieces_30;
                      MR_Word Var_44;
                      MR_Word Var_45;

                      {
                        Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (ConsId_15));
                      }
                      {
                        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
                        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        IdPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), IdPieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[0])));
                        MR_hl_field(MR_mktag(1), IdPieces_30, 1) = ((MR_Box) (Var_44));
                      }
                      check_hlds__check_promise__report_assertion_interface_error_5_p_0(ModuleName_25, Context_12, IdPieces_30, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_40);
                    }
                    break;
                }
              }
              else
              {
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word IdPieces_54;

                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ConsId_15));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                  MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  IdPieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), IdPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[0])));
                  MR_hl_field(MR_mktag(1), IdPieces_54, 1) = ((MR_Box) (Var_50));
                }
                check_hlds__check_promise__report_assertion_module_error_6_p_0(ModuleName_25, Context_12, TypeCtorModuleName_28, IdPieces_54, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_40);
              }
            }
            else
              STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_11, (MR_Integer) 5))));
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
      MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Goal0s_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
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
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
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
          *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_16;
            MR_Word PredOrFunc_17;
            MR_Word PredSymName_18;
            MR_Integer Arity_19;
            MR_Word PFSymNameArity_20;
            MR_Word PredNamePieces_21;
            MR_Word Var_24;

            Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
            PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
            {
              PredSymName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredSymName_18, 0) = ((MR_Box) (PredModuleName_12));
              MR_hl_field(MR_mktag(1), PredSymName_18, 1) = ((MR_Box) (PredName_13));
            }
            Arity_19 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_11);
            {
              PFSymNameArity_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PFSymNameArity_20, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
              MR_hl_field(MR_mktag(0), PFSymNameArity_20, 1) = ((MR_Box) (PredSymName_18));
              MR_hl_field(MR_mktag(0), PFSymNameArity_20, 2) = ((MR_Box) (Arity_19));
            }
            {
              Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (PFSymNameArity_20));
            }
            {
              PredNamePieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredNamePieces_21, 0) = ((MR_Box) (Var_24));
              MR_hl_field(MR_mktag(1), PredNamePieces_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            check_hlds__check_promise__report_assertion_interface_error_5_p_0(ModuleName_10, Context_16, PredNamePieces_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
          }
          break;
      }
    }
    else
    {
      MR_Word Var_27;
      MR_Word Context_30;
      MR_Word PredOrFunc_31;
      MR_Word PredSymName_32;
      MR_Integer Arity_33;
      MR_Word PFSymNameArity_34;
      MR_Word PredNamePieces_35;

      Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
      PredOrFunc_31 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
      {
        PredSymName_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_32, 0) = ((MR_Box) (PredModuleName_12));
        MR_hl_field(MR_mktag(1), PredSymName_32, 1) = ((MR_Box) (PredName_13));
      }
      Arity_33 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_11);
      {
        PFSymNameArity_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFSymNameArity_34, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_31));
        MR_hl_field(MR_mktag(0), PFSymNameArity_34, 1) = ((MR_Box) (PredSymName_32));
        MR_hl_field(MR_mktag(0), PFSymNameArity_34, 2) = ((MR_Box) (Arity_33));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (PFSymNameArity_34));
      }
      {
        PredNamePieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredNamePieces_35, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), PredNamePieces_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      check_hlds__check_promise__report_assertion_module_error_6_p_0(ModuleName_10, Context_30, PredModuleName_12, PredNamePieces_35, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    }
  }
}

static void MR_CALL 
check_hlds__check_promise__report_assertion_module_error_6_p_0(
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word PredModuleName_9,
  MR_Word IdPieces_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_Word MainPieces_12;
    MR_Word VerbosePieces_13;
    MR_Word Msgs_14;
    MR_Word Spec_15;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_71;
    MR_Word Var_72;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ModuleName_7));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[6])));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[1])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (PredModuleName_9));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[11])));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[7])));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
    }
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IdPieces_10, Var_33);
    MainPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_18, Var_32);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[21])));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
    }
    {
      VerbosePieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VerbosePieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), VerbosePieces_13, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (MainPieces_12));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_65, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_65, 1) = ((MR_Box) (VerbosePieces_13));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msgs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msgs_14, 0) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(1), Msgs_14, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(2), Var_72, 1) = ((MR_Box) (Msgs_14));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_promise.report_assertion_module_error\'/6"));
      MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_15, 3) = ((MR_Box) (Var_71));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
    }
  }
}

static void MR_CALL 
check_hlds__check_promise__report_assertion_interface_error_5_p_0(
  MR_Word ModuleName_6,
  MR_Word Context_7,
  MR_Word IdPieces_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word MainPieces_10;
    MR_Word Msgs_12;
    MR_Word Spec_13;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_53;
    MR_Word Var_61;
    MR_Word Var_62;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ModuleName_6));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[6])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[1])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[11])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[8])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[7])));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
    }
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IdPieces_8, Var_31);
    MainPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_16, Var_30);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (MainPieces_10));
    }
    {
      Msgs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msgs_12, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Msgs_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[23])));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(2), Var_62, 1) = ((MR_Box) (Msgs_12));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_promise.report_assertion_interface_error\'/5"));
      MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_13, 3) = ((MR_Box) (Var_61));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
    }
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
