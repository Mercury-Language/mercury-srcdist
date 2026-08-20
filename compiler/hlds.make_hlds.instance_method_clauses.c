/*
** Automatically generated from `instance_method_clauses.m'
** by the Mercury compiler,
** version rotd-2026-08-20
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


// :- module hlds.make_hlds.instance_method_clauses.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__instance_method_clauses__init
ENDINIT
*/

#include "hlds.make_hlds.instance_method_clauses.mih"


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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__instance_method_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0;

static MR_bool MR_CALL 
hlds__make_hlds__instance_method_clauses__IntroducedFrom__pred__produce_instance_method_clause__141__1_2_p_0(
  MR_Word PredOrFunc_17,
  MR_Word ClausePredOrFunc_28);

static MR_bool MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_16_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_16_p_0(
  MR_Word PredOrFunc_17,
  MR_Word Context_18,
  MR_Word InstanceStatus_19,
  MR_Word InstanceClause_20,
  MR_Word TVarSet0_21,
  MR_Word * TVarSet_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_QualInfo_0_49,
  MR_Word * STATE_VARIABLE_QualInfo_50,
  MR_Word STATE_VARIABLE_ClausesInfo_0_51,
  MR_Word * STATE_VARIABLE_ClausesInfo_52,
  MR_Word STATE_VARIABLE_ErrSpecs_0_53,
  MR_Word * STATE_VARIABLE_ErrSpecs_54,
  MR_Word STATE_VARIABLE_WarnSpecs_0_55,
  MR_Word * STATE_VARIABLE_WarnSpecs_56);

static void MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clauses_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13);


static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_2[1][19];

static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_3[1][5];




