/*
** Automatically generated from `make_hlds_error.m'
** by the Mercury compiler,
** version rotd-2020-04-02
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


// :- module hlds.make_hlds_error.
// :- implementation.

/*
INIT mercury__hlds__make_hlds_error__init
ENDINIT
*/

#include "hlds.make_hlds_error.mih"


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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static MR_Word MR_CALL 
hlds__make_hlds_error__wrap_int_fixed_1_f_0(
  MR_Integer N_3);

static MR_Box MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds_error__gather_porf_arities_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_1[31][2];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_2[2][5];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_3[2][3];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_4[1][1];




static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_1[31][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[0])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Here is the previous definition of"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does exist with"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "specifies non-existent mode."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "However, a"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of that name"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does exist with arity"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "However,"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "s"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of that name do exist with arities"))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds_error_scalar_common_2[0])),
    ((MR_Box) (hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds_error_scalar_common_2[1])),
    ((MR_Box) (hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static MR_Word MR_CALL 
hlds__make_hlds_error__wrap_int_fixed_1_f_0(
  MR_Integer N_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (N_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__make_hlds_error__wrap_int_fixed_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Name_12,
  MR_Integer Arity_13,
  MR_Word PredOrFunc_14,
  MR_Word Status_15,
  MR_Word IsClassMethod_16,
  MR_Word Context_17,
  MR_Word DescPieces_18,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  {
    MR_bool succeeded;
    MR_Word DefinedInThisModule_20;
    MR_Word IsExported_21;
    MR_Word Globals_22;
    MR_Word InferTypes_23;

    DefinedInThisModule_20 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_15);
    IsExported_21 = hlds__status__pred_status_is_exported_1_f_0(Status_15);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 197, &InferTypes_23);
    succeeded = (DefinedInThisModule_20 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (IsExported_21 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (IsClassMethod_16 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (InferTypes_23 == (MR_Integer) 1);
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
    else
    {
      MR_Word PFSymNameArity_24;
      MR_String PredOrFuncStr_25;
      MR_Word MainPieces_26;
      MR_Word MainMsg_27;
      MR_Word PredicateTable_28;
      MR_Word AllArityPredIds_29;
      MR_Word PorFArities_30;
      MR_Word OtherArities_31;
      MR_Word OtherAritiesList_32;
      MR_String FullPredOrFuncStr_33;
      MR_Word Spec_34;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_61;

      {
        PFSymNameArity_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFSymNameArity_24, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
        MR_hl_field(MR_mktag(0), PFSymNameArity_24, 1) = ((MR_Box) (Name_12));
        MR_hl_field(MR_mktag(0), PFSymNameArity_24, 2) = ((MR_Box) (Arity_13));
      }
      PredOrFuncStr_25 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_14);
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[13])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (DescPieces_18));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_4[0])));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (PFSymNameArity_24));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 19U));
        MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (PredOrFuncStr_25));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[12])));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[20])));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[19])));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_44, Var_50);
      {
        MainMsg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MainMsg_27, 0) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), MainMsg_27, 1) = ((MR_Box) (MainPieces_26));
      }
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_28);
      hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_28, (MR_Integer) 0, PredOrFunc_14, Name_12, &AllArityPredIds_29);
      hlds__make_hlds_error__gather_porf_arities_4_p_0(ModuleInfo_11, AllArityPredIds_29, PredOrFunc_14, &PorFArities_30);
      mercury__set__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Arity_13)), PorFArities_30, &OtherArities_31);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OtherArities_31, &OtherAritiesList_32);
      FullPredOrFuncStr_33 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_14);
      if ((OtherAritiesList_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_119;

        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (MainMsg_27));
          MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.maybe_report_undefined_pred_error\'/10"));
          MR_hl_field(MR_mktag(0), Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_34, 3) = ((MR_Box) (Var_119));
        }
      }
      else
      {
        MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherAritiesList_32, (MR_Integer) 1))));
        MR_Integer Var_135 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), OtherAritiesList_32, (MR_Integer) 0))));

        if ((Var_134 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word OtherAritiesPieces_36;
          MR_Word OtherAritiesMsg_40;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_99;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_113;
          MR_Word Var_114;

          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (FullPredOrFuncStr_33));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (Var_135));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[4])));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[27])));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_102));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[26])));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_99));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_96));
          }
          {
            OtherAritiesPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OtherAritiesPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[25])));
            MR_hl_field(MR_mktag(1), OtherAritiesPieces_36, 1) = ((MR_Box) (Var_94));
          }
          {
            OtherAritiesMsg_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OtherAritiesMsg_40, 0) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), OtherAritiesMsg_40, 1) = ((MR_Box) (OtherAritiesPieces_36));
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (OtherAritiesMsg_40));
            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MainMsg_27));
            MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_114));
          }
          {
            Spec_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.maybe_report_undefined_pred_error\'/10"));
            MR_hl_field(MR_mktag(0), Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_34, 3) = ((MR_Box) (Var_113));
          }
        }
        else
        {
          MR_Word Var_70;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_78;
          MR_Word Var_81;
          MR_Word Var_83;
          MR_Word OtherAritiesPieces_126;
          MR_Word OtherAritiesMsg_127;
          MR_Word Var_131;
          MR_Word Var_132;

          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (FullPredOrFuncStr_33));
          }
          Var_83 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&hlds__make_hlds_error_scalar_common_3[1]), OtherAritiesList_32);
          Var_81 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_83);
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[30])));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[29])));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[28])));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
          }
          OtherAritiesPieces_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_70, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[4])));
          {
            OtherAritiesMsg_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OtherAritiesMsg_127, 0) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), OtherAritiesMsg_127, 1) = ((MR_Box) (OtherAritiesPieces_126));
          }
          {
            Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (OtherAritiesMsg_127));
            MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (MainMsg_27));
            MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
          }
          {
            Spec_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.maybe_report_undefined_pred_error\'/10"));
            MR_hl_field(MR_mktag(0), Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), Spec_34, 3) = ((MR_Box) (Var_131));
          }
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_42 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_34));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds_error__gather_porf_arities_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    else
    {
      MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_12;
      MR_Word PorF_13;
      MR_Word STATE_VARIABLE_PorFArities_18_18;

      hlds__make_hlds_error__gather_porf_arities_4_p_0(HeadVar__1_1, PredIds_9, HeadVar__3_3, &STATE_VARIABLE_PorFArities_18_18);
      hlds__hlds_module__module_info_pred_info_3_p_0(HeadVar__1_1, PredId_8, &PredInfo_12);
      PorF_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
      succeeded = (PorF_13 == HeadVar__3_3);
      if (succeeded)
      {
        MR_Word Markers_14;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_12, &Markers_14);
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_14, (MR_Integer) 4);
        if (succeeded)
          *HeadVar__4_4 = STATE_VARIABLE_PorFArities_18_18;
        else
        {
          MR_Integer OrigArity_15;
          MR_Integer Arity_16;

          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_12, &OrigArity_15);
          parse_tree__prog_util__adjust_func_arity_3_p_0(PorF_13, OrigArity_15, &Arity_16);
          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Arity_16)), STATE_VARIABLE_PorFArities_18_18, HeadVar__4_4);
        }
      }
      else
        *HeadVar__4_4 = STATE_VARIABLE_PorFArities_18_18;
    }
  }
}

