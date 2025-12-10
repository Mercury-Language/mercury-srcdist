/*
** Automatically generated from `types_into_modes.m'
** by the Mercury compiler,
** version rotd-2025-12-10
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


// :- module check_hlds.types_into_modes.
// :- implementation.

/*
INIT mercury__check_hlds__types_into_modes__init
ENDINIT
*/

#include "check_hlds.types_into_modes.mih"


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
#include "int.mih"
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
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_mode_type_prop.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_clauses_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word VarTable_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Cache_0_6,
  MR_Word * STATE_VARIABLE_Cache_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_cases_8_p_0(
  MR_Word TPropInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Cache_0_5,
  MR_Word * STATE_VARIABLE_Cache_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goals_8_p_0(
  MR_Word TPropInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Cache_0_5,
  MR_Word * STATE_VARIABLE_Cache_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(
  MR_Word TPropInfo_9,
  MR_Word VarTable_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_Cache_0_94,
  MR_Word * STATE_VARIABLE_Cache_95,
  MR_Word STATE_VARIABLE_Specs_0_96,
  MR_Word * STATE_VARIABLE_Specs_97);

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_var_modes_10_p_0(
  MR_Word TPropInfo_1,
  MR_Word VarTable_2,
  MR_Word Args_3,
  MR_Integer ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_procs_modes_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevErrorProcs_0_4,
  MR_Word * STATE_VARIABLE_RevErrorProcs_5,
  MR_Word STATE_VARIABLE_Cache_0_6,
  MR_Word * STATE_VARIABLE_Cache_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9,
  MR_Word STATE_VARIABLE_Procs_0_10,
  MR_Word * STATE_VARIABLE_Procs_11);

static void MR_CALL 
check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(
  MR_Word tscc_proc_1_input_1_Inst_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_InstVars_28);

static void MR_CALL 
check_hlds__types_into_modes__acc_inst_vars_in_inst_name_3_p_0(
  MR_Word tscc_proc_2_input_1_InstName_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_InstVars_28);

static void MR_CALL 
check_hlds__types_into_modes__acc_inst_vars_in_bound_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstVars_0_2,
  MR_Word * STATE_VARIABLE_InstVars_3);

static void MR_CALL 
check_hlds__types_into_modes__acc_inst_vars_in_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstVars_0_2,
  MR_Word * STATE_VARIABLE_InstVars_3);

static void MR_CALL 
check_hlds__types_into_modes__acc_inst_vars_in_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstVars_0_2,
  MR_Word * STATE_VARIABLE_InstVars_3);


static /* final */ const MR_Box check_hlds__types_into_modes_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__types_into_modes_scalar_common_2[2][3];




