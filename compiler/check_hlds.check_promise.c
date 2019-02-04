/*
** Automatically generated from `check_promise.m'
** by the Mercury compiler,
** version DEV
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.assertion.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "require.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




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
  MR_Word STATE_VARIABLE_ToInvalidatePredIds_0_16,
  MR_Word * STATE_VARIABLE_ToInvalidatePredIds_17,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(
  MR_Word tscc_proc_1_input_1_ModuleInfo_6,
  MR_Word tscc_proc_1_input_2_PredInfo_7,
  MR_Word tscc_proc_1_input_3_Goal_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Specs_66);

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_unify_rhs_7_p_0(
  MR_Word tscc_proc_2_input_1_ModuleInfo_8,
  MR_Word tscc_proc_2_input_2_PredInfo_9,
  MR_Word tscc_proc_2_input_3_Var_10,
  MR_Word tscc_proc_2_input_4_RHS_11,
  MR_Word tscc_proc_2_input_5_Context_12,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Specs_66);

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__check_promise__report_assertion_interface_error_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Context_7,
  MR_Word IdPieces_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);


static /* final */ const MR_Box check_hlds__check_promise_scalar_common_1[17][2];

static /* final */ const MR_Box check_hlds__check_promise_scalar_common_2[1][7];




static /* final */ const MR_Box check_hlds__check_promise_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: exported promise refers to"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or move the definition into the interface."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Either move the promise into the implementation section"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In interface for module"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is defined in the implementation section of module"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[11])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__check_promise_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "constructor"))
  },
};

