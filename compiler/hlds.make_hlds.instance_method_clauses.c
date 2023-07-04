/*
** Automatically generated from `instance_method_clauses.m'
** by the Mercury compiler,
** version rotd-2023-07-04
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
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
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
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__instance_method_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
hlds__make_hlds__instance_method_clauses__IntroducedFrom__pred__produce_instance_method_clause__136__1_2_p_0(
  MR_Word PredOrFunc_15,
  MR_Word ClausePredOrFunc_25);

static MR_bool MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_14_p_0(
  MR_Word PredOrFunc_15,
  MR_Word Context_16,
  MR_Word InstanceStatus_17,
  MR_Word InstanceClause_18,
  MR_Word TVarSet0_19,
  MR_Word * TVarSet_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_QualInfo_0_43,
  MR_Word * STATE_VARIABLE_QualInfo_44,
  MR_Word STATE_VARIABLE_ClausesInfo_0_45,
  MR_Word * STATE_VARIABLE_ClausesInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static void MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clauses_15_p_0_1(
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
  MR_Box * wrapper_arg_11);


static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_2[1][17];

static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_3[1][5];




static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_1[4][2] = {
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
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__instance_method_clauses_scalar_common_2[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_instance_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&hlds__make_hlds__instance_method_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__instance_method_clauses__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0)),
    ((MR_Box) (&hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__instance_method_clauses__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static MR_bool MR_CALL 
hlds__make_hlds__instance_method_clauses__IntroducedFrom__pred__produce_instance_method_clause__136__1_2_p_0(
  MR_Word PredOrFunc_15,
  MR_Word ClausePredOrFunc_25)
{
  MR_bool succeeded = (PredOrFunc_15 == ClausePredOrFunc_25);

  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_14_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__instance_method_clauses__IntroducedFrom__pred__produce_instance_method_clause__136__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_14_p_0(
  MR_Word PredOrFunc_15,
  MR_Word Context_16,
  MR_Word InstanceStatus_17,
  MR_Word InstanceClause_18,
  MR_Word TVarSet0_19,
  MR_Word * TVarSet_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_QualInfo_0_43,
  MR_Word * STATE_VARIABLE_QualInfo_44,
  MR_Word STATE_VARIABLE_ClausesInfo_0_45,
  MR_Word * STATE_VARIABLE_ClausesInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  MR_bool succeeded;
  MR_Word ClausePredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(0, InstanceClause_18, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word PredSymName_26 = ((MR_Word) ((MR_hl_field(0, InstanceClause_18, (MR_Integer) 1))));
  MR_Word HeadTerms0_27 = ((MR_Word) ((MR_hl_field(0, InstanceClause_18, (MR_Integer) 2))));
  MR_Word ClauseVarSet_28 = ((MR_Word) ((MR_hl_field(0, InstanceClause_18, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_29 = ((MR_Word) ((MR_hl_field(0, InstanceClause_18, (MR_Integer) 4))));
  MR_Word Var_49;
  MR_Word StateVar_32;
  MR_Word StateVarContext_33;

  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&hlds__make_hlds__instance_method_clauses_scalar_common_3[0]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_14_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (PredOrFunc_15));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) (ClausePredOrFunc_25));
  }
  mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140hlds.make_hlds.instance_method_clauses.produce_instance_method_clause\'/14", (MR_String) "PredOrFunc mismatch");
  succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(PredOrFunc_15, HeadTerms0_27, &StateVar_32, &StateVarContext_33);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Specs_52_52;
    MR_Word Var_54;

    *TVarSet_20 = TVarSet0_19;
    hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(StateVarContext_33, ClauseVarSet_28, StateVar_32, STATE_VARIABLE_Specs_0_47, &STATE_VARIABLE_Specs_52_52);
    Var_54 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_29);
    *STATE_VARIABLE_Specs_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_54, STATE_VARIABLE_Specs_52_52);
    *STATE_VARIABLE_ClausesInfo_46 = STATE_VARIABLE_ClausesInfo_0_45;
    *STATE_VARIABLE_QualInfo_44 = STATE_VARIABLE_QualInfo_0_43;
    *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
  }
  else
  if (((MR_tag((MR_Word) MaybeBodyGoal_29)) == (MR_Integer) 0))
  {
    MR_Word BodyGoalSpecs_34 = ((MR_Word) ((MR_hl_field(0, MaybeBodyGoal_29, (MR_Integer) 0))));

    *TVarSet_20 = TVarSet0_19;
    *STATE_VARIABLE_Specs_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), BodyGoalSpecs_34, STATE_VARIABLE_Specs_0_47);
    *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
    *STATE_VARIABLE_QualInfo_44 = STATE_VARIABLE_QualInfo_0_43;
    *STATE_VARIABLE_ClausesInfo_46 = STATE_VARIABLE_ClausesInfo_0_45;
  }
  else
  {
    MR_Word BodyGoal_35 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_29, (MR_Integer) 0))));
    MR_Word BodyGoalWarningSpecs_36 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_29, (MR_Integer) 1))));
    MR_Word HeadTerms_37;
    MR_Word OldImportStatus_39;
    MR_Word PredStatus_40;
    MR_Word STATE_VARIABLE_Specs_56_56;

    STATE_VARIABLE_Specs_56_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), BodyGoalWarningSpecs_36, STATE_VARIABLE_Specs_0_47);
    hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(HeadTerms0_27, &HeadTerms_37);
    OldImportStatus_39 = (MR_Word) (InstanceStatus_17);
    PredStatus_40 = (MR_Word) (OldImportStatus_39);
    hlds__make_hlds__add_clause__clauses_info_add_clause_21_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), PredStatus_40, (MR_Word) ((MR_Unsigned) 0U), PredOrFunc_15, PredSymName_26, HeadTerms_37, Context_16, (MR_Word) ((MR_Unsigned) 0U), BodyGoal_35, ClauseVarSet_28, TVarSet0_19, TVarSet_20, STATE_VARIABLE_ClausesInfo_0_45, STATE_VARIABLE_ClausesInfo_46, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_QualInfo_0_43, STATE_VARIABLE_QualInfo_44, STATE_VARIABLE_Specs_56_56, STATE_VARIABLE_Specs_48);
  }
}

static void MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clauses_15_p_0_1(
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
  MR_Box * wrapper_arg_11)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_TVarSet_20;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_42;
  MR_Word conv2_STATE_VARIABLE_QualInfo_44;
  MR_Word conv1_STATE_VARIABLE_ClausesInfo_46;
  MR_Word conv0_STATE_VARIABLE_Specs_48;

  hlds__make_hlds__instance_method_clauses__produce_instance_method_clause_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_TVarSet_20, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_ModuleInfo_42, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_QualInfo_44, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_ClausesInfo_46, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_Specs_48);
  *wrapper_arg_3 = ((MR_Box) (conv4_TVarSet_20));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_42));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_QualInfo_44));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_ClausesInfo_46));
  *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_48));
}

void MR_CALL 
hlds__make_hlds__instance_method_clauses__produce_instance_method_clauses_15_p_0(
  MR_Word InstanceProcDefn_16,
  MR_Word PredOrFunc_17,
  MR_Word ArgTypes_18,
  MR_Word Markers_19,
  MR_Word Context_20,
  MR_Word InstanceStatus_21,
  MR_Word * ClausesInfo_22,
  MR_Word STATE_VARIABLE_TVarSet_0_49,
  MR_Word * STATE_VARIABLE_TVarSet_50,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_QualInfo_0_53,
  MR_Word * STATE_VARIABLE_QualInfo_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  MR_bool succeeded;
  MR_Word PredFormArity_27;

  PredFormArity_27 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_18);
  if (((MR_tag((MR_Word) InstanceProcDefn_16)) == (MR_Integer) 1))
  {
    MR_Word InstanceClausesCord_46 = ((MR_Word) ((MR_hl_field(1, InstanceProcDefn_16, (MR_Integer) 0))));
    MR_Word InstanceClauses_47;
    MR_Word ClausesInfo0_48;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Box conv9_STATE_VARIABLE_TVarSet_50;
    MR_Box conv8_STATE_VARIABLE_ModuleInfo_52;
    MR_Box conv7_STATE_VARIABLE_QualInfo_54;
    MR_Box conv6_ClausesInfo_22;
    MR_Box conv5_STATE_VARIABLE_Specs_56;

    InstanceClauses_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), InstanceClausesCord_46);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_70, 0) = ((MR_Box) (PredFormArity_27));
    }
    Var_71 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_17, Var_70, Var_71, &ClausesInfo0_48);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_72, 0) = ((MR_Box) (&hlds__make_hlds__instance_method_clauses_scalar_common_2[0]));
      MR_hl_field(0, Var_72, 1) = ((MR_Box) (hlds__make_hlds__instance_method_clauses__produce_instance_method_clauses_15_p_0_1));
      MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_72, 3) = ((MR_Box) (PredOrFunc_17));
      MR_hl_field(0, Var_72, 4) = ((MR_Box) (Context_20));
      MR_hl_field(0, Var_72, 5) = ((MR_Box) (InstanceStatus_21));
    }
    mercury__list__foldl5_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__make_hlds__instance_method_clauses_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0), (MR_Word) (&hlds__make_hlds__instance_method_clauses_scalar_common_1[3]), Var_72, InstanceClauses_47, ((MR_Box) (STATE_VARIABLE_TVarSet_0_49)), &conv9_STATE_VARIABLE_TVarSet_50, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_51)), &conv8_STATE_VARIABLE_ModuleInfo_52, ((MR_Box) (STATE_VARIABLE_QualInfo_0_53)), &conv7_STATE_VARIABLE_QualInfo_54, ((MR_Box) (ClausesInfo0_48)), &conv6_ClausesInfo_22, ((MR_Box) (STATE_VARIABLE_Specs_0_55)), &conv5_STATE_VARIABLE_Specs_56);
    *STATE_VARIABLE_TVarSet_50 = ((MR_Word) (conv9_STATE_VARIABLE_TVarSet_50));
    *STATE_VARIABLE_ModuleInfo_52 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_52));
    *STATE_VARIABLE_QualInfo_54 = ((MR_Word) (conv7_STATE_VARIABLE_QualInfo_54));
    *ClausesInfo_22 = ((MR_Word) (conv6_ClausesInfo_22));
    *STATE_VARIABLE_Specs_56 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_56));
  }
  else
  {
    MR_Word InstancePredName_28 = ((MR_Word) ((MR_hl_field(0, InstanceProcDefn_16, (MR_Integer) 0))));
    MR_Integer PredFormArityInt_29 = (MR_Integer) (PredFormArity_27);
    MR_Word VarSet0_30;
    MR_Word HeadVars_31;
    MR_Word VarSet_32;
    MR_Word NonLocals_33;
    MR_Word Purity_34;
    MR_Word DummyInstMapDelta_35;
    MR_Word GoalInfo_37;
    MR_Word IntroducedGoal_38;
    MR_Word IntroducedClause_39;
    MR_Word ExplicitVarTypes_40;
    MR_Word VarTable_41;
    MR_Word RttiVarMaps_42;
    MR_Word TVarNameMap_43;
    MR_Word HeadVarVec_44;
    MR_Word ClausesRep_45;
    MR_Word Var_60;
    MR_Word Var_65;
    MR_Word Var_67;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet0_30);
    parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeadVar__", PredFormArityInt_29, &HeadVars_31, VarSet0_30, &VarSet_32);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_31, &NonLocals_33);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_19, (MR_Integer) 14);
    if (succeeded)
      Purity_34 = (MR_Integer) 2;
    else
    {
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_19, (MR_Integer) 15);
      if (succeeded)
        Purity_34 = (MR_Integer) 1;
      else
        Purity_34 = (MR_Integer) 0;
    }
    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&DummyInstMapDelta_35);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_33, DummyInstMapDelta_35, (MR_Integer) 6, Purity_34, Context_20, &GoalInfo_37);
    Var_60 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    hlds__make_hlds__qual_info__construct_and_record_pred_or_func_call_8_p_0(Var_60, PredOrFunc_17, InstancePredName_28, HeadVars_31, GoalInfo_37, &IntroducedGoal_38, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54);
    {
      IntroducedClause_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IntroducedClause_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, IntroducedClause_39, 1) = ((MR_Box) (IntroducedGoal_38));
      MR_hl_field(0, IntroducedClause_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, IntroducedClause_39, 3) = ((MR_Box) (Context_20));
      MR_hl_field(0, IntroducedClause_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_31, ArgTypes_18, &ExplicitVarTypes_40);
    parse_tree__var_table__init_var_table_1_p_0(&VarTable_41);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_42);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__instance_method_clauses_scalar_common_1[0]), &TVarNameMap_43);
    HeadVarVec_44 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__make_hlds__instance_method_clauses_scalar_common_1[1]), PredOrFunc_17, HeadVars_31);
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (IntroducedClause_39));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__hlds_clauses__set_clause_list_2_p_0(Var_65, &ClausesRep_45);
    Var_67 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *ClausesInfo_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (VarSet_32));
      MR_hl_field(0, base, 1) = ((MR_Box) (ExplicitVarTypes_40));
      MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_41));
      MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_42));
      MR_hl_field(0, base, 4) = ((MR_Box) (TVarNameMap_43));
      MR_hl_field(0, base, 5) = ((MR_Box) (HeadVarVec_44));
      MR_hl_field(0, base, 6) = ((MR_Box) (ClausesRep_45));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_67));
      MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    *STATE_VARIABLE_TVarSet_50 = STATE_VARIABLE_TVarSet_0_49;
    *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_0_51;
    *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_0_55;
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