void MR_CALL 
hlds__make_hlds_error__report_undefined_mode_error_6_p_0(
  MR_Word Name_7,
  MR_Integer Arity_8,
  MR_Word Context_9,
  MR_Word DescPieces_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[13])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (DescPieces_10));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Arity_8));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[24])));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[19])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_16, Var_19);
    {
      Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.report_undefined_mode_error\'/6"));
      MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (Pieces_12));
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

static void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    mercury__string__int_to_string_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(
  MR_Word MaybePorF_9,
  MR_Word Name_10,
  MR_Integer Arity_11,
  MR_Word OtherArities_12,
  MR_Word Context_13,
  MR_Word DescPieces_14,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_Word PredOrFuncPieces_16;
    MR_Word MainPieces_17;
    MR_Word OtherArityPieces_18;
    MR_Word Spec_22;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_56;
    MR_Word Var_86;

    if ((MaybePorF_9 == (MR_Word) ((MR_Unsigned) 0U)))
      PredOrFuncPieces_16 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[10]));
    else
    {
      MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePorF_9, (MR_Integer) 0))));

      switch (Var_93) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          PredOrFuncPieces_16 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[16]));
          break;
        case (MR_Integer) 0:
          PredOrFuncPieces_16 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[18]));
          break;
      }
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[13])));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (DescPieces_14));
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Name_10));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (Arity_11));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[21])));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[19])));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
    }
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredOrFuncPieces_16, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[12])));
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_46, Var_56);
    MainPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_42, Var_45);
    if ((OtherArities_12 == (MR_Word) ((MR_Unsigned) 0U)))
      OtherArityPieces_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word OtherArityStrs_21;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_String Var_71;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Box conv1_Var_71;

      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds_error_scalar_common_3[0]), OtherArities_12, &OtherArityStrs_21);
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Name_10));
      }
      conv1_Var_71 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OtherArityStrs_21, ((MR_Box) ((MR_String) "arity")), ((MR_Box) ((MR_String) "arities")));
      Var_71 = ((MR_String) (conv1_Var_71));
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[22])));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
      }
      Var_76 = parse_tree__error_util__list_to_pieces_1_f_0(OtherArityStrs_21);
      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_76, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[4])));
      OtherArityPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_64, Var_75);
    }
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_17, OtherArityPieces_18);
    {
      Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.report_undefined_pred_or_func_error\'/8"));
      MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_22, 3) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(1), Spec_22, 4) = ((MR_Box) (Var_86));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
    }
  }
}

