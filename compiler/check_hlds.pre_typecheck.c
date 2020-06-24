/*
** Automatically generated from `pre_typecheck.m'
** by the Mercury compiler,
** version rotd-2020-06-24
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


// :- module check_hlds.pre_typecheck.
// :- implementation.

/*
INIT mercury__check_hlds__pre_typecheck__init
ENDINIT
*/

#include "check_hlds.pre_typecheck.mih"


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
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.headvar_names.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
check_hlds__pre_typecheck__prepare_for_typecheck_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);


static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_1[1][2];




static /* final */ const MR_Box check_hlds__pre_typecheck_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
check_hlds__pre_typecheck__prepare_for_typecheck_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_Word OrigValidPredIdSet_4;
    MR_Word PredMap0_5;
    MR_Word PredIdsInfos0_6;
    MR_Word PredIdsInfos_7;
    MR_Word PredMap_8;

    hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_0_9, &OrigValidPredIdSet_4);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_9, &PredMap0_5);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredMap0_5, &PredIdsInfos0_6);
    check_hlds__pre_typecheck__prepare_for_typecheck_4_p_0(STATE_VARIABLE_ModuleInfo_0_9, OrigValidPredIdSet_4, PredIdsInfos0_6, &PredIdsInfos_7);
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdsInfos_7, &PredMap_8);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredMap_8, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
  }
}