static /* final */ const MR_Box check_hlds__types_into_modes_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__types_into_modes_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__types_into_modes_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&check_hlds__types_into_modes_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__types_into_modes_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_pred_modes_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word * ErrorProcs_9,
  MR_Word * STATE_VARIABLE_Specs_28,
  MR_Word STATE_VARIABLE_Cache_0_29,
  MR_Word * STATE_VARIABLE_Cache_30,
  MR_Word STATE_VARIABLE_PredInfo_0_31,
  MR_Word * STATE_VARIABLE_PredInfo_32)
{
  MR_bool succeeded;
  MR_Word Procs0_13;
  MR_Word ProcIds_14;
  MR_Word RevErrorProcs_15;
  MR_Word Procs_16;
  MR_Word Markers_17;
  MR_Word STATE_VARIABLE_Cache_1_35;
  MR_Word STATE_VARIABLE_Specs_2_36;
  MR_Word STATE_VARIABLE_PredInfo_1_37;

  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_31, &Procs0_13);
  ProcIds_14 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_0_31);
  check_hlds__types_into_modes__propagate_checked_types_into_procs_modes_11_p_0(ModuleInfo_8, STATE_VARIABLE_PredInfo_0_31, ProcIds_14, (MR_Word) ((MR_Unsigned) 0U), &RevErrorProcs_15, STATE_VARIABLE_Cache_0_29, &STATE_VARIABLE_Cache_1_35, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_2_36, Procs0_13, &Procs_16);
  mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_2[0]), RevErrorProcs_15, ErrorProcs_9);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_16, STATE_VARIABLE_PredInfo_0_31, &STATE_VARIABLE_PredInfo_1_37);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_1_37, &Markers_17);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_17, (MR_Integer) 29);
  if (succeeded)
  {
    MR_Word ClausesInfo0_18;
    MR_Word FoundSyntaxError_19;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_1_37, &ClausesInfo0_18);
    hlds__hlds_clauses__clauses_info_get_had_syntax_errors_2_p_0(ClausesInfo0_18, &FoundSyntaxError_19);
    switch (FoundSyntaxError_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ClausesRep0_20;
          MR_Word ItemNums_21;
          MR_Word Clauses0_22;
          MR_Word VarSet_23;
          MR_Word VarTable_24;
          MR_Word Clauses_25;
          MR_Word ClausesRep_26;
          MR_Word ClausesInfo_27;

          hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_18, &ClausesRep0_20, &ItemNums_21);
          hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_20, &Clauses0_22);
          VarSet_23 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_18, 0))));
          VarTable_24 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_18, 2))));
          check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_clauses_9_p_0(ModuleInfo_8, VarSet_23, VarTable_24, Clauses0_22, &Clauses_25, STATE_VARIABLE_Cache_1_35, STATE_VARIABLE_Cache_30, STATE_VARIABLE_Specs_2_36, STATE_VARIABLE_Specs_28);
          hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_25, &ClausesRep_26);
          hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_26, ItemNums_21, ClausesInfo0_18, &ClausesInfo_27);
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_27, STATE_VARIABLE_PredInfo_1_37, STATE_VARIABLE_PredInfo_32);
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_2_36;
          *STATE_VARIABLE_Cache_30 = STATE_VARIABLE_Cache_1_35;
          *STATE_VARIABLE_PredInfo_32 = STATE_VARIABLE_PredInfo_1_37;
        }
        break;
    }
  }
  else
  {
    *STATE_VARIABLE_PredInfo_32 = STATE_VARIABLE_PredInfo_1_37;
    *STATE_VARIABLE_Cache_30 = STATE_VARIABLE_Cache_1_35;
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_2_36;
  }
}

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_clauses_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word VarTable_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Cache_0_6,
  MR_Word * STATE_VARIABLE_Cache_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    *STATE_VARIABLE_Cache_7 = STATE_VARIABLE_Cache_0_6;
  }
  else
  {
    MR_Word Clause0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Clauses0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Clause_24;
    MR_Word Clauses_25;
    MR_Word STATE_VARIABLE_Cache_1_32;
    MR_Word STATE_VARIABLE_Specs_1_33;
    MR_Word Lang_34 = ((MR_Word) ((MR_hl_field(0, Clause0_22, 2))));

    if ((Lang_34 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal0_35;
      MR_Word TVarSet_36;
      MR_Word InstVarSet_37;
      MR_Word TPropInfo_38;
      MR_Word Goal_39;
      MR_Word Var_47;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;

      Goal0_35 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_22);
      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &TVarSet_36);
      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_2, &InstVarSet_37);
      {
        TPropInfo_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TPropInfo_38, 0) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(0, TPropInfo_38, 1) = ((MR_Box) (TVarSet_36));
        MR_hl_field(0, TPropInfo_38, 2) = ((MR_Box) (InstVarSet_37));
      }
      check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_38, VarTable_3, Goal0_35, &Goal_39, STATE_VARIABLE_Cache_0_6, &STATE_VARIABLE_Cache_1_32, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_1_33);
      Var_47 = ((MR_Word) ((MR_hl_field(0, Clause0_22, 0))));
      Var_49 = ((MR_Word) ((MR_hl_field(0, Clause0_22, 2))));
      Var_50 = ((MR_Word) ((MR_hl_field(0, Clause0_22, 3))));
      Var_51 = ((MR_Word) ((MR_hl_field(0, Clause0_22, 4))));
      Var_52 = ((MR_Word) ((MR_hl_field(0, Clause0_22, 5))));
      Var_53 = ((MR_Unsigned) ((MR_hl_field(0, Clause0_22, 6))) & (MR_Integer) 1);
      {
        Clause_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Clause_24, 0) = ((MR_Box) (Var_47));
        MR_hl_field(0, Clause_24, 1) = ((MR_Box) (Goal_39));
        MR_hl_field(0, Clause_24, 2) = ((MR_Box) (Var_49));
        MR_hl_field(0, Clause_24, 3) = ((MR_Box) (Var_50));
        MR_hl_field(0, Clause_24, 4) = ((MR_Box) (Var_51));
        MR_hl_field(0, Clause_24, 5) = ((MR_Box) (Var_52));
        MR_hl_field(0, Clause_24, 6) = (MR_Box) ((MR_Unsigned) (Var_53));
      }
    }
    else
    {
      Clause_24 = Clause0_22;
      STATE_VARIABLE_Cache_1_32 = STATE_VARIABLE_Cache_0_6;
      STATE_VARIABLE_Specs_1_33 = STATE_VARIABLE_Specs_0_8;
    }
    check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_clauses_9_p_0(ModuleInfo_1, VarSet_2, VarTable_3, Clauses0_23, &Clauses_25, STATE_VARIABLE_Cache_1_32, STATE_VARIABLE_Cache_7, STATE_VARIABLE_Specs_1_33, STATE_VARIABLE_Specs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Clause_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (Clauses_25));
    }
  }
}

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_cases_8_p_0(
  MR_Word TPropInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Cache_0_5,
  MR_Word * STATE_VARIABLE_Cache_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Cache_6 = STATE_VARIABLE_Cache_0_5;
  }
  else
  {
    MR_Word Case0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Cases0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Case_21;
    MR_Word Cases_22;
    MR_Word MainConsId0_25 = ((MR_Word) ((MR_hl_field(0, Case0_19, 0))));
    MR_Word OtherConsIds0_26 = ((MR_Word) ((MR_hl_field(0, Case0_19, 1))));
    MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(0, Case0_19, 2))));
    MR_Word Goal_28;
    MR_Word STATE_VARIABLE_Cache_1_33;
    MR_Word STATE_VARIABLE_Specs_1_34;

    check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_1, VarTable_2, Goal0_27, &Goal_28, STATE_VARIABLE_Cache_0_5, &STATE_VARIABLE_Cache_1_33, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_34);
    {
      Case_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_21, 0) = ((MR_Box) (MainConsId0_25));
      MR_hl_field(0, Case_21, 1) = ((MR_Box) (OtherConsIds0_26));
      MR_hl_field(0, Case_21, 2) = ((MR_Box) (Goal_28));
    }
    check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_cases_8_p_0(TPropInfo_1, VarTable_2, Cases0_20, &Cases_22, STATE_VARIABLE_Cache_1_33, STATE_VARIABLE_Cache_6, STATE_VARIABLE_Specs_1_34, STATE_VARIABLE_Specs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_22));
    }
  }
}

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goals_8_p_0(
  MR_Word TPropInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Cache_0_5,
  MR_Word * STATE_VARIABLE_Cache_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Cache_6 = STATE_VARIABLE_Cache_0_5;
  }
  else
  {
    MR_Word Goal0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Goals0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Goal_21;
    MR_Word Goals_22;
    MR_Word STATE_VARIABLE_Cache_1_29;
    MR_Word STATE_VARIABLE_Specs_1_30;

    check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_1, VarTable_2, Goal0_19, &Goal_21, STATE_VARIABLE_Cache_0_5, &STATE_VARIABLE_Cache_1_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_30);
    check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goals_8_p_0(TPropInfo_1, VarTable_2, Goals0_20, &Goals_22, STATE_VARIABLE_Cache_1_29, STATE_VARIABLE_Cache_6, STATE_VARIABLE_Specs_1_30, STATE_VARIABLE_Specs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_22));
    }
  }
}

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(
  MR_Word TPropInfo_9,
  MR_Word VarTable_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_Cache_0_94,
  MR_Word * STATE_VARIABLE_Cache_95,
  MR_Word STATE_VARIABLE_Specs_0_96,
  MR_Word * STATE_VARIABLE_Specs_97)
{
  MR_Word GoalExpr0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 0))));
  MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_74 = (MR_Word) ((MR_Word) (GoalExpr0_15));
        MR_Word SubGoal_75;
        MR_Word GoalExpr_133;

        check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_9, VarTable_10, SubGoal0_74, &SubGoal_75, STATE_VARIABLE_Cache_0_94, STATE_VARIABLE_Cache_95, STATE_VARIABLE_Specs_0_96, STATE_VARIABLE_Specs_97);
        GoalExpr_133 = (MR_Word) ((MR_Word) (SubGoal_75));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_133));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_16));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS0_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, 0))));
        MR_Word RHS0_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, 1))));
        MR_Word UnifyMode0_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, 2))));
        MR_Word Unification0_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, 3))));
        MR_Word UniContext0_21 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, 4))));

        switch (MR_tag((MR_Word) RHS0_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_12 = Goal0_11;
              *STATE_VARIABLE_Cache_95 = STATE_VARIABLE_Cache_0_94;
              *STATE_VARIABLE_Specs_97 = STATE_VARIABLE_Specs_0_96;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PorF0_28 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_18, 0))) & (MR_Integer) 1);
              MR_Word ClosureVars0_29 = ((MR_Word) ((MR_hl_field(2, RHS0_18, 1))));
              MR_Word ArgVarsModes0_30 = ((MR_Word) ((MR_hl_field(2, RHS0_18, 2))));
              MR_Word Detism0_31 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_18, 3))) & (MR_Integer) 7);
              MR_Word LambdaGoal0_32 = ((MR_Word) ((MR_hl_field(2, RHS0_18, 4))));
              MR_Word PredFormArity_33;
              MR_Word Context_34;
              MR_Word Args_35;
              MR_Word ArgVarsModes_36;
              MR_Word LambdaGoal_37;
              MR_Word RHS_38;
              MR_Word GoalExpr_39;
              MR_Word STATE_VARIABLE_Cache_1_99;
              MR_Word STATE_VARIABLE_Specs_1_100;
              MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(2, RHS0_18, 0)));

              PredFormArity_33 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_2[1]), ArgVarsModes0_30);
              Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_16);
              {
                Args_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Args_35, 0) = (MR_Box) ((MR_Unsigned) (PorF0_28));
                MR_hl_field(1, Args_35, 1) = ((MR_Box) (PredFormArity_33));
                MR_hl_field(1, Args_35, 2) = ((MR_Box) (Context_34));
              }
              check_hlds__types_into_modes__propagate_checked_types_into_var_modes_10_p_0(TPropInfo_9, VarTable_10, Args_35, (MR_Integer) 1, ArgVarsModes0_30, &ArgVarsModes_36, STATE_VARIABLE_Cache_0_94, &STATE_VARIABLE_Cache_1_99, STATE_VARIABLE_Specs_0_96, &STATE_VARIABLE_Specs_1_100);
              check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_9, VarTable_10, LambdaGoal0_32, &LambdaGoal_37, STATE_VARIABLE_Cache_1_99, STATE_VARIABLE_Cache_95, STATE_VARIABLE_Specs_1_100, STATE_VARIABLE_Specs_97);
              {
                RHS_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_38, 0) = (MR_Box) (packed_word_3);
                MR_hl_field(2, RHS_38, 1) = ((MR_Box) (ClosureVars0_29));
                MR_hl_field(2, RHS_38, 2) = ((MR_Box) (ArgVarsModes_36));
                MR_hl_field(2, RHS_38, 3) = (MR_Box) ((MR_Unsigned) (Detism0_31));
                MR_hl_field(2, RHS_38, 4) = ((MR_Box) (LambdaGoal_37));
              }
              {
                GoalExpr_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, GoalExpr_39, 0) = ((MR_Box) (LHS0_17));
                MR_hl_field(1, GoalExpr_39, 1) = ((MR_Box) (RHS_38));
                MR_hl_field(1, GoalExpr_39, 2) = ((MR_Box) (UnifyMode0_19));
                MR_hl_field(1, GoalExpr_39, 3) = ((MR_Box) (Unification0_20));
                MR_hl_field(1, GoalExpr_39, 4) = ((MR_Box) (UniContext0_21));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_39));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_16));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *Goal_12 = Goal0_11;
        *STATE_VARIABLE_Cache_95 = STATE_VARIABLE_Cache_0_94;
        *STATE_VARIABLE_Specs_97 = STATE_VARIABLE_Specs_0_96;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_15, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *Goal_12 = Goal0_11;
            *STATE_VARIABLE_Cache_95 = STATE_VARIABLE_Cache_0_94;
            *STATE_VARIABLE_Specs_97 = STATE_VARIABLE_Specs_0_96;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_58 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_15, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 2))));
            MR_Word Conjuncts_60;
            MR_Word GoalExpr_129;

            check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goals_8_p_0(TPropInfo_9, VarTable_10, Conjuncts0_59, &Conjuncts_60, STATE_VARIABLE_Cache_0_94, STATE_VARIABLE_Cache_95, STATE_VARIABLE_Specs_0_96, STATE_VARIABLE_Specs_97);
            {
              GoalExpr_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_129, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_129, 1) = (MR_Box) ((MR_Unsigned) (ConjType_58));
              MR_hl_field(3, GoalExpr_129, 2) = ((MR_Box) (Conjuncts_60));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_129));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_16));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 1))));
            MR_Word Disjuncts_62;
            MR_Word GoalExpr_130;

            check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goals_8_p_0(TPropInfo_9, VarTable_10, Disjuncts0_61, &Disjuncts_62, STATE_VARIABLE_Cache_0_94, STATE_VARIABLE_Cache_95, STATE_VARIABLE_Specs_0_96, STATE_VARIABLE_Specs_97);
            {
              GoalExpr_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_130, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_130, 1) = ((MR_Box) (Disjuncts_62));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_130));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_16));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 1))));
            MR_Word CanFail0_64 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_15, 2))) & (MR_Integer) 1);
            MR_Word Cases0_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 3))));
            MR_Word Cases_66;
            MR_Word GoalExpr_131;

            check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_cases_8_p_0(TPropInfo_9, VarTable_10, Cases0_65, &Cases_66, STATE_VARIABLE_Cache_0_94, STATE_VARIABLE_Cache_95, STATE_VARIABLE_Specs_0_96, STATE_VARIABLE_Specs_97);
            {
              GoalExpr_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_131, 1) = ((MR_Box) (Var0_63));
              MR_hl_field(3, GoalExpr_131, 2) = (MR_Box) ((MR_Unsigned) (CanFail0_64));
              MR_hl_field(3, GoalExpr_131, 3) = ((MR_Box) (Cases_66));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_131));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_16));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 1))));
            MR_Word GoalExpr_134;
            MR_Word SubGoal0_135 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 2))));
            MR_Word SubGoal_136;

            check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_9, VarTable_10, SubGoal0_135, &SubGoal_136, STATE_VARIABLE_Cache_0_94, STATE_VARIABLE_Cache_95, STATE_VARIABLE_Specs_0_96, STATE_VARIABLE_Specs_97);
            {
              GoalExpr_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_134, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_134, 1) = ((MR_Box) (Reason0_76));
              MR_hl_field(3, GoalExpr_134, 2) = ((MR_Box) (SubGoal_136));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_134));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_16));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 1))));
            MR_Word Cond0_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 2))));
            MR_Word Then0_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 3))));
            MR_Word Else0_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 4))));
            MR_Word Cond_71;
            MR_Word Then_72;
            MR_Word Else_73;
            MR_Word STATE_VARIABLE_Cache_6_109;
            MR_Word STATE_VARIABLE_Specs_6_110;
            MR_Word STATE_VARIABLE_Cache_7_111;
            MR_Word STATE_VARIABLE_Specs_7_112;
            MR_Word GoalExpr_132;

            check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_9, VarTable_10, Cond0_68, &Cond_71, STATE_VARIABLE_Cache_0_94, &STATE_VARIABLE_Cache_6_109, STATE_VARIABLE_Specs_0_96, &STATE_VARIABLE_Specs_6_110);
            check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_9, VarTable_10, Then0_69, &Then_72, STATE_VARIABLE_Cache_6_109, &STATE_VARIABLE_Cache_7_111, STATE_VARIABLE_Specs_6_110, &STATE_VARIABLE_Specs_7_112);
            check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_9, VarTable_10, Else0_70, &Else_73, STATE_VARIABLE_Cache_7_111, STATE_VARIABLE_Cache_95, STATE_VARIABLE_Specs_7_112, STATE_VARIABLE_Specs_97);
            {
              GoalExpr_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_132, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_132, 1) = ((MR_Box) (Vars0_67));
              MR_hl_field(3, GoalExpr_132, 2) = ((MR_Box) (Cond_71));
              MR_hl_field(3, GoalExpr_132, 3) = ((MR_Box) (Then_72));
              MR_hl_field(3, GoalExpr_132, 4) = ((MR_Box) (Else_73));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_132));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_16));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, 1))));
            MR_Word ShortHand_82;
            MR_Word GoalExpr_141;

            switch (MR_tag((MR_Word) ShortHand0_77)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word GoalA0_78 = ((MR_Word) ((MR_hl_field(0, ShortHand0_77, 0))));
                  MR_Word GoalB0_79 = ((MR_Word) ((MR_hl_field(0, ShortHand0_77, 1))));
                  MR_Word GoalA_80;
                  MR_Word GoalB_81;
                  MR_Word STATE_VARIABLE_Cache_11_119;
                  MR_Word STATE_VARIABLE_Specs_11_120;

                  check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_9, VarTable_10, GoalA0_78, &GoalA_80, STATE_VARIABLE_Cache_0_94, &STATE_VARIABLE_Cache_11_119, STATE_VARIABLE_Specs_0_96, &STATE_VARIABLE_Specs_11_120);
                  check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_9, VarTable_10, GoalB0_79, &GoalB_81, STATE_VARIABLE_Cache_11_119, STATE_VARIABLE_Cache_95, STATE_VARIABLE_Specs_11_120, STATE_VARIABLE_Specs_97);
                  {
                    ShortHand_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_82, 0) = ((MR_Box) (GoalA_80));
                    MR_hl_field(0, ShortHand_82, 1) = ((MR_Box) (GoalB_81));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word AtomicGoalType0_83 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_77, 0))) & (MR_Integer) 3);
                  MR_Word OuterVars0_84 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 1))));
                  MR_Word InnerVars0_85 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 2))));
                  MR_Word OutputVars0_86 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 3))));
                  MR_Word MainGoal0_87 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 4))));
                  MR_Word OrElseGoals0_88 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 5))));
                  MR_Word OrElseInners0_89 = ((MR_Word) ((MR_hl_field(1, ShortHand0_77, 6))));
                  MR_Word MainGoal_90;
                  MR_Word OrElseGoals_91;
                  MR_Word STATE_VARIABLE_Cache_13_123;
                  MR_Word STATE_VARIABLE_Specs_13_124;

                  check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_9, VarTable_10, MainGoal0_87, &MainGoal_90, STATE_VARIABLE_Cache_0_94, &STATE_VARIABLE_Cache_13_123, STATE_VARIABLE_Specs_0_96, &STATE_VARIABLE_Specs_13_124);
                  check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goals_8_p_0(TPropInfo_9, VarTable_10, OrElseGoals0_88, &OrElseGoals_91, STATE_VARIABLE_Cache_13_123, STATE_VARIABLE_Cache_95, STATE_VARIABLE_Specs_13_124, STATE_VARIABLE_Specs_97);
                  {
                    ShortHand_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_82, 0) = (MR_Box) ((MR_Unsigned) (AtomicGoalType0_83));
                    MR_hl_field(1, ShortHand_82, 1) = ((MR_Box) (OuterVars0_84));
                    MR_hl_field(1, ShortHand_82, 2) = ((MR_Box) (InnerVars0_85));
                    MR_hl_field(1, ShortHand_82, 3) = ((MR_Box) (OutputVars0_86));
                    MR_hl_field(1, ShortHand_82, 4) = ((MR_Box) (MainGoal_90));
                    MR_hl_field(1, ShortHand_82, 5) = ((MR_Box) (OrElseGoals_91));
                    MR_hl_field(1, ShortHand_82, 6) = ((MR_Box) (OrElseInners0_89));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIOVars0_92 = ((MR_Word) ((MR_hl_field(2, ShortHand0_77, 0))));
                  MR_Word ResultVars0_93 = ((MR_Word) ((MR_hl_field(2, ShortHand0_77, 1))));
                  MR_Word SubGoal0_137 = ((MR_Word) ((MR_hl_field(2, ShortHand0_77, 2))));
                  MR_Word SubGoal_138;

                  check_hlds__types_into_modes__propagate_checked_types_into_lambda_modes_in_goal_8_p_0(TPropInfo_9, VarTable_10, SubGoal0_137, &SubGoal_138, STATE_VARIABLE_Cache_0_94, STATE_VARIABLE_Cache_95, STATE_VARIABLE_Specs_0_96, STATE_VARIABLE_Specs_97);
                  {
                    ShortHand_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_82, 0) = ((MR_Box) (MaybeIOVars0_92));
                    MR_hl_field(2, ShortHand_82, 1) = ((MR_Box) (ResultVars0_93));
                    MR_hl_field(2, ShortHand_82, 2) = ((MR_Box) (SubGoal_138));
                  }
                }
                break;
            }
            {
              GoalExpr_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_141, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_141, 1) = ((MR_Box) (ShortHand_82));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_141));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_16));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_var_modes_10_p_0(
  MR_Word TPropInfo_1,
  MR_Word VarTable_2,
  MR_Word Args_3,
  MR_Integer ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
    *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
  }
  else
  {
    MR_Word Var_25;
    MR_Word Mode0_26;
    MR_Word VarsModes0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word Mode_28;
    MR_Word VarsModes_29;
    MR_Word Type_32;
    MR_Word Context_33;
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_Cache_1_40;
    MR_Word STATE_VARIABLE_Specs_1_41;
    MR_Integer Var_42;

    Var_25 = ((MR_Word) ((MR_hl_field(0, Var_38, 0))));
    Mode0_26 = ((MR_Word) ((MR_hl_field(0, Var_38, 1))));
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_2, Var_25, &Type_32);
    {
      Context_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Context_33, 0) = ((MR_Box) (Args_3));
      MR_hl_field(0, Context_33, 1) = ((MR_Box) (ArgNum_4));
    }
    hlds__inst_mode_type_prop__propagate_checked_type_into_mode_9_p_0(TPropInfo_1, Context_33, Type_32, Mode0_26, &Mode_28, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_1_40, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_1_41);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_25));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (Mode_28));
    }
    Var_42 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
    check_hlds__types_into_modes__propagate_checked_types_into_var_modes_10_p_0(TPropInfo_1, VarTable_2, Args_3, Var_42, VarsModes0_27, &VarsModes_29, STATE_VARIABLE_Cache_1_40, STATE_VARIABLE_Cache_8, STATE_VARIABLE_Specs_1_41, STATE_VARIABLE_Specs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, base, 1) = ((MR_Box) (VarsModes_29));
    }
  }
}