static /* final */ const MR_Box check_hlds__check_promise_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
  MR_Word STATE_VARIABLE_ToInvalidatePredIds_0_16,
  MR_Word * STATE_VARIABLE_ToInvalidatePredIds_17,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_12;
    MR_Word GoalType_13;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_18, PredId_8, &PredInfo_12);
    hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_12, &GoalType_13);
    switch (MR_tag((MR_Word) GoalType_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(GoalType_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_ToInvalidatePredIds_17 = STATE_VARIABLE_ToInvalidatePredIds_0_16;
              *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
              *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_ToInvalidatePredIds_17 = STATE_VARIABLE_ToInvalidatePredIds_0_16;
              *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
              *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
            }
            break;
          case (MR_Integer) 2:
            {
              *STATE_VARIABLE_ToInvalidatePredIds_17 = STATE_VARIABLE_ToInvalidatePredIds_0_16;
              *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
              *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
            }
            break;
          case (MR_Integer) 3:
            {
              *STATE_VARIABLE_ToInvalidatePredIds_17 = STATE_VARIABLE_ToInvalidatePredIds_0_16;
              *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
              *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PromiseType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalType_13, (MR_Integer) 0))));
          MR_Word Goal_15;

          switch (PromiseType_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
              {
                MR_Word PredIds_35;
                MR_Word Table0_36;
                MR_Word Table_37;
                MR_Word Var_38;
                MR_Word ClausesInfo_49;
                MR_Word ClausesRep_50;
                MR_Word Clauses_52;
                MR_Word _ItemNumbers_51;
                MR_Word Clause_53;
                MR_Word Var_55;
                MR_Box conv1_Table_37;

                hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_12, &ClausesInfo_49);
                hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_49, &ClausesRep_50, &_ItemNumbers_51);
                hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_50, &Clauses_52);
                succeeded = ((MR_tag((MR_Word) Clauses_52)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Clause_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_52, (MR_Integer) 0))));
                  Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_52, (MR_Integer) 1))));
                  succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                {
                  MR_Word Goal0_54;

                  Goal0_54 = hlds__hlds_clauses__clause_body_1_f_0(Clause_53);
                  hlds__assertion__normalise_goal_2_p_0(Goal0_54, &Goal_15);
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.check_promise", (MR_String) "predicate \140check_hlds.check_promise.get_promise_ex_goal\'/2", (MR_String) "not a single clause");
                    return;
                  }
                }
                hlds__goal_util__predids_from_goal_2_p_0(Goal_15, &PredIds_35);
                hlds__hlds_module__module_info_get_exclusive_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_18, &Table0_36);
                {
                  Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&check_hlds__check_promise_scalar_common_2[0]));
                  MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (check_hlds__check_promise__check_promises_in_pred_7_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (PredId_8));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_table_0), Var_38, PredIds_35, ((MR_Box) (Table0_36)), &conv1_Table_37);
                Table_37 = ((MR_Word) (conv1_Table_37));
                hlds__hlds_module__module_info_set_exclusive_table_3_p_0(Table_37, STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ClausesInfo_61;
                MR_Word ClausesRep_62;
                MR_Word Clauses_64;
                MR_Word _ItemNumbers_63;
                MR_Word Clause_65;
                MR_Word Var_67;

                hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_12, &ClausesInfo_61);
                hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_61, &ClausesRep_62, &_ItemNumbers_63);
                hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_62, &Clauses_64);
                succeeded = ((MR_tag((MR_Word) Clauses_64)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Clause_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_64, (MR_Integer) 0))));
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_64, (MR_Integer) 1))));
                  succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                {
                  MR_Word Goal0_66;

                  Goal0_66 = hlds__hlds_clauses__clause_body_1_f_0(Clause_65);
                  hlds__assertion__normalise_goal_2_p_0(Goal0_66, &Goal_15);
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.check_promise", (MR_String) "predicate \140check_hlds.check_promise.get_promise_ex_goal\'/2", (MR_String) "not a single clause");
                    return;
                  }
                }
                *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word AssertTable0_32;
                MR_Integer AssertionId_33;
                MR_Word AssertTable_34;
                MR_Word STATE_VARIABLE_ModuleInfo_22_40;

                hlds__hlds_module__module_info_get_assertion_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_18, &AssertTable0_32);
                hlds__hlds_promise__assertion_table_add_assertion_4_p_0(PredId_8, &AssertionId_33, AssertTable0_32, &AssertTable_34);
                hlds__hlds_module__module_info_set_assertion_table_3_p_0(AssertTable_34, STATE_VARIABLE_ModuleInfo_0_18, &STATE_VARIABLE_ModuleInfo_22_40);
                hlds__assertion__assert_id_goal_3_p_0(STATE_VARIABLE_ModuleInfo_22_40, AssertionId_33, &Goal_15);
                hlds__assertion__record_preds_used_in_4_p_0(Goal_15, AssertionId_33, STATE_VARIABLE_ModuleInfo_22_40, STATE_VARIABLE_ModuleInfo_19);
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ToInvalidatePredIds_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ToInvalidatePredIds_0_16));
          }
          succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_12);
          if (succeeded)
            check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(*STATE_VARIABLE_ModuleInfo_19, PredInfo_12, Goal_15, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
          else
            *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(
  MR_Word tscc_proc_1_input_1_ModuleInfo_6,
  MR_Word tscc_proc_1_input_2_PredInfo_7,
  MR_Word tscc_proc_1_input_3_Goal_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Specs_66)
{
  {
    MR_Word tscc_proc_2_input_1_ModuleInfo_8;
    MR_Word tscc_proc_2_input_2_PredInfo_9;
    MR_Word tscc_proc_2_input_3_Var_10;
    MR_Word tscc_proc_2_input_4_RHS_11;
    MR_Word tscc_proc_2_input_5_Context_12;
    MR_Word tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36;
    MR_Word tscc_output_1_STATE_VARIABLE_Specs_66;

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
      MR_Word STATE_VARIABLE_Specs_0_65 = tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
      MR_Word STATE_VARIABLE_Specs_66;
      MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
      MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_48 = (MR_Word) (MR_body((MR_Word) (GoalExpr_10), (MR_Integer) 0));
            MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
            MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
            MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_48;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_0_65;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
            tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
            tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0))));
            MR_Word RHS_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1))));
            MR_Word Context_91;
            MR_Word next_value_of_tscc_proc_2_input_1_ModuleInfo_8;
            MR_Word next_value_of_tscc_proc_2_input_2_PredInfo_9;
            MR_Word next_value_of_tscc_proc_2_input_3_Var_10;
            MR_Word next_value_of_tscc_proc_2_input_4_RHS_11;
            MR_Word next_value_of_tscc_proc_2_input_5_Context_12;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36;

            Context_91 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_ModuleInfo_8 = ModuleInfo_6;
            next_value_of_tscc_proc_2_input_2_PredInfo_9 = PredInfo_7;
            next_value_of_tscc_proc_2_input_3_Var_10 = Var_30;
            next_value_of_tscc_proc_2_input_4_RHS_11 = RHS_31;
            next_value_of_tscc_proc_2_input_5_Context_12 = Context_91;
            next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36 = STATE_VARIABLE_Specs_0_65;
            tscc_proc_2_input_1_ModuleInfo_8 = next_value_of_tscc_proc_2_input_1_ModuleInfo_8;
            tscc_proc_2_input_2_PredInfo_9 = next_value_of_tscc_proc_2_input_2_PredInfo_9;
            tscc_proc_2_input_3_Var_10 = next_value_of_tscc_proc_2_input_3_Var_10;
            tscc_proc_2_input_4_RHS_11 = next_value_of_tscc_proc_2_input_4_RHS_11;
            tscc_proc_2_input_5_Context_12 = next_value_of_tscc_proc_2_input_5_Context_12;
            tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0))));
            MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5))));
            MR_Word CallPredInfo_18;
            MR_Word PredStatus_19;
            MR_Word DefnInImplSection_20;

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_12, &CallPredInfo_18);
            hlds__hlds_pred__pred_info_get_status_2_p_0(CallPredInfo_18, &PredStatus_19);
            DefnInImplSection_20 = hlds__status__pred_status_defined_in_impl_section_1_f_0(PredStatus_19);
            switch (DefnInImplSection_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Context_21;
                  MR_Word PredOrFunc_22;
                  MR_Integer Arity_23;
                  MR_Word IdPieces_24;
                  MR_Word Var_87;
                  MR_Word Var_88;

                  Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                  PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CallPredInfo_18);
                  Arity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(CallPredInfo_18);
                  {
                    Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (PredOrFunc_22));
                    MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (SymName_17));
                    MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) (Arity_23));
                  }
                  {
                    Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                    MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Var_88));
                  }
                  {
                    IdPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), IdPieces_24, 0) = ((MR_Box) (Var_87));
                    MR_hl_field(MR_mktag(1), IdPieces_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__check_promise__report_assertion_interface_error_5_p_0(ModuleInfo_6, Context_21, IdPieces_24, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_66);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
              break;
            case (MR_Integer) 1:
              {
                MR_Word PragmaPredInfo_41;
                MR_Word PredId_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word PredStatus_104;
                MR_Word DefnInImplSection_105;

                hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_102, &PragmaPredInfo_41);
                hlds__hlds_pred__pred_info_get_status_2_p_0(PragmaPredInfo_41, &PredStatus_104);
                DefnInImplSection_105 = hlds__status__pred_status_defined_in_impl_section_1_f_0(PredStatus_104);
                switch (DefnInImplSection_105) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String Name_42;
                      MR_Word Var_82;
                      MR_Word Var_83;
                      MR_Word SymName_92;
                      MR_Word Context_93;
                      MR_Word PredOrFunc_94;
                      MR_Integer Arity_95;
                      MR_Word IdPieces_96;

                      Context_93 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                      PredOrFunc_94 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PragmaPredInfo_41);
                      Name_42 = hlds__hlds_pred__pred_info_name_1_f_0(PragmaPredInfo_41);
                      {
                        SymName_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SymName_92, 0) = ((MR_Box) (Name_42));
                      }
                      Arity_95 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PragmaPredInfo_41);
                      {
                        Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (PredOrFunc_94));
                        MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (SymName_92));
                        MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (Arity_95));
                      }
                      {
                        Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                        MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Var_83));
                      }
                      {
                        IdPieces_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), IdPieces_96, 0) = ((MR_Box) (Var_82));
                        MR_hl_field(MR_mktag(1), IdPieces_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      check_hlds__check_promise__report_assertion_interface_error_5_p_0(ModuleInfo_6, Context_93, IdPieces_96, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_66);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, Goals_44, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_66);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, Goals_110, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_66);
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.check_promise", (MR_String) "predicate \140check_hlds.check_promise.check_in_interface_promise_goal\'/5", (MR_String) "assertion contains switch");
                  return;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_111;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_0_65;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word Then_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                MR_Word Else_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_Specs_72_72;
                MR_Word STATE_VARIABLE_Specs_73_73;
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;

                check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Cond_51, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_72_72);
                check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Then_52, STATE_VARIABLE_Specs_72_72, &STATE_VARIABLE_Specs_73_73);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                next_value_of_tscc_proc_1_input_3_Goal_8 = Else_53;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_73_73;
                tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_54)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word LHS_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_54, (MR_Integer) 0))));
                      MR_Word STATE_VARIABLE_Specs_67_67;
                      MR_Word RHS_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_54, (MR_Integer) 1))));
                      MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;

                      check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, LHS_64, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_67_67);
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                      next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                      next_value_of_tscc_proc_1_input_3_Goal_8 = RHS_113;
                      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_67_67;
                      tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                      tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                      tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 4))));
                      MR_Word OrElseGoals_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 5))));
                      MR_Word STATE_VARIABLE_Specs_70_70;

                      check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, MainGoal_59, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_70_70);
                      check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, OrElseGoals_60, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_66);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_112 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_54, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_112;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_0_65;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                      tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                      tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_66;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word ModuleInfo_8 = tscc_proc_2_input_1_ModuleInfo_8;
      MR_Word PredInfo_9 = tscc_proc_2_input_2_PredInfo_9;
      MR_Word Var_10 = tscc_proc_2_input_3_Var_10;
      MR_Word RHS_11 = tscc_proc_2_input_4_RHS_11;
      MR_Word Context_12 = tscc_proc_2_input_5_Context_12;
      MR_Word STATE_VARIABLE_Specs_0_36 = tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36;
      MR_Word STATE_VARIABLE_Specs_37;

      switch (MR_tag((MR_Word) RHS_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
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
            MR_Word DefinedInImpl_25;

            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_9, &ClausesInfo_18);
            hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo_18, &VarTypes_19);
            hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Var_10, &Type_20);
            parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_20, &TypeCtor_21);
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_22);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_21, &TypeDefn_23);
            hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_24);
            DefinedInImpl_25 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_24);
            switch (DefinedInImpl_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IdPieces_26;
                  MR_Word Var_41;
                  MR_Word Var_42;

                  {
                    Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                    MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (ConsId_15));
                  }
                  {
                    Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
                    MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    IdPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), IdPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[16])));
                    MR_hl_field(MR_mktag(1), IdPieces_26, 1) = ((MR_Box) (Var_41));
                  }
                  check_hlds__check_promise__report_assertion_interface_error_5_p_0(ModuleInfo_8, Context_12, IdPieces_26, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_37);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_11, (MR_Integer) 6))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_11, (MR_Integer) 0)));
            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_11, (MR_Integer) 5)));
            MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_8;
            MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_9;
            MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = Goal_35;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_0_36;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
            tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
            tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
            goto top_of_proc_1;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_37;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Specs_66 = tscc_output_1_STATE_VARIABLE_Specs_66;
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
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Specs_66)
{
  {
    MR_Word tscc_proc_1_input_1_ModuleInfo_6;
    MR_Word tscc_proc_1_input_2_PredInfo_7;
    MR_Word tscc_proc_1_input_3_Goal_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
    MR_Word tscc_output_1_STATE_VARIABLE_Specs_66;

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
      MR_Word STATE_VARIABLE_Specs_0_65 = tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
      MR_Word STATE_VARIABLE_Specs_66;
      MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
      MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_48 = (MR_Word) (MR_body((MR_Word) (GoalExpr_10), (MR_Integer) 0));
            MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
            MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
            MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_48;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_0_65;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
            tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
            tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0))));
            MR_Word RHS_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1))));
            MR_Word Context_91;
            MR_Word next_value_of_tscc_proc_2_input_1_ModuleInfo_8;
            MR_Word next_value_of_tscc_proc_2_input_2_PredInfo_9;
            MR_Word next_value_of_tscc_proc_2_input_3_Var_10;
            MR_Word next_value_of_tscc_proc_2_input_4_RHS_11;
            MR_Word next_value_of_tscc_proc_2_input_5_Context_12;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36;

            Context_91 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_ModuleInfo_8 = ModuleInfo_6;
            next_value_of_tscc_proc_2_input_2_PredInfo_9 = PredInfo_7;
            next_value_of_tscc_proc_2_input_3_Var_10 = Var_30;
            next_value_of_tscc_proc_2_input_4_RHS_11 = RHS_31;
            next_value_of_tscc_proc_2_input_5_Context_12 = Context_91;
            next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36 = STATE_VARIABLE_Specs_0_65;
            tscc_proc_2_input_1_ModuleInfo_8 = next_value_of_tscc_proc_2_input_1_ModuleInfo_8;
            tscc_proc_2_input_2_PredInfo_9 = next_value_of_tscc_proc_2_input_2_PredInfo_9;
            tscc_proc_2_input_3_Var_10 = next_value_of_tscc_proc_2_input_3_Var_10;
            tscc_proc_2_input_4_RHS_11 = next_value_of_tscc_proc_2_input_4_RHS_11;
            tscc_proc_2_input_5_Context_12 = next_value_of_tscc_proc_2_input_5_Context_12;
            tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0))));
            MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5))));
            MR_Word CallPredInfo_18;
            MR_Word PredStatus_19;
            MR_Word DefnInImplSection_20;

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_12, &CallPredInfo_18);
            hlds__hlds_pred__pred_info_get_status_2_p_0(CallPredInfo_18, &PredStatus_19);
            DefnInImplSection_20 = hlds__status__pred_status_defined_in_impl_section_1_f_0(PredStatus_19);
            switch (DefnInImplSection_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Context_21;
                  MR_Word PredOrFunc_22;
                  MR_Integer Arity_23;
                  MR_Word IdPieces_24;
                  MR_Word Var_87;
                  MR_Word Var_88;

                  Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                  PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CallPredInfo_18);
                  Arity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(CallPredInfo_18);
                  {
                    Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (PredOrFunc_22));
                    MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (SymName_17));
                    MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) (Arity_23));
                  }
                  {
                    Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                    MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Var_88));
                  }
                  {
                    IdPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), IdPieces_24, 0) = ((MR_Box) (Var_87));
                    MR_hl_field(MR_mktag(1), IdPieces_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__check_promise__report_assertion_interface_error_5_p_0(ModuleInfo_6, Context_21, IdPieces_24, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_66);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
              break;
            case (MR_Integer) 1:
              {
                MR_Word PragmaPredInfo_41;
                MR_Word PredId_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word PredStatus_104;
                MR_Word DefnInImplSection_105;

                hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_102, &PragmaPredInfo_41);
                hlds__hlds_pred__pred_info_get_status_2_p_0(PragmaPredInfo_41, &PredStatus_104);
                DefnInImplSection_105 = hlds__status__pred_status_defined_in_impl_section_1_f_0(PredStatus_104);
                switch (DefnInImplSection_105) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String Name_42;
                      MR_Word Var_82;
                      MR_Word Var_83;
                      MR_Word SymName_92;
                      MR_Word Context_93;
                      MR_Word PredOrFunc_94;
                      MR_Integer Arity_95;
                      MR_Word IdPieces_96;

                      Context_93 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                      PredOrFunc_94 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PragmaPredInfo_41);
                      Name_42 = hlds__hlds_pred__pred_info_name_1_f_0(PragmaPredInfo_41);
                      {
                        SymName_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SymName_92, 0) = ((MR_Box) (Name_42));
                      }
                      Arity_95 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PragmaPredInfo_41);
                      {
                        Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (PredOrFunc_94));
                        MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (SymName_92));
                        MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (Arity_95));
                      }
                      {
                        Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                        MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Var_83));
                      }
                      {
                        IdPieces_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), IdPieces_96, 0) = ((MR_Box) (Var_82));
                        MR_hl_field(MR_mktag(1), IdPieces_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      check_hlds__check_promise__report_assertion_interface_error_5_p_0(ModuleInfo_6, Context_93, IdPieces_96, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_66);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, Goals_44, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_66);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, Goals_110, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_66);
              }
              break;
            case (MR_Integer) 4:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.check_promise", (MR_String) "predicate \140check_hlds.check_promise.check_in_interface_promise_goal\'/5", (MR_String) "assertion contains switch");
                  return;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_111;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_0_65;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word Then_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                MR_Word Else_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_Specs_72_72;
                MR_Word STATE_VARIABLE_Specs_73_73;
                MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
                MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;

                check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Cond_51, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_72_72);
                check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, Then_52, STATE_VARIABLE_Specs_72_72, &STATE_VARIABLE_Specs_73_73);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                next_value_of_tscc_proc_1_input_3_Goal_8 = Else_53;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_73_73;
                tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_54)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word LHS_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_54, (MR_Integer) 0))));
                      MR_Word STATE_VARIABLE_Specs_67_67;
                      MR_Word RHS_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_54, (MR_Integer) 1))));
                      MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;

                      check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, LHS_64, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_67_67);
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                      next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                      next_value_of_tscc_proc_1_input_3_Goal_8 = RHS_113;
                      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_67_67;
                      tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                      tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                      tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 4))));
                      MR_Word OrElseGoals_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 5))));
                      MR_Word STATE_VARIABLE_Specs_70_70;

                      check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(ModuleInfo_6, PredInfo_7, MainGoal_59, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_70_70);
                      check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(ModuleInfo_6, PredInfo_7, OrElseGoals_60, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_66);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_112 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_54, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_112;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_0_65;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
                      tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
                      tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_66;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word ModuleInfo_8 = tscc_proc_2_input_1_ModuleInfo_8;
      MR_Word PredInfo_9 = tscc_proc_2_input_2_PredInfo_9;
      MR_Word Var_10 = tscc_proc_2_input_3_Var_10;
      MR_Word RHS_11 = tscc_proc_2_input_4_RHS_11;
      MR_Word Context_12 = tscc_proc_2_input_5_Context_12;
      MR_Word STATE_VARIABLE_Specs_0_36 = tscc_proc_2_input_6_STATE_VARIABLE_Specs_0_36;
      MR_Word STATE_VARIABLE_Specs_37;

      switch (MR_tag((MR_Word) RHS_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
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
            MR_Word DefinedInImpl_25;

            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_9, &ClausesInfo_18);
            hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo_18, &VarTypes_19);
            hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Var_10, &Type_20);
            parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_20, &TypeCtor_21);
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_22);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_21, &TypeDefn_23);
            hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_24);
            DefinedInImpl_25 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_24);
            switch (DefinedInImpl_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IdPieces_26;
                  MR_Word Var_41;
                  MR_Word Var_42;

                  {
                    Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                    MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (ConsId_15));
                  }
                  {
                    Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
                    MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    IdPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), IdPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[16])));
                    MR_hl_field(MR_mktag(1), IdPieces_26, 1) = ((MR_Box) (Var_41));
                  }
                  check_hlds__check_promise__report_assertion_interface_error_5_p_0(ModuleInfo_8, Context_12, IdPieces_26, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_37);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Goal_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_11, (MR_Integer) 6))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_11, (MR_Integer) 0)));
            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_11, (MR_Integer) 5)));
            MR_Word next_value_of_tscc_proc_1_input_1_ModuleInfo_6 = ModuleInfo_8;
            MR_Word next_value_of_tscc_proc_1_input_2_PredInfo_7 = PredInfo_9;
            MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = Goal_35;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = STATE_VARIABLE_Specs_0_36;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_ModuleInfo_6 = next_value_of_tscc_proc_1_input_1_ModuleInfo_6;
            tscc_proc_1_input_2_PredInfo_7 = next_value_of_tscc_proc_1_input_2_PredInfo_7;
            tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Specs_0_65;
            goto top_of_proc_1;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_37;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Specs_66 = tscc_output_1_STATE_VARIABLE_Specs_66;
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
check_hlds__check_promise__report_assertion_interface_error_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Context_7,
  MR_Word IdPieces_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word ModuleName_10;
    MR_Word MainPieces_11;
    MR_Word Msgs_13;
    MR_Word Spec_14;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_51;
    MR_Word Var_58;
    MR_Word Var_59;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_10);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (ModuleName_10));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[4])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[12])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[7])));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[13])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), IdPieces_8, Var_32);
    MainPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_17, Var_31);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (MainPieces_11));
    }
    {
      Msgs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msgs_13, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Msgs_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[15])));
    }
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (Msgs_13));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_58));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
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