static void MR_CALL 
check_hlds__pre_typecheck__prepare_for_typecheck_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PredIdInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PredIdsInfos0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredIdInfo_11;
      MR_Word PredIdsInfos_12;
      MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredIdInfo0_9, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_PredInfo_19_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredIdInfo0_9, (MR_Integer) 1))));

      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_2, ((MR_Box) (PredId_14)));
      if (succeeded)
      {
        MR_Word GoalIdClausesInfo0_15;
        MR_Word GoalIdClausesInfo_17;
        MR_Word Globals_18;
        MR_Word STATE_VARIABLE_PredInfo_20_20;
        MR_Word STATE_VARIABLE_PredInfo_21_21;
        MR_Word STATE_VARIABLE_PredInfo_22_22;
        MR_Word PredStatus_28;
        MR_Word ClausesInfo0_29;
        MR_Word ClausesRep0_30;
        MR_Word _ContainingGoalMap_16;
        MR_Word _ItemNumbers0_31;
        MR_Word Var_55;
        MR_Word Var_56;

        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_19_19, &GoalIdClausesInfo0_15);
        hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(ModuleInfo_1, &_ContainingGoalMap_16, GoalIdClausesInfo0_15, &GoalIdClausesInfo_17);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(GoalIdClausesInfo_17, STATE_VARIABLE_PredInfo_19_19, &STATE_VARIABLE_PredInfo_20_20);
        hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_20_20, &PredStatus_28);
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_20_20, &ClausesInfo0_29);
        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_29, &ClausesRep0_30, &_ItemNumbers0_31);
        succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(ModuleInfo_1, STATE_VARIABLE_PredInfo_20_20);
        if (succeeded)
        {
          Var_55 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_30);
          succeeded = (Var_55 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_56 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_28);
            succeeded = (Var_56 == (MR_Integer) 1);
          }
        }
        if (succeeded)
        {
          MR_Word HeadVars_32;
          MR_Word FuncArgs_33;
          MR_Word FuncRetVal_34;
          MR_Word Context_35;
          MR_Word FuncModule_36;
          MR_String FuncName_37;
          MR_Integer PredArity_38;
          MR_Integer FuncArity_39;
          MR_Word FuncSymName_40;
          MR_Word FuncConsId_41;
          MR_Word FuncRHS_42;
          MR_Word Goal0_43;
          MR_Word GoalExpr_44;
          MR_Word GoalInfo0_45;
          MR_Word NonLocals_46;
          MR_Word GoalInfo_47;
          MR_Word Goal_48;
          MR_Word Clause_49;
          MR_Word ClausesRep_50;
          MR_Word ItemNumbers_51;
          MR_Word ClausesInfo_52;
          MR_Word Markers0_53;
          MR_Word Markers_54;
          MR_Word Var_58;
          MR_Word Var_62;
          MR_Word Var_66;
          MR_Word STATE_VARIABLE_PredInfo_49_69;
          MR_Word STATE_VARIABLE_PredInfo_50_70;
          MR_Box conv0_FuncRetVal_34;

          hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo0_29, &HeadVars_32);
          hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), HeadVars_32, &FuncArgs_33, &conv0_FuncRetVal_34);
          FuncRetVal_34 = ((MR_Word) (conv0_FuncRetVal_34));
          hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_20_20, &Context_35);
          FuncModule_36 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_20_20);
          FuncName_37 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_20_20);
          PredArity_38 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(STATE_VARIABLE_PredInfo_20_20);
          parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_39, PredArity_38);
          {
            FuncSymName_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FuncSymName_40, 0) = ((MR_Box) (FuncModule_36));
            MR_hl_field(MR_mktag(1), FuncSymName_40, 1) = ((MR_Box) (FuncName_37));
          }
          Var_58 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
          {
            FuncConsId_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), FuncConsId_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), FuncConsId_41, 1) = ((MR_Box) (FuncSymName_40));
            MR_hl_field(MR_mktag(3), FuncConsId_41, 2) = ((MR_Box) (FuncArity_39));
            MR_hl_field(MR_mktag(3), FuncConsId_41, 3) = ((MR_Box) (Var_58));
          }
          {
            FuncRHS_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FuncRHS_42, 0) = ((MR_Box) (FuncConsId_41));
            MR_hl_field(MR_mktag(1), FuncRHS_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), FuncRHS_42, 2) = ((MR_Box) (FuncArgs_33));
          }
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(FuncRetVal_34, FuncRHS_42, Context_35, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Goal0_43);
          GoalExpr_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_43, (MR_Integer) 0))));
          GoalInfo0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_43, (MR_Integer) 1))));
          Var_62 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__pre_typecheck_scalar_common_1[0]), HeadVars_32);
          NonLocals_46 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_62);
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_46, GoalInfo0_45, &GoalInfo_47);
          {
            Goal_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal_48, 0) = ((MR_Box) (GoalExpr_44));
            MR_hl_field(MR_mktag(0), Goal_48, 1) = ((MR_Box) (GoalInfo_47));
          }
          {
            Clause_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Clause_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Clause_49, 1) = ((MR_Box) (Goal_48));
            MR_hl_field(MR_mktag(0), Clause_49, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Clause_49, 3) = ((MR_Box) (Context_35));
            MR_hl_field(MR_mktag(0), Clause_49, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Clause_49));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__hlds_clauses__set_clause_list_2_p_0(Var_66, &ClausesRep_50);
          ItemNumbers_51 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
          hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_50, ItemNumbers_51, ClausesInfo0_29, &ClausesInfo_52);
          hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) ((MR_Unsigned) 8U), STATE_VARIABLE_PredInfo_20_20, &STATE_VARIABLE_PredInfo_49_69);
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_52, STATE_VARIABLE_PredInfo_49_69, &STATE_VARIABLE_PredInfo_50_70);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_50_70, &Markers0_53);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, Markers0_53, &Markers_54);
          hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_54, STATE_VARIABLE_PredInfo_50_70, &STATE_VARIABLE_PredInfo_21_21);
        }
        else
          STATE_VARIABLE_PredInfo_21_21 = STATE_VARIABLE_PredInfo_20_20;
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_1, &Globals_18);
        hlds__headvar_names__maybe_improve_headvar_names_3_p_0(Globals_18, STATE_VARIABLE_PredInfo_21_21, &STATE_VARIABLE_PredInfo_22_22);
        {
          PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredIdInfo_11, 0) = ((MR_Box) (PredId_14));
          MR_hl_field(MR_mktag(0), PredIdInfo_11, 1) = ((MR_Box) (STATE_VARIABLE_PredInfo_22_22));
        }
      }
      else
        PredIdInfo_11 = PredIdInfo0_9;
      check_hlds__pre_typecheck__prepare_for_typecheck_4_p_0(ModuleInfo_1, ValidPredIdSet_2, PredIdsInfos0_10, &PredIdsInfos_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredIdInfo_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIdsInfos_12));
      }
    }
  }
}

void mercury__check_hlds__pre_typecheck__init(void)
{
}

void mercury__check_hlds__pre_typecheck__init_type_tables(void)
{
}

void mercury__check_hlds__pre_typecheck__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__pre_typecheck__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.pre_typecheck.
