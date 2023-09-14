/*
** Automatically generated from `parse_tree_out_clause.m'
** by the Mercury compiler,
** version rotd-2023-09-14
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




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
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Goal_10);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Integer Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_conj_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Integer Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4);

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
  MR_Word TypeInfo_for_T_31,
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

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_3[2][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_4[1][5];

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

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_5[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "there_was_a_syntax_error")) },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_6[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_6_p_0(
  MR_Word Stream_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word HeadVar__4_4)
{
  MR_Word Pattern_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Integer Var_21;
  MR_Integer Var_24;

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "catch ");
  parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, Pattern_10, Stream_7);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ->");
  Var_21 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Var_21, Stream_7);
  Var_24 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Var_24, Goal_11);
  parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
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
  MR_String MutableName_27;
  MR_Word StateVar_28;
  MR_String StateVarStr_29;

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
  MutableName_27 = ((MR_String) ((MR_hl_field(0, MutableVar_12, (MR_Integer) 0))));
  StateVar_28 = ((MR_Word) ((MR_hl_field(0, MutableVar_12, (MR_Integer) 1))));
  StateVarStr_29 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_11, StateVar_28);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "state(");
  mercury__io__write_string_4_p_0(Stream_9, MutableName_27);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_9, StateVarStr_29);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_6)
{
  MR_String EnvVarName_5 = (MR_String) (HeadVar__1_1);
  MR_Box conv0_STATE_VARIABLE_IO_12_12;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "env(");
  mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_4[0]), ((MR_Box) (Stream_6)), EnvVarName_5, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_12);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
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
          MR_Box Base_10 = (MR_hl_field(0, TraceExpr_8, (MR_Integer) 0));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, PrintBase_7, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_14;

          func_0(((MR_Box) (PrintBase_7)), Base_10, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "not(");
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0(TypeInfo_for_T_38, Stream_6, PrintBase_7, TraceExprA_11);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

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
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_14 = ((MR_Word) ((MR_hl_field(0, ItemClause_7, (MR_Integer) 4))));
  MR_Word BodyGoal_17;

  if (((MR_tag((MR_Word) MaybeBodyGoal_14)) == (MR_Integer) 0))
  {
    MR_Word Var_28;

    Var_28 = mercury__term_context__dummy_context_0_f_0();
    {
      BodyGoal_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BodyGoal_17, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, BodyGoal_17, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_5[0]));
      MR_hl_field(1, BodyGoal_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, BodyGoal_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
    BodyGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_14, (MR_Integer) 0))));
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTerms_18;
        MR_Word ResultTerm_19;
        MR_Box conv0_ResultTerm_19;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_12, &FuncArgTerms_18, &conv0_ResultTerm_19);
        ResultTerm_19 = ((MR_Word) (conv0_ResultTerm_19));
        parse_tree__parse_tree_out_sym_name__mercury_output_sym_name_4_p_0(MethodName_6, Stream_8);
        if (!((FuncArgTerms_18 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArg_31 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_18, (MR_Integer) 0))));
          MR_Word TailArgs_32 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_18, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_25_38;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), VarSet_13, (MR_Integer) 0, HeadArg_31, TailArgs_32, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_38);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        }
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          MR_Box conv2_STATE_VARIABLE_IO_21;

          parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), VarSet_13, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_19, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_21);
        }
        else
        {
          MR_Box conv3_STATE_VARIABLE_IO_34_46;

          parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), VarSet_13, (MR_Integer) 0, ResultTerm_19, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_34_46);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " :-\n\t");
          parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_8, VarSet_13, (MR_Integer) 1, BodyGoal_17);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        parse_tree__parse_tree_out_sym_name__mercury_output_sym_name_4_p_0(MethodName_6, Stream_8);
        if (!((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArg_56 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));
          MR_Word TailArgs_57 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
          MR_Box conv4_STATE_VARIABLE_IO_23_63;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), VarSet_13, (MR_Integer) 0, HeadArg_56, TailArgs_57, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_23_63);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        }
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " :-\n\t");
          parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_8, VarSet_13, (MR_Integer) 1, BodyGoal_17);
        }
      }
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
  MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word PredName0_11 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 1))));
  MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 2))));
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 3))));
  MR_Word MaybeBodyGoal_14 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 4))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, ItemClause_8, (MR_Integer) 5))));
  MR_Word BodyGoal_17;
  MR_Word PredName_18;

  if (((MR_tag((MR_Word) MaybeBodyGoal_14)) == (MR_Integer) 0))
  {
    MR_Word Var_33;

    Var_33 = mercury__term_context__dummy_context_0_f_0();
    {
      BodyGoal_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BodyGoal_17, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, BodyGoal_17, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_5[0]));
      MR_hl_field(1, BodyGoal_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, BodyGoal_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
    BodyGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeBodyGoal_14, (MR_Integer) 0))));
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
        parse_tree__parse_tree_out_sym_name__mercury_output_sym_name_4_p_0(PredName_18, Stream_7);
        if (!((FuncArgTerms_19 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArg_36 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_19, (MR_Integer) 0))));
          MR_Word TailArgs_37 = ((MR_Word) ((MR_hl_field(1, FuncArgTerms_19, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_25_43;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), VarSet_13, (MR_Integer) 0, HeadArg_36, TailArgs_37, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_43);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          MR_Box conv2_STATE_VARIABLE_IO_24_24;

          parse_tree__parse_tree_out_term__mercury_format_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), VarSet_13, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_20, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_24_24);
        }
        else
        {
          MR_Box conv3_STATE_VARIABLE_IO_34_51;

          parse_tree__parse_tree_out_term__mercury_format_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), VarSet_13, (MR_Integer) 0, ResultTerm_20, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_34_51);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " :-\n\t");
          parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_13, (MR_Integer) 1, BodyGoal_17);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        parse_tree__parse_tree_out_sym_name__mercury_output_sym_name_4_p_0(PredName_18, Stream_7);
        if (!((ArgTerms_12 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word HeadArg_61 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 0))));
          MR_Word TailArgs_62 = ((MR_Word) ((MR_hl_field(1, ArgTerms_12, (MR_Integer) 1))));
          MR_Box conv4_STATE_VARIABLE_IO_23_68;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
          parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), VarSet_13, (MR_Integer) 0, HeadArg_61, TailArgs_62, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_23_68);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
        succeeded = ((((MR_tag((MR_Word) BodyGoal_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BodyGoal_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " :-\n\t");
          parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_13, (MR_Integer) 1, BodyGoal_17);
        }
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_clause__mercury_output_catch_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
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

  parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NeedComma_16);
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
          MR_Word TermA_88 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
          MR_Word TermB_89 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
          MR_Word Purity_449 = ((MR_Unsigned) ((MR_hl_field(0, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Box conv5_STATE_VARIABLE_IO_389_389;

          parse_tree__parse_tree_out_info__add_purity_prefix_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), Purity_449, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_389_389);
          parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, TermA_88, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
          parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, (MR_Integer) 0, TermB_89, Stream_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Purity_446 = ((MR_Unsigned) ((MR_hl_field(1, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word Name_447 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 1))));
          MR_Word Terms_448 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 2))));
          MR_Box conv0_STATE_VARIABLE_IO_387_387;

          parse_tree__parse_tree_out_info__add_purity_prefix_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), Purity_446, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_387_387);
          parse_tree__parse_tree_out_clause__mercury_output_call_6_p_0(Stream_7, VarSet_8, Name_447, Terms_448);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalsB_76 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 2))));
          MR_Word SubGoalA_442 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 1))));

          parse_tree__parse_tree_out_clause__mercury_output_conj_7_p_0(Stream_7, VarSet_8, Indent_9, SubGoalA_442, SubGoalsB_76);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_73 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Integer Indent1_435;
              MR_Word Vars_436 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word StateVars_437 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Then_438 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Else_439 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(if");
              parse_tree__parse_tree_out_clause__mercury_output_some_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Stream_7, VarSet_8, Vars_436, StateVars_437);
              Indent1_435 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_435, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_435, Cond_73);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "then");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_435, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_435, Then_438);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "else");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_435, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_435, Else_439);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Disjunct1_79 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Disjunct2_80 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Disjuncts_81 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word NonFirstDisjuncts_82;
              MR_Integer Indent1_445;

              {
                NonFirstDisjuncts_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NonFirstDisjuncts_82, 0) = ((MR_Box) (Disjunct2_80));
                MR_hl_field(1, NonFirstDisjuncts_82, 1) = ((MR_Box) (Disjuncts_81));
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              Indent1_445 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_445, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_445, Disjunct1_79);
              parse_tree__parse_tree_out_clause__mercury_output_disj_6_p_0(Stream_7, VarSet_8, Indent_9, NonFirstDisjuncts_82);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Indent1_440;
              MR_Word SubGoal_441 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\\+ (");
              Indent1_440 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_440, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_440, SubGoal_441);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "fail");
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_443 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalsB_444 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(\n");
              parse_tree__parse_tree_out_clause__mercury_output_par_conj_7_p_0(Stream_7, VarSet_8, Indent_9, SubGoalA_443, SubGoalsB_444);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_19 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_20 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

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
                MR_Integer Indent1_400;

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
                    parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, Vars_22, Stream_7);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__parse_tree_out_misc__mercury_output_state_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, Vars_22, Stream_7);
                    break;
                }
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
                Indent1_400 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_400, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_400, SubGoal_23);
                parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Integer Indent1_415;
              MR_Word SubGoal_416 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

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
              Indent1_415 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_415, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_415, SubGoal_416);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word StateVars_27 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_28 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_29 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Vars_403 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_404 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_403;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_27;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_28;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_29;
              MR_Word next_value_of_tscc_proc_2_input_8_Goal_19 = SubGoal_404;

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
              MR_Word Vars_405 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_406 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_407 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_408 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_409 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_405;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_407;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_408;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_409;
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
              tscc_proc_2_input_9_Keyword_20 = (MR_String) "promise_equivalent_solution_sets";
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_410 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_411 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_412 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_413 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_414 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_410;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_412;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_413;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_414;
              MR_Word next_value_of_tscc_proc_2_input_8_Goal_19 = SubGoal_411;

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
              MR_Word Detism_35 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Integer Indent1_417;
              MR_Word SubGoal_418 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

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
              Indent1_417 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_417, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_417, SubGoal_418);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Integer Indent1_419;
              MR_Word SubGoal_420 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_complete_switch [");
              parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_6_p_0(Stream_7, VarSet_8, (MR_Integer) 0, Var_37);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_419 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_419, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_419, SubGoal_420);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Indent1_421;
              MR_Word SubGoal_422 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word Detism_423 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Var_424 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));

              switch (Detism_423) {
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
              parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_6_p_0(Stream_7, VarSet_8, (MR_Integer) 0, Var_424);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_421 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_421, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_421, SubGoal_422);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_40 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_41 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_425;
              MR_Word SubGoal_426 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "disable_warnings [");
              parse_tree__parse_tree_out_clause__write_goal_warnings_5_p_0(Stream_7, HeadWarning_40, TailWarnings_41);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_425 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_425, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_425, SubGoal_426);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word MaybeCompileTime_55 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word MaybeRunTime_56 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_57 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MutableVars_58 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_NeedComma_273_273;
              MR_Word STATE_VARIABLE_NeedComma_277_277;
              MR_Word STATE_VARIABLE_NeedComma_285_285;
              MR_Word Var_286;
              MR_Integer Var_291;
              MR_Integer Var_294;
              MR_Word SubGoal_428 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv3_Var_63;
              MR_Box conv2_STATE_VARIABLE_IO_287_287;

              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "trace [");
              if ((MaybeCompileTime_55 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_273_273 = (MR_Integer) 0;
              else
              {
                MR_Word CompileTime_60 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_55, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(Stream_7, CompileTime_60);
                STATE_VARIABLE_NeedComma_273_273 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_56 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_277_277 = STATE_VARIABLE_NeedComma_273_273;
              else
              {
                MR_Word RunTime_61 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_56, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_4_p_0(Stream_7, STATE_VARIABLE_NeedComma_273_273);
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(Stream_7, RunTime_61);
                STATE_VARIABLE_NeedComma_277_277 = (MR_Integer) 1;
              }
              if ((MaybeIO_57 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_285_285 = STATE_VARIABLE_NeedComma_277_277;
              else
              {
                MR_Word IOStateVar_62 = ((MR_Word) ((MR_hl_field(1, MaybeIO_57, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_4_p_0(Stream_7, STATE_VARIABLE_NeedComma_277_277);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "io(!");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IOStateVar_62, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                STATE_VARIABLE_NeedComma_285_285 = (MR_Integer) 1;
              }
              {
                Var_286 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_286, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_6[0]));
                MR_hl_field(0, Var_286, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_1));
                MR_hl_field(0, Var_286, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_286, 3) = ((MR_Box) (Stream_7));
                MR_hl_field(0, Var_286, 4) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_286, 5) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_286, MutableVars_58, ((MR_Box) (STATE_VARIABLE_NeedComma_285_285)), &conv3_Var_63, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_287_287);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
              Var_291 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Var_291, Stream_7);
              Var_294 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Var_294, SubGoal_428);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer_43 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Inner_44 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MainGoal_46 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word OrElseGoals_47 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word Var_262;
              MR_Integer Indent1_427;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "atomic [outer(");
              if (((MR_tag((MR_Word) Outer_43)) == (MR_Integer) 0))
              {
                MR_Word OVar_48 = ((MR_Word) ((MR_hl_field(0, Outer_43, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "!");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OVar_48, Stream_7);
              }
              else
              {
                MR_Word OuterDI_49 = ((MR_Word) ((MR_hl_field(1, Outer_43, (MR_Integer) 0))));
                MR_Word OuterUO_50 = ((MR_Word) ((MR_hl_field(1, Outer_43, (MR_Integer) 1))));

                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OuterDI_49, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OuterUO_50, Stream_7);
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "), inner(");
              if (((MR_tag((MR_Word) Inner_44)) == (MR_Integer) 0))
              {
                MR_Word IVar_51 = ((MR_Word) ((MR_hl_field(0, Inner_44, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "!");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IVar_51, Stream_7);
              }
              else
              {
                MR_Word InnerDI_52 = ((MR_Word) ((MR_hl_field(1, Inner_44, (MR_Integer) 0))));
                MR_Word InnerUO_53 = ((MR_Word) ((MR_hl_field(1, Inner_44, (MR_Integer) 1))));

                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, InnerDI_52, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, InnerUO_53, Stream_7);
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")] (");
              Indent1_427 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_427, Stream_7);
              {
                Var_262 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_262, 0) = ((MR_Box) (MainGoal_46));
                MR_hl_field(1, Var_262, 1) = ((MR_Box) (OrElseGoals_47));
              }
              parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_6_p_0(Stream_7, VarSet_8, Indent1_427, Var_262);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Then_65 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MaybeElse_66 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Catches_67 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_68 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 7))));
              MR_Word Var_326;
              MR_Integer Indent1_431;
              MR_Word SubGoal_432 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_433 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv4_STATE_VARIABLE_IO_327_327;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(try [");
              if (!((MaybeIO_433 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word IOStateVar_429 = ((MR_Word) ((MR_hl_field(1, MaybeIO_433, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "io(!");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IOStateVar_429, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_431 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_431, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_431, SubGoal_432);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "then");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_431, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_431, Then_65);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              if (!((MaybeElse_66 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Else_69 = ((MR_Word) ((MR_hl_field(1, MaybeElse_66, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "else");
                parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_431, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_431, Else_69);
              }
              {
                Var_326 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_326, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_7[0]));
                MR_hl_field(0, Var_326, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_2));
                MR_hl_field(0, Var_326, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_326, 3) = ((MR_Box) (Stream_7));
                MR_hl_field(0, Var_326, 4) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_326, 5) = ((MR_Box) (Indent_9));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_326, Catches_67, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_327_327);
              if (!((MaybeCatchAny_68 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word CatchAnyVar_70;
                MR_Word CatchAnyGoal_71;
                MR_Word Var_328 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_68, (MR_Integer) 0))));

                CatchAnyVar_70 = ((MR_Word) ((MR_hl_field(0, Var_328, (MR_Integer) 0))));
                CatchAnyGoal_71 = ((MR_Word) ((MR_hl_field(0, Var_328, (MR_Integer) 1))));
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "catch_any ");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, CatchAnyVar_70, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ->");
                parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_431, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_431, CatchAnyGoal_71);
              }
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_15 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_16 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_17 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_17, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_17, SubGoalA_15);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "=>");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_17, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_17, SubGoalB_16);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalA_397 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_398 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_399 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_399, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_399, SubGoalA_397);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "<=>");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_399, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_399, SubGoalB_398);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Name_84 = ((MR_String) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Terms_85 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Var_385;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "event ");
              {
                Var_385 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_385, 0) = ((MR_Box) (Name_84));
              }
              parse_tree__parse_tree_out_clause__mercury_output_call_6_p_0(Stream_7, VarSet_8, Var_385, Terms_85);
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
      parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, Vars_15, Stream_12);
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
      parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_40, Stream_12);
      parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_12, VarSet_13, Indent1_40, Goal_19);
      parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_14, Stream_12);
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
          MR_Word TermA_88 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
          MR_Word TermB_89 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
          MR_Word Purity_449 = ((MR_Unsigned) ((MR_hl_field(0, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Box conv5_STATE_VARIABLE_IO_389_389;

          parse_tree__parse_tree_out_info__add_purity_prefix_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), Purity_449, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_389_389);
          parse_tree__parse_tree_out_term__mercury_output_term_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, TermA_88, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " = ");
          parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, (MR_Integer) 0, TermB_89, Stream_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Purity_446 = ((MR_Unsigned) ((MR_hl_field(1, Goal_10, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word Name_447 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 1))));
          MR_Word Terms_448 = ((MR_Word) ((MR_hl_field(1, Goal_10, (MR_Integer) 2))));
          MR_Box conv0_STATE_VARIABLE_IO_387_387;

          parse_tree__parse_tree_out_info__add_purity_prefix_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), Purity_446, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_387_387);
          parse_tree__parse_tree_out_clause__mercury_output_call_6_p_0(Stream_7, VarSet_8, Name_447, Terms_448);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalsB_76 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 2))));
          MR_Word SubGoalA_442 = ((MR_Word) ((MR_hl_field(2, Goal_10, (MR_Integer) 1))));

          parse_tree__parse_tree_out_clause__mercury_output_conj_7_p_0(Stream_7, VarSet_8, Indent_9, SubGoalA_442, SubGoalsB_76);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
            break;
          case (MR_Integer) 1:
            {
              MR_Word Cond_73 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Integer Indent1_435;
              MR_Word Vars_436 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word StateVars_437 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Then_438 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Else_439 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(if");
              parse_tree__parse_tree_out_clause__mercury_output_some_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Stream_7, VarSet_8, Vars_436, StateVars_437);
              Indent1_435 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_435, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_435, Cond_73);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "then");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_435, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_435, Then_438);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "else");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_435, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_435, Else_439);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Disjunct1_79 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Disjunct2_80 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Disjuncts_81 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word NonFirstDisjuncts_82;
              MR_Integer Indent1_445;

              {
                NonFirstDisjuncts_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, NonFirstDisjuncts_82, 0) = ((MR_Box) (Disjunct2_80));
                MR_hl_field(1, NonFirstDisjuncts_82, 1) = ((MR_Box) (Disjuncts_81));
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              Indent1_445 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_445, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_445, Disjunct1_79);
              parse_tree__parse_tree_out_clause__mercury_output_disj_6_p_0(Stream_7, VarSet_8, Indent_9, NonFirstDisjuncts_82);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Indent1_440;
              MR_Word SubGoal_441 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\\+ (");
              Indent1_440 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_440, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_440, SubGoal_441);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "fail");
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_443 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalsB_444 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(\n");
              parse_tree__parse_tree_out_clause__mercury_output_par_conj_7_p_0(Stream_7, VarSet_8, Indent_9, SubGoalA_443, SubGoalsB_444);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_19 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_20 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

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
                MR_Integer Indent1_400;

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
                    parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, Vars_22, Stream_7);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__parse_tree_out_misc__mercury_output_state_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, Vars_22, Stream_7);
                    break;
                }
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
                Indent1_400 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_400, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_400, SubGoal_23);
                parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_33 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Integer Indent1_415;
              MR_Word SubGoal_416 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

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
              Indent1_415 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_415, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_415, SubGoal_416);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word StateVars_27 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_28 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_29 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Vars_403 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_404 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_403;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_27;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_28;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_29;
              MR_Word next_value_of_tscc_proc_2_input_8_Goal_19 = SubGoal_404;

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
              MR_Word Vars_405 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_406 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_407 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_408 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_409 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_405;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_407;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_408;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_409;
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
              tscc_proc_2_input_9_Keyword_20 = (MR_String) "promise_equivalent_solution_sets";
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_410 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoal_411 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word StateVars_412 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word DotSVars_413 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word ColonSVars_414 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word next_value_of_tscc_proc_2_input_1_Stream_12 = Stream_7;
              MR_Word next_value_of_tscc_proc_2_input_2_VarSet_13 = VarSet_8;
              MR_Integer next_value_of_tscc_proc_2_input_3_Indent_14 = Indent_9;
              MR_Word next_value_of_tscc_proc_2_input_4_Vars_15 = Vars_410;
              MR_Word next_value_of_tscc_proc_2_input_5_StateVars_16 = StateVars_412;
              MR_Word next_value_of_tscc_proc_2_input_6_DotSVars_17 = DotSVars_413;
              MR_Word next_value_of_tscc_proc_2_input_7_ColonSVars_18 = ColonSVars_414;
              MR_Word next_value_of_tscc_proc_2_input_8_Goal_19 = SubGoal_411;

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
              MR_Word Detism_35 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Integer Indent1_417;
              MR_Word SubGoal_418 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

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
              Indent1_417 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_417, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_417, SubGoal_418);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Integer Indent1_419;
              MR_Word SubGoal_420 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "require_complete_switch [");
              parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_6_p_0(Stream_7, VarSet_8, (MR_Integer) 0, Var_37);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_419 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_419, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_419, SubGoal_420);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Indent1_421;
              MR_Word SubGoal_422 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word Detism_423 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Var_424 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));

              switch (Detism_423) {
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
              parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_6_p_0(Stream_7, VarSet_8, (MR_Integer) 0, Var_424);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_421 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_421, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_421, SubGoal_422);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_40 = ((MR_Unsigned) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_41 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_425;
              MR_Word SubGoal_426 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "disable_warnings [");
              parse_tree__parse_tree_out_clause__write_goal_warnings_5_p_0(Stream_7, HeadWarning_40, TailWarnings_41);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_425 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_425, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_425, SubGoal_426);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word MaybeCompileTime_55 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word MaybeRunTime_56 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_57 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MutableVars_58 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_NeedComma_273_273;
              MR_Word STATE_VARIABLE_NeedComma_277_277;
              MR_Word STATE_VARIABLE_NeedComma_285_285;
              MR_Word Var_286;
              MR_Integer Var_291;
              MR_Integer Var_294;
              MR_Word SubGoal_428 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Box conv3_Var_63;
              MR_Box conv2_STATE_VARIABLE_IO_287_287;

              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "trace [");
              if ((MaybeCompileTime_55 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_273_273 = (MR_Integer) 0;
              else
              {
                MR_Word CompileTime_60 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_55, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(Stream_7, CompileTime_60);
                STATE_VARIABLE_NeedComma_273_273 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_56 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_277_277 = STATE_VARIABLE_NeedComma_273_273;
              else
              {
                MR_Word RunTime_61 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_56, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_4_p_0(Stream_7, STATE_VARIABLE_NeedComma_273_273);
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(Stream_7, RunTime_61);
                STATE_VARIABLE_NeedComma_277_277 = (MR_Integer) 1;
              }
              if ((MaybeIO_57 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_NeedComma_285_285 = STATE_VARIABLE_NeedComma_277_277;
              else
              {
                MR_Word IOStateVar_62 = ((MR_Word) ((MR_hl_field(1, MaybeIO_57, (MR_Integer) 0))));

                parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_4_p_0(Stream_7, STATE_VARIABLE_NeedComma_277_277);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "io(!");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IOStateVar_62, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                STATE_VARIABLE_NeedComma_285_285 = (MR_Integer) 1;
              }
              {
                Var_286 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_286, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_6[0]));
                MR_hl_field(0, Var_286, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_1));
                MR_hl_field(0, Var_286, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_286, 3) = ((MR_Box) (Stream_7));
                MR_hl_field(0, Var_286, 4) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_286, 5) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_286, MutableVars_58, ((MR_Box) (STATE_VARIABLE_NeedComma_285_285)), &conv3_Var_63, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_287_287);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
              Var_291 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Var_291, Stream_7);
              Var_294 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Var_294, SubGoal_428);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer_43 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Inner_44 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MainGoal_46 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word OrElseGoals_47 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word Var_262;
              MR_Integer Indent1_427;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "atomic [outer(");
              if (((MR_tag((MR_Word) Outer_43)) == (MR_Integer) 0))
              {
                MR_Word OVar_48 = ((MR_Word) ((MR_hl_field(0, Outer_43, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "!");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OVar_48, Stream_7);
              }
              else
              {
                MR_Word OuterDI_49 = ((MR_Word) ((MR_hl_field(1, Outer_43, (MR_Integer) 0))));
                MR_Word OuterUO_50 = ((MR_Word) ((MR_hl_field(1, Outer_43, (MR_Integer) 1))));

                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OuterDI_49, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, OuterUO_50, Stream_7);
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "), inner(");
              if (((MR_tag((MR_Word) Inner_44)) == (MR_Integer) 0))
              {
                MR_Word IVar_51 = ((MR_Word) ((MR_hl_field(0, Inner_44, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "!");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IVar_51, Stream_7);
              }
              else
              {
                MR_Word InnerDI_52 = ((MR_Word) ((MR_hl_field(1, Inner_44, (MR_Integer) 0))));
                MR_Word InnerUO_53 = ((MR_Word) ((MR_hl_field(1, Inner_44, (MR_Integer) 1))));

                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, InnerDI_52, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, InnerUO_53, Stream_7);
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")] (");
              Indent1_427 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_427, Stream_7);
              {
                Var_262 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_262, 0) = ((MR_Box) (MainGoal_46));
                MR_hl_field(1, Var_262, 1) = ((MR_Box) (OrElseGoals_47));
              }
              parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_6_p_0(Stream_7, VarSet_8, Indent1_427, Var_262);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Then_65 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 4))));
              MR_Word MaybeElse_66 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 5))));
              MR_Word Catches_67 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_68 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 7))));
              MR_Word Var_326;
              MR_Integer Indent1_431;
              MR_Word SubGoal_432 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word MaybeIO_433 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Box conv4_STATE_VARIABLE_IO_327_327;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(try [");
              if (!((MaybeIO_433 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word IOStateVar_429 = ((MR_Word) ((MR_hl_field(1, MaybeIO_433, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "io(!");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, IOStateVar_429, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              }
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] (");
              Indent1_431 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_431, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_431, SubGoal_432);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "then");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_431, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_431, Then_65);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              if (!((MaybeElse_66 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Else_69 = ((MR_Word) ((MR_hl_field(1, MaybeElse_66, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "else");
                parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_431, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_431, Else_69);
              }
              {
                Var_326 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_326, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_7[0]));
                MR_hl_field(0, Var_326, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0_2));
                MR_hl_field(0, Var_326, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_326, 3) = ((MR_Box) (Stream_7));
                MR_hl_field(0, Var_326, 4) = ((MR_Box) (VarSet_8));
                MR_hl_field(0, Var_326, 5) = ((MR_Box) (Indent_9));
              }
              mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_326, Catches_67, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_327_327);
              if (!((MaybeCatchAny_68 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word CatchAnyVar_70;
                MR_Word CatchAnyGoal_71;
                MR_Word Var_328 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_68, (MR_Integer) 0))));

                CatchAnyVar_70 = ((MR_Word) ((MR_hl_field(0, Var_328, (MR_Integer) 0))));
                CatchAnyGoal_71 = ((MR_Word) ((MR_hl_field(0, Var_328, (MR_Integer) 1))));
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "catch_any ");
                parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, CatchAnyVar_70, Stream_7);
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ->");
                parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_431, Stream_7);
                parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_431, CatchAnyGoal_71);
              }
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_15 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_16 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_17 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_17, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_17, SubGoalA_15);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "=>");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_17, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_17, SubGoalB_16);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalA_397 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word SubGoalB_398 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Integer Indent1_399 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_399, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_399, SubGoalA_397);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "<=>");
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_399, Stream_7);
              parse_tree__parse_tree_out_clause__mercury_output_connected_goal_6_p_0(Stream_7, VarSet_8, Indent1_399, SubGoalB_398);
              parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Name_84 = ((MR_String) ((MR_hl_field(3, Goal_10, (MR_Integer) 2))));
              MR_Word Terms_85 = ((MR_Word) ((MR_hl_field(3, Goal_10, (MR_Integer) 3))));
              MR_Word Var_385;

              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "event ");
              {
                Var_385 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_385, 0) = ((MR_Box) (Name_84));
              }
              parse_tree__parse_tree_out_clause__mercury_output_call_6_p_0(Stream_7, VarSet_8, Var_385, Terms_85);
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
      parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 0, Vars_15, Stream_12);
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
      parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_40, Stream_12);
      parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_12, VarSet_13, Indent1_40, Goal_19);
      parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_14, Stream_12);
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
      MR_Word HeadGoal_12 = ((MR_Word) ((MR_hl_field(1, Goals_10, (MR_Integer) 0))));
      MR_Word TailGoals_13 = ((MR_Word) ((MR_hl_field(1, Goals_10, (MR_Integer) 1))));

      if ((TailGoals_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

        parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Var_18, HeadGoal_12);
      }
      else
      {
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        MR_Word next_value_of_Goals_10;

        parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Var_21, HeadGoal_12);
        parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "orelse");
        parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
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
        MR_Integer Indent1_108;

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
        Indent1_108 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_108, Stream_7);
        parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_108, Goal_10);
        parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Goal_10, (MR_Integer) 0))))) {
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
            MR_Integer Indent1_108;

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
            Indent1_108 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
            parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_108, Stream_7);
            parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_7, VarSet_8, Indent1_108, Goal_10);
            parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_9, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Integer Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12)
{
  while (MR_TRUE)
  {
    MR_Integer Indent1_14 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
    MR_Box conv0_STATE_VARIABLE_IO_20_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), Indent1_14, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20_20);
    parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_8, VarSet_9, Indent1_14, GoalA_11);
    if (!((GoalsB_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GoalB_15 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 0))));
      MR_Word GoalsC_16 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 1))));
      MR_Word next_value_of_GoalA_11;
      MR_Word next_value_of_GoalsB_12;

      parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_10, Stream_8);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&\n");
      // direct tailcall eliminated
      ;
      next_value_of_GoalA_11 = GoalB_15;
      next_value_of_GoalsB_12 = GoalsC_16;
      GoalA_11 = next_value_of_GoalA_11;
      GoalsB_12 = next_value_of_GoalsB_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_conj_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Integer Indent_10,
  MR_Word GoalA_11,
  MR_Word GoalsB_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(Stream_8, VarSet_9, Indent_10, GoalA_11);
    if (!((GoalsB_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GoalB_14 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 0))));
      MR_Word GoalsC_15 = ((MR_Word) ((MR_hl_field(1, GoalsB_12, (MR_Integer) 1))));
      MR_Word next_value_of_GoalA_11;
      MR_Word next_value_of_GoalsB_12;

      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
      parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent_10, Stream_8);
      // direct tailcall eliminated
      ;
      next_value_of_GoalA_11 = GoalB_14;
      next_value_of_GoalsB_12 = GoalsC_15;
      GoalA_11 = next_value_of_GoalA_11;
      GoalsB_12 = next_value_of_GoalsB_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Disjunct_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Disjuncts_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer Indent1_19;
      MR_Word next_value_of_HeadVar__4_4;

      parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(HeadVar__3_3, HeadVar__1_1);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ";");
      Indent1_19 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
      parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(Indent1_19, HeadVar__1_1);
      parse_tree__parse_tree_out_clause__mercury_output_goal_6_p_0(HeadVar__1_1, HeadVar__2_2, Indent1_19, Disjunct_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Disjuncts_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
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
          MR_Word Base_10 = ((MR_Word) ((MR_hl_field(0, TraceExpr_8, (MR_Integer) 0))));

          parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_4_p_0(Base_10, Stream_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "not(");
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho4_5_p_0(Stream_6, TraceExprA_11);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

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
        MR_String FlagName_8 = ((MR_String) ((MR_hl_field(0, CompileTime_5, (MR_Integer) 0))));
        MR_String Var_19;

        Var_19 = mercury__term_io__quoted_string_1_f_0(FlagName_8);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "flag(");
        mercury__io__write_string_4_p_0(Stream_6, Var_19);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Grade_9 = ((MR_Unsigned) ((MR_hl_field(1, CompileTime_5, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String GradeName_10;

        parse_tree__prog_data__parse_trace_grade_name_2_p_1(&GradeName_10, Grade_9);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "grade(");
        mercury__io__write_string_4_p_0(Stream_6, GradeName_10);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Level_11 = ((MR_Unsigned) ((MR_hl_field(2, CompileTime_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_String LevelStr_12;

        switch (Level_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            LevelStr_12 = (MR_String) "deep";
            break;
          case (MR_Integer) 0:
            LevelStr_12 = (MR_String) "shallow";
            break;
        }
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "tracelevel(");
        mercury__io__write_string_4_p_0(Stream_6, LevelStr_12);
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
          MR_Word Base_10 = ((MR_Word) ((MR_hl_field(0, TraceExpr_8, (MR_Integer) 0))));
          MR_String EnvVarName_42 = (MR_String) (Base_10);
          MR_Box conv0_STATE_VARIABLE_IO_12_45;

          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "env(");
          mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_4[0]), ((MR_Box) (Stream_6)), EnvVarName_42, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_45);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_11 = ((MR_Word) ((MR_hl_field(1, TraceExpr_8, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "not(");
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho3_5_p_0(Stream_6, TraceExprA_11);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 2))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 1))));
          MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(2, TraceExpr_8, (MR_Integer) 0))) & (MR_Integer) 1);

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
      MR_Word SVar_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word SVars_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Box conv0_STATE_VARIABLE_IO_27_27;

      mercury__io__write_string_4_p_0(Stream_1, BangPrefix_4);
      parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), VarSet_2, VarNamePrint_3, SVar_19, ((MR_Box) (Stream_1)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_27_27);
      if (!((SVars_20 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word SVar_42;
        MR_Word SVars_43;
        MR_Box conv1_STATE_VARIABLE_IO_27_49;

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
        SVar_42 = ((MR_Word) ((MR_hl_field(1, SVars_20, (MR_Integer) 0))));
        SVars_43 = ((MR_Word) ((MR_hl_field(1, SVars_20, (MR_Integer) 1))));
        mercury__io__write_string_4_p_0(Stream_1, BangPrefix_4);
        parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_3[1]), VarSet_2, VarNamePrint_3, SVar_42, ((MR_Box) (Stream_1)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27_49);
        if (!((SVars_43 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word next_value_of_HeadVar__5_5;

          mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = SVars_43;
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
  MR_Word TypeInfo_for_T_31,
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
    parse_tree__parse_tree_out_term__mercury_output_vars_vs_6_p_0(TypeInfo_for_T_31, VarSet_8, (MR_Integer) 0, Vars_9, Stream_7);
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
      parse_tree__parse_tree_out_misc__mercury_output_state_vars_6_p_0(TypeInfo_for_T_31, VarSet_8, (MR_Integer) 0, StateVars_10, Stream_7);
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
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(1, SymName_9, (MR_Integer) 0))));
    MR_String PredName_13 = ((MR_String) ((MR_hl_field(1, SymName_9, (MR_Integer) 1))));
    MR_Word SubTerm_14;
    MR_Word Var_21;
    MR_Word Var_22;

    parse_tree__parse_tree_out_sym_name__mercury_output_bracketed_sym_name_ngt_5_p_0((MR_Integer) 0, ModuleName_12, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (PredName_13));
    }
    Var_22 = mercury__term_context__dummy_context_0_f_0();
    {
      SubTerm_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubTerm_14, 0) = ((MR_Box) (Var_21));
      MR_hl_field(0, SubTerm_14, 1) = ((MR_Box) (Term_10));
      MR_hl_field(0, SubTerm_14, 2) = ((MR_Box) (Var_22));
    }
    parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, (MR_Integer) 0, SubTerm_14, Stream_7);
  }
  else
  {
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String PredName_31 = ((MR_String) ((MR_hl_field(0, SymName_9, (MR_Integer) 0))));
    MR_Word SubTerm_32;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (PredName_31));
    }
    Var_27 = mercury__term_context__dummy_context_0_f_0();
    {
      SubTerm_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubTerm_32, 0) = ((MR_Box) (Var_26));
      MR_hl_field(0, SubTerm_32, 1) = ((MR_Box) (Term_10));
      MR_hl_field(0, SubTerm_32, 2) = ((MR_Box) (Var_27));
    }
    parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, (MR_Integer) 0, (MR_Integer) 0, SubTerm_32, Stream_7);
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
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, PODVar_10, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "!.");
    parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, VarNamePrint_9, Var_19, Stream_7);
  }
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, PODVar_10, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, VarNamePrint_9, Var_12, Stream_7);
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
    Var_14 = parse_tree__parse_tree_out_misc__goal_warning_to_string_1_f_0(HeadWarning_7);
    mercury__io__write_string_4_p_0(Stream_6, Var_14);
    if (!((TailWarnings_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadTailWarning_10 = ((MR_Word) ((MR_hl_field(1, TailWarnings_8, (MR_Integer) 0))));
      MR_Word TailTailWarnings_11 = ((MR_Word) ((MR_hl_field(1, TailWarnings_8, (MR_Integer) 1))));
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