void MR_CALL 
hlds__make_hlds_error__report_multiple_def_error_8_p_0(
  MR_Word Name_9,
  MR_Integer Arity_10,
  MR_String DefType_11,
  MR_Word Context_12,
  MR_Word OrigContext_13,
  MR_Word ExtraPieces_14,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_Word CmpRes_16;
    MR_Word FirstContext_17;
    MR_Word SecondContext_18;
    MR_Word SNA_19;
    MR_Word SecondDeclPieces_20;
    MR_Word FirstDeclPieces_21;
    MR_Word SecondDeclMsg_22;
    MR_Word FirstDeclMsg_23;
    MR_Word ExtraMsgs_24;
    MR_Word Spec_27;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_64;
    MR_Word Var_65;

    mercury__term____Compare____context_0_0(&CmpRes_16, OrigContext_13, Context_12);
    switch (CmpRes_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          FirstContext_17 = OrigContext_13;
          SecondContext_18 = Context_12;
        }
        break;
      case (MR_Integer) 2:
        {
          FirstContext_17 = Context_12;
          SecondContext_18 = OrigContext_13;
        }
        break;
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Name_9));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Arity_10));
    }
    {
      SNA_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SNA_19, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), SNA_19, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (DefType_11));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (SNA_19));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[2])));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      SecondDeclPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SecondDeclPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[13])));
      MR_hl_field(MR_mktag(1), SecondDeclPieces_20, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (SNA_19));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[4])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    {
      FirstDeclPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FirstDeclPieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), FirstDeclPieces_21, 1) = ((MR_Box) (Var_44));
    }
    {
      SecondDeclMsg_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SecondDeclMsg_22, 0) = ((MR_Box) (SecondContext_18));
      MR_hl_field(MR_mktag(0), SecondDeclMsg_22, 1) = ((MR_Box) (SecondDeclPieces_20));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (FirstContext_17));
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (FirstDeclPieces_21));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FirstDeclMsg_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), FirstDeclMsg_23, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(2), FirstDeclMsg_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), FirstDeclMsg_23, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), FirstDeclMsg_23, 3) = ((MR_Box) (Var_56));
    }
    if ((ExtraPieces_14 == (MR_Word) ((MR_Unsigned) 0U)))
      ExtraMsgs_24 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_59;

      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (SecondContext_18));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ExtraPieces_14));
      }
      {
        ExtraMsgs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ExtraMsgs_24, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), ExtraMsgs_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (FirstDeclMsg_23));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (ExtraMsgs_24));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (SecondDeclMsg_22));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
    }
    {
      Spec_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.report_multiple_def_error\'/8"));
      MR_hl_field(MR_mktag(0), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_27, 3) = ((MR_Box) (Var_64));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_29 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
    }
  }
}

void mercury__hlds__make_hlds_error__init(void)
{
}

void mercury__hlds__make_hlds_error__init_type_tables(void)
{
}

void mercury__hlds__make_hlds_error__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds_error__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds_error.