static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_2[1][19] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_new_instance_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&hlds__make_hlds__instance_method_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__instance_method_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0)),
    ((MR_Box) (&hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__instance_method_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static MR_bool MR_CALL 
hlds__make_hlds__instance_method_clauses__IntroducedFrom__pred__produce_instance_method_clause__141__1_2_p_0(
  MR_Word PredOrFunc_17,
  MR_Word ClausePredOrFunc_28)
{
  MR_bool succeeded = (PredOrFunc_17 == ClausePredOrFunc_28);

  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_16_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__instance_method_clauses__IntroducedFrom__pred__produce_instance_method_clause__141__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_16_p_0(
  MR_Word PredOrFunc_17,
  MR_Word Context_18,
  MR_Word InstanceStatus_19,
  MR_Word InstanceClause_20,
  MR_Word TVarSet0_21,
  MR_Word * TVarSet_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_QualInfo_0_49,
  MR_Word * STATE_VARIABLE_QualInfo_50,
  MR_Word STATE_VARIABLE_ClausesInfo_0_51,
  MR_Word * STATE_VARIABLE_ClausesInfo_52,
  MR_Word STATE_VARIABLE_ErrSpecs_0_53,
  MR_Word * STATE_VARIABLE_ErrSpecs_54,
  MR_Word STATE_VARIABLE_WarnSpecs_0_55,
  MR_Word * STATE_VARIABLE_WarnSpecs_56)
{
  MR_bool succeeded;
  MR_Word ClausePredOrFunc_28 = ((MR_Unsigned) ((MR_hl_field(0, InstanceClause_20, 0))) & (MR_Integer) 1);
  MR_Word PredSymName_29 = ((MR_Word) ((MR_hl_field(0, InstanceClause_20, 1))));
  MR_Word HeadTerms0_30 = ((MR_Word) ((MR_hl_field(0, InstanceClause_20, 2))));
  MR_Word ClauseVarSet_31 = ((MR_Word) ((MR_hl_field(0, InstanceClause_20, 3))));
  MR_Word MaybeBodyGoal_32 = ((MR_Word) ((MR_hl_field(0, InstanceClause_20, 4))));
  MR_Word Var_57;
  MR_Word StateVar_35;
  MR_Word StateVarContext_36;

  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&hlds__make_hlds__instance_method_clauses_scalar_common_3[0]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_16_p_0_1));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (PredOrFunc_17));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) (ClausePredOrFunc_28));
  }
  mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140hlds.make_hlds.instance_method_clauses.produce_instance_method_clause\'/16", (MR_String) "PredOrFunc mismatch");
  succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(PredOrFunc_17, HeadTerms0_30, &StateVar_35, &StateVarContext_36);
  if (succeeded)
  {
    MR_Word ResultSpec_37;
    MR_Word BodyGoalErrSpecs_38;
    MR_Word BodyGoalWarnSpecs_39;
    MR_Word Var_61;

    *TVarSet_22 = TVarSet0_21;
    ResultSpec_37 = hlds__make_hlds__state_var__report_illegal_func_svar_result_raw_3_f_0(StateVarContext_36, ClauseVarSet_31, StateVar_35);
    parse_tree__maybe_error__get_all_errors_warnings2_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_32, &BodyGoalErrSpecs_38, &BodyGoalWarnSpecs_39);
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (ResultSpec_37));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (BodyGoalErrSpecs_38));
    }
    *STATE_VARIABLE_ErrSpecs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_61, STATE_VARIABLE_ErrSpecs_0_53);
    *STATE_VARIABLE_WarnSpecs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), BodyGoalWarnSpecs_39, STATE_VARIABLE_WarnSpecs_0_55);
    *STATE_VARIABLE_ClausesInfo_52 = STATE_VARIABLE_ClausesInfo_0_51;
    *STATE_VARIABLE_QualInfo_50 = STATE_VARIABLE_QualInfo_0_49;
    *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
  }
  else
  if (((MR_tag((MR_Word) MaybeBodyGoal_32)) == (MR_Integer) 0))
  {
    MR_Word OoMBodyGoalErrSpecs_40;
    MR_Tuple Var_63 = ((MR_Tuple) ((MR_hl_field(0, MaybeBodyGoal_32, 0))));
    MR_Word Var_65;
    MR_Word BodyGoalWarnSpecs_76;

    OoMBodyGoalErrSpecs_40 = ((MR_Word) ((MR_hl_field(0, Var_63, 0))));
    BodyGoalWarnSpecs_76 = ((MR_Word) ((MR_hl_field(0, Var_63, 1))));
    *TVarSet_22 = TVarSet0_21;
    Var_65 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), OoMBodyGoalErrSpecs_40);
    *STATE_VARIABLE_ErrSpecs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_65, STATE_VARIABLE_ErrSpecs_0_53);
    *STATE_VARIABLE_WarnSpecs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), BodyGoalWarnSpecs_76, STATE_VARIABLE_WarnSpecs_0_55);
    *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
    *STATE_VARIABLE_QualInfo_50 = STATE_VARIABLE_QualInfo_0_49;
    *STATE_VARIABLE_ClausesInfo_52 = STATE_VARIABLE_ClausesInfo_0_51;
  }
  else
  {
    MR_Word BodyGoal_41 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_32, 0))));
    MR_Word BodyGoalWarningSpecs_42 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_32, 1))));
    MR_Word HeadTerms_43;
    MR_Word OldImportStatus_45;
    MR_Word PredStatus_46;
    MR_Word STATE_VARIABLE_WarnSpecs_3_67;

    STATE_VARIABLE_WarnSpecs_3_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), BodyGoalWarningSpecs_42, STATE_VARIABLE_WarnSpecs_0_55);
    hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(HeadTerms0_30, &HeadTerms_43);
    OldImportStatus_45 = hlds__status__new_instance_status_to_old_1_f_0(InstanceStatus_19);
    PredStatus_46 = (MR_Word) (OldImportStatus_45);
    hlds__make_hlds__add_clause__add_clause_to_clauses_info_23_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), PredStatus_46, (MR_Word) ((MR_Unsigned) 0U), PredOrFunc_17, PredSymName_29, HeadTerms_43, Context_18, (MR_Word) ((MR_Unsigned) 0U), BodyGoal_41, ClauseVarSet_31, TVarSet0_21, TVarSet_22, STATE_VARIABLE_ClausesInfo_0_51, STATE_VARIABLE_ClausesInfo_52, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_QualInfo_0_49, STATE_VARIABLE_QualInfo_50, STATE_VARIABLE_ErrSpecs_0_53, STATE_VARIABLE_ErrSpecs_54, STATE_VARIABLE_WarnSpecs_3_67, STATE_VARIABLE_WarnSpecs_56);
  }
}

static void MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clauses_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_TVarSet_22;
  MR_Word conv4_STATE_VARIABLE_ModuleInfo_48;
  MR_Word conv3_STATE_VARIABLE_QualInfo_50;
  MR_Word conv2_STATE_VARIABLE_ClausesInfo_52;
  MR_Word conv1_STATE_VARIABLE_ErrSpecs_54;
  MR_Word conv0_STATE_VARIABLE_WarnSpecs_56;

  hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_16_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_TVarSet_22, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ModuleInfo_48, ((MR_Word) (wrapper_arg_6)), &conv3_STATE_VARIABLE_QualInfo_50, ((MR_Word) (wrapper_arg_8)), &conv2_STATE_VARIABLE_ClausesInfo_52, ((MR_Word) (wrapper_arg_10)), &conv1_STATE_VARIABLE_ErrSpecs_54, ((MR_Word) (wrapper_arg_12)), &conv0_STATE_VARIABLE_WarnSpecs_56);
  *wrapper_arg_3 = ((MR_Box) (conv5_TVarSet_22));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_48));
  *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_QualInfo_50));
  *wrapper_arg_9 = ((MR_Box) (conv2_STATE_VARIABLE_ClausesInfo_52));
  *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_ErrSpecs_54));
  *wrapper_arg_13 = ((MR_Box) (conv0_STATE_VARIABLE_WarnSpecs_56));
}

void MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clauses_17_p_0(
  MR_Word InstanceProcDefn_18,
  MR_Word PredOrFunc_19,
  MR_Word ArgTypes_20,
  MR_Word Markers_21,
  MR_Word Context_22,
  MR_Word InstanceStatus_23,
  MR_Word * ClausesInfo_24,
  MR_Word STATE_VARIABLE_TVarSet_0_52,
  MR_Word * STATE_VARIABLE_TVarSet_53,
  MR_Word STATE_VARIABLE_ModuleInfo_0_54,
  MR_Word * STATE_VARIABLE_ModuleInfo_55,
  MR_Word STATE_VARIABLE_QualInfo_0_56,
  MR_Word * STATE_VARIABLE_QualInfo_57,
  MR_Word STATE_VARIABLE_ErrSpecs_0_58,
  MR_Word * STATE_VARIABLE_ErrSpecs_59,
  MR_Word STATE_VARIABLE_WarnSpecs_0_60,
  MR_Word * STATE_VARIABLE_WarnSpecs_61)
{
  MR_bool succeeded;
  MR_Word PredFormArity_30;

  PredFormArity_30 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_20);
  if (((MR_tag((MR_Word) InstanceProcDefn_18)) == (MR_Integer) 1))
  {
    MR_Word InstanceClausesCord_49 = ((MR_Word) ((MR_hl_field(1, InstanceProcDefn_18, 0))));
    MR_Word InstanceClauses_50;
    MR_Word ClausesInfo0_51;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Box conv11_STATE_VARIABLE_TVarSet_53;
    MR_Box conv10_STATE_VARIABLE_ModuleInfo_55;
    MR_Box conv9_STATE_VARIABLE_QualInfo_57;
    MR_Box conv8_ClausesInfo_24;
    MR_Box conv7_STATE_VARIABLE_ErrSpecs_59;
    MR_Box conv6_STATE_VARIABLE_WarnSpecs_61;

    InstanceClauses_50 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), InstanceClausesCord_49);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (PredFormArity_30));
    }
    Var_78 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_19, Var_77, Var_78, &ClausesInfo0_51);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (&hlds__make_hlds__instance_method_clauses_scalar_common_2[0]));
      MR_hl_field(0, Var_79, 1) = ((MR_Box) (hlds__make_hlds__instance_method_clauses__produce_instance_method_clauses_17_p_0_1));
      MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_79, 3) = ((MR_Box) (PredOrFunc_19));
      MR_hl_field(0, Var_79, 4) = ((MR_Box) (Context_22));
      MR_hl_field(0, Var_79, 5) = ((MR_Box) (InstanceStatus_23));
    }
    mercury__list__foldl6_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__make_hlds__instance_method_clauses_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0), (MR_Word) (&hlds__make_hlds__instance_method_clauses_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__instance_method_clauses_scalar_common_1[4]), Var_79, InstanceClauses_50, ((MR_Box) (STATE_VARIABLE_TVarSet_0_52)), &conv11_STATE_VARIABLE_TVarSet_53, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_54)), &conv10_STATE_VARIABLE_ModuleInfo_55, ((MR_Box) (STATE_VARIABLE_QualInfo_0_56)), &conv9_STATE_VARIABLE_QualInfo_57, ((MR_Box) (ClausesInfo0_51)), &conv8_ClausesInfo_24, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_58)), &conv7_STATE_VARIABLE_ErrSpecs_59, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_60)), &conv6_STATE_VARIABLE_WarnSpecs_61);
    *STATE_VARIABLE_TVarSet_53 = ((MR_Word) (conv11_STATE_VARIABLE_TVarSet_53));
    *STATE_VARIABLE_ModuleInfo_55 = ((MR_Word) (conv10_STATE_VARIABLE_ModuleInfo_55));
    *STATE_VARIABLE_QualInfo_57 = ((MR_Word) (conv9_STATE_VARIABLE_QualInfo_57));
    *ClausesInfo_24 = ((MR_Word) (conv8_ClausesInfo_24));
    *STATE_VARIABLE_ErrSpecs_59 = ((MR_Word) (conv7_STATE_VARIABLE_ErrSpecs_59));
    *STATE_VARIABLE_WarnSpecs_61 = ((MR_Word) (conv6_STATE_VARIABLE_WarnSpecs_61));
  }
  else
  {
    MR_Word InstancePredName_31 = ((MR_Word) ((MR_hl_field(0, InstanceProcDefn_18, 0))));
    MR_Integer PredFormArityInt_32 = (MR_Integer) (PredFormArity_30);
    MR_Word VarSet0_33;
    MR_Word HeadVars_34;
    MR_Word VarSet_35;
    MR_Word NonLocals_36;
    MR_Word Purity_37;
    MR_Word DummyInstMapDelta_38;
    MR_Word GoalInfo_40;
    MR_Word IntroducedGoal_41;
    MR_Word IntroducedClause_42;
    MR_Word ExplicitVarTypes_43;
    MR_Word VarTable_44;
    MR_Word RttiVarMaps_45;
    MR_Word TVarNameMap_46;
    MR_Word HeadVarVec_47;
    MR_Word ClausesRep_48;
    MR_Word Var_65;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_74;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet0_33);
    parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeadVar__", PredFormArityInt_32, &HeadVars_34, VarSet0_33, &VarSet_35);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_34, &NonLocals_36);
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_21, (MR_Integer) 15);
    if (succeeded)
      Purity_37 = (MR_Integer) 2;
    else
    {
      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_21, (MR_Integer) 16);
      if (succeeded)
        Purity_37 = (MR_Integer) 1;
      else
        Purity_37 = (MR_Integer) 0;
    }
    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&DummyInstMapDelta_38);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_36, DummyInstMapDelta_38, (MR_Integer) 6, Purity_37, Context_22, &GoalInfo_40);
    Var_65 = hlds__pred_proc_id__invalid_pred_id_0_f_0();
    hlds__make_hlds__qual_info__construct_and_record_pred_or_func_call_8_p_0(Var_65, PredOrFunc_19, InstancePredName_31, HeadVars_34, GoalInfo_40, &IntroducedGoal_41, STATE_VARIABLE_QualInfo_0_56, STATE_VARIABLE_QualInfo_57);
    Var_70 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
    {
      IntroducedClause_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IntroducedClause_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, IntroducedClause_42, 1) = ((MR_Box) (IntroducedGoal_41));
      MR_hl_field(0, IntroducedClause_42, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, IntroducedClause_42, 3) = ((MR_Box) (Context_22));
      MR_hl_field(0, IntroducedClause_42, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, IntroducedClause_42, 5) = ((MR_Box) (Var_70));
      MR_hl_field(0, IntroducedClause_42, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_34, ArgTypes_20, &ExplicitVarTypes_43);
    parse_tree__var_table__init_var_table_1_p_0(&VarTable_44);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_45);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__instance_method_clauses_scalar_common_1[0]), &TVarNameMap_46);
    HeadVarVec_47 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__make_hlds__instance_method_clauses_scalar_common_1[1]), PredOrFunc_19, HeadVars_34);
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (IntroducedClause_42));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__hlds_clauses__set_clause_list_2_p_0(Var_72, &ClausesRep_48);
    Var_74 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *ClausesInfo_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (VarSet_35));
      MR_hl_field(0, base, 1) = ((MR_Box) (ExplicitVarTypes_43));
      MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_44));
      MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_45));
      MR_hl_field(0, base, 4) = ((MR_Box) (TVarNameMap_46));
      MR_hl_field(0, base, 5) = ((MR_Box) (HeadVarVec_47));
      MR_hl_field(0, base, 6) = ((MR_Box) (ClausesRep_48));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_74));
      MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    *STATE_VARIABLE_TVarSet_53 = STATE_VARIABLE_TVarSet_0_52;
    *STATE_VARIABLE_ModuleInfo_55 = STATE_VARIABLE_ModuleInfo_0_54;
    *STATE_VARIABLE_ErrSpecs_59 = STATE_VARIABLE_ErrSpecs_0_58;
    *STATE_VARIABLE_WarnSpecs_61 = STATE_VARIABLE_WarnSpecs_0_60;
  }
}

void mercury__hlds__make_hlds__instance_method_clauses__init(void)
{
}

void mercury__hlds__make_hlds__instance_method_clauses__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__instance_method_clauses__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__instance_method_clauses__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.instance_method_clauses.