static void MR_CALL 
check_hlds__types_into_modes__propagate_checked_types_into_procs_modes_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevErrorProcs_0_4,
  MR_Word * STATE_VARIABLE_RevErrorProcs_5,
  MR_Word STATE_VARIABLE_Cache_0_6,
  MR_Word * STATE_VARIABLE_Cache_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9,
  MR_Word STATE_VARIABLE_Procs_0_10,
  MR_Word * STATE_VARIABLE_Procs_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Procs_11 = STATE_VARIABLE_Procs_0_10;
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_Cache_7 = STATE_VARIABLE_Cache_0_6;
      *STATE_VARIABLE_RevErrorProcs_5 = STATE_VARIABLE_RevErrorProcs_0_4;
    }
    else
    {
      MR_Integer ProcId_28 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ProcIds_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_RevErrorProcs_1_42;
      MR_Word STATE_VARIABLE_Cache_1_43;
      MR_Word STATE_VARIABLE_Specs_1_44;
      MR_Word STATE_VARIABLE_Procs_1_45;
      MR_Word ArgTypes_46;
      MR_Word TVarSet_47;
      MR_Word ProcInfo0_48;
      MR_Word InstVarSet_49;
      MR_Word ArgModes0_50;
      MR_Word TPropInfo_51;
      MR_Word ArgModes_52;
      MR_Word InstVarsInArgModesSet_53;
      MR_Word InstVarsInArgModes_54;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Box conv0_ProcInfo0_48;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevErrorProcs_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Procs_0_10;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_2, &ArgTypes_46);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_2, &TVarSet_47);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_Procs_0_10, ((MR_Box) (ProcId_28)), &conv0_ProcInfo0_48);
      ProcInfo0_48 = ((MR_Word) (conv0_ProcInfo0_48));
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo0_48, &InstVarSet_49);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_48, &ArgModes0_50);
      {
        TPropInfo_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TPropInfo_51, 0) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(0, TPropInfo_51, 1) = ((MR_Box) (TVarSet_47));
        MR_hl_field(0, TPropInfo_51, 2) = ((MR_Box) (InstVarSet_49));
      }
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_58, 0) = ((MR_Box) (PredInfo_2));
      }
      hlds__inst_mode_type_prop__propagate_checked_types_into_modes_9_p_0(TPropInfo_51, Var_58, ArgTypes_46, ArgModes0_50, &ArgModes_52, STATE_VARIABLE_Cache_0_6, &STATE_VARIABLE_Cache_1_43, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_1_44);
      Var_59 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_1[0]));
      check_hlds__types_into_modes__acc_inst_vars_in_modes_3_p_0(ArgModes_52, Var_59, &InstVarsInArgModesSet_53);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_1[0]), InstVarsInArgModesSet_53, &InstVarsInArgModes_54);
      if ((InstVarsInArgModes_54 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ProcInfo_57;

        hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_52, ProcInfo0_48, &ProcInfo_57);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_28)), ((MR_Box) (ProcInfo_57)), STATE_VARIABLE_Procs_0_10, &STATE_VARIABLE_Procs_1_45);
        STATE_VARIABLE_RevErrorProcs_1_42 = STATE_VARIABLE_RevErrorProcs_0_4;
      }
      else
      {
        MR_Word Var_60;

        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (ProcId_28));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) (InstVarsInArgModes_54));
        }
        {
          STATE_VARIABLE_RevErrorProcs_1_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevErrorProcs_1_42, 0) = ((MR_Box) (Var_60));
          MR_hl_field(1, STATE_VARIABLE_RevErrorProcs_1_42, 1) = ((MR_Box) (STATE_VARIABLE_RevErrorProcs_0_4));
        }
        STATE_VARIABLE_Procs_1_45 = STATE_VARIABLE_Procs_0_10;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_29;
      next_value_of_STATE_VARIABLE_RevErrorProcs_0_4 = STATE_VARIABLE_RevErrorProcs_1_42;
      next_value_of_STATE_VARIABLE_Cache_0_6 = STATE_VARIABLE_Cache_1_43;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_1_44;
      next_value_of_STATE_VARIABLE_Procs_0_10 = STATE_VARIABLE_Procs_1_45;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevErrorProcs_0_4 = next_value_of_STATE_VARIABLE_RevErrorProcs_0_4;
      STATE_VARIABLE_Cache_0_6 = next_value_of_STATE_VARIABLE_Cache_0_6;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      STATE_VARIABLE_Procs_0_10 = next_value_of_STATE_VARIABLE_Procs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(
  MR_Word tscc_proc_1_input_1_Inst_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_InstVars_28)
{
  MR_Word tscc_proc_2_input_1_InstName_4;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
  MR_Word tscc_output_1_STATE_VARIABLE_InstVars_28;

  // The code for TSCC PROC 1: pred check_hlds.types_into_modes.acc_inst_vars_in_inst/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.types_into_modes.acc_inst_vars_in_inst/3-0
  ;
  // proc 2 in TSCC: pred check_hlds.types_into_modes.acc_inst_vars_in_inst_name/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Inst_4 = tscc_proc_1_input_1_Inst_4;
    MR_Word STATE_VARIABLE_InstVars_0_27 = tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;
    MR_Word STATE_VARIABLE_InstVars_28;

    switch (MR_tag((MR_Word) Inst_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_0_27;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_0_27;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_53 = ((MR_Word) ((MR_hl_field(1, Inst_4, 1))));

          if ((HOInstInfo_53 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_0_27;
          else
          {
            MR_Word PredInstInfo_43 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_53), (MR_Integer) 1));
            MR_Word Modes_45 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_43, 1))));

            check_hlds__types_into_modes__acc_inst_vars_in_modes_3_p_0(Modes_45, STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults_9 = ((MR_Word) ((MR_hl_field(2, Inst_4, 1))));
          MR_Word BoundFunctors_10 = ((MR_Word) ((MR_hl_field(2, Inst_4, 2))));

          switch (MR_tag((MR_Word) InstResults_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__types_into_modes__acc_inst_vars_in_bound_functors_3_p_0(BoundFunctors_10, STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_0_27;
                  break;
              }
              break;
            case (MR_Integer) 1:
              check_hlds__types_into_modes__acc_inst_vars_in_bound_functors_3_p_0(BoundFunctors_10, STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_7 = ((MR_Word) ((MR_hl_field(3, Inst_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = InstName_7;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_27;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConstrainedVars_23 = ((MR_Word) ((MR_hl_field(3, Inst_4, 1))));
              MR_Word SubInst_24 = ((MR_Word) ((MR_hl_field(3, Inst_4, 2))));
              MR_Word SubInstVars_25;
              MR_Word FreeInstVars_26;
              MR_Word Var_34;

              Var_34 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_1[0]));
              check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(SubInst_24, Var_34, &SubInstVars_25);
              mercury__set__difference_3_p_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_1[0]), SubInstVars_25, ConstrainedVars_23, &FreeInstVars_26);
              mercury__set__union_3_p_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_1[0]), FreeInstVars_26, STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HOInstInfo_17 = ((MR_Word) ((MR_hl_field(3, Inst_4, 2))));

              if ((HOInstInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_0_27;
              else
              {
                MR_Word PredInstInfo_18 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_17), (MR_Integer) 1));
                MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_18, 1))));

                check_hlds__types_into_modes__acc_inst_vars_in_modes_3_p_0(Modes_20, STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVar_6 = ((MR_Word) ((MR_hl_field(3, Inst_4, 1))));

              mercury__set__insert_3_p_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_1[0]), ((MR_Box) (InstVar_6)), STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_28;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word InstName_4 = tscc_proc_2_input_1_InstName_4;
    MR_Word STATE_VARIABLE_InstVars_0_15 = tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
    MR_Word STATE_VARIABLE_InstVars_16;

    switch (MR_tag((MR_Word) InstName_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgInsts_7 = ((MR_Word) ((MR_hl_field(0, InstName_4, 1))));

          check_hlds__types_into_modes__acc_inst_vars_in_insts_3_p_0(ArgInsts_7, STATE_VARIABLE_InstVars_0_15, &STATE_VARIABLE_InstVars_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA_36 = ((MR_Word) ((MR_hl_field(1, InstName_4, 1))));
          MR_Word InstB_37 = ((MR_Word) ((MR_hl_field(1, InstName_4, 2))));
          MR_Word STATE_VARIABLE_InstVars_2_38;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;

          check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(InstA_36, STATE_VARIABLE_InstVars_0_15, &STATE_VARIABLE_InstVars_2_38);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_37;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27 = STATE_VARIABLE_InstVars_2_38;
          tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
          tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_8 = ((MR_Word) ((MR_hl_field(2, InstName_4, 0))));
          MR_Word InstB_9 = ((MR_Word) ((MR_hl_field(2, InstName_4, 1))));
          MR_Word STATE_VARIABLE_InstVars_2_18;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;

          check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(InstA_8, STATE_VARIABLE_InstVars_0_15, &STATE_VARIABLE_InstVars_2_18);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_9;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27 = STATE_VARIABLE_InstVars_2_18;
          tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
          tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_32 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_32;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInstName_12 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_12;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_34 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_34;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_33 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_33;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            STATE_VARIABLE_InstVars_16 = STATE_VARIABLE_InstVars_0_15;
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName_35 = ((MR_Word) ((MR_hl_field(3, InstName_4, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_35;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_16;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_InstVars_28 = tscc_output_1_STATE_VARIABLE_InstVars_28;
  return;
}

static void MR_CALL 
check_hlds__types_into_modes__acc_inst_vars_in_inst_name_3_p_0(
  MR_Word tscc_proc_2_input_1_InstName_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_InstVars_28)
{
  MR_Word tscc_proc_1_input_1_Inst_4;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;
  MR_Word tscc_output_1_STATE_VARIABLE_InstVars_28;

  // The code for TSCC PROC 2: pred check_hlds.types_into_modes.acc_inst_vars_in_inst_name/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.types_into_modes.acc_inst_vars_in_inst/3-0
  ;
  // proc 2 in TSCC: pred check_hlds.types_into_modes.acc_inst_vars_in_inst_name/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Inst_4 = tscc_proc_1_input_1_Inst_4;
    MR_Word STATE_VARIABLE_InstVars_0_27 = tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;
    MR_Word STATE_VARIABLE_InstVars_28;

    switch (MR_tag((MR_Word) Inst_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_0_27;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_0_27;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_53 = ((MR_Word) ((MR_hl_field(1, Inst_4, 1))));

          if ((HOInstInfo_53 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_0_27;
          else
          {
            MR_Word PredInstInfo_43 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_53), (MR_Integer) 1));
            MR_Word Modes_45 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_43, 1))));

            check_hlds__types_into_modes__acc_inst_vars_in_modes_3_p_0(Modes_45, STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults_9 = ((MR_Word) ((MR_hl_field(2, Inst_4, 1))));
          MR_Word BoundFunctors_10 = ((MR_Word) ((MR_hl_field(2, Inst_4, 2))));

          switch (MR_tag((MR_Word) InstResults_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__types_into_modes__acc_inst_vars_in_bound_functors_3_p_0(BoundFunctors_10, STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_0_27;
                  break;
              }
              break;
            case (MR_Integer) 1:
              check_hlds__types_into_modes__acc_inst_vars_in_bound_functors_3_p_0(BoundFunctors_10, STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_7 = ((MR_Word) ((MR_hl_field(3, Inst_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = InstName_7;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_27;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConstrainedVars_23 = ((MR_Word) ((MR_hl_field(3, Inst_4, 1))));
              MR_Word SubInst_24 = ((MR_Word) ((MR_hl_field(3, Inst_4, 2))));
              MR_Word SubInstVars_25;
              MR_Word FreeInstVars_26;
              MR_Word Var_34;

              Var_34 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_1[0]));
              check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(SubInst_24, Var_34, &SubInstVars_25);
              mercury__set__difference_3_p_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_1[0]), SubInstVars_25, ConstrainedVars_23, &FreeInstVars_26);
              mercury__set__union_3_p_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_1[0]), FreeInstVars_26, STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HOInstInfo_17 = ((MR_Word) ((MR_hl_field(3, Inst_4, 2))));

              if ((HOInstInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_0_27;
              else
              {
                MR_Word PredInstInfo_18 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_17), (MR_Integer) 1));
                MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_18, 1))));

                check_hlds__types_into_modes__acc_inst_vars_in_modes_3_p_0(Modes_20, STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVar_6 = ((MR_Word) ((MR_hl_field(3, Inst_4, 1))));

              mercury__set__insert_3_p_0((MR_Word) (&check_hlds__types_into_modes_scalar_common_1[0]), ((MR_Box) (InstVar_6)), STATE_VARIABLE_InstVars_0_27, &STATE_VARIABLE_InstVars_28);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_28;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word InstName_4 = tscc_proc_2_input_1_InstName_4;
    MR_Word STATE_VARIABLE_InstVars_0_15 = tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
    MR_Word STATE_VARIABLE_InstVars_16;

    switch (MR_tag((MR_Word) InstName_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgInsts_7 = ((MR_Word) ((MR_hl_field(0, InstName_4, 1))));

          check_hlds__types_into_modes__acc_inst_vars_in_insts_3_p_0(ArgInsts_7, STATE_VARIABLE_InstVars_0_15, &STATE_VARIABLE_InstVars_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA_36 = ((MR_Word) ((MR_hl_field(1, InstName_4, 1))));
          MR_Word InstB_37 = ((MR_Word) ((MR_hl_field(1, InstName_4, 2))));
          MR_Word STATE_VARIABLE_InstVars_2_38;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;

          check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(InstA_36, STATE_VARIABLE_InstVars_0_15, &STATE_VARIABLE_InstVars_2_38);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_37;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27 = STATE_VARIABLE_InstVars_2_38;
          tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
          tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_8 = ((MR_Word) ((MR_hl_field(2, InstName_4, 0))));
          MR_Word InstB_9 = ((MR_Word) ((MR_hl_field(2, InstName_4, 1))));
          MR_Word STATE_VARIABLE_InstVars_2_18;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;

          check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(InstA_8, STATE_VARIABLE_InstVars_0_15, &STATE_VARIABLE_InstVars_2_18);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_4 = InstB_9;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27 = STATE_VARIABLE_InstVars_2_18;
          tscc_proc_1_input_1_Inst_4 = next_value_of_tscc_proc_1_input_1_Inst_4;
          tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_InstVars_0_27;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_32 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_32;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInstName_12 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_12;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_34 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_34;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_33 = ((MR_Word) ((MR_hl_field(3, InstName_4, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_33;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            STATE_VARIABLE_InstVars_16 = STATE_VARIABLE_InstVars_0_15;
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName_35 = ((MR_Word) ((MR_hl_field(3, InstName_4, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_4 = SubInstName_35;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = STATE_VARIABLE_InstVars_0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_4 = next_value_of_tscc_proc_2_input_1_InstName_4;
              tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_InstVars_0_15;
              goto top_of_proc_2;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_InstVars_28 = STATE_VARIABLE_InstVars_16;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_InstVars_28 = tscc_output_1_STATE_VARIABLE_InstVars_28;
  return;
}

static void MR_CALL 
check_hlds__types_into_modes__acc_inst_vars_in_bound_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstVars_0_2,
  MR_Word * STATE_VARIABLE_InstVars_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstVars_3 = STATE_VARIABLE_InstVars_0_2;
    else
    {
      MR_Word BoundFunctor_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word BoundFunctors_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ArgInsts_11 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_7, 1))));
      MR_Word STATE_VARIABLE_InstVars_1_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstVars_0_2;

      check_hlds__types_into_modes__acc_inst_vars_in_insts_3_p_0(ArgInsts_11, STATE_VARIABLE_InstVars_0_2, &STATE_VARIABLE_InstVars_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = BoundFunctors_8;
      next_value_of_STATE_VARIABLE_InstVars_0_2 = STATE_VARIABLE_InstVars_1_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstVars_0_2 = next_value_of_STATE_VARIABLE_InstVars_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__types_into_modes__acc_inst_vars_in_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstVars_0_2,
  MR_Word * STATE_VARIABLE_InstVars_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstVars_3 = STATE_VARIABLE_InstVars_0_2;
    else
    {
      MR_Word Inst_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Insts_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_InstVars_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstVars_0_2;

      check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(Inst_7, STATE_VARIABLE_InstVars_0_2, &STATE_VARIABLE_InstVars_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Insts_8;
      next_value_of_STATE_VARIABLE_InstVars_0_2 = STATE_VARIABLE_InstVars_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstVars_0_2 = next_value_of_STATE_VARIABLE_InstVars_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__types_into_modes__acc_inst_vars_in_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstVars_0_2,
  MR_Word * STATE_VARIABLE_InstVars_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstVars_3 = STATE_VARIABLE_InstVars_0_2;
    else
    {
      MR_Word Mode_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Modes_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_InstVars_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstVars_0_2;

      if (((MR_tag((MR_Word) Mode_7)) == (MR_Integer) 0))
      {
        MR_Word Initial_13 = ((MR_Word) ((MR_hl_field(0, Mode_7, 0))));
        MR_Word Final_14 = ((MR_Word) ((MR_hl_field(0, Mode_7, 1))));
        MR_Word STATE_VARIABLE_InstVars_1_17;

        check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(Initial_13, STATE_VARIABLE_InstVars_0_2, &STATE_VARIABLE_InstVars_1_17);
        check_hlds__types_into_modes__acc_inst_vars_in_inst_3_p_0(Final_14, STATE_VARIABLE_InstVars_1_17, &STATE_VARIABLE_InstVars_1_12);
      }
      else
      {
        MR_Word Insts_16 = ((MR_Word) ((MR_hl_field(1, Mode_7, 1))));

        check_hlds__types_into_modes__acc_inst_vars_in_insts_3_p_0(Insts_16, STATE_VARIABLE_InstVars_0_2, &STATE_VARIABLE_InstVars_1_12);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Modes_8;
      next_value_of_STATE_VARIABLE_InstVars_0_2 = STATE_VARIABLE_InstVars_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstVars_0_2 = next_value_of_STATE_VARIABLE_InstVars_0_2;
      continue;
    }
    break;
  }
}

void mercury__check_hlds__types_into_modes__init(void)
{
}

void mercury__check_hlds__types_into_modes__init_type_tables(void)
{
}

void mercury__check_hlds__types_into_modes__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__types_into_modes__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.types_into_modes.
