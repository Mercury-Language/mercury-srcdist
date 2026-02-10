/*
** Automatically generated from `check_field_access_functions.m'
** by the Mercury compiler,
** version rotd-2026-02-10
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


// :- module hlds.make_hlds.check_field_access_functions.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__check_field_access_functions__init
ENDINIT
*/

#include "hlds.make_hlds.check_field_access_functions.mih"


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
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__check_field_access_functions__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static void MR_CALL 
hlds__make_hlds__check_field_access_functions__check_pred_if_field_access_function_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredStatus_7,
  MR_Word ItemPredDecl_8,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
hlds__make_hlds__check_field_access_functions__check_preds_if_field_access_function_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__check_field_access_functions_scalar_common_1[12][2];

static /* final */ const MR_Box hlds__make_hlds__check_field_access_functions_scalar_common_2[1][8];




static /* final */ const MR_Box hlds__make_hlds__check_field_access_functions_scalar_common_1[12][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__check_field_access_functions_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__check_field_access_functions_scalar_common_1[3])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__check_field_access_functions_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__check_field_access_functions_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a field access function for an exported field"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__check_field_access_functions_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__check_field_access_functions_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__check_field_access_functions_scalar_common_2[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__check_field_access_functions__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__check_field_access_functions__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__check_field_access_functions__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static void MR_CALL 
hlds__make_hlds__check_field_access_functions__check_pred_if_field_access_function_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredStatus_7,
  MR_Word ItemPredDecl_8,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, 0))));
  MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDecl_8, 1))) & (MR_Integer) 1);
  MR_Word TypesAndMaybeModes_12 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, 2))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(0, ItemPredDecl_8, 12))));

  switch (PredOrFunc_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word PredFormArity_24;
        MR_Word UserArity_25;

        PredFormArity_24 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(TypesAndMaybeModes_12);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_25, PredFormArity_24);
        hlds__make_hlds__check_field_access_functions__maybe_check_field_access_function_7_p_0(ModuleInfo_6, SymName_10, UserArity_25, PredStatus_7, Context_22, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      break;
  }
}

void MR_CALL 
hlds__make_hlds__check_field_access_functions__maybe_check_field_access_function_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FuncSymName_9,
  MR_Word UserArity_10,
  MR_Word FuncStatus_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Integer UserArityInt_14 = (MR_Integer) (UserArity_10);
  MR_Word OoMFieldDefns_17;
  MR_Integer Var_20;
  MR_Word AccessType_15;
  MR_Word FieldName_16;

  succeeded = hlds__hlds_pred__is_field_access_function_name_6_p_0(ModuleInfo_8, FuncSymName_9, &Var_20, &AccessType_15, &FieldName_16, &OoMFieldDefns_17);
  if (succeeded)
    succeeded = (UserArityInt_14 == Var_20);
  if (succeeded)
  {
    MR_Word FieldDefn_21;
    MR_Word DefnStatus_23;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31 = (MR_Word) (FuncStatus_11);

    succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 12U));
    if (succeeded)
    {
      FieldDefn_21 = ((MR_Word) ((MR_hl_field(0, OoMFieldDefns_17, 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(0, OoMFieldDefns_17, 1))));
      succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        DefnStatus_23 = ((MR_Word) ((MR_hl_field(0, FieldDefn_21, 1))));
        Var_30 = (MR_Word) (DefnStatus_23);
        succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 12U));
      }
    }
    if (succeeded)
    {
      MR_Word PredFormArity_27;
      MR_Word PFSymNameArity_28;
      MR_Word Pieces_34;
      MR_Word Spec_35;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_48;
      MR_Word Var_49;

      parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_10, &PredFormArity_27);
      {
        PFSymNameArity_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PFSymNameArity_28, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, PFSymNameArity_28, 1) = ((MR_Box) (FuncSymName_9));
        MR_hl_field(0, PFSymNameArity_28, 2) = ((MR_Box) (PredFormArity_27));
      }
      {
        Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(3, Var_40, 1) = ((MR_Box) (PFSymNameArity_28));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__check_field_access_functions_scalar_common_1[6])));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__check_field_access_functions_scalar_common_1[1])));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
      }
      Var_43 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__check_field_access_functions_scalar_common_1[8])));
      Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__check_field_access_functions_scalar_common_1[10])));
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &hlds__make_hlds__check_field_access_functions_scalar_common_1[11])));
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_48);
      Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_42);
      {
        Spec_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.check_field_access_functions.report_field_status_mismatch\'/4"));
        MR_hl_field(0, Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_35, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_35, 4) = ((MR_Box) (Pieces_34));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_19 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_35));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
      }
    }
    else
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  }
  else
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
}

static void MR_CALL 
hlds__make_hlds__check_field_access_functions__check_preds_if_field_access_function_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_27;

  hlds__make_hlds__check_field_access_functions__check_pred_if_field_access_function_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_27));
}

void MR_CALL 
hlds__make_hlds__check_field_access_functions__check_preds_if_field_access_function_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_4 = STATE_VARIABLE_Specs_0_3;
    else
    {
      MR_Word SecList_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word SecLists_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word SectionInfo_13 = ((MR_Word) ((MR_hl_field(0, SecList_10, 0))));
      MR_Word ItemPredSecls_14 = ((MR_Word) ((MR_hl_field(0, SecList_10, 1))));
      MR_Word ItemMercuryStatus_15 = ((MR_Word) ((MR_hl_field(0, SectionInfo_13, 0))));
      MR_Word PredStatus_17;
      MR_Word Var_20;
      MR_Word STATE_VARIABLE_Specs_1_21;
      MR_Box conv1_STATE_VARIABLE_Specs_1_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_3;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_17);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_20, 0) = ((MR_Box) (&hlds__make_hlds__check_field_access_functions_scalar_common_2[0]));
        MR_hl_field(0, Var_20, 1) = ((MR_Box) (hlds__make_hlds__check_field_access_functions__check_preds_if_field_access_function_4_p_0_1));
        MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_20, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Var_20, 4) = ((MR_Box) (PredStatus_17));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__check_field_access_functions_scalar_common_1[0]), Var_20, ItemPredSecls_14, ((MR_Box) (STATE_VARIABLE_Specs_0_3)), &conv1_STATE_VARIABLE_Specs_1_21);
      STATE_VARIABLE_Specs_1_21 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_1_21));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SecLists_11;
      next_value_of_STATE_VARIABLE_Specs_0_3 = STATE_VARIABLE_Specs_1_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Specs_0_3 = next_value_of_STATE_VARIABLE_Specs_0_3;
      continue;
    }
    break;
  }
}

void mercury__hlds__make_hlds__check_field_access_functions__init(void)
{
}

void mercury__hlds__make_hlds__check_field_access_functions__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__check_field_access_functions__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__check_field_access_functions__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.check_field_access_functions.
