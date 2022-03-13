/*
** Automatically generated from `parse_tree_out_clause.m'
** by the Mercury compiler,
** version rotd-2022-03-13
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


// :- module parse_tree.parse_tree_out_clause.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_clause__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_clause.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word MutableVar_12,
  MR_Word STATE_VARIABLE_NeedComma_0_15,
  MR_Word * STATE_VARIABLE_NeedComma_16);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_pred_clause_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word PredName_10,
  MR_Word Args_11,
  MR_Word Body_12);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_11_p_0(
  MR_Word tscc_proc_2_input_1_Stream_12,
  MR_Word tscc_proc_2_input_2_VarSet_13,
  MR_Integer tscc_proc_2_input_3_Indent_14,
  MR_Word tscc_proc_2_input_4_Vars_15,
  MR_Word tscc_proc_2_input_5_StateVars_16,
  MR_Word tscc_proc_2_input_6_DotSVars_17,
  MR_Word tscc_proc_2_input_7_ColonSVars_18,
  MR_Word tscc_proc_2_input_8_Goal_19,
  MR_String tscc_proc_2_input_9_Keyword_20);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Goals_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Goal_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Goal_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Goal_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(
  MR_Word Stream_6,
  MR_Word TraceExpr_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(
  MR_Word Stream_6,
  MR_Word TraceExpr_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_7_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word VarNamePrint_3,
  MR_String BangPrefix_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_some_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word Vars_9,
  MR_Word StateVars_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_call_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word SymName_9,
  MR_Word Term_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word PODVar_10);


static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[2][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_4[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_5[1][1];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_6[1][11];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_7[1][9];




static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_5[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "there_was_a_syntax_error"))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_6[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word HeadVar__4_4)
{
  MR_Word Pattern_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
  MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
  MR_Integer Var_21;
  MR_Integer Var_24;

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "catch ");
  parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, Pattern_10, Stream_7);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ->");
  Var_21 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Var_21, Stream_7);
  Var_24 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Var_24, Goal_11);
  parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_8_p_0(
  MR_Word Stream_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word MutableVar_12,
  MR_Word STATE_VARIABLE_NeedComma_0_15,
  MR_Word * STATE_VARIABLE_NeedComma_16)
{
  MR_String MutableName_39;
  MR_Word StateVar_40;

  switch (STATE_VARIABLE_NeedComma_0_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
      break;
  }
  *STATE_VARIABLE_NeedComma_16 = (MR_Integer) 1;
  MutableName_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), MutableVar_12, (MR_Integer) 0))));
  StateVar_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutableVar_12, (MR_Integer) 1))));
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "state(");
  mercury__io__write_string_4_p_0(Stream_9, MutableName_39);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", !");
  parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_11, StateVar_40, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word Stream_6,
  MR_Word PrintBase_7,
  MR_Word TraceExpr_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Base_10 = (MR_hl_field(MR_mktag(0), TraceExpr_8, (MR_Integer) 0));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), PrintBase_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_14;

          func_0(((MR_Box) (PrintBase_7)), Base_10, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TraceExpr_8, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "not(");
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0(TypeInfo_for_T_38, Stream_6, PrintBase_7, TraceExprA_11);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_41) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_TraceExpr_8;

                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0(TypeInfo_for_T_38, Stream_6, PrintBase_7, Var_40);
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) " and ");
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_39;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0(TypeInfo_for_T_38, Stream_6, PrintBase_7, Var_40);
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) ") or (");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0(TypeInfo_for_T_38, Stream_6, PrintBase_7, Var_39);
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__output_instance_method_clause_5_p_0(
  MR_Word MethodName_6,
  MR_Word ItemClause_7,
  MR_Word Stream_8)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClause_7, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_7, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_7, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_7, (MR_Integer) 4))));
  MR_Word BodyGoal_17;

  if (((MR_tag((MR_Word) MaybeBodyGoal_14)) == (MR_Integer) 0))
  {
    MR_Word Var_32;

    Var_32 = mercury__term__context_init_0_f_0();
    {
      BodyGoal_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), BodyGoal_17, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), BodyGoal_17, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_5[0]));
      MR_hl_field(MR_mktag(1), BodyGoal_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), BodyGoal_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
    BodyGoal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_14, (MR_Integer) 0))));
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTerms_18;
        MR_Word ResultTerm_19;
        MR_Box conv0_ResultTerm_19;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_12, &FuncArgTerms_18, &conv0_ResultTerm_19);
        ResultTerm_19 = ((MR_Word) (conv0_ResultTerm_19));
        parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(MethodName_6, Stream_8);
        if (!((FuncArgTerms_18 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArg_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncArgTerms_18, (MR_Integer) 0))));
          MR_Word TailArgs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncArgTerms_18, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_25_51;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), VarSet_13, (MR_Integer) 0, HeadArg_44, TailArgs_45, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_51);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        }
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          MR_Box conv2_STATE_VARIABLE_IO_21;

          parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), VarSet_13, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_19, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_21);
        }
        else
        {
          MR_Box conv3_STATE_VARIABLE_IO_34_60;

          parse_tree__parse_tree_out_term__mercury_format_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), VarSet_13, (MR_Integer) 0, ResultTerm_19, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_34_60);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " :-\n\t");
          parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_8, VarSet_13, (MR_Integer) 1, BodyGoal_17);
        }
      }
      break;
    case (MR_Integer) 0:
      parse_tree__parse_tree_out_clause__mercury_output_pred_clause_7_p_0(Stream_8, VarSet_13, MethodName_6, ArgTerms_12, BodyGoal_17);
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_item_clause_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemClause_8)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClause_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word PredName0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_8, (MR_Integer) 1))));
  MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_8, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_8, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_8, (MR_Integer) 4))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_8, (MR_Integer) 5))));
  MR_Word BodyGoal_17;
  MR_Word PredName_18;

  if (((MR_tag((MR_Word) MaybeBodyGoal_14)) == (MR_Integer) 0))
  {
    MR_Word Var_36;

    Var_36 = mercury__term__context_init_0_f_0();
    {
      BodyGoal_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), BodyGoal_17, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), BodyGoal_17, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_5[0]));
      MR_hl_field(MR_mktag(1), BodyGoal_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), BodyGoal_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
    BodyGoal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_14, (MR_Integer) 0))));
  parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, PredName0_11, &PredName_18);
  parse_tree__parse_tree_out_info__maybe_output_line_number_5_p_0(Info_6, Context_15, Stream_7);
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTerms_19;
        MR_Word ResultTerm_20;
        MR_Box conv0_ResultTerm_20;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_12, &FuncArgTerms_19, &conv0_ResultTerm_20);
        ResultTerm_20 = ((MR_Word) (conv0_ResultTerm_20));
        parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(PredName_18, Stream_7);
        if (!((FuncArgTerms_19 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArg_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncArgTerms_19, (MR_Integer) 0))));
          MR_Word TailArgs_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncArgTerms_19, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_25_55;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), VarSet_13, (MR_Integer) 0, HeadArg_48, TailArgs_49, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_55);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          MR_Box conv2_STATE_VARIABLE_IO_25_25;

          parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), VarSet_13, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_20, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_25_25);
        }
        else
        {
          MR_Box conv3_STATE_VARIABLE_IO_34_64;

          parse_tree__parse_tree_out_term__mercury_format_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), VarSet_13, (MR_Integer) 0, ResultTerm_20, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_34_64);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " :-\n\t");
          parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_13, (MR_Integer) 1, BodyGoal_17);
        }
      }
      break;
    case (MR_Integer) 0:
      parse_tree__parse_tree_out_clause__mercury_output_pred_clause_7_p_0(Stream_7, VarSet_13, PredName_18, ArgTerms_12, BodyGoal_17);
      break;
  }
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_pred_clause_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word PredName_10,
  MR_Word Args_11,
  MR_Word Body_12)
{
  MR_bool succeeded;

  parse_tree__mercury_to_mercury__mercury_output_sym_name_4_p_0(PredName_10, Stream_8);
  if (!((Args_11 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word HeadArg_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_11, (MR_Integer) 0))));
    MR_Word TailArgs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_11, (MR_Integer) 1))));
    MR_Box conv0_STATE_VARIABLE_IO_23_23;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), VarSet_9, (MR_Integer) 0, HeadArg_14, TailArgs_15, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23_23);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  }
  succeeded = ((((MR_tag((MR_Word) Body_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " :-\n\t");
    parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_8, VarSet_9, (MR_Integer) 1, Body_12);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_clause__mercury_output_catch_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_NeedComma_16;

  parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NeedComma_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NeedComma_16));
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(
  MR_Word tscc_proc_1_input_1_Stream_7,
  MR_Word tscc_proc_1_input_2_VarSet_8,
  MR_Integer tscc_proc_1_input_3_Indent_9,
  MR_Word tscc_proc_1_input_4_Goal_10)
{
  MR_Word tscc_proc_2_input_1_Stream_12;
  MR_Word tscc_proc_2_input_2_VarSet_13;
  MR_Integer tscc_proc_2_input_3_Indent_14;
  MR_Word tscc_proc_2_input_4_Vars_15;
  MR_Word tscc_proc_2_input_5_StateVars_16;
  MR_Word tscc_proc_2_input_6_DotSVars_17;
  MR_Word tscc_proc_2_input_7_ColonSVars_18;
  MR_Word tscc_proc_2_input_8_Goal_19;
  MR_String tscc_proc_2_input_9_Keyword_20;

  // The code for TSCC PROC 1: pred parse_tree.parse_tree_out_clause.mercury_output_goal/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_output_goal/6-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_output_promise_eqv_solutions_goal/11-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Stream_7 = tscc_proc_1_input_1_Stream_7;
    MR_Word VarSet_8 = tscc_proc_1_input_2_VarSet_8;
    MR_Integer Indent_9 = tscc_proc_1_input_3_Indent_9;
    MR_Word Goal_10 = tscc_proc_1_input_4_Goal_10;

    switch (MR_tag((MR_Word) Goal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermA_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1))));
          MR_Word TermB_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 2))));
          MR_Word Purity_455 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Box conv5_STATE_VARIABLE_IO_87_87;

          parse_tree__parse_tree_out_info__add_purity_prefix_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), Purity_455, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_87_87);
          parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, TermA_83, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
          parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, (MR_Integer) 0, TermB_84, Stream_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Purity_452 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word Name_453 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_10, (MR_Integer) 1))));
          MR_Word Terms_454 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_10, (MR_Integer) 2))));
          MR_Box conv0_STATE_VARIABLE_IO_95_95;

          parse_tree__parse_tree_out_info__add_purity_prefix_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), Purity_452, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_95_95);
          parse_tree__parse_tree_out_clause__mercury_output_call_6_p_0(Stream_7, VarSet_8, Name_453, Terms_454);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_444 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_10, (MR_Integer) 1))));
          MR_Word SubGoalB_445 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_10, (MR_Integer) 2))));
          MR_Word next_value_of_tscc_proc_1_input_1_Stream_7;
          MR_Word next_value_of_tscc_proc_1_input_2_VarSet_8;
          MR_Integer next_value_of_tscc_proc_1_input_3_Indent_9;
          MR_Word next_value_of_tscc_proc_1_input_4_Goal_10;

          parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent_9, SubGoalA_444);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
          parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Stream_7 = Stream_7;
          next_value_of_tscc_proc_1_input_2_VarSet_8 = VarSet_8;
          next_value_of_tscc_proc_1_input_3_Indent_9 = Indent_9;
          next_value_of_tscc_proc_1_input_4_Goal_10 = SubGoalB_445;
          tscc_proc_1_input_1_Stream_7 = next_value_of_tscc_proc_1_input_1_Stream_7;
          tscc_proc_1_input_2_VarSet_8 = next_value_of_tscc_proc_1_input_2_VarSet_8;
          tscc_proc_1_input_3_Indent_9 = next_value_of_tscc_proc_1_input_3_Indent_9;
          tscc_proc_1_input_4_Goal_10 = next_value_of_tscc_proc_1_input_4_Goal_10;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Integer Indent1_437;
              MR_Word Vars_438 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word StateVars_439 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word Then_440 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word Else_441 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(if");
              parse_tree__parse_tree_out_clause__mercury_output_some_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Stream_7, VarSet_8, Vars_438, StateVars_439);
              Indent1_437 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_437, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_437, Cond_73);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "then");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_437, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_437, Then_440);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "else");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_437, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_437, Else_441);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoalA_449 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_450 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_451;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              Indent1_451 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_451, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_451, SubGoalA_449);
              parse_tree__parse_tree_out_clause__mercury_output_disj_6_p_0(Stream_7, VarSet_8, Indent_9, SubGoalB_450);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Indent1_442;
              MR_Word SubGoal_443 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\\+ (");
              Indent1_442 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_442, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_442, SubGoal_443);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "fail");
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_446 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_447 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_448;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              Indent1_448 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_448, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_448, SubGoalA_446);
              parse_tree__parse_tree_out_clause__mercury_output_par_conj_6_p_0(Stream_7, VarSet_8, Indent_9, SubGoalB_447);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));

              if ((Vars_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_tscc_proc_1_input_1_Stream_7 = Stream_7;
                MR_Word next_value_of_tscc_proc_1_input_2_VarSet_8 = VarSet_8;
                MR_Integer next_value_of_tscc_proc_1_input_3_Indent_9 = Indent_9;
                MR_Word next_value_of_tscc_proc_1_input_4_Goal_10 = SubGoal_23;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Stream_7 = next_value_of_tscc_proc_1_input_1_Stream_7;
                tscc_proc_1_input_2_VarSet_8 = next_value_of_tscc_proc_1_input_2_VarSet_8;
                tscc_proc_1_input_3_Indent_9 = next_value_of_tscc_proc_1_input_3_Indent_9;
                tscc_proc_1_input_4_Goal_10 = next_value_of_tscc_proc_1_input_4_Goal_10;
                goto top_of_proc_1;
              }
              else
              {
                MR_Integer Indent1_402;

                switch (QuantType_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "all");
                    break;
                  case (MR_Integer) 0:
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "some");
                    break;
                }
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
                switch (QuantVarsKind_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, Vars_22, Stream_7);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__mercury_to_mercury__mercury_output_state_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, Vars_22, Stream_7);
                    break;
                }
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
                Indent1_402 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_402, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_402, SubGoal_23);
                parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Integer Indent1_417;
              MR_Word SubGoal_418 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));

              switch (Purity_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "promise_impure (");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "promise_pure (");
                  break;
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "promise_semipure (");
                  break;
              }
              Indent1_417 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_417, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_417, SubGoal_418);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word StateVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word Vars_405 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_406 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_405;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_27;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_28;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_29;
              MR_Word next_value_of_tscc_proc_2_input_8_Goal_19 = SubGoal_406;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Stream_12 = next_value_of_tscc_proc_2_input_1_Stream_12;
              tscc_proc_2_input_2_VarSet_13 = next_value_of_tscc_proc_2_input_2_VarSet_13;
              tscc_proc_2_input_3_Indent_14 = next_value_of_tscc_proc_2_input_3_Indent_14;
              tscc_proc_2_input_4_Vars_15 = next_value_of_tscc_proc_2_input_4_Vars_15;
              tscc_proc_2_input_5_StateVars_16 = next_value_of_tscc_proc_2_input_5_StateVars_16;
              tscc_proc_2_input_6_DotSVars_17 = next_value_of_tscc_proc_2_input_6_DotSVars_17;
              tscc_proc_2_input_7_ColonSVars_18 = next_value_of_tscc_proc_2_input_7_ColonSVars_18;
              tscc_proc_2_input_8_Goal_19 = next_value_of_tscc_proc_2_input_8_Goal_19;
              tscc_proc_2_input_9_Keyword_20 = (MR_String) "promise_equivalent_solutions";
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_407 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_408 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_409 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_410 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_411 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_407;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_409;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_410;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_411;
              MR_Word next_value_of_tscc_proc_2_input_8_Goal_19 = SubGoal_408;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Stream_12 = next_value_of_tscc_proc_2_input_1_Stream_12;
              tscc_proc_2_input_2_VarSet_13 = next_value_of_tscc_proc_2_input_2_VarSet_13;
              tscc_proc_2_input_3_Indent_14 = next_value_of_tscc_proc_2_input_3_Indent_14;
              tscc_proc_2_input_4_Vars_15 = next_value_of_tscc_proc_2_input_4_Vars_15;
              tscc_proc_2_input_5_StateVars_16 = next_value_of_tscc_proc_2_input_5_StateVars_16;
              tscc_proc_2_input_6_DotSVars_17 = next_value_of_tscc_proc_2_input_6_DotSVars_17;
              tscc_proc_2_input_7_ColonSVars_18 = next_value_of_tscc_proc_2_input_7_ColonSVars_18;
              tscc_proc_2_input_8_Goal_19 = next_value_of_tscc_proc_2_input_8_Goal_19;
              tscc_proc_2_input_9_Keyword_20 = (MR_String) "promise_equivalent_solution_sets";
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_412 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_413 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_414 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_415 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_416 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_412;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_414;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_415;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_416;
              MR_Word next_value_of_tscc_proc_2_input_8_Goal_19 = SubGoal_413;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Stream_12 = next_value_of_tscc_proc_2_input_1_Stream_12;
              tscc_proc_2_input_2_VarSet_13 = next_value_of_tscc_proc_2_input_2_VarSet_13;
              tscc_proc_2_input_3_Indent_14 = next_value_of_tscc_proc_2_input_3_Indent_14;
              tscc_proc_2_input_4_Vars_15 = next_value_of_tscc_proc_2_input_4_Vars_15;
              tscc_proc_2_input_5_StateVars_16 = next_value_of_tscc_proc_2_input_5_StateVars_16;
              tscc_proc_2_input_6_DotSVars_17 = next_value_of_tscc_proc_2_input_6_DotSVars_17;
              tscc_proc_2_input_7_ColonSVars_18 = next_value_of_tscc_proc_2_input_7_ColonSVars_18;
              tscc_proc_2_input_8_Goal_19 = next_value_of_tscc_proc_2_input_8_Goal_19;
              tscc_proc_2_input_9_Keyword_20 = (MR_String) "arbitrary";
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Integer Indent1_419;
              MR_Word SubGoal_420 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));

              switch (Detism_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_cc_multi");
                  break;
                case (MR_Integer) 5:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_cc_nondet");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_det");
                  break;
                case (MR_Integer) 6:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_erroneous");
                  break;
                case (MR_Integer) 7:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_failure");
                  break;
                case (MR_Integer) 2:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_multi");
                  break;
                case (MR_Integer) 3:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_nondet");
                  break;
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_semidet");
                  break;
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " (");
              Indent1_419 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_419, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_419, SubGoal_420);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Integer Indent1_421;
              MR_Word SubGoal_422 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_complete_switch [");
              parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_6_p_0(Stream_7, VarSet_8, (MR_Integer) 0, Var_37);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_421 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_421, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_421, SubGoal_422);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Indent1_423;
              MR_Word SubGoal_424 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word Detism_425 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Var_426 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));

              switch (Detism_425) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_cc_multi");
                  break;
                case (MR_Integer) 5:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_cc_nondet");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_det");
                  break;
                case (MR_Integer) 6:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_erroneous");
                  break;
                case (MR_Integer) 7:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_failure");
                  break;
                case (MR_Integer) 2:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_multi");
                  break;
                case (MR_Integer) 3:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_nondet");
                  break;
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_semidet");
                  break;
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " [");
              parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_6_p_0(Stream_7, VarSet_8, (MR_Integer) 0, Var_426);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_423 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_423, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_423, SubGoal_424);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_427;
              MR_Word SubGoal_428 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "disable_warnings [");
              parse_tree__parse_tree_out_clause__write_goal_warnings_5_p_0(Stream_7, HeadWarning_40, TailWarnings_41);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_427 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_427, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_427, SubGoal_428);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word MaybeCompileTime_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word MaybeRunTime_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word MutableVars_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_NeedComma_197_197;
              MR_Word STATE_VARIABLE_NeedComma_201_201;
              MR_Word STATE_VARIABLE_NeedComma_209_209;
              MR_Word Var_210;
              MR_Integer Var_215;
              MR_Integer Var_218;
              MR_Word SubGoal_430 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Box conv3_Var_63;
              MR_Box conv2_STATE_VARIABLE_IO_211_211;

              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "trace [");
              if ((MaybeCompileTime_55 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_197_197 = (MR_Integer) 0;
              else
              {
                MR_Word CompileTime_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompileTime_55, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(Stream_7, CompileTime_60);
                STATE_VARIABLE_NeedComma_197_197 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_56 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_201_201 = STATE_VARIABLE_NeedComma_197_197;
              else
              {
                MR_Word RunTime_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRunTime_56, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_4_p_0(Stream_7, STATE_VARIABLE_NeedComma_197_197);
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(Stream_7, RunTime_61);
                STATE_VARIABLE_NeedComma_201_201 = (MR_Integer) 1;
              }
              if ((MaybeIO_57 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_209_209 = STATE_VARIABLE_NeedComma_201_201;
              else
              {
                MR_Word IOStateVar_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_57, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_4_p_0(Stream_7, STATE_VARIABLE_NeedComma_201_201);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "io(!");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IOStateVar_62, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                STATE_VARIABLE_NeedComma_209_209 = (MR_Integer) 1;
              }
              {
                Var_210 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_210, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_210, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_210, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_210, 3) = ((MR_Box) (Stream_7));
                MR_hl_field(MR_mktag(0), Var_210, 4) = ((MR_Box) (VarSet_8));
                MR_hl_field(MR_mktag(0), Var_210, 5) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_210, MutableVars_58, ((MR_Box) (STATE_VARIABLE_NeedComma_209_209)), &conv3_Var_63, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_211_211);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
              Var_215 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Var_215, Stream_7);
              Var_218 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Var_218, SubGoal_430);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word Inner_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word MainGoal_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word OrElseGoals_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Word Var_252;
              MR_Integer Indent1_429;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "atomic [outer(");
              if (((MR_tag((MR_Word) Outer_43)) == (MR_Integer) 0))
              {
                MR_Word OVar_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_43, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "!");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OVar_48, Stream_7);
              }
              else
              {
                MR_Word OuterDI_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer_43, (MR_Integer) 0))));
                MR_Word OuterUO_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer_43, (MR_Integer) 1))));

                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OuterDI_49, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OuterUO_50, Stream_7);
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "), inner(");
              if (((MR_tag((MR_Word) Inner_44)) == (MR_Integer) 0))
              {
                MR_Word IVar_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_44, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "!");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IVar_51, Stream_7);
              }
              else
              {
                MR_Word InnerDI_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner_44, (MR_Integer) 0))));
                MR_Word InnerUO_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner_44, (MR_Integer) 1))));

                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, InnerDI_52, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, InnerUO_53, Stream_7);
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")] (");
              Indent1_429 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_429, Stream_7);
              {
                Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_252, 0) = ((MR_Box) (MainGoal_46));
                MR_hl_field(MR_mktag(1), Var_252, 1) = ((MR_Box) (OrElseGoals_47));
              }
              parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_6_p_0(Stream_7, VarSet_8, Indent1_429, Var_252);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Then_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word MaybeElse_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word Catches_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 7))));
              MR_Word Var_177;
              MR_Integer Indent1_433;
              MR_Word SubGoal_434 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_435 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Box conv4_STATE_VARIABLE_IO_178_178;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(try [");
              if (!((MaybeIO_435 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word IOStateVar_431 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_435, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "io(!");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IOStateVar_431, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_433 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_433, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_433, SubGoal_434);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "then");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_433, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_433, Then_65);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              if (!((MaybeElse_66 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Else_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_66, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "else");
                parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_433, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_433, Else_69);
              }
              {
                Var_177 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_177, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_177, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_177, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_177, 3) = ((MR_Box) (Stream_7));
                MR_hl_field(MR_mktag(0), Var_177, 4) = ((MR_Box) (VarSet_8));
                MR_hl_field(MR_mktag(0), Var_177, 5) = ((MR_Box) (Indent_9));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_177, Catches_67, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_178_178);
              if (!((MaybeCatchAny_68 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word CatchAnyVar_70;
                MR_Word CatchAnyGoal_71;
                MR_Word Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAny_68, (MR_Integer) 0))));

                CatchAnyVar_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_179, (MR_Integer) 0))));
                CatchAnyGoal_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_179, (MR_Integer) 1))));
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "catch_any ");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, CatchAnyVar_70, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ->");
                parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_433, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_433, CatchAnyGoal_71);
              }
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_17 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_17, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_17, SubGoalA_15);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "=>");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_17, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_17, SubGoalB_16);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalA_399 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_400 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_401 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_401, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_401, SubGoalA_399);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "<=>");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_401, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_401, SubGoalB_400);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Name_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word Terms_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word Var_99;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "event ");
              {
                Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Name_79));
              }
              parse_tree__parse_tree_out_clause__mercury_output_call_6_p_0(Stream_7, VarSet_8, Var_99, Terms_80);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Stream_12 = tscc_proc_2_input_1_Stream_12;
    MR_Word VarSet_13 = tscc_proc_2_input_2_VarSet_13;
    MR_Integer Indent_14 = tscc_proc_2_input_3_Indent_14;
    MR_Word Vars_15 = tscc_proc_2_input_4_Vars_15;
    MR_Word StateVars_16 = tscc_proc_2_input_5_StateVars_16;
    MR_Word DotSVars_17 = tscc_proc_2_input_6_DotSVars_17;
    MR_Word ColonSVars_18 = tscc_proc_2_input_7_ColonSVars_18;
    MR_Word Goal_19 = tscc_proc_2_input_8_Goal_19;
    MR_String Keyword_20 = tscc_proc_2_input_9_Keyword_20;
    MR_bool succeeded = (Vars_15 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (StateVars_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (DotSVars_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ColonSVars_18 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_1_input_1_Stream_7 = Stream_12;
      MR_Word next_value_of_tscc_proc_1_input_2_VarSet_8 = VarSet_13;
      MR_Integer next_value_of_tscc_proc_1_input_3_Indent_9 = Indent_14;
      MR_Word next_value_of_tscc_proc_1_input_4_Goal_10 = Goal_19;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_Stream_7 = next_value_of_tscc_proc_1_input_1_Stream_7;
      tscc_proc_1_input_2_VarSet_8 = next_value_of_tscc_proc_1_input_2_VarSet_8;
      tscc_proc_1_input_3_Indent_9 = next_value_of_tscc_proc_1_input_3_Indent_9;
      tscc_proc_1_input_4_Goal_10 = next_value_of_tscc_proc_1_input_4_Goal_10;
      goto top_of_proc_1;
    }
    else
    {
      MR_Integer Indent1_40;

      mercury__io__write_string_4_p_0(Stream_12, Keyword_20);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) " [");
      parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, Vars_15, Stream_12);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
      parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_7_p_0(Stream_12, VarSet_13, (MR_Integer) 0, (MR_String) "!", StateVars_16);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
      parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_7_p_0(Stream_12, VarSet_13, (MR_Integer) 0, (MR_String) "!.", DotSVars_17);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        succeeded = (ColonSVars_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
      parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_7_p_0(Stream_12, VarSet_13, (MR_Integer) 0, (MR_String) "!:", ColonSVars_18);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "] (");
      Indent1_40 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
      parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_40, Stream_12);
      parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_12, VarSet_13, Indent1_40, Goal_19);
      parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_14, Stream_12);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")");
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_11_p_0(
  MR_Word tscc_proc_2_input_1_Stream_12,
  MR_Word tscc_proc_2_input_2_VarSet_13,
  MR_Integer tscc_proc_2_input_3_Indent_14,
  MR_Word tscc_proc_2_input_4_Vars_15,
  MR_Word tscc_proc_2_input_5_StateVars_16,
  MR_Word tscc_proc_2_input_6_DotSVars_17,
  MR_Word tscc_proc_2_input_7_ColonSVars_18,
  MR_Word tscc_proc_2_input_8_Goal_19,
  MR_String tscc_proc_2_input_9_Keyword_20)
{
  MR_Word tscc_proc_1_input_1_Stream_7;
  MR_Word tscc_proc_1_input_2_VarSet_8;
  MR_Integer tscc_proc_1_input_3_Indent_9;
  MR_Word tscc_proc_1_input_4_Goal_10;

  // The code for TSCC PROC 2: pred parse_tree.parse_tree_out_clause.mercury_output_promise_eqv_solutions_goal/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_output_goal/6-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_output_promise_eqv_solutions_goal/11-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Stream_7 = tscc_proc_1_input_1_Stream_7;
    MR_Word VarSet_8 = tscc_proc_1_input_2_VarSet_8;
    MR_Integer Indent_9 = tscc_proc_1_input_3_Indent_9;
    MR_Word Goal_10 = tscc_proc_1_input_4_Goal_10;

    switch (MR_tag((MR_Word) Goal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermA_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1))));
          MR_Word TermB_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 2))));
          MR_Word Purity_455 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Box conv5_STATE_VARIABLE_IO_87_87;

          parse_tree__parse_tree_out_info__add_purity_prefix_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), Purity_455, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_87_87);
          parse_tree__parse_tree_out_term__mercury_output_term_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, TermA_83, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
          parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, (MR_Integer) 0, TermB_84, Stream_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Purity_452 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word Name_453 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_10, (MR_Integer) 1))));
          MR_Word Terms_454 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_10, (MR_Integer) 2))));
          MR_Box conv0_STATE_VARIABLE_IO_95_95;

          parse_tree__parse_tree_out_info__add_purity_prefix_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), Purity_452, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_95_95);
          parse_tree__parse_tree_out_clause__mercury_output_call_6_p_0(Stream_7, VarSet_8, Name_453, Terms_454);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_444 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_10, (MR_Integer) 1))));
          MR_Word SubGoalB_445 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_10, (MR_Integer) 2))));
          MR_Word next_value_of_tscc_proc_1_input_1_Stream_7;
          MR_Word next_value_of_tscc_proc_1_input_2_VarSet_8;
          MR_Integer next_value_of_tscc_proc_1_input_3_Indent_9;
          MR_Word next_value_of_tscc_proc_1_input_4_Goal_10;

          parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent_9, SubGoalA_444);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
          parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Stream_7 = Stream_7;
          next_value_of_tscc_proc_1_input_2_VarSet_8 = VarSet_8;
          next_value_of_tscc_proc_1_input_3_Indent_9 = Indent_9;
          next_value_of_tscc_proc_1_input_4_Goal_10 = SubGoalB_445;
          tscc_proc_1_input_1_Stream_7 = next_value_of_tscc_proc_1_input_1_Stream_7;
          tscc_proc_1_input_2_VarSet_8 = next_value_of_tscc_proc_1_input_2_VarSet_8;
          tscc_proc_1_input_3_Indent_9 = next_value_of_tscc_proc_1_input_3_Indent_9;
          tscc_proc_1_input_4_Goal_10 = next_value_of_tscc_proc_1_input_4_Goal_10;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Integer Indent1_437;
              MR_Word Vars_438 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word StateVars_439 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word Then_440 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word Else_441 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(if");
              parse_tree__parse_tree_out_clause__mercury_output_some_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Stream_7, VarSet_8, Vars_438, StateVars_439);
              Indent1_437 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_437, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_437, Cond_73);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "then");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_437, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_437, Then_440);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "else");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_437, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_437, Else_441);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoalA_449 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_450 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_451;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              Indent1_451 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_451, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_451, SubGoalA_449);
              parse_tree__parse_tree_out_clause__mercury_output_disj_6_p_0(Stream_7, VarSet_8, Indent_9, SubGoalB_450);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Indent1_442;
              MR_Word SubGoal_443 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\\+ (");
              Indent1_442 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_442, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_442, SubGoal_443);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "fail");
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_446 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_447 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_448;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              Indent1_448 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_448, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_448, SubGoalA_446);
              parse_tree__parse_tree_out_clause__mercury_output_par_conj_6_p_0(Stream_7, VarSet_8, Indent_9, SubGoalB_447);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));

              if ((Vars_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_tscc_proc_1_input_1_Stream_7 = Stream_7;
                MR_Word next_value_of_tscc_proc_1_input_2_VarSet_8 = VarSet_8;
                MR_Integer next_value_of_tscc_proc_1_input_3_Indent_9 = Indent_9;
                MR_Word next_value_of_tscc_proc_1_input_4_Goal_10 = SubGoal_23;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Stream_7 = next_value_of_tscc_proc_1_input_1_Stream_7;
                tscc_proc_1_input_2_VarSet_8 = next_value_of_tscc_proc_1_input_2_VarSet_8;
                tscc_proc_1_input_3_Indent_9 = next_value_of_tscc_proc_1_input_3_Indent_9;
                tscc_proc_1_input_4_Goal_10 = next_value_of_tscc_proc_1_input_4_Goal_10;
                goto top_of_proc_1;
              }
              else
              {
                MR_Integer Indent1_402;

                switch (QuantType_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "all");
                    break;
                  case (MR_Integer) 0:
                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "some");
                    break;
                }
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
                switch (QuantVarsKind_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, Vars_22, Stream_7);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__mercury_to_mercury__mercury_output_state_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, Vars_22, Stream_7);
                    break;
                }
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
                Indent1_402 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_402, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_402, SubGoal_23);
                parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Integer Indent1_417;
              MR_Word SubGoal_418 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));

              switch (Purity_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "promise_impure (");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "promise_pure (");
                  break;
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "promise_semipure (");
                  break;
              }
              Indent1_417 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_417, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_417, SubGoal_418);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word StateVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word Vars_405 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_406 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_405;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_27;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_28;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_29;
              MR_Word next_value_of_tscc_proc_2_input_8_Goal_19 = SubGoal_406;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Stream_12 = next_value_of_tscc_proc_2_input_1_Stream_12;
              tscc_proc_2_input_2_VarSet_13 = next_value_of_tscc_proc_2_input_2_VarSet_13;
              tscc_proc_2_input_3_Indent_14 = next_value_of_tscc_proc_2_input_3_Indent_14;
              tscc_proc_2_input_4_Vars_15 = next_value_of_tscc_proc_2_input_4_Vars_15;
              tscc_proc_2_input_5_StateVars_16 = next_value_of_tscc_proc_2_input_5_StateVars_16;
              tscc_proc_2_input_6_DotSVars_17 = next_value_of_tscc_proc_2_input_6_DotSVars_17;
              tscc_proc_2_input_7_ColonSVars_18 = next_value_of_tscc_proc_2_input_7_ColonSVars_18;
              tscc_proc_2_input_8_Goal_19 = next_value_of_tscc_proc_2_input_8_Goal_19;
              tscc_proc_2_input_9_Keyword_20 = (MR_String) "promise_equivalent_solutions";
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_407 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_408 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_409 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_410 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_411 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_407;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_409;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_410;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_411;
              MR_Word next_value_of_tscc_proc_2_input_8_Goal_19 = SubGoal_408;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Stream_12 = next_value_of_tscc_proc_2_input_1_Stream_12;
              tscc_proc_2_input_2_VarSet_13 = next_value_of_tscc_proc_2_input_2_VarSet_13;
              tscc_proc_2_input_3_Indent_14 = next_value_of_tscc_proc_2_input_3_Indent_14;
              tscc_proc_2_input_4_Vars_15 = next_value_of_tscc_proc_2_input_4_Vars_15;
              tscc_proc_2_input_5_StateVars_16 = next_value_of_tscc_proc_2_input_5_StateVars_16;
              tscc_proc_2_input_6_DotSVars_17 = next_value_of_tscc_proc_2_input_6_DotSVars_17;
              tscc_proc_2_input_7_ColonSVars_18 = next_value_of_tscc_proc_2_input_7_ColonSVars_18;
              tscc_proc_2_input_8_Goal_19 = next_value_of_tscc_proc_2_input_8_Goal_19;
              tscc_proc_2_input_9_Keyword_20 = (MR_String) "promise_equivalent_solution_sets";
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_412 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_413 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_414 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_415 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_416 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_412;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_414;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_415;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_416;
              MR_Word next_value_of_tscc_proc_2_input_8_Goal_19 = SubGoal_413;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Stream_12 = next_value_of_tscc_proc_2_input_1_Stream_12;
              tscc_proc_2_input_2_VarSet_13 = next_value_of_tscc_proc_2_input_2_VarSet_13;
              tscc_proc_2_input_3_Indent_14 = next_value_of_tscc_proc_2_input_3_Indent_14;
              tscc_proc_2_input_4_Vars_15 = next_value_of_tscc_proc_2_input_4_Vars_15;
              tscc_proc_2_input_5_StateVars_16 = next_value_of_tscc_proc_2_input_5_StateVars_16;
              tscc_proc_2_input_6_DotSVars_17 = next_value_of_tscc_proc_2_input_6_DotSVars_17;
              tscc_proc_2_input_7_ColonSVars_18 = next_value_of_tscc_proc_2_input_7_ColonSVars_18;
              tscc_proc_2_input_8_Goal_19 = next_value_of_tscc_proc_2_input_8_Goal_19;
              tscc_proc_2_input_9_Keyword_20 = (MR_String) "arbitrary";
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Integer Indent1_419;
              MR_Word SubGoal_420 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));

              switch (Detism_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_cc_multi");
                  break;
                case (MR_Integer) 5:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_cc_nondet");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_det");
                  break;
                case (MR_Integer) 6:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_erroneous");
                  break;
                case (MR_Integer) 7:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_failure");
                  break;
                case (MR_Integer) 2:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_multi");
                  break;
                case (MR_Integer) 3:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_nondet");
                  break;
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_semidet");
                  break;
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " (");
              Indent1_419 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_419, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_419, SubGoal_420);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Integer Indent1_421;
              MR_Word SubGoal_422 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_complete_switch [");
              parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_6_p_0(Stream_7, VarSet_8, (MR_Integer) 0, Var_37);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_421 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_421, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_421, SubGoal_422);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Indent1_423;
              MR_Word SubGoal_424 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word Detism_425 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Var_426 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));

              switch (Detism_425) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_cc_multi");
                  break;
                case (MR_Integer) 5:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_cc_nondet");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_det");
                  break;
                case (MR_Integer) 6:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_erroneous");
                  break;
                case (MR_Integer) 7:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_failure");
                  break;
                case (MR_Integer) 2:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_multi");
                  break;
                case (MR_Integer) 3:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_nondet");
                  break;
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_switch_arms_semidet");
                  break;
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) " [");
              parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_6_p_0(Stream_7, VarSet_8, (MR_Integer) 0, Var_426);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_423 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_423, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_423, SubGoal_424);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_427;
              MR_Word SubGoal_428 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "disable_warnings [");
              parse_tree__parse_tree_out_clause__write_goal_warnings_5_p_0(Stream_7, HeadWarning_40, TailWarnings_41);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_427 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_427, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_427, SubGoal_428);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word MaybeCompileTime_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word MaybeRunTime_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word MutableVars_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_NeedComma_197_197;
              MR_Word STATE_VARIABLE_NeedComma_201_201;
              MR_Word STATE_VARIABLE_NeedComma_209_209;
              MR_Word Var_210;
              MR_Integer Var_215;
              MR_Integer Var_218;
              MR_Word SubGoal_430 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Box conv3_Var_63;
              MR_Box conv2_STATE_VARIABLE_IO_211_211;

              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "trace [");
              if ((MaybeCompileTime_55 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_197_197 = (MR_Integer) 0;
              else
              {
                MR_Word CompileTime_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompileTime_55, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(Stream_7, CompileTime_60);
                STATE_VARIABLE_NeedComma_197_197 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_56 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_201_201 = STATE_VARIABLE_NeedComma_197_197;
              else
              {
                MR_Word RunTime_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRunTime_56, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_4_p_0(Stream_7, STATE_VARIABLE_NeedComma_197_197);
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(Stream_7, RunTime_61);
                STATE_VARIABLE_NeedComma_201_201 = (MR_Integer) 1;
              }
              if ((MaybeIO_57 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_209_209 = STATE_VARIABLE_NeedComma_201_201;
              else
              {
                MR_Word IOStateVar_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_57, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_4_p_0(Stream_7, STATE_VARIABLE_NeedComma_201_201);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "io(!");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IOStateVar_62, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                STATE_VARIABLE_NeedComma_209_209 = (MR_Integer) 1;
              }
              {
                Var_210 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_210, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_210, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_210, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_210, 3) = ((MR_Box) (Stream_7));
                MR_hl_field(MR_mktag(0), Var_210, 4) = ((MR_Box) (VarSet_8));
                MR_hl_field(MR_mktag(0), Var_210, 5) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_210, MutableVars_58, ((MR_Box) (STATE_VARIABLE_NeedComma_209_209)), &conv3_Var_63, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_211_211);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
              Var_215 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Var_215, Stream_7);
              Var_218 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Var_218, SubGoal_430);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word Inner_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word MainGoal_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word OrElseGoals_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Word Var_252;
              MR_Integer Indent1_429;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "atomic [outer(");
              if (((MR_tag((MR_Word) Outer_43)) == (MR_Integer) 0))
              {
                MR_Word OVar_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_43, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "!");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OVar_48, Stream_7);
              }
              else
              {
                MR_Word OuterDI_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer_43, (MR_Integer) 0))));
                MR_Word OuterUO_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer_43, (MR_Integer) 1))));

                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OuterDI_49, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OuterUO_50, Stream_7);
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "), inner(");
              if (((MR_tag((MR_Word) Inner_44)) == (MR_Integer) 0))
              {
                MR_Word IVar_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_44, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "!");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IVar_51, Stream_7);
              }
              else
              {
                MR_Word InnerDI_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner_44, (MR_Integer) 0))));
                MR_Word InnerUO_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner_44, (MR_Integer) 1))));

                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, InnerDI_52, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, InnerUO_53, Stream_7);
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")] (");
              Indent1_429 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_429, Stream_7);
              {
                Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_252, 0) = ((MR_Box) (MainGoal_46));
                MR_hl_field(MR_mktag(1), Var_252, 1) = ((MR_Box) (OrElseGoals_47));
              }
              parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_6_p_0(Stream_7, VarSet_8, Indent1_429, Var_252);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Then_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 4))));
              MR_Word MaybeElse_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 5))));
              MR_Word Catches_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 7))));
              MR_Word Var_177;
              MR_Integer Indent1_433;
              MR_Word SubGoal_434 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_435 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Box conv4_STATE_VARIABLE_IO_178_178;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(try [");
              if (!((MaybeIO_435 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word IOStateVar_431 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_435, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "io(!");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IOStateVar_431, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_433 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_433, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_433, SubGoal_434);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "then");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_433, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_433, Then_65);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              if (!((MaybeElse_66 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Else_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_66, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "else");
                parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_433, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_433, Else_69);
              }
              {
                Var_177 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_177, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_177, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_177, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_177, 3) = ((MR_Box) (Stream_7));
                MR_hl_field(MR_mktag(0), Var_177, 4) = ((MR_Box) (VarSet_8));
                MR_hl_field(MR_mktag(0), Var_177, 5) = ((MR_Box) (Indent_9));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_177, Catches_67, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_178_178);
              if (!((MaybeCatchAny_68 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word CatchAnyVar_70;
                MR_Word CatchAnyGoal_71;
                MR_Word Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAny_68, (MR_Integer) 0))));

                CatchAnyVar_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_179, (MR_Integer) 0))));
                CatchAnyGoal_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_179, (MR_Integer) 1))));
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "catch_any ");
                parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, CatchAnyVar_70, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ->");
                parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_433, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_433, CatchAnyGoal_71);
              }
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_17 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_17, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_17, SubGoalA_15);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "=>");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_17, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_17, SubGoalB_16);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalA_399 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_400 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_401 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_401, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_401, SubGoalA_399);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "<=>");
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_401, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_401, SubGoalB_400);
              parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Name_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
              MR_Word Terms_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
              MR_Word Var_99;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "event ");
              {
                Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Name_79));
              }
              parse_tree__parse_tree_out_clause__mercury_output_call_6_p_0(Stream_7, VarSet_8, Var_99, Terms_80);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Stream_12 = tscc_proc_2_input_1_Stream_12;
    MR_Word VarSet_13 = tscc_proc_2_input_2_VarSet_13;
    MR_Integer Indent_14 = tscc_proc_2_input_3_Indent_14;
    MR_Word Vars_15 = tscc_proc_2_input_4_Vars_15;
    MR_Word StateVars_16 = tscc_proc_2_input_5_StateVars_16;
    MR_Word DotSVars_17 = tscc_proc_2_input_6_DotSVars_17;
    MR_Word ColonSVars_18 = tscc_proc_2_input_7_ColonSVars_18;
    MR_Word Goal_19 = tscc_proc_2_input_8_Goal_19;
    MR_String Keyword_20 = tscc_proc_2_input_9_Keyword_20;
    MR_bool succeeded = (Vars_15 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (StateVars_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (DotSVars_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ColonSVars_18 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_1_input_1_Stream_7 = Stream_12;
      MR_Word next_value_of_tscc_proc_1_input_2_VarSet_8 = VarSet_13;
      MR_Integer next_value_of_tscc_proc_1_input_3_Indent_9 = Indent_14;
      MR_Word next_value_of_tscc_proc_1_input_4_Goal_10 = Goal_19;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_Stream_7 = next_value_of_tscc_proc_1_input_1_Stream_7;
      tscc_proc_1_input_2_VarSet_8 = next_value_of_tscc_proc_1_input_2_VarSet_8;
      tscc_proc_1_input_3_Indent_9 = next_value_of_tscc_proc_1_input_3_Indent_9;
      tscc_proc_1_input_4_Goal_10 = next_value_of_tscc_proc_1_input_4_Goal_10;
      goto top_of_proc_1;
    }
    else
    {
      MR_Integer Indent1_40;

      mercury__io__write_string_4_p_0(Stream_12, Keyword_20);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) " [");
      parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, Vars_15, Stream_12);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
      parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_7_p_0(Stream_12, VarSet_13, (MR_Integer) 0, (MR_String) "!", StateVars_16);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
      parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_7_p_0(Stream_12, VarSet_13, (MR_Integer) 0, (MR_String) "!.", DotSVars_17);
      succeeded = (Vars_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (StateVars_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (DotSVars_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        succeeded = (ColonSVars_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
      parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_7_p_0(Stream_12, VarSet_13, (MR_Integer) 0, (MR_String) "!:", ColonSVars_18);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "] (");
      Indent1_40 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
      parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_40, Stream_12);
      parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_12, VarSet_13, Indent1_40, Goal_19);
      parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_14, Stream_12);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")");
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Goals_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Goals_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadGoal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_10, (MR_Integer) 0))));
      MR_Word TailGoals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_10, (MR_Integer) 1))));

      if ((TailGoals_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

        parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Var_26, HeadGoal_12);
      }
      else
      {
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        MR_Word next_value_of_Goals_10;

        parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Var_18, HeadGoal_12);
        parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "orelse");
        parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
        // direct tailcall eliminated
        ;
        next_value_of_Goals_10 = TailGoals_13;
        Goals_10 = next_value_of_Goals_10;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Goal_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Indent1_12;
    MR_Word SubGoalA_14;
    MR_Word SubGoalB_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
    Indent1_12 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_12, Stream_7);
    succeeded = ((((MR_tag((MR_Word) Goal_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      SubGoalA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
      SubGoalB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
      {
        MR_Word next_value_of_Goal_10;

        parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_12, SubGoalA_14);
        // direct tailcall eliminated
        ;
        next_value_of_Goal_10 = SubGoalB_15;
        Goal_10 = next_value_of_Goal_10;
        continue;
      }
    }
    else
      parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_12, Goal_10);
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Goal_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Indent1_12;
    MR_Word SubGoalA_14;
    MR_Word SubGoalB_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";");
    Indent1_12 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_12, Stream_7);
    succeeded = ((((MR_tag((MR_Word) Goal_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      SubGoalA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 2))));
      SubGoalB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 3))));
      {
        MR_Word next_value_of_Goal_10;

        parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_12, SubGoalA_14);
        // direct tailcall eliminated
        ;
        next_value_of_Goal_10 = SubGoalB_15;
        Goal_10 = next_value_of_Goal_10;
        continue;
      }
    }
    else
      parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_12, Goal_10);
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Goal_10)
{
  switch (MR_tag((MR_Word) Goal_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent_9, Goal_10);
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Indent1_107;

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
        Indent1_107 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_107, Stream_7);
        parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_107, Goal_10);
        parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 17:
        case (MR_Integer) 18:
        case (MR_Integer) 19:
        case (MR_Integer) 20:
          parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent_9, Goal_10);
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
          {
            MR_Integer Indent1_107;

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
            Indent1_107 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
            parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent1_107, Stream_7);
            parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_107, Goal_10);
            parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_9, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(
  MR_Word Stream_6,
  MR_Word TraceExpr_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Base_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceExpr_8, (MR_Integer) 0))));

          parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_4_p_0(Base_10, Stream_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TraceExpr_8, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "not(");
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(Stream_6, TraceExprA_11);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_41) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_TraceExpr_8;

                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(Stream_6, Var_40);
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) " and ");
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_39;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(Stream_6, Var_40);
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) ") or (");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(Stream_6, Var_39);
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_4_p_0(
  MR_Word CompileTime_5,
  MR_Word Stream_6)
{
  switch (MR_tag((MR_Word) CompileTime_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String FlagName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), CompileTime_5, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "flag(");
        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_4[0]), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_4[1]), Stream_6, FlagName_8);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Grade_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), CompileTime_5, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String GradeName_10;

        parse_tree__prog_data__parse_trace_grade_name_2_p_1(&GradeName_10, Grade_9);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "grade(");
        mercury__io__write_string_4_p_0(Stream_6, GradeName_10);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Level_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), CompileTime_5, (MR_Integer) 0))) & (MR_Integer) 1);

        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "tracelevel(");
        switch (Level_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) "deep");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) "shallow");
            break;
        }
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(
  MR_Word Stream_6,
  MR_Word TraceExpr_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Base_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceExpr_8, (MR_Integer) 0))));

          parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_4_p_0(Base_10, Stream_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TraceExpr_8, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "not(");
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(Stream_6, TraceExprA_11);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_41) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_TraceExpr_8;

                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(Stream_6, Var_40);
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) " and ");
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_8 = Var_39;
                TraceExpr_8 = next_value_of_TraceExpr_8;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(Stream_6, Var_40);
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) ") or (");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(Stream_6, Var_39);
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
              }
              break;
          }
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_6)
{
  MR_String EnvVarName_5 = (MR_String) (HeadVar__1_1);

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "env(");
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_4[0]), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_4[1]), Stream_6, EnvVarName_5);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_7_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word VarNamePrint_3,
  MR_String BangPrefix_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word SVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word SVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Box conv0_STATE_VARIABLE_IO_27_27;

      mercury__io__write_string_4_p_0(Stream_1, BangPrefix_4);
      parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), VarSet_2, VarNamePrint_3, SVar_19, ((MR_Box) (Stream_1)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_27_27);
      if (!((SVars_20 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word SVar_44;
        MR_Word SVars_45;
        MR_Box conv1_STATE_VARIABLE_IO_27_52;

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
        SVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SVars_20, (MR_Integer) 0))));
        SVars_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SVars_20, (MR_Integer) 1))));
        mercury__io__write_string_4_p_0(Stream_1, BangPrefix_4);
        parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]), VarSet_2, VarNamePrint_3, SVar_44, ((MR_Box) (Stream_1)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27_52);
        if (!((SVars_45 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word next_value_of_HeadVar__5_5;

          mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = SVars_45;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_some_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word Vars_9,
  MR_Word StateVars_10)
{
  MR_bool succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (StateVars_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " some [");
    parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0(TypeInfo_for_T_32, VarSet_8, (MR_Integer) 0, Vars_9, Stream_7);
    succeeded = (Vars_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (StateVars_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      parse_tree__mercury_to_mercury__mercury_output_state_vars_6_p_0(TypeInfo_for_T_32, VarSet_8, (MR_Integer) 0, StateVars_10, Stream_7);
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_call_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word SymName_9,
  MR_Word Term_10)
{
  if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 0))));
    MR_String PredName_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 1))));
    MR_Word Context0_14;
    MR_Word SubTerm_15;
    MR_Word Var_26;

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_5_p_0((MR_Integer) 0, ModuleName_12, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
    mercury__term__context_init_1_p_0(&Context0_14);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (PredName_13));
    }
    {
      SubTerm_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubTerm_15, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), SubTerm_15, 1) = ((MR_Box) (Term_10));
      MR_hl_field(MR_mktag(0), SubTerm_15, 2) = ((MR_Box) (Context0_14));
    }
    parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, (MR_Integer) 0, SubTerm_15, Stream_7);
  }
  else
  {
    MR_Word Var_18;
    MR_String PredName_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_9, (MR_Integer) 0))));
    MR_Word Context0_31;
    MR_Word SubTerm_32;

    mercury__term__context_init_1_p_0(&Context0_31);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (PredName_30));
    }
    {
      SubTerm_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubTerm_32, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), SubTerm_32, 1) = ((MR_Box) (Term_10));
      MR_hl_field(MR_mktag(0), SubTerm_32, 2) = ((MR_Box) (Context0_31));
    }
    parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, (MR_Integer) 0, SubTerm_32, Stream_7);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word PODVar_10)
{
  if (((MR_tag((MR_Word) PODVar_10)) == (MR_Integer) 1))
  {
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PODVar_10, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "!.");
    parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, VarNamePrint_9, Var_19, Stream_7);
  }
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PODVar_10, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, VarNamePrint_9, Var_12, Stream_7);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__write_goal_warnings_5_p_0(
  MR_Word Stream_6,
  MR_Word HeadWarning_7,
  MR_Word TailWarnings_8)
{
  while (MR_TRUE)
  {
    MR_String Var_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_14 = parse_tree__prog_out__goal_warning_to_string_1_f_0(HeadWarning_7);
    mercury__io__write_string_4_p_0(Stream_6, Var_14);
    if (!((TailWarnings_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadTailWarning_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailWarnings_8, (MR_Integer) 0))));
      MR_Word TailTailWarnings_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailWarnings_8, (MR_Integer) 1))));
      MR_Word next_value_of_HeadWarning_7;
      MR_Word next_value_of_TailWarnings_8;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_HeadWarning_7 = HeadTailWarning_10;
      next_value_of_TailWarnings_8 = TailTailWarnings_11;
      HeadWarning_7 = next_value_of_HeadWarning_7;
      TailWarnings_8 = next_value_of_TailWarnings_8;
      continue;
    }
    break;
  }
}

void mercury__parse_tree__parse_tree_out_clause__init(void)
{
}

void mercury__parse_tree__parse_tree_out_clause__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_clause__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_clause__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_clause.
